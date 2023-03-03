module.exports = grammar({
  name: "asm6502",

  extras: ($) => [$.comment, /\s/],

  rules: {
    asm: ($) => repeat(choice($.inst, $.macro, $.pseudo_var, $.ctrl_cmd)),

    macro: ($) => choice($.constant_assignment, $.label_assignment),

    inst: ($) =>
      choice(
        $.acc_opc,
        $.abs_opc,
        $.abs_x_opc,
        $.abs_y_opc,
        $.imm_opc,
        $.impl_opc,
        $.ind_opc,
        $.x_ind_opc,
        $.ind_y_opc,
        $.rel_opc,
        $.zpg_opc,
        $.zpg_x_opc,
        $.zpg_y_opc
      ),

    /*
     * ADDRESS MODES
     */

    /*
     * OPC A
     */
    acc_opc: ($) =>
      prec.left(
        choice(
          ...[$.asl_opc, $.rol_opc, $.ror_opc].map((op) =>
            seq(op, optional($.a_reg))
          )
        )
      ),

    /*
     * OPC $LLHH
     */
    abs_opc: ($) =>
      choice(
        ...[
          $.adc_opc,
          $.and_opc,
          $.asl_opc,
          $.bit_opc,
          $.cmp_opc,
          $.cpx_opc,
          $.cpy_opc,
          $.dec_opc,
          $.eor_opc,
          $.inc_opc,
          $.jmp_opc,
          $.jsr_opc,
          $.lda_opc,
          $.ldx_opc,
          $.ldy_opc,
          $.lsr_opc,
          $.ora_opc,
          $.rol_opc,
          $.ror_opc,
          $.sbc_opc,
          $.sta_opc,
          $.stx_opc,
          $.sty_opc,
        ].map((op) => seq(op, choice($.num_16, $.label)))
      ),

    /*
     * OPC $LLHH,X
     */
    abs_x_opc: ($) =>
      choice(
        ...[
          $.adc_opc,
          $.and_opc,
          $.asl_opc,
          $.cmp_opc,
          $.dec_opc,
          $.eor_opc,
          $.inc_opc,
          $.lda_opc,
          $.ldy_opc,
          $.lsr_opc,
          $.ora_opc,
          $.rol_opc,
          $.ror_opc,
          $.sbc_opc,
          $.sta_opc,
        ].map((op) => seq(op, $.num_16, ",", $.x_reg))
      ),

    /*
     * OPC $LLHH,Y
     */
    abs_y_opc: ($) =>
      choice(
        ...[
          $.adc_opc,
          $.and_opc,
          $.cmp_opc,
          $.eor_opc,
          $.lda_opc,
          $.ldx_opc,
          $.ora_opc,
          $.sbc_opc,
          $.sta_opc,
        ].map((op) => seq(op, $.num_16, ",", $.y_reg))
      ),

    /*
     * OPC #$BB
     */
    imm_opc: ($) =>
      choice(
        ...[
          $.adc_opc,
          $.and_opc,
          $.cmp_opc,
          $.cpx_opc,
          $.cpy_opc,
          $.eor_opc,
          $.lda_opc,
          $.ldx_opc,
          $.ldy_opc,
          $.lsr_opc,
          $.ora_opc,
          $.sbc_opc,
        ].map((op) => seq(op, $.imm_prefix, $.num_8))
      ),

    /*
     * OPC
     */
    impl_opc: ($) =>
      choice(
        $.brk_opc,
        $.clc_opc,
        $.cld_opc,
        $.cli_opc,
        $.clv_opc,
        $.dex_opc,
        $.dey_opc,
        $.inx_opc,
        $.iny_opc,
        $.nop_opc,
        $.pha_opc,
        $.php_opc,
        $.pla_opc,
        $.plp_opc,
        $.rti_opc,
        $.rts_opc,
        $.sec_opc,
        $.sed_opc,
        $.sei_opc,
        $.tax_opc,
        $.tay_opc,
        $.tsx_opc,
        $.txa_opc,
        $.tcs_opc,
        $.tya_opc
      ),

    /*
     * OPC ($LLHH)
     */
    ind_opc: ($) =>
      choice(...[$.jmp_opc].map((op) => seq(op, "(", $.num_16, ")"))),

    /*
     * OPC ($LL,X)
     */
    x_ind_opc: ($) =>
      choice(
        ...[
          $.adc_opc,
          $.and_opc,
          $.cmp_opc,
          $.eor_opc,
          $.lda_opc,
          $.ora_opc,
          $.sbc_opc,
          $.sta_opc,
        ].map((op) => seq(op, "(", $.num_8, ",", $.x_reg, ")"))
      ),

    /*
     * OPC ($LL),Y
     */
    ind_y_opc: ($) =>
      choice(
        ...[
          $.adc_opc,
          $.and_opc,
          $.cmp_opc,
          $.eor_opc,
          $.lda_opc,
          $.ora_opc,
          $.sbc_opc,
          $.sta_opc,
        ].map((op) => seq(op, "(", $.num_8, ")", ",", $.y_reg))
      ),

    /*
     * OPC $BB
     */
    rel_opc: ($) =>
      choice(
        ...[
          $.bcc_opc,
          $.bcs_opc,
          $.beq_opc,
          $.bmi_opc,
          $.bne_opc,
          $.bpl_opc,
          $.bvc_opc,
          $.bvs_opc,
        ].map((op) => seq(op, $.num_16))
      ),

    /*
     * OPC $LL
     */
    zpg_opc: ($) =>
      choice(
        ...[
          $.adc_opc,
          $.and_opc,
          $.asl_opc,
          $.bit_opc,
          $.cmp_opc,
          $.cpx_opc,
          $.cpy_opc,
          $.dec_opc,
          $.eor_opc,
          $.inc_opc,
          $.lda_opc,
          $.ldx_opc,
          $.ldy_opc,
          $.lsr_opc,
          $.ora_opc,
          $.rol_opc,
          $.ror_opc,
          $.sbc_opc,
          $.sta_opc,
          $.stx_opc,
          $.sty_opc,
        ].map((op) => seq(op, $.num_8))
      ),

    /*
     * OPC $LL,X
     */
    zpg_x_opc: ($) =>
      choice(
        ...[
          $.adc_opc,
          $.and_opc,
          $.asl_opc,
          $.cmp_opc,
          $.dec_opc,
          $.eor_opc,
          $.inc_opc,
          $.lda_opc,
          $.ldy_opc,
          $.lsr_opc,
          $.ora_opc,
          $.rol_opc,
          $.ror_opc,
          $.sbc_opc,
          $.sta_opc,
          $.sty_opc,
        ].map((op) => seq(op, $.num_8, ",", $.x_reg))
      ),

    /*
     * OPC $LL,Y
     */
    zpg_y_opc: ($) =>
      choice(
        ...[$.ldx_opc, $.stx_opc].map((op) => seq(op, $.num_8, ",", $.y_reg))
      ),

    /*
     * INSTRUCTIONS
     */

    adc_opc: ($) => /[Aa][Dd][Cc]/,
    and_opc: ($) => /[Aa][Nn][Dd]/,
    asl_opc: ($) => /[Aa][Ss][Ll]/,
    bcc_opc: ($) => /[Bb][Cc][Cc]/,
    bcs_opc: ($) => /[Bb][Cc][Ss]/,
    beq_opc: ($) => /[Bb][Ee][Qq]/,
    bit_opc: ($) => /[Bb][Ii][Tt]/,
    bmi_opc: ($) => /[Bb][Mm][Ii]/,
    bne_opc: ($) => /[Bb][Nn][Ee]/,
    bpl_opc: ($) => /[Bb][Pp][Ll]/,
    brk_opc: ($) => /[Bb][Rr][Kk]/,
    bvc_opc: ($) => /[Bb][Vv][Cc]/,
    bvs_opc: ($) => /[Bb][Vv][Ss]/,
    clc_opc: ($) => /[Cc][Ll][Cc]/,
    cld_opc: ($) => /[Cc][Ll][Dd]/,
    cli_opc: ($) => /[Cc][Ll][Ii]/,
    clv_opc: ($) => /[Cc][Ll][Vv]/,
    cmp_opc: ($) => /[Cc][Mm][Pp]/,
    cpx_opc: ($) => /[Cc][Pp][Xx]/,
    cpy_opc: ($) => /[Cc][Pp][Yy]/,
    dec_opc: ($) => /[Dd][Ee][Cc]/,
    dex_opc: ($) => /[Dd][Ee][Xx]/,
    dey_opc: ($) => /[Dd][Ee][Yy]/,
    eor_opc: ($) => /[Ee][Oo][Rr]/,
    inc_opc: ($) => /[Ii][Nn][Cc]/,
    inx_opc: ($) => /[Ii][Nn][Xx]/,
    iny_opc: ($) => /[Ii][Nn][Yy]/,
    jmp_opc: ($) => /[Jj][Mm][Pp]/,
    jsr_opc: ($) => /[Jj][Ss][Rr]/,
    lda_opc: ($) => /[Ll][Dd][Aa]/,
    ldx_opc: ($) => /[Ll][Dd][Xx]/,
    ldy_opc: ($) => /[Ll][Dd][Yy]/,
    lsr_opc: ($) => /[Ll][Ss][Rr]/,
    nop_opc: ($) => /[Nn][Oo][Pp]/,
    ora_opc: ($) => /[Oo][Rr][Aa]/,
    pha_opc: ($) => /[Pp][Hh][Aa]/,
    php_opc: ($) => /[Pp][Hh][Pp]/,
    pla_opc: ($) => /[Pp][Ll][Aa]/,
    plp_opc: ($) => /[Pp][Ll][Pp]/,
    rol_opc: ($) => /[Rr][Oo][Ll]/,
    ror_opc: ($) => /[Rr][Oo][Rr]/,
    rti_opc: ($) => /[Rr][Tt][Ii]/,
    rts_opc: ($) => /[Rr][Tt][Ss]/,
    sbc_opc: ($) => /[Ss][Bb][Cc]/,
    sec_opc: ($) => /[Ss][Ee][Cc]/,
    sed_opc: ($) => /[Ss][Ee][Dd]/,
    sei_opc: ($) => /[Ss][Ee][Ii]/,
    sta_opc: ($) => /[Ss][Tt][Aa]/,
    stx_opc: ($) => /[Ss][Tt][Xx]/,
    sty_opc: ($) => /[Ss][Tt][Yy]/,
    tax_opc: ($) => /[Tt][Aa][Xx]/,
    tay_opc: ($) => /[Tt][Aa][Yy]/,
    tsx_opc: ($) => /[Tt][Ss][Xx]/,
    txa_opc: ($) => /[Tt][Xx][Aa]/,
    tcs_opc: ($) => /[Tt][Cc][Ss]/,
    tya_opc: ($) => /[Tt][Yy][Aa]/,

    num_8: ($) => choice($.hex_num_8, $.dec_num_8, $.bin_num_8),

    hex_num_8: ($) =>
      choice(seq("$", /0*[0-9a-fA-F]{1,2}/), seq(/0*[0-9a-fA-F]{1,2}h/)),

    dec_num_8: ($) => /0*(25[0-5]|2[0-4][0-9]|[01]?[0-9]{1,2})/,
    bin_num_8: ($) => seq("%", /0*[01]{1,8}/),

    num_16: ($) => choice($.hex_num_16, $.dec_num_16, $.bin_num_16),

    hex_num_16: ($) => seq("$", /0*[0-9a-fA-F]{3,4}/),
    dec_num_16: ($) =>
      /0*(6553[0-5]|655[0-2]\d|65[0-4]\d{2}|6[0-4]\d{3}|[1-5]?\d{1,4})/,
    bin_num_16: ($) => seq("%", /0*[01]{9,16}/),

    /*
     * REGISTERS
     */

    a_reg: ($) => /[aA]/,
    x_reg: ($) => /[xX]/,
    y_reg: ($) => /[yY]/,

    /*
     * LABELS
     */
    label: ($) => seq(optional("@"), /[a-zA-z]/, /[a-zA-z0-9]*/),

    constant_assignment: ($) => seq($.label, "=", $.exp),

    label_assignment: ($) =>
      choice(
        seq($.label, ":=", choice($.num_8, $.num_16, $.label)),
        seq($.label, ":")
      ),

    comment: ($) => token(seq(";", /.*/)),

    imm_prefix: ($) => "#",

    /*
     * EXPRESSIONS
     */

    exp: ($) =>
      choice(
        $.num_32,
        $.label,
        $.pseudo_var,
        $.unary_pos_op,
        $.unary_neg_op,
        $.bitnot_op,
        $.lobyte_op,
        $.hibyte_op,
        $.bankbyte_op,
        $.mult_op,
        $.mod_op,
        $.bit_xor_op,
        $.shift_left_op,
        $.shift_right_op,
        $.add_op,
        $.sub_op,
        $.bit_or_op,
        $.eql_op,
        $.not_eql_op,
        $.lt_op,
        $.gt_op,
        $.lte_op,
        $.gte_op,
        $.bool_and_op,
        $.bool_xor_op,
        $.bool_or_op,
        $.bool_not_op,
        seq("(", $.exp, ")")
      ),

    unary_pos_op: ($) => prec.right(1, seq("+", $.exp)),

    unary_neg_op: ($) => prec.right(1, seq("-", $.exp)),

    bitnot_op: ($) => prec.left(1, seq(choice(".BITNOT", "~"), $.exp)),

    lobyte_op: ($) => prec.left(2, seq(choice(".LOBYTE", "<"), $.exp)),

    hibyte_op: ($) => prec.left(1, seq(choice(".HIBYTE", ">"), $.exp)),

    bankbyte_op: ($) => prec.right(1, seq(choice(".BANKBYTE", "^"), $.exp)),

    mult_op: ($) => prec.left(2, seq($.exp, "*", $.exp)),

    div_op: ($) => prec.left(2, seq($.exp, "/", $.exp)),

    mod_op: ($) => prec.left(2, seq($.exp, ".MOD", $.exp)),

    bit_and_op: ($) => prec.left(2, seq($.exp, choice(".BITAND", "&"), $.exp)),

    bit_xor_op: ($) => prec.left(2, seq($.exp, choice(".BITXOR", "^"), $.exp)),

    shift_left_op: ($) => prec.left(2, seq($.exp, choice(".SHL", "<<"), $.exp)),

    shift_right_op: ($) =>
      prec.left(2, seq($.exp, choice(".SHR", ">>"), $.exp)),

    add_op: ($) => prec.left(3, seq($.exp, "+", $.exp)),

    sub_op: ($) => prec.left(3, seq($.exp, "-", $.exp)),

    bit_or_op: ($) => prec.left(3, seq($.exp, choice(".BITOR", "|"), $.exp)),

    eql_op: ($) => prec.left(4, seq($.exp, "=", $.exp)),

    not_eql_op: ($) => prec.left(4, seq($.exp, "<>", $.exp)),

    lt_op: ($) => prec.left(4, seq($.exp, "<", $.exp)),

    gt_op: ($) => prec.left(4, seq($.exp, ">", $.exp)),

    lte_op: ($) => prec.left(4, seq($.exp, "<=", $.exp)),

    gte_op: ($) => prec.left(4, seq($.exp, ">=", $.exp)),

    bool_and_op: ($) => prec.left(5, seq($.exp, choice(".AND", "&&"), $.exp)),

    bool_xor_op: ($) => prec.left(5, seq($.exp, ".XOR", $.exp)),

    bool_or_op: ($) => prec.left(6, seq($.exp, choice(".OR", "||"), $.exp)),

    bool_not_op: ($) => prec.right(7, seq(choice(".NOT", "!"), $.exp)),

    num_32: ($) =>
      choice(
        /\d+/, // decimal
        seq("$", /[0-9a-fA-F]+/), // hex $ notation
        seq(/[0-9a-fA-F]+/, "h"), // hex h notation
        seq("%", /[0-1]+/) // binary
      ),

    /*
     * PSEUDO VARIABLES
     */

    star_pseudo_var: ($) => "*",
    asize_pseudo_var: ($) => /\.[Aa][Ss][Ii][Zz][Ee]/,
    cpu_pseudo_var: ($) => /\.[Cc][Pp][Uu]/,
    isize_pseudo_var: ($) => /\.[Ii][Ss][Ii][Zz][Ee]/,
    paramcount_pseudo_var: ($) => /\.[Pp][Aa][Rr][Aa][Mm][Cc][Oo][Uu][Nn][Tt]/,
    time_pseudo_var: ($) => /\.[Tt][Ii][Mm][Ee]/,
    version_pseudo_var: ($) => /\.[Vv][Ee][Rr][Ss][Ii][Oo][Nn]/,

    pseudo_var: ($) =>
      prec(
        1,
        choice(
          $.star_pseudo_var,
          $.asize_pseudo_var,
          $.cpu_pseudo_var,
          $.isize_pseudo_var,
          $.paramcount_pseudo_var,
          $.time_pseudo_var,
          $.version_pseudo_var
        )
      ),

    /*
     * CONTROL COMMANDS
     */

    a16_ctrl_cmd: ($) => /\.[Aa]16/,

    a8_ctrl_cmd: ($) => /\.[Aa]8/,

    addr_ctrl_cmd: ($) =>
      seq(/\.[Aa][Dd][Dd][Rr]/, $.exp, optional(repeat1(seq(",", $.exp)))),

    align_ctrl_cmd: ($) =>
      seq(/\.[Aa][Ll][Ii][Gg][Nn]/, $.exp, optional(seq(",", $.exp))),

    asciiz_ctrl_cmd: ($) =>
      seq(
        /\.[Aa][Ss][Cc][Ii][Ii][Zz]/,
        $.str,
        optional(repeat1(seq(",", $.str)))
      ),

    assert_ctrl_cmd: ($) =>
      seq(
        /\.[Aa][Ss][Ss][Ee][Rr][Tt]/,
        $.exp,
        ",",
        choice("warning", "error", "ldwarning", "lderror"),
        optional(seq(",", $.str))
      ),

    autoimport_ctrl_cmd: ($) =>
      seq(/\.[Aa][Uu][Tt][Oo][Ii][Mm][Pp][Oo][Rr][Tt]/, choice("+", "-")),

    bankbytes_ctrl_cmd: ($) =>
      seq(
        /\.[Bb][Aa][Nn][Kk][Bb][Yy][Tt][Ee][Ss]/,
        seq($.exp, optional(repeat1(seq(",", $.exp))))
      ),

    ctrl_cmd: ($) =>
      choice(
        $.a16_ctrl_cmd,
        $.a8_ctrl_cmd,
        $.addr_ctrl_cmd,
        $.align_ctrl_cmd,
        $.asciiz_ctrl_cmd,
        $.assert_ctrl_cmd,
        $.autoimport_ctrl_cmd,
        $.bankbytes_ctrl_cmd
      ),

    /*
     * CONSTANTS
     */
    str: ($) => /\"(?:\\.|[^\\"])*\"/,
  },
});
