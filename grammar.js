module.exports = grammar({
  name: "ca65",

  extras: ($) => [$.comment, /\s/],

  conflicts: ($) => [
    [$.operand_8, $.operand_16],
    [$.operand_8, $.operand_16, $.define_ctrl_cmd],
  ],

  rules: {
    ca65: ($) => repeat(choice($.label, $.inst, $.ctrl_cmd)),

    comment: ($) => token(seq(";", /.*/)),

    string: ($) => choice(/"[^"]*"/, /'[^']*'/),

    /**
     * Keywords
     */

    warning_keyword: ($) => /warning/i,
    error_keyword: ($) => /error/i,
    ldwarning_keyword: ($) => /ldwarning/i,
    lderror_keyword: ($) => /lderror/i,
    constructor_keyword: ($) => /constructor/i,
    destructor_keyword: ($) => /destructor/i,
    interruptor_keyword: ($) => /interruptor/i,

    /**
     * Registers.
     */

    /**
     * Accumulator.
     */
    acc_register: ($) => /a/i,

    /**
     * The X register.
     */
    x_register: ($) => /x/i,

    /**
     * The Y register.
     */
    y_register: ($) => /y/i,

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

    adc_opcode: ($) => /adc/i,
    and_opcode: ($) => /and/i,
    asl_opcode: ($) => /asl/i,
    bcc_opcode: ($) => /bcc/i,
    bcs_opcode: ($) => /bcs/i,
    beq_opcode: ($) => /beq/i,
    bit_opcode: ($) => /bit/i,
    bmi_opcode: ($) => /bmi/i,
    bne_opcode: ($) => /bne/i,
    bpl_opcode: ($) => /bpl/i,
    brk_opcode: ($) => /brk/i,
    bvc_opcode: ($) => /bvc/i,
    bvs_opcode: ($) => /bvs/i,
    clc_opcode: ($) => /clc/i,
    cld_opcode: ($) => /cld/i,
    cli_opcode: ($) => /cli/i,
    clv_opcode: ($) => /clv/i,
    cmp_opcode: ($) => /cmp/i,
    cpx_opcode: ($) => /cpx/i,
    cpy_opcode: ($) => /cpy/i,
    dec_opcode: ($) => /dec/i,
    dex_opcode: ($) => /dex/i,
    dey_opcode: ($) => /dey/i,
    eor_opcode: ($) => /eor/i,
    inc_opcode: ($) => /inc/i,
    inx_opcode: ($) => /inx/i,
    iny_opcode: ($) => /iny/i,
    jmp_opcode: ($) => /jmp/i,
    jsr_opcode: ($) => /jsr/i,
    lda_opcode: ($) => /lda/i,
    ldx_opcode: ($) => /ldx/i,
    ldy_opcode: ($) => /ldy/i,
    lsr_opcode: ($) => /lsr/i,
    nop_opcode: ($) => /nop/i,
    ora_opcode: ($) => /ora/i,
    pha_opcode: ($) => /pha/i,
    php_opcode: ($) => /php/i,
    pla_opcode: ($) => /pla/i,
    plp_opcode: ($) => /plp/i,
    rol_opcode: ($) => /rol/i,
    ror_opcode: ($) => /ror/i,
    rti_opcode: ($) => /rti/i,
    rts_opcode: ($) => /rts/i,
    sbc_opcode: ($) => /sbc/i,
    sec_opcode: ($) => /sec/i,
    sed_opcode: ($) => /sed/i,
    sei_opcode: ($) => /sei/i,
    sta_opcode: ($) => /sta/i,
    stx_opcode: ($) => /stx/i,
    sty_opcode: ($) => /sty/i,
    tax_opcode: ($) => /tax/i,
    tay_opcode: ($) => /tay/i,
    tsx_opcode: ($) => /tsx/i,
    txa_opcode: ($) => /txa/i,
    tcs_opcode: ($) => /tcs/i,
    tya_opcode: ($) => /tya/i,

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
        $.string,
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
        $.autoimport_ctrl_cmd,
        $.bankbytes_ctrl_cmd,
        $.bss_ctrl_cmd,
        $.byte_ctrl_cmd,
        $.case_ctrl_cmd,
        $.charmap_ctrl_cmd,
        $.code_ctrl_cmd,
        $.condes_ctrl_cmd,
        $.constructor_ctrl_cmd,
        $.data_ctrl_cmd,
        $.dbyt_ctrl_cmd,
        $.debuginfo_ctrl_cmd,
        $.define_ctrl_cmd,
        $.delmac_ctrl_cmd,
        $.destructor_ctrl_cmd,
        $.dword_ctrl_cmd,
        $.else_ctrl_cmd,
        $.elseif_ctrl_cmd,
        $.end_ctrl_cmd,
        $.endif_ctrl_cmd,
        $.endmacro_ctrl_cmd,
        $.endrepeat_ctrl_cmd,
        $.endscope_ctrl_cmd,
        $.endstruct_ctrl_cmd,
        $.endunion_ctrl_cmd,
        $.enum_ctrl_cmd,
        $.error_ctrl_cmd,
        $.exitmacro_ctrl_cmd,
        $.export_ctrl_cmd,
        $.exportzp_ctrl_cmd,
        $.faraddr_ctrl_cmd,
      ),

    /**
     * .A16
     *
     * @see {@link https://cc65.github.io/doc/ca65.html#ss11.1}
     */
    a16_ctrl_cmd: ($) => /\.a16/i,

    /**
     * .a8
     *
     * @see {@link https://cc65.github.io/doc/ca65.html#ss11.2}
     */
    a8_ctrl_cmd: ($) => /\.a8/i,

    /**
     * .ADDR
     *
     * @see {@link https://cc65.github.io/doc/ca65.html#ss11.3}
     */
    addr_ctrl_cmd: ($) =>
      seq(/\.addr/i, $.operand_16, repeat(seq(",", $.operand_16))),

    /**
     * .ALIGN
     *
     * @see {@link https://cc65.github.io/doc/ca65.html#ss11.4}
     */
    align_ctrl_cmd: ($) =>
      seq(
        /\.align/i,
        choice($.operand_8, $.operand_16),
        optional(seq(",", choice($.operand_8, $.operand_16))),
      ),

    /**
     * .ASCIIZ
     *
     * @see {@link https://cc65.github.io/doc/ca65.html#ss11.5}
     */
    asciiz_ctrl_cmd: ($) =>
      seq(/\.asciiz/i, $.string, optional(repeat(seq(",", $.string)))),

    /**
     * .ASSERT
     *
     * @see {@link https://cc65.github.io/doc/ca65.html#ss11.6}
     */
    assert_ctrl_cmd: ($) =>
      seq(
        /\.assert/i,
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
      seq(/\.autoimport/i, choice($.plus_symbol, $.sub_symbol)),

    /**
     * .BANKBYTES
     *
     * @see {@link https://cc65.github.io/doc/ca65.html#ss11.8}
     */
    bankbytes_ctrl_cmd: ($) =>
      seq(
        /\.bankbytes/i,
        $.expression,
        optional(repeat(seq(",", $.expression))),
      ),

    /**
     * .BSS
     *
     * @see {@link https://cc65.github.io/doc/ca65.html#ss11.9}
     */
    bss_ctrl_cmd: ($) => /\.bss/i,

    /**
     * .BYTE, .BYT
     *
     * @see {@link https://cc65.github.io/doc/ca65.html#ss11.10}
     */
    byte_ctrl_cmd: ($) =>
      seq(/\.byte?/i, $.expression, optional(repeat(seq(",", $.expression)))),

    /**
     * .CASE
     *
     * @see {@link https://cc65.github.io/doc/ca65.html#ss11.11}
     */
    case_ctrl_cmd: ($) => seq(/\.case/i, choice($.plus_symbol, $.sub_symbol)),

    /**
     * .CHARMAP
     *
     * @see {@link https://cc65.github.io/doc/ca65.html#ss11.12}
     */
    charmap_ctrl_cmd: ($) => seq(/\.charmap/i, $.expression, ",", $.expression),

    /**
     * .CODE
     *
     * @see {@link https://cc65.github.io/doc/ca65.html#ss11.13}
     */
    code_ctrl_cmd: ($) => /\.code/i,

    /**
     * .CONDES
     *
     * @see {@link https://cc65.github.io/doc/ca65.html#ss11.14}
     */
    condes_ctrl_cmd: ($) =>
      seq(
        /\.condes/i,
        $.symbol,
        ",",
        choice(
          $.constructor_keyword,
          $.destructor_keyword,
          $.interruptor_keyword,
          $.expression,
        ),
        optional(seq(",", $.expression)),
      ),

    /**
     * .CONSTRUCTOR
     *
     * @see {@link https://cc65.github.io/doc/ca65.html#ss11.15}
     */
    constructor_ctrl_cmd: ($) =>
      seq(/\.constructor/, $.symbol, optional(seq(",", $.expression))),

    /**
     * .DATA
     *
     * @see {@link https://cc65.github.io/doc/ca65.html#ss11.16}
     */
    data_ctrl_cmd: ($) => /\.data/i,

    /**
     * .DBYT
     *
     * @see {@link https://cc65.github.io/doc/ca65.html#ss11.17}
     */
    dbyt_ctrl_cmd: ($) =>
      seq(/\.dbyt/i, $.expression, optional(repeat(seq(",", $.expression)))),

    debuginfo_ctrl_cmd: ($) =>
      seq(/\.debuginfo/i, choice($.plus_symbol, $.sub_symbol)),

    /**
     * .DEFINE
     *
     * @see {@link https://cc65.github.io/doc/ca65.html#ss11.19}
     */
    define_ctrl_cmd: ($) =>
      seq(
        /\.define/i,
        $.symbol,
        optional(
          seq(
            "(",
            optional(seq($.symbol, optional(repeat(seq(",", $.symbol))))),
            ")",
          ),
        ),
        $.expression,
      ),

    /**
     * .DELMAC
     *
     * @see {@link https://cc65.github.io/doc/ca65.html#ss11.20}
     */
    delmac_ctrl_cmd: ($) => seq(choice(/\.delmac/i, /\.delmacro/), $.symbol),

    /**
     * .DESTRUCTOR
     *
     * @see {@link https://cc65.github.io/doc/ca65.html#ss11.21}
     */
    destructor_ctrl_cmd: ($) =>
      seq(/\.destructor/i, $.symbol, optional(seq(",", $.expression))),

    /**
     * .DWORD
     *
     * @see {@link https://cc65.github.io/doc/ca65.html#ss11.22}
     */
    dword_ctrl_cmd: ($) =>
      seq(/\.dword/i, $.expression, optional(repeat(seq(",", $.expression)))),

    /**
     * .ELSE
     *
     * @see {@link https://cc65.github.io/doc/ca65.html#ss11.23}
     */
    else_ctrl_cmd: ($) => /\.else/i,

    /**
     * .ELSEIF
     *
     * @see {@link https://cc65.github.io/doc/ca65.html#ss11.24}
     */
    elseif_ctrl_cmd: ($) => seq(/\.elseif/i, $.expression),

    /**
     * .END
     *
     * @see {@link https://cc65.github.io/doc/ca65.html#ss11.25}
     */
    end_ctrl_cmd: ($) => /\.end/i,

    /**
     * .ENDIF
     *
     * @see {@link https://cc65.github.io/doc/ca65.html#ss11.27}
     */
    endif_ctrl_cmd: ($) => /\.endif/i,

    /**
     * .ENDPROC
     *
     * @see {@link https://cc65.github.io/doc/ca65.html#ss11.28}
     */
    endproc_ctrl_cmd: ($) => /\.endproc/i,

    /**
     * .ENDMACRO/.ENDMAC
     *
     * @see {@link https://cc65.github.io/doc/ca65.html#ss11.29}
     */
    endmacro_ctrl_cmd: ($) => choice(/\.endmacro/i, /\.endmac/i),

    /**
     * .ENDREP/.ENDREPEAT
     *
     * @see {@link https://cc65.github.io/doc/ca65.html#ss11.30}
     */
    endrepeat_ctrl_cmd: ($) => choice(/\.endrep/i, /\.endrepeat/i),

    /**
     * .ENDSCOPE
     *
     * @see {@link https://cc65.github.io/doc/ca65.html#ss11.31}
     */
    endscope_ctrl_cmd: ($) => /\.endscope/i,

    /**
     * .ENDSTRUCT
     *
     * @see {@link https://cc65.github.io/doc/ca65.html#ss11.32}
     */
    endstruct_ctrl_cmd: ($) => /\.endstruct/i,

    /**
     * .ENDUNION
     *
     * @see {@link https://cc65.github.io/doc/ca65.html#ss11.33}
     */
    endunion_ctrl_cmd: ($) => /\.endunion/i,

    /**
     * .ENUM
     *
     * @see {@link https://cc65.github.io/doc/ca65.html#ss11.34}
     */
    enum_ctrl_cmd: ($) =>
      seq(
        /\.enum/i,
        optional($.enum_name),
        "\n",
        optional($.enum_body),
        /.endenum/i,
      ),

    enum_name: ($) => field("name", $.symbol),

    enum_body: ($) => field("body", repeat1($.enum_member)),

    enum_member: ($) =>
      seq(
        field("name", $.symbol),
        optional(seq("=", field("value", $.expression))),
      ),

    /**
     * .ERROR
     *
     * @see {@link https://cc65.github.io/doc/ca65.html#ss11.35}
     */
    error_ctrl_cmd: ($) => seq(/\.error/i, field("error", $.string)),

    /**
     * .EXITMAC/.EXITMACRO
     *
     * @see {@link https://cc65.github.io/doc/ca65.html#ss11.36}
     */
    exitmacro_ctrl_cmd: ($) => choice(/\.exitmac/i, /\.exitmacro/i),

    /**
     * .EXPORT
     *
     * @see {@link https://cc65.github.io/doc/ca65.html#ss11.37}
     */
    export_ctrl_cmd: ($) =>
      seq(/\.export/i, seq($.exportee), optional(repeat(seq(",", $.exportee)))),

    /**
     * .EXPORTZP
     *
     * @see {@link https://cc65.github.io/doc/ca65.html#ss11.38}
     */
    exportzp_ctrl_cmd: ($) =>
      seq(
        /\.exportzp/i,
        seq($.exportee),
        optional(repeat(seq(",", $.exportee))),
      ),

    exportee: ($) =>
      choice(
        $.symbol,
        seq($.label, $.symbol, optional(seq("=", $.expression))),
        seq($.symbol, ":=", $.expression),
      ),

    /**
     * .FARADDR
     *
     * @see {@link https://cc65.github.io/doc/ca65.html#ss11.39}
     */
    faraddr_ctrl_cmd: ($) =>
      seq(
        /\.faraddr/i,
        seq($.expression),
        optional(repeat(seq(",", $.expression))),
      ),

    plus_symbol: ($) => "+",
    sub_symbol: ($) => "-",
  },
});
