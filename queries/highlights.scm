; opc

[
 (adc_opc)
 (and_opc)
 (asl_opc)
 (bcc_opc)
 (bcs_opc)
 (beq_opc)
 (bit_opc)
 (bmi_opc)
 (bne_opc)
 (bpl_opc)
 (brk_opc)
 (bvc_opc)
 (bvs_opc)
 (clc_opc)
 (cld_opc)
 (cli_opc)
 (clv_opc)
 (cmp_opc)
 (cpx_opc)
 (cpy_opc)
 (dec_opc)
 (dex_opc)
 (dey_opc)
 (eor_opc)
 (inc_opc)
 (inx_opc)
 (iny_opc)
 (jmp_opc)
 (jsr_opc)
 (lda_opc)
 (ldx_opc)
 (ldy_opc)
 (lsr_opc)
 (nop_opc)
 (ora_opc)
 (pha_opc)
 (php_opc)
 (pla_opc)
 (plp_opc)
 (rol_opc)
 (ror_opc)
 (rti_opc)
 (rts_opc)
 (sbc_opc)
 (sec_opc)
 (sed_opc)
 (sei_opc)
 (sta_opc)
 (stx_opc)
 (sty_opc)
 (tax_opc)
 (tay_opc)
 (tsx_opc)
 (txa_opc)
 (tcs_opc)
 (tya_opc)
] @keyword

; numbers

(hex_num_8)  @keyword
(dec_num_8)  @keyword
(bin_num_8)  @keyword
(hex_num_16) @keyword
(dec_num_16) @keyword
(bin_num_16) @keyword

(comment) @comment

; punctuation

[
 "("
 ")"
] @punctuation.bracket

[
  ","
] @punctuation.delimiter

(imm_prefix)   @symbol

; registers

(a_reg) @constant.builtin
(x_reg) @constant.builtin
(y_reg) @constant.builtin

(label) @property

(constant_assignment) @constant
(label_assignment)    @constant

; operators

[
 "!"
 "&"
 "&&"
 "*"
 "+"
 "-"
 "/"
 "<"
 "<<"
 "<="
 "<>"
 "="
 ">"
 ">="
 ">>"
 "^"
 "|"
 "||"
 "~"
] @operator

[
 (asciiz_ctrl_cmd)
] @function.macro

[
 (star_pseudo_var)
 (asize_pseudo_var)
 (cpu_pseudo_var)
 (isize_pseudo_var)
 (paramcount_pseudo_var)
 (time_pseudo_var)
 (version_pseudo_var)
] @constant.macro

(str) @string
