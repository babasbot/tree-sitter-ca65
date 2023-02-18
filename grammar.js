module.exports = grammar({
  name: "a6502",
  rules: {
    asm: ($) => repeat($.inst),

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
    acc_opc: ($) => choice(),

    /*
     * OPC $LLHH
     */
    abs_opc: ($) => choice(
      seq($.adc_opc, $.num_16)
    ),

    /*
     * OPC $LLHH,X
     */
    abs_x_opc: ($) => choice(
      seq($.adc_opc, $.num_16, ",", $.x_reg)
    ),

    /*
     * OPC $LLHH,Y
     */
    abs_y_opc: ($) => choice(
      seq($.adc_opc, $.num_16, ",", $.y_reg)
    ),

    /*
     * OPC #$BB
     */
    imm_opc: ($) => choice(
      seq($.adc_opc, "#", $.num_8)
    ),

    /*
     * OPC
     */
    impl_opc: ($) => choice(),

    /*
     * OPC ($LLHH)
     */
    ind_opc: ($) => choice(),

    /*
     * OPC ($LL,X)
     */
    x_ind_opc: ($) => choice(
      seq($.adc_opc, "(", $.num_8, ",", $.x_reg, ")"),
    ),

    /*
     * OPC ($LL),Y
     */
    ind_y_opc: ($) => choice(
      seq($.adc_opc, "(", $.num_8, ")", ",", $.y_reg),
    ),

    /*
     * OPC $BB
     */
    rel_opc: ($) => choice(),

    /*
     * OPC $LL
     */
    zpg_opc: ($) => choice(
      seq($.adc_opc, $.num_8)
    ),

    /*
     * OPC $LL,X
     */
    zpg_x_opc: ($) => choice(
      seq($.adc_opc, $.num_8, ",", $.x_reg)
    ),

    /*
     * OPC $LL,Y
     */
    zpg_y_opc: ($) => choice(),

    /*
     * INSTRUCTIONS
     */

    adc_opc: ($) => /([Aa][Dd][Cc])/,
    and_opc: ($) => /AND/i, // and (with accumulator)
    asl_opc: ($) => /ASL/i, // arithmetic shift left
    bcc_opc: ($) => /BCC/i, // branch on carry clear
    bcs_opc: ($) => /BCS/i, // branch on carry set
    beq_opc: ($) => /BEQ/i, // branch on equal (zero set)
    bit_opc: ($) => /BIT/i, // bit test
    bmi_opc: ($) => /BMI/i, // branch on minus (negative set)
    bne_opc: ($) => /BNE/i, // branch on not equal (zero clear)
    bpl_opc: ($) => /BPL/i, // branch on plus (negative clear)
    brk_opc: ($) => /BRK/i, // break / interrupt
    bvc_opc: ($) => /BVC/i, // branch on overflow clear
    bvs_opc: ($) => /BVS/i, // branch on overflow set
    clc_opc: ($) => /CLC/i, // clear carry
    cld_opc: ($) => /CLD/i, // clear decimal
    cli_opc: ($) => /CLI/i, // clear interrupt disable
    clv_opc: ($) => /CLV/i, // clear overflow
    cmp_opc: ($) => /CMP/i, // compare (with accumulator)
    cpx_opc: ($) => /CPX/i, // compare with X
    cpy_opc: ($) => /CPY/i, // compare with Y
    dec_opc: ($) => /DEC/i, // decrement
    dex_opc: ($) => /DEX/i, // decrement X
    dey_opc: ($) => /DEY/i, // decrement Y
    eor_opc: ($) => /EOR/i, // exclusive or (with accumulator)
    inc_opc: ($) => /INC/i, // increment
    inx_opc: ($) => /INX/i, // increment X
    iny_opc: ($) => /INY/i, // increment Y
    jmp_opc: ($) => /JMP/i, // jump
    jsr_opc: ($) => /JSR/i, // jump subroutine
    lda_opc: ($) => /LDA/i, // load accumulator
    ldx_opc: ($) => /LDX/i, // load X
    ldy_opc: ($) => /LDY/i, // load Y
    lsr_opc: ($) => /LSR/i, // logical shift right
    nop_opc: ($) => /NOP/i, // no operation
    ora_opc: ($) => /ORA/i, // or with accumulator
    pha_opc: ($) => /PHA/i, // push accumulator
    php_opc: ($) => /PHP/i, // push processor status (SR)
    pla_opc: ($) => /PLA/i, // pull accumulator
    plp_opc: ($) => /PLP/i, // pull processor status (SR)
    rol_opc: ($) => /ROL/i, // rotate left
    ror_opc: ($) => /ROR/i, // rotate right
    rti_opc: ($) => /RTI/i, // return from interrupt
    rts_opc: ($) => /RTS/i, // return from subroutine
    sbc_opc: ($) => /SBC/i, // subtract with carry
    sec_opc: ($) => /SEC/i, // set carry
    sed_opc: ($) => /SED/i, // set decimal
    sei_opc: ($) => /SEI/i, // set interrupt disable
    sta_opc: ($) => /STA/i, // store accumulator
    stx_opc: ($) => /STX/i, // store X
    sty_opc: ($) => /STY/i, // store Y
    tax_opc: ($) => /TAX/i, // transfer accumulator to X
    tay_opc: ($) => /TAY/i, // transfer accumulator to Y
    tsx_opc: ($) => /TSX/i, // transfer stack pointer to X
    txa_opc: ($) => /TXA/i, // transfer X to accumulator
    tcs_opc: ($) => /TSX/i, // transfer X to stack pointer
    tya_opx: ($) => /TYA/i, // transfer Y to accumulator

    num_8: ($) => choice($.hex_num_8, $.dec_num_8, $.bin_num_8),

    hex_num_8: ($) => seq("$", /0*[0-9a-fA-F]{1,2}/),
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
  },
});
