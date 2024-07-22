module.exports = grammar({
  name: "ca65",

  extras: ($) => [$.comment, /\s/],

  conflicts: ($) => [[$.operand_8, $.operand_16]],

  rules: {
    ca65: ($) => repeat(choice($.label, $.inst, $.ctrl_cmd)),

    comment: ($) => token(seq(";", /.*/)),

    string: ($) => choice(/"[^"]*"/, /'[^']*'/),

    /**
     * Registers.
     */

    /**
     * Accumulator.
     */
    acc_register: ($) => /[aA]/,

    /**
     * The X register.
     */
    x_register: ($) => /[xX]/,

    /**
     * The Y register.
     */
    y_register: ($) => /[yY]/,

    label: ($) => /[A-Za-z_@][A-Za-z0-9_]*:/,

    symbol: ($) => /[A-Za-z_@][A-Za-z2-9_]*/,

    /**
     * Instructions
     */
    inst: ($) =>
      choice(
        /**
         * Implied Addressing Instruction.
         * Example: CLC
         */
        $.impl_addr_inst,

        /**
         * Accumulator Addressing Instruction.
         * Example: ROL A
         */
        $.acc_addr_inst,

        /**
         * Immediate Addressing Instruction.
         * Example: LDA #$07
         */
        $.imm_addr_inst,

        /**
         * Absolute Addressing Instruction.
         * Example: LDA $3010
         */
        $.abs_addr_inst,

        /**
         * Zero-Page Addressing Instruction.
         * Example: LDA $3010
         */
        $.zp_addr_inst,

        /**
         * Indexed Addressing Instruction: Absolute,X.
         * Example: LDA $3120,X
         */
        $.abs_x_addr_inst,

        /**
         * Indexed Addressing Instruction: Absolute,Y.
         * Example: LDX $8240,Y
         */
        $.abs_y_addr_inst,

        /**
         * Indexed Addressing Instruction: Zero-Page,X.
         * Example: LDA $80,X
         */
        $.zp_x_addr_inst,

        /**
         * Indexed Addressing Instruction: Zero-Page,Y.
         * Example: LDX $60,Y
         */
        $.zp_y_addr_inst,

        /**
         * Indirect Addressing Instruction.
         * Example: JMP ($FF82)
         */
        $.ind_addr_inst,

        /**
         * Pre-Indexed Indirect Addressing Instruction.
         * Example: LDA ($70,X)
         */
        $.ind_x_addr_inst,

        /**
         * Post-Indexed Indirect Addressing Instruction.
         * Example: LDA ($70),Y
         */
        $.ind_y_addr_inst,

        /**
         * Relative Addressing Instruction.
         * Example: BEQ $1005
         */
        $.rel_addr_inst,
      ),

    /**
     * Implied Addressing Instructions.
     * Example: OPC
     */
    impl_addr_inst: ($) =>
      choice(
        $.brk_opcode,
        $.clc_opcode,
        $.cld_opcode,
        $.cli_opcode,
        $.clv_opcode,
        $.dex_opcode,
        $.dey_opcode,
        $.inx_opcode,
        $.iny_opcode,
        $.nop_opcode,
        $.pha_opcode,
        $.php_opcode,
        $.pla_opcode,
        $.plp_opcode,
        $.rti_opcode,
        $.rts_opcode,
        $.sec_opcode,
        $.sed_opcode,
        $.sei_opcode,
        $.tax_opcode,
        $.tay_opcode,
        $.tsx_opcode,
        $.txa_opcode,
        $.tcs_opcode,
        $.tya_opcode,
      ),

    /**
     * Accumulator Addressing Instructions.
     * Example: OPC A
     */
    acc_addr_inst: ($) =>
      choice(
        ...[$.asl_opcode, $.rol_opcode, $.ror_opcode].map((opcode) =>
          seq(opcode, $.acc_register),
        ),
      ),

    /**
     * Immediate Addressing Instructions.
     * Example: OPC #$BB
     */
    imm_addr_inst: ($) =>
      choice(
        ...[
          $.adc_opcode,
          $.and_opcode,
          $.cmp_opcode,
          $.cpx_opcode,
          $.cpy_opcode,
          $.eor_opcode,
          $.lda_opcode,
          $.ldx_opcode,
          $.ldy_opcode,
          $.lsr_opcode,
          $.ora_opcode,
          $.sbc_opcode,
        ].map((opcode) => seq(opcode, $.imm_prefix, $.operand_8)),
      ),

    /**
     * Absolute Addressing Instructions.
     * Example: OPC $LLHH
     */
    abs_addr_inst: ($) =>
      choice(
        ...[
          $.adc_opcode,
          $.and_opcode,
          $.asl_opcode,
          $.bit_opcode,
          $.cmp_opcode,
          $.cpx_opcode,
          $.cpy_opcode,
          $.dec_opcode,
          $.eor_opcode,
          $.inc_opcode,
          $.jmp_opcode,
          $.jsr_opcode,
          $.lda_opcode,
          $.ldx_opcode,
          $.ldy_opcode,
          $.lsr_opcode,
          $.ora_opcode,
          $.rol_opcode,
          $.ror_opcode,
          $.sbc_opcode,
          $.sta_opcode,
          $.stx_opcode,
          $.sty_opcode,
        ].map((opcode) => seq(opcode, choice($.operand_16))),
      ),

    /**
     * Zero-Page Addressing Instructions.
     * Example: OPC $LL
     */
    zp_addr_inst: ($) =>
      choice(
        ...[
          $.adc_opcode,
          $.and_opcode,
          $.asl_opcode,
          $.bit_opcode,
          $.cmp_opcode,
          $.cpx_opcode,
          $.cpy_opcode,
          $.dec_opcode,
          $.eor_opcode,
          $.inc_opcode,
          $.lda_opcode,
          $.ldx_opcode,
          $.ldy_opcode,
          $.lsr_opcode,
          $.ora_opcode,
          $.rol_opcode,
          $.ror_opcode,
          $.sbc_opcode,
          $.sta_opcode,
          $.stx_opcode,
          $.sty_opcode,
        ].map((opcode) => seq(opcode, $.operand_8)),
      ),

    /**
     * Indexed Addressing Instructions: Absolute,X.
     * Example: OPC $LLHH,X
     */
    abs_x_addr_inst: ($) =>
      choice(
        ...[
          $.adc_opcode,
          $.and_opcode,
          $.asl_opcode,
          $.cmp_opcode,
          $.dec_opcode,
          $.eor_opcode,
          $.inc_opcode,
          $.lda_opcode,
          $.ldy_opcode,
          $.lsr_opcode,
          $.ora_opcode,
          $.rol_opcode,
          $.ror_opcode,
          $.sbc_opcode,
          $.sta_opcode,
        ].map((opcode) => seq(opcode, $.operand_16, ",", $.x_register)),
      ),

    /**
     * Indexed Addressing Instructions: Absolute,Y.
     * Example: OPC $LLHH,Y
     */
    abs_y_addr_inst: ($) =>
      choice(
        ...[
          $.adc_opcode,
          $.and_opcode,
          $.cmp_opcode,
          $.eor_opcode,
          $.lda_opcode,
          $.ldx_opcode,
          $.ora_opcode,
          $.sbc_opcode,
          $.sta_opcode,
        ].map((opcode) => seq(opcode, $.operand_16, ",", $.y_register)),
      ),

    /**
     * Indexed Addressing Instructions: Zero-Page,X.
     * Example: OPC $LL,X
     */
    zp_x_addr_inst: ($) =>
      choice(
        ...[
          $.adc_opcode,
          $.and_opcode,
          $.asl_opcode,
          $.cmp_opcode,
          $.dec_opcode,
          $.eor_opcode,
          $.inc_opcode,
          $.lda_opcode,
          $.ldy_opcode,
          $.lsr_opcode,
          $.ora_opcode,
          $.rol_opcode,
          $.ror_opcode,
          $.sbc_opcode,
          $.sta_opcode,
          $.sty_opcode,
        ].map((opcode) => seq(opcode, $.operand_8, ",", $.x_register)),
      ),

    /**
     * Indexed Addressing Instructions: Zero-Page,Y.
     * Example: OPC $LL,Y
     */
    zp_y_addr_inst: ($) =>
      choice(
        ...[$.ldx_opcode, $.stx_opcode].map((opcode) =>
          seq(opcode, $.operand_8, ",", $.y_register),
        ),
      ),

    /**
     * Indirect Addressing Instructions.
     * Example: OPC ($LLHH)
     */
    ind_addr_inst: ($) =>
      choice(
        ...[$.jmp_opcode].map((opcode) => seq(opcode, "(", $.operand_16, ")")),
      ),

    /**
     * Pre-Indexed Indirect Addressing Instruction.
     * OPC ($LL,X)
     */
    ind_x_addr_inst: ($) =>
      choice(
        ...[
          $.adc_opcode,
          $.and_opcode,
          $.cmp_opcode,
          $.eor_opcode,
          $.lda_opcode,
          $.ora_opcode,
          $.sbc_opcode,
          $.sta_opcode,
        ].map((opcode) =>
          seq(opcode, "(", $.operand_8, ",", $.x_register, ")"),
        ),
      ),

    /**
     * Post-Indexed Indirect Addressing Instructions.
     * Example: OPC ($LL),Y
     */
    ind_y_addr_inst: ($) =>
      choice(
        ...[
          $.adc_opcode,
          $.and_opcode,
          $.cmp_opcode,
          $.eor_opcode,
          $.lda_opcode,
          $.ora_opcode,
          $.sbc_opcode,
          $.sta_opcode,
        ].map((opcode) =>
          seq(opcode, "(", $.operand_8, ")", ",", $.y_register),
        ),
      ),

    /**
     * Relative Addressing Instruction.
     * Example: OPC $BB
     */
    rel_addr_inst: ($) =>
      choice(
        ...[
          $.bcc_opcode,
          $.bcs_opcode,
          $.beq_opcode,
          $.bmi_opcode,
          $.bne_opcode,
          $.bpl_opcode,
          $.bvc_opcode,
          $.bvs_opcode,
        ].map((opcode) => seq(opcode, $.operand_16)),
      ),

    /**
     * Opcodes
     */

    adc_opcode: ($) => /[Aa][Dd][Cc]/,
    and_opcode: ($) => /[Aa][Nn][Dd]/,
    asl_opcode: ($) => /[Aa][Ss][Ll]/,
    bcc_opcode: ($) => /[Bb][Cc][Cc]/,
    bcs_opcode: ($) => /[Bb][Cc][Ss]/,
    beq_opcode: ($) => /[Bb][Ee][Qq]/,
    bit_opcode: ($) => /[Bb][Ii][Tt]/,
    bmi_opcode: ($) => /[Bb][Mm][Ii]/,
    bne_opcode: ($) => /[Bb][Nn][Ee]/,
    bpl_opcode: ($) => /[Bb][Pp][Ll]/,
    brk_opcode: ($) => /[Bb][Rr][Kk]/,
    bvc_opcode: ($) => /[Bb][Vv][Cc]/,
    bvs_opcode: ($) => /[Bb][Vv][Ss]/,
    clc_opcode: ($) => /[Cc][Ll][Cc]/,
    cld_opcode: ($) => /[Cc][Ll][Dd]/,
    cli_opcode: ($) => /[Cc][Ll][Ii]/,
    clv_opcode: ($) => /[Cc][Ll][Vv]/,
    cmp_opcode: ($) => /[Cc][Mm][Pp]/,
    cpx_opcode: ($) => /[Cc][Pp][Xx]/,
    cpy_opcode: ($) => /[Cc][Pp][Yy]/,
    dec_opcode: ($) => /[Dd][Ee][Cc]/,
    dex_opcode: ($) => /[Dd][Ee][Xx]/,
    dey_opcode: ($) => /[Dd][Ee][Yy]/,
    eor_opcode: ($) => /[Ee][Oo][Rr]/,
    inc_opcode: ($) => /[Ii][Nn][Cc]/,
    inx_opcode: ($) => /[Ii][Nn][Xx]/,
    iny_opcode: ($) => /[Ii][Nn][Yy]/,
    jmp_opcode: ($) => /[Jj][Mm][Pp]/,
    jsr_opcode: ($) => /[Jj][Ss][Rr]/,
    lda_opcode: ($) => /[Ll][Dd][Aa]/,
    ldx_opcode: ($) => /[Ll][Dd][Xx]/,
    ldy_opcode: ($) => /[Ll][Dd][Yy]/,
    lsr_opcode: ($) => /[Ll][Ss][Rr]/,
    nop_opcode: ($) => /[Nn][Oo][Pp]/,
    ora_opcode: ($) => /[Oo][Rr][Aa]/,
    pha_opcode: ($) => /[Pp][Hh][Aa]/,
    php_opcode: ($) => /[Pp][Hh][Pp]/,
    pla_opcode: ($) => /[Pp][Ll][Aa]/,
    plp_opcode: ($) => /[Pp][Ll][Pp]/,
    rol_opcode: ($) => /[Rr][Oo][Ll]/,
    ror_opcode: ($) => /[Rr][Oo][Rr]/,
    rti_opcode: ($) => /[Rr][Tt][Ii]/,
    rts_opcode: ($) => /[Rr][Tt][Ss]/,
    sbc_opcode: ($) => /[Ss][Bb][Cc]/,
    sec_opcode: ($) => /[Ss][Ee][Cc]/,
    sed_opcode: ($) => /[Ss][Ee][Dd]/,
    sei_opcode: ($) => /[Ss][Ee][Ii]/,
    sta_opcode: ($) => /[Ss][Tt][Aa]/,
    stx_opcode: ($) => /[Ss][Tt][Xx]/,
    sty_opcode: ($) => /[Ss][Tt][Yy]/,
    tax_opcode: ($) => /[Tt][Aa][Xx]/,
    tay_opcode: ($) => /[Tt][Aa][Yy]/,
    tsx_opcode: ($) => /[Tt][Ss][Xx]/,
    txa_opcode: ($) => /[Tt][Xx][Aa]/,
    tcs_opcode: ($) => /[Tt][Cc][Ss]/,
    tya_opcode: ($) => /[Tt][Yy][Aa]/,

    /**
     * Operand with an 8-bit value.
     */
    operand_8: ($) => choice($.bin_8, $.dec_8, $.hex_8, $.symbol),

    /**
     * 8-bit binary length number.
     */
    bin_8: ($) => seq("%", /0*[01]{1,8}/),

    /**
     * 8-bit decimal length number.
     */
    dec_8: ($) => /0*(25[0-5]|2[0-4][0-9]|[01]?[0-9]{1,2})/,

    /**
     * 8-bit hexadecimal length number.
     */
    hex_8: ($) =>
      choice(
        seq(choice("$", "h"), /0*[0-9a-fA-F]{1,2}/),
        seq(/0*[0-9a-fA-F]{1,2}h/),
      ),

    /**
     * Operand with a 16-bit length value.
     */
    operand_16: ($) => choice($.bin_16, $.dec_16, $.hex_16, $.symbol),

    /**
     * 16-bit length binary number.
     */
    bin_16: ($) => seq("%", /0*[01]{9,16}/),

    /**
     * 16-bit length decimal number.
     */
    dec_16: ($) =>
      /0*(6553[0-5]|655[0-2]\d|65[0-4]\d{2}|6[0-4]\d{3}|[1-5]?\d{1,4})/,

    /**
     * 16-bit length hexadecimal number.
     */
    hex_16: ($) => seq(choice("$", "h"), /0*[0-9a-fA-F]{3,4}/),

    imm_prefix: ($) => "#",

    /**
     * EXPRESSIONS
     */
    expression: ($) =>
      choice(
        prec.left(8, seq("(", $.expression, ")")),
        $.operand_16,
        $.operand_8,
        $.unary_pos_exp,
        $.unary_neg_exp,
        $.unary_not_exp,
        $.unary_lobyte_exp,
        $.unary_hibyte_exp,
        $.unary_bankbyte_exp,
        $.mult_exp,
        $.div_exp,
        $.mod_exp,
        $.bit_and_exp,
        $.bit_xor_exp,
        $.shift_l_exp,
        $.shift_r_exp,
        $.add_exp,
        $.sub_exp,
        $.bit_or_exp,
        $.eq_cmp,
        $.neq_cmp,
        $.lt_cmp,
        $.gt_cmp,
        $.lte_cmp,
        $.gte_cmp,
        $.bool_and_exp,
        $.bool_xor_exp,
        $.bool_or_exp,
        $.bool_not_exp,
      ),

    /**
     * Unary positive
     */
    unary_pos_exp: ($) => prec.left(7, seq("+", $.expression)),

    /**
     * Unary negative
     */
    unary_neg_exp: ($) => prec.left(7, seq("-", $.expression)),

    /**
     * Unary bitwise not operator.
     */
    unary_not_exp: ($) =>
      prec.left(7, seq(choice(".BITNOT", "~"), $.expression)),

    /**
     * Unary low-byte operator.
     */
    unary_lobyte_exp: ($) =>
      prec.left(7, seq(choice(".LOBYTE", "<"), $.expression)),

    /**
     * Unary high-byte operator.
     */
    unary_hibyte_exp: ($) =>
      prec.left(7, seq(choice(".HIBYTE", ">"), $.expression)),

    /**
     * Unary bank-byte operator.
     */
    unary_bankbyte_exp: ($) =>
      prec.left(7, seq(choice(".BANKBYTE", "^"), $.expression)),

    /**
     * Multiplication term.
     */
    mult_exp: ($) => prec.left(6, seq($.expression, "*", $.expression)),

    /**
     * Division term.
     */
    div_exp: ($) => prec.left(6, seq($.expression, "/", $.expression)),

    /**
     * Modulo term.
     */
    mod_exp: ($) => prec.left(6, seq($.expression, ".MOD", $.expression)),

    /**
     * Bitwise and term.
     */
    bit_and_exp: ($) =>
      prec.left(6, seq($.expression, choice(".BITAND", "&"), $.expression)),

    /**
     * Bitwise xor term.
     */
    bit_xor_exp: ($) =>
      prec.left(6, seq($.expression, choice(".BITXOR", "^"), $.expression)),

    /**
     * Shift-left term.
     */
    shift_l_exp: ($) =>
      prec.left(6, seq($.expression, choice(".SHL", "<<"), $.expression)),

    /**
     * Shift-left term.
     */
    shift_r_exp: ($) =>
      prec.left(6, seq($.expression, choice(".SHR", ">>"), $.expression)),

    /**
     * Binary addition expression.
     */
    add_exp: ($) => prec.left(5, seq($.expression, "+", $.expression)),

    /**
     * Binary substraction expression.
     */
    sub_exp: ($) => prec.left(5, seq($.expression, "-", $.expression)),

    /**
     * Bitwise or expression.
     */
    bit_or_exp: ($) =>
      prec.left(5, seq($.expression, choice(".BITOR", "|"), $.expression)),

    /**
     * Equal comparison.
     */
    eq_cmp: ($) => prec.left(4, seq($.expression, "=", $.expression)),

    /**
     * Not Equal comparison.
     */
    neq_cmp: ($) => prec.left(4, seq($.expression, "<>", $.expression)),

    /**
     * Less than comparison.
     */
    lt_cmp: ($) => prec.left(4, seq($.expression, "<", $.expression)),

    /**
     * Greater than comparison.
     */
    gt_cmp: ($) => prec.left(4, seq($.expression, ">", $.expression)),

    /**
     * Less than equal comparison.
     */
    lte_cmp: ($) => prec.left(4, seq($.expression, "<=", $.expression)),

    /**
     * Greater than equal comparison.
     */
    gte_cmp: ($) => prec.left(4, seq($.expression, ">=", $.expression)),

    /**
     * Boolean AND
     */
    bool_and_exp: ($) =>
      prec.left(3, seq($.expression, choice(".AND", "&&"), $.expression)),

    /**
     * Boolean XOR
     */
    bool_xor_exp: ($) => prec.left(3, seq($.expression, ".XOR", $.expression)),

    /**
     * Boolean OR
     */
    bool_or_exp: ($) =>
      prec.left(2, seq($.expression, choice(".OR", "||"), $.expression)),

    /**
     * Boolean not.
     */
    bool_not_exp: ($) => prec.left(1, seq(choice(".NOT", "!"), $.expression)),

    /**
     * Control commands
     */

    ctrl_cmd: ($) =>
      choice(
        $.a16_ctrl_cmd,
        $.a8_ctrl_cmd,
        $.addr_ctrl_cmd,
        $.align_ctrl_cmd,
        $.asciiz_ctrl_cmd,
        $.assert_ctrl_cmd,
      ),

    /**
     * .a16
     */
    a16_ctrl_cmd: ($) => /\.[aA]16/,

    /**
     * .a8
     */
    a8_ctrl_cmd: ($) => /\.[aA]8/,

    /**
     * .addr
     */
    addr_ctrl_cmd: ($) =>
      seq(/\.[aA][dD][dD][rR]/, $.operand_16, repeat(seq(",", $.operand_16))),

    /**
     * .addr
     */
    align_ctrl_cmd: ($) =>
      seq(
        /\.[aA][lL][iI][gG][nN]/,
        choice($.operand_8, $.operand_16),
        optional(seq(",", choice($.operand_8, $.operand_16))),
      ),

    /**
     * .asciiz
     */
    asciiz_ctrl_cmd: ($) =>
      seq(
        /\.[aA][sS][cC][iI][iI][zZ]/,
        $.string,
        optional(repeat(seq(",", $.string))),
      ),

    /**
     * .assert
     *
     * https://cc65.github.io/doc/ca65.html#ss11.6
     */
    assert_ctrl_cmd: ($) =>
      seq(
        /\.[aA][sS][sS][eE][rR][tT]/,
        $.expression,
        ",",
        choice(
          $.warning_keyword,
          $.error_keyword,
          $.ldwarning_keyword,
          $.lderror_keyword,
        ),
        ",",
        $.string,
      ),

    /**
     * .AUTOIMPORT
     *
     * @see {@link https://cc65.github.io/doc/ca65.html#ss11.7}
     */
    autoimport_ctrl_cmd: ($) =>
      seq(
        /\.[aA][uU][tT][oO][iI][mM][pP][oO][rR][tT]/,
        choice($.plus_symbol, $.sub_symbol),
      ),

    warning_keyword: ($) => "warning",
    error_keyword: ($) => "error",
    ldwarning_keyword: ($) => "ldwarning",
    lderror_keyword: ($) => "lderror",

    plus_symbol: ($) => "+",
    sub_symbol: ($) => "-",
  },
});
