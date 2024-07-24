#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 172
#define LARGE_STATE_COUNT 87
#define SYMBOL_COUNT 199
#define ALIAS_COUNT 0
#define TOKEN_COUNT 133
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  aux_sym_string_token1 = 2,
  aux_sym_string_token2 = 3,
  sym_warning_keyword = 4,
  sym_error_keyword = 5,
  sym_ldwarning_keyword = 6,
  sym_lderror_keyword = 7,
  sym_constructor_keyword = 8,
  sym_destructor_keyword = 9,
  sym_interruptor_keyword = 10,
  sym_acc_register = 11,
  sym_x_register = 12,
  sym_y_register = 13,
  sym_label = 14,
  sym_symbol = 15,
  anon_sym_COMMA = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  sym_adc_opcode = 19,
  sym_and_opcode = 20,
  sym_asl_opcode = 21,
  sym_bcc_opcode = 22,
  sym_bcs_opcode = 23,
  sym_beq_opcode = 24,
  sym_bit_opcode = 25,
  sym_bmi_opcode = 26,
  sym_bne_opcode = 27,
  sym_bpl_opcode = 28,
  sym_brk_opcode = 29,
  sym_bvc_opcode = 30,
  sym_bvs_opcode = 31,
  sym_clc_opcode = 32,
  sym_cld_opcode = 33,
  sym_cli_opcode = 34,
  sym_clv_opcode = 35,
  sym_cmp_opcode = 36,
  sym_cpx_opcode = 37,
  sym_cpy_opcode = 38,
  sym_dec_opcode = 39,
  sym_dex_opcode = 40,
  sym_dey_opcode = 41,
  sym_eor_opcode = 42,
  sym_inc_opcode = 43,
  sym_inx_opcode = 44,
  sym_iny_opcode = 45,
  sym_jmp_opcode = 46,
  sym_jsr_opcode = 47,
  sym_lda_opcode = 48,
  sym_ldx_opcode = 49,
  sym_ldy_opcode = 50,
  sym_lsr_opcode = 51,
  sym_nop_opcode = 52,
  sym_ora_opcode = 53,
  sym_pha_opcode = 54,
  sym_php_opcode = 55,
  sym_pla_opcode = 56,
  sym_plp_opcode = 57,
  sym_rol_opcode = 58,
  sym_ror_opcode = 59,
  sym_rti_opcode = 60,
  sym_rts_opcode = 61,
  sym_sbc_opcode = 62,
  sym_sec_opcode = 63,
  sym_sed_opcode = 64,
  sym_sei_opcode = 65,
  sym_sta_opcode = 66,
  sym_stx_opcode = 67,
  sym_sty_opcode = 68,
  sym_tax_opcode = 69,
  sym_tay_opcode = 70,
  sym_tsx_opcode = 71,
  sym_txa_opcode = 72,
  sym_tcs_opcode = 73,
  sym_tya_opcode = 74,
  anon_sym_PERCENT = 75,
  aux_sym_bin_8_token1 = 76,
  sym_dec_8 = 77,
  anon_sym_DOLLAR = 78,
  anon_sym_h = 79,
  aux_sym_hex_8_token1 = 80,
  aux_sym_hex_8_token2 = 81,
  aux_sym_bin_16_token1 = 82,
  sym_dec_16 = 83,
  aux_sym_hex_16_token1 = 84,
  sym_imm_prefix = 85,
  anon_sym_PLUS = 86,
  anon_sym_DASH = 87,
  anon_sym_DOTBITNOT = 88,
  anon_sym_TILDE = 89,
  anon_sym_DOTLOBYTE = 90,
  anon_sym_LT = 91,
  anon_sym_DOTHIBYTE = 92,
  anon_sym_GT = 93,
  anon_sym_DOTBANKBYTE = 94,
  anon_sym_CARET = 95,
  anon_sym_STAR = 96,
  anon_sym_SLASH = 97,
  anon_sym_DOTMOD = 98,
  anon_sym_DOTBITAND = 99,
  anon_sym_AMP = 100,
  anon_sym_DOTBITXOR = 101,
  anon_sym_DOTSHL = 102,
  anon_sym_LT_LT = 103,
  anon_sym_DOTSHR = 104,
  anon_sym_GT_GT = 105,
  anon_sym_DOTBITOR = 106,
  anon_sym_PIPE = 107,
  anon_sym_EQ = 108,
  anon_sym_LT_GT = 109,
  anon_sym_LT_EQ = 110,
  anon_sym_GT_EQ = 111,
  anon_sym_DOTAND = 112,
  anon_sym_AMP_AMP = 113,
  anon_sym_DOTXOR = 114,
  anon_sym_DOTOR = 115,
  anon_sym_PIPE_PIPE = 116,
  anon_sym_DOTNOT = 117,
  anon_sym_BANG = 118,
  sym_a16_ctrl_cmd = 119,
  sym_a8_ctrl_cmd = 120,
  aux_sym_addr_ctrl_cmd_token1 = 121,
  aux_sym_align_ctrl_cmd_token1 = 122,
  aux_sym_asciiz_ctrl_cmd_token1 = 123,
  aux_sym_assert_ctrl_cmd_token1 = 124,
  aux_sym_autoimport_ctrl_cmd_token1 = 125,
  aux_sym_bankbytes_ctrl_cmd_token1 = 126,
  sym_bss_ctrl_cmd = 127,
  aux_sym_byte_ctrl_cmd_token1 = 128,
  aux_sym_case_ctrl_cmd_token1 = 129,
  aux_sym_charmap_ctrl_cmd_token1 = 130,
  sym_code_ctrl_cmd = 131,
  aux_sym_condes_ctrl_cmd_token1 = 132,
  sym_ca65 = 133,
  sym_string = 134,
  sym_inst = 135,
  sym_impl_addr_inst = 136,
  sym_acc_addr_inst = 137,
  sym_imm_addr_inst = 138,
  sym_abs_addr_inst = 139,
  sym_zp_addr_inst = 140,
  sym_abs_x_addr_inst = 141,
  sym_abs_y_addr_inst = 142,
  sym_zp_x_addr_inst = 143,
  sym_zp_y_addr_inst = 144,
  sym_ind_addr_inst = 145,
  sym_ind_x_addr_inst = 146,
  sym_ind_y_addr_inst = 147,
  sym_rel_addr_inst = 148,
  sym_operand_8 = 149,
  sym_bin_8 = 150,
  sym_hex_8 = 151,
  sym_operand_16 = 152,
  sym_bin_16 = 153,
  sym_hex_16 = 154,
  sym_expression = 155,
  sym_unary_pos_exp = 156,
  sym_unary_neg_exp = 157,
  sym_unary_not_exp = 158,
  sym_unary_lobyte_exp = 159,
  sym_unary_hibyte_exp = 160,
  sym_unary_bankbyte_exp = 161,
  sym_mult_exp = 162,
  sym_div_exp = 163,
  sym_mod_exp = 164,
  sym_bit_and_exp = 165,
  sym_bit_xor_exp = 166,
  sym_shift_l_exp = 167,
  sym_shift_r_exp = 168,
  sym_add_exp = 169,
  sym_sub_exp = 170,
  sym_bit_or_exp = 171,
  sym_eq_cmp = 172,
  sym_neq_cmp = 173,
  sym_lt_cmp = 174,
  sym_gt_cmp = 175,
  sym_lte_cmp = 176,
  sym_gte_cmp = 177,
  sym_bool_and_exp = 178,
  sym_bool_xor_exp = 179,
  sym_bool_or_exp = 180,
  sym_bool_not_exp = 181,
  sym_ctrl_cmd = 182,
  sym_addr_ctrl_cmd = 183,
  sym_align_ctrl_cmd = 184,
  sym_asciiz_ctrl_cmd = 185,
  sym_assert_ctrl_cmd = 186,
  sym_autoimport_ctrl_cmd = 187,
  sym_bankbytes_ctrl_cmd = 188,
  sym_byte_ctrl_cmd = 189,
  sym_case_ctrl_cmd = 190,
  sym_charmap_ctrl_cmd = 191,
  sym_condes_ctrl_cmd = 192,
  sym_plus_symbol = 193,
  sym_sub_symbol = 194,
  aux_sym_ca65_repeat1 = 195,
  aux_sym_addr_ctrl_cmd_repeat1 = 196,
  aux_sym_asciiz_ctrl_cmd_repeat1 = 197,
  aux_sym_bankbytes_ctrl_cmd_repeat1 = 198,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [sym_warning_keyword] = "warning_keyword",
  [sym_error_keyword] = "error_keyword",
  [sym_ldwarning_keyword] = "ldwarning_keyword",
  [sym_lderror_keyword] = "lderror_keyword",
  [sym_constructor_keyword] = "constructor_keyword",
  [sym_destructor_keyword] = "destructor_keyword",
  [sym_interruptor_keyword] = "interruptor_keyword",
  [sym_acc_register] = "acc_register",
  [sym_x_register] = "x_register",
  [sym_y_register] = "y_register",
  [sym_label] = "label",
  [sym_symbol] = "symbol",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_adc_opcode] = "adc_opcode",
  [sym_and_opcode] = "and_opcode",
  [sym_asl_opcode] = "asl_opcode",
  [sym_bcc_opcode] = "bcc_opcode",
  [sym_bcs_opcode] = "bcs_opcode",
  [sym_beq_opcode] = "beq_opcode",
  [sym_bit_opcode] = "bit_opcode",
  [sym_bmi_opcode] = "bmi_opcode",
  [sym_bne_opcode] = "bne_opcode",
  [sym_bpl_opcode] = "bpl_opcode",
  [sym_brk_opcode] = "brk_opcode",
  [sym_bvc_opcode] = "bvc_opcode",
  [sym_bvs_opcode] = "bvs_opcode",
  [sym_clc_opcode] = "clc_opcode",
  [sym_cld_opcode] = "cld_opcode",
  [sym_cli_opcode] = "cli_opcode",
  [sym_clv_opcode] = "clv_opcode",
  [sym_cmp_opcode] = "cmp_opcode",
  [sym_cpx_opcode] = "cpx_opcode",
  [sym_cpy_opcode] = "cpy_opcode",
  [sym_dec_opcode] = "dec_opcode",
  [sym_dex_opcode] = "dex_opcode",
  [sym_dey_opcode] = "dey_opcode",
  [sym_eor_opcode] = "eor_opcode",
  [sym_inc_opcode] = "inc_opcode",
  [sym_inx_opcode] = "inx_opcode",
  [sym_iny_opcode] = "iny_opcode",
  [sym_jmp_opcode] = "jmp_opcode",
  [sym_jsr_opcode] = "jsr_opcode",
  [sym_lda_opcode] = "lda_opcode",
  [sym_ldx_opcode] = "ldx_opcode",
  [sym_ldy_opcode] = "ldy_opcode",
  [sym_lsr_opcode] = "lsr_opcode",
  [sym_nop_opcode] = "nop_opcode",
  [sym_ora_opcode] = "ora_opcode",
  [sym_pha_opcode] = "pha_opcode",
  [sym_php_opcode] = "php_opcode",
  [sym_pla_opcode] = "pla_opcode",
  [sym_plp_opcode] = "plp_opcode",
  [sym_rol_opcode] = "rol_opcode",
  [sym_ror_opcode] = "ror_opcode",
  [sym_rti_opcode] = "rti_opcode",
  [sym_rts_opcode] = "rts_opcode",
  [sym_sbc_opcode] = "sbc_opcode",
  [sym_sec_opcode] = "sec_opcode",
  [sym_sed_opcode] = "sed_opcode",
  [sym_sei_opcode] = "sei_opcode",
  [sym_sta_opcode] = "sta_opcode",
  [sym_stx_opcode] = "stx_opcode",
  [sym_sty_opcode] = "sty_opcode",
  [sym_tax_opcode] = "tax_opcode",
  [sym_tay_opcode] = "tay_opcode",
  [sym_tsx_opcode] = "tsx_opcode",
  [sym_txa_opcode] = "txa_opcode",
  [sym_tcs_opcode] = "tcs_opcode",
  [sym_tya_opcode] = "tya_opcode",
  [anon_sym_PERCENT] = "%",
  [aux_sym_bin_8_token1] = "bin_8_token1",
  [sym_dec_8] = "dec_8",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_h] = "h",
  [aux_sym_hex_8_token1] = "hex_8_token1",
  [aux_sym_hex_8_token2] = "hex_8_token2",
  [aux_sym_bin_16_token1] = "bin_16_token1",
  [sym_dec_16] = "dec_16",
  [aux_sym_hex_16_token1] = "hex_16_token1",
  [sym_imm_prefix] = "imm_prefix",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_DOTBITNOT] = ".BITNOT",
  [anon_sym_TILDE] = "~",
  [anon_sym_DOTLOBYTE] = ".LOBYTE",
  [anon_sym_LT] = "<",
  [anon_sym_DOTHIBYTE] = ".HIBYTE",
  [anon_sym_GT] = ">",
  [anon_sym_DOTBANKBYTE] = ".BANKBYTE",
  [anon_sym_CARET] = "^",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_DOTMOD] = ".MOD",
  [anon_sym_DOTBITAND] = ".BITAND",
  [anon_sym_AMP] = "&",
  [anon_sym_DOTBITXOR] = ".BITXOR",
  [anon_sym_DOTSHL] = ".SHL",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_DOTSHR] = ".SHR",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_DOTBITOR] = ".BITOR",
  [anon_sym_PIPE] = "|",
  [anon_sym_EQ] = "=",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_DOTAND] = ".AND",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_DOTXOR] = ".XOR",
  [anon_sym_DOTOR] = ".OR",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_DOTNOT] = ".NOT",
  [anon_sym_BANG] = "!",
  [sym_a16_ctrl_cmd] = "a16_ctrl_cmd",
  [sym_a8_ctrl_cmd] = "a8_ctrl_cmd",
  [aux_sym_addr_ctrl_cmd_token1] = "addr_ctrl_cmd_token1",
  [aux_sym_align_ctrl_cmd_token1] = "align_ctrl_cmd_token1",
  [aux_sym_asciiz_ctrl_cmd_token1] = "asciiz_ctrl_cmd_token1",
  [aux_sym_assert_ctrl_cmd_token1] = "assert_ctrl_cmd_token1",
  [aux_sym_autoimport_ctrl_cmd_token1] = "autoimport_ctrl_cmd_token1",
  [aux_sym_bankbytes_ctrl_cmd_token1] = "bankbytes_ctrl_cmd_token1",
  [sym_bss_ctrl_cmd] = "bss_ctrl_cmd",
  [aux_sym_byte_ctrl_cmd_token1] = "byte_ctrl_cmd_token1",
  [aux_sym_case_ctrl_cmd_token1] = "case_ctrl_cmd_token1",
  [aux_sym_charmap_ctrl_cmd_token1] = "charmap_ctrl_cmd_token1",
  [sym_code_ctrl_cmd] = "code_ctrl_cmd",
  [aux_sym_condes_ctrl_cmd_token1] = "condes_ctrl_cmd_token1",
  [sym_ca65] = "ca65",
  [sym_string] = "string",
  [sym_inst] = "inst",
  [sym_impl_addr_inst] = "impl_addr_inst",
  [sym_acc_addr_inst] = "acc_addr_inst",
  [sym_imm_addr_inst] = "imm_addr_inst",
  [sym_abs_addr_inst] = "abs_addr_inst",
  [sym_zp_addr_inst] = "zp_addr_inst",
  [sym_abs_x_addr_inst] = "abs_x_addr_inst",
  [sym_abs_y_addr_inst] = "abs_y_addr_inst",
  [sym_zp_x_addr_inst] = "zp_x_addr_inst",
  [sym_zp_y_addr_inst] = "zp_y_addr_inst",
  [sym_ind_addr_inst] = "ind_addr_inst",
  [sym_ind_x_addr_inst] = "ind_x_addr_inst",
  [sym_ind_y_addr_inst] = "ind_y_addr_inst",
  [sym_rel_addr_inst] = "rel_addr_inst",
  [sym_operand_8] = "operand_8",
  [sym_bin_8] = "bin_8",
  [sym_hex_8] = "hex_8",
  [sym_operand_16] = "operand_16",
  [sym_bin_16] = "bin_16",
  [sym_hex_16] = "hex_16",
  [sym_expression] = "expression",
  [sym_unary_pos_exp] = "unary_pos_exp",
  [sym_unary_neg_exp] = "unary_neg_exp",
  [sym_unary_not_exp] = "unary_not_exp",
  [sym_unary_lobyte_exp] = "unary_lobyte_exp",
  [sym_unary_hibyte_exp] = "unary_hibyte_exp",
  [sym_unary_bankbyte_exp] = "unary_bankbyte_exp",
  [sym_mult_exp] = "mult_exp",
  [sym_div_exp] = "div_exp",
  [sym_mod_exp] = "mod_exp",
  [sym_bit_and_exp] = "bit_and_exp",
  [sym_bit_xor_exp] = "bit_xor_exp",
  [sym_shift_l_exp] = "shift_l_exp",
  [sym_shift_r_exp] = "shift_r_exp",
  [sym_add_exp] = "add_exp",
  [sym_sub_exp] = "sub_exp",
  [sym_bit_or_exp] = "bit_or_exp",
  [sym_eq_cmp] = "eq_cmp",
  [sym_neq_cmp] = "neq_cmp",
  [sym_lt_cmp] = "lt_cmp",
  [sym_gt_cmp] = "gt_cmp",
  [sym_lte_cmp] = "lte_cmp",
  [sym_gte_cmp] = "gte_cmp",
  [sym_bool_and_exp] = "bool_and_exp",
  [sym_bool_xor_exp] = "bool_xor_exp",
  [sym_bool_or_exp] = "bool_or_exp",
  [sym_bool_not_exp] = "bool_not_exp",
  [sym_ctrl_cmd] = "ctrl_cmd",
  [sym_addr_ctrl_cmd] = "addr_ctrl_cmd",
  [sym_align_ctrl_cmd] = "align_ctrl_cmd",
  [sym_asciiz_ctrl_cmd] = "asciiz_ctrl_cmd",
  [sym_assert_ctrl_cmd] = "assert_ctrl_cmd",
  [sym_autoimport_ctrl_cmd] = "autoimport_ctrl_cmd",
  [sym_bankbytes_ctrl_cmd] = "bankbytes_ctrl_cmd",
  [sym_byte_ctrl_cmd] = "byte_ctrl_cmd",
  [sym_case_ctrl_cmd] = "case_ctrl_cmd",
  [sym_charmap_ctrl_cmd] = "charmap_ctrl_cmd",
  [sym_condes_ctrl_cmd] = "condes_ctrl_cmd",
  [sym_plus_symbol] = "plus_symbol",
  [sym_sub_symbol] = "sub_symbol",
  [aux_sym_ca65_repeat1] = "ca65_repeat1",
  [aux_sym_addr_ctrl_cmd_repeat1] = "addr_ctrl_cmd_repeat1",
  [aux_sym_asciiz_ctrl_cmd_repeat1] = "asciiz_ctrl_cmd_repeat1",
  [aux_sym_bankbytes_ctrl_cmd_repeat1] = "bankbytes_ctrl_cmd_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_warning_keyword] = sym_warning_keyword,
  [sym_error_keyword] = sym_error_keyword,
  [sym_ldwarning_keyword] = sym_ldwarning_keyword,
  [sym_lderror_keyword] = sym_lderror_keyword,
  [sym_constructor_keyword] = sym_constructor_keyword,
  [sym_destructor_keyword] = sym_destructor_keyword,
  [sym_interruptor_keyword] = sym_interruptor_keyword,
  [sym_acc_register] = sym_acc_register,
  [sym_x_register] = sym_x_register,
  [sym_y_register] = sym_y_register,
  [sym_label] = sym_label,
  [sym_symbol] = sym_symbol,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_adc_opcode] = sym_adc_opcode,
  [sym_and_opcode] = sym_and_opcode,
  [sym_asl_opcode] = sym_asl_opcode,
  [sym_bcc_opcode] = sym_bcc_opcode,
  [sym_bcs_opcode] = sym_bcs_opcode,
  [sym_beq_opcode] = sym_beq_opcode,
  [sym_bit_opcode] = sym_bit_opcode,
  [sym_bmi_opcode] = sym_bmi_opcode,
  [sym_bne_opcode] = sym_bne_opcode,
  [sym_bpl_opcode] = sym_bpl_opcode,
  [sym_brk_opcode] = sym_brk_opcode,
  [sym_bvc_opcode] = sym_bvc_opcode,
  [sym_bvs_opcode] = sym_bvs_opcode,
  [sym_clc_opcode] = sym_clc_opcode,
  [sym_cld_opcode] = sym_cld_opcode,
  [sym_cli_opcode] = sym_cli_opcode,
  [sym_clv_opcode] = sym_clv_opcode,
  [sym_cmp_opcode] = sym_cmp_opcode,
  [sym_cpx_opcode] = sym_cpx_opcode,
  [sym_cpy_opcode] = sym_cpy_opcode,
  [sym_dec_opcode] = sym_dec_opcode,
  [sym_dex_opcode] = sym_dex_opcode,
  [sym_dey_opcode] = sym_dey_opcode,
  [sym_eor_opcode] = sym_eor_opcode,
  [sym_inc_opcode] = sym_inc_opcode,
  [sym_inx_opcode] = sym_inx_opcode,
  [sym_iny_opcode] = sym_iny_opcode,
  [sym_jmp_opcode] = sym_jmp_opcode,
  [sym_jsr_opcode] = sym_jsr_opcode,
  [sym_lda_opcode] = sym_lda_opcode,
  [sym_ldx_opcode] = sym_ldx_opcode,
  [sym_ldy_opcode] = sym_ldy_opcode,
  [sym_lsr_opcode] = sym_lsr_opcode,
  [sym_nop_opcode] = sym_nop_opcode,
  [sym_ora_opcode] = sym_ora_opcode,
  [sym_pha_opcode] = sym_pha_opcode,
  [sym_php_opcode] = sym_php_opcode,
  [sym_pla_opcode] = sym_pla_opcode,
  [sym_plp_opcode] = sym_plp_opcode,
  [sym_rol_opcode] = sym_rol_opcode,
  [sym_ror_opcode] = sym_ror_opcode,
  [sym_rti_opcode] = sym_rti_opcode,
  [sym_rts_opcode] = sym_rts_opcode,
  [sym_sbc_opcode] = sym_sbc_opcode,
  [sym_sec_opcode] = sym_sec_opcode,
  [sym_sed_opcode] = sym_sed_opcode,
  [sym_sei_opcode] = sym_sei_opcode,
  [sym_sta_opcode] = sym_sta_opcode,
  [sym_stx_opcode] = sym_stx_opcode,
  [sym_sty_opcode] = sym_sty_opcode,
  [sym_tax_opcode] = sym_tax_opcode,
  [sym_tay_opcode] = sym_tay_opcode,
  [sym_tsx_opcode] = sym_tsx_opcode,
  [sym_txa_opcode] = sym_txa_opcode,
  [sym_tcs_opcode] = sym_tcs_opcode,
  [sym_tya_opcode] = sym_tya_opcode,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [aux_sym_bin_8_token1] = aux_sym_bin_8_token1,
  [sym_dec_8] = sym_dec_8,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_h] = anon_sym_h,
  [aux_sym_hex_8_token1] = aux_sym_hex_8_token1,
  [aux_sym_hex_8_token2] = aux_sym_hex_8_token2,
  [aux_sym_bin_16_token1] = aux_sym_bin_16_token1,
  [sym_dec_16] = sym_dec_16,
  [aux_sym_hex_16_token1] = aux_sym_hex_16_token1,
  [sym_imm_prefix] = sym_imm_prefix,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DOTBITNOT] = anon_sym_DOTBITNOT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_DOTLOBYTE] = anon_sym_DOTLOBYTE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_DOTHIBYTE] = anon_sym_DOTHIBYTE,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_DOTBANKBYTE] = anon_sym_DOTBANKBYTE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DOTMOD] = anon_sym_DOTMOD,
  [anon_sym_DOTBITAND] = anon_sym_DOTBITAND,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_DOTBITXOR] = anon_sym_DOTBITXOR,
  [anon_sym_DOTSHL] = anon_sym_DOTSHL,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_DOTSHR] = anon_sym_DOTSHR,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_DOTBITOR] = anon_sym_DOTBITOR,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_DOTAND] = anon_sym_DOTAND,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_DOTXOR] = anon_sym_DOTXOR,
  [anon_sym_DOTOR] = anon_sym_DOTOR,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_DOTNOT] = anon_sym_DOTNOT,
  [anon_sym_BANG] = anon_sym_BANG,
  [sym_a16_ctrl_cmd] = sym_a16_ctrl_cmd,
  [sym_a8_ctrl_cmd] = sym_a8_ctrl_cmd,
  [aux_sym_addr_ctrl_cmd_token1] = aux_sym_addr_ctrl_cmd_token1,
  [aux_sym_align_ctrl_cmd_token1] = aux_sym_align_ctrl_cmd_token1,
  [aux_sym_asciiz_ctrl_cmd_token1] = aux_sym_asciiz_ctrl_cmd_token1,
  [aux_sym_assert_ctrl_cmd_token1] = aux_sym_assert_ctrl_cmd_token1,
  [aux_sym_autoimport_ctrl_cmd_token1] = aux_sym_autoimport_ctrl_cmd_token1,
  [aux_sym_bankbytes_ctrl_cmd_token1] = aux_sym_bankbytes_ctrl_cmd_token1,
  [sym_bss_ctrl_cmd] = sym_bss_ctrl_cmd,
  [aux_sym_byte_ctrl_cmd_token1] = aux_sym_byte_ctrl_cmd_token1,
  [aux_sym_case_ctrl_cmd_token1] = aux_sym_case_ctrl_cmd_token1,
  [aux_sym_charmap_ctrl_cmd_token1] = aux_sym_charmap_ctrl_cmd_token1,
  [sym_code_ctrl_cmd] = sym_code_ctrl_cmd,
  [aux_sym_condes_ctrl_cmd_token1] = aux_sym_condes_ctrl_cmd_token1,
  [sym_ca65] = sym_ca65,
  [sym_string] = sym_string,
  [sym_inst] = sym_inst,
  [sym_impl_addr_inst] = sym_impl_addr_inst,
  [sym_acc_addr_inst] = sym_acc_addr_inst,
  [sym_imm_addr_inst] = sym_imm_addr_inst,
  [sym_abs_addr_inst] = sym_abs_addr_inst,
  [sym_zp_addr_inst] = sym_zp_addr_inst,
  [sym_abs_x_addr_inst] = sym_abs_x_addr_inst,
  [sym_abs_y_addr_inst] = sym_abs_y_addr_inst,
  [sym_zp_x_addr_inst] = sym_zp_x_addr_inst,
  [sym_zp_y_addr_inst] = sym_zp_y_addr_inst,
  [sym_ind_addr_inst] = sym_ind_addr_inst,
  [sym_ind_x_addr_inst] = sym_ind_x_addr_inst,
  [sym_ind_y_addr_inst] = sym_ind_y_addr_inst,
  [sym_rel_addr_inst] = sym_rel_addr_inst,
  [sym_operand_8] = sym_operand_8,
  [sym_bin_8] = sym_bin_8,
  [sym_hex_8] = sym_hex_8,
  [sym_operand_16] = sym_operand_16,
  [sym_bin_16] = sym_bin_16,
  [sym_hex_16] = sym_hex_16,
  [sym_expression] = sym_expression,
  [sym_unary_pos_exp] = sym_unary_pos_exp,
  [sym_unary_neg_exp] = sym_unary_neg_exp,
  [sym_unary_not_exp] = sym_unary_not_exp,
  [sym_unary_lobyte_exp] = sym_unary_lobyte_exp,
  [sym_unary_hibyte_exp] = sym_unary_hibyte_exp,
  [sym_unary_bankbyte_exp] = sym_unary_bankbyte_exp,
  [sym_mult_exp] = sym_mult_exp,
  [sym_div_exp] = sym_div_exp,
  [sym_mod_exp] = sym_mod_exp,
  [sym_bit_and_exp] = sym_bit_and_exp,
  [sym_bit_xor_exp] = sym_bit_xor_exp,
  [sym_shift_l_exp] = sym_shift_l_exp,
  [sym_shift_r_exp] = sym_shift_r_exp,
  [sym_add_exp] = sym_add_exp,
  [sym_sub_exp] = sym_sub_exp,
  [sym_bit_or_exp] = sym_bit_or_exp,
  [sym_eq_cmp] = sym_eq_cmp,
  [sym_neq_cmp] = sym_neq_cmp,
  [sym_lt_cmp] = sym_lt_cmp,
  [sym_gt_cmp] = sym_gt_cmp,
  [sym_lte_cmp] = sym_lte_cmp,
  [sym_gte_cmp] = sym_gte_cmp,
  [sym_bool_and_exp] = sym_bool_and_exp,
  [sym_bool_xor_exp] = sym_bool_xor_exp,
  [sym_bool_or_exp] = sym_bool_or_exp,
  [sym_bool_not_exp] = sym_bool_not_exp,
  [sym_ctrl_cmd] = sym_ctrl_cmd,
  [sym_addr_ctrl_cmd] = sym_addr_ctrl_cmd,
  [sym_align_ctrl_cmd] = sym_align_ctrl_cmd,
  [sym_asciiz_ctrl_cmd] = sym_asciiz_ctrl_cmd,
  [sym_assert_ctrl_cmd] = sym_assert_ctrl_cmd,
  [sym_autoimport_ctrl_cmd] = sym_autoimport_ctrl_cmd,
  [sym_bankbytes_ctrl_cmd] = sym_bankbytes_ctrl_cmd,
  [sym_byte_ctrl_cmd] = sym_byte_ctrl_cmd,
  [sym_case_ctrl_cmd] = sym_case_ctrl_cmd,
  [sym_charmap_ctrl_cmd] = sym_charmap_ctrl_cmd,
  [sym_condes_ctrl_cmd] = sym_condes_ctrl_cmd,
  [sym_plus_symbol] = sym_plus_symbol,
  [sym_sub_symbol] = sym_sub_symbol,
  [aux_sym_ca65_repeat1] = aux_sym_ca65_repeat1,
  [aux_sym_addr_ctrl_cmd_repeat1] = aux_sym_addr_ctrl_cmd_repeat1,
  [aux_sym_asciiz_ctrl_cmd_repeat1] = aux_sym_asciiz_ctrl_cmd_repeat1,
  [aux_sym_bankbytes_ctrl_cmd_repeat1] = aux_sym_bankbytes_ctrl_cmd_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_warning_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_error_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_ldwarning_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_lderror_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_destructor_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_interruptor_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_acc_register] = {
    .visible = true,
    .named = true,
  },
  [sym_x_register] = {
    .visible = true,
    .named = true,
  },
  [sym_y_register] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_adc_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_and_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_asl_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_bcc_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_bcs_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_beq_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_bit_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_bmi_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_bne_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_bpl_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_brk_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_bvc_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_bvs_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_clc_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_cld_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_cli_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_clv_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_cmp_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_cpx_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_cpy_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_dec_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_dex_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_dey_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_eor_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_inc_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_inx_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_iny_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_jmp_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_jsr_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_lda_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_ldx_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_ldy_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_lsr_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_nop_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_ora_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_pha_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_php_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_pla_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_plp_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_rol_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_ror_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_rti_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_rts_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_sbc_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_sec_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_sed_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_sei_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_sta_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_stx_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_sty_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_tax_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_tay_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_tsx_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_txa_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_tcs_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_tya_opcode] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_bin_8_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_dec_8] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_h] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_hex_8_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hex_8_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bin_16_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_dec_16] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_hex_16_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_imm_prefix] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTBITNOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTLOBYTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTHIBYTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTBANKBYTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTMOD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTBITAND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTBITXOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTSHL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTSHR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTBITOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTAND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTXOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTNOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [sym_a16_ctrl_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_a8_ctrl_cmd] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_addr_ctrl_cmd_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_align_ctrl_cmd_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_asciiz_ctrl_cmd_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assert_ctrl_cmd_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_autoimport_ctrl_cmd_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bankbytes_ctrl_cmd_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_bss_ctrl_cmd] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_byte_ctrl_cmd_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_ctrl_cmd_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_charmap_ctrl_cmd_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_code_ctrl_cmd] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_condes_ctrl_cmd_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_ca65] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_impl_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_acc_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_abs_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_zp_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_abs_x_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_abs_y_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_zp_x_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_zp_y_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_ind_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_ind_x_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_ind_y_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_rel_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_operand_8] = {
    .visible = true,
    .named = true,
  },
  [sym_bin_8] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_8] = {
    .visible = true,
    .named = true,
  },
  [sym_operand_16] = {
    .visible = true,
    .named = true,
  },
  [sym_bin_16] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_16] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_pos_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_neg_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_not_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_lobyte_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_hibyte_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_bankbyte_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_mult_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_div_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_mod_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_bit_and_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_bit_xor_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_shift_l_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_shift_r_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_add_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_sub_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_bit_or_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_eq_cmp] = {
    .visible = true,
    .named = true,
  },
  [sym_neq_cmp] = {
    .visible = true,
    .named = true,
  },
  [sym_lt_cmp] = {
    .visible = true,
    .named = true,
  },
  [sym_gt_cmp] = {
    .visible = true,
    .named = true,
  },
  [sym_lte_cmp] = {
    .visible = true,
    .named = true,
  },
  [sym_gte_cmp] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_and_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_xor_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_or_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_not_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_ctrl_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_addr_ctrl_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_align_ctrl_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_asciiz_ctrl_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_assert_ctrl_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_autoimport_ctrl_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_bankbytes_ctrl_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_byte_ctrl_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_case_ctrl_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_charmap_ctrl_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_condes_ctrl_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_plus_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_sub_symbol] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_ca65_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_addr_ctrl_cmd_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_asciiz_ctrl_cmd_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bankbytes_ctrl_cmd_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 30,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(293);
      ADVANCE_MAP(
        '!', 567,
        '"', 3,
        '#', 532,
        '$', 490,
        '%', 456,
        '&', 549,
        '\'', 6,
        '(', 345,
        ')', 346,
        '*', 545,
        '+', 533,
        ',', 344,
        '-', 534,
        '.', 74,
        '/', 546,
        '0', 457,
        '1', 465,
        '2', 472,
        '6', 477,
        ';', 294,
        '<', 539,
        '=', 557,
        '>', 542,
        '^', 544,
        'h', 491,
        '|', 556,
        '~', 536,
        'A', 307,
        'a', 307,
        'B', 137,
        'b', 137,
        'C', 174,
        'c', 174,
        'D', 152,
        'd', 152,
        'E', 189,
        'e', 189,
        'I', 180,
        'i', 180,
        'J', 177,
        'j', 177,
        'L', 148,
        'l', 148,
        'N', 190,
        'n', 190,
        'O', 217,
        'o', 217,
        'P', 163,
        'p', 163,
        'R', 188,
        'r', 188,
        'S', 135,
        's', 135,
        'T', 128,
        't', 128,
        'W', 131,
        'w', 131,
        'X', 309,
        'x', 309,
        'Y', 310,
        'y', 310,
      );
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(487);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 567,
        '"', 3,
        '#', 532,
        '$', 490,
        '%', 456,
        '\'', 6,
        '(', 345,
        '+', 533,
        '-', 534,
        '.', 81,
        '0', 471,
        '1', 480,
        '2', 475,
        '6', 476,
        ';', 294,
        '<', 538,
        '>', 541,
        '^', 544,
        'h', 492,
        '~', 536,
      );
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(482);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(315);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 567,
        '"', 3,
        '$', 490,
        '%', 456,
        '\'', 6,
        '(', 345,
        '+', 533,
        '-', 534,
        '.', 81,
        '0', 471,
        '1', 480,
        '2', 475,
        '6', 476,
        ';', 294,
        '<', 538,
        '>', 541,
        '^', 544,
        'h', 492,
        '~', 536,
        'C', 313,
        'c', 313,
        'D', 312,
        'd', 312,
        'I', 320,
        'i', 320,
      );
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(482);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(315);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(295);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(490);
      if (lookahead == '%') ADVANCE(456);
      if (lookahead == '(') ADVANCE(345);
      if (lookahead == '0') ADVANCE(518);
      if (lookahead == '6') ADVANCE(521);
      if (lookahead == ';') ADVANCE(294);
      if (lookahead == 'h') ADVANCE(492);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(526);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '$', 490,
        '%', 456,
        '0', 471,
        '1', 480,
        '2', 475,
        '6', 476,
        ';', 294,
        'h', 492,
        'A', 308,
        'a', 308,
      );
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(482);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(315);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(494);
      if (lookahead == ';') ADVANCE(294);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(498);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(20);
      if (lookahead == '1') ADVANCE(261);
      if (lookahead == ';') ADVANCE(294);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(501);
      if (lookahead == '1') ADVANCE(516);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(13);
      if (lookahead == ';') ADVANCE(294);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(291);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(528);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(9);
      if (lookahead == '1') ADVANCE(288);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(11);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(290);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(495);
      if (lookahead == ';') ADVANCE(294);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(497);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(12);
      if (lookahead == '1') ADVANCE(287);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(15);
      if (lookahead == '1') ADVANCE(285);
      END_STATE();
    case 17:
      if (lookahead == '0') ADVANCE(16);
      if (lookahead == '1') ADVANCE(282);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(17);
      if (lookahead == '1') ADVANCE(278);
      END_STATE();
    case 19:
      if (lookahead == '0') ADVANCE(18);
      if (lookahead == '1') ADVANCE(273);
      END_STATE();
    case 20:
      if (lookahead == '0') ADVANCE(19);
      if (lookahead == '1') ADVANCE(267);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '1', 23,
        '8', 569,
        'N', 84,
        'D', 151,
        'd', 151,
        'L', 166,
        'l', 166,
        'S', 145,
        's', 145,
        'U', 238,
        'u', 238,
      );
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '1', 23,
        '8', 569,
        'D', 151,
        'd', 151,
        'L', 166,
        'l', 166,
        'S', 145,
        's', 145,
        'U', 238,
        'u', 238,
      );
      END_STATE();
    case 23:
      if (lookahead == '6') ADVANCE(568);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(403);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(405);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(415);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(419);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(439);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(441);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 31:
      ADVANCE_MAP(
        ':', 311,
        'A', 71,
        'a', 71,
        'C', 68,
        'c', 68,
        'S', 72,
        's', 72,
        'X', 29,
        'x', 29,
        'Y', 30,
        'y', 30,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(40);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 33:
      ADVANCE_MAP(
        ':', 311,
        'C', 35,
        'c', 35,
        'E', 63,
        'e', 63,
        'I', 69,
        'i', 69,
        'M', 48,
        'm', 48,
        'N', 46,
        'n', 46,
        'P', 53,
        'p', 53,
        'R', 50,
        'r', 50,
        'V', 36,
        'v', 36,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(351);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(367);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 37:
      ADVANCE_MAP(
        ':', 311,
        'C', 371,
        'c', 371,
        'D', 373,
        'd', 373,
        'I', 375,
        'i', 375,
        'V', 377,
        'v', 377,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(385);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(387);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(393);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(395);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(433);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(435);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(44);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(24);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(26);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(427);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(37);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(60);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(423);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(61);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(54);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(381);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(445);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      ADVANCE_MAP(
        'A', 21,
        'B', 76,
        'H', 91,
        'L', 103,
        'M', 99,
        'N', 100,
        'O', 104,
        'S', 90,
        'X', 98,
        'a', 22,
        'b', 231,
        'C', 129,
        'c', 129,
      );
      END_STATE();
    case 75:
      ADVANCE_MAP(
        'A', 21,
        'B', 92,
        'M', 99,
        'O', 104,
        'S', 90,
        'X', 98,
        'a', 22,
        'b', 132,
        'C', 129,
        'c', 129,
      );
      END_STATE();
    case 76:
      if (lookahead == 'A') ADVANCE(95);
      if (lookahead == 'I') ADVANCE(108);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(228);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(235);
      END_STATE();
    case 77:
      if (lookahead == 'A') ADVANCE(95);
      if (lookahead == 'I') ADVANCE(114);
      END_STATE();
    case 78:
      if (lookahead == 'A') ADVANCE(96);
      if (lookahead == 'N') ADVANCE(102);
      if (lookahead == 'O') ADVANCE(106);
      if (lookahead == 'X') ADVANCE(101);
      END_STATE();
    case 79:
      if (lookahead == 'A') ADVANCE(96);
      if (lookahead == 'O') ADVANCE(106);
      if (lookahead == 'X') ADVANCE(101);
      END_STATE();
    case 80:
      if (lookahead == 'B') ADVANCE(116);
      END_STATE();
    case 81:
      if (lookahead == 'B') ADVANCE(77);
      if (lookahead == 'H') ADVANCE(91);
      if (lookahead == 'L') ADVANCE(103);
      if (lookahead == 'N') ADVANCE(100);
      END_STATE();
    case 82:
      if (lookahead == 'B') ADVANCE(117);
      END_STATE();
    case 83:
      if (lookahead == 'B') ADVANCE(118);
      END_STATE();
    case 84:
      if (lookahead == 'D') ADVANCE(561);
      END_STATE();
    case 85:
      if (lookahead == 'D') ADVANCE(547);
      END_STATE();
    case 86:
      if (lookahead == 'D') ADVANCE(548);
      END_STATE();
    case 87:
      if (lookahead == 'E') ADVANCE(540);
      END_STATE();
    case 88:
      if (lookahead == 'E') ADVANCE(537);
      END_STATE();
    case 89:
      if (lookahead == 'E') ADVANCE(543);
      END_STATE();
    case 90:
      if (lookahead == 'H') ADVANCE(94);
      END_STATE();
    case 91:
      if (lookahead == 'I') ADVANCE(80);
      END_STATE();
    case 92:
      if (lookahead == 'I') ADVANCE(112);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(182);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(228);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(235);
      END_STATE();
    case 93:
      if (lookahead == 'K') ADVANCE(83);
      END_STATE();
    case 94:
      if (lookahead == 'L') ADVANCE(551);
      if (lookahead == 'R') ADVANCE(553);
      END_STATE();
    case 95:
      if (lookahead == 'N') ADVANCE(93);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(86);
      END_STATE();
    case 97:
      if (lookahead == 'N') ADVANCE(102);
      END_STATE();
    case 98:
      if (lookahead == 'O') ADVANCE(105);
      END_STATE();
    case 99:
      if (lookahead == 'O') ADVANCE(85);
      END_STATE();
    case 100:
      if (lookahead == 'O') ADVANCE(109);
      END_STATE();
    case 101:
      if (lookahead == 'O') ADVANCE(107);
      END_STATE();
    case 102:
      if (lookahead == 'O') ADVANCE(111);
      END_STATE();
    case 103:
      if (lookahead == 'O') ADVANCE(82);
      END_STATE();
    case 104:
      if (lookahead == 'R') ADVANCE(564);
      END_STATE();
    case 105:
      if (lookahead == 'R') ADVANCE(563);
      END_STATE();
    case 106:
      if (lookahead == 'R') ADVANCE(555);
      END_STATE();
    case 107:
      if (lookahead == 'R') ADVANCE(550);
      END_STATE();
    case 108:
      if (lookahead == 'T') ADVANCE(78);
      END_STATE();
    case 109:
      if (lookahead == 'T') ADVANCE(566);
      END_STATE();
    case 110:
      if (lookahead == 'T') ADVANCE(87);
      END_STATE();
    case 111:
      if (lookahead == 'T') ADVANCE(535);
      END_STATE();
    case 112:
      if (lookahead == 'T') ADVANCE(79);
      END_STATE();
    case 113:
      if (lookahead == 'T') ADVANCE(88);
      END_STATE();
    case 114:
      if (lookahead == 'T') ADVANCE(97);
      END_STATE();
    case 115:
      if (lookahead == 'T') ADVANCE(89);
      END_STATE();
    case 116:
      if (lookahead == 'Y') ADVANCE(110);
      END_STATE();
    case 117:
      if (lookahead == 'Y') ADVANCE(113);
      END_STATE();
    case 118:
      if (lookahead == 'Y') ADVANCE(115);
      END_STATE();
    case 119:
      if (lookahead == 'h') ADVANCE(499);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      END_STATE();
    case 121:
      ADVANCE_MAP(
        'A', 402,
        'a', 402,
        'E', 224,
        'e', 224,
        'W', 134,
        'w', 134,
        'X', 404,
        'x', 404,
        'Y', 406,
        'y', 406,
      );
      END_STATE();
    case 122:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(412);
      END_STATE();
    case 123:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(414);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(416);
      END_STATE();
    case 124:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(418);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(420);
      END_STATE();
    case 125:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(438);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(440);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(442);
      END_STATE();
    case 126:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(450);
      END_STATE();
    case 127:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(454);
      END_STATE();
    case 128:
      ADVANCE_MAP(
        'A', 249,
        'a', 249,
        'C', 227,
        'c', 227,
        'S', 250,
        's', 250,
        'X', 126,
        'x', 126,
        'Y', 127,
        'y', 127,
      );
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(232);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(133);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 130:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 131:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 132:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(182);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(228);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(235);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 135:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(143);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(144);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(125);
      END_STATE();
    case 136:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(251);
      END_STATE();
    case 137:
      ADVANCE_MAP(
        'C', 138,
        'c', 138,
        'E', 204,
        'e', 204,
        'I', 234,
        'i', 234,
        'M', 164,
        'm', 164,
        'N', 153,
        'n', 153,
        'P', 175,
        'p', 175,
        'R', 172,
        'r', 172,
        'V', 139,
        'v', 139,
      );
      END_STATE();
    case 138:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(350);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(352);
      END_STATE();
    case 139:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(366);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(368);
      END_STATE();
    case 140:
      ADVANCE_MAP(
        'C', 370,
        'c', 370,
        'D', 372,
        'd', 372,
        'I', 374,
        'i', 374,
        'V', 376,
        'v', 376,
      );
      END_STATE();
    case 141:
      ADVANCE_MAP(
        'C', 384,
        'c', 384,
        'S', 240,
        's', 240,
        'X', 386,
        'x', 386,
        'Y', 388,
        'y', 388,
      );
      END_STATE();
    case 142:
      ADVANCE_MAP(
        'C', 392,
        'c', 392,
        'T', 158,
        't', 158,
        'X', 394,
        'x', 394,
        'Y', 396,
        'y', 396,
      );
      END_STATE();
    case 143:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(430);
      END_STATE();
    case 144:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(432);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(434);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(436);
      END_STATE();
    case 145:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(170);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(159);
      END_STATE();
    case 146:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(241);
      END_STATE();
    case 147:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(242);
      END_STATE();
    case 148:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(121);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(207);
      END_STATE();
    case 149:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(155);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(156);
      END_STATE();
    case 151:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(208);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(581);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 160:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(297);
      END_STATE();
    case 161:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(299);
      END_STATE();
    case 162:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(181);
      END_STATE();
    case 163:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(123);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 164:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(358);
      END_STATE();
    case 165:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(426);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(428);
      END_STATE();
    case 166:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 167:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(252);
      END_STATE();
    case 168:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 169:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 170:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 171:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 172:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(364);
      END_STATE();
    case 173:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(136);
      END_STATE();
    case 174:
      ADVANCE_MAP(
        'L', 140,
        'l', 140,
        'M', 198,
        'm', 198,
        'O', 186,
        'o', 186,
        'P', 248,
        'p', 248,
      );
      END_STATE();
    case 175:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(362);
      END_STATE();
    case 176:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(422);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(424);
      END_STATE();
    case 177:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(199);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(206);
      END_STATE();
    case 178:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(202);
      END_STATE();
    case 179:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(130);
      END_STATE();
    case 180:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 181:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(571);
      END_STATE();
    case 182:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 183:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 184:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 185:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 186:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 187:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 188:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(176);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(165);
      END_STATE();
    case 189:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(205);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 190:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 191:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 192:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 193:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 194:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 195:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 196:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 197:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 198:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(378);
      END_STATE();
    case 199:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(398);
      END_STATE();
    case 200:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(410);
      END_STATE();
    case 201:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(580);
      END_STATE();
    case 202:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(194);
      END_STATE();
    case 203:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(243);
      END_STATE();
    case 204:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(354);
      END_STATE();
    case 205:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(390);
      END_STATE();
    case 206:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(400);
      END_STATE();
    case 207:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(408);
      END_STATE();
    case 208:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(570);
      END_STATE();
    case 209:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 210:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 211:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(298);
      END_STATE();
    case 212:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(300);
      END_STATE();
    case 213:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 214:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 215:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(305);
      END_STATE();
    case 216:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 217:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 218:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 219:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 220:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 221:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 222:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 223:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 224:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 225:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 226:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 227:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(452);
      END_STATE();
    case 228:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(576);
      END_STATE();
    case 229:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(582);
      END_STATE();
    case 230:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(575);
      END_STATE();
    case 231:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(228);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(235);
      END_STATE();
    case 232:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(154);
      END_STATE();
    case 233:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(244);
      END_STATE();
    case 234:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(356);
      END_STATE();
    case 235:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(578);
      END_STATE();
    case 236:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(573);
      END_STATE();
    case 237:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(574);
      END_STATE();
    case 238:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(191);
      END_STATE();
    case 239:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(157);
      END_STATE();
    case 240:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(210);
      END_STATE();
    case 241:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(195);
      END_STATE();
    case 242:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(196);
      END_STATE();
    case 243:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(197);
      END_STATE();
    case 244:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(226);
      END_STATE();
    case 245:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 246:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(203);
      END_STATE();
    case 247:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 248:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(380);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(382);
      END_STATE();
    case 249:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(444);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(446);
      END_STATE();
    case 250:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(448);
      END_STATE();
    case 251:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(239);
      END_STATE();
    case 252:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(572);
      END_STATE();
    case 253:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(509);
      END_STATE();
    case 254:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(253);
      END_STATE();
    case 255:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(254);
      END_STATE();
    case 256:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(255);
      END_STATE();
    case 257:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(256);
      END_STATE();
    case 258:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(257);
      END_STATE();
    case 259:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(258);
      END_STATE();
    case 260:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(502);
      END_STATE();
    case 261:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(259);
      END_STATE();
    case 262:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(260);
      END_STATE();
    case 263:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(262);
      END_STATE();
    case 264:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(263);
      END_STATE();
    case 265:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(264);
      END_STATE();
    case 266:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(265);
      END_STATE();
    case 267:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(266);
      END_STATE();
    case 268:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(510);
      END_STATE();
    case 269:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(268);
      END_STATE();
    case 270:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(269);
      END_STATE();
    case 271:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(270);
      END_STATE();
    case 272:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(271);
      END_STATE();
    case 273:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(272);
      END_STATE();
    case 274:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(511);
      END_STATE();
    case 275:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(274);
      END_STATE();
    case 276:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(275);
      END_STATE();
    case 277:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(276);
      END_STATE();
    case 278:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(277);
      END_STATE();
    case 279:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(512);
      END_STATE();
    case 280:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(279);
      END_STATE();
    case 281:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(280);
      END_STATE();
    case 282:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(281);
      END_STATE();
    case 283:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(513);
      END_STATE();
    case 284:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(283);
      END_STATE();
    case 285:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(284);
      END_STATE();
    case 286:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(514);
      END_STATE();
    case 287:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(286);
      END_STATE();
    case 288:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(515);
      END_STATE();
    case 289:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(530);
      END_STATE();
    case 290:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(529);
      END_STATE();
    case 291:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(289);
      END_STATE();
    case 292:
      if (eof) ADVANCE(293);
      ADVANCE_MAP(
        '&', 549,
        ')', 346,
        '*', 545,
        '+', 533,
        ',', 344,
        '-', 534,
        '.', 75,
        '/', 546,
        '0', 458,
        '1', 470,
        ';', 294,
        '<', 539,
        '=', 557,
        '>', 542,
        '^', 544,
        '|', 556,
        'A', 42,
        'a', 42,
        'B', 33,
        'b', 33,
        'C', 51,
        'c', 51,
        'D', 45,
        'd', 45,
        'E', 58,
        'e', 58,
        'I', 56,
        'i', 56,
        'J', 55,
        'j', 55,
        'L', 43,
        'l', 43,
        'N', 59,
        'n', 59,
        'O', 64,
        'o', 64,
        'P', 47,
        'p', 47,
        'R', 57,
        'r', 57,
        'S', 32,
        's', 32,
        'T', 31,
        't', 31,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(292);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_warning_keyword);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_error_keyword);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_ldwarning_keyword);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_lderror_keyword);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_constructor_keyword);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_constructor_keyword);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_destructor_keyword);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_destructor_keyword);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_interruptor_keyword);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_interruptor_keyword);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_acc_register);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_acc_register);
      if (lookahead == 'h') ADVANCE(343);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(119);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(316);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_x_register);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_y_register);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'h') ADVANCE(343);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(314);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(119);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(316);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'h') ADVANCE(343);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(321);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(119);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(316);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'h') ADVANCE(343);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(335);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'h') ADVANCE(343);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(119);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(316);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'h') ADVANCE(343);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(336);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(337);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(331);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(334);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(333);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(327);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(328);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(329);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(338);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(340);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(304);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(302);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(306);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(341);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(330);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(342);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(339);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(319);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(326);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(322);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(323);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(324);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(332);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(317);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(325);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(318);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_symbol);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_adc_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_and_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_asl_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_bcc_opcode);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_bcc_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_bcs_opcode);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_bcs_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_beq_opcode);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_beq_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_bit_opcode);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_bit_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_bmi_opcode);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_bmi_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_bne_opcode);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_bne_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_bpl_opcode);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_bpl_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_brk_opcode);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_brk_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_bvc_opcode);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_bvc_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_bvs_opcode);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_bvs_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_clc_opcode);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_clc_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_cld_opcode);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_cld_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_cli_opcode);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_cli_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_clv_opcode);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_clv_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_cmp_opcode);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_cmp_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_cpx_opcode);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_cpx_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_cpy_opcode);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_cpy_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_dec_opcode);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_dec_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_dex_opcode);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_dex_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_dey_opcode);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_dey_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_eor_opcode);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_eor_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_inc_opcode);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_inc_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_inx_opcode);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_inx_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_iny_opcode);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_iny_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_jmp_opcode);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_jmp_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_jsr_opcode);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_jsr_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_lda_opcode);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_lda_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_ldx_opcode);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_ldx_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_ldy_opcode);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_ldy_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_lsr_opcode);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_lsr_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_nop_opcode);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_nop_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_ora_opcode);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_ora_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_pha_opcode);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_pha_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_php_opcode);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_php_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_pla_opcode);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_pla_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_plp_opcode);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_plp_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_rol_opcode);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_rol_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_ror_opcode);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_ror_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_rti_opcode);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_rti_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_rts_opcode);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_rts_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_sbc_opcode);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_sbc_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_sec_opcode);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_sec_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_sed_opcode);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_sed_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_sei_opcode);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_sei_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_sta_opcode);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_sta_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_stx_opcode);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_stx_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_sty_opcode);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_sty_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_tax_opcode);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_tax_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_tay_opcode);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_tay_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_tsx_opcode);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_tsx_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_txa_opcode);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_txa_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_tcs_opcode);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_tcs_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_tya_opcode);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_tya_opcode);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0') ADVANCE(457);
      if (lookahead == '1') ADVANCE(465);
      if (lookahead == '2') ADVANCE(472);
      if (lookahead == '6') ADVANCE(477);
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(487);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(489);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0') ADVANCE(458);
      if (lookahead == '1') ADVANCE(470);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(467);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(467);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(517);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(509);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(464);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(488);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(461);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(460);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(524);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(462);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(489);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(463);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(466);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(459);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(468);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(469);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '0') ADVANCE(471);
      if (lookahead == '1') ADVANCE(480);
      if (lookahead == '2') ADVANCE(475);
      if (lookahead == '6') ADVANCE(476);
      if (lookahead == 'h') ADVANCE(499);
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(482);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(485);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(489);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(519);
      if (lookahead == 'h') ADVANCE(499);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(525);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(519);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(525);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(478);
      if (lookahead == 'h') ADVANCE(499);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(483);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(473);
      if (lookahead == 'h') ADVANCE(499);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(479);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(474);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(486);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(499);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(488);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(525);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(483);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_dec_8);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(488);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_dec_8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(525);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_dec_8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_dec_8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_dec_8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_h);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_h);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (lookahead == '0') ADVANCE(494);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(498);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (lookahead == '0') ADVANCE(495);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(497);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(530);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(493);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(496);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_hex_8_token2);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0') ADVANCE(501);
      if (lookahead == '1') ADVANCE(516);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(509);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(500);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(503);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(504);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(505);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(506);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(507);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(508);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(502);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(510);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(511);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(512);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(513);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(514);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(515);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_dec_16);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '0') ADVANCE(518);
      if (lookahead == '6') ADVANCE(521);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(526);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '3') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(524);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(517);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '5') ADVANCE(519);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(525);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '5') ADVANCE(520);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(523);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(517);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(525);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(517);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (lookahead == '0') ADVANCE(528);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(530);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(527);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(529);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_imm_prefix);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_DOTBITNOT);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_DOTLOBYTE);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(552);
      if (lookahead == '=') ADVANCE(559);
      if (lookahead == '>') ADVANCE(558);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_DOTHIBYTE);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(560);
      if (lookahead == '>') ADVANCE(554);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_DOTBANKBYTE);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_DOTMOD);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_DOTBITAND);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(562);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_DOTBITXOR);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_DOTSHL);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_DOTSHR);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_DOTBITOR);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(565);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_DOTAND);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_DOTXOR);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_DOTOR);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_DOTNOT);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_a16_ctrl_cmd);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_a8_ctrl_cmd);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_addr_ctrl_cmd_token1);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_align_ctrl_cmd_token1);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_asciiz_ctrl_cmd_token1);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_assert_ctrl_cmd_token1);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_autoimport_ctrl_cmd_token1);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_bankbytes_ctrl_cmd_token1);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_bss_ctrl_cmd);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_byte_ctrl_cmd_token1);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_byte_ctrl_cmd_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(577);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_case_ctrl_cmd_token1);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_charmap_ctrl_cmd_token1);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_code_ctrl_cmd);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_condes_ctrl_cmd_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 292},
  [2] = {.lex_state = 292},
  [3] = {.lex_state = 292},
  [4] = {.lex_state = 292},
  [5] = {.lex_state = 292},
  [6] = {.lex_state = 292},
  [7] = {.lex_state = 292},
  [8] = {.lex_state = 292},
  [9] = {.lex_state = 292},
  [10] = {.lex_state = 292},
  [11] = {.lex_state = 292},
  [12] = {.lex_state = 292},
  [13] = {.lex_state = 292},
  [14] = {.lex_state = 292},
  [15] = {.lex_state = 292},
  [16] = {.lex_state = 292},
  [17] = {.lex_state = 292},
  [18] = {.lex_state = 292},
  [19] = {.lex_state = 292},
  [20] = {.lex_state = 292},
  [21] = {.lex_state = 292},
  [22] = {.lex_state = 292},
  [23] = {.lex_state = 292},
  [24] = {.lex_state = 292},
  [25] = {.lex_state = 292},
  [26] = {.lex_state = 292},
  [27] = {.lex_state = 292},
  [28] = {.lex_state = 292},
  [29] = {.lex_state = 292},
  [30] = {.lex_state = 292},
  [31] = {.lex_state = 292},
  [32] = {.lex_state = 292},
  [33] = {.lex_state = 292},
  [34] = {.lex_state = 292},
  [35] = {.lex_state = 292},
  [36] = {.lex_state = 292},
  [37] = {.lex_state = 292},
  [38] = {.lex_state = 292},
  [39] = {.lex_state = 292},
  [40] = {.lex_state = 292},
  [41] = {.lex_state = 292},
  [42] = {.lex_state = 292},
  [43] = {.lex_state = 292},
  [44] = {.lex_state = 292},
  [45] = {.lex_state = 292},
  [46] = {.lex_state = 292},
  [47] = {.lex_state = 292},
  [48] = {.lex_state = 292},
  [49] = {.lex_state = 292},
  [50] = {.lex_state = 292},
  [51] = {.lex_state = 292},
  [52] = {.lex_state = 292},
  [53] = {.lex_state = 292},
  [54] = {.lex_state = 292},
  [55] = {.lex_state = 292},
  [56] = {.lex_state = 292},
  [57] = {.lex_state = 292},
  [58] = {.lex_state = 292},
  [59] = {.lex_state = 292},
  [60] = {.lex_state = 292},
  [61] = {.lex_state = 292},
  [62] = {.lex_state = 292},
  [63] = {.lex_state = 292},
  [64] = {.lex_state = 292},
  [65] = {.lex_state = 292},
  [66] = {.lex_state = 292},
  [67] = {.lex_state = 292},
  [68] = {.lex_state = 292},
  [69] = {.lex_state = 292},
  [70] = {.lex_state = 292},
  [71] = {.lex_state = 292},
  [72] = {.lex_state = 292},
  [73] = {.lex_state = 292},
  [74] = {.lex_state = 292},
  [75] = {.lex_state = 292},
  [76] = {.lex_state = 292},
  [77] = {.lex_state = 292},
  [78] = {.lex_state = 292},
  [79] = {.lex_state = 292},
  [80] = {.lex_state = 292},
  [81] = {.lex_state = 292},
  [82] = {.lex_state = 292},
  [83] = {.lex_state = 292},
  [84] = {.lex_state = 292},
  [85] = {.lex_state = 292},
  [86] = {.lex_state = 292},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 292},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 14},
  [168] = {.lex_state = 292},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 10},
  [171] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym_string_token1] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [sym_warning_keyword] = ACTIONS(1),
    [sym_error_keyword] = ACTIONS(1),
    [sym_ldwarning_keyword] = ACTIONS(1),
    [sym_lderror_keyword] = ACTIONS(1),
    [sym_constructor_keyword] = ACTIONS(1),
    [sym_destructor_keyword] = ACTIONS(1),
    [sym_interruptor_keyword] = ACTIONS(1),
    [sym_acc_register] = ACTIONS(1),
    [sym_x_register] = ACTIONS(1),
    [sym_y_register] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_bcc_opcode] = ACTIONS(1),
    [sym_bcs_opcode] = ACTIONS(1),
    [sym_beq_opcode] = ACTIONS(1),
    [sym_bit_opcode] = ACTIONS(1),
    [sym_bmi_opcode] = ACTIONS(1),
    [sym_bne_opcode] = ACTIONS(1),
    [sym_bpl_opcode] = ACTIONS(1),
    [sym_brk_opcode] = ACTIONS(1),
    [sym_bvc_opcode] = ACTIONS(1),
    [sym_bvs_opcode] = ACTIONS(1),
    [sym_clc_opcode] = ACTIONS(1),
    [sym_cld_opcode] = ACTIONS(1),
    [sym_cli_opcode] = ACTIONS(1),
    [sym_clv_opcode] = ACTIONS(1),
    [sym_cmp_opcode] = ACTIONS(1),
    [sym_cpx_opcode] = ACTIONS(1),
    [sym_cpy_opcode] = ACTIONS(1),
    [sym_dec_opcode] = ACTIONS(1),
    [sym_dex_opcode] = ACTIONS(1),
    [sym_dey_opcode] = ACTIONS(1),
    [sym_eor_opcode] = ACTIONS(1),
    [sym_inc_opcode] = ACTIONS(1),
    [sym_inx_opcode] = ACTIONS(1),
    [sym_iny_opcode] = ACTIONS(1),
    [sym_jmp_opcode] = ACTIONS(1),
    [sym_jsr_opcode] = ACTIONS(1),
    [sym_lda_opcode] = ACTIONS(1),
    [sym_ldx_opcode] = ACTIONS(1),
    [sym_ldy_opcode] = ACTIONS(1),
    [sym_lsr_opcode] = ACTIONS(1),
    [sym_nop_opcode] = ACTIONS(1),
    [sym_ora_opcode] = ACTIONS(1),
    [sym_pha_opcode] = ACTIONS(1),
    [sym_php_opcode] = ACTIONS(1),
    [sym_pla_opcode] = ACTIONS(1),
    [sym_plp_opcode] = ACTIONS(1),
    [sym_rol_opcode] = ACTIONS(1),
    [sym_ror_opcode] = ACTIONS(1),
    [sym_rti_opcode] = ACTIONS(1),
    [sym_rts_opcode] = ACTIONS(1),
    [sym_sbc_opcode] = ACTIONS(1),
    [sym_sec_opcode] = ACTIONS(1),
    [sym_sed_opcode] = ACTIONS(1),
    [sym_sei_opcode] = ACTIONS(1),
    [sym_sta_opcode] = ACTIONS(1),
    [sym_stx_opcode] = ACTIONS(1),
    [sym_sty_opcode] = ACTIONS(1),
    [sym_tax_opcode] = ACTIONS(1),
    [sym_tay_opcode] = ACTIONS(1),
    [sym_tsx_opcode] = ACTIONS(1),
    [sym_txa_opcode] = ACTIONS(1),
    [sym_tcs_opcode] = ACTIONS(1),
    [sym_tya_opcode] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [aux_sym_bin_8_token1] = ACTIONS(1),
    [sym_dec_8] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_h] = ACTIONS(1),
    [aux_sym_bin_16_token1] = ACTIONS(1),
    [sym_dec_16] = ACTIONS(1),
    [sym_imm_prefix] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DOTBITNOT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DOTLOBYTE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_DOTHIBYTE] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DOTBANKBYTE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DOTMOD] = ACTIONS(1),
    [anon_sym_DOTBITAND] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_DOTBITXOR] = ACTIONS(1),
    [anon_sym_DOTSHL] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_DOTSHR] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_DOTBITOR] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_DOTAND] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_DOTXOR] = ACTIONS(1),
    [anon_sym_DOTOR] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_DOTNOT] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [sym_a16_ctrl_cmd] = ACTIONS(1),
    [sym_a8_ctrl_cmd] = ACTIONS(1),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(1),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(1),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(1),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(1),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(1),
    [sym_bss_ctrl_cmd] = ACTIONS(1),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(1),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(1),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(1),
    [sym_code_ctrl_cmd] = ACTIONS(1),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_ca65] = STATE(171),
    [sym_inst] = STATE(45),
    [sym_impl_addr_inst] = STATE(86),
    [sym_acc_addr_inst] = STATE(86),
    [sym_imm_addr_inst] = STATE(86),
    [sym_abs_addr_inst] = STATE(86),
    [sym_zp_addr_inst] = STATE(86),
    [sym_abs_x_addr_inst] = STATE(86),
    [sym_abs_y_addr_inst] = STATE(86),
    [sym_zp_x_addr_inst] = STATE(86),
    [sym_zp_y_addr_inst] = STATE(86),
    [sym_ind_addr_inst] = STATE(86),
    [sym_ind_x_addr_inst] = STATE(86),
    [sym_ind_y_addr_inst] = STATE(86),
    [sym_rel_addr_inst] = STATE(86),
    [sym_ctrl_cmd] = STATE(45),
    [sym_addr_ctrl_cmd] = STATE(72),
    [sym_align_ctrl_cmd] = STATE(72),
    [sym_asciiz_ctrl_cmd] = STATE(72),
    [sym_assert_ctrl_cmd] = STATE(72),
    [sym_autoimport_ctrl_cmd] = STATE(72),
    [sym_bankbytes_ctrl_cmd] = STATE(72),
    [sym_byte_ctrl_cmd] = STATE(72),
    [sym_case_ctrl_cmd] = STATE(72),
    [sym_charmap_ctrl_cmd] = STATE(72),
    [sym_condes_ctrl_cmd] = STATE(72),
    [aux_sym_ca65_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(7),
    [sym_adc_opcode] = ACTIONS(9),
    [sym_and_opcode] = ACTIONS(9),
    [sym_asl_opcode] = ACTIONS(11),
    [sym_bcc_opcode] = ACTIONS(13),
    [sym_bcs_opcode] = ACTIONS(13),
    [sym_beq_opcode] = ACTIONS(13),
    [sym_bit_opcode] = ACTIONS(15),
    [sym_bmi_opcode] = ACTIONS(13),
    [sym_bne_opcode] = ACTIONS(13),
    [sym_bpl_opcode] = ACTIONS(13),
    [sym_brk_opcode] = ACTIONS(17),
    [sym_bvc_opcode] = ACTIONS(13),
    [sym_bvs_opcode] = ACTIONS(13),
    [sym_clc_opcode] = ACTIONS(17),
    [sym_cld_opcode] = ACTIONS(17),
    [sym_cli_opcode] = ACTIONS(17),
    [sym_clv_opcode] = ACTIONS(17),
    [sym_cmp_opcode] = ACTIONS(9),
    [sym_cpx_opcode] = ACTIONS(19),
    [sym_cpy_opcode] = ACTIONS(19),
    [sym_dec_opcode] = ACTIONS(21),
    [sym_dex_opcode] = ACTIONS(17),
    [sym_dey_opcode] = ACTIONS(17),
    [sym_eor_opcode] = ACTIONS(9),
    [sym_inc_opcode] = ACTIONS(21),
    [sym_inx_opcode] = ACTIONS(17),
    [sym_iny_opcode] = ACTIONS(17),
    [sym_jmp_opcode] = ACTIONS(23),
    [sym_jsr_opcode] = ACTIONS(25),
    [sym_lda_opcode] = ACTIONS(9),
    [sym_ldx_opcode] = ACTIONS(27),
    [sym_ldy_opcode] = ACTIONS(29),
    [sym_lsr_opcode] = ACTIONS(29),
    [sym_nop_opcode] = ACTIONS(17),
    [sym_ora_opcode] = ACTIONS(9),
    [sym_pha_opcode] = ACTIONS(17),
    [sym_php_opcode] = ACTIONS(17),
    [sym_pla_opcode] = ACTIONS(17),
    [sym_plp_opcode] = ACTIONS(17),
    [sym_rol_opcode] = ACTIONS(11),
    [sym_ror_opcode] = ACTIONS(11),
    [sym_rti_opcode] = ACTIONS(17),
    [sym_rts_opcode] = ACTIONS(17),
    [sym_sbc_opcode] = ACTIONS(9),
    [sym_sec_opcode] = ACTIONS(17),
    [sym_sed_opcode] = ACTIONS(17),
    [sym_sei_opcode] = ACTIONS(17),
    [sym_sta_opcode] = ACTIONS(31),
    [sym_stx_opcode] = ACTIONS(33),
    [sym_sty_opcode] = ACTIONS(35),
    [sym_tax_opcode] = ACTIONS(17),
    [sym_tay_opcode] = ACTIONS(17),
    [sym_tsx_opcode] = ACTIONS(17),
    [sym_txa_opcode] = ACTIONS(17),
    [sym_tcs_opcode] = ACTIONS(17),
    [sym_tya_opcode] = ACTIONS(17),
    [sym_a16_ctrl_cmd] = ACTIONS(37),
    [sym_a8_ctrl_cmd] = ACTIONS(37),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(39),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(41),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(43),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(45),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(47),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(49),
    [sym_bss_ctrl_cmd] = ACTIONS(37),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(51),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(53),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(55),
    [sym_code_ctrl_cmd] = ACTIONS(37),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(57),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(59),
    [anon_sym_COMMA] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(59),
    [sym_adc_opcode] = ACTIONS(61),
    [sym_and_opcode] = ACTIONS(61),
    [sym_asl_opcode] = ACTIONS(61),
    [sym_bcc_opcode] = ACTIONS(61),
    [sym_bcs_opcode] = ACTIONS(61),
    [sym_beq_opcode] = ACTIONS(61),
    [sym_bit_opcode] = ACTIONS(61),
    [sym_bmi_opcode] = ACTIONS(61),
    [sym_bne_opcode] = ACTIONS(61),
    [sym_bpl_opcode] = ACTIONS(61),
    [sym_brk_opcode] = ACTIONS(61),
    [sym_bvc_opcode] = ACTIONS(61),
    [sym_bvs_opcode] = ACTIONS(61),
    [sym_clc_opcode] = ACTIONS(61),
    [sym_cld_opcode] = ACTIONS(61),
    [sym_cli_opcode] = ACTIONS(61),
    [sym_clv_opcode] = ACTIONS(61),
    [sym_cmp_opcode] = ACTIONS(61),
    [sym_cpx_opcode] = ACTIONS(61),
    [sym_cpy_opcode] = ACTIONS(61),
    [sym_dec_opcode] = ACTIONS(61),
    [sym_dex_opcode] = ACTIONS(61),
    [sym_dey_opcode] = ACTIONS(61),
    [sym_eor_opcode] = ACTIONS(61),
    [sym_inc_opcode] = ACTIONS(61),
    [sym_inx_opcode] = ACTIONS(61),
    [sym_iny_opcode] = ACTIONS(61),
    [sym_jmp_opcode] = ACTIONS(61),
    [sym_jsr_opcode] = ACTIONS(61),
    [sym_lda_opcode] = ACTIONS(61),
    [sym_ldx_opcode] = ACTIONS(61),
    [sym_ldy_opcode] = ACTIONS(61),
    [sym_lsr_opcode] = ACTIONS(61),
    [sym_nop_opcode] = ACTIONS(61),
    [sym_ora_opcode] = ACTIONS(61),
    [sym_pha_opcode] = ACTIONS(61),
    [sym_php_opcode] = ACTIONS(61),
    [sym_pla_opcode] = ACTIONS(61),
    [sym_plp_opcode] = ACTIONS(61),
    [sym_rol_opcode] = ACTIONS(61),
    [sym_ror_opcode] = ACTIONS(61),
    [sym_rti_opcode] = ACTIONS(61),
    [sym_rts_opcode] = ACTIONS(61),
    [sym_sbc_opcode] = ACTIONS(61),
    [sym_sec_opcode] = ACTIONS(61),
    [sym_sed_opcode] = ACTIONS(61),
    [sym_sei_opcode] = ACTIONS(61),
    [sym_sta_opcode] = ACTIONS(61),
    [sym_stx_opcode] = ACTIONS(61),
    [sym_sty_opcode] = ACTIONS(61),
    [sym_tax_opcode] = ACTIONS(61),
    [sym_tay_opcode] = ACTIONS(61),
    [sym_tsx_opcode] = ACTIONS(61),
    [sym_txa_opcode] = ACTIONS(61),
    [sym_tcs_opcode] = ACTIONS(61),
    [sym_tya_opcode] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(59),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_DOTMOD] = ACTIONS(59),
    [anon_sym_DOTBITAND] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(61),
    [anon_sym_DOTBITXOR] = ACTIONS(59),
    [anon_sym_DOTSHL] = ACTIONS(59),
    [anon_sym_LT_LT] = ACTIONS(59),
    [anon_sym_DOTSHR] = ACTIONS(59),
    [anon_sym_GT_GT] = ACTIONS(59),
    [anon_sym_DOTBITOR] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(61),
    [anon_sym_EQ] = ACTIONS(59),
    [anon_sym_LT_GT] = ACTIONS(59),
    [anon_sym_LT_EQ] = ACTIONS(59),
    [anon_sym_GT_EQ] = ACTIONS(59),
    [anon_sym_DOTAND] = ACTIONS(59),
    [anon_sym_AMP_AMP] = ACTIONS(59),
    [anon_sym_DOTXOR] = ACTIONS(59),
    [anon_sym_DOTOR] = ACTIONS(59),
    [anon_sym_PIPE_PIPE] = ACTIONS(59),
    [sym_a16_ctrl_cmd] = ACTIONS(59),
    [sym_a8_ctrl_cmd] = ACTIONS(59),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(59),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(59),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(59),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(59),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(59),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(59),
    [sym_bss_ctrl_cmd] = ACTIONS(59),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(59),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(59),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(59),
    [sym_code_ctrl_cmd] = ACTIONS(59),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(59),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(63),
    [anon_sym_RPAREN] = ACTIONS(63),
    [sym_adc_opcode] = ACTIONS(65),
    [sym_and_opcode] = ACTIONS(65),
    [sym_asl_opcode] = ACTIONS(65),
    [sym_bcc_opcode] = ACTIONS(65),
    [sym_bcs_opcode] = ACTIONS(65),
    [sym_beq_opcode] = ACTIONS(65),
    [sym_bit_opcode] = ACTIONS(65),
    [sym_bmi_opcode] = ACTIONS(65),
    [sym_bne_opcode] = ACTIONS(65),
    [sym_bpl_opcode] = ACTIONS(65),
    [sym_brk_opcode] = ACTIONS(65),
    [sym_bvc_opcode] = ACTIONS(65),
    [sym_bvs_opcode] = ACTIONS(65),
    [sym_clc_opcode] = ACTIONS(65),
    [sym_cld_opcode] = ACTIONS(65),
    [sym_cli_opcode] = ACTIONS(65),
    [sym_clv_opcode] = ACTIONS(65),
    [sym_cmp_opcode] = ACTIONS(65),
    [sym_cpx_opcode] = ACTIONS(65),
    [sym_cpy_opcode] = ACTIONS(65),
    [sym_dec_opcode] = ACTIONS(65),
    [sym_dex_opcode] = ACTIONS(65),
    [sym_dey_opcode] = ACTIONS(65),
    [sym_eor_opcode] = ACTIONS(65),
    [sym_inc_opcode] = ACTIONS(65),
    [sym_inx_opcode] = ACTIONS(65),
    [sym_iny_opcode] = ACTIONS(65),
    [sym_jmp_opcode] = ACTIONS(65),
    [sym_jsr_opcode] = ACTIONS(65),
    [sym_lda_opcode] = ACTIONS(65),
    [sym_ldx_opcode] = ACTIONS(65),
    [sym_ldy_opcode] = ACTIONS(65),
    [sym_lsr_opcode] = ACTIONS(65),
    [sym_nop_opcode] = ACTIONS(65),
    [sym_ora_opcode] = ACTIONS(65),
    [sym_pha_opcode] = ACTIONS(65),
    [sym_php_opcode] = ACTIONS(65),
    [sym_pla_opcode] = ACTIONS(65),
    [sym_plp_opcode] = ACTIONS(65),
    [sym_rol_opcode] = ACTIONS(65),
    [sym_ror_opcode] = ACTIONS(65),
    [sym_rti_opcode] = ACTIONS(65),
    [sym_rts_opcode] = ACTIONS(65),
    [sym_sbc_opcode] = ACTIONS(65),
    [sym_sec_opcode] = ACTIONS(65),
    [sym_sed_opcode] = ACTIONS(65),
    [sym_sei_opcode] = ACTIONS(65),
    [sym_sta_opcode] = ACTIONS(65),
    [sym_stx_opcode] = ACTIONS(65),
    [sym_sty_opcode] = ACTIONS(65),
    [sym_tax_opcode] = ACTIONS(65),
    [sym_tay_opcode] = ACTIONS(65),
    [sym_tsx_opcode] = ACTIONS(65),
    [sym_txa_opcode] = ACTIONS(65),
    [sym_tcs_opcode] = ACTIONS(65),
    [sym_tya_opcode] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_CARET] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_DOTMOD] = ACTIONS(63),
    [anon_sym_DOTBITAND] = ACTIONS(63),
    [anon_sym_AMP] = ACTIONS(65),
    [anon_sym_DOTBITXOR] = ACTIONS(63),
    [anon_sym_DOTSHL] = ACTIONS(63),
    [anon_sym_LT_LT] = ACTIONS(63),
    [anon_sym_DOTSHR] = ACTIONS(63),
    [anon_sym_GT_GT] = ACTIONS(63),
    [anon_sym_DOTBITOR] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [anon_sym_LT_GT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(63),
    [anon_sym_GT_EQ] = ACTIONS(63),
    [anon_sym_DOTAND] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(63),
    [anon_sym_DOTXOR] = ACTIONS(63),
    [anon_sym_DOTOR] = ACTIONS(63),
    [anon_sym_PIPE_PIPE] = ACTIONS(63),
    [sym_a16_ctrl_cmd] = ACTIONS(63),
    [sym_a8_ctrl_cmd] = ACTIONS(63),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(63),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(63),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(63),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(63),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(63),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(63),
    [sym_bss_ctrl_cmd] = ACTIONS(63),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(63),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(63),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(63),
    [sym_code_ctrl_cmd] = ACTIONS(63),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(63),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(67),
    [sym_adc_opcode] = ACTIONS(69),
    [sym_and_opcode] = ACTIONS(69),
    [sym_asl_opcode] = ACTIONS(69),
    [sym_bcc_opcode] = ACTIONS(69),
    [sym_bcs_opcode] = ACTIONS(69),
    [sym_beq_opcode] = ACTIONS(69),
    [sym_bit_opcode] = ACTIONS(69),
    [sym_bmi_opcode] = ACTIONS(69),
    [sym_bne_opcode] = ACTIONS(69),
    [sym_bpl_opcode] = ACTIONS(69),
    [sym_brk_opcode] = ACTIONS(69),
    [sym_bvc_opcode] = ACTIONS(69),
    [sym_bvs_opcode] = ACTIONS(69),
    [sym_clc_opcode] = ACTIONS(69),
    [sym_cld_opcode] = ACTIONS(69),
    [sym_cli_opcode] = ACTIONS(69),
    [sym_clv_opcode] = ACTIONS(69),
    [sym_cmp_opcode] = ACTIONS(69),
    [sym_cpx_opcode] = ACTIONS(69),
    [sym_cpy_opcode] = ACTIONS(69),
    [sym_dec_opcode] = ACTIONS(69),
    [sym_dex_opcode] = ACTIONS(69),
    [sym_dey_opcode] = ACTIONS(69),
    [sym_eor_opcode] = ACTIONS(69),
    [sym_inc_opcode] = ACTIONS(69),
    [sym_inx_opcode] = ACTIONS(69),
    [sym_iny_opcode] = ACTIONS(69),
    [sym_jmp_opcode] = ACTIONS(69),
    [sym_jsr_opcode] = ACTIONS(69),
    [sym_lda_opcode] = ACTIONS(69),
    [sym_ldx_opcode] = ACTIONS(69),
    [sym_ldy_opcode] = ACTIONS(69),
    [sym_lsr_opcode] = ACTIONS(69),
    [sym_nop_opcode] = ACTIONS(69),
    [sym_ora_opcode] = ACTIONS(69),
    [sym_pha_opcode] = ACTIONS(69),
    [sym_php_opcode] = ACTIONS(69),
    [sym_pla_opcode] = ACTIONS(69),
    [sym_plp_opcode] = ACTIONS(69),
    [sym_rol_opcode] = ACTIONS(69),
    [sym_ror_opcode] = ACTIONS(69),
    [sym_rti_opcode] = ACTIONS(69),
    [sym_rts_opcode] = ACTIONS(69),
    [sym_sbc_opcode] = ACTIONS(69),
    [sym_sec_opcode] = ACTIONS(69),
    [sym_sed_opcode] = ACTIONS(69),
    [sym_sei_opcode] = ACTIONS(69),
    [sym_sta_opcode] = ACTIONS(69),
    [sym_stx_opcode] = ACTIONS(69),
    [sym_sty_opcode] = ACTIONS(69),
    [sym_tax_opcode] = ACTIONS(69),
    [sym_tay_opcode] = ACTIONS(69),
    [sym_tsx_opcode] = ACTIONS(69),
    [sym_txa_opcode] = ACTIONS(69),
    [sym_tcs_opcode] = ACTIONS(69),
    [sym_tya_opcode] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(77),
    [anon_sym_CARET] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_DOTMOD] = ACTIONS(85),
    [anon_sym_DOTBITAND] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_DOTBITXOR] = ACTIONS(79),
    [anon_sym_DOTSHL] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(91),
    [anon_sym_DOTSHR] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_DOTBITOR] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_LT_GT] = ACTIONS(101),
    [anon_sym_LT_EQ] = ACTIONS(103),
    [anon_sym_GT_EQ] = ACTIONS(105),
    [anon_sym_DOTAND] = ACTIONS(67),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_DOTXOR] = ACTIONS(67),
    [anon_sym_DOTOR] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [sym_a16_ctrl_cmd] = ACTIONS(67),
    [sym_a8_ctrl_cmd] = ACTIONS(67),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(67),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(67),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(67),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(67),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(67),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(67),
    [sym_bss_ctrl_cmd] = ACTIONS(67),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(67),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(67),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(67),
    [sym_code_ctrl_cmd] = ACTIONS(67),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(67),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [sym_adc_opcode] = ACTIONS(109),
    [sym_and_opcode] = ACTIONS(109),
    [sym_asl_opcode] = ACTIONS(109),
    [sym_bcc_opcode] = ACTIONS(109),
    [sym_bcs_opcode] = ACTIONS(109),
    [sym_beq_opcode] = ACTIONS(109),
    [sym_bit_opcode] = ACTIONS(109),
    [sym_bmi_opcode] = ACTIONS(109),
    [sym_bne_opcode] = ACTIONS(109),
    [sym_bpl_opcode] = ACTIONS(109),
    [sym_brk_opcode] = ACTIONS(109),
    [sym_bvc_opcode] = ACTIONS(109),
    [sym_bvs_opcode] = ACTIONS(109),
    [sym_clc_opcode] = ACTIONS(109),
    [sym_cld_opcode] = ACTIONS(109),
    [sym_cli_opcode] = ACTIONS(109),
    [sym_clv_opcode] = ACTIONS(109),
    [sym_cmp_opcode] = ACTIONS(109),
    [sym_cpx_opcode] = ACTIONS(109),
    [sym_cpy_opcode] = ACTIONS(109),
    [sym_dec_opcode] = ACTIONS(109),
    [sym_dex_opcode] = ACTIONS(109),
    [sym_dey_opcode] = ACTIONS(109),
    [sym_eor_opcode] = ACTIONS(109),
    [sym_inc_opcode] = ACTIONS(109),
    [sym_inx_opcode] = ACTIONS(109),
    [sym_iny_opcode] = ACTIONS(109),
    [sym_jmp_opcode] = ACTIONS(109),
    [sym_jsr_opcode] = ACTIONS(109),
    [sym_lda_opcode] = ACTIONS(109),
    [sym_ldx_opcode] = ACTIONS(109),
    [sym_ldy_opcode] = ACTIONS(109),
    [sym_lsr_opcode] = ACTIONS(109),
    [sym_nop_opcode] = ACTIONS(109),
    [sym_ora_opcode] = ACTIONS(109),
    [sym_pha_opcode] = ACTIONS(109),
    [sym_php_opcode] = ACTIONS(109),
    [sym_pla_opcode] = ACTIONS(109),
    [sym_plp_opcode] = ACTIONS(109),
    [sym_rol_opcode] = ACTIONS(109),
    [sym_ror_opcode] = ACTIONS(109),
    [sym_rti_opcode] = ACTIONS(109),
    [sym_rts_opcode] = ACTIONS(109),
    [sym_sbc_opcode] = ACTIONS(109),
    [sym_sec_opcode] = ACTIONS(109),
    [sym_sed_opcode] = ACTIONS(109),
    [sym_sei_opcode] = ACTIONS(109),
    [sym_sta_opcode] = ACTIONS(109),
    [sym_stx_opcode] = ACTIONS(109),
    [sym_sty_opcode] = ACTIONS(109),
    [sym_tax_opcode] = ACTIONS(109),
    [sym_tay_opcode] = ACTIONS(109),
    [sym_tsx_opcode] = ACTIONS(109),
    [sym_txa_opcode] = ACTIONS(109),
    [sym_tcs_opcode] = ACTIONS(109),
    [sym_tya_opcode] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_DOTMOD] = ACTIONS(85),
    [anon_sym_DOTBITAND] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_DOTBITXOR] = ACTIONS(79),
    [anon_sym_DOTSHL] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(91),
    [anon_sym_DOTSHR] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_DOTBITOR] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_EQ] = ACTIONS(107),
    [anon_sym_LT_GT] = ACTIONS(107),
    [anon_sym_LT_EQ] = ACTIONS(107),
    [anon_sym_GT_EQ] = ACTIONS(107),
    [anon_sym_DOTAND] = ACTIONS(107),
    [anon_sym_AMP_AMP] = ACTIONS(107),
    [anon_sym_DOTXOR] = ACTIONS(107),
    [anon_sym_DOTOR] = ACTIONS(107),
    [anon_sym_PIPE_PIPE] = ACTIONS(107),
    [sym_a16_ctrl_cmd] = ACTIONS(107),
    [sym_a8_ctrl_cmd] = ACTIONS(107),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(107),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(107),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(107),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(107),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(107),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(107),
    [sym_bss_ctrl_cmd] = ACTIONS(107),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(107),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(107),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(107),
    [sym_code_ctrl_cmd] = ACTIONS(107),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(107),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(111),
    [anon_sym_COMMA] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [sym_adc_opcode] = ACTIONS(113),
    [sym_and_opcode] = ACTIONS(113),
    [sym_asl_opcode] = ACTIONS(113),
    [sym_bcc_opcode] = ACTIONS(113),
    [sym_bcs_opcode] = ACTIONS(113),
    [sym_beq_opcode] = ACTIONS(113),
    [sym_bit_opcode] = ACTIONS(113),
    [sym_bmi_opcode] = ACTIONS(113),
    [sym_bne_opcode] = ACTIONS(113),
    [sym_bpl_opcode] = ACTIONS(113),
    [sym_brk_opcode] = ACTIONS(113),
    [sym_bvc_opcode] = ACTIONS(113),
    [sym_bvs_opcode] = ACTIONS(113),
    [sym_clc_opcode] = ACTIONS(113),
    [sym_cld_opcode] = ACTIONS(113),
    [sym_cli_opcode] = ACTIONS(113),
    [sym_clv_opcode] = ACTIONS(113),
    [sym_cmp_opcode] = ACTIONS(113),
    [sym_cpx_opcode] = ACTIONS(113),
    [sym_cpy_opcode] = ACTIONS(113),
    [sym_dec_opcode] = ACTIONS(113),
    [sym_dex_opcode] = ACTIONS(113),
    [sym_dey_opcode] = ACTIONS(113),
    [sym_eor_opcode] = ACTIONS(113),
    [sym_inc_opcode] = ACTIONS(113),
    [sym_inx_opcode] = ACTIONS(113),
    [sym_iny_opcode] = ACTIONS(113),
    [sym_jmp_opcode] = ACTIONS(113),
    [sym_jsr_opcode] = ACTIONS(113),
    [sym_lda_opcode] = ACTIONS(113),
    [sym_ldx_opcode] = ACTIONS(113),
    [sym_ldy_opcode] = ACTIONS(113),
    [sym_lsr_opcode] = ACTIONS(113),
    [sym_nop_opcode] = ACTIONS(113),
    [sym_ora_opcode] = ACTIONS(113),
    [sym_pha_opcode] = ACTIONS(113),
    [sym_php_opcode] = ACTIONS(113),
    [sym_pla_opcode] = ACTIONS(113),
    [sym_plp_opcode] = ACTIONS(113),
    [sym_rol_opcode] = ACTIONS(113),
    [sym_ror_opcode] = ACTIONS(113),
    [sym_rti_opcode] = ACTIONS(113),
    [sym_rts_opcode] = ACTIONS(113),
    [sym_sbc_opcode] = ACTIONS(113),
    [sym_sec_opcode] = ACTIONS(113),
    [sym_sed_opcode] = ACTIONS(113),
    [sym_sei_opcode] = ACTIONS(113),
    [sym_sta_opcode] = ACTIONS(113),
    [sym_stx_opcode] = ACTIONS(113),
    [sym_sty_opcode] = ACTIONS(113),
    [sym_tax_opcode] = ACTIONS(113),
    [sym_tay_opcode] = ACTIONS(113),
    [sym_tsx_opcode] = ACTIONS(113),
    [sym_txa_opcode] = ACTIONS(113),
    [sym_tcs_opcode] = ACTIONS(113),
    [sym_tya_opcode] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_LT] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(113),
    [anon_sym_CARET] = ACTIONS(111),
    [anon_sym_STAR] = ACTIONS(111),
    [anon_sym_SLASH] = ACTIONS(111),
    [anon_sym_DOTMOD] = ACTIONS(111),
    [anon_sym_DOTBITAND] = ACTIONS(111),
    [anon_sym_AMP] = ACTIONS(113),
    [anon_sym_DOTBITXOR] = ACTIONS(111),
    [anon_sym_DOTSHL] = ACTIONS(111),
    [anon_sym_LT_LT] = ACTIONS(111),
    [anon_sym_DOTSHR] = ACTIONS(111),
    [anon_sym_GT_GT] = ACTIONS(111),
    [anon_sym_DOTBITOR] = ACTIONS(111),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_EQ] = ACTIONS(111),
    [anon_sym_LT_GT] = ACTIONS(111),
    [anon_sym_LT_EQ] = ACTIONS(111),
    [anon_sym_GT_EQ] = ACTIONS(111),
    [anon_sym_DOTAND] = ACTIONS(111),
    [anon_sym_AMP_AMP] = ACTIONS(111),
    [anon_sym_DOTXOR] = ACTIONS(111),
    [anon_sym_DOTOR] = ACTIONS(111),
    [anon_sym_PIPE_PIPE] = ACTIONS(111),
    [sym_a16_ctrl_cmd] = ACTIONS(111),
    [sym_a8_ctrl_cmd] = ACTIONS(111),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(111),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(111),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(111),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(111),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(111),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(111),
    [sym_bss_ctrl_cmd] = ACTIONS(111),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(111),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(111),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(111),
    [sym_code_ctrl_cmd] = ACTIONS(111),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(111),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(115),
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_RPAREN] = ACTIONS(115),
    [sym_adc_opcode] = ACTIONS(117),
    [sym_and_opcode] = ACTIONS(117),
    [sym_asl_opcode] = ACTIONS(117),
    [sym_bcc_opcode] = ACTIONS(117),
    [sym_bcs_opcode] = ACTIONS(117),
    [sym_beq_opcode] = ACTIONS(117),
    [sym_bit_opcode] = ACTIONS(117),
    [sym_bmi_opcode] = ACTIONS(117),
    [sym_bne_opcode] = ACTIONS(117),
    [sym_bpl_opcode] = ACTIONS(117),
    [sym_brk_opcode] = ACTIONS(117),
    [sym_bvc_opcode] = ACTIONS(117),
    [sym_bvs_opcode] = ACTIONS(117),
    [sym_clc_opcode] = ACTIONS(117),
    [sym_cld_opcode] = ACTIONS(117),
    [sym_cli_opcode] = ACTIONS(117),
    [sym_clv_opcode] = ACTIONS(117),
    [sym_cmp_opcode] = ACTIONS(117),
    [sym_cpx_opcode] = ACTIONS(117),
    [sym_cpy_opcode] = ACTIONS(117),
    [sym_dec_opcode] = ACTIONS(117),
    [sym_dex_opcode] = ACTIONS(117),
    [sym_dey_opcode] = ACTIONS(117),
    [sym_eor_opcode] = ACTIONS(117),
    [sym_inc_opcode] = ACTIONS(117),
    [sym_inx_opcode] = ACTIONS(117),
    [sym_iny_opcode] = ACTIONS(117),
    [sym_jmp_opcode] = ACTIONS(117),
    [sym_jsr_opcode] = ACTIONS(117),
    [sym_lda_opcode] = ACTIONS(117),
    [sym_ldx_opcode] = ACTIONS(117),
    [sym_ldy_opcode] = ACTIONS(117),
    [sym_lsr_opcode] = ACTIONS(117),
    [sym_nop_opcode] = ACTIONS(117),
    [sym_ora_opcode] = ACTIONS(117),
    [sym_pha_opcode] = ACTIONS(117),
    [sym_php_opcode] = ACTIONS(117),
    [sym_pla_opcode] = ACTIONS(117),
    [sym_plp_opcode] = ACTIONS(117),
    [sym_rol_opcode] = ACTIONS(117),
    [sym_ror_opcode] = ACTIONS(117),
    [sym_rti_opcode] = ACTIONS(117),
    [sym_rts_opcode] = ACTIONS(117),
    [sym_sbc_opcode] = ACTIONS(117),
    [sym_sec_opcode] = ACTIONS(117),
    [sym_sed_opcode] = ACTIONS(117),
    [sym_sei_opcode] = ACTIONS(117),
    [sym_sta_opcode] = ACTIONS(117),
    [sym_stx_opcode] = ACTIONS(117),
    [sym_sty_opcode] = ACTIONS(117),
    [sym_tax_opcode] = ACTIONS(117),
    [sym_tay_opcode] = ACTIONS(117),
    [sym_tsx_opcode] = ACTIONS(117),
    [sym_txa_opcode] = ACTIONS(117),
    [sym_tcs_opcode] = ACTIONS(117),
    [sym_tya_opcode] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_LT] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_CARET] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_DOTMOD] = ACTIONS(85),
    [anon_sym_DOTBITAND] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_DOTBITXOR] = ACTIONS(79),
    [anon_sym_DOTSHL] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(91),
    [anon_sym_DOTSHR] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_DOTBITOR] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_EQ] = ACTIONS(115),
    [anon_sym_LT_GT] = ACTIONS(115),
    [anon_sym_LT_EQ] = ACTIONS(115),
    [anon_sym_GT_EQ] = ACTIONS(115),
    [anon_sym_DOTAND] = ACTIONS(115),
    [anon_sym_AMP_AMP] = ACTIONS(115),
    [anon_sym_DOTXOR] = ACTIONS(115),
    [anon_sym_DOTOR] = ACTIONS(115),
    [anon_sym_PIPE_PIPE] = ACTIONS(115),
    [sym_a16_ctrl_cmd] = ACTIONS(115),
    [sym_a8_ctrl_cmd] = ACTIONS(115),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(115),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(115),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(115),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(115),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(115),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(115),
    [sym_bss_ctrl_cmd] = ACTIONS(115),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(115),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(115),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(115),
    [sym_code_ctrl_cmd] = ACTIONS(115),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(115),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(119),
    [anon_sym_COMMA] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(119),
    [sym_adc_opcode] = ACTIONS(121),
    [sym_and_opcode] = ACTIONS(121),
    [sym_asl_opcode] = ACTIONS(121),
    [sym_bcc_opcode] = ACTIONS(121),
    [sym_bcs_opcode] = ACTIONS(121),
    [sym_beq_opcode] = ACTIONS(121),
    [sym_bit_opcode] = ACTIONS(121),
    [sym_bmi_opcode] = ACTIONS(121),
    [sym_bne_opcode] = ACTIONS(121),
    [sym_bpl_opcode] = ACTIONS(121),
    [sym_brk_opcode] = ACTIONS(121),
    [sym_bvc_opcode] = ACTIONS(121),
    [sym_bvs_opcode] = ACTIONS(121),
    [sym_clc_opcode] = ACTIONS(121),
    [sym_cld_opcode] = ACTIONS(121),
    [sym_cli_opcode] = ACTIONS(121),
    [sym_clv_opcode] = ACTIONS(121),
    [sym_cmp_opcode] = ACTIONS(121),
    [sym_cpx_opcode] = ACTIONS(121),
    [sym_cpy_opcode] = ACTIONS(121),
    [sym_dec_opcode] = ACTIONS(121),
    [sym_dex_opcode] = ACTIONS(121),
    [sym_dey_opcode] = ACTIONS(121),
    [sym_eor_opcode] = ACTIONS(121),
    [sym_inc_opcode] = ACTIONS(121),
    [sym_inx_opcode] = ACTIONS(121),
    [sym_iny_opcode] = ACTIONS(121),
    [sym_jmp_opcode] = ACTIONS(121),
    [sym_jsr_opcode] = ACTIONS(121),
    [sym_lda_opcode] = ACTIONS(121),
    [sym_ldx_opcode] = ACTIONS(121),
    [sym_ldy_opcode] = ACTIONS(121),
    [sym_lsr_opcode] = ACTIONS(121),
    [sym_nop_opcode] = ACTIONS(121),
    [sym_ora_opcode] = ACTIONS(121),
    [sym_pha_opcode] = ACTIONS(121),
    [sym_php_opcode] = ACTIONS(121),
    [sym_pla_opcode] = ACTIONS(121),
    [sym_plp_opcode] = ACTIONS(121),
    [sym_rol_opcode] = ACTIONS(121),
    [sym_ror_opcode] = ACTIONS(121),
    [sym_rti_opcode] = ACTIONS(121),
    [sym_rts_opcode] = ACTIONS(121),
    [sym_sbc_opcode] = ACTIONS(121),
    [sym_sec_opcode] = ACTIONS(121),
    [sym_sed_opcode] = ACTIONS(121),
    [sym_sei_opcode] = ACTIONS(121),
    [sym_sta_opcode] = ACTIONS(121),
    [sym_stx_opcode] = ACTIONS(121),
    [sym_sty_opcode] = ACTIONS(121),
    [sym_tax_opcode] = ACTIONS(121),
    [sym_tay_opcode] = ACTIONS(121),
    [sym_tsx_opcode] = ACTIONS(121),
    [sym_txa_opcode] = ACTIONS(121),
    [sym_tcs_opcode] = ACTIONS(121),
    [sym_tya_opcode] = ACTIONS(121),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_LT] = ACTIONS(121),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_CARET] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_DOTMOD] = ACTIONS(85),
    [anon_sym_DOTBITAND] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_DOTBITXOR] = ACTIONS(79),
    [anon_sym_DOTSHL] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(91),
    [anon_sym_DOTSHR] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_DOTBITOR] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_EQ] = ACTIONS(119),
    [anon_sym_LT_GT] = ACTIONS(119),
    [anon_sym_LT_EQ] = ACTIONS(119),
    [anon_sym_GT_EQ] = ACTIONS(119),
    [anon_sym_DOTAND] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(119),
    [anon_sym_DOTXOR] = ACTIONS(119),
    [anon_sym_DOTOR] = ACTIONS(119),
    [anon_sym_PIPE_PIPE] = ACTIONS(119),
    [sym_a16_ctrl_cmd] = ACTIONS(119),
    [sym_a8_ctrl_cmd] = ACTIONS(119),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(119),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(119),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(119),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(119),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(119),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(119),
    [sym_bss_ctrl_cmd] = ACTIONS(119),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(119),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(119),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(119),
    [sym_code_ctrl_cmd] = ACTIONS(119),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(119),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(123),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_RPAREN] = ACTIONS(123),
    [sym_adc_opcode] = ACTIONS(125),
    [sym_and_opcode] = ACTIONS(125),
    [sym_asl_opcode] = ACTIONS(125),
    [sym_bcc_opcode] = ACTIONS(125),
    [sym_bcs_opcode] = ACTIONS(125),
    [sym_beq_opcode] = ACTIONS(125),
    [sym_bit_opcode] = ACTIONS(125),
    [sym_bmi_opcode] = ACTIONS(125),
    [sym_bne_opcode] = ACTIONS(125),
    [sym_bpl_opcode] = ACTIONS(125),
    [sym_brk_opcode] = ACTIONS(125),
    [sym_bvc_opcode] = ACTIONS(125),
    [sym_bvs_opcode] = ACTIONS(125),
    [sym_clc_opcode] = ACTIONS(125),
    [sym_cld_opcode] = ACTIONS(125),
    [sym_cli_opcode] = ACTIONS(125),
    [sym_clv_opcode] = ACTIONS(125),
    [sym_cmp_opcode] = ACTIONS(125),
    [sym_cpx_opcode] = ACTIONS(125),
    [sym_cpy_opcode] = ACTIONS(125),
    [sym_dec_opcode] = ACTIONS(125),
    [sym_dex_opcode] = ACTIONS(125),
    [sym_dey_opcode] = ACTIONS(125),
    [sym_eor_opcode] = ACTIONS(125),
    [sym_inc_opcode] = ACTIONS(125),
    [sym_inx_opcode] = ACTIONS(125),
    [sym_iny_opcode] = ACTIONS(125),
    [sym_jmp_opcode] = ACTIONS(125),
    [sym_jsr_opcode] = ACTIONS(125),
    [sym_lda_opcode] = ACTIONS(125),
    [sym_ldx_opcode] = ACTIONS(125),
    [sym_ldy_opcode] = ACTIONS(125),
    [sym_lsr_opcode] = ACTIONS(125),
    [sym_nop_opcode] = ACTIONS(125),
    [sym_ora_opcode] = ACTIONS(125),
    [sym_pha_opcode] = ACTIONS(125),
    [sym_php_opcode] = ACTIONS(125),
    [sym_pla_opcode] = ACTIONS(125),
    [sym_plp_opcode] = ACTIONS(125),
    [sym_rol_opcode] = ACTIONS(125),
    [sym_ror_opcode] = ACTIONS(125),
    [sym_rti_opcode] = ACTIONS(125),
    [sym_rts_opcode] = ACTIONS(125),
    [sym_sbc_opcode] = ACTIONS(125),
    [sym_sec_opcode] = ACTIONS(125),
    [sym_sed_opcode] = ACTIONS(125),
    [sym_sei_opcode] = ACTIONS(125),
    [sym_sta_opcode] = ACTIONS(125),
    [sym_stx_opcode] = ACTIONS(125),
    [sym_sty_opcode] = ACTIONS(125),
    [sym_tax_opcode] = ACTIONS(125),
    [sym_tay_opcode] = ACTIONS(125),
    [sym_tsx_opcode] = ACTIONS(125),
    [sym_txa_opcode] = ACTIONS(125),
    [sym_tcs_opcode] = ACTIONS(125),
    [sym_tya_opcode] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_LT] = ACTIONS(125),
    [anon_sym_GT] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_DOTMOD] = ACTIONS(85),
    [anon_sym_DOTBITAND] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_DOTBITXOR] = ACTIONS(79),
    [anon_sym_DOTSHL] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(91),
    [anon_sym_DOTSHR] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_DOTBITOR] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_EQ] = ACTIONS(123),
    [anon_sym_LT_GT] = ACTIONS(123),
    [anon_sym_LT_EQ] = ACTIONS(123),
    [anon_sym_GT_EQ] = ACTIONS(123),
    [anon_sym_DOTAND] = ACTIONS(123),
    [anon_sym_AMP_AMP] = ACTIONS(123),
    [anon_sym_DOTXOR] = ACTIONS(123),
    [anon_sym_DOTOR] = ACTIONS(123),
    [anon_sym_PIPE_PIPE] = ACTIONS(123),
    [sym_a16_ctrl_cmd] = ACTIONS(123),
    [sym_a8_ctrl_cmd] = ACTIONS(123),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(123),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(123),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(123),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(123),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(123),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(123),
    [sym_bss_ctrl_cmd] = ACTIONS(123),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(123),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(123),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(123),
    [sym_code_ctrl_cmd] = ACTIONS(123),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(123),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(127),
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_RPAREN] = ACTIONS(127),
    [sym_adc_opcode] = ACTIONS(129),
    [sym_and_opcode] = ACTIONS(129),
    [sym_asl_opcode] = ACTIONS(129),
    [sym_bcc_opcode] = ACTIONS(129),
    [sym_bcs_opcode] = ACTIONS(129),
    [sym_beq_opcode] = ACTIONS(129),
    [sym_bit_opcode] = ACTIONS(129),
    [sym_bmi_opcode] = ACTIONS(129),
    [sym_bne_opcode] = ACTIONS(129),
    [sym_bpl_opcode] = ACTIONS(129),
    [sym_brk_opcode] = ACTIONS(129),
    [sym_bvc_opcode] = ACTIONS(129),
    [sym_bvs_opcode] = ACTIONS(129),
    [sym_clc_opcode] = ACTIONS(129),
    [sym_cld_opcode] = ACTIONS(129),
    [sym_cli_opcode] = ACTIONS(129),
    [sym_clv_opcode] = ACTIONS(129),
    [sym_cmp_opcode] = ACTIONS(129),
    [sym_cpx_opcode] = ACTIONS(129),
    [sym_cpy_opcode] = ACTIONS(129),
    [sym_dec_opcode] = ACTIONS(129),
    [sym_dex_opcode] = ACTIONS(129),
    [sym_dey_opcode] = ACTIONS(129),
    [sym_eor_opcode] = ACTIONS(129),
    [sym_inc_opcode] = ACTIONS(129),
    [sym_inx_opcode] = ACTIONS(129),
    [sym_iny_opcode] = ACTIONS(129),
    [sym_jmp_opcode] = ACTIONS(129),
    [sym_jsr_opcode] = ACTIONS(129),
    [sym_lda_opcode] = ACTIONS(129),
    [sym_ldx_opcode] = ACTIONS(129),
    [sym_ldy_opcode] = ACTIONS(129),
    [sym_lsr_opcode] = ACTIONS(129),
    [sym_nop_opcode] = ACTIONS(129),
    [sym_ora_opcode] = ACTIONS(129),
    [sym_pha_opcode] = ACTIONS(129),
    [sym_php_opcode] = ACTIONS(129),
    [sym_pla_opcode] = ACTIONS(129),
    [sym_plp_opcode] = ACTIONS(129),
    [sym_rol_opcode] = ACTIONS(129),
    [sym_ror_opcode] = ACTIONS(129),
    [sym_rti_opcode] = ACTIONS(129),
    [sym_rts_opcode] = ACTIONS(129),
    [sym_sbc_opcode] = ACTIONS(129),
    [sym_sec_opcode] = ACTIONS(129),
    [sym_sed_opcode] = ACTIONS(129),
    [sym_sei_opcode] = ACTIONS(129),
    [sym_sta_opcode] = ACTIONS(129),
    [sym_stx_opcode] = ACTIONS(129),
    [sym_sty_opcode] = ACTIONS(129),
    [sym_tax_opcode] = ACTIONS(129),
    [sym_tay_opcode] = ACTIONS(129),
    [sym_tsx_opcode] = ACTIONS(129),
    [sym_txa_opcode] = ACTIONS(129),
    [sym_tcs_opcode] = ACTIONS(129),
    [sym_tya_opcode] = ACTIONS(129),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_LT] = ACTIONS(129),
    [anon_sym_GT] = ACTIONS(129),
    [anon_sym_CARET] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_DOTMOD] = ACTIONS(85),
    [anon_sym_DOTBITAND] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_DOTBITXOR] = ACTIONS(79),
    [anon_sym_DOTSHL] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(91),
    [anon_sym_DOTSHR] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_DOTBITOR] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(129),
    [anon_sym_EQ] = ACTIONS(127),
    [anon_sym_LT_GT] = ACTIONS(127),
    [anon_sym_LT_EQ] = ACTIONS(127),
    [anon_sym_GT_EQ] = ACTIONS(127),
    [anon_sym_DOTAND] = ACTIONS(127),
    [anon_sym_AMP_AMP] = ACTIONS(127),
    [anon_sym_DOTXOR] = ACTIONS(127),
    [anon_sym_DOTOR] = ACTIONS(127),
    [anon_sym_PIPE_PIPE] = ACTIONS(127),
    [sym_a16_ctrl_cmd] = ACTIONS(127),
    [sym_a8_ctrl_cmd] = ACTIONS(127),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(127),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(127),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(127),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(127),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(127),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(127),
    [sym_bss_ctrl_cmd] = ACTIONS(127),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(127),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(127),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(127),
    [sym_code_ctrl_cmd] = ACTIONS(127),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(127),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(131),
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_RPAREN] = ACTIONS(131),
    [sym_adc_opcode] = ACTIONS(133),
    [sym_and_opcode] = ACTIONS(133),
    [sym_asl_opcode] = ACTIONS(133),
    [sym_bcc_opcode] = ACTIONS(133),
    [sym_bcs_opcode] = ACTIONS(133),
    [sym_beq_opcode] = ACTIONS(133),
    [sym_bit_opcode] = ACTIONS(133),
    [sym_bmi_opcode] = ACTIONS(133),
    [sym_bne_opcode] = ACTIONS(133),
    [sym_bpl_opcode] = ACTIONS(133),
    [sym_brk_opcode] = ACTIONS(133),
    [sym_bvc_opcode] = ACTIONS(133),
    [sym_bvs_opcode] = ACTIONS(133),
    [sym_clc_opcode] = ACTIONS(133),
    [sym_cld_opcode] = ACTIONS(133),
    [sym_cli_opcode] = ACTIONS(133),
    [sym_clv_opcode] = ACTIONS(133),
    [sym_cmp_opcode] = ACTIONS(133),
    [sym_cpx_opcode] = ACTIONS(133),
    [sym_cpy_opcode] = ACTIONS(133),
    [sym_dec_opcode] = ACTIONS(133),
    [sym_dex_opcode] = ACTIONS(133),
    [sym_dey_opcode] = ACTIONS(133),
    [sym_eor_opcode] = ACTIONS(133),
    [sym_inc_opcode] = ACTIONS(133),
    [sym_inx_opcode] = ACTIONS(133),
    [sym_iny_opcode] = ACTIONS(133),
    [sym_jmp_opcode] = ACTIONS(133),
    [sym_jsr_opcode] = ACTIONS(133),
    [sym_lda_opcode] = ACTIONS(133),
    [sym_ldx_opcode] = ACTIONS(133),
    [sym_ldy_opcode] = ACTIONS(133),
    [sym_lsr_opcode] = ACTIONS(133),
    [sym_nop_opcode] = ACTIONS(133),
    [sym_ora_opcode] = ACTIONS(133),
    [sym_pha_opcode] = ACTIONS(133),
    [sym_php_opcode] = ACTIONS(133),
    [sym_pla_opcode] = ACTIONS(133),
    [sym_plp_opcode] = ACTIONS(133),
    [sym_rol_opcode] = ACTIONS(133),
    [sym_ror_opcode] = ACTIONS(133),
    [sym_rti_opcode] = ACTIONS(133),
    [sym_rts_opcode] = ACTIONS(133),
    [sym_sbc_opcode] = ACTIONS(133),
    [sym_sec_opcode] = ACTIONS(133),
    [sym_sed_opcode] = ACTIONS(133),
    [sym_sei_opcode] = ACTIONS(133),
    [sym_sta_opcode] = ACTIONS(133),
    [sym_stx_opcode] = ACTIONS(133),
    [sym_sty_opcode] = ACTIONS(133),
    [sym_tax_opcode] = ACTIONS(133),
    [sym_tay_opcode] = ACTIONS(133),
    [sym_tsx_opcode] = ACTIONS(133),
    [sym_txa_opcode] = ACTIONS(133),
    [sym_tcs_opcode] = ACTIONS(133),
    [sym_tya_opcode] = ACTIONS(133),
    [anon_sym_PLUS] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_LT] = ACTIONS(133),
    [anon_sym_GT] = ACTIONS(133),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_STAR] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(131),
    [anon_sym_DOTMOD] = ACTIONS(131),
    [anon_sym_DOTBITAND] = ACTIONS(131),
    [anon_sym_AMP] = ACTIONS(133),
    [anon_sym_DOTBITXOR] = ACTIONS(131),
    [anon_sym_DOTSHL] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(131),
    [anon_sym_DOTSHR] = ACTIONS(131),
    [anon_sym_GT_GT] = ACTIONS(131),
    [anon_sym_DOTBITOR] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(133),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_LT_GT] = ACTIONS(131),
    [anon_sym_LT_EQ] = ACTIONS(131),
    [anon_sym_GT_EQ] = ACTIONS(131),
    [anon_sym_DOTAND] = ACTIONS(131),
    [anon_sym_AMP_AMP] = ACTIONS(131),
    [anon_sym_DOTXOR] = ACTIONS(131),
    [anon_sym_DOTOR] = ACTIONS(131),
    [anon_sym_PIPE_PIPE] = ACTIONS(131),
    [sym_a16_ctrl_cmd] = ACTIONS(131),
    [sym_a8_ctrl_cmd] = ACTIONS(131),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(131),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(131),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(131),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(131),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(131),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(131),
    [sym_bss_ctrl_cmd] = ACTIONS(131),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(131),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(131),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(131),
    [sym_code_ctrl_cmd] = ACTIONS(131),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(131),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(135),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(135),
    [anon_sym_COMMA] = ACTIONS(135),
    [anon_sym_RPAREN] = ACTIONS(135),
    [sym_adc_opcode] = ACTIONS(137),
    [sym_and_opcode] = ACTIONS(137),
    [sym_asl_opcode] = ACTIONS(137),
    [sym_bcc_opcode] = ACTIONS(137),
    [sym_bcs_opcode] = ACTIONS(137),
    [sym_beq_opcode] = ACTIONS(137),
    [sym_bit_opcode] = ACTIONS(137),
    [sym_bmi_opcode] = ACTIONS(137),
    [sym_bne_opcode] = ACTIONS(137),
    [sym_bpl_opcode] = ACTIONS(137),
    [sym_brk_opcode] = ACTIONS(137),
    [sym_bvc_opcode] = ACTIONS(137),
    [sym_bvs_opcode] = ACTIONS(137),
    [sym_clc_opcode] = ACTIONS(137),
    [sym_cld_opcode] = ACTIONS(137),
    [sym_cli_opcode] = ACTIONS(137),
    [sym_clv_opcode] = ACTIONS(137),
    [sym_cmp_opcode] = ACTIONS(137),
    [sym_cpx_opcode] = ACTIONS(137),
    [sym_cpy_opcode] = ACTIONS(137),
    [sym_dec_opcode] = ACTIONS(137),
    [sym_dex_opcode] = ACTIONS(137),
    [sym_dey_opcode] = ACTIONS(137),
    [sym_eor_opcode] = ACTIONS(137),
    [sym_inc_opcode] = ACTIONS(137),
    [sym_inx_opcode] = ACTIONS(137),
    [sym_iny_opcode] = ACTIONS(137),
    [sym_jmp_opcode] = ACTIONS(137),
    [sym_jsr_opcode] = ACTIONS(137),
    [sym_lda_opcode] = ACTIONS(137),
    [sym_ldx_opcode] = ACTIONS(137),
    [sym_ldy_opcode] = ACTIONS(137),
    [sym_lsr_opcode] = ACTIONS(137),
    [sym_nop_opcode] = ACTIONS(137),
    [sym_ora_opcode] = ACTIONS(137),
    [sym_pha_opcode] = ACTIONS(137),
    [sym_php_opcode] = ACTIONS(137),
    [sym_pla_opcode] = ACTIONS(137),
    [sym_plp_opcode] = ACTIONS(137),
    [sym_rol_opcode] = ACTIONS(137),
    [sym_ror_opcode] = ACTIONS(137),
    [sym_rti_opcode] = ACTIONS(137),
    [sym_rts_opcode] = ACTIONS(137),
    [sym_sbc_opcode] = ACTIONS(137),
    [sym_sec_opcode] = ACTIONS(137),
    [sym_sed_opcode] = ACTIONS(137),
    [sym_sei_opcode] = ACTIONS(137),
    [sym_sta_opcode] = ACTIONS(137),
    [sym_stx_opcode] = ACTIONS(137),
    [sym_sty_opcode] = ACTIONS(137),
    [sym_tax_opcode] = ACTIONS(137),
    [sym_tay_opcode] = ACTIONS(137),
    [sym_tsx_opcode] = ACTIONS(137),
    [sym_txa_opcode] = ACTIONS(137),
    [sym_tcs_opcode] = ACTIONS(137),
    [sym_tya_opcode] = ACTIONS(137),
    [anon_sym_PLUS] = ACTIONS(135),
    [anon_sym_DASH] = ACTIONS(135),
    [anon_sym_LT] = ACTIONS(137),
    [anon_sym_GT] = ACTIONS(137),
    [anon_sym_CARET] = ACTIONS(135),
    [anon_sym_STAR] = ACTIONS(135),
    [anon_sym_SLASH] = ACTIONS(135),
    [anon_sym_DOTMOD] = ACTIONS(135),
    [anon_sym_DOTBITAND] = ACTIONS(135),
    [anon_sym_AMP] = ACTIONS(137),
    [anon_sym_DOTBITXOR] = ACTIONS(135),
    [anon_sym_DOTSHL] = ACTIONS(135),
    [anon_sym_LT_LT] = ACTIONS(135),
    [anon_sym_DOTSHR] = ACTIONS(135),
    [anon_sym_GT_GT] = ACTIONS(135),
    [anon_sym_DOTBITOR] = ACTIONS(135),
    [anon_sym_PIPE] = ACTIONS(137),
    [anon_sym_EQ] = ACTIONS(135),
    [anon_sym_LT_GT] = ACTIONS(135),
    [anon_sym_LT_EQ] = ACTIONS(135),
    [anon_sym_GT_EQ] = ACTIONS(135),
    [anon_sym_DOTAND] = ACTIONS(135),
    [anon_sym_AMP_AMP] = ACTIONS(135),
    [anon_sym_DOTXOR] = ACTIONS(135),
    [anon_sym_DOTOR] = ACTIONS(135),
    [anon_sym_PIPE_PIPE] = ACTIONS(135),
    [sym_a16_ctrl_cmd] = ACTIONS(135),
    [sym_a8_ctrl_cmd] = ACTIONS(135),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(135),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(135),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(135),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(135),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(135),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(135),
    [sym_bss_ctrl_cmd] = ACTIONS(135),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(135),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(135),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(135),
    [sym_code_ctrl_cmd] = ACTIONS(135),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(135),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(139),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_RPAREN] = ACTIONS(139),
    [sym_adc_opcode] = ACTIONS(141),
    [sym_and_opcode] = ACTIONS(141),
    [sym_asl_opcode] = ACTIONS(141),
    [sym_bcc_opcode] = ACTIONS(141),
    [sym_bcs_opcode] = ACTIONS(141),
    [sym_beq_opcode] = ACTIONS(141),
    [sym_bit_opcode] = ACTIONS(141),
    [sym_bmi_opcode] = ACTIONS(141),
    [sym_bne_opcode] = ACTIONS(141),
    [sym_bpl_opcode] = ACTIONS(141),
    [sym_brk_opcode] = ACTIONS(141),
    [sym_bvc_opcode] = ACTIONS(141),
    [sym_bvs_opcode] = ACTIONS(141),
    [sym_clc_opcode] = ACTIONS(141),
    [sym_cld_opcode] = ACTIONS(141),
    [sym_cli_opcode] = ACTIONS(141),
    [sym_clv_opcode] = ACTIONS(141),
    [sym_cmp_opcode] = ACTIONS(141),
    [sym_cpx_opcode] = ACTIONS(141),
    [sym_cpy_opcode] = ACTIONS(141),
    [sym_dec_opcode] = ACTIONS(141),
    [sym_dex_opcode] = ACTIONS(141),
    [sym_dey_opcode] = ACTIONS(141),
    [sym_eor_opcode] = ACTIONS(141),
    [sym_inc_opcode] = ACTIONS(141),
    [sym_inx_opcode] = ACTIONS(141),
    [sym_iny_opcode] = ACTIONS(141),
    [sym_jmp_opcode] = ACTIONS(141),
    [sym_jsr_opcode] = ACTIONS(141),
    [sym_lda_opcode] = ACTIONS(141),
    [sym_ldx_opcode] = ACTIONS(141),
    [sym_ldy_opcode] = ACTIONS(141),
    [sym_lsr_opcode] = ACTIONS(141),
    [sym_nop_opcode] = ACTIONS(141),
    [sym_ora_opcode] = ACTIONS(141),
    [sym_pha_opcode] = ACTIONS(141),
    [sym_php_opcode] = ACTIONS(141),
    [sym_pla_opcode] = ACTIONS(141),
    [sym_plp_opcode] = ACTIONS(141),
    [sym_rol_opcode] = ACTIONS(141),
    [sym_ror_opcode] = ACTIONS(141),
    [sym_rti_opcode] = ACTIONS(141),
    [sym_rts_opcode] = ACTIONS(141),
    [sym_sbc_opcode] = ACTIONS(141),
    [sym_sec_opcode] = ACTIONS(141),
    [sym_sed_opcode] = ACTIONS(141),
    [sym_sei_opcode] = ACTIONS(141),
    [sym_sta_opcode] = ACTIONS(141),
    [sym_stx_opcode] = ACTIONS(141),
    [sym_sty_opcode] = ACTIONS(141),
    [sym_tax_opcode] = ACTIONS(141),
    [sym_tay_opcode] = ACTIONS(141),
    [sym_tsx_opcode] = ACTIONS(141),
    [sym_txa_opcode] = ACTIONS(141),
    [sym_tcs_opcode] = ACTIONS(141),
    [sym_tya_opcode] = ACTIONS(141),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_CARET] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(139),
    [anon_sym_DOTMOD] = ACTIONS(139),
    [anon_sym_DOTBITAND] = ACTIONS(139),
    [anon_sym_AMP] = ACTIONS(141),
    [anon_sym_DOTBITXOR] = ACTIONS(139),
    [anon_sym_DOTSHL] = ACTIONS(139),
    [anon_sym_LT_LT] = ACTIONS(139),
    [anon_sym_DOTSHR] = ACTIONS(139),
    [anon_sym_GT_GT] = ACTIONS(139),
    [anon_sym_DOTBITOR] = ACTIONS(139),
    [anon_sym_PIPE] = ACTIONS(141),
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_LT_GT] = ACTIONS(139),
    [anon_sym_LT_EQ] = ACTIONS(139),
    [anon_sym_GT_EQ] = ACTIONS(139),
    [anon_sym_DOTAND] = ACTIONS(139),
    [anon_sym_AMP_AMP] = ACTIONS(139),
    [anon_sym_DOTXOR] = ACTIONS(139),
    [anon_sym_DOTOR] = ACTIONS(139),
    [anon_sym_PIPE_PIPE] = ACTIONS(139),
    [sym_a16_ctrl_cmd] = ACTIONS(139),
    [sym_a8_ctrl_cmd] = ACTIONS(139),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(139),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(139),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(139),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(139),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(139),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(139),
    [sym_bss_ctrl_cmd] = ACTIONS(139),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(139),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(139),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(139),
    [sym_code_ctrl_cmd] = ACTIONS(139),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(139),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(143),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_RPAREN] = ACTIONS(143),
    [sym_adc_opcode] = ACTIONS(145),
    [sym_and_opcode] = ACTIONS(145),
    [sym_asl_opcode] = ACTIONS(145),
    [sym_bcc_opcode] = ACTIONS(145),
    [sym_bcs_opcode] = ACTIONS(145),
    [sym_beq_opcode] = ACTIONS(145),
    [sym_bit_opcode] = ACTIONS(145),
    [sym_bmi_opcode] = ACTIONS(145),
    [sym_bne_opcode] = ACTIONS(145),
    [sym_bpl_opcode] = ACTIONS(145),
    [sym_brk_opcode] = ACTIONS(145),
    [sym_bvc_opcode] = ACTIONS(145),
    [sym_bvs_opcode] = ACTIONS(145),
    [sym_clc_opcode] = ACTIONS(145),
    [sym_cld_opcode] = ACTIONS(145),
    [sym_cli_opcode] = ACTIONS(145),
    [sym_clv_opcode] = ACTIONS(145),
    [sym_cmp_opcode] = ACTIONS(145),
    [sym_cpx_opcode] = ACTIONS(145),
    [sym_cpy_opcode] = ACTIONS(145),
    [sym_dec_opcode] = ACTIONS(145),
    [sym_dex_opcode] = ACTIONS(145),
    [sym_dey_opcode] = ACTIONS(145),
    [sym_eor_opcode] = ACTIONS(145),
    [sym_inc_opcode] = ACTIONS(145),
    [sym_inx_opcode] = ACTIONS(145),
    [sym_iny_opcode] = ACTIONS(145),
    [sym_jmp_opcode] = ACTIONS(145),
    [sym_jsr_opcode] = ACTIONS(145),
    [sym_lda_opcode] = ACTIONS(145),
    [sym_ldx_opcode] = ACTIONS(145),
    [sym_ldy_opcode] = ACTIONS(145),
    [sym_lsr_opcode] = ACTIONS(145),
    [sym_nop_opcode] = ACTIONS(145),
    [sym_ora_opcode] = ACTIONS(145),
    [sym_pha_opcode] = ACTIONS(145),
    [sym_php_opcode] = ACTIONS(145),
    [sym_pla_opcode] = ACTIONS(145),
    [sym_plp_opcode] = ACTIONS(145),
    [sym_rol_opcode] = ACTIONS(145),
    [sym_ror_opcode] = ACTIONS(145),
    [sym_rti_opcode] = ACTIONS(145),
    [sym_rts_opcode] = ACTIONS(145),
    [sym_sbc_opcode] = ACTIONS(145),
    [sym_sec_opcode] = ACTIONS(145),
    [sym_sed_opcode] = ACTIONS(145),
    [sym_sei_opcode] = ACTIONS(145),
    [sym_sta_opcode] = ACTIONS(145),
    [sym_stx_opcode] = ACTIONS(145),
    [sym_sty_opcode] = ACTIONS(145),
    [sym_tax_opcode] = ACTIONS(145),
    [sym_tay_opcode] = ACTIONS(145),
    [sym_tsx_opcode] = ACTIONS(145),
    [sym_txa_opcode] = ACTIONS(145),
    [sym_tcs_opcode] = ACTIONS(145),
    [sym_tya_opcode] = ACTIONS(145),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_GT] = ACTIONS(145),
    [anon_sym_CARET] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_DOTMOD] = ACTIONS(143),
    [anon_sym_DOTBITAND] = ACTIONS(143),
    [anon_sym_AMP] = ACTIONS(145),
    [anon_sym_DOTBITXOR] = ACTIONS(143),
    [anon_sym_DOTSHL] = ACTIONS(143),
    [anon_sym_LT_LT] = ACTIONS(143),
    [anon_sym_DOTSHR] = ACTIONS(143),
    [anon_sym_GT_GT] = ACTIONS(143),
    [anon_sym_DOTBITOR] = ACTIONS(143),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_EQ] = ACTIONS(143),
    [anon_sym_LT_GT] = ACTIONS(143),
    [anon_sym_LT_EQ] = ACTIONS(143),
    [anon_sym_GT_EQ] = ACTIONS(143),
    [anon_sym_DOTAND] = ACTIONS(143),
    [anon_sym_AMP_AMP] = ACTIONS(143),
    [anon_sym_DOTXOR] = ACTIONS(143),
    [anon_sym_DOTOR] = ACTIONS(143),
    [anon_sym_PIPE_PIPE] = ACTIONS(143),
    [sym_a16_ctrl_cmd] = ACTIONS(143),
    [sym_a8_ctrl_cmd] = ACTIONS(143),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(143),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(143),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(143),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(143),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(143),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(143),
    [sym_bss_ctrl_cmd] = ACTIONS(143),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(143),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(143),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(143),
    [sym_code_ctrl_cmd] = ACTIONS(143),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(143),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(147),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_RPAREN] = ACTIONS(147),
    [sym_adc_opcode] = ACTIONS(149),
    [sym_and_opcode] = ACTIONS(149),
    [sym_asl_opcode] = ACTIONS(149),
    [sym_bcc_opcode] = ACTIONS(149),
    [sym_bcs_opcode] = ACTIONS(149),
    [sym_beq_opcode] = ACTIONS(149),
    [sym_bit_opcode] = ACTIONS(149),
    [sym_bmi_opcode] = ACTIONS(149),
    [sym_bne_opcode] = ACTIONS(149),
    [sym_bpl_opcode] = ACTIONS(149),
    [sym_brk_opcode] = ACTIONS(149),
    [sym_bvc_opcode] = ACTIONS(149),
    [sym_bvs_opcode] = ACTIONS(149),
    [sym_clc_opcode] = ACTIONS(149),
    [sym_cld_opcode] = ACTIONS(149),
    [sym_cli_opcode] = ACTIONS(149),
    [sym_clv_opcode] = ACTIONS(149),
    [sym_cmp_opcode] = ACTIONS(149),
    [sym_cpx_opcode] = ACTIONS(149),
    [sym_cpy_opcode] = ACTIONS(149),
    [sym_dec_opcode] = ACTIONS(149),
    [sym_dex_opcode] = ACTIONS(149),
    [sym_dey_opcode] = ACTIONS(149),
    [sym_eor_opcode] = ACTIONS(149),
    [sym_inc_opcode] = ACTIONS(149),
    [sym_inx_opcode] = ACTIONS(149),
    [sym_iny_opcode] = ACTIONS(149),
    [sym_jmp_opcode] = ACTIONS(149),
    [sym_jsr_opcode] = ACTIONS(149),
    [sym_lda_opcode] = ACTIONS(149),
    [sym_ldx_opcode] = ACTIONS(149),
    [sym_ldy_opcode] = ACTIONS(149),
    [sym_lsr_opcode] = ACTIONS(149),
    [sym_nop_opcode] = ACTIONS(149),
    [sym_ora_opcode] = ACTIONS(149),
    [sym_pha_opcode] = ACTIONS(149),
    [sym_php_opcode] = ACTIONS(149),
    [sym_pla_opcode] = ACTIONS(149),
    [sym_plp_opcode] = ACTIONS(149),
    [sym_rol_opcode] = ACTIONS(149),
    [sym_ror_opcode] = ACTIONS(149),
    [sym_rti_opcode] = ACTIONS(149),
    [sym_rts_opcode] = ACTIONS(149),
    [sym_sbc_opcode] = ACTIONS(149),
    [sym_sec_opcode] = ACTIONS(149),
    [sym_sed_opcode] = ACTIONS(149),
    [sym_sei_opcode] = ACTIONS(149),
    [sym_sta_opcode] = ACTIONS(149),
    [sym_stx_opcode] = ACTIONS(149),
    [sym_sty_opcode] = ACTIONS(149),
    [sym_tax_opcode] = ACTIONS(149),
    [sym_tay_opcode] = ACTIONS(149),
    [sym_tsx_opcode] = ACTIONS(149),
    [sym_txa_opcode] = ACTIONS(149),
    [sym_tcs_opcode] = ACTIONS(149),
    [sym_tya_opcode] = ACTIONS(149),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(149),
    [anon_sym_GT] = ACTIONS(149),
    [anon_sym_CARET] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_DOTMOD] = ACTIONS(147),
    [anon_sym_DOTBITAND] = ACTIONS(147),
    [anon_sym_AMP] = ACTIONS(149),
    [anon_sym_DOTBITXOR] = ACTIONS(147),
    [anon_sym_DOTSHL] = ACTIONS(147),
    [anon_sym_LT_LT] = ACTIONS(147),
    [anon_sym_DOTSHR] = ACTIONS(147),
    [anon_sym_GT_GT] = ACTIONS(147),
    [anon_sym_DOTBITOR] = ACTIONS(147),
    [anon_sym_PIPE] = ACTIONS(149),
    [anon_sym_EQ] = ACTIONS(147),
    [anon_sym_LT_GT] = ACTIONS(147),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_GT_EQ] = ACTIONS(147),
    [anon_sym_DOTAND] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_DOTXOR] = ACTIONS(147),
    [anon_sym_DOTOR] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [sym_a16_ctrl_cmd] = ACTIONS(147),
    [sym_a8_ctrl_cmd] = ACTIONS(147),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(147),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(147),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(147),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(147),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(147),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(147),
    [sym_bss_ctrl_cmd] = ACTIONS(147),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(147),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(147),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(147),
    [sym_code_ctrl_cmd] = ACTIONS(147),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(147),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(151),
    [anon_sym_COMMA] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(151),
    [sym_adc_opcode] = ACTIONS(153),
    [sym_and_opcode] = ACTIONS(153),
    [sym_asl_opcode] = ACTIONS(153),
    [sym_bcc_opcode] = ACTIONS(153),
    [sym_bcs_opcode] = ACTIONS(153),
    [sym_beq_opcode] = ACTIONS(153),
    [sym_bit_opcode] = ACTIONS(153),
    [sym_bmi_opcode] = ACTIONS(153),
    [sym_bne_opcode] = ACTIONS(153),
    [sym_bpl_opcode] = ACTIONS(153),
    [sym_brk_opcode] = ACTIONS(153),
    [sym_bvc_opcode] = ACTIONS(153),
    [sym_bvs_opcode] = ACTIONS(153),
    [sym_clc_opcode] = ACTIONS(153),
    [sym_cld_opcode] = ACTIONS(153),
    [sym_cli_opcode] = ACTIONS(153),
    [sym_clv_opcode] = ACTIONS(153),
    [sym_cmp_opcode] = ACTIONS(153),
    [sym_cpx_opcode] = ACTIONS(153),
    [sym_cpy_opcode] = ACTIONS(153),
    [sym_dec_opcode] = ACTIONS(153),
    [sym_dex_opcode] = ACTIONS(153),
    [sym_dey_opcode] = ACTIONS(153),
    [sym_eor_opcode] = ACTIONS(153),
    [sym_inc_opcode] = ACTIONS(153),
    [sym_inx_opcode] = ACTIONS(153),
    [sym_iny_opcode] = ACTIONS(153),
    [sym_jmp_opcode] = ACTIONS(153),
    [sym_jsr_opcode] = ACTIONS(153),
    [sym_lda_opcode] = ACTIONS(153),
    [sym_ldx_opcode] = ACTIONS(153),
    [sym_ldy_opcode] = ACTIONS(153),
    [sym_lsr_opcode] = ACTIONS(153),
    [sym_nop_opcode] = ACTIONS(153),
    [sym_ora_opcode] = ACTIONS(153),
    [sym_pha_opcode] = ACTIONS(153),
    [sym_php_opcode] = ACTIONS(153),
    [sym_pla_opcode] = ACTIONS(153),
    [sym_plp_opcode] = ACTIONS(153),
    [sym_rol_opcode] = ACTIONS(153),
    [sym_ror_opcode] = ACTIONS(153),
    [sym_rti_opcode] = ACTIONS(153),
    [sym_rts_opcode] = ACTIONS(153),
    [sym_sbc_opcode] = ACTIONS(153),
    [sym_sec_opcode] = ACTIONS(153),
    [sym_sed_opcode] = ACTIONS(153),
    [sym_sei_opcode] = ACTIONS(153),
    [sym_sta_opcode] = ACTIONS(153),
    [sym_stx_opcode] = ACTIONS(153),
    [sym_sty_opcode] = ACTIONS(153),
    [sym_tax_opcode] = ACTIONS(153),
    [sym_tay_opcode] = ACTIONS(153),
    [sym_tsx_opcode] = ACTIONS(153),
    [sym_txa_opcode] = ACTIONS(153),
    [sym_tcs_opcode] = ACTIONS(153),
    [sym_tya_opcode] = ACTIONS(153),
    [anon_sym_PLUS] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(151),
    [anon_sym_LT] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_CARET] = ACTIONS(151),
    [anon_sym_STAR] = ACTIONS(151),
    [anon_sym_SLASH] = ACTIONS(151),
    [anon_sym_DOTMOD] = ACTIONS(151),
    [anon_sym_DOTBITAND] = ACTIONS(151),
    [anon_sym_AMP] = ACTIONS(153),
    [anon_sym_DOTBITXOR] = ACTIONS(151),
    [anon_sym_DOTSHL] = ACTIONS(151),
    [anon_sym_LT_LT] = ACTIONS(151),
    [anon_sym_DOTSHR] = ACTIONS(151),
    [anon_sym_GT_GT] = ACTIONS(151),
    [anon_sym_DOTBITOR] = ACTIONS(151),
    [anon_sym_PIPE] = ACTIONS(153),
    [anon_sym_EQ] = ACTIONS(151),
    [anon_sym_LT_GT] = ACTIONS(151),
    [anon_sym_LT_EQ] = ACTIONS(151),
    [anon_sym_GT_EQ] = ACTIONS(151),
    [anon_sym_DOTAND] = ACTIONS(151),
    [anon_sym_AMP_AMP] = ACTIONS(151),
    [anon_sym_DOTXOR] = ACTIONS(151),
    [anon_sym_DOTOR] = ACTIONS(151),
    [anon_sym_PIPE_PIPE] = ACTIONS(151),
    [sym_a16_ctrl_cmd] = ACTIONS(151),
    [sym_a8_ctrl_cmd] = ACTIONS(151),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(151),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(151),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(151),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(151),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(151),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(151),
    [sym_bss_ctrl_cmd] = ACTIONS(151),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(151),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(151),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(151),
    [sym_code_ctrl_cmd] = ACTIONS(151),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(151),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(155),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_RPAREN] = ACTIONS(155),
    [sym_adc_opcode] = ACTIONS(157),
    [sym_and_opcode] = ACTIONS(157),
    [sym_asl_opcode] = ACTIONS(157),
    [sym_bcc_opcode] = ACTIONS(157),
    [sym_bcs_opcode] = ACTIONS(157),
    [sym_beq_opcode] = ACTIONS(157),
    [sym_bit_opcode] = ACTIONS(157),
    [sym_bmi_opcode] = ACTIONS(157),
    [sym_bne_opcode] = ACTIONS(157),
    [sym_bpl_opcode] = ACTIONS(157),
    [sym_brk_opcode] = ACTIONS(157),
    [sym_bvc_opcode] = ACTIONS(157),
    [sym_bvs_opcode] = ACTIONS(157),
    [sym_clc_opcode] = ACTIONS(157),
    [sym_cld_opcode] = ACTIONS(157),
    [sym_cli_opcode] = ACTIONS(157),
    [sym_clv_opcode] = ACTIONS(157),
    [sym_cmp_opcode] = ACTIONS(157),
    [sym_cpx_opcode] = ACTIONS(157),
    [sym_cpy_opcode] = ACTIONS(157),
    [sym_dec_opcode] = ACTIONS(157),
    [sym_dex_opcode] = ACTIONS(157),
    [sym_dey_opcode] = ACTIONS(157),
    [sym_eor_opcode] = ACTIONS(157),
    [sym_inc_opcode] = ACTIONS(157),
    [sym_inx_opcode] = ACTIONS(157),
    [sym_iny_opcode] = ACTIONS(157),
    [sym_jmp_opcode] = ACTIONS(157),
    [sym_jsr_opcode] = ACTIONS(157),
    [sym_lda_opcode] = ACTIONS(157),
    [sym_ldx_opcode] = ACTIONS(157),
    [sym_ldy_opcode] = ACTIONS(157),
    [sym_lsr_opcode] = ACTIONS(157),
    [sym_nop_opcode] = ACTIONS(157),
    [sym_ora_opcode] = ACTIONS(157),
    [sym_pha_opcode] = ACTIONS(157),
    [sym_php_opcode] = ACTIONS(157),
    [sym_pla_opcode] = ACTIONS(157),
    [sym_plp_opcode] = ACTIONS(157),
    [sym_rol_opcode] = ACTIONS(157),
    [sym_ror_opcode] = ACTIONS(157),
    [sym_rti_opcode] = ACTIONS(157),
    [sym_rts_opcode] = ACTIONS(157),
    [sym_sbc_opcode] = ACTIONS(157),
    [sym_sec_opcode] = ACTIONS(157),
    [sym_sed_opcode] = ACTIONS(157),
    [sym_sei_opcode] = ACTIONS(157),
    [sym_sta_opcode] = ACTIONS(157),
    [sym_stx_opcode] = ACTIONS(157),
    [sym_sty_opcode] = ACTIONS(157),
    [sym_tax_opcode] = ACTIONS(157),
    [sym_tay_opcode] = ACTIONS(157),
    [sym_tsx_opcode] = ACTIONS(157),
    [sym_txa_opcode] = ACTIONS(157),
    [sym_tcs_opcode] = ACTIONS(157),
    [sym_tya_opcode] = ACTIONS(157),
    [anon_sym_PLUS] = ACTIONS(155),
    [anon_sym_DASH] = ACTIONS(155),
    [anon_sym_LT] = ACTIONS(157),
    [anon_sym_GT] = ACTIONS(157),
    [anon_sym_CARET] = ACTIONS(155),
    [anon_sym_STAR] = ACTIONS(155),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_DOTMOD] = ACTIONS(155),
    [anon_sym_DOTBITAND] = ACTIONS(155),
    [anon_sym_AMP] = ACTIONS(157),
    [anon_sym_DOTBITXOR] = ACTIONS(155),
    [anon_sym_DOTSHL] = ACTIONS(155),
    [anon_sym_LT_LT] = ACTIONS(155),
    [anon_sym_DOTSHR] = ACTIONS(155),
    [anon_sym_GT_GT] = ACTIONS(155),
    [anon_sym_DOTBITOR] = ACTIONS(155),
    [anon_sym_PIPE] = ACTIONS(157),
    [anon_sym_EQ] = ACTIONS(155),
    [anon_sym_LT_GT] = ACTIONS(155),
    [anon_sym_LT_EQ] = ACTIONS(155),
    [anon_sym_GT_EQ] = ACTIONS(155),
    [anon_sym_DOTAND] = ACTIONS(155),
    [anon_sym_AMP_AMP] = ACTIONS(155),
    [anon_sym_DOTXOR] = ACTIONS(155),
    [anon_sym_DOTOR] = ACTIONS(155),
    [anon_sym_PIPE_PIPE] = ACTIONS(155),
    [sym_a16_ctrl_cmd] = ACTIONS(155),
    [sym_a8_ctrl_cmd] = ACTIONS(155),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(155),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(155),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(155),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(155),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(155),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(155),
    [sym_bss_ctrl_cmd] = ACTIONS(155),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(155),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(155),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(155),
    [sym_code_ctrl_cmd] = ACTIONS(155),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(155),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(159),
    [anon_sym_COMMA] = ACTIONS(159),
    [anon_sym_RPAREN] = ACTIONS(159),
    [sym_adc_opcode] = ACTIONS(161),
    [sym_and_opcode] = ACTIONS(161),
    [sym_asl_opcode] = ACTIONS(161),
    [sym_bcc_opcode] = ACTIONS(161),
    [sym_bcs_opcode] = ACTIONS(161),
    [sym_beq_opcode] = ACTIONS(161),
    [sym_bit_opcode] = ACTIONS(161),
    [sym_bmi_opcode] = ACTIONS(161),
    [sym_bne_opcode] = ACTIONS(161),
    [sym_bpl_opcode] = ACTIONS(161),
    [sym_brk_opcode] = ACTIONS(161),
    [sym_bvc_opcode] = ACTIONS(161),
    [sym_bvs_opcode] = ACTIONS(161),
    [sym_clc_opcode] = ACTIONS(161),
    [sym_cld_opcode] = ACTIONS(161),
    [sym_cli_opcode] = ACTIONS(161),
    [sym_clv_opcode] = ACTIONS(161),
    [sym_cmp_opcode] = ACTIONS(161),
    [sym_cpx_opcode] = ACTIONS(161),
    [sym_cpy_opcode] = ACTIONS(161),
    [sym_dec_opcode] = ACTIONS(161),
    [sym_dex_opcode] = ACTIONS(161),
    [sym_dey_opcode] = ACTIONS(161),
    [sym_eor_opcode] = ACTIONS(161),
    [sym_inc_opcode] = ACTIONS(161),
    [sym_inx_opcode] = ACTIONS(161),
    [sym_iny_opcode] = ACTIONS(161),
    [sym_jmp_opcode] = ACTIONS(161),
    [sym_jsr_opcode] = ACTIONS(161),
    [sym_lda_opcode] = ACTIONS(161),
    [sym_ldx_opcode] = ACTIONS(161),
    [sym_ldy_opcode] = ACTIONS(161),
    [sym_lsr_opcode] = ACTIONS(161),
    [sym_nop_opcode] = ACTIONS(161),
    [sym_ora_opcode] = ACTIONS(161),
    [sym_pha_opcode] = ACTIONS(161),
    [sym_php_opcode] = ACTIONS(161),
    [sym_pla_opcode] = ACTIONS(161),
    [sym_plp_opcode] = ACTIONS(161),
    [sym_rol_opcode] = ACTIONS(161),
    [sym_ror_opcode] = ACTIONS(161),
    [sym_rti_opcode] = ACTIONS(161),
    [sym_rts_opcode] = ACTIONS(161),
    [sym_sbc_opcode] = ACTIONS(161),
    [sym_sec_opcode] = ACTIONS(161),
    [sym_sed_opcode] = ACTIONS(161),
    [sym_sei_opcode] = ACTIONS(161),
    [sym_sta_opcode] = ACTIONS(161),
    [sym_stx_opcode] = ACTIONS(161),
    [sym_sty_opcode] = ACTIONS(161),
    [sym_tax_opcode] = ACTIONS(161),
    [sym_tay_opcode] = ACTIONS(161),
    [sym_tsx_opcode] = ACTIONS(161),
    [sym_txa_opcode] = ACTIONS(161),
    [sym_tcs_opcode] = ACTIONS(161),
    [sym_tya_opcode] = ACTIONS(161),
    [anon_sym_PLUS] = ACTIONS(159),
    [anon_sym_DASH] = ACTIONS(159),
    [anon_sym_LT] = ACTIONS(161),
    [anon_sym_GT] = ACTIONS(161),
    [anon_sym_CARET] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(159),
    [anon_sym_SLASH] = ACTIONS(159),
    [anon_sym_DOTMOD] = ACTIONS(159),
    [anon_sym_DOTBITAND] = ACTIONS(159),
    [anon_sym_AMP] = ACTIONS(161),
    [anon_sym_DOTBITXOR] = ACTIONS(159),
    [anon_sym_DOTSHL] = ACTIONS(159),
    [anon_sym_LT_LT] = ACTIONS(159),
    [anon_sym_DOTSHR] = ACTIONS(159),
    [anon_sym_GT_GT] = ACTIONS(159),
    [anon_sym_DOTBITOR] = ACTIONS(159),
    [anon_sym_PIPE] = ACTIONS(161),
    [anon_sym_EQ] = ACTIONS(159),
    [anon_sym_LT_GT] = ACTIONS(159),
    [anon_sym_LT_EQ] = ACTIONS(159),
    [anon_sym_GT_EQ] = ACTIONS(159),
    [anon_sym_DOTAND] = ACTIONS(159),
    [anon_sym_AMP_AMP] = ACTIONS(159),
    [anon_sym_DOTXOR] = ACTIONS(159),
    [anon_sym_DOTOR] = ACTIONS(159),
    [anon_sym_PIPE_PIPE] = ACTIONS(159),
    [sym_a16_ctrl_cmd] = ACTIONS(159),
    [sym_a8_ctrl_cmd] = ACTIONS(159),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(159),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(159),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(159),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(159),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(159),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(159),
    [sym_bss_ctrl_cmd] = ACTIONS(159),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(159),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(159),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(159),
    [sym_code_ctrl_cmd] = ACTIONS(159),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(159),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(163),
    [anon_sym_COMMA] = ACTIONS(163),
    [anon_sym_RPAREN] = ACTIONS(163),
    [sym_adc_opcode] = ACTIONS(165),
    [sym_and_opcode] = ACTIONS(165),
    [sym_asl_opcode] = ACTIONS(165),
    [sym_bcc_opcode] = ACTIONS(165),
    [sym_bcs_opcode] = ACTIONS(165),
    [sym_beq_opcode] = ACTIONS(165),
    [sym_bit_opcode] = ACTIONS(165),
    [sym_bmi_opcode] = ACTIONS(165),
    [sym_bne_opcode] = ACTIONS(165),
    [sym_bpl_opcode] = ACTIONS(165),
    [sym_brk_opcode] = ACTIONS(165),
    [sym_bvc_opcode] = ACTIONS(165),
    [sym_bvs_opcode] = ACTIONS(165),
    [sym_clc_opcode] = ACTIONS(165),
    [sym_cld_opcode] = ACTIONS(165),
    [sym_cli_opcode] = ACTIONS(165),
    [sym_clv_opcode] = ACTIONS(165),
    [sym_cmp_opcode] = ACTIONS(165),
    [sym_cpx_opcode] = ACTIONS(165),
    [sym_cpy_opcode] = ACTIONS(165),
    [sym_dec_opcode] = ACTIONS(165),
    [sym_dex_opcode] = ACTIONS(165),
    [sym_dey_opcode] = ACTIONS(165),
    [sym_eor_opcode] = ACTIONS(165),
    [sym_inc_opcode] = ACTIONS(165),
    [sym_inx_opcode] = ACTIONS(165),
    [sym_iny_opcode] = ACTIONS(165),
    [sym_jmp_opcode] = ACTIONS(165),
    [sym_jsr_opcode] = ACTIONS(165),
    [sym_lda_opcode] = ACTIONS(165),
    [sym_ldx_opcode] = ACTIONS(165),
    [sym_ldy_opcode] = ACTIONS(165),
    [sym_lsr_opcode] = ACTIONS(165),
    [sym_nop_opcode] = ACTIONS(165),
    [sym_ora_opcode] = ACTIONS(165),
    [sym_pha_opcode] = ACTIONS(165),
    [sym_php_opcode] = ACTIONS(165),
    [sym_pla_opcode] = ACTIONS(165),
    [sym_plp_opcode] = ACTIONS(165),
    [sym_rol_opcode] = ACTIONS(165),
    [sym_ror_opcode] = ACTIONS(165),
    [sym_rti_opcode] = ACTIONS(165),
    [sym_rts_opcode] = ACTIONS(165),
    [sym_sbc_opcode] = ACTIONS(165),
    [sym_sec_opcode] = ACTIONS(165),
    [sym_sed_opcode] = ACTIONS(165),
    [sym_sei_opcode] = ACTIONS(165),
    [sym_sta_opcode] = ACTIONS(165),
    [sym_stx_opcode] = ACTIONS(165),
    [sym_sty_opcode] = ACTIONS(165),
    [sym_tax_opcode] = ACTIONS(165),
    [sym_tay_opcode] = ACTIONS(165),
    [sym_tsx_opcode] = ACTIONS(165),
    [sym_txa_opcode] = ACTIONS(165),
    [sym_tcs_opcode] = ACTIONS(165),
    [sym_tya_opcode] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_CARET] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_DOTMOD] = ACTIONS(85),
    [anon_sym_DOTBITAND] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_DOTBITXOR] = ACTIONS(79),
    [anon_sym_DOTSHL] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(91),
    [anon_sym_DOTSHR] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_DOTBITOR] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_EQ] = ACTIONS(163),
    [anon_sym_LT_GT] = ACTIONS(163),
    [anon_sym_LT_EQ] = ACTIONS(163),
    [anon_sym_GT_EQ] = ACTIONS(163),
    [anon_sym_DOTAND] = ACTIONS(163),
    [anon_sym_AMP_AMP] = ACTIONS(163),
    [anon_sym_DOTXOR] = ACTIONS(163),
    [anon_sym_DOTOR] = ACTIONS(163),
    [anon_sym_PIPE_PIPE] = ACTIONS(163),
    [sym_a16_ctrl_cmd] = ACTIONS(163),
    [sym_a8_ctrl_cmd] = ACTIONS(163),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(163),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(163),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(163),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(163),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(163),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(163),
    [sym_bss_ctrl_cmd] = ACTIONS(163),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(163),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(163),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(163),
    [sym_code_ctrl_cmd] = ACTIONS(163),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(163),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(167),
    [sym_adc_opcode] = ACTIONS(169),
    [sym_and_opcode] = ACTIONS(169),
    [sym_asl_opcode] = ACTIONS(169),
    [sym_bcc_opcode] = ACTIONS(169),
    [sym_bcs_opcode] = ACTIONS(169),
    [sym_beq_opcode] = ACTIONS(169),
    [sym_bit_opcode] = ACTIONS(169),
    [sym_bmi_opcode] = ACTIONS(169),
    [sym_bne_opcode] = ACTIONS(169),
    [sym_bpl_opcode] = ACTIONS(169),
    [sym_brk_opcode] = ACTIONS(169),
    [sym_bvc_opcode] = ACTIONS(169),
    [sym_bvs_opcode] = ACTIONS(169),
    [sym_clc_opcode] = ACTIONS(169),
    [sym_cld_opcode] = ACTIONS(169),
    [sym_cli_opcode] = ACTIONS(169),
    [sym_clv_opcode] = ACTIONS(169),
    [sym_cmp_opcode] = ACTIONS(169),
    [sym_cpx_opcode] = ACTIONS(169),
    [sym_cpy_opcode] = ACTIONS(169),
    [sym_dec_opcode] = ACTIONS(169),
    [sym_dex_opcode] = ACTIONS(169),
    [sym_dey_opcode] = ACTIONS(169),
    [sym_eor_opcode] = ACTIONS(169),
    [sym_inc_opcode] = ACTIONS(169),
    [sym_inx_opcode] = ACTIONS(169),
    [sym_iny_opcode] = ACTIONS(169),
    [sym_jmp_opcode] = ACTIONS(169),
    [sym_jsr_opcode] = ACTIONS(169),
    [sym_lda_opcode] = ACTIONS(169),
    [sym_ldx_opcode] = ACTIONS(169),
    [sym_ldy_opcode] = ACTIONS(169),
    [sym_lsr_opcode] = ACTIONS(169),
    [sym_nop_opcode] = ACTIONS(169),
    [sym_ora_opcode] = ACTIONS(169),
    [sym_pha_opcode] = ACTIONS(169),
    [sym_php_opcode] = ACTIONS(169),
    [sym_pla_opcode] = ACTIONS(169),
    [sym_plp_opcode] = ACTIONS(169),
    [sym_rol_opcode] = ACTIONS(169),
    [sym_ror_opcode] = ACTIONS(169),
    [sym_rti_opcode] = ACTIONS(169),
    [sym_rts_opcode] = ACTIONS(169),
    [sym_sbc_opcode] = ACTIONS(169),
    [sym_sec_opcode] = ACTIONS(169),
    [sym_sed_opcode] = ACTIONS(169),
    [sym_sei_opcode] = ACTIONS(169),
    [sym_sta_opcode] = ACTIONS(169),
    [sym_stx_opcode] = ACTIONS(169),
    [sym_sty_opcode] = ACTIONS(169),
    [sym_tax_opcode] = ACTIONS(169),
    [sym_tay_opcode] = ACTIONS(169),
    [sym_tsx_opcode] = ACTIONS(169),
    [sym_txa_opcode] = ACTIONS(169),
    [sym_tcs_opcode] = ACTIONS(169),
    [sym_tya_opcode] = ACTIONS(169),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_LT] = ACTIONS(169),
    [anon_sym_GT] = ACTIONS(169),
    [anon_sym_CARET] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_DOTMOD] = ACTIONS(85),
    [anon_sym_DOTBITAND] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_DOTBITXOR] = ACTIONS(79),
    [anon_sym_DOTSHL] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(91),
    [anon_sym_DOTSHR] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_DOTBITOR] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_EQ] = ACTIONS(167),
    [anon_sym_LT_GT] = ACTIONS(167),
    [anon_sym_LT_EQ] = ACTIONS(167),
    [anon_sym_GT_EQ] = ACTIONS(167),
    [anon_sym_DOTAND] = ACTIONS(167),
    [anon_sym_AMP_AMP] = ACTIONS(167),
    [anon_sym_DOTXOR] = ACTIONS(167),
    [anon_sym_DOTOR] = ACTIONS(167),
    [anon_sym_PIPE_PIPE] = ACTIONS(167),
    [sym_a16_ctrl_cmd] = ACTIONS(167),
    [sym_a8_ctrl_cmd] = ACTIONS(167),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(167),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(167),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(167),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(167),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(167),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(167),
    [sym_bss_ctrl_cmd] = ACTIONS(167),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(167),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(167),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(167),
    [sym_code_ctrl_cmd] = ACTIONS(167),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(167),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(171),
    [anon_sym_COMMA] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(171),
    [sym_adc_opcode] = ACTIONS(173),
    [sym_and_opcode] = ACTIONS(173),
    [sym_asl_opcode] = ACTIONS(173),
    [sym_bcc_opcode] = ACTIONS(173),
    [sym_bcs_opcode] = ACTIONS(173),
    [sym_beq_opcode] = ACTIONS(173),
    [sym_bit_opcode] = ACTIONS(173),
    [sym_bmi_opcode] = ACTIONS(173),
    [sym_bne_opcode] = ACTIONS(173),
    [sym_bpl_opcode] = ACTIONS(173),
    [sym_brk_opcode] = ACTIONS(173),
    [sym_bvc_opcode] = ACTIONS(173),
    [sym_bvs_opcode] = ACTIONS(173),
    [sym_clc_opcode] = ACTIONS(173),
    [sym_cld_opcode] = ACTIONS(173),
    [sym_cli_opcode] = ACTIONS(173),
    [sym_clv_opcode] = ACTIONS(173),
    [sym_cmp_opcode] = ACTIONS(173),
    [sym_cpx_opcode] = ACTIONS(173),
    [sym_cpy_opcode] = ACTIONS(173),
    [sym_dec_opcode] = ACTIONS(173),
    [sym_dex_opcode] = ACTIONS(173),
    [sym_dey_opcode] = ACTIONS(173),
    [sym_eor_opcode] = ACTIONS(173),
    [sym_inc_opcode] = ACTIONS(173),
    [sym_inx_opcode] = ACTIONS(173),
    [sym_iny_opcode] = ACTIONS(173),
    [sym_jmp_opcode] = ACTIONS(173),
    [sym_jsr_opcode] = ACTIONS(173),
    [sym_lda_opcode] = ACTIONS(173),
    [sym_ldx_opcode] = ACTIONS(173),
    [sym_ldy_opcode] = ACTIONS(173),
    [sym_lsr_opcode] = ACTIONS(173),
    [sym_nop_opcode] = ACTIONS(173),
    [sym_ora_opcode] = ACTIONS(173),
    [sym_pha_opcode] = ACTIONS(173),
    [sym_php_opcode] = ACTIONS(173),
    [sym_pla_opcode] = ACTIONS(173),
    [sym_plp_opcode] = ACTIONS(173),
    [sym_rol_opcode] = ACTIONS(173),
    [sym_ror_opcode] = ACTIONS(173),
    [sym_rti_opcode] = ACTIONS(173),
    [sym_rts_opcode] = ACTIONS(173),
    [sym_sbc_opcode] = ACTIONS(173),
    [sym_sec_opcode] = ACTIONS(173),
    [sym_sed_opcode] = ACTIONS(173),
    [sym_sei_opcode] = ACTIONS(173),
    [sym_sta_opcode] = ACTIONS(173),
    [sym_stx_opcode] = ACTIONS(173),
    [sym_sty_opcode] = ACTIONS(173),
    [sym_tax_opcode] = ACTIONS(173),
    [sym_tay_opcode] = ACTIONS(173),
    [sym_tsx_opcode] = ACTIONS(173),
    [sym_txa_opcode] = ACTIONS(173),
    [sym_tcs_opcode] = ACTIONS(173),
    [sym_tya_opcode] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(171),
    [anon_sym_LT] = ACTIONS(173),
    [anon_sym_GT] = ACTIONS(173),
    [anon_sym_CARET] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_DOTMOD] = ACTIONS(85),
    [anon_sym_DOTBITAND] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_DOTBITXOR] = ACTIONS(79),
    [anon_sym_DOTSHL] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(91),
    [anon_sym_DOTSHR] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_DOTBITOR] = ACTIONS(171),
    [anon_sym_PIPE] = ACTIONS(173),
    [anon_sym_EQ] = ACTIONS(171),
    [anon_sym_LT_GT] = ACTIONS(171),
    [anon_sym_LT_EQ] = ACTIONS(171),
    [anon_sym_GT_EQ] = ACTIONS(171),
    [anon_sym_DOTAND] = ACTIONS(171),
    [anon_sym_AMP_AMP] = ACTIONS(171),
    [anon_sym_DOTXOR] = ACTIONS(171),
    [anon_sym_DOTOR] = ACTIONS(171),
    [anon_sym_PIPE_PIPE] = ACTIONS(171),
    [sym_a16_ctrl_cmd] = ACTIONS(171),
    [sym_a8_ctrl_cmd] = ACTIONS(171),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(171),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(171),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(171),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(171),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(171),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(171),
    [sym_bss_ctrl_cmd] = ACTIONS(171),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(171),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(171),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(171),
    [sym_code_ctrl_cmd] = ACTIONS(171),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(171),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(175),
    [anon_sym_COMMA] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(175),
    [sym_adc_opcode] = ACTIONS(177),
    [sym_and_opcode] = ACTIONS(177),
    [sym_asl_opcode] = ACTIONS(177),
    [sym_bcc_opcode] = ACTIONS(177),
    [sym_bcs_opcode] = ACTIONS(177),
    [sym_beq_opcode] = ACTIONS(177),
    [sym_bit_opcode] = ACTIONS(177),
    [sym_bmi_opcode] = ACTIONS(177),
    [sym_bne_opcode] = ACTIONS(177),
    [sym_bpl_opcode] = ACTIONS(177),
    [sym_brk_opcode] = ACTIONS(177),
    [sym_bvc_opcode] = ACTIONS(177),
    [sym_bvs_opcode] = ACTIONS(177),
    [sym_clc_opcode] = ACTIONS(177),
    [sym_cld_opcode] = ACTIONS(177),
    [sym_cli_opcode] = ACTIONS(177),
    [sym_clv_opcode] = ACTIONS(177),
    [sym_cmp_opcode] = ACTIONS(177),
    [sym_cpx_opcode] = ACTIONS(177),
    [sym_cpy_opcode] = ACTIONS(177),
    [sym_dec_opcode] = ACTIONS(177),
    [sym_dex_opcode] = ACTIONS(177),
    [sym_dey_opcode] = ACTIONS(177),
    [sym_eor_opcode] = ACTIONS(177),
    [sym_inc_opcode] = ACTIONS(177),
    [sym_inx_opcode] = ACTIONS(177),
    [sym_iny_opcode] = ACTIONS(177),
    [sym_jmp_opcode] = ACTIONS(177),
    [sym_jsr_opcode] = ACTIONS(177),
    [sym_lda_opcode] = ACTIONS(177),
    [sym_ldx_opcode] = ACTIONS(177),
    [sym_ldy_opcode] = ACTIONS(177),
    [sym_lsr_opcode] = ACTIONS(177),
    [sym_nop_opcode] = ACTIONS(177),
    [sym_ora_opcode] = ACTIONS(177),
    [sym_pha_opcode] = ACTIONS(177),
    [sym_php_opcode] = ACTIONS(177),
    [sym_pla_opcode] = ACTIONS(177),
    [sym_plp_opcode] = ACTIONS(177),
    [sym_rol_opcode] = ACTIONS(177),
    [sym_ror_opcode] = ACTIONS(177),
    [sym_rti_opcode] = ACTIONS(177),
    [sym_rts_opcode] = ACTIONS(177),
    [sym_sbc_opcode] = ACTIONS(177),
    [sym_sec_opcode] = ACTIONS(177),
    [sym_sed_opcode] = ACTIONS(177),
    [sym_sei_opcode] = ACTIONS(177),
    [sym_sta_opcode] = ACTIONS(177),
    [sym_stx_opcode] = ACTIONS(177),
    [sym_sty_opcode] = ACTIONS(177),
    [sym_tax_opcode] = ACTIONS(177),
    [sym_tay_opcode] = ACTIONS(177),
    [sym_tsx_opcode] = ACTIONS(177),
    [sym_txa_opcode] = ACTIONS(177),
    [sym_tcs_opcode] = ACTIONS(177),
    [sym_tya_opcode] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(175),
    [anon_sym_DASH] = ACTIONS(175),
    [anon_sym_LT] = ACTIONS(177),
    [anon_sym_GT] = ACTIONS(177),
    [anon_sym_CARET] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_DOTMOD] = ACTIONS(85),
    [anon_sym_DOTBITAND] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_DOTBITXOR] = ACTIONS(79),
    [anon_sym_DOTSHL] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(91),
    [anon_sym_DOTSHR] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_DOTBITOR] = ACTIONS(175),
    [anon_sym_PIPE] = ACTIONS(177),
    [anon_sym_EQ] = ACTIONS(175),
    [anon_sym_LT_GT] = ACTIONS(175),
    [anon_sym_LT_EQ] = ACTIONS(175),
    [anon_sym_GT_EQ] = ACTIONS(175),
    [anon_sym_DOTAND] = ACTIONS(175),
    [anon_sym_AMP_AMP] = ACTIONS(175),
    [anon_sym_DOTXOR] = ACTIONS(175),
    [anon_sym_DOTOR] = ACTIONS(175),
    [anon_sym_PIPE_PIPE] = ACTIONS(175),
    [sym_a16_ctrl_cmd] = ACTIONS(175),
    [sym_a8_ctrl_cmd] = ACTIONS(175),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(175),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(175),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(175),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(175),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(175),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(175),
    [sym_bss_ctrl_cmd] = ACTIONS(175),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(175),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(175),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(175),
    [sym_code_ctrl_cmd] = ACTIONS(175),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(175),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(179),
    [anon_sym_COMMA] = ACTIONS(179),
    [anon_sym_RPAREN] = ACTIONS(179),
    [sym_adc_opcode] = ACTIONS(181),
    [sym_and_opcode] = ACTIONS(181),
    [sym_asl_opcode] = ACTIONS(181),
    [sym_bcc_opcode] = ACTIONS(181),
    [sym_bcs_opcode] = ACTIONS(181),
    [sym_beq_opcode] = ACTIONS(181),
    [sym_bit_opcode] = ACTIONS(181),
    [sym_bmi_opcode] = ACTIONS(181),
    [sym_bne_opcode] = ACTIONS(181),
    [sym_bpl_opcode] = ACTIONS(181),
    [sym_brk_opcode] = ACTIONS(181),
    [sym_bvc_opcode] = ACTIONS(181),
    [sym_bvs_opcode] = ACTIONS(181),
    [sym_clc_opcode] = ACTIONS(181),
    [sym_cld_opcode] = ACTIONS(181),
    [sym_cli_opcode] = ACTIONS(181),
    [sym_clv_opcode] = ACTIONS(181),
    [sym_cmp_opcode] = ACTIONS(181),
    [sym_cpx_opcode] = ACTIONS(181),
    [sym_cpy_opcode] = ACTIONS(181),
    [sym_dec_opcode] = ACTIONS(181),
    [sym_dex_opcode] = ACTIONS(181),
    [sym_dey_opcode] = ACTIONS(181),
    [sym_eor_opcode] = ACTIONS(181),
    [sym_inc_opcode] = ACTIONS(181),
    [sym_inx_opcode] = ACTIONS(181),
    [sym_iny_opcode] = ACTIONS(181),
    [sym_jmp_opcode] = ACTIONS(181),
    [sym_jsr_opcode] = ACTIONS(181),
    [sym_lda_opcode] = ACTIONS(181),
    [sym_ldx_opcode] = ACTIONS(181),
    [sym_ldy_opcode] = ACTIONS(181),
    [sym_lsr_opcode] = ACTIONS(181),
    [sym_nop_opcode] = ACTIONS(181),
    [sym_ora_opcode] = ACTIONS(181),
    [sym_pha_opcode] = ACTIONS(181),
    [sym_php_opcode] = ACTIONS(181),
    [sym_pla_opcode] = ACTIONS(181),
    [sym_plp_opcode] = ACTIONS(181),
    [sym_rol_opcode] = ACTIONS(181),
    [sym_ror_opcode] = ACTIONS(181),
    [sym_rti_opcode] = ACTIONS(181),
    [sym_rts_opcode] = ACTIONS(181),
    [sym_sbc_opcode] = ACTIONS(181),
    [sym_sec_opcode] = ACTIONS(181),
    [sym_sed_opcode] = ACTIONS(181),
    [sym_sei_opcode] = ACTIONS(181),
    [sym_sta_opcode] = ACTIONS(181),
    [sym_stx_opcode] = ACTIONS(181),
    [sym_sty_opcode] = ACTIONS(181),
    [sym_tax_opcode] = ACTIONS(181),
    [sym_tay_opcode] = ACTIONS(181),
    [sym_tsx_opcode] = ACTIONS(181),
    [sym_txa_opcode] = ACTIONS(181),
    [sym_tcs_opcode] = ACTIONS(181),
    [sym_tya_opcode] = ACTIONS(181),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_LT] = ACTIONS(181),
    [anon_sym_GT] = ACTIONS(181),
    [anon_sym_CARET] = ACTIONS(179),
    [anon_sym_STAR] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(179),
    [anon_sym_DOTMOD] = ACTIONS(179),
    [anon_sym_DOTBITAND] = ACTIONS(179),
    [anon_sym_AMP] = ACTIONS(181),
    [anon_sym_DOTBITXOR] = ACTIONS(179),
    [anon_sym_DOTSHL] = ACTIONS(179),
    [anon_sym_LT_LT] = ACTIONS(179),
    [anon_sym_DOTSHR] = ACTIONS(179),
    [anon_sym_GT_GT] = ACTIONS(179),
    [anon_sym_DOTBITOR] = ACTIONS(179),
    [anon_sym_PIPE] = ACTIONS(181),
    [anon_sym_EQ] = ACTIONS(179),
    [anon_sym_LT_GT] = ACTIONS(179),
    [anon_sym_LT_EQ] = ACTIONS(179),
    [anon_sym_GT_EQ] = ACTIONS(179),
    [anon_sym_DOTAND] = ACTIONS(179),
    [anon_sym_AMP_AMP] = ACTIONS(179),
    [anon_sym_DOTXOR] = ACTIONS(179),
    [anon_sym_DOTOR] = ACTIONS(179),
    [anon_sym_PIPE_PIPE] = ACTIONS(179),
    [sym_a16_ctrl_cmd] = ACTIONS(179),
    [sym_a8_ctrl_cmd] = ACTIONS(179),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(179),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(179),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(179),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(179),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(179),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(179),
    [sym_bss_ctrl_cmd] = ACTIONS(179),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(179),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(179),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(179),
    [sym_code_ctrl_cmd] = ACTIONS(179),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(179),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(183),
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_RPAREN] = ACTIONS(183),
    [sym_adc_opcode] = ACTIONS(185),
    [sym_and_opcode] = ACTIONS(185),
    [sym_asl_opcode] = ACTIONS(185),
    [sym_bcc_opcode] = ACTIONS(185),
    [sym_bcs_opcode] = ACTIONS(185),
    [sym_beq_opcode] = ACTIONS(185),
    [sym_bit_opcode] = ACTIONS(185),
    [sym_bmi_opcode] = ACTIONS(185),
    [sym_bne_opcode] = ACTIONS(185),
    [sym_bpl_opcode] = ACTIONS(185),
    [sym_brk_opcode] = ACTIONS(185),
    [sym_bvc_opcode] = ACTIONS(185),
    [sym_bvs_opcode] = ACTIONS(185),
    [sym_clc_opcode] = ACTIONS(185),
    [sym_cld_opcode] = ACTIONS(185),
    [sym_cli_opcode] = ACTIONS(185),
    [sym_clv_opcode] = ACTIONS(185),
    [sym_cmp_opcode] = ACTIONS(185),
    [sym_cpx_opcode] = ACTIONS(185),
    [sym_cpy_opcode] = ACTIONS(185),
    [sym_dec_opcode] = ACTIONS(185),
    [sym_dex_opcode] = ACTIONS(185),
    [sym_dey_opcode] = ACTIONS(185),
    [sym_eor_opcode] = ACTIONS(185),
    [sym_inc_opcode] = ACTIONS(185),
    [sym_inx_opcode] = ACTIONS(185),
    [sym_iny_opcode] = ACTIONS(185),
    [sym_jmp_opcode] = ACTIONS(185),
    [sym_jsr_opcode] = ACTIONS(185),
    [sym_lda_opcode] = ACTIONS(185),
    [sym_ldx_opcode] = ACTIONS(185),
    [sym_ldy_opcode] = ACTIONS(185),
    [sym_lsr_opcode] = ACTIONS(185),
    [sym_nop_opcode] = ACTIONS(185),
    [sym_ora_opcode] = ACTIONS(185),
    [sym_pha_opcode] = ACTIONS(185),
    [sym_php_opcode] = ACTIONS(185),
    [sym_pla_opcode] = ACTIONS(185),
    [sym_plp_opcode] = ACTIONS(185),
    [sym_rol_opcode] = ACTIONS(185),
    [sym_ror_opcode] = ACTIONS(185),
    [sym_rti_opcode] = ACTIONS(185),
    [sym_rts_opcode] = ACTIONS(185),
    [sym_sbc_opcode] = ACTIONS(185),
    [sym_sec_opcode] = ACTIONS(185),
    [sym_sed_opcode] = ACTIONS(185),
    [sym_sei_opcode] = ACTIONS(185),
    [sym_sta_opcode] = ACTIONS(185),
    [sym_stx_opcode] = ACTIONS(185),
    [sym_sty_opcode] = ACTIONS(185),
    [sym_tax_opcode] = ACTIONS(185),
    [sym_tay_opcode] = ACTIONS(185),
    [sym_tsx_opcode] = ACTIONS(185),
    [sym_txa_opcode] = ACTIONS(185),
    [sym_tcs_opcode] = ACTIONS(185),
    [sym_tya_opcode] = ACTIONS(185),
    [anon_sym_PLUS] = ACTIONS(183),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_LT] = ACTIONS(185),
    [anon_sym_GT] = ACTIONS(185),
    [anon_sym_CARET] = ACTIONS(183),
    [anon_sym_STAR] = ACTIONS(183),
    [anon_sym_SLASH] = ACTIONS(183),
    [anon_sym_DOTMOD] = ACTIONS(183),
    [anon_sym_DOTBITAND] = ACTIONS(183),
    [anon_sym_AMP] = ACTIONS(185),
    [anon_sym_DOTBITXOR] = ACTIONS(183),
    [anon_sym_DOTSHL] = ACTIONS(183),
    [anon_sym_LT_LT] = ACTIONS(183),
    [anon_sym_DOTSHR] = ACTIONS(183),
    [anon_sym_GT_GT] = ACTIONS(183),
    [anon_sym_DOTBITOR] = ACTIONS(183),
    [anon_sym_PIPE] = ACTIONS(185),
    [anon_sym_EQ] = ACTIONS(183),
    [anon_sym_LT_GT] = ACTIONS(183),
    [anon_sym_LT_EQ] = ACTIONS(183),
    [anon_sym_GT_EQ] = ACTIONS(183),
    [anon_sym_DOTAND] = ACTIONS(183),
    [anon_sym_AMP_AMP] = ACTIONS(183),
    [anon_sym_DOTXOR] = ACTIONS(183),
    [anon_sym_DOTOR] = ACTIONS(183),
    [anon_sym_PIPE_PIPE] = ACTIONS(183),
    [sym_a16_ctrl_cmd] = ACTIONS(183),
    [sym_a8_ctrl_cmd] = ACTIONS(183),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(183),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(183),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(183),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(183),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(183),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(183),
    [sym_bss_ctrl_cmd] = ACTIONS(183),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(183),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(183),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(183),
    [sym_code_ctrl_cmd] = ACTIONS(183),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(183),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(187),
    [anon_sym_COMMA] = ACTIONS(187),
    [anon_sym_RPAREN] = ACTIONS(187),
    [sym_adc_opcode] = ACTIONS(189),
    [sym_and_opcode] = ACTIONS(189),
    [sym_asl_opcode] = ACTIONS(189),
    [sym_bcc_opcode] = ACTIONS(189),
    [sym_bcs_opcode] = ACTIONS(189),
    [sym_beq_opcode] = ACTIONS(189),
    [sym_bit_opcode] = ACTIONS(189),
    [sym_bmi_opcode] = ACTIONS(189),
    [sym_bne_opcode] = ACTIONS(189),
    [sym_bpl_opcode] = ACTIONS(189),
    [sym_brk_opcode] = ACTIONS(189),
    [sym_bvc_opcode] = ACTIONS(189),
    [sym_bvs_opcode] = ACTIONS(189),
    [sym_clc_opcode] = ACTIONS(189),
    [sym_cld_opcode] = ACTIONS(189),
    [sym_cli_opcode] = ACTIONS(189),
    [sym_clv_opcode] = ACTIONS(189),
    [sym_cmp_opcode] = ACTIONS(189),
    [sym_cpx_opcode] = ACTIONS(189),
    [sym_cpy_opcode] = ACTIONS(189),
    [sym_dec_opcode] = ACTIONS(189),
    [sym_dex_opcode] = ACTIONS(189),
    [sym_dey_opcode] = ACTIONS(189),
    [sym_eor_opcode] = ACTIONS(189),
    [sym_inc_opcode] = ACTIONS(189),
    [sym_inx_opcode] = ACTIONS(189),
    [sym_iny_opcode] = ACTIONS(189),
    [sym_jmp_opcode] = ACTIONS(189),
    [sym_jsr_opcode] = ACTIONS(189),
    [sym_lda_opcode] = ACTIONS(189),
    [sym_ldx_opcode] = ACTIONS(189),
    [sym_ldy_opcode] = ACTIONS(189),
    [sym_lsr_opcode] = ACTIONS(189),
    [sym_nop_opcode] = ACTIONS(189),
    [sym_ora_opcode] = ACTIONS(189),
    [sym_pha_opcode] = ACTIONS(189),
    [sym_php_opcode] = ACTIONS(189),
    [sym_pla_opcode] = ACTIONS(189),
    [sym_plp_opcode] = ACTIONS(189),
    [sym_rol_opcode] = ACTIONS(189),
    [sym_ror_opcode] = ACTIONS(189),
    [sym_rti_opcode] = ACTIONS(189),
    [sym_rts_opcode] = ACTIONS(189),
    [sym_sbc_opcode] = ACTIONS(189),
    [sym_sec_opcode] = ACTIONS(189),
    [sym_sed_opcode] = ACTIONS(189),
    [sym_sei_opcode] = ACTIONS(189),
    [sym_sta_opcode] = ACTIONS(189),
    [sym_stx_opcode] = ACTIONS(189),
    [sym_sty_opcode] = ACTIONS(189),
    [sym_tax_opcode] = ACTIONS(189),
    [sym_tay_opcode] = ACTIONS(189),
    [sym_tsx_opcode] = ACTIONS(189),
    [sym_txa_opcode] = ACTIONS(189),
    [sym_tcs_opcode] = ACTIONS(189),
    [sym_tya_opcode] = ACTIONS(189),
    [anon_sym_PLUS] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(187),
    [anon_sym_LT] = ACTIONS(189),
    [anon_sym_GT] = ACTIONS(189),
    [anon_sym_CARET] = ACTIONS(187),
    [anon_sym_STAR] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(187),
    [anon_sym_DOTMOD] = ACTIONS(187),
    [anon_sym_DOTBITAND] = ACTIONS(187),
    [anon_sym_AMP] = ACTIONS(189),
    [anon_sym_DOTBITXOR] = ACTIONS(187),
    [anon_sym_DOTSHL] = ACTIONS(187),
    [anon_sym_LT_LT] = ACTIONS(187),
    [anon_sym_DOTSHR] = ACTIONS(187),
    [anon_sym_GT_GT] = ACTIONS(187),
    [anon_sym_DOTBITOR] = ACTIONS(187),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_EQ] = ACTIONS(187),
    [anon_sym_LT_GT] = ACTIONS(187),
    [anon_sym_LT_EQ] = ACTIONS(187),
    [anon_sym_GT_EQ] = ACTIONS(187),
    [anon_sym_DOTAND] = ACTIONS(187),
    [anon_sym_AMP_AMP] = ACTIONS(187),
    [anon_sym_DOTXOR] = ACTIONS(187),
    [anon_sym_DOTOR] = ACTIONS(187),
    [anon_sym_PIPE_PIPE] = ACTIONS(187),
    [sym_a16_ctrl_cmd] = ACTIONS(187),
    [sym_a8_ctrl_cmd] = ACTIONS(187),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(187),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(187),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(187),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(187),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(187),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(187),
    [sym_bss_ctrl_cmd] = ACTIONS(187),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(187),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(187),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(187),
    [sym_code_ctrl_cmd] = ACTIONS(187),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(187),
  },
  [26] = {
    [aux_sym_bankbytes_ctrl_cmd_repeat1] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(191),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(191),
    [anon_sym_COMMA] = ACTIONS(193),
    [sym_adc_opcode] = ACTIONS(195),
    [sym_and_opcode] = ACTIONS(195),
    [sym_asl_opcode] = ACTIONS(195),
    [sym_bcc_opcode] = ACTIONS(195),
    [sym_bcs_opcode] = ACTIONS(195),
    [sym_beq_opcode] = ACTIONS(195),
    [sym_bit_opcode] = ACTIONS(195),
    [sym_bmi_opcode] = ACTIONS(195),
    [sym_bne_opcode] = ACTIONS(195),
    [sym_bpl_opcode] = ACTIONS(195),
    [sym_brk_opcode] = ACTIONS(195),
    [sym_bvc_opcode] = ACTIONS(195),
    [sym_bvs_opcode] = ACTIONS(195),
    [sym_clc_opcode] = ACTIONS(195),
    [sym_cld_opcode] = ACTIONS(195),
    [sym_cli_opcode] = ACTIONS(195),
    [sym_clv_opcode] = ACTIONS(195),
    [sym_cmp_opcode] = ACTIONS(195),
    [sym_cpx_opcode] = ACTIONS(195),
    [sym_cpy_opcode] = ACTIONS(195),
    [sym_dec_opcode] = ACTIONS(195),
    [sym_dex_opcode] = ACTIONS(195),
    [sym_dey_opcode] = ACTIONS(195),
    [sym_eor_opcode] = ACTIONS(195),
    [sym_inc_opcode] = ACTIONS(195),
    [sym_inx_opcode] = ACTIONS(195),
    [sym_iny_opcode] = ACTIONS(195),
    [sym_jmp_opcode] = ACTIONS(195),
    [sym_jsr_opcode] = ACTIONS(195),
    [sym_lda_opcode] = ACTIONS(195),
    [sym_ldx_opcode] = ACTIONS(195),
    [sym_ldy_opcode] = ACTIONS(195),
    [sym_lsr_opcode] = ACTIONS(195),
    [sym_nop_opcode] = ACTIONS(195),
    [sym_ora_opcode] = ACTIONS(195),
    [sym_pha_opcode] = ACTIONS(195),
    [sym_php_opcode] = ACTIONS(195),
    [sym_pla_opcode] = ACTIONS(195),
    [sym_plp_opcode] = ACTIONS(195),
    [sym_rol_opcode] = ACTIONS(195),
    [sym_ror_opcode] = ACTIONS(195),
    [sym_rti_opcode] = ACTIONS(195),
    [sym_rts_opcode] = ACTIONS(195),
    [sym_sbc_opcode] = ACTIONS(195),
    [sym_sec_opcode] = ACTIONS(195),
    [sym_sed_opcode] = ACTIONS(195),
    [sym_sei_opcode] = ACTIONS(195),
    [sym_sta_opcode] = ACTIONS(195),
    [sym_stx_opcode] = ACTIONS(195),
    [sym_sty_opcode] = ACTIONS(195),
    [sym_tax_opcode] = ACTIONS(195),
    [sym_tay_opcode] = ACTIONS(195),
    [sym_tsx_opcode] = ACTIONS(195),
    [sym_txa_opcode] = ACTIONS(195),
    [sym_tcs_opcode] = ACTIONS(195),
    [sym_tya_opcode] = ACTIONS(195),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(77),
    [anon_sym_CARET] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_DOTMOD] = ACTIONS(85),
    [anon_sym_DOTBITAND] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_DOTBITXOR] = ACTIONS(79),
    [anon_sym_DOTSHL] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(91),
    [anon_sym_DOTSHR] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_DOTBITOR] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_LT_GT] = ACTIONS(101),
    [anon_sym_LT_EQ] = ACTIONS(103),
    [anon_sym_GT_EQ] = ACTIONS(105),
    [anon_sym_DOTAND] = ACTIONS(197),
    [anon_sym_AMP_AMP] = ACTIONS(197),
    [anon_sym_DOTXOR] = ACTIONS(199),
    [anon_sym_DOTOR] = ACTIONS(201),
    [anon_sym_PIPE_PIPE] = ACTIONS(201),
    [sym_a16_ctrl_cmd] = ACTIONS(191),
    [sym_a8_ctrl_cmd] = ACTIONS(191),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(191),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(191),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(191),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(191),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(191),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(191),
    [sym_bss_ctrl_cmd] = ACTIONS(191),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(191),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(191),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(191),
    [sym_code_ctrl_cmd] = ACTIONS(191),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(191),
  },
  [27] = {
    [aux_sym_bankbytes_ctrl_cmd_repeat1] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(203),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(193),
    [sym_adc_opcode] = ACTIONS(205),
    [sym_and_opcode] = ACTIONS(205),
    [sym_asl_opcode] = ACTIONS(205),
    [sym_bcc_opcode] = ACTIONS(205),
    [sym_bcs_opcode] = ACTIONS(205),
    [sym_beq_opcode] = ACTIONS(205),
    [sym_bit_opcode] = ACTIONS(205),
    [sym_bmi_opcode] = ACTIONS(205),
    [sym_bne_opcode] = ACTIONS(205),
    [sym_bpl_opcode] = ACTIONS(205),
    [sym_brk_opcode] = ACTIONS(205),
    [sym_bvc_opcode] = ACTIONS(205),
    [sym_bvs_opcode] = ACTIONS(205),
    [sym_clc_opcode] = ACTIONS(205),
    [sym_cld_opcode] = ACTIONS(205),
    [sym_cli_opcode] = ACTIONS(205),
    [sym_clv_opcode] = ACTIONS(205),
    [sym_cmp_opcode] = ACTIONS(205),
    [sym_cpx_opcode] = ACTIONS(205),
    [sym_cpy_opcode] = ACTIONS(205),
    [sym_dec_opcode] = ACTIONS(205),
    [sym_dex_opcode] = ACTIONS(205),
    [sym_dey_opcode] = ACTIONS(205),
    [sym_eor_opcode] = ACTIONS(205),
    [sym_inc_opcode] = ACTIONS(205),
    [sym_inx_opcode] = ACTIONS(205),
    [sym_iny_opcode] = ACTIONS(205),
    [sym_jmp_opcode] = ACTIONS(205),
    [sym_jsr_opcode] = ACTIONS(205),
    [sym_lda_opcode] = ACTIONS(205),
    [sym_ldx_opcode] = ACTIONS(205),
    [sym_ldy_opcode] = ACTIONS(205),
    [sym_lsr_opcode] = ACTIONS(205),
    [sym_nop_opcode] = ACTIONS(205),
    [sym_ora_opcode] = ACTIONS(205),
    [sym_pha_opcode] = ACTIONS(205),
    [sym_php_opcode] = ACTIONS(205),
    [sym_pla_opcode] = ACTIONS(205),
    [sym_plp_opcode] = ACTIONS(205),
    [sym_rol_opcode] = ACTIONS(205),
    [sym_ror_opcode] = ACTIONS(205),
    [sym_rti_opcode] = ACTIONS(205),
    [sym_rts_opcode] = ACTIONS(205),
    [sym_sbc_opcode] = ACTIONS(205),
    [sym_sec_opcode] = ACTIONS(205),
    [sym_sed_opcode] = ACTIONS(205),
    [sym_sei_opcode] = ACTIONS(205),
    [sym_sta_opcode] = ACTIONS(205),
    [sym_stx_opcode] = ACTIONS(205),
    [sym_sty_opcode] = ACTIONS(205),
    [sym_tax_opcode] = ACTIONS(205),
    [sym_tay_opcode] = ACTIONS(205),
    [sym_tsx_opcode] = ACTIONS(205),
    [sym_txa_opcode] = ACTIONS(205),
    [sym_tcs_opcode] = ACTIONS(205),
    [sym_tya_opcode] = ACTIONS(205),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(77),
    [anon_sym_CARET] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_DOTMOD] = ACTIONS(85),
    [anon_sym_DOTBITAND] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_DOTBITXOR] = ACTIONS(79),
    [anon_sym_DOTSHL] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(91),
    [anon_sym_DOTSHR] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_DOTBITOR] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_LT_GT] = ACTIONS(101),
    [anon_sym_LT_EQ] = ACTIONS(103),
    [anon_sym_GT_EQ] = ACTIONS(105),
    [anon_sym_DOTAND] = ACTIONS(197),
    [anon_sym_AMP_AMP] = ACTIONS(197),
    [anon_sym_DOTXOR] = ACTIONS(199),
    [anon_sym_DOTOR] = ACTIONS(201),
    [anon_sym_PIPE_PIPE] = ACTIONS(201),
    [sym_a16_ctrl_cmd] = ACTIONS(203),
    [sym_a8_ctrl_cmd] = ACTIONS(203),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(203),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(203),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(203),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(203),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(203),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(203),
    [sym_bss_ctrl_cmd] = ACTIONS(203),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(203),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(203),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(203),
    [sym_code_ctrl_cmd] = ACTIONS(203),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(203),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(207),
    [anon_sym_COMMA] = ACTIONS(207),
    [anon_sym_RPAREN] = ACTIONS(207),
    [sym_adc_opcode] = ACTIONS(209),
    [sym_and_opcode] = ACTIONS(209),
    [sym_asl_opcode] = ACTIONS(209),
    [sym_bcc_opcode] = ACTIONS(209),
    [sym_bcs_opcode] = ACTIONS(209),
    [sym_beq_opcode] = ACTIONS(209),
    [sym_bit_opcode] = ACTIONS(209),
    [sym_bmi_opcode] = ACTIONS(209),
    [sym_bne_opcode] = ACTIONS(209),
    [sym_bpl_opcode] = ACTIONS(209),
    [sym_brk_opcode] = ACTIONS(209),
    [sym_bvc_opcode] = ACTIONS(209),
    [sym_bvs_opcode] = ACTIONS(209),
    [sym_clc_opcode] = ACTIONS(209),
    [sym_cld_opcode] = ACTIONS(209),
    [sym_cli_opcode] = ACTIONS(209),
    [sym_clv_opcode] = ACTIONS(209),
    [sym_cmp_opcode] = ACTIONS(209),
    [sym_cpx_opcode] = ACTIONS(209),
    [sym_cpy_opcode] = ACTIONS(209),
    [sym_dec_opcode] = ACTIONS(209),
    [sym_dex_opcode] = ACTIONS(209),
    [sym_dey_opcode] = ACTIONS(209),
    [sym_eor_opcode] = ACTIONS(209),
    [sym_inc_opcode] = ACTIONS(209),
    [sym_inx_opcode] = ACTIONS(209),
    [sym_iny_opcode] = ACTIONS(209),
    [sym_jmp_opcode] = ACTIONS(209),
    [sym_jsr_opcode] = ACTIONS(209),
    [sym_lda_opcode] = ACTIONS(209),
    [sym_ldx_opcode] = ACTIONS(209),
    [sym_ldy_opcode] = ACTIONS(209),
    [sym_lsr_opcode] = ACTIONS(209),
    [sym_nop_opcode] = ACTIONS(209),
    [sym_ora_opcode] = ACTIONS(209),
    [sym_pha_opcode] = ACTIONS(209),
    [sym_php_opcode] = ACTIONS(209),
    [sym_pla_opcode] = ACTIONS(209),
    [sym_plp_opcode] = ACTIONS(209),
    [sym_rol_opcode] = ACTIONS(209),
    [sym_ror_opcode] = ACTIONS(209),
    [sym_rti_opcode] = ACTIONS(209),
    [sym_rts_opcode] = ACTIONS(209),
    [sym_sbc_opcode] = ACTIONS(209),
    [sym_sec_opcode] = ACTIONS(209),
    [sym_sed_opcode] = ACTIONS(209),
    [sym_sei_opcode] = ACTIONS(209),
    [sym_sta_opcode] = ACTIONS(209),
    [sym_stx_opcode] = ACTIONS(209),
    [sym_sty_opcode] = ACTIONS(209),
    [sym_tax_opcode] = ACTIONS(209),
    [sym_tay_opcode] = ACTIONS(209),
    [sym_tsx_opcode] = ACTIONS(209),
    [sym_txa_opcode] = ACTIONS(209),
    [sym_tcs_opcode] = ACTIONS(209),
    [sym_tya_opcode] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(207),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_CARET] = ACTIONS(207),
    [anon_sym_STAR] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(207),
    [anon_sym_DOTMOD] = ACTIONS(207),
    [anon_sym_DOTBITAND] = ACTIONS(207),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_DOTBITXOR] = ACTIONS(207),
    [anon_sym_DOTSHL] = ACTIONS(207),
    [anon_sym_LT_LT] = ACTIONS(207),
    [anon_sym_DOTSHR] = ACTIONS(207),
    [anon_sym_GT_GT] = ACTIONS(207),
    [anon_sym_DOTBITOR] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(209),
    [anon_sym_EQ] = ACTIONS(207),
    [anon_sym_LT_GT] = ACTIONS(207),
    [anon_sym_LT_EQ] = ACTIONS(207),
    [anon_sym_GT_EQ] = ACTIONS(207),
    [anon_sym_DOTAND] = ACTIONS(207),
    [anon_sym_AMP_AMP] = ACTIONS(207),
    [anon_sym_DOTXOR] = ACTIONS(207),
    [anon_sym_DOTOR] = ACTIONS(207),
    [anon_sym_PIPE_PIPE] = ACTIONS(207),
    [sym_a16_ctrl_cmd] = ACTIONS(207),
    [sym_a8_ctrl_cmd] = ACTIONS(207),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(207),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(207),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(207),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(207),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(207),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(207),
    [sym_bss_ctrl_cmd] = ACTIONS(207),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(207),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(207),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(207),
    [sym_code_ctrl_cmd] = ACTIONS(207),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(207),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(211),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(211),
    [anon_sym_RPAREN] = ACTIONS(211),
    [sym_adc_opcode] = ACTIONS(213),
    [sym_and_opcode] = ACTIONS(213),
    [sym_asl_opcode] = ACTIONS(213),
    [sym_bcc_opcode] = ACTIONS(213),
    [sym_bcs_opcode] = ACTIONS(213),
    [sym_beq_opcode] = ACTIONS(213),
    [sym_bit_opcode] = ACTIONS(213),
    [sym_bmi_opcode] = ACTIONS(213),
    [sym_bne_opcode] = ACTIONS(213),
    [sym_bpl_opcode] = ACTIONS(213),
    [sym_brk_opcode] = ACTIONS(213),
    [sym_bvc_opcode] = ACTIONS(213),
    [sym_bvs_opcode] = ACTIONS(213),
    [sym_clc_opcode] = ACTIONS(213),
    [sym_cld_opcode] = ACTIONS(213),
    [sym_cli_opcode] = ACTIONS(213),
    [sym_clv_opcode] = ACTIONS(213),
    [sym_cmp_opcode] = ACTIONS(213),
    [sym_cpx_opcode] = ACTIONS(213),
    [sym_cpy_opcode] = ACTIONS(213),
    [sym_dec_opcode] = ACTIONS(213),
    [sym_dex_opcode] = ACTIONS(213),
    [sym_dey_opcode] = ACTIONS(213),
    [sym_eor_opcode] = ACTIONS(213),
    [sym_inc_opcode] = ACTIONS(213),
    [sym_inx_opcode] = ACTIONS(213),
    [sym_iny_opcode] = ACTIONS(213),
    [sym_jmp_opcode] = ACTIONS(213),
    [sym_jsr_opcode] = ACTIONS(213),
    [sym_lda_opcode] = ACTIONS(213),
    [sym_ldx_opcode] = ACTIONS(213),
    [sym_ldy_opcode] = ACTIONS(213),
    [sym_lsr_opcode] = ACTIONS(213),
    [sym_nop_opcode] = ACTIONS(213),
    [sym_ora_opcode] = ACTIONS(213),
    [sym_pha_opcode] = ACTIONS(213),
    [sym_php_opcode] = ACTIONS(213),
    [sym_pla_opcode] = ACTIONS(213),
    [sym_plp_opcode] = ACTIONS(213),
    [sym_rol_opcode] = ACTIONS(213),
    [sym_ror_opcode] = ACTIONS(213),
    [sym_rti_opcode] = ACTIONS(213),
    [sym_rts_opcode] = ACTIONS(213),
    [sym_sbc_opcode] = ACTIONS(213),
    [sym_sec_opcode] = ACTIONS(213),
    [sym_sed_opcode] = ACTIONS(213),
    [sym_sei_opcode] = ACTIONS(213),
    [sym_sta_opcode] = ACTIONS(213),
    [sym_stx_opcode] = ACTIONS(213),
    [sym_sty_opcode] = ACTIONS(213),
    [sym_tax_opcode] = ACTIONS(213),
    [sym_tay_opcode] = ACTIONS(213),
    [sym_tsx_opcode] = ACTIONS(213),
    [sym_txa_opcode] = ACTIONS(213),
    [sym_tcs_opcode] = ACTIONS(213),
    [sym_tya_opcode] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(211),
    [anon_sym_LT] = ACTIONS(213),
    [anon_sym_GT] = ACTIONS(213),
    [anon_sym_CARET] = ACTIONS(211),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(211),
    [anon_sym_DOTMOD] = ACTIONS(211),
    [anon_sym_DOTBITAND] = ACTIONS(211),
    [anon_sym_AMP] = ACTIONS(213),
    [anon_sym_DOTBITXOR] = ACTIONS(211),
    [anon_sym_DOTSHL] = ACTIONS(211),
    [anon_sym_LT_LT] = ACTIONS(211),
    [anon_sym_DOTSHR] = ACTIONS(211),
    [anon_sym_GT_GT] = ACTIONS(211),
    [anon_sym_DOTBITOR] = ACTIONS(211),
    [anon_sym_PIPE] = ACTIONS(213),
    [anon_sym_EQ] = ACTIONS(211),
    [anon_sym_LT_GT] = ACTIONS(211),
    [anon_sym_LT_EQ] = ACTIONS(211),
    [anon_sym_GT_EQ] = ACTIONS(211),
    [anon_sym_DOTAND] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_DOTXOR] = ACTIONS(211),
    [anon_sym_DOTOR] = ACTIONS(211),
    [anon_sym_PIPE_PIPE] = ACTIONS(211),
    [sym_a16_ctrl_cmd] = ACTIONS(211),
    [sym_a8_ctrl_cmd] = ACTIONS(211),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(211),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(211),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(211),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(211),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(211),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(211),
    [sym_bss_ctrl_cmd] = ACTIONS(211),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(211),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(211),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(211),
    [sym_code_ctrl_cmd] = ACTIONS(211),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(211),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(215),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(215),
    [anon_sym_COMMA] = ACTIONS(215),
    [anon_sym_RPAREN] = ACTIONS(215),
    [sym_adc_opcode] = ACTIONS(218),
    [sym_and_opcode] = ACTIONS(218),
    [sym_asl_opcode] = ACTIONS(218),
    [sym_bcc_opcode] = ACTIONS(218),
    [sym_bcs_opcode] = ACTIONS(218),
    [sym_beq_opcode] = ACTIONS(218),
    [sym_bit_opcode] = ACTIONS(218),
    [sym_bmi_opcode] = ACTIONS(218),
    [sym_bne_opcode] = ACTIONS(218),
    [sym_bpl_opcode] = ACTIONS(218),
    [sym_brk_opcode] = ACTIONS(218),
    [sym_bvc_opcode] = ACTIONS(218),
    [sym_bvs_opcode] = ACTIONS(218),
    [sym_clc_opcode] = ACTIONS(218),
    [sym_cld_opcode] = ACTIONS(218),
    [sym_cli_opcode] = ACTIONS(218),
    [sym_clv_opcode] = ACTIONS(218),
    [sym_cmp_opcode] = ACTIONS(218),
    [sym_cpx_opcode] = ACTIONS(218),
    [sym_cpy_opcode] = ACTIONS(218),
    [sym_dec_opcode] = ACTIONS(218),
    [sym_dex_opcode] = ACTIONS(218),
    [sym_dey_opcode] = ACTIONS(218),
    [sym_eor_opcode] = ACTIONS(218),
    [sym_inc_opcode] = ACTIONS(218),
    [sym_inx_opcode] = ACTIONS(218),
    [sym_iny_opcode] = ACTIONS(218),
    [sym_jmp_opcode] = ACTIONS(218),
    [sym_jsr_opcode] = ACTIONS(218),
    [sym_lda_opcode] = ACTIONS(218),
    [sym_ldx_opcode] = ACTIONS(218),
    [sym_ldy_opcode] = ACTIONS(218),
    [sym_lsr_opcode] = ACTIONS(218),
    [sym_nop_opcode] = ACTIONS(218),
    [sym_ora_opcode] = ACTIONS(218),
    [sym_pha_opcode] = ACTIONS(218),
    [sym_php_opcode] = ACTIONS(218),
    [sym_pla_opcode] = ACTIONS(218),
    [sym_plp_opcode] = ACTIONS(218),
    [sym_rol_opcode] = ACTIONS(218),
    [sym_ror_opcode] = ACTIONS(218),
    [sym_rti_opcode] = ACTIONS(218),
    [sym_rts_opcode] = ACTIONS(218),
    [sym_sbc_opcode] = ACTIONS(218),
    [sym_sec_opcode] = ACTIONS(218),
    [sym_sed_opcode] = ACTIONS(218),
    [sym_sei_opcode] = ACTIONS(218),
    [sym_sta_opcode] = ACTIONS(218),
    [sym_stx_opcode] = ACTIONS(218),
    [sym_sty_opcode] = ACTIONS(218),
    [sym_tax_opcode] = ACTIONS(218),
    [sym_tay_opcode] = ACTIONS(218),
    [sym_tsx_opcode] = ACTIONS(218),
    [sym_txa_opcode] = ACTIONS(218),
    [sym_tcs_opcode] = ACTIONS(218),
    [sym_tya_opcode] = ACTIONS(218),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(215),
    [anon_sym_LT] = ACTIONS(218),
    [anon_sym_GT] = ACTIONS(218),
    [anon_sym_CARET] = ACTIONS(215),
    [anon_sym_STAR] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(215),
    [anon_sym_DOTMOD] = ACTIONS(215),
    [anon_sym_DOTBITAND] = ACTIONS(215),
    [anon_sym_AMP] = ACTIONS(218),
    [anon_sym_DOTBITXOR] = ACTIONS(215),
    [anon_sym_DOTSHL] = ACTIONS(215),
    [anon_sym_LT_LT] = ACTIONS(215),
    [anon_sym_DOTSHR] = ACTIONS(215),
    [anon_sym_GT_GT] = ACTIONS(215),
    [anon_sym_DOTBITOR] = ACTIONS(215),
    [anon_sym_PIPE] = ACTIONS(218),
    [anon_sym_EQ] = ACTIONS(215),
    [anon_sym_LT_GT] = ACTIONS(215),
    [anon_sym_LT_EQ] = ACTIONS(215),
    [anon_sym_GT_EQ] = ACTIONS(215),
    [anon_sym_DOTAND] = ACTIONS(215),
    [anon_sym_AMP_AMP] = ACTIONS(215),
    [anon_sym_DOTXOR] = ACTIONS(215),
    [anon_sym_DOTOR] = ACTIONS(215),
    [anon_sym_PIPE_PIPE] = ACTIONS(215),
    [sym_a16_ctrl_cmd] = ACTIONS(215),
    [sym_a8_ctrl_cmd] = ACTIONS(215),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(215),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(215),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(215),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(215),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(215),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(215),
    [sym_bss_ctrl_cmd] = ACTIONS(215),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(215),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(215),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(215),
    [sym_code_ctrl_cmd] = ACTIONS(215),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(215),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(221),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_RPAREN] = ACTIONS(221),
    [sym_adc_opcode] = ACTIONS(223),
    [sym_and_opcode] = ACTIONS(223),
    [sym_asl_opcode] = ACTIONS(223),
    [sym_bcc_opcode] = ACTIONS(223),
    [sym_bcs_opcode] = ACTIONS(223),
    [sym_beq_opcode] = ACTIONS(223),
    [sym_bit_opcode] = ACTIONS(223),
    [sym_bmi_opcode] = ACTIONS(223),
    [sym_bne_opcode] = ACTIONS(223),
    [sym_bpl_opcode] = ACTIONS(223),
    [sym_brk_opcode] = ACTIONS(223),
    [sym_bvc_opcode] = ACTIONS(223),
    [sym_bvs_opcode] = ACTIONS(223),
    [sym_clc_opcode] = ACTIONS(223),
    [sym_cld_opcode] = ACTIONS(223),
    [sym_cli_opcode] = ACTIONS(223),
    [sym_clv_opcode] = ACTIONS(223),
    [sym_cmp_opcode] = ACTIONS(223),
    [sym_cpx_opcode] = ACTIONS(223),
    [sym_cpy_opcode] = ACTIONS(223),
    [sym_dec_opcode] = ACTIONS(223),
    [sym_dex_opcode] = ACTIONS(223),
    [sym_dey_opcode] = ACTIONS(223),
    [sym_eor_opcode] = ACTIONS(223),
    [sym_inc_opcode] = ACTIONS(223),
    [sym_inx_opcode] = ACTIONS(223),
    [sym_iny_opcode] = ACTIONS(223),
    [sym_jmp_opcode] = ACTIONS(223),
    [sym_jsr_opcode] = ACTIONS(223),
    [sym_lda_opcode] = ACTIONS(223),
    [sym_ldx_opcode] = ACTIONS(223),
    [sym_ldy_opcode] = ACTIONS(223),
    [sym_lsr_opcode] = ACTIONS(223),
    [sym_nop_opcode] = ACTIONS(223),
    [sym_ora_opcode] = ACTIONS(223),
    [sym_pha_opcode] = ACTIONS(223),
    [sym_php_opcode] = ACTIONS(223),
    [sym_pla_opcode] = ACTIONS(223),
    [sym_plp_opcode] = ACTIONS(223),
    [sym_rol_opcode] = ACTIONS(223),
    [sym_ror_opcode] = ACTIONS(223),
    [sym_rti_opcode] = ACTIONS(223),
    [sym_rts_opcode] = ACTIONS(223),
    [sym_sbc_opcode] = ACTIONS(223),
    [sym_sec_opcode] = ACTIONS(223),
    [sym_sed_opcode] = ACTIONS(223),
    [sym_sei_opcode] = ACTIONS(223),
    [sym_sta_opcode] = ACTIONS(223),
    [sym_stx_opcode] = ACTIONS(223),
    [sym_sty_opcode] = ACTIONS(223),
    [sym_tax_opcode] = ACTIONS(223),
    [sym_tay_opcode] = ACTIONS(223),
    [sym_tsx_opcode] = ACTIONS(223),
    [sym_txa_opcode] = ACTIONS(223),
    [sym_tcs_opcode] = ACTIONS(223),
    [sym_tya_opcode] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(221),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(223),
    [anon_sym_CARET] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(221),
    [anon_sym_SLASH] = ACTIONS(221),
    [anon_sym_DOTMOD] = ACTIONS(221),
    [anon_sym_DOTBITAND] = ACTIONS(221),
    [anon_sym_AMP] = ACTIONS(223),
    [anon_sym_DOTBITXOR] = ACTIONS(221),
    [anon_sym_DOTSHL] = ACTIONS(221),
    [anon_sym_LT_LT] = ACTIONS(221),
    [anon_sym_DOTSHR] = ACTIONS(221),
    [anon_sym_GT_GT] = ACTIONS(221),
    [anon_sym_DOTBITOR] = ACTIONS(221),
    [anon_sym_PIPE] = ACTIONS(223),
    [anon_sym_EQ] = ACTIONS(221),
    [anon_sym_LT_GT] = ACTIONS(221),
    [anon_sym_LT_EQ] = ACTIONS(221),
    [anon_sym_GT_EQ] = ACTIONS(221),
    [anon_sym_DOTAND] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_DOTXOR] = ACTIONS(221),
    [anon_sym_DOTOR] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [sym_a16_ctrl_cmd] = ACTIONS(221),
    [sym_a8_ctrl_cmd] = ACTIONS(221),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(221),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(221),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(221),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(221),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(221),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(221),
    [sym_bss_ctrl_cmd] = ACTIONS(221),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(221),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(221),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(221),
    [sym_code_ctrl_cmd] = ACTIONS(221),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(221),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(225),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(225),
    [anon_sym_COMMA] = ACTIONS(225),
    [anon_sym_RPAREN] = ACTIONS(225),
    [sym_adc_opcode] = ACTIONS(227),
    [sym_and_opcode] = ACTIONS(227),
    [sym_asl_opcode] = ACTIONS(227),
    [sym_bcc_opcode] = ACTIONS(227),
    [sym_bcs_opcode] = ACTIONS(227),
    [sym_beq_opcode] = ACTIONS(227),
    [sym_bit_opcode] = ACTIONS(227),
    [sym_bmi_opcode] = ACTIONS(227),
    [sym_bne_opcode] = ACTIONS(227),
    [sym_bpl_opcode] = ACTIONS(227),
    [sym_brk_opcode] = ACTIONS(227),
    [sym_bvc_opcode] = ACTIONS(227),
    [sym_bvs_opcode] = ACTIONS(227),
    [sym_clc_opcode] = ACTIONS(227),
    [sym_cld_opcode] = ACTIONS(227),
    [sym_cli_opcode] = ACTIONS(227),
    [sym_clv_opcode] = ACTIONS(227),
    [sym_cmp_opcode] = ACTIONS(227),
    [sym_cpx_opcode] = ACTIONS(227),
    [sym_cpy_opcode] = ACTIONS(227),
    [sym_dec_opcode] = ACTIONS(227),
    [sym_dex_opcode] = ACTIONS(227),
    [sym_dey_opcode] = ACTIONS(227),
    [sym_eor_opcode] = ACTIONS(227),
    [sym_inc_opcode] = ACTIONS(227),
    [sym_inx_opcode] = ACTIONS(227),
    [sym_iny_opcode] = ACTIONS(227),
    [sym_jmp_opcode] = ACTIONS(227),
    [sym_jsr_opcode] = ACTIONS(227),
    [sym_lda_opcode] = ACTIONS(227),
    [sym_ldx_opcode] = ACTIONS(227),
    [sym_ldy_opcode] = ACTIONS(227),
    [sym_lsr_opcode] = ACTIONS(227),
    [sym_nop_opcode] = ACTIONS(227),
    [sym_ora_opcode] = ACTIONS(227),
    [sym_pha_opcode] = ACTIONS(227),
    [sym_php_opcode] = ACTIONS(227),
    [sym_pla_opcode] = ACTIONS(227),
    [sym_plp_opcode] = ACTIONS(227),
    [sym_rol_opcode] = ACTIONS(227),
    [sym_ror_opcode] = ACTIONS(227),
    [sym_rti_opcode] = ACTIONS(227),
    [sym_rts_opcode] = ACTIONS(227),
    [sym_sbc_opcode] = ACTIONS(227),
    [sym_sec_opcode] = ACTIONS(227),
    [sym_sed_opcode] = ACTIONS(227),
    [sym_sei_opcode] = ACTIONS(227),
    [sym_sta_opcode] = ACTIONS(227),
    [sym_stx_opcode] = ACTIONS(227),
    [sym_sty_opcode] = ACTIONS(227),
    [sym_tax_opcode] = ACTIONS(227),
    [sym_tay_opcode] = ACTIONS(227),
    [sym_tsx_opcode] = ACTIONS(227),
    [sym_txa_opcode] = ACTIONS(227),
    [sym_tcs_opcode] = ACTIONS(227),
    [sym_tya_opcode] = ACTIONS(227),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(77),
    [anon_sym_CARET] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_DOTMOD] = ACTIONS(85),
    [anon_sym_DOTBITAND] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_DOTBITXOR] = ACTIONS(79),
    [anon_sym_DOTSHL] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(91),
    [anon_sym_DOTSHR] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_DOTBITOR] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_LT_GT] = ACTIONS(101),
    [anon_sym_LT_EQ] = ACTIONS(103),
    [anon_sym_GT_EQ] = ACTIONS(105),
    [anon_sym_DOTAND] = ACTIONS(225),
    [anon_sym_AMP_AMP] = ACTIONS(225),
    [anon_sym_DOTXOR] = ACTIONS(225),
    [anon_sym_DOTOR] = ACTIONS(225),
    [anon_sym_PIPE_PIPE] = ACTIONS(225),
    [sym_a16_ctrl_cmd] = ACTIONS(225),
    [sym_a8_ctrl_cmd] = ACTIONS(225),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(225),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(225),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(225),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(225),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(225),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(225),
    [sym_bss_ctrl_cmd] = ACTIONS(225),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(225),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(225),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(225),
    [sym_code_ctrl_cmd] = ACTIONS(225),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(225),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(229),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(229),
    [anon_sym_COMMA] = ACTIONS(229),
    [anon_sym_RPAREN] = ACTIONS(229),
    [sym_adc_opcode] = ACTIONS(231),
    [sym_and_opcode] = ACTIONS(231),
    [sym_asl_opcode] = ACTIONS(231),
    [sym_bcc_opcode] = ACTIONS(231),
    [sym_bcs_opcode] = ACTIONS(231),
    [sym_beq_opcode] = ACTIONS(231),
    [sym_bit_opcode] = ACTIONS(231),
    [sym_bmi_opcode] = ACTIONS(231),
    [sym_bne_opcode] = ACTIONS(231),
    [sym_bpl_opcode] = ACTIONS(231),
    [sym_brk_opcode] = ACTIONS(231),
    [sym_bvc_opcode] = ACTIONS(231),
    [sym_bvs_opcode] = ACTIONS(231),
    [sym_clc_opcode] = ACTIONS(231),
    [sym_cld_opcode] = ACTIONS(231),
    [sym_cli_opcode] = ACTIONS(231),
    [sym_clv_opcode] = ACTIONS(231),
    [sym_cmp_opcode] = ACTIONS(231),
    [sym_cpx_opcode] = ACTIONS(231),
    [sym_cpy_opcode] = ACTIONS(231),
    [sym_dec_opcode] = ACTIONS(231),
    [sym_dex_opcode] = ACTIONS(231),
    [sym_dey_opcode] = ACTIONS(231),
    [sym_eor_opcode] = ACTIONS(231),
    [sym_inc_opcode] = ACTIONS(231),
    [sym_inx_opcode] = ACTIONS(231),
    [sym_iny_opcode] = ACTIONS(231),
    [sym_jmp_opcode] = ACTIONS(231),
    [sym_jsr_opcode] = ACTIONS(231),
    [sym_lda_opcode] = ACTIONS(231),
    [sym_ldx_opcode] = ACTIONS(231),
    [sym_ldy_opcode] = ACTIONS(231),
    [sym_lsr_opcode] = ACTIONS(231),
    [sym_nop_opcode] = ACTIONS(231),
    [sym_ora_opcode] = ACTIONS(231),
    [sym_pha_opcode] = ACTIONS(231),
    [sym_php_opcode] = ACTIONS(231),
    [sym_pla_opcode] = ACTIONS(231),
    [sym_plp_opcode] = ACTIONS(231),
    [sym_rol_opcode] = ACTIONS(231),
    [sym_ror_opcode] = ACTIONS(231),
    [sym_rti_opcode] = ACTIONS(231),
    [sym_rts_opcode] = ACTIONS(231),
    [sym_sbc_opcode] = ACTIONS(231),
    [sym_sec_opcode] = ACTIONS(231),
    [sym_sed_opcode] = ACTIONS(231),
    [sym_sei_opcode] = ACTIONS(231),
    [sym_sta_opcode] = ACTIONS(231),
    [sym_stx_opcode] = ACTIONS(231),
    [sym_sty_opcode] = ACTIONS(231),
    [sym_tax_opcode] = ACTIONS(231),
    [sym_tay_opcode] = ACTIONS(231),
    [sym_tsx_opcode] = ACTIONS(231),
    [sym_txa_opcode] = ACTIONS(231),
    [sym_tcs_opcode] = ACTIONS(231),
    [sym_tya_opcode] = ACTIONS(231),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(77),
    [anon_sym_CARET] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_DOTMOD] = ACTIONS(85),
    [anon_sym_DOTBITAND] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_DOTBITXOR] = ACTIONS(79),
    [anon_sym_DOTSHL] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(91),
    [anon_sym_DOTSHR] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_DOTBITOR] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_LT_GT] = ACTIONS(101),
    [anon_sym_LT_EQ] = ACTIONS(103),
    [anon_sym_GT_EQ] = ACTIONS(105),
    [anon_sym_DOTAND] = ACTIONS(197),
    [anon_sym_AMP_AMP] = ACTIONS(197),
    [anon_sym_DOTXOR] = ACTIONS(199),
    [anon_sym_DOTOR] = ACTIONS(201),
    [anon_sym_PIPE_PIPE] = ACTIONS(201),
    [sym_a16_ctrl_cmd] = ACTIONS(229),
    [sym_a8_ctrl_cmd] = ACTIONS(229),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(229),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(229),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(229),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(229),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(229),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(229),
    [sym_bss_ctrl_cmd] = ACTIONS(229),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(229),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(229),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(229),
    [sym_code_ctrl_cmd] = ACTIONS(229),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(229),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(233),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(233),
    [sym_adc_opcode] = ACTIONS(235),
    [sym_and_opcode] = ACTIONS(235),
    [sym_asl_opcode] = ACTIONS(235),
    [sym_bcc_opcode] = ACTIONS(235),
    [sym_bcs_opcode] = ACTIONS(235),
    [sym_beq_opcode] = ACTIONS(235),
    [sym_bit_opcode] = ACTIONS(235),
    [sym_bmi_opcode] = ACTIONS(235),
    [sym_bne_opcode] = ACTIONS(235),
    [sym_bpl_opcode] = ACTIONS(235),
    [sym_brk_opcode] = ACTIONS(235),
    [sym_bvc_opcode] = ACTIONS(235),
    [sym_bvs_opcode] = ACTIONS(235),
    [sym_clc_opcode] = ACTIONS(235),
    [sym_cld_opcode] = ACTIONS(235),
    [sym_cli_opcode] = ACTIONS(235),
    [sym_clv_opcode] = ACTIONS(235),
    [sym_cmp_opcode] = ACTIONS(235),
    [sym_cpx_opcode] = ACTIONS(235),
    [sym_cpy_opcode] = ACTIONS(235),
    [sym_dec_opcode] = ACTIONS(235),
    [sym_dex_opcode] = ACTIONS(235),
    [sym_dey_opcode] = ACTIONS(235),
    [sym_eor_opcode] = ACTIONS(235),
    [sym_inc_opcode] = ACTIONS(235),
    [sym_inx_opcode] = ACTIONS(235),
    [sym_iny_opcode] = ACTIONS(235),
    [sym_jmp_opcode] = ACTIONS(235),
    [sym_jsr_opcode] = ACTIONS(235),
    [sym_lda_opcode] = ACTIONS(235),
    [sym_ldx_opcode] = ACTIONS(235),
    [sym_ldy_opcode] = ACTIONS(235),
    [sym_lsr_opcode] = ACTIONS(235),
    [sym_nop_opcode] = ACTIONS(235),
    [sym_ora_opcode] = ACTIONS(235),
    [sym_pha_opcode] = ACTIONS(235),
    [sym_php_opcode] = ACTIONS(235),
    [sym_pla_opcode] = ACTIONS(235),
    [sym_plp_opcode] = ACTIONS(235),
    [sym_rol_opcode] = ACTIONS(235),
    [sym_ror_opcode] = ACTIONS(235),
    [sym_rti_opcode] = ACTIONS(235),
    [sym_rts_opcode] = ACTIONS(235),
    [sym_sbc_opcode] = ACTIONS(235),
    [sym_sec_opcode] = ACTIONS(235),
    [sym_sed_opcode] = ACTIONS(235),
    [sym_sei_opcode] = ACTIONS(235),
    [sym_sta_opcode] = ACTIONS(235),
    [sym_stx_opcode] = ACTIONS(235),
    [sym_sty_opcode] = ACTIONS(235),
    [sym_tax_opcode] = ACTIONS(235),
    [sym_tay_opcode] = ACTIONS(235),
    [sym_tsx_opcode] = ACTIONS(235),
    [sym_txa_opcode] = ACTIONS(235),
    [sym_tcs_opcode] = ACTIONS(235),
    [sym_tya_opcode] = ACTIONS(235),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(77),
    [anon_sym_CARET] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_DOTMOD] = ACTIONS(85),
    [anon_sym_DOTBITAND] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_DOTBITXOR] = ACTIONS(79),
    [anon_sym_DOTSHL] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(91),
    [anon_sym_DOTSHR] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_DOTBITOR] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_LT_GT] = ACTIONS(101),
    [anon_sym_LT_EQ] = ACTIONS(103),
    [anon_sym_GT_EQ] = ACTIONS(105),
    [anon_sym_DOTAND] = ACTIONS(197),
    [anon_sym_AMP_AMP] = ACTIONS(197),
    [anon_sym_DOTXOR] = ACTIONS(199),
    [anon_sym_DOTOR] = ACTIONS(233),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [sym_a16_ctrl_cmd] = ACTIONS(233),
    [sym_a8_ctrl_cmd] = ACTIONS(233),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(233),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(233),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(233),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(233),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(233),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(233),
    [sym_bss_ctrl_cmd] = ACTIONS(233),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(233),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(233),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(233),
    [sym_code_ctrl_cmd] = ACTIONS(233),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(233),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(237),
    [anon_sym_COMMA] = ACTIONS(237),
    [anon_sym_RPAREN] = ACTIONS(237),
    [sym_adc_opcode] = ACTIONS(239),
    [sym_and_opcode] = ACTIONS(239),
    [sym_asl_opcode] = ACTIONS(239),
    [sym_bcc_opcode] = ACTIONS(239),
    [sym_bcs_opcode] = ACTIONS(239),
    [sym_beq_opcode] = ACTIONS(239),
    [sym_bit_opcode] = ACTIONS(239),
    [sym_bmi_opcode] = ACTIONS(239),
    [sym_bne_opcode] = ACTIONS(239),
    [sym_bpl_opcode] = ACTIONS(239),
    [sym_brk_opcode] = ACTIONS(239),
    [sym_bvc_opcode] = ACTIONS(239),
    [sym_bvs_opcode] = ACTIONS(239),
    [sym_clc_opcode] = ACTIONS(239),
    [sym_cld_opcode] = ACTIONS(239),
    [sym_cli_opcode] = ACTIONS(239),
    [sym_clv_opcode] = ACTIONS(239),
    [sym_cmp_opcode] = ACTIONS(239),
    [sym_cpx_opcode] = ACTIONS(239),
    [sym_cpy_opcode] = ACTIONS(239),
    [sym_dec_opcode] = ACTIONS(239),
    [sym_dex_opcode] = ACTIONS(239),
    [sym_dey_opcode] = ACTIONS(239),
    [sym_eor_opcode] = ACTIONS(239),
    [sym_inc_opcode] = ACTIONS(239),
    [sym_inx_opcode] = ACTIONS(239),
    [sym_iny_opcode] = ACTIONS(239),
    [sym_jmp_opcode] = ACTIONS(239),
    [sym_jsr_opcode] = ACTIONS(239),
    [sym_lda_opcode] = ACTIONS(239),
    [sym_ldx_opcode] = ACTIONS(239),
    [sym_ldy_opcode] = ACTIONS(239),
    [sym_lsr_opcode] = ACTIONS(239),
    [sym_nop_opcode] = ACTIONS(239),
    [sym_ora_opcode] = ACTIONS(239),
    [sym_pha_opcode] = ACTIONS(239),
    [sym_php_opcode] = ACTIONS(239),
    [sym_pla_opcode] = ACTIONS(239),
    [sym_plp_opcode] = ACTIONS(239),
    [sym_rol_opcode] = ACTIONS(239),
    [sym_ror_opcode] = ACTIONS(239),
    [sym_rti_opcode] = ACTIONS(239),
    [sym_rts_opcode] = ACTIONS(239),
    [sym_sbc_opcode] = ACTIONS(239),
    [sym_sec_opcode] = ACTIONS(239),
    [sym_sed_opcode] = ACTIONS(239),
    [sym_sei_opcode] = ACTIONS(239),
    [sym_sta_opcode] = ACTIONS(239),
    [sym_stx_opcode] = ACTIONS(239),
    [sym_sty_opcode] = ACTIONS(239),
    [sym_tax_opcode] = ACTIONS(239),
    [sym_tay_opcode] = ACTIONS(239),
    [sym_tsx_opcode] = ACTIONS(239),
    [sym_txa_opcode] = ACTIONS(239),
    [sym_tcs_opcode] = ACTIONS(239),
    [sym_tya_opcode] = ACTIONS(239),
    [anon_sym_PLUS] = ACTIONS(237),
    [anon_sym_DASH] = ACTIONS(237),
    [anon_sym_LT] = ACTIONS(239),
    [anon_sym_GT] = ACTIONS(239),
    [anon_sym_CARET] = ACTIONS(237),
    [anon_sym_STAR] = ACTIONS(237),
    [anon_sym_SLASH] = ACTIONS(237),
    [anon_sym_DOTMOD] = ACTIONS(237),
    [anon_sym_DOTBITAND] = ACTIONS(237),
    [anon_sym_AMP] = ACTIONS(239),
    [anon_sym_DOTBITXOR] = ACTIONS(237),
    [anon_sym_DOTSHL] = ACTIONS(237),
    [anon_sym_LT_LT] = ACTIONS(237),
    [anon_sym_DOTSHR] = ACTIONS(237),
    [anon_sym_GT_GT] = ACTIONS(237),
    [anon_sym_DOTBITOR] = ACTIONS(237),
    [anon_sym_PIPE] = ACTIONS(239),
    [anon_sym_EQ] = ACTIONS(237),
    [anon_sym_LT_GT] = ACTIONS(237),
    [anon_sym_LT_EQ] = ACTIONS(237),
    [anon_sym_GT_EQ] = ACTIONS(237),
    [anon_sym_DOTAND] = ACTIONS(237),
    [anon_sym_AMP_AMP] = ACTIONS(237),
    [anon_sym_DOTXOR] = ACTIONS(237),
    [anon_sym_DOTOR] = ACTIONS(237),
    [anon_sym_PIPE_PIPE] = ACTIONS(237),
    [sym_a16_ctrl_cmd] = ACTIONS(237),
    [sym_a8_ctrl_cmd] = ACTIONS(237),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(237),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(237),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(237),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(237),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(237),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(237),
    [sym_bss_ctrl_cmd] = ACTIONS(237),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(237),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(237),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(237),
    [sym_code_ctrl_cmd] = ACTIONS(237),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(237),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(241),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(241),
    [anon_sym_COMMA] = ACTIONS(241),
    [anon_sym_RPAREN] = ACTIONS(241),
    [sym_adc_opcode] = ACTIONS(243),
    [sym_and_opcode] = ACTIONS(243),
    [sym_asl_opcode] = ACTIONS(243),
    [sym_bcc_opcode] = ACTIONS(243),
    [sym_bcs_opcode] = ACTIONS(243),
    [sym_beq_opcode] = ACTIONS(243),
    [sym_bit_opcode] = ACTIONS(243),
    [sym_bmi_opcode] = ACTIONS(243),
    [sym_bne_opcode] = ACTIONS(243),
    [sym_bpl_opcode] = ACTIONS(243),
    [sym_brk_opcode] = ACTIONS(243),
    [sym_bvc_opcode] = ACTIONS(243),
    [sym_bvs_opcode] = ACTIONS(243),
    [sym_clc_opcode] = ACTIONS(243),
    [sym_cld_opcode] = ACTIONS(243),
    [sym_cli_opcode] = ACTIONS(243),
    [sym_clv_opcode] = ACTIONS(243),
    [sym_cmp_opcode] = ACTIONS(243),
    [sym_cpx_opcode] = ACTIONS(243),
    [sym_cpy_opcode] = ACTIONS(243),
    [sym_dec_opcode] = ACTIONS(243),
    [sym_dex_opcode] = ACTIONS(243),
    [sym_dey_opcode] = ACTIONS(243),
    [sym_eor_opcode] = ACTIONS(243),
    [sym_inc_opcode] = ACTIONS(243),
    [sym_inx_opcode] = ACTIONS(243),
    [sym_iny_opcode] = ACTIONS(243),
    [sym_jmp_opcode] = ACTIONS(243),
    [sym_jsr_opcode] = ACTIONS(243),
    [sym_lda_opcode] = ACTIONS(243),
    [sym_ldx_opcode] = ACTIONS(243),
    [sym_ldy_opcode] = ACTIONS(243),
    [sym_lsr_opcode] = ACTIONS(243),
    [sym_nop_opcode] = ACTIONS(243),
    [sym_ora_opcode] = ACTIONS(243),
    [sym_pha_opcode] = ACTIONS(243),
    [sym_php_opcode] = ACTIONS(243),
    [sym_pla_opcode] = ACTIONS(243),
    [sym_plp_opcode] = ACTIONS(243),
    [sym_rol_opcode] = ACTIONS(243),
    [sym_ror_opcode] = ACTIONS(243),
    [sym_rti_opcode] = ACTIONS(243),
    [sym_rts_opcode] = ACTIONS(243),
    [sym_sbc_opcode] = ACTIONS(243),
    [sym_sec_opcode] = ACTIONS(243),
    [sym_sed_opcode] = ACTIONS(243),
    [sym_sei_opcode] = ACTIONS(243),
    [sym_sta_opcode] = ACTIONS(243),
    [sym_stx_opcode] = ACTIONS(243),
    [sym_sty_opcode] = ACTIONS(243),
    [sym_tax_opcode] = ACTIONS(243),
    [sym_tay_opcode] = ACTIONS(243),
    [sym_tsx_opcode] = ACTIONS(243),
    [sym_txa_opcode] = ACTIONS(243),
    [sym_tcs_opcode] = ACTIONS(243),
    [sym_tya_opcode] = ACTIONS(243),
    [anon_sym_PLUS] = ACTIONS(241),
    [anon_sym_DASH] = ACTIONS(241),
    [anon_sym_LT] = ACTIONS(243),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_CARET] = ACTIONS(241),
    [anon_sym_STAR] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(241),
    [anon_sym_DOTMOD] = ACTIONS(241),
    [anon_sym_DOTBITAND] = ACTIONS(241),
    [anon_sym_AMP] = ACTIONS(243),
    [anon_sym_DOTBITXOR] = ACTIONS(241),
    [anon_sym_DOTSHL] = ACTIONS(241),
    [anon_sym_LT_LT] = ACTIONS(241),
    [anon_sym_DOTSHR] = ACTIONS(241),
    [anon_sym_GT_GT] = ACTIONS(241),
    [anon_sym_DOTBITOR] = ACTIONS(241),
    [anon_sym_PIPE] = ACTIONS(243),
    [anon_sym_EQ] = ACTIONS(241),
    [anon_sym_LT_GT] = ACTIONS(241),
    [anon_sym_LT_EQ] = ACTIONS(241),
    [anon_sym_GT_EQ] = ACTIONS(241),
    [anon_sym_DOTAND] = ACTIONS(241),
    [anon_sym_AMP_AMP] = ACTIONS(241),
    [anon_sym_DOTXOR] = ACTIONS(241),
    [anon_sym_DOTOR] = ACTIONS(241),
    [anon_sym_PIPE_PIPE] = ACTIONS(241),
    [sym_a16_ctrl_cmd] = ACTIONS(241),
    [sym_a8_ctrl_cmd] = ACTIONS(241),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(241),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(241),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(241),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(241),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(241),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(241),
    [sym_bss_ctrl_cmd] = ACTIONS(241),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(241),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(241),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(241),
    [sym_code_ctrl_cmd] = ACTIONS(241),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(241),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_RPAREN] = ACTIONS(245),
    [sym_adc_opcode] = ACTIONS(247),
    [sym_and_opcode] = ACTIONS(247),
    [sym_asl_opcode] = ACTIONS(247),
    [sym_bcc_opcode] = ACTIONS(247),
    [sym_bcs_opcode] = ACTIONS(247),
    [sym_beq_opcode] = ACTIONS(247),
    [sym_bit_opcode] = ACTIONS(247),
    [sym_bmi_opcode] = ACTIONS(247),
    [sym_bne_opcode] = ACTIONS(247),
    [sym_bpl_opcode] = ACTIONS(247),
    [sym_brk_opcode] = ACTIONS(247),
    [sym_bvc_opcode] = ACTIONS(247),
    [sym_bvs_opcode] = ACTIONS(247),
    [sym_clc_opcode] = ACTIONS(247),
    [sym_cld_opcode] = ACTIONS(247),
    [sym_cli_opcode] = ACTIONS(247),
    [sym_clv_opcode] = ACTIONS(247),
    [sym_cmp_opcode] = ACTIONS(247),
    [sym_cpx_opcode] = ACTIONS(247),
    [sym_cpy_opcode] = ACTIONS(247),
    [sym_dec_opcode] = ACTIONS(247),
    [sym_dex_opcode] = ACTIONS(247),
    [sym_dey_opcode] = ACTIONS(247),
    [sym_eor_opcode] = ACTIONS(247),
    [sym_inc_opcode] = ACTIONS(247),
    [sym_inx_opcode] = ACTIONS(247),
    [sym_iny_opcode] = ACTIONS(247),
    [sym_jmp_opcode] = ACTIONS(247),
    [sym_jsr_opcode] = ACTIONS(247),
    [sym_lda_opcode] = ACTIONS(247),
    [sym_ldx_opcode] = ACTIONS(247),
    [sym_ldy_opcode] = ACTIONS(247),
    [sym_lsr_opcode] = ACTIONS(247),
    [sym_nop_opcode] = ACTIONS(247),
    [sym_ora_opcode] = ACTIONS(247),
    [sym_pha_opcode] = ACTIONS(247),
    [sym_php_opcode] = ACTIONS(247),
    [sym_pla_opcode] = ACTIONS(247),
    [sym_plp_opcode] = ACTIONS(247),
    [sym_rol_opcode] = ACTIONS(247),
    [sym_ror_opcode] = ACTIONS(247),
    [sym_rti_opcode] = ACTIONS(247),
    [sym_rts_opcode] = ACTIONS(247),
    [sym_sbc_opcode] = ACTIONS(247),
    [sym_sec_opcode] = ACTIONS(247),
    [sym_sed_opcode] = ACTIONS(247),
    [sym_sei_opcode] = ACTIONS(247),
    [sym_sta_opcode] = ACTIONS(247),
    [sym_stx_opcode] = ACTIONS(247),
    [sym_sty_opcode] = ACTIONS(247),
    [sym_tax_opcode] = ACTIONS(247),
    [sym_tay_opcode] = ACTIONS(247),
    [sym_tsx_opcode] = ACTIONS(247),
    [sym_txa_opcode] = ACTIONS(247),
    [sym_tcs_opcode] = ACTIONS(247),
    [sym_tya_opcode] = ACTIONS(247),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_CARET] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(245),
    [anon_sym_DOTMOD] = ACTIONS(245),
    [anon_sym_DOTBITAND] = ACTIONS(245),
    [anon_sym_AMP] = ACTIONS(247),
    [anon_sym_DOTBITXOR] = ACTIONS(245),
    [anon_sym_DOTSHL] = ACTIONS(245),
    [anon_sym_LT_LT] = ACTIONS(245),
    [anon_sym_DOTSHR] = ACTIONS(245),
    [anon_sym_GT_GT] = ACTIONS(245),
    [anon_sym_DOTBITOR] = ACTIONS(245),
    [anon_sym_PIPE] = ACTIONS(247),
    [anon_sym_EQ] = ACTIONS(245),
    [anon_sym_LT_GT] = ACTIONS(245),
    [anon_sym_LT_EQ] = ACTIONS(245),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_DOTAND] = ACTIONS(245),
    [anon_sym_AMP_AMP] = ACTIONS(245),
    [anon_sym_DOTXOR] = ACTIONS(245),
    [anon_sym_DOTOR] = ACTIONS(245),
    [anon_sym_PIPE_PIPE] = ACTIONS(245),
    [sym_a16_ctrl_cmd] = ACTIONS(245),
    [sym_a8_ctrl_cmd] = ACTIONS(245),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(245),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(245),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(245),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(245),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(245),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(245),
    [sym_bss_ctrl_cmd] = ACTIONS(245),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(245),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(245),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(245),
    [sym_code_ctrl_cmd] = ACTIONS(245),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(245),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(249),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_RPAREN] = ACTIONS(249),
    [sym_adc_opcode] = ACTIONS(251),
    [sym_and_opcode] = ACTIONS(251),
    [sym_asl_opcode] = ACTIONS(251),
    [sym_bcc_opcode] = ACTIONS(251),
    [sym_bcs_opcode] = ACTIONS(251),
    [sym_beq_opcode] = ACTIONS(251),
    [sym_bit_opcode] = ACTIONS(251),
    [sym_bmi_opcode] = ACTIONS(251),
    [sym_bne_opcode] = ACTIONS(251),
    [sym_bpl_opcode] = ACTIONS(251),
    [sym_brk_opcode] = ACTIONS(251),
    [sym_bvc_opcode] = ACTIONS(251),
    [sym_bvs_opcode] = ACTIONS(251),
    [sym_clc_opcode] = ACTIONS(251),
    [sym_cld_opcode] = ACTIONS(251),
    [sym_cli_opcode] = ACTIONS(251),
    [sym_clv_opcode] = ACTIONS(251),
    [sym_cmp_opcode] = ACTIONS(251),
    [sym_cpx_opcode] = ACTIONS(251),
    [sym_cpy_opcode] = ACTIONS(251),
    [sym_dec_opcode] = ACTIONS(251),
    [sym_dex_opcode] = ACTIONS(251),
    [sym_dey_opcode] = ACTIONS(251),
    [sym_eor_opcode] = ACTIONS(251),
    [sym_inc_opcode] = ACTIONS(251),
    [sym_inx_opcode] = ACTIONS(251),
    [sym_iny_opcode] = ACTIONS(251),
    [sym_jmp_opcode] = ACTIONS(251),
    [sym_jsr_opcode] = ACTIONS(251),
    [sym_lda_opcode] = ACTIONS(251),
    [sym_ldx_opcode] = ACTIONS(251),
    [sym_ldy_opcode] = ACTIONS(251),
    [sym_lsr_opcode] = ACTIONS(251),
    [sym_nop_opcode] = ACTIONS(251),
    [sym_ora_opcode] = ACTIONS(251),
    [sym_pha_opcode] = ACTIONS(251),
    [sym_php_opcode] = ACTIONS(251),
    [sym_pla_opcode] = ACTIONS(251),
    [sym_plp_opcode] = ACTIONS(251),
    [sym_rol_opcode] = ACTIONS(251),
    [sym_ror_opcode] = ACTIONS(251),
    [sym_rti_opcode] = ACTIONS(251),
    [sym_rts_opcode] = ACTIONS(251),
    [sym_sbc_opcode] = ACTIONS(251),
    [sym_sec_opcode] = ACTIONS(251),
    [sym_sed_opcode] = ACTIONS(251),
    [sym_sei_opcode] = ACTIONS(251),
    [sym_sta_opcode] = ACTIONS(251),
    [sym_stx_opcode] = ACTIONS(251),
    [sym_sty_opcode] = ACTIONS(251),
    [sym_tax_opcode] = ACTIONS(251),
    [sym_tay_opcode] = ACTIONS(251),
    [sym_tsx_opcode] = ACTIONS(251),
    [sym_txa_opcode] = ACTIONS(251),
    [sym_tcs_opcode] = ACTIONS(251),
    [sym_tya_opcode] = ACTIONS(251),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_CARET] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_DOTMOD] = ACTIONS(249),
    [anon_sym_DOTBITAND] = ACTIONS(249),
    [anon_sym_AMP] = ACTIONS(251),
    [anon_sym_DOTBITXOR] = ACTIONS(249),
    [anon_sym_DOTSHL] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(249),
    [anon_sym_DOTSHR] = ACTIONS(249),
    [anon_sym_GT_GT] = ACTIONS(249),
    [anon_sym_DOTBITOR] = ACTIONS(249),
    [anon_sym_PIPE] = ACTIONS(251),
    [anon_sym_EQ] = ACTIONS(249),
    [anon_sym_LT_GT] = ACTIONS(249),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_DOTAND] = ACTIONS(249),
    [anon_sym_AMP_AMP] = ACTIONS(249),
    [anon_sym_DOTXOR] = ACTIONS(249),
    [anon_sym_DOTOR] = ACTIONS(249),
    [anon_sym_PIPE_PIPE] = ACTIONS(249),
    [sym_a16_ctrl_cmd] = ACTIONS(249),
    [sym_a8_ctrl_cmd] = ACTIONS(249),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(249),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(249),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(249),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(249),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(249),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(249),
    [sym_bss_ctrl_cmd] = ACTIONS(249),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(249),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(249),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(249),
    [sym_code_ctrl_cmd] = ACTIONS(249),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(249),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(253),
    [anon_sym_COMMA] = ACTIONS(253),
    [anon_sym_RPAREN] = ACTIONS(253),
    [sym_adc_opcode] = ACTIONS(255),
    [sym_and_opcode] = ACTIONS(255),
    [sym_asl_opcode] = ACTIONS(255),
    [sym_bcc_opcode] = ACTIONS(255),
    [sym_bcs_opcode] = ACTIONS(255),
    [sym_beq_opcode] = ACTIONS(255),
    [sym_bit_opcode] = ACTIONS(255),
    [sym_bmi_opcode] = ACTIONS(255),
    [sym_bne_opcode] = ACTIONS(255),
    [sym_bpl_opcode] = ACTIONS(255),
    [sym_brk_opcode] = ACTIONS(255),
    [sym_bvc_opcode] = ACTIONS(255),
    [sym_bvs_opcode] = ACTIONS(255),
    [sym_clc_opcode] = ACTIONS(255),
    [sym_cld_opcode] = ACTIONS(255),
    [sym_cli_opcode] = ACTIONS(255),
    [sym_clv_opcode] = ACTIONS(255),
    [sym_cmp_opcode] = ACTIONS(255),
    [sym_cpx_opcode] = ACTIONS(255),
    [sym_cpy_opcode] = ACTIONS(255),
    [sym_dec_opcode] = ACTIONS(255),
    [sym_dex_opcode] = ACTIONS(255),
    [sym_dey_opcode] = ACTIONS(255),
    [sym_eor_opcode] = ACTIONS(255),
    [sym_inc_opcode] = ACTIONS(255),
    [sym_inx_opcode] = ACTIONS(255),
    [sym_iny_opcode] = ACTIONS(255),
    [sym_jmp_opcode] = ACTIONS(255),
    [sym_jsr_opcode] = ACTIONS(255),
    [sym_lda_opcode] = ACTIONS(255),
    [sym_ldx_opcode] = ACTIONS(255),
    [sym_ldy_opcode] = ACTIONS(255),
    [sym_lsr_opcode] = ACTIONS(255),
    [sym_nop_opcode] = ACTIONS(255),
    [sym_ora_opcode] = ACTIONS(255),
    [sym_pha_opcode] = ACTIONS(255),
    [sym_php_opcode] = ACTIONS(255),
    [sym_pla_opcode] = ACTIONS(255),
    [sym_plp_opcode] = ACTIONS(255),
    [sym_rol_opcode] = ACTIONS(255),
    [sym_ror_opcode] = ACTIONS(255),
    [sym_rti_opcode] = ACTIONS(255),
    [sym_rts_opcode] = ACTIONS(255),
    [sym_sbc_opcode] = ACTIONS(255),
    [sym_sec_opcode] = ACTIONS(255),
    [sym_sed_opcode] = ACTIONS(255),
    [sym_sei_opcode] = ACTIONS(255),
    [sym_sta_opcode] = ACTIONS(255),
    [sym_stx_opcode] = ACTIONS(255),
    [sym_sty_opcode] = ACTIONS(255),
    [sym_tax_opcode] = ACTIONS(255),
    [sym_tay_opcode] = ACTIONS(255),
    [sym_tsx_opcode] = ACTIONS(255),
    [sym_txa_opcode] = ACTIONS(255),
    [sym_tcs_opcode] = ACTIONS(255),
    [sym_tya_opcode] = ACTIONS(255),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(255),
    [anon_sym_CARET] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(253),
    [anon_sym_SLASH] = ACTIONS(253),
    [anon_sym_DOTMOD] = ACTIONS(253),
    [anon_sym_DOTBITAND] = ACTIONS(253),
    [anon_sym_AMP] = ACTIONS(255),
    [anon_sym_DOTBITXOR] = ACTIONS(253),
    [anon_sym_DOTSHL] = ACTIONS(253),
    [anon_sym_LT_LT] = ACTIONS(253),
    [anon_sym_DOTSHR] = ACTIONS(253),
    [anon_sym_GT_GT] = ACTIONS(253),
    [anon_sym_DOTBITOR] = ACTIONS(253),
    [anon_sym_PIPE] = ACTIONS(255),
    [anon_sym_EQ] = ACTIONS(253),
    [anon_sym_LT_GT] = ACTIONS(253),
    [anon_sym_LT_EQ] = ACTIONS(253),
    [anon_sym_GT_EQ] = ACTIONS(253),
    [anon_sym_DOTAND] = ACTIONS(253),
    [anon_sym_AMP_AMP] = ACTIONS(253),
    [anon_sym_DOTXOR] = ACTIONS(253),
    [anon_sym_DOTOR] = ACTIONS(253),
    [anon_sym_PIPE_PIPE] = ACTIONS(253),
    [sym_a16_ctrl_cmd] = ACTIONS(253),
    [sym_a8_ctrl_cmd] = ACTIONS(253),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(253),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(253),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(253),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(253),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(253),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(253),
    [sym_bss_ctrl_cmd] = ACTIONS(253),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(253),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(253),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(253),
    [sym_code_ctrl_cmd] = ACTIONS(253),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(253),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(257),
    [anon_sym_COMMA] = ACTIONS(257),
    [anon_sym_RPAREN] = ACTIONS(257),
    [sym_adc_opcode] = ACTIONS(259),
    [sym_and_opcode] = ACTIONS(259),
    [sym_asl_opcode] = ACTIONS(259),
    [sym_bcc_opcode] = ACTIONS(259),
    [sym_bcs_opcode] = ACTIONS(259),
    [sym_beq_opcode] = ACTIONS(259),
    [sym_bit_opcode] = ACTIONS(259),
    [sym_bmi_opcode] = ACTIONS(259),
    [sym_bne_opcode] = ACTIONS(259),
    [sym_bpl_opcode] = ACTIONS(259),
    [sym_brk_opcode] = ACTIONS(259),
    [sym_bvc_opcode] = ACTIONS(259),
    [sym_bvs_opcode] = ACTIONS(259),
    [sym_clc_opcode] = ACTIONS(259),
    [sym_cld_opcode] = ACTIONS(259),
    [sym_cli_opcode] = ACTIONS(259),
    [sym_clv_opcode] = ACTIONS(259),
    [sym_cmp_opcode] = ACTIONS(259),
    [sym_cpx_opcode] = ACTIONS(259),
    [sym_cpy_opcode] = ACTIONS(259),
    [sym_dec_opcode] = ACTIONS(259),
    [sym_dex_opcode] = ACTIONS(259),
    [sym_dey_opcode] = ACTIONS(259),
    [sym_eor_opcode] = ACTIONS(259),
    [sym_inc_opcode] = ACTIONS(259),
    [sym_inx_opcode] = ACTIONS(259),
    [sym_iny_opcode] = ACTIONS(259),
    [sym_jmp_opcode] = ACTIONS(259),
    [sym_jsr_opcode] = ACTIONS(259),
    [sym_lda_opcode] = ACTIONS(259),
    [sym_ldx_opcode] = ACTIONS(259),
    [sym_ldy_opcode] = ACTIONS(259),
    [sym_lsr_opcode] = ACTIONS(259),
    [sym_nop_opcode] = ACTIONS(259),
    [sym_ora_opcode] = ACTIONS(259),
    [sym_pha_opcode] = ACTIONS(259),
    [sym_php_opcode] = ACTIONS(259),
    [sym_pla_opcode] = ACTIONS(259),
    [sym_plp_opcode] = ACTIONS(259),
    [sym_rol_opcode] = ACTIONS(259),
    [sym_ror_opcode] = ACTIONS(259),
    [sym_rti_opcode] = ACTIONS(259),
    [sym_rts_opcode] = ACTIONS(259),
    [sym_sbc_opcode] = ACTIONS(259),
    [sym_sec_opcode] = ACTIONS(259),
    [sym_sed_opcode] = ACTIONS(259),
    [sym_sei_opcode] = ACTIONS(259),
    [sym_sta_opcode] = ACTIONS(259),
    [sym_stx_opcode] = ACTIONS(259),
    [sym_sty_opcode] = ACTIONS(259),
    [sym_tax_opcode] = ACTIONS(259),
    [sym_tay_opcode] = ACTIONS(259),
    [sym_tsx_opcode] = ACTIONS(259),
    [sym_txa_opcode] = ACTIONS(259),
    [sym_tcs_opcode] = ACTIONS(259),
    [sym_tya_opcode] = ACTIONS(259),
    [anon_sym_PLUS] = ACTIONS(257),
    [anon_sym_DASH] = ACTIONS(257),
    [anon_sym_LT] = ACTIONS(259),
    [anon_sym_GT] = ACTIONS(259),
    [anon_sym_CARET] = ACTIONS(257),
    [anon_sym_STAR] = ACTIONS(257),
    [anon_sym_SLASH] = ACTIONS(257),
    [anon_sym_DOTMOD] = ACTIONS(257),
    [anon_sym_DOTBITAND] = ACTIONS(257),
    [anon_sym_AMP] = ACTIONS(259),
    [anon_sym_DOTBITXOR] = ACTIONS(257),
    [anon_sym_DOTSHL] = ACTIONS(257),
    [anon_sym_LT_LT] = ACTIONS(257),
    [anon_sym_DOTSHR] = ACTIONS(257),
    [anon_sym_GT_GT] = ACTIONS(257),
    [anon_sym_DOTBITOR] = ACTIONS(257),
    [anon_sym_PIPE] = ACTIONS(259),
    [anon_sym_EQ] = ACTIONS(257),
    [anon_sym_LT_GT] = ACTIONS(257),
    [anon_sym_LT_EQ] = ACTIONS(257),
    [anon_sym_GT_EQ] = ACTIONS(257),
    [anon_sym_DOTAND] = ACTIONS(257),
    [anon_sym_AMP_AMP] = ACTIONS(257),
    [anon_sym_DOTXOR] = ACTIONS(257),
    [anon_sym_DOTOR] = ACTIONS(257),
    [anon_sym_PIPE_PIPE] = ACTIONS(257),
    [sym_a16_ctrl_cmd] = ACTIONS(257),
    [sym_a8_ctrl_cmd] = ACTIONS(257),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(257),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(257),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(257),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(257),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(257),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(257),
    [sym_bss_ctrl_cmd] = ACTIONS(257),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(257),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(257),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(257),
    [sym_code_ctrl_cmd] = ACTIONS(257),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(257),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(261),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(261),
    [anon_sym_COMMA] = ACTIONS(263),
    [sym_adc_opcode] = ACTIONS(265),
    [sym_and_opcode] = ACTIONS(265),
    [sym_asl_opcode] = ACTIONS(265),
    [sym_bcc_opcode] = ACTIONS(265),
    [sym_bcs_opcode] = ACTIONS(265),
    [sym_beq_opcode] = ACTIONS(265),
    [sym_bit_opcode] = ACTIONS(265),
    [sym_bmi_opcode] = ACTIONS(265),
    [sym_bne_opcode] = ACTIONS(265),
    [sym_bpl_opcode] = ACTIONS(265),
    [sym_brk_opcode] = ACTIONS(265),
    [sym_bvc_opcode] = ACTIONS(265),
    [sym_bvs_opcode] = ACTIONS(265),
    [sym_clc_opcode] = ACTIONS(265),
    [sym_cld_opcode] = ACTIONS(265),
    [sym_cli_opcode] = ACTIONS(265),
    [sym_clv_opcode] = ACTIONS(265),
    [sym_cmp_opcode] = ACTIONS(265),
    [sym_cpx_opcode] = ACTIONS(265),
    [sym_cpy_opcode] = ACTIONS(265),
    [sym_dec_opcode] = ACTIONS(265),
    [sym_dex_opcode] = ACTIONS(265),
    [sym_dey_opcode] = ACTIONS(265),
    [sym_eor_opcode] = ACTIONS(265),
    [sym_inc_opcode] = ACTIONS(265),
    [sym_inx_opcode] = ACTIONS(265),
    [sym_iny_opcode] = ACTIONS(265),
    [sym_jmp_opcode] = ACTIONS(265),
    [sym_jsr_opcode] = ACTIONS(265),
    [sym_lda_opcode] = ACTIONS(265),
    [sym_ldx_opcode] = ACTIONS(265),
    [sym_ldy_opcode] = ACTIONS(265),
    [sym_lsr_opcode] = ACTIONS(265),
    [sym_nop_opcode] = ACTIONS(265),
    [sym_ora_opcode] = ACTIONS(265),
    [sym_pha_opcode] = ACTIONS(265),
    [sym_php_opcode] = ACTIONS(265),
    [sym_pla_opcode] = ACTIONS(265),
    [sym_plp_opcode] = ACTIONS(265),
    [sym_rol_opcode] = ACTIONS(265),
    [sym_ror_opcode] = ACTIONS(265),
    [sym_rti_opcode] = ACTIONS(265),
    [sym_rts_opcode] = ACTIONS(265),
    [sym_sbc_opcode] = ACTIONS(265),
    [sym_sec_opcode] = ACTIONS(265),
    [sym_sed_opcode] = ACTIONS(265),
    [sym_sei_opcode] = ACTIONS(265),
    [sym_sta_opcode] = ACTIONS(265),
    [sym_stx_opcode] = ACTIONS(265),
    [sym_sty_opcode] = ACTIONS(265),
    [sym_tax_opcode] = ACTIONS(265),
    [sym_tay_opcode] = ACTIONS(265),
    [sym_tsx_opcode] = ACTIONS(265),
    [sym_txa_opcode] = ACTIONS(265),
    [sym_tcs_opcode] = ACTIONS(265),
    [sym_tya_opcode] = ACTIONS(265),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(77),
    [anon_sym_CARET] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_DOTMOD] = ACTIONS(85),
    [anon_sym_DOTBITAND] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_DOTBITXOR] = ACTIONS(79),
    [anon_sym_DOTSHL] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(91),
    [anon_sym_DOTSHR] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_DOTBITOR] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_LT_GT] = ACTIONS(101),
    [anon_sym_LT_EQ] = ACTIONS(103),
    [anon_sym_GT_EQ] = ACTIONS(105),
    [anon_sym_DOTAND] = ACTIONS(197),
    [anon_sym_AMP_AMP] = ACTIONS(197),
    [anon_sym_DOTXOR] = ACTIONS(199),
    [anon_sym_DOTOR] = ACTIONS(201),
    [anon_sym_PIPE_PIPE] = ACTIONS(201),
    [sym_a16_ctrl_cmd] = ACTIONS(261),
    [sym_a8_ctrl_cmd] = ACTIONS(261),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(261),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(261),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(261),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(261),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(261),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(261),
    [sym_bss_ctrl_cmd] = ACTIONS(261),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(261),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(261),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(261),
    [sym_code_ctrl_cmd] = ACTIONS(261),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(261),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(267),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(267),
    [anon_sym_COMMA] = ACTIONS(267),
    [sym_adc_opcode] = ACTIONS(269),
    [sym_and_opcode] = ACTIONS(269),
    [sym_asl_opcode] = ACTIONS(269),
    [sym_bcc_opcode] = ACTIONS(269),
    [sym_bcs_opcode] = ACTIONS(269),
    [sym_beq_opcode] = ACTIONS(269),
    [sym_bit_opcode] = ACTIONS(269),
    [sym_bmi_opcode] = ACTIONS(269),
    [sym_bne_opcode] = ACTIONS(269),
    [sym_bpl_opcode] = ACTIONS(269),
    [sym_brk_opcode] = ACTIONS(269),
    [sym_bvc_opcode] = ACTIONS(269),
    [sym_bvs_opcode] = ACTIONS(269),
    [sym_clc_opcode] = ACTIONS(269),
    [sym_cld_opcode] = ACTIONS(269),
    [sym_cli_opcode] = ACTIONS(269),
    [sym_clv_opcode] = ACTIONS(269),
    [sym_cmp_opcode] = ACTIONS(269),
    [sym_cpx_opcode] = ACTIONS(269),
    [sym_cpy_opcode] = ACTIONS(269),
    [sym_dec_opcode] = ACTIONS(269),
    [sym_dex_opcode] = ACTIONS(269),
    [sym_dey_opcode] = ACTIONS(269),
    [sym_eor_opcode] = ACTIONS(269),
    [sym_inc_opcode] = ACTIONS(269),
    [sym_inx_opcode] = ACTIONS(269),
    [sym_iny_opcode] = ACTIONS(269),
    [sym_jmp_opcode] = ACTIONS(269),
    [sym_jsr_opcode] = ACTIONS(269),
    [sym_lda_opcode] = ACTIONS(269),
    [sym_ldx_opcode] = ACTIONS(269),
    [sym_ldy_opcode] = ACTIONS(269),
    [sym_lsr_opcode] = ACTIONS(269),
    [sym_nop_opcode] = ACTIONS(269),
    [sym_ora_opcode] = ACTIONS(269),
    [sym_pha_opcode] = ACTIONS(269),
    [sym_php_opcode] = ACTIONS(269),
    [sym_pla_opcode] = ACTIONS(269),
    [sym_plp_opcode] = ACTIONS(269),
    [sym_rol_opcode] = ACTIONS(269),
    [sym_ror_opcode] = ACTIONS(269),
    [sym_rti_opcode] = ACTIONS(269),
    [sym_rts_opcode] = ACTIONS(269),
    [sym_sbc_opcode] = ACTIONS(269),
    [sym_sec_opcode] = ACTIONS(269),
    [sym_sed_opcode] = ACTIONS(269),
    [sym_sei_opcode] = ACTIONS(269),
    [sym_sta_opcode] = ACTIONS(269),
    [sym_stx_opcode] = ACTIONS(269),
    [sym_sty_opcode] = ACTIONS(269),
    [sym_tax_opcode] = ACTIONS(269),
    [sym_tay_opcode] = ACTIONS(269),
    [sym_tsx_opcode] = ACTIONS(269),
    [sym_txa_opcode] = ACTIONS(269),
    [sym_tcs_opcode] = ACTIONS(269),
    [sym_tya_opcode] = ACTIONS(269),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(77),
    [anon_sym_CARET] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_DOTMOD] = ACTIONS(85),
    [anon_sym_DOTBITAND] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_DOTBITXOR] = ACTIONS(79),
    [anon_sym_DOTSHL] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(91),
    [anon_sym_DOTSHR] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_DOTBITOR] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_LT_GT] = ACTIONS(101),
    [anon_sym_LT_EQ] = ACTIONS(103),
    [anon_sym_GT_EQ] = ACTIONS(105),
    [anon_sym_DOTAND] = ACTIONS(197),
    [anon_sym_AMP_AMP] = ACTIONS(197),
    [anon_sym_DOTXOR] = ACTIONS(199),
    [anon_sym_DOTOR] = ACTIONS(201),
    [anon_sym_PIPE_PIPE] = ACTIONS(201),
    [sym_a16_ctrl_cmd] = ACTIONS(267),
    [sym_a8_ctrl_cmd] = ACTIONS(267),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(267),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(267),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(267),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(267),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(267),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(267),
    [sym_bss_ctrl_cmd] = ACTIONS(267),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(267),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(267),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(267),
    [sym_code_ctrl_cmd] = ACTIONS(267),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(267),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(271),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(271),
    [sym_adc_opcode] = ACTIONS(273),
    [sym_and_opcode] = ACTIONS(273),
    [sym_asl_opcode] = ACTIONS(273),
    [sym_bcc_opcode] = ACTIONS(273),
    [sym_bcs_opcode] = ACTIONS(273),
    [sym_beq_opcode] = ACTIONS(273),
    [sym_bit_opcode] = ACTIONS(273),
    [sym_bmi_opcode] = ACTIONS(273),
    [sym_bne_opcode] = ACTIONS(273),
    [sym_bpl_opcode] = ACTIONS(273),
    [sym_brk_opcode] = ACTIONS(273),
    [sym_bvc_opcode] = ACTIONS(273),
    [sym_bvs_opcode] = ACTIONS(273),
    [sym_clc_opcode] = ACTIONS(273),
    [sym_cld_opcode] = ACTIONS(273),
    [sym_cli_opcode] = ACTIONS(273),
    [sym_clv_opcode] = ACTIONS(273),
    [sym_cmp_opcode] = ACTIONS(273),
    [sym_cpx_opcode] = ACTIONS(273),
    [sym_cpy_opcode] = ACTIONS(273),
    [sym_dec_opcode] = ACTIONS(273),
    [sym_dex_opcode] = ACTIONS(273),
    [sym_dey_opcode] = ACTIONS(273),
    [sym_eor_opcode] = ACTIONS(273),
    [sym_inc_opcode] = ACTIONS(273),
    [sym_inx_opcode] = ACTIONS(273),
    [sym_iny_opcode] = ACTIONS(273),
    [sym_jmp_opcode] = ACTIONS(273),
    [sym_jsr_opcode] = ACTIONS(273),
    [sym_lda_opcode] = ACTIONS(273),
    [sym_ldx_opcode] = ACTIONS(273),
    [sym_ldy_opcode] = ACTIONS(273),
    [sym_lsr_opcode] = ACTIONS(273),
    [sym_nop_opcode] = ACTIONS(273),
    [sym_ora_opcode] = ACTIONS(273),
    [sym_pha_opcode] = ACTIONS(273),
    [sym_php_opcode] = ACTIONS(273),
    [sym_pla_opcode] = ACTIONS(273),
    [sym_plp_opcode] = ACTIONS(273),
    [sym_rol_opcode] = ACTIONS(273),
    [sym_ror_opcode] = ACTIONS(273),
    [sym_rti_opcode] = ACTIONS(273),
    [sym_rts_opcode] = ACTIONS(273),
    [sym_sbc_opcode] = ACTIONS(273),
    [sym_sec_opcode] = ACTIONS(273),
    [sym_sed_opcode] = ACTIONS(273),
    [sym_sei_opcode] = ACTIONS(273),
    [sym_sta_opcode] = ACTIONS(273),
    [sym_stx_opcode] = ACTIONS(273),
    [sym_sty_opcode] = ACTIONS(273),
    [sym_tax_opcode] = ACTIONS(273),
    [sym_tay_opcode] = ACTIONS(273),
    [sym_tsx_opcode] = ACTIONS(273),
    [sym_txa_opcode] = ACTIONS(273),
    [sym_tcs_opcode] = ACTIONS(273),
    [sym_tya_opcode] = ACTIONS(273),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(77),
    [anon_sym_CARET] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_DOTMOD] = ACTIONS(85),
    [anon_sym_DOTBITAND] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_DOTBITXOR] = ACTIONS(79),
    [anon_sym_DOTSHL] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(91),
    [anon_sym_DOTSHR] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_DOTBITOR] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_LT_GT] = ACTIONS(101),
    [anon_sym_LT_EQ] = ACTIONS(103),
    [anon_sym_GT_EQ] = ACTIONS(105),
    [anon_sym_DOTAND] = ACTIONS(197),
    [anon_sym_AMP_AMP] = ACTIONS(197),
    [anon_sym_DOTXOR] = ACTIONS(199),
    [anon_sym_DOTOR] = ACTIONS(201),
    [anon_sym_PIPE_PIPE] = ACTIONS(201),
    [sym_a16_ctrl_cmd] = ACTIONS(271),
    [sym_a8_ctrl_cmd] = ACTIONS(271),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(271),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(271),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(271),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(271),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(271),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(271),
    [sym_bss_ctrl_cmd] = ACTIONS(271),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(271),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(271),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(271),
    [sym_code_ctrl_cmd] = ACTIONS(271),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(271),
  },
  [44] = {
    [sym_inst] = STATE(44),
    [sym_impl_addr_inst] = STATE(86),
    [sym_acc_addr_inst] = STATE(86),
    [sym_imm_addr_inst] = STATE(86),
    [sym_abs_addr_inst] = STATE(86),
    [sym_zp_addr_inst] = STATE(86),
    [sym_abs_x_addr_inst] = STATE(86),
    [sym_abs_y_addr_inst] = STATE(86),
    [sym_zp_x_addr_inst] = STATE(86),
    [sym_zp_y_addr_inst] = STATE(86),
    [sym_ind_addr_inst] = STATE(86),
    [sym_ind_x_addr_inst] = STATE(86),
    [sym_ind_y_addr_inst] = STATE(86),
    [sym_rel_addr_inst] = STATE(86),
    [sym_ctrl_cmd] = STATE(44),
    [sym_addr_ctrl_cmd] = STATE(72),
    [sym_align_ctrl_cmd] = STATE(72),
    [sym_asciiz_ctrl_cmd] = STATE(72),
    [sym_assert_ctrl_cmd] = STATE(72),
    [sym_autoimport_ctrl_cmd] = STATE(72),
    [sym_bankbytes_ctrl_cmd] = STATE(72),
    [sym_byte_ctrl_cmd] = STATE(72),
    [sym_case_ctrl_cmd] = STATE(72),
    [sym_charmap_ctrl_cmd] = STATE(72),
    [sym_condes_ctrl_cmd] = STATE(72),
    [aux_sym_ca65_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(277),
    [sym_adc_opcode] = ACTIONS(280),
    [sym_and_opcode] = ACTIONS(280),
    [sym_asl_opcode] = ACTIONS(283),
    [sym_bcc_opcode] = ACTIONS(286),
    [sym_bcs_opcode] = ACTIONS(286),
    [sym_beq_opcode] = ACTIONS(286),
    [sym_bit_opcode] = ACTIONS(289),
    [sym_bmi_opcode] = ACTIONS(286),
    [sym_bne_opcode] = ACTIONS(286),
    [sym_bpl_opcode] = ACTIONS(286),
    [sym_brk_opcode] = ACTIONS(292),
    [sym_bvc_opcode] = ACTIONS(286),
    [sym_bvs_opcode] = ACTIONS(286),
    [sym_clc_opcode] = ACTIONS(292),
    [sym_cld_opcode] = ACTIONS(292),
    [sym_cli_opcode] = ACTIONS(292),
    [sym_clv_opcode] = ACTIONS(292),
    [sym_cmp_opcode] = ACTIONS(280),
    [sym_cpx_opcode] = ACTIONS(295),
    [sym_cpy_opcode] = ACTIONS(295),
    [sym_dec_opcode] = ACTIONS(298),
    [sym_dex_opcode] = ACTIONS(292),
    [sym_dey_opcode] = ACTIONS(292),
    [sym_eor_opcode] = ACTIONS(280),
    [sym_inc_opcode] = ACTIONS(298),
    [sym_inx_opcode] = ACTIONS(292),
    [sym_iny_opcode] = ACTIONS(292),
    [sym_jmp_opcode] = ACTIONS(301),
    [sym_jsr_opcode] = ACTIONS(304),
    [sym_lda_opcode] = ACTIONS(280),
    [sym_ldx_opcode] = ACTIONS(307),
    [sym_ldy_opcode] = ACTIONS(310),
    [sym_lsr_opcode] = ACTIONS(310),
    [sym_nop_opcode] = ACTIONS(292),
    [sym_ora_opcode] = ACTIONS(280),
    [sym_pha_opcode] = ACTIONS(292),
    [sym_php_opcode] = ACTIONS(292),
    [sym_pla_opcode] = ACTIONS(292),
    [sym_plp_opcode] = ACTIONS(292),
    [sym_rol_opcode] = ACTIONS(283),
    [sym_ror_opcode] = ACTIONS(283),
    [sym_rti_opcode] = ACTIONS(292),
    [sym_rts_opcode] = ACTIONS(292),
    [sym_sbc_opcode] = ACTIONS(280),
    [sym_sec_opcode] = ACTIONS(292),
    [sym_sed_opcode] = ACTIONS(292),
    [sym_sei_opcode] = ACTIONS(292),
    [sym_sta_opcode] = ACTIONS(313),
    [sym_stx_opcode] = ACTIONS(316),
    [sym_sty_opcode] = ACTIONS(319),
    [sym_tax_opcode] = ACTIONS(292),
    [sym_tay_opcode] = ACTIONS(292),
    [sym_tsx_opcode] = ACTIONS(292),
    [sym_txa_opcode] = ACTIONS(292),
    [sym_tcs_opcode] = ACTIONS(292),
    [sym_tya_opcode] = ACTIONS(292),
    [sym_a16_ctrl_cmd] = ACTIONS(322),
    [sym_a8_ctrl_cmd] = ACTIONS(322),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(325),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(328),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(331),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(334),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(337),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(340),
    [sym_bss_ctrl_cmd] = ACTIONS(322),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(343),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(346),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(349),
    [sym_code_ctrl_cmd] = ACTIONS(322),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(352),
  },
  [45] = {
    [sym_inst] = STATE(44),
    [sym_impl_addr_inst] = STATE(86),
    [sym_acc_addr_inst] = STATE(86),
    [sym_imm_addr_inst] = STATE(86),
    [sym_abs_addr_inst] = STATE(86),
    [sym_zp_addr_inst] = STATE(86),
    [sym_abs_x_addr_inst] = STATE(86),
    [sym_abs_y_addr_inst] = STATE(86),
    [sym_zp_x_addr_inst] = STATE(86),
    [sym_zp_y_addr_inst] = STATE(86),
    [sym_ind_addr_inst] = STATE(86),
    [sym_ind_x_addr_inst] = STATE(86),
    [sym_ind_y_addr_inst] = STATE(86),
    [sym_rel_addr_inst] = STATE(86),
    [sym_ctrl_cmd] = STATE(44),
    [sym_addr_ctrl_cmd] = STATE(72),
    [sym_align_ctrl_cmd] = STATE(72),
    [sym_asciiz_ctrl_cmd] = STATE(72),
    [sym_assert_ctrl_cmd] = STATE(72),
    [sym_autoimport_ctrl_cmd] = STATE(72),
    [sym_bankbytes_ctrl_cmd] = STATE(72),
    [sym_byte_ctrl_cmd] = STATE(72),
    [sym_case_ctrl_cmd] = STATE(72),
    [sym_charmap_ctrl_cmd] = STATE(72),
    [sym_condes_ctrl_cmd] = STATE(72),
    [aux_sym_ca65_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(355),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(357),
    [sym_adc_opcode] = ACTIONS(9),
    [sym_and_opcode] = ACTIONS(9),
    [sym_asl_opcode] = ACTIONS(11),
    [sym_bcc_opcode] = ACTIONS(13),
    [sym_bcs_opcode] = ACTIONS(13),
    [sym_beq_opcode] = ACTIONS(13),
    [sym_bit_opcode] = ACTIONS(15),
    [sym_bmi_opcode] = ACTIONS(13),
    [sym_bne_opcode] = ACTIONS(13),
    [sym_bpl_opcode] = ACTIONS(13),
    [sym_brk_opcode] = ACTIONS(17),
    [sym_bvc_opcode] = ACTIONS(13),
    [sym_bvs_opcode] = ACTIONS(13),
    [sym_clc_opcode] = ACTIONS(17),
    [sym_cld_opcode] = ACTIONS(17),
    [sym_cli_opcode] = ACTIONS(17),
    [sym_clv_opcode] = ACTIONS(17),
    [sym_cmp_opcode] = ACTIONS(9),
    [sym_cpx_opcode] = ACTIONS(19),
    [sym_cpy_opcode] = ACTIONS(19),
    [sym_dec_opcode] = ACTIONS(21),
    [sym_dex_opcode] = ACTIONS(17),
    [sym_dey_opcode] = ACTIONS(17),
    [sym_eor_opcode] = ACTIONS(9),
    [sym_inc_opcode] = ACTIONS(21),
    [sym_inx_opcode] = ACTIONS(17),
    [sym_iny_opcode] = ACTIONS(17),
    [sym_jmp_opcode] = ACTIONS(23),
    [sym_jsr_opcode] = ACTIONS(25),
    [sym_lda_opcode] = ACTIONS(9),
    [sym_ldx_opcode] = ACTIONS(27),
    [sym_ldy_opcode] = ACTIONS(29),
    [sym_lsr_opcode] = ACTIONS(29),
    [sym_nop_opcode] = ACTIONS(17),
    [sym_ora_opcode] = ACTIONS(9),
    [sym_pha_opcode] = ACTIONS(17),
    [sym_php_opcode] = ACTIONS(17),
    [sym_pla_opcode] = ACTIONS(17),
    [sym_plp_opcode] = ACTIONS(17),
    [sym_rol_opcode] = ACTIONS(11),
    [sym_ror_opcode] = ACTIONS(11),
    [sym_rti_opcode] = ACTIONS(17),
    [sym_rts_opcode] = ACTIONS(17),
    [sym_sbc_opcode] = ACTIONS(9),
    [sym_sec_opcode] = ACTIONS(17),
    [sym_sed_opcode] = ACTIONS(17),
    [sym_sei_opcode] = ACTIONS(17),
    [sym_sta_opcode] = ACTIONS(31),
    [sym_stx_opcode] = ACTIONS(33),
    [sym_sty_opcode] = ACTIONS(35),
    [sym_tax_opcode] = ACTIONS(17),
    [sym_tay_opcode] = ACTIONS(17),
    [sym_tsx_opcode] = ACTIONS(17),
    [sym_txa_opcode] = ACTIONS(17),
    [sym_tcs_opcode] = ACTIONS(17),
    [sym_tya_opcode] = ACTIONS(17),
    [sym_a16_ctrl_cmd] = ACTIONS(37),
    [sym_a8_ctrl_cmd] = ACTIONS(37),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(39),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(41),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(43),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(45),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(47),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(49),
    [sym_bss_ctrl_cmd] = ACTIONS(37),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(51),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(53),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(55),
    [sym_code_ctrl_cmd] = ACTIONS(37),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(57),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(359),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(359),
    [sym_adc_opcode] = ACTIONS(361),
    [sym_and_opcode] = ACTIONS(361),
    [sym_asl_opcode] = ACTIONS(361),
    [sym_bcc_opcode] = ACTIONS(361),
    [sym_bcs_opcode] = ACTIONS(361),
    [sym_beq_opcode] = ACTIONS(361),
    [sym_bit_opcode] = ACTIONS(361),
    [sym_bmi_opcode] = ACTIONS(361),
    [sym_bne_opcode] = ACTIONS(361),
    [sym_bpl_opcode] = ACTIONS(361),
    [sym_brk_opcode] = ACTIONS(361),
    [sym_bvc_opcode] = ACTIONS(361),
    [sym_bvs_opcode] = ACTIONS(361),
    [sym_clc_opcode] = ACTIONS(361),
    [sym_cld_opcode] = ACTIONS(361),
    [sym_cli_opcode] = ACTIONS(361),
    [sym_clv_opcode] = ACTIONS(361),
    [sym_cmp_opcode] = ACTIONS(361),
    [sym_cpx_opcode] = ACTIONS(361),
    [sym_cpy_opcode] = ACTIONS(361),
    [sym_dec_opcode] = ACTIONS(361),
    [sym_dex_opcode] = ACTIONS(361),
    [sym_dey_opcode] = ACTIONS(361),
    [sym_eor_opcode] = ACTIONS(361),
    [sym_inc_opcode] = ACTIONS(361),
    [sym_inx_opcode] = ACTIONS(361),
    [sym_iny_opcode] = ACTIONS(361),
    [sym_jmp_opcode] = ACTIONS(361),
    [sym_jsr_opcode] = ACTIONS(361),
    [sym_lda_opcode] = ACTIONS(361),
    [sym_ldx_opcode] = ACTIONS(361),
    [sym_ldy_opcode] = ACTIONS(361),
    [sym_lsr_opcode] = ACTIONS(361),
    [sym_nop_opcode] = ACTIONS(361),
    [sym_ora_opcode] = ACTIONS(361),
    [sym_pha_opcode] = ACTIONS(361),
    [sym_php_opcode] = ACTIONS(361),
    [sym_pla_opcode] = ACTIONS(361),
    [sym_plp_opcode] = ACTIONS(361),
    [sym_rol_opcode] = ACTIONS(361),
    [sym_ror_opcode] = ACTIONS(361),
    [sym_rti_opcode] = ACTIONS(361),
    [sym_rts_opcode] = ACTIONS(361),
    [sym_sbc_opcode] = ACTIONS(361),
    [sym_sec_opcode] = ACTIONS(361),
    [sym_sed_opcode] = ACTIONS(361),
    [sym_sei_opcode] = ACTIONS(361),
    [sym_sta_opcode] = ACTIONS(361),
    [sym_stx_opcode] = ACTIONS(361),
    [sym_sty_opcode] = ACTIONS(361),
    [sym_tax_opcode] = ACTIONS(361),
    [sym_tay_opcode] = ACTIONS(361),
    [sym_tsx_opcode] = ACTIONS(361),
    [sym_txa_opcode] = ACTIONS(361),
    [sym_tcs_opcode] = ACTIONS(361),
    [sym_tya_opcode] = ACTIONS(361),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(77),
    [anon_sym_CARET] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_DOTMOD] = ACTIONS(85),
    [anon_sym_DOTBITAND] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_DOTBITXOR] = ACTIONS(79),
    [anon_sym_DOTSHL] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(91),
    [anon_sym_DOTSHR] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_DOTBITOR] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_LT_GT] = ACTIONS(101),
    [anon_sym_LT_EQ] = ACTIONS(103),
    [anon_sym_GT_EQ] = ACTIONS(105),
    [anon_sym_DOTAND] = ACTIONS(197),
    [anon_sym_AMP_AMP] = ACTIONS(197),
    [anon_sym_DOTXOR] = ACTIONS(199),
    [anon_sym_DOTOR] = ACTIONS(201),
    [anon_sym_PIPE_PIPE] = ACTIONS(201),
    [sym_a16_ctrl_cmd] = ACTIONS(359),
    [sym_a8_ctrl_cmd] = ACTIONS(359),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(359),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(359),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(359),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(359),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(359),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(359),
    [sym_bss_ctrl_cmd] = ACTIONS(359),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(359),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(359),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(359),
    [sym_code_ctrl_cmd] = ACTIONS(359),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(359),
  },
  [47] = {
    [aux_sym_addr_ctrl_cmd_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(363),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(363),
    [anon_sym_COMMA] = ACTIONS(365),
    [sym_adc_opcode] = ACTIONS(367),
    [sym_and_opcode] = ACTIONS(367),
    [sym_asl_opcode] = ACTIONS(367),
    [sym_bcc_opcode] = ACTIONS(367),
    [sym_bcs_opcode] = ACTIONS(367),
    [sym_beq_opcode] = ACTIONS(367),
    [sym_bit_opcode] = ACTIONS(367),
    [sym_bmi_opcode] = ACTIONS(367),
    [sym_bne_opcode] = ACTIONS(367),
    [sym_bpl_opcode] = ACTIONS(367),
    [sym_brk_opcode] = ACTIONS(367),
    [sym_bvc_opcode] = ACTIONS(367),
    [sym_bvs_opcode] = ACTIONS(367),
    [sym_clc_opcode] = ACTIONS(367),
    [sym_cld_opcode] = ACTIONS(367),
    [sym_cli_opcode] = ACTIONS(367),
    [sym_clv_opcode] = ACTIONS(367),
    [sym_cmp_opcode] = ACTIONS(367),
    [sym_cpx_opcode] = ACTIONS(367),
    [sym_cpy_opcode] = ACTIONS(367),
    [sym_dec_opcode] = ACTIONS(367),
    [sym_dex_opcode] = ACTIONS(367),
    [sym_dey_opcode] = ACTIONS(367),
    [sym_eor_opcode] = ACTIONS(367),
    [sym_inc_opcode] = ACTIONS(367),
    [sym_inx_opcode] = ACTIONS(367),
    [sym_iny_opcode] = ACTIONS(367),
    [sym_jmp_opcode] = ACTIONS(367),
    [sym_jsr_opcode] = ACTIONS(367),
    [sym_lda_opcode] = ACTIONS(367),
    [sym_ldx_opcode] = ACTIONS(367),
    [sym_ldy_opcode] = ACTIONS(367),
    [sym_lsr_opcode] = ACTIONS(367),
    [sym_nop_opcode] = ACTIONS(367),
    [sym_ora_opcode] = ACTIONS(367),
    [sym_pha_opcode] = ACTIONS(367),
    [sym_php_opcode] = ACTIONS(367),
    [sym_pla_opcode] = ACTIONS(367),
    [sym_plp_opcode] = ACTIONS(367),
    [sym_rol_opcode] = ACTIONS(367),
    [sym_ror_opcode] = ACTIONS(367),
    [sym_rti_opcode] = ACTIONS(367),
    [sym_rts_opcode] = ACTIONS(367),
    [sym_sbc_opcode] = ACTIONS(367),
    [sym_sec_opcode] = ACTIONS(367),
    [sym_sed_opcode] = ACTIONS(367),
    [sym_sei_opcode] = ACTIONS(367),
    [sym_sta_opcode] = ACTIONS(367),
    [sym_stx_opcode] = ACTIONS(367),
    [sym_sty_opcode] = ACTIONS(367),
    [sym_tax_opcode] = ACTIONS(367),
    [sym_tay_opcode] = ACTIONS(367),
    [sym_tsx_opcode] = ACTIONS(367),
    [sym_txa_opcode] = ACTIONS(367),
    [sym_tcs_opcode] = ACTIONS(367),
    [sym_tya_opcode] = ACTIONS(367),
    [sym_a16_ctrl_cmd] = ACTIONS(363),
    [sym_a8_ctrl_cmd] = ACTIONS(363),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(363),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(363),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(363),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(363),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(363),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(363),
    [sym_bss_ctrl_cmd] = ACTIONS(363),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(363),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(363),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(363),
    [sym_code_ctrl_cmd] = ACTIONS(363),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(363),
  },
  [48] = {
    [aux_sym_addr_ctrl_cmd_repeat1] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(369),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(369),
    [anon_sym_COMMA] = ACTIONS(365),
    [sym_adc_opcode] = ACTIONS(371),
    [sym_and_opcode] = ACTIONS(371),
    [sym_asl_opcode] = ACTIONS(371),
    [sym_bcc_opcode] = ACTIONS(371),
    [sym_bcs_opcode] = ACTIONS(371),
    [sym_beq_opcode] = ACTIONS(371),
    [sym_bit_opcode] = ACTIONS(371),
    [sym_bmi_opcode] = ACTIONS(371),
    [sym_bne_opcode] = ACTIONS(371),
    [sym_bpl_opcode] = ACTIONS(371),
    [sym_brk_opcode] = ACTIONS(371),
    [sym_bvc_opcode] = ACTIONS(371),
    [sym_bvs_opcode] = ACTIONS(371),
    [sym_clc_opcode] = ACTIONS(371),
    [sym_cld_opcode] = ACTIONS(371),
    [sym_cli_opcode] = ACTIONS(371),
    [sym_clv_opcode] = ACTIONS(371),
    [sym_cmp_opcode] = ACTIONS(371),
    [sym_cpx_opcode] = ACTIONS(371),
    [sym_cpy_opcode] = ACTIONS(371),
    [sym_dec_opcode] = ACTIONS(371),
    [sym_dex_opcode] = ACTIONS(371),
    [sym_dey_opcode] = ACTIONS(371),
    [sym_eor_opcode] = ACTIONS(371),
    [sym_inc_opcode] = ACTIONS(371),
    [sym_inx_opcode] = ACTIONS(371),
    [sym_iny_opcode] = ACTIONS(371),
    [sym_jmp_opcode] = ACTIONS(371),
    [sym_jsr_opcode] = ACTIONS(371),
    [sym_lda_opcode] = ACTIONS(371),
    [sym_ldx_opcode] = ACTIONS(371),
    [sym_ldy_opcode] = ACTIONS(371),
    [sym_lsr_opcode] = ACTIONS(371),
    [sym_nop_opcode] = ACTIONS(371),
    [sym_ora_opcode] = ACTIONS(371),
    [sym_pha_opcode] = ACTIONS(371),
    [sym_php_opcode] = ACTIONS(371),
    [sym_pla_opcode] = ACTIONS(371),
    [sym_plp_opcode] = ACTIONS(371),
    [sym_rol_opcode] = ACTIONS(371),
    [sym_ror_opcode] = ACTIONS(371),
    [sym_rti_opcode] = ACTIONS(371),
    [sym_rts_opcode] = ACTIONS(371),
    [sym_sbc_opcode] = ACTIONS(371),
    [sym_sec_opcode] = ACTIONS(371),
    [sym_sed_opcode] = ACTIONS(371),
    [sym_sei_opcode] = ACTIONS(371),
    [sym_sta_opcode] = ACTIONS(371),
    [sym_stx_opcode] = ACTIONS(371),
    [sym_sty_opcode] = ACTIONS(371),
    [sym_tax_opcode] = ACTIONS(371),
    [sym_tay_opcode] = ACTIONS(371),
    [sym_tsx_opcode] = ACTIONS(371),
    [sym_txa_opcode] = ACTIONS(371),
    [sym_tcs_opcode] = ACTIONS(371),
    [sym_tya_opcode] = ACTIONS(371),
    [sym_a16_ctrl_cmd] = ACTIONS(369),
    [sym_a8_ctrl_cmd] = ACTIONS(369),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(369),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(369),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(369),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(369),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(369),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(369),
    [sym_bss_ctrl_cmd] = ACTIONS(369),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(369),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(369),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(369),
    [sym_code_ctrl_cmd] = ACTIONS(369),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(369),
  },
  [49] = {
    [aux_sym_addr_ctrl_cmd_repeat1] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(373),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(373),
    [anon_sym_COMMA] = ACTIONS(375),
    [sym_adc_opcode] = ACTIONS(378),
    [sym_and_opcode] = ACTIONS(378),
    [sym_asl_opcode] = ACTIONS(378),
    [sym_bcc_opcode] = ACTIONS(378),
    [sym_bcs_opcode] = ACTIONS(378),
    [sym_beq_opcode] = ACTIONS(378),
    [sym_bit_opcode] = ACTIONS(378),
    [sym_bmi_opcode] = ACTIONS(378),
    [sym_bne_opcode] = ACTIONS(378),
    [sym_bpl_opcode] = ACTIONS(378),
    [sym_brk_opcode] = ACTIONS(378),
    [sym_bvc_opcode] = ACTIONS(378),
    [sym_bvs_opcode] = ACTIONS(378),
    [sym_clc_opcode] = ACTIONS(378),
    [sym_cld_opcode] = ACTIONS(378),
    [sym_cli_opcode] = ACTIONS(378),
    [sym_clv_opcode] = ACTIONS(378),
    [sym_cmp_opcode] = ACTIONS(378),
    [sym_cpx_opcode] = ACTIONS(378),
    [sym_cpy_opcode] = ACTIONS(378),
    [sym_dec_opcode] = ACTIONS(378),
    [sym_dex_opcode] = ACTIONS(378),
    [sym_dey_opcode] = ACTIONS(378),
    [sym_eor_opcode] = ACTIONS(378),
    [sym_inc_opcode] = ACTIONS(378),
    [sym_inx_opcode] = ACTIONS(378),
    [sym_iny_opcode] = ACTIONS(378),
    [sym_jmp_opcode] = ACTIONS(378),
    [sym_jsr_opcode] = ACTIONS(378),
    [sym_lda_opcode] = ACTIONS(378),
    [sym_ldx_opcode] = ACTIONS(378),
    [sym_ldy_opcode] = ACTIONS(378),
    [sym_lsr_opcode] = ACTIONS(378),
    [sym_nop_opcode] = ACTIONS(378),
    [sym_ora_opcode] = ACTIONS(378),
    [sym_pha_opcode] = ACTIONS(378),
    [sym_php_opcode] = ACTIONS(378),
    [sym_pla_opcode] = ACTIONS(378),
    [sym_plp_opcode] = ACTIONS(378),
    [sym_rol_opcode] = ACTIONS(378),
    [sym_ror_opcode] = ACTIONS(378),
    [sym_rti_opcode] = ACTIONS(378),
    [sym_rts_opcode] = ACTIONS(378),
    [sym_sbc_opcode] = ACTIONS(378),
    [sym_sec_opcode] = ACTIONS(378),
    [sym_sed_opcode] = ACTIONS(378),
    [sym_sei_opcode] = ACTIONS(378),
    [sym_sta_opcode] = ACTIONS(378),
    [sym_stx_opcode] = ACTIONS(378),
    [sym_sty_opcode] = ACTIONS(378),
    [sym_tax_opcode] = ACTIONS(378),
    [sym_tay_opcode] = ACTIONS(378),
    [sym_tsx_opcode] = ACTIONS(378),
    [sym_txa_opcode] = ACTIONS(378),
    [sym_tcs_opcode] = ACTIONS(378),
    [sym_tya_opcode] = ACTIONS(378),
    [sym_a16_ctrl_cmd] = ACTIONS(373),
    [sym_a8_ctrl_cmd] = ACTIONS(373),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(373),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(373),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(373),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(373),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(373),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(373),
    [sym_bss_ctrl_cmd] = ACTIONS(373),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(373),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(373),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(373),
    [sym_code_ctrl_cmd] = ACTIONS(373),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(373),
  },
  [50] = {
    [aux_sym_bankbytes_ctrl_cmd_repeat1] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(380),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(380),
    [anon_sym_COMMA] = ACTIONS(193),
    [sym_adc_opcode] = ACTIONS(382),
    [sym_and_opcode] = ACTIONS(382),
    [sym_asl_opcode] = ACTIONS(382),
    [sym_bcc_opcode] = ACTIONS(382),
    [sym_bcs_opcode] = ACTIONS(382),
    [sym_beq_opcode] = ACTIONS(382),
    [sym_bit_opcode] = ACTIONS(382),
    [sym_bmi_opcode] = ACTIONS(382),
    [sym_bne_opcode] = ACTIONS(382),
    [sym_bpl_opcode] = ACTIONS(382),
    [sym_brk_opcode] = ACTIONS(382),
    [sym_bvc_opcode] = ACTIONS(382),
    [sym_bvs_opcode] = ACTIONS(382),
    [sym_clc_opcode] = ACTIONS(382),
    [sym_cld_opcode] = ACTIONS(382),
    [sym_cli_opcode] = ACTIONS(382),
    [sym_clv_opcode] = ACTIONS(382),
    [sym_cmp_opcode] = ACTIONS(382),
    [sym_cpx_opcode] = ACTIONS(382),
    [sym_cpy_opcode] = ACTIONS(382),
    [sym_dec_opcode] = ACTIONS(382),
    [sym_dex_opcode] = ACTIONS(382),
    [sym_dey_opcode] = ACTIONS(382),
    [sym_eor_opcode] = ACTIONS(382),
    [sym_inc_opcode] = ACTIONS(382),
    [sym_inx_opcode] = ACTIONS(382),
    [sym_iny_opcode] = ACTIONS(382),
    [sym_jmp_opcode] = ACTIONS(382),
    [sym_jsr_opcode] = ACTIONS(382),
    [sym_lda_opcode] = ACTIONS(382),
    [sym_ldx_opcode] = ACTIONS(382),
    [sym_ldy_opcode] = ACTIONS(382),
    [sym_lsr_opcode] = ACTIONS(382),
    [sym_nop_opcode] = ACTIONS(382),
    [sym_ora_opcode] = ACTIONS(382),
    [sym_pha_opcode] = ACTIONS(382),
    [sym_php_opcode] = ACTIONS(382),
    [sym_pla_opcode] = ACTIONS(382),
    [sym_plp_opcode] = ACTIONS(382),
    [sym_rol_opcode] = ACTIONS(382),
    [sym_ror_opcode] = ACTIONS(382),
    [sym_rti_opcode] = ACTIONS(382),
    [sym_rts_opcode] = ACTIONS(382),
    [sym_sbc_opcode] = ACTIONS(382),
    [sym_sec_opcode] = ACTIONS(382),
    [sym_sed_opcode] = ACTIONS(382),
    [sym_sei_opcode] = ACTIONS(382),
    [sym_sta_opcode] = ACTIONS(382),
    [sym_stx_opcode] = ACTIONS(382),
    [sym_sty_opcode] = ACTIONS(382),
    [sym_tax_opcode] = ACTIONS(382),
    [sym_tay_opcode] = ACTIONS(382),
    [sym_tsx_opcode] = ACTIONS(382),
    [sym_txa_opcode] = ACTIONS(382),
    [sym_tcs_opcode] = ACTIONS(382),
    [sym_tya_opcode] = ACTIONS(382),
    [sym_a16_ctrl_cmd] = ACTIONS(380),
    [sym_a8_ctrl_cmd] = ACTIONS(380),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(380),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(380),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(380),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(380),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(380),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(380),
    [sym_bss_ctrl_cmd] = ACTIONS(380),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(380),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(380),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(380),
    [sym_code_ctrl_cmd] = ACTIONS(380),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(380),
  },
  [51] = {
    [aux_sym_asciiz_ctrl_cmd_repeat1] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(384),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(384),
    [anon_sym_COMMA] = ACTIONS(386),
    [sym_adc_opcode] = ACTIONS(388),
    [sym_and_opcode] = ACTIONS(388),
    [sym_asl_opcode] = ACTIONS(388),
    [sym_bcc_opcode] = ACTIONS(388),
    [sym_bcs_opcode] = ACTIONS(388),
    [sym_beq_opcode] = ACTIONS(388),
    [sym_bit_opcode] = ACTIONS(388),
    [sym_bmi_opcode] = ACTIONS(388),
    [sym_bne_opcode] = ACTIONS(388),
    [sym_bpl_opcode] = ACTIONS(388),
    [sym_brk_opcode] = ACTIONS(388),
    [sym_bvc_opcode] = ACTIONS(388),
    [sym_bvs_opcode] = ACTIONS(388),
    [sym_clc_opcode] = ACTIONS(388),
    [sym_cld_opcode] = ACTIONS(388),
    [sym_cli_opcode] = ACTIONS(388),
    [sym_clv_opcode] = ACTIONS(388),
    [sym_cmp_opcode] = ACTIONS(388),
    [sym_cpx_opcode] = ACTIONS(388),
    [sym_cpy_opcode] = ACTIONS(388),
    [sym_dec_opcode] = ACTIONS(388),
    [sym_dex_opcode] = ACTIONS(388),
    [sym_dey_opcode] = ACTIONS(388),
    [sym_eor_opcode] = ACTIONS(388),
    [sym_inc_opcode] = ACTIONS(388),
    [sym_inx_opcode] = ACTIONS(388),
    [sym_iny_opcode] = ACTIONS(388),
    [sym_jmp_opcode] = ACTIONS(388),
    [sym_jsr_opcode] = ACTIONS(388),
    [sym_lda_opcode] = ACTIONS(388),
    [sym_ldx_opcode] = ACTIONS(388),
    [sym_ldy_opcode] = ACTIONS(388),
    [sym_lsr_opcode] = ACTIONS(388),
    [sym_nop_opcode] = ACTIONS(388),
    [sym_ora_opcode] = ACTIONS(388),
    [sym_pha_opcode] = ACTIONS(388),
    [sym_php_opcode] = ACTIONS(388),
    [sym_pla_opcode] = ACTIONS(388),
    [sym_plp_opcode] = ACTIONS(388),
    [sym_rol_opcode] = ACTIONS(388),
    [sym_ror_opcode] = ACTIONS(388),
    [sym_rti_opcode] = ACTIONS(388),
    [sym_rts_opcode] = ACTIONS(388),
    [sym_sbc_opcode] = ACTIONS(388),
    [sym_sec_opcode] = ACTIONS(388),
    [sym_sed_opcode] = ACTIONS(388),
    [sym_sei_opcode] = ACTIONS(388),
    [sym_sta_opcode] = ACTIONS(388),
    [sym_stx_opcode] = ACTIONS(388),
    [sym_sty_opcode] = ACTIONS(388),
    [sym_tax_opcode] = ACTIONS(388),
    [sym_tay_opcode] = ACTIONS(388),
    [sym_tsx_opcode] = ACTIONS(388),
    [sym_txa_opcode] = ACTIONS(388),
    [sym_tcs_opcode] = ACTIONS(388),
    [sym_tya_opcode] = ACTIONS(388),
    [sym_a16_ctrl_cmd] = ACTIONS(384),
    [sym_a8_ctrl_cmd] = ACTIONS(384),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(384),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(384),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(384),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(384),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(384),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(384),
    [sym_bss_ctrl_cmd] = ACTIONS(384),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(384),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(384),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(384),
    [sym_code_ctrl_cmd] = ACTIONS(384),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(384),
  },
  [52] = {
    [aux_sym_bankbytes_ctrl_cmd_repeat1] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(390),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(390),
    [anon_sym_COMMA] = ACTIONS(193),
    [sym_adc_opcode] = ACTIONS(392),
    [sym_and_opcode] = ACTIONS(392),
    [sym_asl_opcode] = ACTIONS(392),
    [sym_bcc_opcode] = ACTIONS(392),
    [sym_bcs_opcode] = ACTIONS(392),
    [sym_beq_opcode] = ACTIONS(392),
    [sym_bit_opcode] = ACTIONS(392),
    [sym_bmi_opcode] = ACTIONS(392),
    [sym_bne_opcode] = ACTIONS(392),
    [sym_bpl_opcode] = ACTIONS(392),
    [sym_brk_opcode] = ACTIONS(392),
    [sym_bvc_opcode] = ACTIONS(392),
    [sym_bvs_opcode] = ACTIONS(392),
    [sym_clc_opcode] = ACTIONS(392),
    [sym_cld_opcode] = ACTIONS(392),
    [sym_cli_opcode] = ACTIONS(392),
    [sym_clv_opcode] = ACTIONS(392),
    [sym_cmp_opcode] = ACTIONS(392),
    [sym_cpx_opcode] = ACTIONS(392),
    [sym_cpy_opcode] = ACTIONS(392),
    [sym_dec_opcode] = ACTIONS(392),
    [sym_dex_opcode] = ACTIONS(392),
    [sym_dey_opcode] = ACTIONS(392),
    [sym_eor_opcode] = ACTIONS(392),
    [sym_inc_opcode] = ACTIONS(392),
    [sym_inx_opcode] = ACTIONS(392),
    [sym_iny_opcode] = ACTIONS(392),
    [sym_jmp_opcode] = ACTIONS(392),
    [sym_jsr_opcode] = ACTIONS(392),
    [sym_lda_opcode] = ACTIONS(392),
    [sym_ldx_opcode] = ACTIONS(392),
    [sym_ldy_opcode] = ACTIONS(392),
    [sym_lsr_opcode] = ACTIONS(392),
    [sym_nop_opcode] = ACTIONS(392),
    [sym_ora_opcode] = ACTIONS(392),
    [sym_pha_opcode] = ACTIONS(392),
    [sym_php_opcode] = ACTIONS(392),
    [sym_pla_opcode] = ACTIONS(392),
    [sym_plp_opcode] = ACTIONS(392),
    [sym_rol_opcode] = ACTIONS(392),
    [sym_ror_opcode] = ACTIONS(392),
    [sym_rti_opcode] = ACTIONS(392),
    [sym_rts_opcode] = ACTIONS(392),
    [sym_sbc_opcode] = ACTIONS(392),
    [sym_sec_opcode] = ACTIONS(392),
    [sym_sed_opcode] = ACTIONS(392),
    [sym_sei_opcode] = ACTIONS(392),
    [sym_sta_opcode] = ACTIONS(392),
    [sym_stx_opcode] = ACTIONS(392),
    [sym_sty_opcode] = ACTIONS(392),
    [sym_tax_opcode] = ACTIONS(392),
    [sym_tay_opcode] = ACTIONS(392),
    [sym_tsx_opcode] = ACTIONS(392),
    [sym_txa_opcode] = ACTIONS(392),
    [sym_tcs_opcode] = ACTIONS(392),
    [sym_tya_opcode] = ACTIONS(392),
    [sym_a16_ctrl_cmd] = ACTIONS(390),
    [sym_a8_ctrl_cmd] = ACTIONS(390),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(390),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(390),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(390),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(390),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(390),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(390),
    [sym_bss_ctrl_cmd] = ACTIONS(390),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(390),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(390),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(390),
    [sym_code_ctrl_cmd] = ACTIONS(390),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(390),
  },
  [53] = {
    [aux_sym_asciiz_ctrl_cmd_repeat1] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(394),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(394),
    [anon_sym_COMMA] = ACTIONS(396),
    [sym_adc_opcode] = ACTIONS(399),
    [sym_and_opcode] = ACTIONS(399),
    [sym_asl_opcode] = ACTIONS(399),
    [sym_bcc_opcode] = ACTIONS(399),
    [sym_bcs_opcode] = ACTIONS(399),
    [sym_beq_opcode] = ACTIONS(399),
    [sym_bit_opcode] = ACTIONS(399),
    [sym_bmi_opcode] = ACTIONS(399),
    [sym_bne_opcode] = ACTIONS(399),
    [sym_bpl_opcode] = ACTIONS(399),
    [sym_brk_opcode] = ACTIONS(399),
    [sym_bvc_opcode] = ACTIONS(399),
    [sym_bvs_opcode] = ACTIONS(399),
    [sym_clc_opcode] = ACTIONS(399),
    [sym_cld_opcode] = ACTIONS(399),
    [sym_cli_opcode] = ACTIONS(399),
    [sym_clv_opcode] = ACTIONS(399),
    [sym_cmp_opcode] = ACTIONS(399),
    [sym_cpx_opcode] = ACTIONS(399),
    [sym_cpy_opcode] = ACTIONS(399),
    [sym_dec_opcode] = ACTIONS(399),
    [sym_dex_opcode] = ACTIONS(399),
    [sym_dey_opcode] = ACTIONS(399),
    [sym_eor_opcode] = ACTIONS(399),
    [sym_inc_opcode] = ACTIONS(399),
    [sym_inx_opcode] = ACTIONS(399),
    [sym_iny_opcode] = ACTIONS(399),
    [sym_jmp_opcode] = ACTIONS(399),
    [sym_jsr_opcode] = ACTIONS(399),
    [sym_lda_opcode] = ACTIONS(399),
    [sym_ldx_opcode] = ACTIONS(399),
    [sym_ldy_opcode] = ACTIONS(399),
    [sym_lsr_opcode] = ACTIONS(399),
    [sym_nop_opcode] = ACTIONS(399),
    [sym_ora_opcode] = ACTIONS(399),
    [sym_pha_opcode] = ACTIONS(399),
    [sym_php_opcode] = ACTIONS(399),
    [sym_pla_opcode] = ACTIONS(399),
    [sym_plp_opcode] = ACTIONS(399),
    [sym_rol_opcode] = ACTIONS(399),
    [sym_ror_opcode] = ACTIONS(399),
    [sym_rti_opcode] = ACTIONS(399),
    [sym_rts_opcode] = ACTIONS(399),
    [sym_sbc_opcode] = ACTIONS(399),
    [sym_sec_opcode] = ACTIONS(399),
    [sym_sed_opcode] = ACTIONS(399),
    [sym_sei_opcode] = ACTIONS(399),
    [sym_sta_opcode] = ACTIONS(399),
    [sym_stx_opcode] = ACTIONS(399),
    [sym_sty_opcode] = ACTIONS(399),
    [sym_tax_opcode] = ACTIONS(399),
    [sym_tay_opcode] = ACTIONS(399),
    [sym_tsx_opcode] = ACTIONS(399),
    [sym_txa_opcode] = ACTIONS(399),
    [sym_tcs_opcode] = ACTIONS(399),
    [sym_tya_opcode] = ACTIONS(399),
    [sym_a16_ctrl_cmd] = ACTIONS(394),
    [sym_a8_ctrl_cmd] = ACTIONS(394),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(394),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(394),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(394),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(394),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(394),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(394),
    [sym_bss_ctrl_cmd] = ACTIONS(394),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(394),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(394),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(394),
    [sym_code_ctrl_cmd] = ACTIONS(394),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(394),
  },
  [54] = {
    [aux_sym_asciiz_ctrl_cmd_repeat1] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(401),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(401),
    [anon_sym_COMMA] = ACTIONS(386),
    [sym_adc_opcode] = ACTIONS(403),
    [sym_and_opcode] = ACTIONS(403),
    [sym_asl_opcode] = ACTIONS(403),
    [sym_bcc_opcode] = ACTIONS(403),
    [sym_bcs_opcode] = ACTIONS(403),
    [sym_beq_opcode] = ACTIONS(403),
    [sym_bit_opcode] = ACTIONS(403),
    [sym_bmi_opcode] = ACTIONS(403),
    [sym_bne_opcode] = ACTIONS(403),
    [sym_bpl_opcode] = ACTIONS(403),
    [sym_brk_opcode] = ACTIONS(403),
    [sym_bvc_opcode] = ACTIONS(403),
    [sym_bvs_opcode] = ACTIONS(403),
    [sym_clc_opcode] = ACTIONS(403),
    [sym_cld_opcode] = ACTIONS(403),
    [sym_cli_opcode] = ACTIONS(403),
    [sym_clv_opcode] = ACTIONS(403),
    [sym_cmp_opcode] = ACTIONS(403),
    [sym_cpx_opcode] = ACTIONS(403),
    [sym_cpy_opcode] = ACTIONS(403),
    [sym_dec_opcode] = ACTIONS(403),
    [sym_dex_opcode] = ACTIONS(403),
    [sym_dey_opcode] = ACTIONS(403),
    [sym_eor_opcode] = ACTIONS(403),
    [sym_inc_opcode] = ACTIONS(403),
    [sym_inx_opcode] = ACTIONS(403),
    [sym_iny_opcode] = ACTIONS(403),
    [sym_jmp_opcode] = ACTIONS(403),
    [sym_jsr_opcode] = ACTIONS(403),
    [sym_lda_opcode] = ACTIONS(403),
    [sym_ldx_opcode] = ACTIONS(403),
    [sym_ldy_opcode] = ACTIONS(403),
    [sym_lsr_opcode] = ACTIONS(403),
    [sym_nop_opcode] = ACTIONS(403),
    [sym_ora_opcode] = ACTIONS(403),
    [sym_pha_opcode] = ACTIONS(403),
    [sym_php_opcode] = ACTIONS(403),
    [sym_pla_opcode] = ACTIONS(403),
    [sym_plp_opcode] = ACTIONS(403),
    [sym_rol_opcode] = ACTIONS(403),
    [sym_ror_opcode] = ACTIONS(403),
    [sym_rti_opcode] = ACTIONS(403),
    [sym_rts_opcode] = ACTIONS(403),
    [sym_sbc_opcode] = ACTIONS(403),
    [sym_sec_opcode] = ACTIONS(403),
    [sym_sed_opcode] = ACTIONS(403),
    [sym_sei_opcode] = ACTIONS(403),
    [sym_sta_opcode] = ACTIONS(403),
    [sym_stx_opcode] = ACTIONS(403),
    [sym_sty_opcode] = ACTIONS(403),
    [sym_tax_opcode] = ACTIONS(403),
    [sym_tay_opcode] = ACTIONS(403),
    [sym_tsx_opcode] = ACTIONS(403),
    [sym_txa_opcode] = ACTIONS(403),
    [sym_tcs_opcode] = ACTIONS(403),
    [sym_tya_opcode] = ACTIONS(403),
    [sym_a16_ctrl_cmd] = ACTIONS(401),
    [sym_a8_ctrl_cmd] = ACTIONS(401),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(401),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(401),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(401),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(401),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(401),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(401),
    [sym_bss_ctrl_cmd] = ACTIONS(401),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(401),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(401),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(401),
    [sym_code_ctrl_cmd] = ACTIONS(401),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(401),
  },
  [55] = {
    [aux_sym_bankbytes_ctrl_cmd_repeat1] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(267),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(267),
    [anon_sym_COMMA] = ACTIONS(405),
    [sym_adc_opcode] = ACTIONS(269),
    [sym_and_opcode] = ACTIONS(269),
    [sym_asl_opcode] = ACTIONS(269),
    [sym_bcc_opcode] = ACTIONS(269),
    [sym_bcs_opcode] = ACTIONS(269),
    [sym_beq_opcode] = ACTIONS(269),
    [sym_bit_opcode] = ACTIONS(269),
    [sym_bmi_opcode] = ACTIONS(269),
    [sym_bne_opcode] = ACTIONS(269),
    [sym_bpl_opcode] = ACTIONS(269),
    [sym_brk_opcode] = ACTIONS(269),
    [sym_bvc_opcode] = ACTIONS(269),
    [sym_bvs_opcode] = ACTIONS(269),
    [sym_clc_opcode] = ACTIONS(269),
    [sym_cld_opcode] = ACTIONS(269),
    [sym_cli_opcode] = ACTIONS(269),
    [sym_clv_opcode] = ACTIONS(269),
    [sym_cmp_opcode] = ACTIONS(269),
    [sym_cpx_opcode] = ACTIONS(269),
    [sym_cpy_opcode] = ACTIONS(269),
    [sym_dec_opcode] = ACTIONS(269),
    [sym_dex_opcode] = ACTIONS(269),
    [sym_dey_opcode] = ACTIONS(269),
    [sym_eor_opcode] = ACTIONS(269),
    [sym_inc_opcode] = ACTIONS(269),
    [sym_inx_opcode] = ACTIONS(269),
    [sym_iny_opcode] = ACTIONS(269),
    [sym_jmp_opcode] = ACTIONS(269),
    [sym_jsr_opcode] = ACTIONS(269),
    [sym_lda_opcode] = ACTIONS(269),
    [sym_ldx_opcode] = ACTIONS(269),
    [sym_ldy_opcode] = ACTIONS(269),
    [sym_lsr_opcode] = ACTIONS(269),
    [sym_nop_opcode] = ACTIONS(269),
    [sym_ora_opcode] = ACTIONS(269),
    [sym_pha_opcode] = ACTIONS(269),
    [sym_php_opcode] = ACTIONS(269),
    [sym_pla_opcode] = ACTIONS(269),
    [sym_plp_opcode] = ACTIONS(269),
    [sym_rol_opcode] = ACTIONS(269),
    [sym_ror_opcode] = ACTIONS(269),
    [sym_rti_opcode] = ACTIONS(269),
    [sym_rts_opcode] = ACTIONS(269),
    [sym_sbc_opcode] = ACTIONS(269),
    [sym_sec_opcode] = ACTIONS(269),
    [sym_sed_opcode] = ACTIONS(269),
    [sym_sei_opcode] = ACTIONS(269),
    [sym_sta_opcode] = ACTIONS(269),
    [sym_stx_opcode] = ACTIONS(269),
    [sym_sty_opcode] = ACTIONS(269),
    [sym_tax_opcode] = ACTIONS(269),
    [sym_tay_opcode] = ACTIONS(269),
    [sym_tsx_opcode] = ACTIONS(269),
    [sym_txa_opcode] = ACTIONS(269),
    [sym_tcs_opcode] = ACTIONS(269),
    [sym_tya_opcode] = ACTIONS(269),
    [sym_a16_ctrl_cmd] = ACTIONS(267),
    [sym_a8_ctrl_cmd] = ACTIONS(267),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(267),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(267),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(267),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(267),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(267),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(267),
    [sym_bss_ctrl_cmd] = ACTIONS(267),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(267),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(267),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(267),
    [sym_code_ctrl_cmd] = ACTIONS(267),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(267),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(408),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(408),
    [anon_sym_COMMA] = ACTIONS(410),
    [sym_adc_opcode] = ACTIONS(412),
    [sym_and_opcode] = ACTIONS(412),
    [sym_asl_opcode] = ACTIONS(412),
    [sym_bcc_opcode] = ACTIONS(412),
    [sym_bcs_opcode] = ACTIONS(412),
    [sym_beq_opcode] = ACTIONS(412),
    [sym_bit_opcode] = ACTIONS(412),
    [sym_bmi_opcode] = ACTIONS(412),
    [sym_bne_opcode] = ACTIONS(412),
    [sym_bpl_opcode] = ACTIONS(412),
    [sym_brk_opcode] = ACTIONS(412),
    [sym_bvc_opcode] = ACTIONS(412),
    [sym_bvs_opcode] = ACTIONS(412),
    [sym_clc_opcode] = ACTIONS(412),
    [sym_cld_opcode] = ACTIONS(412),
    [sym_cli_opcode] = ACTIONS(412),
    [sym_clv_opcode] = ACTIONS(412),
    [sym_cmp_opcode] = ACTIONS(412),
    [sym_cpx_opcode] = ACTIONS(412),
    [sym_cpy_opcode] = ACTIONS(412),
    [sym_dec_opcode] = ACTIONS(412),
    [sym_dex_opcode] = ACTIONS(412),
    [sym_dey_opcode] = ACTIONS(412),
    [sym_eor_opcode] = ACTIONS(412),
    [sym_inc_opcode] = ACTIONS(412),
    [sym_inx_opcode] = ACTIONS(412),
    [sym_iny_opcode] = ACTIONS(412),
    [sym_jmp_opcode] = ACTIONS(412),
    [sym_jsr_opcode] = ACTIONS(412),
    [sym_lda_opcode] = ACTIONS(412),
    [sym_ldx_opcode] = ACTIONS(412),
    [sym_ldy_opcode] = ACTIONS(412),
    [sym_lsr_opcode] = ACTIONS(412),
    [sym_nop_opcode] = ACTIONS(412),
    [sym_ora_opcode] = ACTIONS(412),
    [sym_pha_opcode] = ACTIONS(412),
    [sym_php_opcode] = ACTIONS(412),
    [sym_pla_opcode] = ACTIONS(412),
    [sym_plp_opcode] = ACTIONS(412),
    [sym_rol_opcode] = ACTIONS(412),
    [sym_ror_opcode] = ACTIONS(412),
    [sym_rti_opcode] = ACTIONS(412),
    [sym_rts_opcode] = ACTIONS(412),
    [sym_sbc_opcode] = ACTIONS(412),
    [sym_sec_opcode] = ACTIONS(412),
    [sym_sed_opcode] = ACTIONS(412),
    [sym_sei_opcode] = ACTIONS(412),
    [sym_sta_opcode] = ACTIONS(412),
    [sym_stx_opcode] = ACTIONS(412),
    [sym_sty_opcode] = ACTIONS(412),
    [sym_tax_opcode] = ACTIONS(412),
    [sym_tay_opcode] = ACTIONS(412),
    [sym_tsx_opcode] = ACTIONS(412),
    [sym_txa_opcode] = ACTIONS(412),
    [sym_tcs_opcode] = ACTIONS(412),
    [sym_tya_opcode] = ACTIONS(412),
    [sym_a16_ctrl_cmd] = ACTIONS(408),
    [sym_a8_ctrl_cmd] = ACTIONS(408),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(408),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(408),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(408),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(408),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(408),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(408),
    [sym_bss_ctrl_cmd] = ACTIONS(408),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(408),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(408),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(408),
    [sym_code_ctrl_cmd] = ACTIONS(408),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(408),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(414),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(414),
    [anon_sym_COMMA] = ACTIONS(416),
    [sym_adc_opcode] = ACTIONS(418),
    [sym_and_opcode] = ACTIONS(418),
    [sym_asl_opcode] = ACTIONS(418),
    [sym_bcc_opcode] = ACTIONS(418),
    [sym_bcs_opcode] = ACTIONS(418),
    [sym_beq_opcode] = ACTIONS(418),
    [sym_bit_opcode] = ACTIONS(418),
    [sym_bmi_opcode] = ACTIONS(418),
    [sym_bne_opcode] = ACTIONS(418),
    [sym_bpl_opcode] = ACTIONS(418),
    [sym_brk_opcode] = ACTIONS(418),
    [sym_bvc_opcode] = ACTIONS(418),
    [sym_bvs_opcode] = ACTIONS(418),
    [sym_clc_opcode] = ACTIONS(418),
    [sym_cld_opcode] = ACTIONS(418),
    [sym_cli_opcode] = ACTIONS(418),
    [sym_clv_opcode] = ACTIONS(418),
    [sym_cmp_opcode] = ACTIONS(418),
    [sym_cpx_opcode] = ACTIONS(418),
    [sym_cpy_opcode] = ACTIONS(418),
    [sym_dec_opcode] = ACTIONS(418),
    [sym_dex_opcode] = ACTIONS(418),
    [sym_dey_opcode] = ACTIONS(418),
    [sym_eor_opcode] = ACTIONS(418),
    [sym_inc_opcode] = ACTIONS(418),
    [sym_inx_opcode] = ACTIONS(418),
    [sym_iny_opcode] = ACTIONS(418),
    [sym_jmp_opcode] = ACTIONS(418),
    [sym_jsr_opcode] = ACTIONS(418),
    [sym_lda_opcode] = ACTIONS(418),
    [sym_ldx_opcode] = ACTIONS(418),
    [sym_ldy_opcode] = ACTIONS(418),
    [sym_lsr_opcode] = ACTIONS(418),
    [sym_nop_opcode] = ACTIONS(418),
    [sym_ora_opcode] = ACTIONS(418),
    [sym_pha_opcode] = ACTIONS(418),
    [sym_php_opcode] = ACTIONS(418),
    [sym_pla_opcode] = ACTIONS(418),
    [sym_plp_opcode] = ACTIONS(418),
    [sym_rol_opcode] = ACTIONS(418),
    [sym_ror_opcode] = ACTIONS(418),
    [sym_rti_opcode] = ACTIONS(418),
    [sym_rts_opcode] = ACTIONS(418),
    [sym_sbc_opcode] = ACTIONS(418),
    [sym_sec_opcode] = ACTIONS(418),
    [sym_sed_opcode] = ACTIONS(418),
    [sym_sei_opcode] = ACTIONS(418),
    [sym_sta_opcode] = ACTIONS(418),
    [sym_stx_opcode] = ACTIONS(418),
    [sym_sty_opcode] = ACTIONS(418),
    [sym_tax_opcode] = ACTIONS(418),
    [sym_tay_opcode] = ACTIONS(418),
    [sym_tsx_opcode] = ACTIONS(418),
    [sym_txa_opcode] = ACTIONS(418),
    [sym_tcs_opcode] = ACTIONS(418),
    [sym_tya_opcode] = ACTIONS(418),
    [sym_a16_ctrl_cmd] = ACTIONS(414),
    [sym_a8_ctrl_cmd] = ACTIONS(414),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(414),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(414),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(414),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(414),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(414),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(414),
    [sym_bss_ctrl_cmd] = ACTIONS(414),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(414),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(414),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(414),
    [sym_code_ctrl_cmd] = ACTIONS(414),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(414),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(373),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(373),
    [anon_sym_COMMA] = ACTIONS(373),
    [sym_adc_opcode] = ACTIONS(378),
    [sym_and_opcode] = ACTIONS(378),
    [sym_asl_opcode] = ACTIONS(378),
    [sym_bcc_opcode] = ACTIONS(378),
    [sym_bcs_opcode] = ACTIONS(378),
    [sym_beq_opcode] = ACTIONS(378),
    [sym_bit_opcode] = ACTIONS(378),
    [sym_bmi_opcode] = ACTIONS(378),
    [sym_bne_opcode] = ACTIONS(378),
    [sym_bpl_opcode] = ACTIONS(378),
    [sym_brk_opcode] = ACTIONS(378),
    [sym_bvc_opcode] = ACTIONS(378),
    [sym_bvs_opcode] = ACTIONS(378),
    [sym_clc_opcode] = ACTIONS(378),
    [sym_cld_opcode] = ACTIONS(378),
    [sym_cli_opcode] = ACTIONS(378),
    [sym_clv_opcode] = ACTIONS(378),
    [sym_cmp_opcode] = ACTIONS(378),
    [sym_cpx_opcode] = ACTIONS(378),
    [sym_cpy_opcode] = ACTIONS(378),
    [sym_dec_opcode] = ACTIONS(378),
    [sym_dex_opcode] = ACTIONS(378),
    [sym_dey_opcode] = ACTIONS(378),
    [sym_eor_opcode] = ACTIONS(378),
    [sym_inc_opcode] = ACTIONS(378),
    [sym_inx_opcode] = ACTIONS(378),
    [sym_iny_opcode] = ACTIONS(378),
    [sym_jmp_opcode] = ACTIONS(378),
    [sym_jsr_opcode] = ACTIONS(378),
    [sym_lda_opcode] = ACTIONS(378),
    [sym_ldx_opcode] = ACTIONS(378),
    [sym_ldy_opcode] = ACTIONS(378),
    [sym_lsr_opcode] = ACTIONS(378),
    [sym_nop_opcode] = ACTIONS(378),
    [sym_ora_opcode] = ACTIONS(378),
    [sym_pha_opcode] = ACTIONS(378),
    [sym_php_opcode] = ACTIONS(378),
    [sym_pla_opcode] = ACTIONS(378),
    [sym_plp_opcode] = ACTIONS(378),
    [sym_rol_opcode] = ACTIONS(378),
    [sym_ror_opcode] = ACTIONS(378),
    [sym_rti_opcode] = ACTIONS(378),
    [sym_rts_opcode] = ACTIONS(378),
    [sym_sbc_opcode] = ACTIONS(378),
    [sym_sec_opcode] = ACTIONS(378),
    [sym_sed_opcode] = ACTIONS(378),
    [sym_sei_opcode] = ACTIONS(378),
    [sym_sta_opcode] = ACTIONS(378),
    [sym_stx_opcode] = ACTIONS(378),
    [sym_sty_opcode] = ACTIONS(378),
    [sym_tax_opcode] = ACTIONS(378),
    [sym_tay_opcode] = ACTIONS(378),
    [sym_tsx_opcode] = ACTIONS(378),
    [sym_txa_opcode] = ACTIONS(378),
    [sym_tcs_opcode] = ACTIONS(378),
    [sym_tya_opcode] = ACTIONS(378),
    [sym_a16_ctrl_cmd] = ACTIONS(373),
    [sym_a8_ctrl_cmd] = ACTIONS(373),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(373),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(373),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(373),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(373),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(373),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(373),
    [sym_bss_ctrl_cmd] = ACTIONS(373),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(373),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(373),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(373),
    [sym_code_ctrl_cmd] = ACTIONS(373),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(373),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(414),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(414),
    [anon_sym_COMMA] = ACTIONS(420),
    [sym_adc_opcode] = ACTIONS(418),
    [sym_and_opcode] = ACTIONS(418),
    [sym_asl_opcode] = ACTIONS(418),
    [sym_bcc_opcode] = ACTIONS(418),
    [sym_bcs_opcode] = ACTIONS(418),
    [sym_beq_opcode] = ACTIONS(418),
    [sym_bit_opcode] = ACTIONS(418),
    [sym_bmi_opcode] = ACTIONS(418),
    [sym_bne_opcode] = ACTIONS(418),
    [sym_bpl_opcode] = ACTIONS(418),
    [sym_brk_opcode] = ACTIONS(418),
    [sym_bvc_opcode] = ACTIONS(418),
    [sym_bvs_opcode] = ACTIONS(418),
    [sym_clc_opcode] = ACTIONS(418),
    [sym_cld_opcode] = ACTIONS(418),
    [sym_cli_opcode] = ACTIONS(418),
    [sym_clv_opcode] = ACTIONS(418),
    [sym_cmp_opcode] = ACTIONS(418),
    [sym_cpx_opcode] = ACTIONS(418),
    [sym_cpy_opcode] = ACTIONS(418),
    [sym_dec_opcode] = ACTIONS(418),
    [sym_dex_opcode] = ACTIONS(418),
    [sym_dey_opcode] = ACTIONS(418),
    [sym_eor_opcode] = ACTIONS(418),
    [sym_inc_opcode] = ACTIONS(418),
    [sym_inx_opcode] = ACTIONS(418),
    [sym_iny_opcode] = ACTIONS(418),
    [sym_jmp_opcode] = ACTIONS(418),
    [sym_jsr_opcode] = ACTIONS(418),
    [sym_lda_opcode] = ACTIONS(418),
    [sym_ldx_opcode] = ACTIONS(418),
    [sym_ldy_opcode] = ACTIONS(418),
    [sym_lsr_opcode] = ACTIONS(418),
    [sym_nop_opcode] = ACTIONS(418),
    [sym_ora_opcode] = ACTIONS(418),
    [sym_pha_opcode] = ACTIONS(418),
    [sym_php_opcode] = ACTIONS(418),
    [sym_pla_opcode] = ACTIONS(418),
    [sym_plp_opcode] = ACTIONS(418),
    [sym_rol_opcode] = ACTIONS(418),
    [sym_ror_opcode] = ACTIONS(418),
    [sym_rti_opcode] = ACTIONS(418),
    [sym_rts_opcode] = ACTIONS(418),
    [sym_sbc_opcode] = ACTIONS(418),
    [sym_sec_opcode] = ACTIONS(418),
    [sym_sed_opcode] = ACTIONS(418),
    [sym_sei_opcode] = ACTIONS(418),
    [sym_sta_opcode] = ACTIONS(418),
    [sym_stx_opcode] = ACTIONS(418),
    [sym_sty_opcode] = ACTIONS(418),
    [sym_tax_opcode] = ACTIONS(418),
    [sym_tay_opcode] = ACTIONS(418),
    [sym_tsx_opcode] = ACTIONS(418),
    [sym_txa_opcode] = ACTIONS(418),
    [sym_tcs_opcode] = ACTIONS(418),
    [sym_tya_opcode] = ACTIONS(418),
    [sym_a16_ctrl_cmd] = ACTIONS(414),
    [sym_a8_ctrl_cmd] = ACTIONS(414),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(414),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(414),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(414),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(414),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(414),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(414),
    [sym_bss_ctrl_cmd] = ACTIONS(414),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(414),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(414),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(414),
    [sym_code_ctrl_cmd] = ACTIONS(414),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(414),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(261),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(261),
    [anon_sym_COMMA] = ACTIONS(263),
    [sym_adc_opcode] = ACTIONS(265),
    [sym_and_opcode] = ACTIONS(265),
    [sym_asl_opcode] = ACTIONS(265),
    [sym_bcc_opcode] = ACTIONS(265),
    [sym_bcs_opcode] = ACTIONS(265),
    [sym_beq_opcode] = ACTIONS(265),
    [sym_bit_opcode] = ACTIONS(265),
    [sym_bmi_opcode] = ACTIONS(265),
    [sym_bne_opcode] = ACTIONS(265),
    [sym_bpl_opcode] = ACTIONS(265),
    [sym_brk_opcode] = ACTIONS(265),
    [sym_bvc_opcode] = ACTIONS(265),
    [sym_bvs_opcode] = ACTIONS(265),
    [sym_clc_opcode] = ACTIONS(265),
    [sym_cld_opcode] = ACTIONS(265),
    [sym_cli_opcode] = ACTIONS(265),
    [sym_clv_opcode] = ACTIONS(265),
    [sym_cmp_opcode] = ACTIONS(265),
    [sym_cpx_opcode] = ACTIONS(265),
    [sym_cpy_opcode] = ACTIONS(265),
    [sym_dec_opcode] = ACTIONS(265),
    [sym_dex_opcode] = ACTIONS(265),
    [sym_dey_opcode] = ACTIONS(265),
    [sym_eor_opcode] = ACTIONS(265),
    [sym_inc_opcode] = ACTIONS(265),
    [sym_inx_opcode] = ACTIONS(265),
    [sym_iny_opcode] = ACTIONS(265),
    [sym_jmp_opcode] = ACTIONS(265),
    [sym_jsr_opcode] = ACTIONS(265),
    [sym_lda_opcode] = ACTIONS(265),
    [sym_ldx_opcode] = ACTIONS(265),
    [sym_ldy_opcode] = ACTIONS(265),
    [sym_lsr_opcode] = ACTIONS(265),
    [sym_nop_opcode] = ACTIONS(265),
    [sym_ora_opcode] = ACTIONS(265),
    [sym_pha_opcode] = ACTIONS(265),
    [sym_php_opcode] = ACTIONS(265),
    [sym_pla_opcode] = ACTIONS(265),
    [sym_plp_opcode] = ACTIONS(265),
    [sym_rol_opcode] = ACTIONS(265),
    [sym_ror_opcode] = ACTIONS(265),
    [sym_rti_opcode] = ACTIONS(265),
    [sym_rts_opcode] = ACTIONS(265),
    [sym_sbc_opcode] = ACTIONS(265),
    [sym_sec_opcode] = ACTIONS(265),
    [sym_sed_opcode] = ACTIONS(265),
    [sym_sei_opcode] = ACTIONS(265),
    [sym_sta_opcode] = ACTIONS(265),
    [sym_stx_opcode] = ACTIONS(265),
    [sym_sty_opcode] = ACTIONS(265),
    [sym_tax_opcode] = ACTIONS(265),
    [sym_tay_opcode] = ACTIONS(265),
    [sym_tsx_opcode] = ACTIONS(265),
    [sym_txa_opcode] = ACTIONS(265),
    [sym_tcs_opcode] = ACTIONS(265),
    [sym_tya_opcode] = ACTIONS(265),
    [sym_a16_ctrl_cmd] = ACTIONS(261),
    [sym_a8_ctrl_cmd] = ACTIONS(261),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(261),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(261),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(261),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(261),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(261),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(261),
    [sym_bss_ctrl_cmd] = ACTIONS(261),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(261),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(261),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(261),
    [sym_code_ctrl_cmd] = ACTIONS(261),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(261),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(414),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(414),
    [anon_sym_COMMA] = ACTIONS(422),
    [sym_adc_opcode] = ACTIONS(418),
    [sym_and_opcode] = ACTIONS(418),
    [sym_asl_opcode] = ACTIONS(418),
    [sym_bcc_opcode] = ACTIONS(418),
    [sym_bcs_opcode] = ACTIONS(418),
    [sym_beq_opcode] = ACTIONS(418),
    [sym_bit_opcode] = ACTIONS(418),
    [sym_bmi_opcode] = ACTIONS(418),
    [sym_bne_opcode] = ACTIONS(418),
    [sym_bpl_opcode] = ACTIONS(418),
    [sym_brk_opcode] = ACTIONS(418),
    [sym_bvc_opcode] = ACTIONS(418),
    [sym_bvs_opcode] = ACTIONS(418),
    [sym_clc_opcode] = ACTIONS(418),
    [sym_cld_opcode] = ACTIONS(418),
    [sym_cli_opcode] = ACTIONS(418),
    [sym_clv_opcode] = ACTIONS(418),
    [sym_cmp_opcode] = ACTIONS(418),
    [sym_cpx_opcode] = ACTIONS(418),
    [sym_cpy_opcode] = ACTIONS(418),
    [sym_dec_opcode] = ACTIONS(418),
    [sym_dex_opcode] = ACTIONS(418),
    [sym_dey_opcode] = ACTIONS(418),
    [sym_eor_opcode] = ACTIONS(418),
    [sym_inc_opcode] = ACTIONS(418),
    [sym_inx_opcode] = ACTIONS(418),
    [sym_iny_opcode] = ACTIONS(418),
    [sym_jmp_opcode] = ACTIONS(418),
    [sym_jsr_opcode] = ACTIONS(418),
    [sym_lda_opcode] = ACTIONS(418),
    [sym_ldx_opcode] = ACTIONS(418),
    [sym_ldy_opcode] = ACTIONS(418),
    [sym_lsr_opcode] = ACTIONS(418),
    [sym_nop_opcode] = ACTIONS(418),
    [sym_ora_opcode] = ACTIONS(418),
    [sym_pha_opcode] = ACTIONS(418),
    [sym_php_opcode] = ACTIONS(418),
    [sym_pla_opcode] = ACTIONS(418),
    [sym_plp_opcode] = ACTIONS(418),
    [sym_rol_opcode] = ACTIONS(418),
    [sym_ror_opcode] = ACTIONS(418),
    [sym_rti_opcode] = ACTIONS(418),
    [sym_rts_opcode] = ACTIONS(418),
    [sym_sbc_opcode] = ACTIONS(418),
    [sym_sec_opcode] = ACTIONS(418),
    [sym_sed_opcode] = ACTIONS(418),
    [sym_sei_opcode] = ACTIONS(418),
    [sym_sta_opcode] = ACTIONS(418),
    [sym_stx_opcode] = ACTIONS(418),
    [sym_sty_opcode] = ACTIONS(418),
    [sym_tax_opcode] = ACTIONS(418),
    [sym_tay_opcode] = ACTIONS(418),
    [sym_tsx_opcode] = ACTIONS(418),
    [sym_txa_opcode] = ACTIONS(418),
    [sym_tcs_opcode] = ACTIONS(418),
    [sym_tya_opcode] = ACTIONS(418),
    [sym_a16_ctrl_cmd] = ACTIONS(414),
    [sym_a8_ctrl_cmd] = ACTIONS(414),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(414),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(414),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(414),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(414),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(414),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(414),
    [sym_bss_ctrl_cmd] = ACTIONS(414),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(414),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(414),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(414),
    [sym_code_ctrl_cmd] = ACTIONS(414),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(414),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(424),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(424),
    [anon_sym_COMMA] = ACTIONS(426),
    [sym_adc_opcode] = ACTIONS(428),
    [sym_and_opcode] = ACTIONS(428),
    [sym_asl_opcode] = ACTIONS(428),
    [sym_bcc_opcode] = ACTIONS(428),
    [sym_bcs_opcode] = ACTIONS(428),
    [sym_beq_opcode] = ACTIONS(428),
    [sym_bit_opcode] = ACTIONS(428),
    [sym_bmi_opcode] = ACTIONS(428),
    [sym_bne_opcode] = ACTIONS(428),
    [sym_bpl_opcode] = ACTIONS(428),
    [sym_brk_opcode] = ACTIONS(428),
    [sym_bvc_opcode] = ACTIONS(428),
    [sym_bvs_opcode] = ACTIONS(428),
    [sym_clc_opcode] = ACTIONS(428),
    [sym_cld_opcode] = ACTIONS(428),
    [sym_cli_opcode] = ACTIONS(428),
    [sym_clv_opcode] = ACTIONS(428),
    [sym_cmp_opcode] = ACTIONS(428),
    [sym_cpx_opcode] = ACTIONS(428),
    [sym_cpy_opcode] = ACTIONS(428),
    [sym_dec_opcode] = ACTIONS(428),
    [sym_dex_opcode] = ACTIONS(428),
    [sym_dey_opcode] = ACTIONS(428),
    [sym_eor_opcode] = ACTIONS(428),
    [sym_inc_opcode] = ACTIONS(428),
    [sym_inx_opcode] = ACTIONS(428),
    [sym_iny_opcode] = ACTIONS(428),
    [sym_jmp_opcode] = ACTIONS(428),
    [sym_jsr_opcode] = ACTIONS(428),
    [sym_lda_opcode] = ACTIONS(428),
    [sym_ldx_opcode] = ACTIONS(428),
    [sym_ldy_opcode] = ACTIONS(428),
    [sym_lsr_opcode] = ACTIONS(428),
    [sym_nop_opcode] = ACTIONS(428),
    [sym_ora_opcode] = ACTIONS(428),
    [sym_pha_opcode] = ACTIONS(428),
    [sym_php_opcode] = ACTIONS(428),
    [sym_pla_opcode] = ACTIONS(428),
    [sym_plp_opcode] = ACTIONS(428),
    [sym_rol_opcode] = ACTIONS(428),
    [sym_ror_opcode] = ACTIONS(428),
    [sym_rti_opcode] = ACTIONS(428),
    [sym_rts_opcode] = ACTIONS(428),
    [sym_sbc_opcode] = ACTIONS(428),
    [sym_sec_opcode] = ACTIONS(428),
    [sym_sed_opcode] = ACTIONS(428),
    [sym_sei_opcode] = ACTIONS(428),
    [sym_sta_opcode] = ACTIONS(428),
    [sym_stx_opcode] = ACTIONS(428),
    [sym_sty_opcode] = ACTIONS(428),
    [sym_tax_opcode] = ACTIONS(428),
    [sym_tay_opcode] = ACTIONS(428),
    [sym_tsx_opcode] = ACTIONS(428),
    [sym_txa_opcode] = ACTIONS(428),
    [sym_tcs_opcode] = ACTIONS(428),
    [sym_tya_opcode] = ACTIONS(428),
    [sym_a16_ctrl_cmd] = ACTIONS(424),
    [sym_a8_ctrl_cmd] = ACTIONS(424),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(424),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(424),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(424),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(424),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(424),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(424),
    [sym_bss_ctrl_cmd] = ACTIONS(424),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(424),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(424),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(424),
    [sym_code_ctrl_cmd] = ACTIONS(424),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(424),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(408),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(408),
    [anon_sym_COMMA] = ACTIONS(430),
    [sym_adc_opcode] = ACTIONS(412),
    [sym_and_opcode] = ACTIONS(412),
    [sym_asl_opcode] = ACTIONS(412),
    [sym_bcc_opcode] = ACTIONS(412),
    [sym_bcs_opcode] = ACTIONS(412),
    [sym_beq_opcode] = ACTIONS(412),
    [sym_bit_opcode] = ACTIONS(412),
    [sym_bmi_opcode] = ACTIONS(412),
    [sym_bne_opcode] = ACTIONS(412),
    [sym_bpl_opcode] = ACTIONS(412),
    [sym_brk_opcode] = ACTIONS(412),
    [sym_bvc_opcode] = ACTIONS(412),
    [sym_bvs_opcode] = ACTIONS(412),
    [sym_clc_opcode] = ACTIONS(412),
    [sym_cld_opcode] = ACTIONS(412),
    [sym_cli_opcode] = ACTIONS(412),
    [sym_clv_opcode] = ACTIONS(412),
    [sym_cmp_opcode] = ACTIONS(412),
    [sym_cpx_opcode] = ACTIONS(412),
    [sym_cpy_opcode] = ACTIONS(412),
    [sym_dec_opcode] = ACTIONS(412),
    [sym_dex_opcode] = ACTIONS(412),
    [sym_dey_opcode] = ACTIONS(412),
    [sym_eor_opcode] = ACTIONS(412),
    [sym_inc_opcode] = ACTIONS(412),
    [sym_inx_opcode] = ACTIONS(412),
    [sym_iny_opcode] = ACTIONS(412),
    [sym_jmp_opcode] = ACTIONS(412),
    [sym_jsr_opcode] = ACTIONS(412),
    [sym_lda_opcode] = ACTIONS(412),
    [sym_ldx_opcode] = ACTIONS(412),
    [sym_ldy_opcode] = ACTIONS(412),
    [sym_lsr_opcode] = ACTIONS(412),
    [sym_nop_opcode] = ACTIONS(412),
    [sym_ora_opcode] = ACTIONS(412),
    [sym_pha_opcode] = ACTIONS(412),
    [sym_php_opcode] = ACTIONS(412),
    [sym_pla_opcode] = ACTIONS(412),
    [sym_plp_opcode] = ACTIONS(412),
    [sym_rol_opcode] = ACTIONS(412),
    [sym_ror_opcode] = ACTIONS(412),
    [sym_rti_opcode] = ACTIONS(412),
    [sym_rts_opcode] = ACTIONS(412),
    [sym_sbc_opcode] = ACTIONS(412),
    [sym_sec_opcode] = ACTIONS(412),
    [sym_sed_opcode] = ACTIONS(412),
    [sym_sei_opcode] = ACTIONS(412),
    [sym_sta_opcode] = ACTIONS(412),
    [sym_stx_opcode] = ACTIONS(412),
    [sym_sty_opcode] = ACTIONS(412),
    [sym_tax_opcode] = ACTIONS(412),
    [sym_tay_opcode] = ACTIONS(412),
    [sym_tsx_opcode] = ACTIONS(412),
    [sym_txa_opcode] = ACTIONS(412),
    [sym_tcs_opcode] = ACTIONS(412),
    [sym_tya_opcode] = ACTIONS(412),
    [sym_a16_ctrl_cmd] = ACTIONS(408),
    [sym_a8_ctrl_cmd] = ACTIONS(408),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(408),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(408),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(408),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(408),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(408),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(408),
    [sym_bss_ctrl_cmd] = ACTIONS(408),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(408),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(408),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(408),
    [sym_code_ctrl_cmd] = ACTIONS(408),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(408),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(215),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(215),
    [anon_sym_COMMA] = ACTIONS(59),
    [sym_adc_opcode] = ACTIONS(218),
    [sym_and_opcode] = ACTIONS(218),
    [sym_asl_opcode] = ACTIONS(218),
    [sym_bcc_opcode] = ACTIONS(218),
    [sym_bcs_opcode] = ACTIONS(218),
    [sym_beq_opcode] = ACTIONS(218),
    [sym_bit_opcode] = ACTIONS(218),
    [sym_bmi_opcode] = ACTIONS(218),
    [sym_bne_opcode] = ACTIONS(218),
    [sym_bpl_opcode] = ACTIONS(218),
    [sym_brk_opcode] = ACTIONS(218),
    [sym_bvc_opcode] = ACTIONS(218),
    [sym_bvs_opcode] = ACTIONS(218),
    [sym_clc_opcode] = ACTIONS(218),
    [sym_cld_opcode] = ACTIONS(218),
    [sym_cli_opcode] = ACTIONS(218),
    [sym_clv_opcode] = ACTIONS(218),
    [sym_cmp_opcode] = ACTIONS(218),
    [sym_cpx_opcode] = ACTIONS(218),
    [sym_cpy_opcode] = ACTIONS(218),
    [sym_dec_opcode] = ACTIONS(218),
    [sym_dex_opcode] = ACTIONS(218),
    [sym_dey_opcode] = ACTIONS(218),
    [sym_eor_opcode] = ACTIONS(218),
    [sym_inc_opcode] = ACTIONS(218),
    [sym_inx_opcode] = ACTIONS(218),
    [sym_iny_opcode] = ACTIONS(218),
    [sym_jmp_opcode] = ACTIONS(218),
    [sym_jsr_opcode] = ACTIONS(218),
    [sym_lda_opcode] = ACTIONS(218),
    [sym_ldx_opcode] = ACTIONS(218),
    [sym_ldy_opcode] = ACTIONS(218),
    [sym_lsr_opcode] = ACTIONS(218),
    [sym_nop_opcode] = ACTIONS(218),
    [sym_ora_opcode] = ACTIONS(218),
    [sym_pha_opcode] = ACTIONS(218),
    [sym_php_opcode] = ACTIONS(218),
    [sym_pla_opcode] = ACTIONS(218),
    [sym_plp_opcode] = ACTIONS(218),
    [sym_rol_opcode] = ACTIONS(218),
    [sym_ror_opcode] = ACTIONS(218),
    [sym_rti_opcode] = ACTIONS(218),
    [sym_rts_opcode] = ACTIONS(218),
    [sym_sbc_opcode] = ACTIONS(218),
    [sym_sec_opcode] = ACTIONS(218),
    [sym_sed_opcode] = ACTIONS(218),
    [sym_sei_opcode] = ACTIONS(218),
    [sym_sta_opcode] = ACTIONS(218),
    [sym_stx_opcode] = ACTIONS(218),
    [sym_sty_opcode] = ACTIONS(218),
    [sym_tax_opcode] = ACTIONS(218),
    [sym_tay_opcode] = ACTIONS(218),
    [sym_tsx_opcode] = ACTIONS(218),
    [sym_txa_opcode] = ACTIONS(218),
    [sym_tcs_opcode] = ACTIONS(218),
    [sym_tya_opcode] = ACTIONS(218),
    [sym_a16_ctrl_cmd] = ACTIONS(215),
    [sym_a8_ctrl_cmd] = ACTIONS(215),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(215),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(215),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(215),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(215),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(215),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(215),
    [sym_bss_ctrl_cmd] = ACTIONS(215),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(215),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(215),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(215),
    [sym_code_ctrl_cmd] = ACTIONS(215),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(215),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(394),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(394),
    [anon_sym_COMMA] = ACTIONS(394),
    [sym_adc_opcode] = ACTIONS(399),
    [sym_and_opcode] = ACTIONS(399),
    [sym_asl_opcode] = ACTIONS(399),
    [sym_bcc_opcode] = ACTIONS(399),
    [sym_bcs_opcode] = ACTIONS(399),
    [sym_beq_opcode] = ACTIONS(399),
    [sym_bit_opcode] = ACTIONS(399),
    [sym_bmi_opcode] = ACTIONS(399),
    [sym_bne_opcode] = ACTIONS(399),
    [sym_bpl_opcode] = ACTIONS(399),
    [sym_brk_opcode] = ACTIONS(399),
    [sym_bvc_opcode] = ACTIONS(399),
    [sym_bvs_opcode] = ACTIONS(399),
    [sym_clc_opcode] = ACTIONS(399),
    [sym_cld_opcode] = ACTIONS(399),
    [sym_cli_opcode] = ACTIONS(399),
    [sym_clv_opcode] = ACTIONS(399),
    [sym_cmp_opcode] = ACTIONS(399),
    [sym_cpx_opcode] = ACTIONS(399),
    [sym_cpy_opcode] = ACTIONS(399),
    [sym_dec_opcode] = ACTIONS(399),
    [sym_dex_opcode] = ACTIONS(399),
    [sym_dey_opcode] = ACTIONS(399),
    [sym_eor_opcode] = ACTIONS(399),
    [sym_inc_opcode] = ACTIONS(399),
    [sym_inx_opcode] = ACTIONS(399),
    [sym_iny_opcode] = ACTIONS(399),
    [sym_jmp_opcode] = ACTIONS(399),
    [sym_jsr_opcode] = ACTIONS(399),
    [sym_lda_opcode] = ACTIONS(399),
    [sym_ldx_opcode] = ACTIONS(399),
    [sym_ldy_opcode] = ACTIONS(399),
    [sym_lsr_opcode] = ACTIONS(399),
    [sym_nop_opcode] = ACTIONS(399),
    [sym_ora_opcode] = ACTIONS(399),
    [sym_pha_opcode] = ACTIONS(399),
    [sym_php_opcode] = ACTIONS(399),
    [sym_pla_opcode] = ACTIONS(399),
    [sym_plp_opcode] = ACTIONS(399),
    [sym_rol_opcode] = ACTIONS(399),
    [sym_ror_opcode] = ACTIONS(399),
    [sym_rti_opcode] = ACTIONS(399),
    [sym_rts_opcode] = ACTIONS(399),
    [sym_sbc_opcode] = ACTIONS(399),
    [sym_sec_opcode] = ACTIONS(399),
    [sym_sed_opcode] = ACTIONS(399),
    [sym_sei_opcode] = ACTIONS(399),
    [sym_sta_opcode] = ACTIONS(399),
    [sym_stx_opcode] = ACTIONS(399),
    [sym_sty_opcode] = ACTIONS(399),
    [sym_tax_opcode] = ACTIONS(399),
    [sym_tay_opcode] = ACTIONS(399),
    [sym_tsx_opcode] = ACTIONS(399),
    [sym_txa_opcode] = ACTIONS(399),
    [sym_tcs_opcode] = ACTIONS(399),
    [sym_tya_opcode] = ACTIONS(399),
    [sym_a16_ctrl_cmd] = ACTIONS(394),
    [sym_a8_ctrl_cmd] = ACTIONS(394),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(394),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(394),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(394),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(394),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(394),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(394),
    [sym_bss_ctrl_cmd] = ACTIONS(394),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(394),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(394),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(394),
    [sym_code_ctrl_cmd] = ACTIONS(394),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(394),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(432),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(432),
    [sym_adc_opcode] = ACTIONS(434),
    [sym_and_opcode] = ACTIONS(434),
    [sym_asl_opcode] = ACTIONS(434),
    [sym_bcc_opcode] = ACTIONS(434),
    [sym_bcs_opcode] = ACTIONS(434),
    [sym_beq_opcode] = ACTIONS(434),
    [sym_bit_opcode] = ACTIONS(434),
    [sym_bmi_opcode] = ACTIONS(434),
    [sym_bne_opcode] = ACTIONS(434),
    [sym_bpl_opcode] = ACTIONS(434),
    [sym_brk_opcode] = ACTIONS(434),
    [sym_bvc_opcode] = ACTIONS(434),
    [sym_bvs_opcode] = ACTIONS(434),
    [sym_clc_opcode] = ACTIONS(434),
    [sym_cld_opcode] = ACTIONS(434),
    [sym_cli_opcode] = ACTIONS(434),
    [sym_clv_opcode] = ACTIONS(434),
    [sym_cmp_opcode] = ACTIONS(434),
    [sym_cpx_opcode] = ACTIONS(434),
    [sym_cpy_opcode] = ACTIONS(434),
    [sym_dec_opcode] = ACTIONS(434),
    [sym_dex_opcode] = ACTIONS(434),
    [sym_dey_opcode] = ACTIONS(434),
    [sym_eor_opcode] = ACTIONS(434),
    [sym_inc_opcode] = ACTIONS(434),
    [sym_inx_opcode] = ACTIONS(434),
    [sym_iny_opcode] = ACTIONS(434),
    [sym_jmp_opcode] = ACTIONS(434),
    [sym_jsr_opcode] = ACTIONS(434),
    [sym_lda_opcode] = ACTIONS(434),
    [sym_ldx_opcode] = ACTIONS(434),
    [sym_ldy_opcode] = ACTIONS(434),
    [sym_lsr_opcode] = ACTIONS(434),
    [sym_nop_opcode] = ACTIONS(434),
    [sym_ora_opcode] = ACTIONS(434),
    [sym_pha_opcode] = ACTIONS(434),
    [sym_php_opcode] = ACTIONS(434),
    [sym_pla_opcode] = ACTIONS(434),
    [sym_plp_opcode] = ACTIONS(434),
    [sym_rol_opcode] = ACTIONS(434),
    [sym_ror_opcode] = ACTIONS(434),
    [sym_rti_opcode] = ACTIONS(434),
    [sym_rts_opcode] = ACTIONS(434),
    [sym_sbc_opcode] = ACTIONS(434),
    [sym_sec_opcode] = ACTIONS(434),
    [sym_sed_opcode] = ACTIONS(434),
    [sym_sei_opcode] = ACTIONS(434),
    [sym_sta_opcode] = ACTIONS(434),
    [sym_stx_opcode] = ACTIONS(434),
    [sym_sty_opcode] = ACTIONS(434),
    [sym_tax_opcode] = ACTIONS(434),
    [sym_tay_opcode] = ACTIONS(434),
    [sym_tsx_opcode] = ACTIONS(434),
    [sym_txa_opcode] = ACTIONS(434),
    [sym_tcs_opcode] = ACTIONS(434),
    [sym_tya_opcode] = ACTIONS(434),
    [sym_a16_ctrl_cmd] = ACTIONS(432),
    [sym_a8_ctrl_cmd] = ACTIONS(432),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(432),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(432),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(432),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(432),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(432),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(432),
    [sym_bss_ctrl_cmd] = ACTIONS(432),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(432),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(432),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(432),
    [sym_code_ctrl_cmd] = ACTIONS(432),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(432),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(436),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(436),
    [sym_adc_opcode] = ACTIONS(438),
    [sym_and_opcode] = ACTIONS(438),
    [sym_asl_opcode] = ACTIONS(438),
    [sym_bcc_opcode] = ACTIONS(438),
    [sym_bcs_opcode] = ACTIONS(438),
    [sym_beq_opcode] = ACTIONS(438),
    [sym_bit_opcode] = ACTIONS(438),
    [sym_bmi_opcode] = ACTIONS(438),
    [sym_bne_opcode] = ACTIONS(438),
    [sym_bpl_opcode] = ACTIONS(438),
    [sym_brk_opcode] = ACTIONS(438),
    [sym_bvc_opcode] = ACTIONS(438),
    [sym_bvs_opcode] = ACTIONS(438),
    [sym_clc_opcode] = ACTIONS(438),
    [sym_cld_opcode] = ACTIONS(438),
    [sym_cli_opcode] = ACTIONS(438),
    [sym_clv_opcode] = ACTIONS(438),
    [sym_cmp_opcode] = ACTIONS(438),
    [sym_cpx_opcode] = ACTIONS(438),
    [sym_cpy_opcode] = ACTIONS(438),
    [sym_dec_opcode] = ACTIONS(438),
    [sym_dex_opcode] = ACTIONS(438),
    [sym_dey_opcode] = ACTIONS(438),
    [sym_eor_opcode] = ACTIONS(438),
    [sym_inc_opcode] = ACTIONS(438),
    [sym_inx_opcode] = ACTIONS(438),
    [sym_iny_opcode] = ACTIONS(438),
    [sym_jmp_opcode] = ACTIONS(438),
    [sym_jsr_opcode] = ACTIONS(438),
    [sym_lda_opcode] = ACTIONS(438),
    [sym_ldx_opcode] = ACTIONS(438),
    [sym_ldy_opcode] = ACTIONS(438),
    [sym_lsr_opcode] = ACTIONS(438),
    [sym_nop_opcode] = ACTIONS(438),
    [sym_ora_opcode] = ACTIONS(438),
    [sym_pha_opcode] = ACTIONS(438),
    [sym_php_opcode] = ACTIONS(438),
    [sym_pla_opcode] = ACTIONS(438),
    [sym_plp_opcode] = ACTIONS(438),
    [sym_rol_opcode] = ACTIONS(438),
    [sym_ror_opcode] = ACTIONS(438),
    [sym_rti_opcode] = ACTIONS(438),
    [sym_rts_opcode] = ACTIONS(438),
    [sym_sbc_opcode] = ACTIONS(438),
    [sym_sec_opcode] = ACTIONS(438),
    [sym_sed_opcode] = ACTIONS(438),
    [sym_sei_opcode] = ACTIONS(438),
    [sym_sta_opcode] = ACTIONS(438),
    [sym_stx_opcode] = ACTIONS(438),
    [sym_sty_opcode] = ACTIONS(438),
    [sym_tax_opcode] = ACTIONS(438),
    [sym_tay_opcode] = ACTIONS(438),
    [sym_tsx_opcode] = ACTIONS(438),
    [sym_txa_opcode] = ACTIONS(438),
    [sym_tcs_opcode] = ACTIONS(438),
    [sym_tya_opcode] = ACTIONS(438),
    [sym_a16_ctrl_cmd] = ACTIONS(436),
    [sym_a8_ctrl_cmd] = ACTIONS(436),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(436),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(436),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(436),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(436),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(436),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(436),
    [sym_bss_ctrl_cmd] = ACTIONS(436),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(436),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(436),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(436),
    [sym_code_ctrl_cmd] = ACTIONS(436),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(436),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(440),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(440),
    [sym_adc_opcode] = ACTIONS(442),
    [sym_and_opcode] = ACTIONS(442),
    [sym_asl_opcode] = ACTIONS(442),
    [sym_bcc_opcode] = ACTIONS(442),
    [sym_bcs_opcode] = ACTIONS(442),
    [sym_beq_opcode] = ACTIONS(442),
    [sym_bit_opcode] = ACTIONS(442),
    [sym_bmi_opcode] = ACTIONS(442),
    [sym_bne_opcode] = ACTIONS(442),
    [sym_bpl_opcode] = ACTIONS(442),
    [sym_brk_opcode] = ACTIONS(442),
    [sym_bvc_opcode] = ACTIONS(442),
    [sym_bvs_opcode] = ACTIONS(442),
    [sym_clc_opcode] = ACTIONS(442),
    [sym_cld_opcode] = ACTIONS(442),
    [sym_cli_opcode] = ACTIONS(442),
    [sym_clv_opcode] = ACTIONS(442),
    [sym_cmp_opcode] = ACTIONS(442),
    [sym_cpx_opcode] = ACTIONS(442),
    [sym_cpy_opcode] = ACTIONS(442),
    [sym_dec_opcode] = ACTIONS(442),
    [sym_dex_opcode] = ACTIONS(442),
    [sym_dey_opcode] = ACTIONS(442),
    [sym_eor_opcode] = ACTIONS(442),
    [sym_inc_opcode] = ACTIONS(442),
    [sym_inx_opcode] = ACTIONS(442),
    [sym_iny_opcode] = ACTIONS(442),
    [sym_jmp_opcode] = ACTIONS(442),
    [sym_jsr_opcode] = ACTIONS(442),
    [sym_lda_opcode] = ACTIONS(442),
    [sym_ldx_opcode] = ACTIONS(442),
    [sym_ldy_opcode] = ACTIONS(442),
    [sym_lsr_opcode] = ACTIONS(442),
    [sym_nop_opcode] = ACTIONS(442),
    [sym_ora_opcode] = ACTIONS(442),
    [sym_pha_opcode] = ACTIONS(442),
    [sym_php_opcode] = ACTIONS(442),
    [sym_pla_opcode] = ACTIONS(442),
    [sym_plp_opcode] = ACTIONS(442),
    [sym_rol_opcode] = ACTIONS(442),
    [sym_ror_opcode] = ACTIONS(442),
    [sym_rti_opcode] = ACTIONS(442),
    [sym_rts_opcode] = ACTIONS(442),
    [sym_sbc_opcode] = ACTIONS(442),
    [sym_sec_opcode] = ACTIONS(442),
    [sym_sed_opcode] = ACTIONS(442),
    [sym_sei_opcode] = ACTIONS(442),
    [sym_sta_opcode] = ACTIONS(442),
    [sym_stx_opcode] = ACTIONS(442),
    [sym_sty_opcode] = ACTIONS(442),
    [sym_tax_opcode] = ACTIONS(442),
    [sym_tay_opcode] = ACTIONS(442),
    [sym_tsx_opcode] = ACTIONS(442),
    [sym_txa_opcode] = ACTIONS(442),
    [sym_tcs_opcode] = ACTIONS(442),
    [sym_tya_opcode] = ACTIONS(442),
    [sym_a16_ctrl_cmd] = ACTIONS(440),
    [sym_a8_ctrl_cmd] = ACTIONS(440),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(440),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(440),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(440),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(440),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(440),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(440),
    [sym_bss_ctrl_cmd] = ACTIONS(440),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(440),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(440),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(440),
    [sym_code_ctrl_cmd] = ACTIONS(440),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(440),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(444),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(444),
    [sym_adc_opcode] = ACTIONS(446),
    [sym_and_opcode] = ACTIONS(446),
    [sym_asl_opcode] = ACTIONS(446),
    [sym_bcc_opcode] = ACTIONS(446),
    [sym_bcs_opcode] = ACTIONS(446),
    [sym_beq_opcode] = ACTIONS(446),
    [sym_bit_opcode] = ACTIONS(446),
    [sym_bmi_opcode] = ACTIONS(446),
    [sym_bne_opcode] = ACTIONS(446),
    [sym_bpl_opcode] = ACTIONS(446),
    [sym_brk_opcode] = ACTIONS(446),
    [sym_bvc_opcode] = ACTIONS(446),
    [sym_bvs_opcode] = ACTIONS(446),
    [sym_clc_opcode] = ACTIONS(446),
    [sym_cld_opcode] = ACTIONS(446),
    [sym_cli_opcode] = ACTIONS(446),
    [sym_clv_opcode] = ACTIONS(446),
    [sym_cmp_opcode] = ACTIONS(446),
    [sym_cpx_opcode] = ACTIONS(446),
    [sym_cpy_opcode] = ACTIONS(446),
    [sym_dec_opcode] = ACTIONS(446),
    [sym_dex_opcode] = ACTIONS(446),
    [sym_dey_opcode] = ACTIONS(446),
    [sym_eor_opcode] = ACTIONS(446),
    [sym_inc_opcode] = ACTIONS(446),
    [sym_inx_opcode] = ACTIONS(446),
    [sym_iny_opcode] = ACTIONS(446),
    [sym_jmp_opcode] = ACTIONS(446),
    [sym_jsr_opcode] = ACTIONS(446),
    [sym_lda_opcode] = ACTIONS(446),
    [sym_ldx_opcode] = ACTIONS(446),
    [sym_ldy_opcode] = ACTIONS(446),
    [sym_lsr_opcode] = ACTIONS(446),
    [sym_nop_opcode] = ACTIONS(446),
    [sym_ora_opcode] = ACTIONS(446),
    [sym_pha_opcode] = ACTIONS(446),
    [sym_php_opcode] = ACTIONS(446),
    [sym_pla_opcode] = ACTIONS(446),
    [sym_plp_opcode] = ACTIONS(446),
    [sym_rol_opcode] = ACTIONS(446),
    [sym_ror_opcode] = ACTIONS(446),
    [sym_rti_opcode] = ACTIONS(446),
    [sym_rts_opcode] = ACTIONS(446),
    [sym_sbc_opcode] = ACTIONS(446),
    [sym_sec_opcode] = ACTIONS(446),
    [sym_sed_opcode] = ACTIONS(446),
    [sym_sei_opcode] = ACTIONS(446),
    [sym_sta_opcode] = ACTIONS(446),
    [sym_stx_opcode] = ACTIONS(446),
    [sym_sty_opcode] = ACTIONS(446),
    [sym_tax_opcode] = ACTIONS(446),
    [sym_tay_opcode] = ACTIONS(446),
    [sym_tsx_opcode] = ACTIONS(446),
    [sym_txa_opcode] = ACTIONS(446),
    [sym_tcs_opcode] = ACTIONS(446),
    [sym_tya_opcode] = ACTIONS(446),
    [sym_a16_ctrl_cmd] = ACTIONS(444),
    [sym_a8_ctrl_cmd] = ACTIONS(444),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(444),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(444),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(444),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(444),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(444),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(444),
    [sym_bss_ctrl_cmd] = ACTIONS(444),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(444),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(444),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(444),
    [sym_code_ctrl_cmd] = ACTIONS(444),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(444),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(448),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(448),
    [sym_adc_opcode] = ACTIONS(450),
    [sym_and_opcode] = ACTIONS(450),
    [sym_asl_opcode] = ACTIONS(450),
    [sym_bcc_opcode] = ACTIONS(450),
    [sym_bcs_opcode] = ACTIONS(450),
    [sym_beq_opcode] = ACTIONS(450),
    [sym_bit_opcode] = ACTIONS(450),
    [sym_bmi_opcode] = ACTIONS(450),
    [sym_bne_opcode] = ACTIONS(450),
    [sym_bpl_opcode] = ACTIONS(450),
    [sym_brk_opcode] = ACTIONS(450),
    [sym_bvc_opcode] = ACTIONS(450),
    [sym_bvs_opcode] = ACTIONS(450),
    [sym_clc_opcode] = ACTIONS(450),
    [sym_cld_opcode] = ACTIONS(450),
    [sym_cli_opcode] = ACTIONS(450),
    [sym_clv_opcode] = ACTIONS(450),
    [sym_cmp_opcode] = ACTIONS(450),
    [sym_cpx_opcode] = ACTIONS(450),
    [sym_cpy_opcode] = ACTIONS(450),
    [sym_dec_opcode] = ACTIONS(450),
    [sym_dex_opcode] = ACTIONS(450),
    [sym_dey_opcode] = ACTIONS(450),
    [sym_eor_opcode] = ACTIONS(450),
    [sym_inc_opcode] = ACTIONS(450),
    [sym_inx_opcode] = ACTIONS(450),
    [sym_iny_opcode] = ACTIONS(450),
    [sym_jmp_opcode] = ACTIONS(450),
    [sym_jsr_opcode] = ACTIONS(450),
    [sym_lda_opcode] = ACTIONS(450),
    [sym_ldx_opcode] = ACTIONS(450),
    [sym_ldy_opcode] = ACTIONS(450),
    [sym_lsr_opcode] = ACTIONS(450),
    [sym_nop_opcode] = ACTIONS(450),
    [sym_ora_opcode] = ACTIONS(450),
    [sym_pha_opcode] = ACTIONS(450),
    [sym_php_opcode] = ACTIONS(450),
    [sym_pla_opcode] = ACTIONS(450),
    [sym_plp_opcode] = ACTIONS(450),
    [sym_rol_opcode] = ACTIONS(450),
    [sym_ror_opcode] = ACTIONS(450),
    [sym_rti_opcode] = ACTIONS(450),
    [sym_rts_opcode] = ACTIONS(450),
    [sym_sbc_opcode] = ACTIONS(450),
    [sym_sec_opcode] = ACTIONS(450),
    [sym_sed_opcode] = ACTIONS(450),
    [sym_sei_opcode] = ACTIONS(450),
    [sym_sta_opcode] = ACTIONS(450),
    [sym_stx_opcode] = ACTIONS(450),
    [sym_sty_opcode] = ACTIONS(450),
    [sym_tax_opcode] = ACTIONS(450),
    [sym_tay_opcode] = ACTIONS(450),
    [sym_tsx_opcode] = ACTIONS(450),
    [sym_txa_opcode] = ACTIONS(450),
    [sym_tcs_opcode] = ACTIONS(450),
    [sym_tya_opcode] = ACTIONS(450),
    [sym_a16_ctrl_cmd] = ACTIONS(448),
    [sym_a8_ctrl_cmd] = ACTIONS(448),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(448),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(448),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(448),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(448),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(448),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(448),
    [sym_bss_ctrl_cmd] = ACTIONS(448),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(448),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(448),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(448),
    [sym_code_ctrl_cmd] = ACTIONS(448),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(448),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(452),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(452),
    [sym_adc_opcode] = ACTIONS(454),
    [sym_and_opcode] = ACTIONS(454),
    [sym_asl_opcode] = ACTIONS(454),
    [sym_bcc_opcode] = ACTIONS(454),
    [sym_bcs_opcode] = ACTIONS(454),
    [sym_beq_opcode] = ACTIONS(454),
    [sym_bit_opcode] = ACTIONS(454),
    [sym_bmi_opcode] = ACTIONS(454),
    [sym_bne_opcode] = ACTIONS(454),
    [sym_bpl_opcode] = ACTIONS(454),
    [sym_brk_opcode] = ACTIONS(454),
    [sym_bvc_opcode] = ACTIONS(454),
    [sym_bvs_opcode] = ACTIONS(454),
    [sym_clc_opcode] = ACTIONS(454),
    [sym_cld_opcode] = ACTIONS(454),
    [sym_cli_opcode] = ACTIONS(454),
    [sym_clv_opcode] = ACTIONS(454),
    [sym_cmp_opcode] = ACTIONS(454),
    [sym_cpx_opcode] = ACTIONS(454),
    [sym_cpy_opcode] = ACTIONS(454),
    [sym_dec_opcode] = ACTIONS(454),
    [sym_dex_opcode] = ACTIONS(454),
    [sym_dey_opcode] = ACTIONS(454),
    [sym_eor_opcode] = ACTIONS(454),
    [sym_inc_opcode] = ACTIONS(454),
    [sym_inx_opcode] = ACTIONS(454),
    [sym_iny_opcode] = ACTIONS(454),
    [sym_jmp_opcode] = ACTIONS(454),
    [sym_jsr_opcode] = ACTIONS(454),
    [sym_lda_opcode] = ACTIONS(454),
    [sym_ldx_opcode] = ACTIONS(454),
    [sym_ldy_opcode] = ACTIONS(454),
    [sym_lsr_opcode] = ACTIONS(454),
    [sym_nop_opcode] = ACTIONS(454),
    [sym_ora_opcode] = ACTIONS(454),
    [sym_pha_opcode] = ACTIONS(454),
    [sym_php_opcode] = ACTIONS(454),
    [sym_pla_opcode] = ACTIONS(454),
    [sym_plp_opcode] = ACTIONS(454),
    [sym_rol_opcode] = ACTIONS(454),
    [sym_ror_opcode] = ACTIONS(454),
    [sym_rti_opcode] = ACTIONS(454),
    [sym_rts_opcode] = ACTIONS(454),
    [sym_sbc_opcode] = ACTIONS(454),
    [sym_sec_opcode] = ACTIONS(454),
    [sym_sed_opcode] = ACTIONS(454),
    [sym_sei_opcode] = ACTIONS(454),
    [sym_sta_opcode] = ACTIONS(454),
    [sym_stx_opcode] = ACTIONS(454),
    [sym_sty_opcode] = ACTIONS(454),
    [sym_tax_opcode] = ACTIONS(454),
    [sym_tay_opcode] = ACTIONS(454),
    [sym_tsx_opcode] = ACTIONS(454),
    [sym_txa_opcode] = ACTIONS(454),
    [sym_tcs_opcode] = ACTIONS(454),
    [sym_tya_opcode] = ACTIONS(454),
    [sym_a16_ctrl_cmd] = ACTIONS(452),
    [sym_a8_ctrl_cmd] = ACTIONS(452),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(452),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(452),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(452),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(452),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(452),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(452),
    [sym_bss_ctrl_cmd] = ACTIONS(452),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(452),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(452),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(452),
    [sym_code_ctrl_cmd] = ACTIONS(452),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(452),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(456),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(456),
    [sym_adc_opcode] = ACTIONS(458),
    [sym_and_opcode] = ACTIONS(458),
    [sym_asl_opcode] = ACTIONS(458),
    [sym_bcc_opcode] = ACTIONS(458),
    [sym_bcs_opcode] = ACTIONS(458),
    [sym_beq_opcode] = ACTIONS(458),
    [sym_bit_opcode] = ACTIONS(458),
    [sym_bmi_opcode] = ACTIONS(458),
    [sym_bne_opcode] = ACTIONS(458),
    [sym_bpl_opcode] = ACTIONS(458),
    [sym_brk_opcode] = ACTIONS(458),
    [sym_bvc_opcode] = ACTIONS(458),
    [sym_bvs_opcode] = ACTIONS(458),
    [sym_clc_opcode] = ACTIONS(458),
    [sym_cld_opcode] = ACTIONS(458),
    [sym_cli_opcode] = ACTIONS(458),
    [sym_clv_opcode] = ACTIONS(458),
    [sym_cmp_opcode] = ACTIONS(458),
    [sym_cpx_opcode] = ACTIONS(458),
    [sym_cpy_opcode] = ACTIONS(458),
    [sym_dec_opcode] = ACTIONS(458),
    [sym_dex_opcode] = ACTIONS(458),
    [sym_dey_opcode] = ACTIONS(458),
    [sym_eor_opcode] = ACTIONS(458),
    [sym_inc_opcode] = ACTIONS(458),
    [sym_inx_opcode] = ACTIONS(458),
    [sym_iny_opcode] = ACTIONS(458),
    [sym_jmp_opcode] = ACTIONS(458),
    [sym_jsr_opcode] = ACTIONS(458),
    [sym_lda_opcode] = ACTIONS(458),
    [sym_ldx_opcode] = ACTIONS(458),
    [sym_ldy_opcode] = ACTIONS(458),
    [sym_lsr_opcode] = ACTIONS(458),
    [sym_nop_opcode] = ACTIONS(458),
    [sym_ora_opcode] = ACTIONS(458),
    [sym_pha_opcode] = ACTIONS(458),
    [sym_php_opcode] = ACTIONS(458),
    [sym_pla_opcode] = ACTIONS(458),
    [sym_plp_opcode] = ACTIONS(458),
    [sym_rol_opcode] = ACTIONS(458),
    [sym_ror_opcode] = ACTIONS(458),
    [sym_rti_opcode] = ACTIONS(458),
    [sym_rts_opcode] = ACTIONS(458),
    [sym_sbc_opcode] = ACTIONS(458),
    [sym_sec_opcode] = ACTIONS(458),
    [sym_sed_opcode] = ACTIONS(458),
    [sym_sei_opcode] = ACTIONS(458),
    [sym_sta_opcode] = ACTIONS(458),
    [sym_stx_opcode] = ACTIONS(458),
    [sym_sty_opcode] = ACTIONS(458),
    [sym_tax_opcode] = ACTIONS(458),
    [sym_tay_opcode] = ACTIONS(458),
    [sym_tsx_opcode] = ACTIONS(458),
    [sym_txa_opcode] = ACTIONS(458),
    [sym_tcs_opcode] = ACTIONS(458),
    [sym_tya_opcode] = ACTIONS(458),
    [sym_a16_ctrl_cmd] = ACTIONS(456),
    [sym_a8_ctrl_cmd] = ACTIONS(456),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(456),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(456),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(456),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(456),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(456),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(456),
    [sym_bss_ctrl_cmd] = ACTIONS(456),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(456),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(456),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(456),
    [sym_code_ctrl_cmd] = ACTIONS(456),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(456),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(460),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(460),
    [sym_adc_opcode] = ACTIONS(462),
    [sym_and_opcode] = ACTIONS(462),
    [sym_asl_opcode] = ACTIONS(462),
    [sym_bcc_opcode] = ACTIONS(462),
    [sym_bcs_opcode] = ACTIONS(462),
    [sym_beq_opcode] = ACTIONS(462),
    [sym_bit_opcode] = ACTIONS(462),
    [sym_bmi_opcode] = ACTIONS(462),
    [sym_bne_opcode] = ACTIONS(462),
    [sym_bpl_opcode] = ACTIONS(462),
    [sym_brk_opcode] = ACTIONS(462),
    [sym_bvc_opcode] = ACTIONS(462),
    [sym_bvs_opcode] = ACTIONS(462),
    [sym_clc_opcode] = ACTIONS(462),
    [sym_cld_opcode] = ACTIONS(462),
    [sym_cli_opcode] = ACTIONS(462),
    [sym_clv_opcode] = ACTIONS(462),
    [sym_cmp_opcode] = ACTIONS(462),
    [sym_cpx_opcode] = ACTIONS(462),
    [sym_cpy_opcode] = ACTIONS(462),
    [sym_dec_opcode] = ACTIONS(462),
    [sym_dex_opcode] = ACTIONS(462),
    [sym_dey_opcode] = ACTIONS(462),
    [sym_eor_opcode] = ACTIONS(462),
    [sym_inc_opcode] = ACTIONS(462),
    [sym_inx_opcode] = ACTIONS(462),
    [sym_iny_opcode] = ACTIONS(462),
    [sym_jmp_opcode] = ACTIONS(462),
    [sym_jsr_opcode] = ACTIONS(462),
    [sym_lda_opcode] = ACTIONS(462),
    [sym_ldx_opcode] = ACTIONS(462),
    [sym_ldy_opcode] = ACTIONS(462),
    [sym_lsr_opcode] = ACTIONS(462),
    [sym_nop_opcode] = ACTIONS(462),
    [sym_ora_opcode] = ACTIONS(462),
    [sym_pha_opcode] = ACTIONS(462),
    [sym_php_opcode] = ACTIONS(462),
    [sym_pla_opcode] = ACTIONS(462),
    [sym_plp_opcode] = ACTIONS(462),
    [sym_rol_opcode] = ACTIONS(462),
    [sym_ror_opcode] = ACTIONS(462),
    [sym_rti_opcode] = ACTIONS(462),
    [sym_rts_opcode] = ACTIONS(462),
    [sym_sbc_opcode] = ACTIONS(462),
    [sym_sec_opcode] = ACTIONS(462),
    [sym_sed_opcode] = ACTIONS(462),
    [sym_sei_opcode] = ACTIONS(462),
    [sym_sta_opcode] = ACTIONS(462),
    [sym_stx_opcode] = ACTIONS(462),
    [sym_sty_opcode] = ACTIONS(462),
    [sym_tax_opcode] = ACTIONS(462),
    [sym_tay_opcode] = ACTIONS(462),
    [sym_tsx_opcode] = ACTIONS(462),
    [sym_txa_opcode] = ACTIONS(462),
    [sym_tcs_opcode] = ACTIONS(462),
    [sym_tya_opcode] = ACTIONS(462),
    [sym_a16_ctrl_cmd] = ACTIONS(460),
    [sym_a8_ctrl_cmd] = ACTIONS(460),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(460),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(460),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(460),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(460),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(460),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(460),
    [sym_bss_ctrl_cmd] = ACTIONS(460),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(460),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(460),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(460),
    [sym_code_ctrl_cmd] = ACTIONS(460),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(460),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(464),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(464),
    [sym_adc_opcode] = ACTIONS(466),
    [sym_and_opcode] = ACTIONS(466),
    [sym_asl_opcode] = ACTIONS(466),
    [sym_bcc_opcode] = ACTIONS(466),
    [sym_bcs_opcode] = ACTIONS(466),
    [sym_beq_opcode] = ACTIONS(466),
    [sym_bit_opcode] = ACTIONS(466),
    [sym_bmi_opcode] = ACTIONS(466),
    [sym_bne_opcode] = ACTIONS(466),
    [sym_bpl_opcode] = ACTIONS(466),
    [sym_brk_opcode] = ACTIONS(466),
    [sym_bvc_opcode] = ACTIONS(466),
    [sym_bvs_opcode] = ACTIONS(466),
    [sym_clc_opcode] = ACTIONS(466),
    [sym_cld_opcode] = ACTIONS(466),
    [sym_cli_opcode] = ACTIONS(466),
    [sym_clv_opcode] = ACTIONS(466),
    [sym_cmp_opcode] = ACTIONS(466),
    [sym_cpx_opcode] = ACTIONS(466),
    [sym_cpy_opcode] = ACTIONS(466),
    [sym_dec_opcode] = ACTIONS(466),
    [sym_dex_opcode] = ACTIONS(466),
    [sym_dey_opcode] = ACTIONS(466),
    [sym_eor_opcode] = ACTIONS(466),
    [sym_inc_opcode] = ACTIONS(466),
    [sym_inx_opcode] = ACTIONS(466),
    [sym_iny_opcode] = ACTIONS(466),
    [sym_jmp_opcode] = ACTIONS(466),
    [sym_jsr_opcode] = ACTIONS(466),
    [sym_lda_opcode] = ACTIONS(466),
    [sym_ldx_opcode] = ACTIONS(466),
    [sym_ldy_opcode] = ACTIONS(466),
    [sym_lsr_opcode] = ACTIONS(466),
    [sym_nop_opcode] = ACTIONS(466),
    [sym_ora_opcode] = ACTIONS(466),
    [sym_pha_opcode] = ACTIONS(466),
    [sym_php_opcode] = ACTIONS(466),
    [sym_pla_opcode] = ACTIONS(466),
    [sym_plp_opcode] = ACTIONS(466),
    [sym_rol_opcode] = ACTIONS(466),
    [sym_ror_opcode] = ACTIONS(466),
    [sym_rti_opcode] = ACTIONS(466),
    [sym_rts_opcode] = ACTIONS(466),
    [sym_sbc_opcode] = ACTIONS(466),
    [sym_sec_opcode] = ACTIONS(466),
    [sym_sed_opcode] = ACTIONS(466),
    [sym_sei_opcode] = ACTIONS(466),
    [sym_sta_opcode] = ACTIONS(466),
    [sym_stx_opcode] = ACTIONS(466),
    [sym_sty_opcode] = ACTIONS(466),
    [sym_tax_opcode] = ACTIONS(466),
    [sym_tay_opcode] = ACTIONS(466),
    [sym_tsx_opcode] = ACTIONS(466),
    [sym_txa_opcode] = ACTIONS(466),
    [sym_tcs_opcode] = ACTIONS(466),
    [sym_tya_opcode] = ACTIONS(466),
    [sym_a16_ctrl_cmd] = ACTIONS(464),
    [sym_a8_ctrl_cmd] = ACTIONS(464),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(464),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(464),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(464),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(464),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(464),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(464),
    [sym_bss_ctrl_cmd] = ACTIONS(464),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(464),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(464),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(464),
    [sym_code_ctrl_cmd] = ACTIONS(464),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(464),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(468),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(468),
    [sym_adc_opcode] = ACTIONS(470),
    [sym_and_opcode] = ACTIONS(470),
    [sym_asl_opcode] = ACTIONS(470),
    [sym_bcc_opcode] = ACTIONS(470),
    [sym_bcs_opcode] = ACTIONS(470),
    [sym_beq_opcode] = ACTIONS(470),
    [sym_bit_opcode] = ACTIONS(470),
    [sym_bmi_opcode] = ACTIONS(470),
    [sym_bne_opcode] = ACTIONS(470),
    [sym_bpl_opcode] = ACTIONS(470),
    [sym_brk_opcode] = ACTIONS(470),
    [sym_bvc_opcode] = ACTIONS(470),
    [sym_bvs_opcode] = ACTIONS(470),
    [sym_clc_opcode] = ACTIONS(470),
    [sym_cld_opcode] = ACTIONS(470),
    [sym_cli_opcode] = ACTIONS(470),
    [sym_clv_opcode] = ACTIONS(470),
    [sym_cmp_opcode] = ACTIONS(470),
    [sym_cpx_opcode] = ACTIONS(470),
    [sym_cpy_opcode] = ACTIONS(470),
    [sym_dec_opcode] = ACTIONS(470),
    [sym_dex_opcode] = ACTIONS(470),
    [sym_dey_opcode] = ACTIONS(470),
    [sym_eor_opcode] = ACTIONS(470),
    [sym_inc_opcode] = ACTIONS(470),
    [sym_inx_opcode] = ACTIONS(470),
    [sym_iny_opcode] = ACTIONS(470),
    [sym_jmp_opcode] = ACTIONS(470),
    [sym_jsr_opcode] = ACTIONS(470),
    [sym_lda_opcode] = ACTIONS(470),
    [sym_ldx_opcode] = ACTIONS(470),
    [sym_ldy_opcode] = ACTIONS(470),
    [sym_lsr_opcode] = ACTIONS(470),
    [sym_nop_opcode] = ACTIONS(470),
    [sym_ora_opcode] = ACTIONS(470),
    [sym_pha_opcode] = ACTIONS(470),
    [sym_php_opcode] = ACTIONS(470),
    [sym_pla_opcode] = ACTIONS(470),
    [sym_plp_opcode] = ACTIONS(470),
    [sym_rol_opcode] = ACTIONS(470),
    [sym_ror_opcode] = ACTIONS(470),
    [sym_rti_opcode] = ACTIONS(470),
    [sym_rts_opcode] = ACTIONS(470),
    [sym_sbc_opcode] = ACTIONS(470),
    [sym_sec_opcode] = ACTIONS(470),
    [sym_sed_opcode] = ACTIONS(470),
    [sym_sei_opcode] = ACTIONS(470),
    [sym_sta_opcode] = ACTIONS(470),
    [sym_stx_opcode] = ACTIONS(470),
    [sym_sty_opcode] = ACTIONS(470),
    [sym_tax_opcode] = ACTIONS(470),
    [sym_tay_opcode] = ACTIONS(470),
    [sym_tsx_opcode] = ACTIONS(470),
    [sym_txa_opcode] = ACTIONS(470),
    [sym_tcs_opcode] = ACTIONS(470),
    [sym_tya_opcode] = ACTIONS(470),
    [sym_a16_ctrl_cmd] = ACTIONS(468),
    [sym_a8_ctrl_cmd] = ACTIONS(468),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(468),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(468),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(468),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(468),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(468),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(468),
    [sym_bss_ctrl_cmd] = ACTIONS(468),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(468),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(468),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(468),
    [sym_code_ctrl_cmd] = ACTIONS(468),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(468),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(472),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(472),
    [sym_adc_opcode] = ACTIONS(474),
    [sym_and_opcode] = ACTIONS(474),
    [sym_asl_opcode] = ACTIONS(474),
    [sym_bcc_opcode] = ACTIONS(474),
    [sym_bcs_opcode] = ACTIONS(474),
    [sym_beq_opcode] = ACTIONS(474),
    [sym_bit_opcode] = ACTIONS(474),
    [sym_bmi_opcode] = ACTIONS(474),
    [sym_bne_opcode] = ACTIONS(474),
    [sym_bpl_opcode] = ACTIONS(474),
    [sym_brk_opcode] = ACTIONS(474),
    [sym_bvc_opcode] = ACTIONS(474),
    [sym_bvs_opcode] = ACTIONS(474),
    [sym_clc_opcode] = ACTIONS(474),
    [sym_cld_opcode] = ACTIONS(474),
    [sym_cli_opcode] = ACTIONS(474),
    [sym_clv_opcode] = ACTIONS(474),
    [sym_cmp_opcode] = ACTIONS(474),
    [sym_cpx_opcode] = ACTIONS(474),
    [sym_cpy_opcode] = ACTIONS(474),
    [sym_dec_opcode] = ACTIONS(474),
    [sym_dex_opcode] = ACTIONS(474),
    [sym_dey_opcode] = ACTIONS(474),
    [sym_eor_opcode] = ACTIONS(474),
    [sym_inc_opcode] = ACTIONS(474),
    [sym_inx_opcode] = ACTIONS(474),
    [sym_iny_opcode] = ACTIONS(474),
    [sym_jmp_opcode] = ACTIONS(474),
    [sym_jsr_opcode] = ACTIONS(474),
    [sym_lda_opcode] = ACTIONS(474),
    [sym_ldx_opcode] = ACTIONS(474),
    [sym_ldy_opcode] = ACTIONS(474),
    [sym_lsr_opcode] = ACTIONS(474),
    [sym_nop_opcode] = ACTIONS(474),
    [sym_ora_opcode] = ACTIONS(474),
    [sym_pha_opcode] = ACTIONS(474),
    [sym_php_opcode] = ACTIONS(474),
    [sym_pla_opcode] = ACTIONS(474),
    [sym_plp_opcode] = ACTIONS(474),
    [sym_rol_opcode] = ACTIONS(474),
    [sym_ror_opcode] = ACTIONS(474),
    [sym_rti_opcode] = ACTIONS(474),
    [sym_rts_opcode] = ACTIONS(474),
    [sym_sbc_opcode] = ACTIONS(474),
    [sym_sec_opcode] = ACTIONS(474),
    [sym_sed_opcode] = ACTIONS(474),
    [sym_sei_opcode] = ACTIONS(474),
    [sym_sta_opcode] = ACTIONS(474),
    [sym_stx_opcode] = ACTIONS(474),
    [sym_sty_opcode] = ACTIONS(474),
    [sym_tax_opcode] = ACTIONS(474),
    [sym_tay_opcode] = ACTIONS(474),
    [sym_tsx_opcode] = ACTIONS(474),
    [sym_txa_opcode] = ACTIONS(474),
    [sym_tcs_opcode] = ACTIONS(474),
    [sym_tya_opcode] = ACTIONS(474),
    [sym_a16_ctrl_cmd] = ACTIONS(472),
    [sym_a8_ctrl_cmd] = ACTIONS(472),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(472),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(472),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(472),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(472),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(472),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(472),
    [sym_bss_ctrl_cmd] = ACTIONS(472),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(472),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(472),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(472),
    [sym_code_ctrl_cmd] = ACTIONS(472),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(472),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(476),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(476),
    [sym_adc_opcode] = ACTIONS(478),
    [sym_and_opcode] = ACTIONS(478),
    [sym_asl_opcode] = ACTIONS(478),
    [sym_bcc_opcode] = ACTIONS(478),
    [sym_bcs_opcode] = ACTIONS(478),
    [sym_beq_opcode] = ACTIONS(478),
    [sym_bit_opcode] = ACTIONS(478),
    [sym_bmi_opcode] = ACTIONS(478),
    [sym_bne_opcode] = ACTIONS(478),
    [sym_bpl_opcode] = ACTIONS(478),
    [sym_brk_opcode] = ACTIONS(478),
    [sym_bvc_opcode] = ACTIONS(478),
    [sym_bvs_opcode] = ACTIONS(478),
    [sym_clc_opcode] = ACTIONS(478),
    [sym_cld_opcode] = ACTIONS(478),
    [sym_cli_opcode] = ACTIONS(478),
    [sym_clv_opcode] = ACTIONS(478),
    [sym_cmp_opcode] = ACTIONS(478),
    [sym_cpx_opcode] = ACTIONS(478),
    [sym_cpy_opcode] = ACTIONS(478),
    [sym_dec_opcode] = ACTIONS(478),
    [sym_dex_opcode] = ACTIONS(478),
    [sym_dey_opcode] = ACTIONS(478),
    [sym_eor_opcode] = ACTIONS(478),
    [sym_inc_opcode] = ACTIONS(478),
    [sym_inx_opcode] = ACTIONS(478),
    [sym_iny_opcode] = ACTIONS(478),
    [sym_jmp_opcode] = ACTIONS(478),
    [sym_jsr_opcode] = ACTIONS(478),
    [sym_lda_opcode] = ACTIONS(478),
    [sym_ldx_opcode] = ACTIONS(478),
    [sym_ldy_opcode] = ACTIONS(478),
    [sym_lsr_opcode] = ACTIONS(478),
    [sym_nop_opcode] = ACTIONS(478),
    [sym_ora_opcode] = ACTIONS(478),
    [sym_pha_opcode] = ACTIONS(478),
    [sym_php_opcode] = ACTIONS(478),
    [sym_pla_opcode] = ACTIONS(478),
    [sym_plp_opcode] = ACTIONS(478),
    [sym_rol_opcode] = ACTIONS(478),
    [sym_ror_opcode] = ACTIONS(478),
    [sym_rti_opcode] = ACTIONS(478),
    [sym_rts_opcode] = ACTIONS(478),
    [sym_sbc_opcode] = ACTIONS(478),
    [sym_sec_opcode] = ACTIONS(478),
    [sym_sed_opcode] = ACTIONS(478),
    [sym_sei_opcode] = ACTIONS(478),
    [sym_sta_opcode] = ACTIONS(478),
    [sym_stx_opcode] = ACTIONS(478),
    [sym_sty_opcode] = ACTIONS(478),
    [sym_tax_opcode] = ACTIONS(478),
    [sym_tay_opcode] = ACTIONS(478),
    [sym_tsx_opcode] = ACTIONS(478),
    [sym_txa_opcode] = ACTIONS(478),
    [sym_tcs_opcode] = ACTIONS(478),
    [sym_tya_opcode] = ACTIONS(478),
    [sym_a16_ctrl_cmd] = ACTIONS(476),
    [sym_a8_ctrl_cmd] = ACTIONS(476),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(476),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(476),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(476),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(476),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(476),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(476),
    [sym_bss_ctrl_cmd] = ACTIONS(476),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(476),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(476),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(476),
    [sym_code_ctrl_cmd] = ACTIONS(476),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(476),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(480),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(480),
    [sym_adc_opcode] = ACTIONS(482),
    [sym_and_opcode] = ACTIONS(482),
    [sym_asl_opcode] = ACTIONS(482),
    [sym_bcc_opcode] = ACTIONS(482),
    [sym_bcs_opcode] = ACTIONS(482),
    [sym_beq_opcode] = ACTIONS(482),
    [sym_bit_opcode] = ACTIONS(482),
    [sym_bmi_opcode] = ACTIONS(482),
    [sym_bne_opcode] = ACTIONS(482),
    [sym_bpl_opcode] = ACTIONS(482),
    [sym_brk_opcode] = ACTIONS(482),
    [sym_bvc_opcode] = ACTIONS(482),
    [sym_bvs_opcode] = ACTIONS(482),
    [sym_clc_opcode] = ACTIONS(482),
    [sym_cld_opcode] = ACTIONS(482),
    [sym_cli_opcode] = ACTIONS(482),
    [sym_clv_opcode] = ACTIONS(482),
    [sym_cmp_opcode] = ACTIONS(482),
    [sym_cpx_opcode] = ACTIONS(482),
    [sym_cpy_opcode] = ACTIONS(482),
    [sym_dec_opcode] = ACTIONS(482),
    [sym_dex_opcode] = ACTIONS(482),
    [sym_dey_opcode] = ACTIONS(482),
    [sym_eor_opcode] = ACTIONS(482),
    [sym_inc_opcode] = ACTIONS(482),
    [sym_inx_opcode] = ACTIONS(482),
    [sym_iny_opcode] = ACTIONS(482),
    [sym_jmp_opcode] = ACTIONS(482),
    [sym_jsr_opcode] = ACTIONS(482),
    [sym_lda_opcode] = ACTIONS(482),
    [sym_ldx_opcode] = ACTIONS(482),
    [sym_ldy_opcode] = ACTIONS(482),
    [sym_lsr_opcode] = ACTIONS(482),
    [sym_nop_opcode] = ACTIONS(482),
    [sym_ora_opcode] = ACTIONS(482),
    [sym_pha_opcode] = ACTIONS(482),
    [sym_php_opcode] = ACTIONS(482),
    [sym_pla_opcode] = ACTIONS(482),
    [sym_plp_opcode] = ACTIONS(482),
    [sym_rol_opcode] = ACTIONS(482),
    [sym_ror_opcode] = ACTIONS(482),
    [sym_rti_opcode] = ACTIONS(482),
    [sym_rts_opcode] = ACTIONS(482),
    [sym_sbc_opcode] = ACTIONS(482),
    [sym_sec_opcode] = ACTIONS(482),
    [sym_sed_opcode] = ACTIONS(482),
    [sym_sei_opcode] = ACTIONS(482),
    [sym_sta_opcode] = ACTIONS(482),
    [sym_stx_opcode] = ACTIONS(482),
    [sym_sty_opcode] = ACTIONS(482),
    [sym_tax_opcode] = ACTIONS(482),
    [sym_tay_opcode] = ACTIONS(482),
    [sym_tsx_opcode] = ACTIONS(482),
    [sym_txa_opcode] = ACTIONS(482),
    [sym_tcs_opcode] = ACTIONS(482),
    [sym_tya_opcode] = ACTIONS(482),
    [sym_a16_ctrl_cmd] = ACTIONS(480),
    [sym_a8_ctrl_cmd] = ACTIONS(480),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(480),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(480),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(480),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(480),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(480),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(480),
    [sym_bss_ctrl_cmd] = ACTIONS(480),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(480),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(480),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(480),
    [sym_code_ctrl_cmd] = ACTIONS(480),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(480),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(414),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(414),
    [sym_adc_opcode] = ACTIONS(418),
    [sym_and_opcode] = ACTIONS(418),
    [sym_asl_opcode] = ACTIONS(418),
    [sym_bcc_opcode] = ACTIONS(418),
    [sym_bcs_opcode] = ACTIONS(418),
    [sym_beq_opcode] = ACTIONS(418),
    [sym_bit_opcode] = ACTIONS(418),
    [sym_bmi_opcode] = ACTIONS(418),
    [sym_bne_opcode] = ACTIONS(418),
    [sym_bpl_opcode] = ACTIONS(418),
    [sym_brk_opcode] = ACTIONS(418),
    [sym_bvc_opcode] = ACTIONS(418),
    [sym_bvs_opcode] = ACTIONS(418),
    [sym_clc_opcode] = ACTIONS(418),
    [sym_cld_opcode] = ACTIONS(418),
    [sym_cli_opcode] = ACTIONS(418),
    [sym_clv_opcode] = ACTIONS(418),
    [sym_cmp_opcode] = ACTIONS(418),
    [sym_cpx_opcode] = ACTIONS(418),
    [sym_cpy_opcode] = ACTIONS(418),
    [sym_dec_opcode] = ACTIONS(418),
    [sym_dex_opcode] = ACTIONS(418),
    [sym_dey_opcode] = ACTIONS(418),
    [sym_eor_opcode] = ACTIONS(418),
    [sym_inc_opcode] = ACTIONS(418),
    [sym_inx_opcode] = ACTIONS(418),
    [sym_iny_opcode] = ACTIONS(418),
    [sym_jmp_opcode] = ACTIONS(418),
    [sym_jsr_opcode] = ACTIONS(418),
    [sym_lda_opcode] = ACTIONS(418),
    [sym_ldx_opcode] = ACTIONS(418),
    [sym_ldy_opcode] = ACTIONS(418),
    [sym_lsr_opcode] = ACTIONS(418),
    [sym_nop_opcode] = ACTIONS(418),
    [sym_ora_opcode] = ACTIONS(418),
    [sym_pha_opcode] = ACTIONS(418),
    [sym_php_opcode] = ACTIONS(418),
    [sym_pla_opcode] = ACTIONS(418),
    [sym_plp_opcode] = ACTIONS(418),
    [sym_rol_opcode] = ACTIONS(418),
    [sym_ror_opcode] = ACTIONS(418),
    [sym_rti_opcode] = ACTIONS(418),
    [sym_rts_opcode] = ACTIONS(418),
    [sym_sbc_opcode] = ACTIONS(418),
    [sym_sec_opcode] = ACTIONS(418),
    [sym_sed_opcode] = ACTIONS(418),
    [sym_sei_opcode] = ACTIONS(418),
    [sym_sta_opcode] = ACTIONS(418),
    [sym_stx_opcode] = ACTIONS(418),
    [sym_sty_opcode] = ACTIONS(418),
    [sym_tax_opcode] = ACTIONS(418),
    [sym_tay_opcode] = ACTIONS(418),
    [sym_tsx_opcode] = ACTIONS(418),
    [sym_txa_opcode] = ACTIONS(418),
    [sym_tcs_opcode] = ACTIONS(418),
    [sym_tya_opcode] = ACTIONS(418),
    [sym_a16_ctrl_cmd] = ACTIONS(414),
    [sym_a8_ctrl_cmd] = ACTIONS(414),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(414),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(414),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(414),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(414),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(414),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(414),
    [sym_bss_ctrl_cmd] = ACTIONS(414),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(414),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(414),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(414),
    [sym_code_ctrl_cmd] = ACTIONS(414),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(414),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(484),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(484),
    [sym_adc_opcode] = ACTIONS(486),
    [sym_and_opcode] = ACTIONS(486),
    [sym_asl_opcode] = ACTIONS(486),
    [sym_bcc_opcode] = ACTIONS(486),
    [sym_bcs_opcode] = ACTIONS(486),
    [sym_beq_opcode] = ACTIONS(486),
    [sym_bit_opcode] = ACTIONS(486),
    [sym_bmi_opcode] = ACTIONS(486),
    [sym_bne_opcode] = ACTIONS(486),
    [sym_bpl_opcode] = ACTIONS(486),
    [sym_brk_opcode] = ACTIONS(486),
    [sym_bvc_opcode] = ACTIONS(486),
    [sym_bvs_opcode] = ACTIONS(486),
    [sym_clc_opcode] = ACTIONS(486),
    [sym_cld_opcode] = ACTIONS(486),
    [sym_cli_opcode] = ACTIONS(486),
    [sym_clv_opcode] = ACTIONS(486),
    [sym_cmp_opcode] = ACTIONS(486),
    [sym_cpx_opcode] = ACTIONS(486),
    [sym_cpy_opcode] = ACTIONS(486),
    [sym_dec_opcode] = ACTIONS(486),
    [sym_dex_opcode] = ACTIONS(486),
    [sym_dey_opcode] = ACTIONS(486),
    [sym_eor_opcode] = ACTIONS(486),
    [sym_inc_opcode] = ACTIONS(486),
    [sym_inx_opcode] = ACTIONS(486),
    [sym_iny_opcode] = ACTIONS(486),
    [sym_jmp_opcode] = ACTIONS(486),
    [sym_jsr_opcode] = ACTIONS(486),
    [sym_lda_opcode] = ACTIONS(486),
    [sym_ldx_opcode] = ACTIONS(486),
    [sym_ldy_opcode] = ACTIONS(486),
    [sym_lsr_opcode] = ACTIONS(486),
    [sym_nop_opcode] = ACTIONS(486),
    [sym_ora_opcode] = ACTIONS(486),
    [sym_pha_opcode] = ACTIONS(486),
    [sym_php_opcode] = ACTIONS(486),
    [sym_pla_opcode] = ACTIONS(486),
    [sym_plp_opcode] = ACTIONS(486),
    [sym_rol_opcode] = ACTIONS(486),
    [sym_ror_opcode] = ACTIONS(486),
    [sym_rti_opcode] = ACTIONS(486),
    [sym_rts_opcode] = ACTIONS(486),
    [sym_sbc_opcode] = ACTIONS(486),
    [sym_sec_opcode] = ACTIONS(486),
    [sym_sed_opcode] = ACTIONS(486),
    [sym_sei_opcode] = ACTIONS(486),
    [sym_sta_opcode] = ACTIONS(486),
    [sym_stx_opcode] = ACTIONS(486),
    [sym_sty_opcode] = ACTIONS(486),
    [sym_tax_opcode] = ACTIONS(486),
    [sym_tay_opcode] = ACTIONS(486),
    [sym_tsx_opcode] = ACTIONS(486),
    [sym_txa_opcode] = ACTIONS(486),
    [sym_tcs_opcode] = ACTIONS(486),
    [sym_tya_opcode] = ACTIONS(486),
    [sym_a16_ctrl_cmd] = ACTIONS(484),
    [sym_a8_ctrl_cmd] = ACTIONS(484),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(484),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(484),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(484),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(484),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(484),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(484),
    [sym_bss_ctrl_cmd] = ACTIONS(484),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(484),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(484),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(484),
    [sym_code_ctrl_cmd] = ACTIONS(484),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(484),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(408),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(408),
    [sym_adc_opcode] = ACTIONS(412),
    [sym_and_opcode] = ACTIONS(412),
    [sym_asl_opcode] = ACTIONS(412),
    [sym_bcc_opcode] = ACTIONS(412),
    [sym_bcs_opcode] = ACTIONS(412),
    [sym_beq_opcode] = ACTIONS(412),
    [sym_bit_opcode] = ACTIONS(412),
    [sym_bmi_opcode] = ACTIONS(412),
    [sym_bne_opcode] = ACTIONS(412),
    [sym_bpl_opcode] = ACTIONS(412),
    [sym_brk_opcode] = ACTIONS(412),
    [sym_bvc_opcode] = ACTIONS(412),
    [sym_bvs_opcode] = ACTIONS(412),
    [sym_clc_opcode] = ACTIONS(412),
    [sym_cld_opcode] = ACTIONS(412),
    [sym_cli_opcode] = ACTIONS(412),
    [sym_clv_opcode] = ACTIONS(412),
    [sym_cmp_opcode] = ACTIONS(412),
    [sym_cpx_opcode] = ACTIONS(412),
    [sym_cpy_opcode] = ACTIONS(412),
    [sym_dec_opcode] = ACTIONS(412),
    [sym_dex_opcode] = ACTIONS(412),
    [sym_dey_opcode] = ACTIONS(412),
    [sym_eor_opcode] = ACTIONS(412),
    [sym_inc_opcode] = ACTIONS(412),
    [sym_inx_opcode] = ACTIONS(412),
    [sym_iny_opcode] = ACTIONS(412),
    [sym_jmp_opcode] = ACTIONS(412),
    [sym_jsr_opcode] = ACTIONS(412),
    [sym_lda_opcode] = ACTIONS(412),
    [sym_ldx_opcode] = ACTIONS(412),
    [sym_ldy_opcode] = ACTIONS(412),
    [sym_lsr_opcode] = ACTIONS(412),
    [sym_nop_opcode] = ACTIONS(412),
    [sym_ora_opcode] = ACTIONS(412),
    [sym_pha_opcode] = ACTIONS(412),
    [sym_php_opcode] = ACTIONS(412),
    [sym_pla_opcode] = ACTIONS(412),
    [sym_plp_opcode] = ACTIONS(412),
    [sym_rol_opcode] = ACTIONS(412),
    [sym_ror_opcode] = ACTIONS(412),
    [sym_rti_opcode] = ACTIONS(412),
    [sym_rts_opcode] = ACTIONS(412),
    [sym_sbc_opcode] = ACTIONS(412),
    [sym_sec_opcode] = ACTIONS(412),
    [sym_sed_opcode] = ACTIONS(412),
    [sym_sei_opcode] = ACTIONS(412),
    [sym_sta_opcode] = ACTIONS(412),
    [sym_stx_opcode] = ACTIONS(412),
    [sym_sty_opcode] = ACTIONS(412),
    [sym_tax_opcode] = ACTIONS(412),
    [sym_tay_opcode] = ACTIONS(412),
    [sym_tsx_opcode] = ACTIONS(412),
    [sym_txa_opcode] = ACTIONS(412),
    [sym_tcs_opcode] = ACTIONS(412),
    [sym_tya_opcode] = ACTIONS(412),
    [sym_a16_ctrl_cmd] = ACTIONS(408),
    [sym_a8_ctrl_cmd] = ACTIONS(408),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(408),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(408),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(408),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(408),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(408),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(408),
    [sym_bss_ctrl_cmd] = ACTIONS(408),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(408),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(408),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(408),
    [sym_code_ctrl_cmd] = ACTIONS(408),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(408),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(488),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(488),
    [sym_adc_opcode] = ACTIONS(490),
    [sym_and_opcode] = ACTIONS(490),
    [sym_asl_opcode] = ACTIONS(490),
    [sym_bcc_opcode] = ACTIONS(490),
    [sym_bcs_opcode] = ACTIONS(490),
    [sym_beq_opcode] = ACTIONS(490),
    [sym_bit_opcode] = ACTIONS(490),
    [sym_bmi_opcode] = ACTIONS(490),
    [sym_bne_opcode] = ACTIONS(490),
    [sym_bpl_opcode] = ACTIONS(490),
    [sym_brk_opcode] = ACTIONS(490),
    [sym_bvc_opcode] = ACTIONS(490),
    [sym_bvs_opcode] = ACTIONS(490),
    [sym_clc_opcode] = ACTIONS(490),
    [sym_cld_opcode] = ACTIONS(490),
    [sym_cli_opcode] = ACTIONS(490),
    [sym_clv_opcode] = ACTIONS(490),
    [sym_cmp_opcode] = ACTIONS(490),
    [sym_cpx_opcode] = ACTIONS(490),
    [sym_cpy_opcode] = ACTIONS(490),
    [sym_dec_opcode] = ACTIONS(490),
    [sym_dex_opcode] = ACTIONS(490),
    [sym_dey_opcode] = ACTIONS(490),
    [sym_eor_opcode] = ACTIONS(490),
    [sym_inc_opcode] = ACTIONS(490),
    [sym_inx_opcode] = ACTIONS(490),
    [sym_iny_opcode] = ACTIONS(490),
    [sym_jmp_opcode] = ACTIONS(490),
    [sym_jsr_opcode] = ACTIONS(490),
    [sym_lda_opcode] = ACTIONS(490),
    [sym_ldx_opcode] = ACTIONS(490),
    [sym_ldy_opcode] = ACTIONS(490),
    [sym_lsr_opcode] = ACTIONS(490),
    [sym_nop_opcode] = ACTIONS(490),
    [sym_ora_opcode] = ACTIONS(490),
    [sym_pha_opcode] = ACTIONS(490),
    [sym_php_opcode] = ACTIONS(490),
    [sym_pla_opcode] = ACTIONS(490),
    [sym_plp_opcode] = ACTIONS(490),
    [sym_rol_opcode] = ACTIONS(490),
    [sym_ror_opcode] = ACTIONS(490),
    [sym_rti_opcode] = ACTIONS(490),
    [sym_rts_opcode] = ACTIONS(490),
    [sym_sbc_opcode] = ACTIONS(490),
    [sym_sec_opcode] = ACTIONS(490),
    [sym_sed_opcode] = ACTIONS(490),
    [sym_sei_opcode] = ACTIONS(490),
    [sym_sta_opcode] = ACTIONS(490),
    [sym_stx_opcode] = ACTIONS(490),
    [sym_sty_opcode] = ACTIONS(490),
    [sym_tax_opcode] = ACTIONS(490),
    [sym_tay_opcode] = ACTIONS(490),
    [sym_tsx_opcode] = ACTIONS(490),
    [sym_txa_opcode] = ACTIONS(490),
    [sym_tcs_opcode] = ACTIONS(490),
    [sym_tya_opcode] = ACTIONS(490),
    [sym_a16_ctrl_cmd] = ACTIONS(488),
    [sym_a8_ctrl_cmd] = ACTIONS(488),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(488),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(488),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(488),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(488),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(488),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(488),
    [sym_bss_ctrl_cmd] = ACTIONS(488),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(488),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(488),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(488),
    [sym_code_ctrl_cmd] = ACTIONS(488),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(488),
  },
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(492),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(492),
    [sym_adc_opcode] = ACTIONS(494),
    [sym_and_opcode] = ACTIONS(494),
    [sym_asl_opcode] = ACTIONS(494),
    [sym_bcc_opcode] = ACTIONS(494),
    [sym_bcs_opcode] = ACTIONS(494),
    [sym_beq_opcode] = ACTIONS(494),
    [sym_bit_opcode] = ACTIONS(494),
    [sym_bmi_opcode] = ACTIONS(494),
    [sym_bne_opcode] = ACTIONS(494),
    [sym_bpl_opcode] = ACTIONS(494),
    [sym_brk_opcode] = ACTIONS(494),
    [sym_bvc_opcode] = ACTIONS(494),
    [sym_bvs_opcode] = ACTIONS(494),
    [sym_clc_opcode] = ACTIONS(494),
    [sym_cld_opcode] = ACTIONS(494),
    [sym_cli_opcode] = ACTIONS(494),
    [sym_clv_opcode] = ACTIONS(494),
    [sym_cmp_opcode] = ACTIONS(494),
    [sym_cpx_opcode] = ACTIONS(494),
    [sym_cpy_opcode] = ACTIONS(494),
    [sym_dec_opcode] = ACTIONS(494),
    [sym_dex_opcode] = ACTIONS(494),
    [sym_dey_opcode] = ACTIONS(494),
    [sym_eor_opcode] = ACTIONS(494),
    [sym_inc_opcode] = ACTIONS(494),
    [sym_inx_opcode] = ACTIONS(494),
    [sym_iny_opcode] = ACTIONS(494),
    [sym_jmp_opcode] = ACTIONS(494),
    [sym_jsr_opcode] = ACTIONS(494),
    [sym_lda_opcode] = ACTIONS(494),
    [sym_ldx_opcode] = ACTIONS(494),
    [sym_ldy_opcode] = ACTIONS(494),
    [sym_lsr_opcode] = ACTIONS(494),
    [sym_nop_opcode] = ACTIONS(494),
    [sym_ora_opcode] = ACTIONS(494),
    [sym_pha_opcode] = ACTIONS(494),
    [sym_php_opcode] = ACTIONS(494),
    [sym_pla_opcode] = ACTIONS(494),
    [sym_plp_opcode] = ACTIONS(494),
    [sym_rol_opcode] = ACTIONS(494),
    [sym_ror_opcode] = ACTIONS(494),
    [sym_rti_opcode] = ACTIONS(494),
    [sym_rts_opcode] = ACTIONS(494),
    [sym_sbc_opcode] = ACTIONS(494),
    [sym_sec_opcode] = ACTIONS(494),
    [sym_sed_opcode] = ACTIONS(494),
    [sym_sei_opcode] = ACTIONS(494),
    [sym_sta_opcode] = ACTIONS(494),
    [sym_stx_opcode] = ACTIONS(494),
    [sym_sty_opcode] = ACTIONS(494),
    [sym_tax_opcode] = ACTIONS(494),
    [sym_tay_opcode] = ACTIONS(494),
    [sym_tsx_opcode] = ACTIONS(494),
    [sym_txa_opcode] = ACTIONS(494),
    [sym_tcs_opcode] = ACTIONS(494),
    [sym_tya_opcode] = ACTIONS(494),
    [sym_a16_ctrl_cmd] = ACTIONS(492),
    [sym_a8_ctrl_cmd] = ACTIONS(492),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(492),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(492),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(492),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(492),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(492),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(492),
    [sym_bss_ctrl_cmd] = ACTIONS(492),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(492),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(492),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(492),
    [sym_code_ctrl_cmd] = ACTIONS(492),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(492),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(496),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(496),
    [sym_adc_opcode] = ACTIONS(498),
    [sym_and_opcode] = ACTIONS(498),
    [sym_asl_opcode] = ACTIONS(498),
    [sym_bcc_opcode] = ACTIONS(498),
    [sym_bcs_opcode] = ACTIONS(498),
    [sym_beq_opcode] = ACTIONS(498),
    [sym_bit_opcode] = ACTIONS(498),
    [sym_bmi_opcode] = ACTIONS(498),
    [sym_bne_opcode] = ACTIONS(498),
    [sym_bpl_opcode] = ACTIONS(498),
    [sym_brk_opcode] = ACTIONS(498),
    [sym_bvc_opcode] = ACTIONS(498),
    [sym_bvs_opcode] = ACTIONS(498),
    [sym_clc_opcode] = ACTIONS(498),
    [sym_cld_opcode] = ACTIONS(498),
    [sym_cli_opcode] = ACTIONS(498),
    [sym_clv_opcode] = ACTIONS(498),
    [sym_cmp_opcode] = ACTIONS(498),
    [sym_cpx_opcode] = ACTIONS(498),
    [sym_cpy_opcode] = ACTIONS(498),
    [sym_dec_opcode] = ACTIONS(498),
    [sym_dex_opcode] = ACTIONS(498),
    [sym_dey_opcode] = ACTIONS(498),
    [sym_eor_opcode] = ACTIONS(498),
    [sym_inc_opcode] = ACTIONS(498),
    [sym_inx_opcode] = ACTIONS(498),
    [sym_iny_opcode] = ACTIONS(498),
    [sym_jmp_opcode] = ACTIONS(498),
    [sym_jsr_opcode] = ACTIONS(498),
    [sym_lda_opcode] = ACTIONS(498),
    [sym_ldx_opcode] = ACTIONS(498),
    [sym_ldy_opcode] = ACTIONS(498),
    [sym_lsr_opcode] = ACTIONS(498),
    [sym_nop_opcode] = ACTIONS(498),
    [sym_ora_opcode] = ACTIONS(498),
    [sym_pha_opcode] = ACTIONS(498),
    [sym_php_opcode] = ACTIONS(498),
    [sym_pla_opcode] = ACTIONS(498),
    [sym_plp_opcode] = ACTIONS(498),
    [sym_rol_opcode] = ACTIONS(498),
    [sym_ror_opcode] = ACTIONS(498),
    [sym_rti_opcode] = ACTIONS(498),
    [sym_rts_opcode] = ACTIONS(498),
    [sym_sbc_opcode] = ACTIONS(498),
    [sym_sec_opcode] = ACTIONS(498),
    [sym_sed_opcode] = ACTIONS(498),
    [sym_sei_opcode] = ACTIONS(498),
    [sym_sta_opcode] = ACTIONS(498),
    [sym_stx_opcode] = ACTIONS(498),
    [sym_sty_opcode] = ACTIONS(498),
    [sym_tax_opcode] = ACTIONS(498),
    [sym_tay_opcode] = ACTIONS(498),
    [sym_tsx_opcode] = ACTIONS(498),
    [sym_txa_opcode] = ACTIONS(498),
    [sym_tcs_opcode] = ACTIONS(498),
    [sym_tya_opcode] = ACTIONS(498),
    [sym_a16_ctrl_cmd] = ACTIONS(496),
    [sym_a8_ctrl_cmd] = ACTIONS(496),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(496),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(496),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(496),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(496),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(496),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(496),
    [sym_bss_ctrl_cmd] = ACTIONS(496),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(496),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(496),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(496),
    [sym_code_ctrl_cmd] = ACTIONS(496),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(496),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(500),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(500),
    [sym_adc_opcode] = ACTIONS(502),
    [sym_and_opcode] = ACTIONS(502),
    [sym_asl_opcode] = ACTIONS(502),
    [sym_bcc_opcode] = ACTIONS(502),
    [sym_bcs_opcode] = ACTIONS(502),
    [sym_beq_opcode] = ACTIONS(502),
    [sym_bit_opcode] = ACTIONS(502),
    [sym_bmi_opcode] = ACTIONS(502),
    [sym_bne_opcode] = ACTIONS(502),
    [sym_bpl_opcode] = ACTIONS(502),
    [sym_brk_opcode] = ACTIONS(502),
    [sym_bvc_opcode] = ACTIONS(502),
    [sym_bvs_opcode] = ACTIONS(502),
    [sym_clc_opcode] = ACTIONS(502),
    [sym_cld_opcode] = ACTIONS(502),
    [sym_cli_opcode] = ACTIONS(502),
    [sym_clv_opcode] = ACTIONS(502),
    [sym_cmp_opcode] = ACTIONS(502),
    [sym_cpx_opcode] = ACTIONS(502),
    [sym_cpy_opcode] = ACTIONS(502),
    [sym_dec_opcode] = ACTIONS(502),
    [sym_dex_opcode] = ACTIONS(502),
    [sym_dey_opcode] = ACTIONS(502),
    [sym_eor_opcode] = ACTIONS(502),
    [sym_inc_opcode] = ACTIONS(502),
    [sym_inx_opcode] = ACTIONS(502),
    [sym_iny_opcode] = ACTIONS(502),
    [sym_jmp_opcode] = ACTIONS(502),
    [sym_jsr_opcode] = ACTIONS(502),
    [sym_lda_opcode] = ACTIONS(502),
    [sym_ldx_opcode] = ACTIONS(502),
    [sym_ldy_opcode] = ACTIONS(502),
    [sym_lsr_opcode] = ACTIONS(502),
    [sym_nop_opcode] = ACTIONS(502),
    [sym_ora_opcode] = ACTIONS(502),
    [sym_pha_opcode] = ACTIONS(502),
    [sym_php_opcode] = ACTIONS(502),
    [sym_pla_opcode] = ACTIONS(502),
    [sym_plp_opcode] = ACTIONS(502),
    [sym_rol_opcode] = ACTIONS(502),
    [sym_ror_opcode] = ACTIONS(502),
    [sym_rti_opcode] = ACTIONS(502),
    [sym_rts_opcode] = ACTIONS(502),
    [sym_sbc_opcode] = ACTIONS(502),
    [sym_sec_opcode] = ACTIONS(502),
    [sym_sed_opcode] = ACTIONS(502),
    [sym_sei_opcode] = ACTIONS(502),
    [sym_sta_opcode] = ACTIONS(502),
    [sym_stx_opcode] = ACTIONS(502),
    [sym_sty_opcode] = ACTIONS(502),
    [sym_tax_opcode] = ACTIONS(502),
    [sym_tay_opcode] = ACTIONS(502),
    [sym_tsx_opcode] = ACTIONS(502),
    [sym_txa_opcode] = ACTIONS(502),
    [sym_tcs_opcode] = ACTIONS(502),
    [sym_tya_opcode] = ACTIONS(502),
    [sym_a16_ctrl_cmd] = ACTIONS(500),
    [sym_a8_ctrl_cmd] = ACTIONS(500),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(500),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(500),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(500),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(500),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(500),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(500),
    [sym_bss_ctrl_cmd] = ACTIONS(500),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(500),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(500),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(500),
    [sym_code_ctrl_cmd] = ACTIONS(500),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(500),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(504),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(504),
    [sym_adc_opcode] = ACTIONS(506),
    [sym_and_opcode] = ACTIONS(506),
    [sym_asl_opcode] = ACTIONS(506),
    [sym_bcc_opcode] = ACTIONS(506),
    [sym_bcs_opcode] = ACTIONS(506),
    [sym_beq_opcode] = ACTIONS(506),
    [sym_bit_opcode] = ACTIONS(506),
    [sym_bmi_opcode] = ACTIONS(506),
    [sym_bne_opcode] = ACTIONS(506),
    [sym_bpl_opcode] = ACTIONS(506),
    [sym_brk_opcode] = ACTIONS(506),
    [sym_bvc_opcode] = ACTIONS(506),
    [sym_bvs_opcode] = ACTIONS(506),
    [sym_clc_opcode] = ACTIONS(506),
    [sym_cld_opcode] = ACTIONS(506),
    [sym_cli_opcode] = ACTIONS(506),
    [sym_clv_opcode] = ACTIONS(506),
    [sym_cmp_opcode] = ACTIONS(506),
    [sym_cpx_opcode] = ACTIONS(506),
    [sym_cpy_opcode] = ACTIONS(506),
    [sym_dec_opcode] = ACTIONS(506),
    [sym_dex_opcode] = ACTIONS(506),
    [sym_dey_opcode] = ACTIONS(506),
    [sym_eor_opcode] = ACTIONS(506),
    [sym_inc_opcode] = ACTIONS(506),
    [sym_inx_opcode] = ACTIONS(506),
    [sym_iny_opcode] = ACTIONS(506),
    [sym_jmp_opcode] = ACTIONS(506),
    [sym_jsr_opcode] = ACTIONS(506),
    [sym_lda_opcode] = ACTIONS(506),
    [sym_ldx_opcode] = ACTIONS(506),
    [sym_ldy_opcode] = ACTIONS(506),
    [sym_lsr_opcode] = ACTIONS(506),
    [sym_nop_opcode] = ACTIONS(506),
    [sym_ora_opcode] = ACTIONS(506),
    [sym_pha_opcode] = ACTIONS(506),
    [sym_php_opcode] = ACTIONS(506),
    [sym_pla_opcode] = ACTIONS(506),
    [sym_plp_opcode] = ACTIONS(506),
    [sym_rol_opcode] = ACTIONS(506),
    [sym_ror_opcode] = ACTIONS(506),
    [sym_rti_opcode] = ACTIONS(506),
    [sym_rts_opcode] = ACTIONS(506),
    [sym_sbc_opcode] = ACTIONS(506),
    [sym_sec_opcode] = ACTIONS(506),
    [sym_sed_opcode] = ACTIONS(506),
    [sym_sei_opcode] = ACTIONS(506),
    [sym_sta_opcode] = ACTIONS(506),
    [sym_stx_opcode] = ACTIONS(506),
    [sym_sty_opcode] = ACTIONS(506),
    [sym_tax_opcode] = ACTIONS(506),
    [sym_tay_opcode] = ACTIONS(506),
    [sym_tsx_opcode] = ACTIONS(506),
    [sym_txa_opcode] = ACTIONS(506),
    [sym_tcs_opcode] = ACTIONS(506),
    [sym_tya_opcode] = ACTIONS(506),
    [sym_a16_ctrl_cmd] = ACTIONS(504),
    [sym_a8_ctrl_cmd] = ACTIONS(504),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(504),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(504),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(504),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(504),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(504),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(504),
    [sym_bss_ctrl_cmd] = ACTIONS(504),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(504),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(504),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(504),
    [sym_code_ctrl_cmd] = ACTIONS(504),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(504),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(528), 1,
      anon_sym_PLUS,
    ACTIONS(530), 1,
      anon_sym_DASH,
    STATE(41), 1,
      sym_expression,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(532), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(534), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(536), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(540), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
    ACTIONS(510), 3,
      sym_constructor_keyword,
      sym_destructor_keyword,
      sym_interruptor_keyword,
    STATE(29), 29,
      sym_string,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [105] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(528), 1,
      anon_sym_PLUS,
    ACTIONS(530), 1,
      anon_sym_DASH,
    STATE(17), 1,
      sym_expression,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(532), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(534), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(536), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(540), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(29), 29,
      sym_string,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [205] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(528), 1,
      anon_sym_PLUS,
    ACTIONS(530), 1,
      anon_sym_DASH,
    STATE(28), 1,
      sym_expression,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(532), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(534), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(536), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(540), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(29), 29,
      sym_string,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [305] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(528), 1,
      anon_sym_PLUS,
    ACTIONS(530), 1,
      anon_sym_DASH,
    STATE(122), 1,
      sym_expression,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(532), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(534), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(536), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(540), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(29), 29,
      sym_string,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [405] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(528), 1,
      anon_sym_PLUS,
    ACTIONS(530), 1,
      anon_sym_DASH,
    STATE(27), 1,
      sym_expression,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(532), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(534), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(536), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(540), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(29), 29,
      sym_string,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [505] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(528), 1,
      anon_sym_PLUS,
    ACTIONS(530), 1,
      anon_sym_DASH,
    STATE(26), 1,
      sym_expression,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(532), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(534), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(536), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(540), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(29), 29,
      sym_string,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [605] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(528), 1,
      anon_sym_PLUS,
    ACTIONS(530), 1,
      anon_sym_DASH,
    STATE(123), 1,
      sym_expression,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(532), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(534), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(536), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(540), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(29), 29,
      sym_string,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [705] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(528), 1,
      anon_sym_PLUS,
    ACTIONS(530), 1,
      anon_sym_DASH,
    STATE(124), 1,
      sym_expression,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(532), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(534), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(536), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(540), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(29), 29,
      sym_string,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [805] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(528), 1,
      anon_sym_PLUS,
    ACTIONS(530), 1,
      anon_sym_DASH,
    STATE(6), 1,
      sym_expression,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(532), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(534), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(536), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(540), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(29), 29,
      sym_string,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [905] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(528), 1,
      anon_sym_PLUS,
    ACTIONS(530), 1,
      anon_sym_DASH,
    STATE(40), 1,
      sym_expression,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(532), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(534), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(536), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(540), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(29), 29,
      sym_string,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [1005] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(528), 1,
      anon_sym_PLUS,
    ACTIONS(530), 1,
      anon_sym_DASH,
    STATE(43), 1,
      sym_expression,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(532), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(534), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(536), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(540), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(29), 29,
      sym_string,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [1105] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(528), 1,
      anon_sym_PLUS,
    ACTIONS(530), 1,
      anon_sym_DASH,
    STATE(16), 1,
      sym_expression,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(532), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(534), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(536), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(540), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(29), 29,
      sym_string,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [1205] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(528), 1,
      anon_sym_PLUS,
    ACTIONS(530), 1,
      anon_sym_DASH,
    STATE(24), 1,
      sym_expression,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(532), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(534), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(536), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(540), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(29), 29,
      sym_string,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [1305] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(528), 1,
      anon_sym_PLUS,
    ACTIONS(530), 1,
      anon_sym_DASH,
    STATE(46), 1,
      sym_expression,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(532), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(534), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(536), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(540), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(29), 29,
      sym_string,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [1405] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(528), 1,
      anon_sym_PLUS,
    ACTIONS(530), 1,
      anon_sym_DASH,
    STATE(22), 1,
      sym_expression,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(532), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(534), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(536), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(540), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(29), 29,
      sym_string,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [1505] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(528), 1,
      anon_sym_PLUS,
    ACTIONS(530), 1,
      anon_sym_DASH,
    STATE(21), 1,
      sym_expression,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(532), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(534), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(536), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(540), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(29), 29,
      sym_string,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [1605] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(528), 1,
      anon_sym_PLUS,
    ACTIONS(530), 1,
      anon_sym_DASH,
    STATE(20), 1,
      sym_expression,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(532), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(534), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(536), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(540), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(29), 29,
      sym_string,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [1705] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(528), 1,
      anon_sym_PLUS,
    ACTIONS(530), 1,
      anon_sym_DASH,
    STATE(19), 1,
      sym_expression,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(532), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(534), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(536), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(540), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(29), 29,
      sym_string,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [1805] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(528), 1,
      anon_sym_PLUS,
    ACTIONS(530), 1,
      anon_sym_DASH,
    STATE(18), 1,
      sym_expression,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(532), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(534), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(536), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(540), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(29), 29,
      sym_string,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [1905] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(528), 1,
      anon_sym_PLUS,
    ACTIONS(530), 1,
      anon_sym_DASH,
    STATE(33), 1,
      sym_expression,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(532), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(534), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(536), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(540), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(29), 29,
      sym_string,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [2005] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(528), 1,
      anon_sym_PLUS,
    ACTIONS(530), 1,
      anon_sym_DASH,
    STATE(15), 1,
      sym_expression,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(532), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(534), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(536), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(540), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(29), 29,
      sym_string,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [2105] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(528), 1,
      anon_sym_PLUS,
    ACTIONS(530), 1,
      anon_sym_DASH,
    STATE(14), 1,
      sym_expression,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(532), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(534), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(536), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(540), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(29), 29,
      sym_string,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [2205] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(528), 1,
      anon_sym_PLUS,
    ACTIONS(530), 1,
      anon_sym_DASH,
    STATE(13), 1,
      sym_expression,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(532), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(534), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(536), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(540), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(29), 29,
      sym_string,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [2305] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(528), 1,
      anon_sym_PLUS,
    ACTIONS(530), 1,
      anon_sym_DASH,
    STATE(12), 1,
      sym_expression,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(532), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(534), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(536), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(540), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(29), 29,
      sym_string,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [2405] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(528), 1,
      anon_sym_PLUS,
    ACTIONS(530), 1,
      anon_sym_DASH,
    STATE(11), 1,
      sym_expression,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(532), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(534), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(536), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(540), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(29), 29,
      sym_string,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [2505] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(528), 1,
      anon_sym_PLUS,
    ACTIONS(530), 1,
      anon_sym_DASH,
    STATE(10), 1,
      sym_expression,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(532), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(534), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(536), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(540), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(29), 29,
      sym_string,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [2605] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(528), 1,
      anon_sym_PLUS,
    ACTIONS(530), 1,
      anon_sym_DASH,
    STATE(9), 1,
      sym_expression,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(532), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(534), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(536), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(540), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(29), 29,
      sym_string,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [2705] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(528), 1,
      anon_sym_PLUS,
    ACTIONS(530), 1,
      anon_sym_DASH,
    STATE(8), 1,
      sym_expression,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(532), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(534), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(536), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(540), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(29), 29,
      sym_string,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [2805] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(528), 1,
      anon_sym_PLUS,
    ACTIONS(530), 1,
      anon_sym_DASH,
    STATE(7), 1,
      sym_expression,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(532), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(534), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(536), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(540), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(29), 29,
      sym_string,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [2905] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(528), 1,
      anon_sym_PLUS,
    ACTIONS(530), 1,
      anon_sym_DASH,
    STATE(5), 1,
      sym_expression,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(532), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(534), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(536), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(540), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(29), 29,
      sym_string,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [3005] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(528), 1,
      anon_sym_PLUS,
    ACTIONS(530), 1,
      anon_sym_DASH,
    STATE(4), 1,
      sym_expression,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(532), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(534), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(536), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(540), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(29), 29,
      sym_string,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [3105] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(528), 1,
      anon_sym_PLUS,
    ACTIONS(530), 1,
      anon_sym_DASH,
    STATE(32), 1,
      sym_expression,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(532), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(534), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(536), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(540), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(29), 29,
      sym_string,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [3205] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(528), 1,
      anon_sym_PLUS,
    ACTIONS(530), 1,
      anon_sym_DASH,
    STATE(34), 1,
      sym_expression,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(532), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(534), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(536), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(540), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(29), 29,
      sym_string,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [3305] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(528), 1,
      anon_sym_PLUS,
    ACTIONS(530), 1,
      anon_sym_DASH,
    STATE(42), 1,
      sym_expression,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(532), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(534), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(536), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(540), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(29), 29,
      sym_string,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [3405] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(528), 1,
      anon_sym_PLUS,
    ACTIONS(530), 1,
      anon_sym_DASH,
    STATE(25), 1,
      sym_expression,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(532), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(534), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(536), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(540), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(29), 29,
      sym_string,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [3505] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_PLUS,
    ACTIONS(73), 1,
      anon_sym_DASH,
    ACTIONS(75), 1,
      anon_sym_LT,
    ACTIONS(77), 1,
      anon_sym_GT,
    ACTIONS(81), 1,
      anon_sym_STAR,
    ACTIONS(83), 1,
      anon_sym_SLASH,
    ACTIONS(85), 1,
      anon_sym_DOTMOD,
    ACTIONS(87), 1,
      anon_sym_DOTBITAND,
    ACTIONS(89), 1,
      anon_sym_AMP,
    ACTIONS(95), 1,
      anon_sym_DOTBITOR,
    ACTIONS(97), 1,
      anon_sym_PIPE,
    ACTIONS(99), 1,
      anon_sym_EQ,
    ACTIONS(101), 1,
      anon_sym_LT_GT,
    ACTIONS(103), 1,
      anon_sym_LT_EQ,
    ACTIONS(105), 1,
      anon_sym_GT_EQ,
    ACTIONS(199), 1,
      anon_sym_DOTXOR,
    ACTIONS(542), 1,
      anon_sym_COMMA,
    ACTIONS(79), 2,
      anon_sym_CARET,
      anon_sym_DOTBITXOR,
    ACTIONS(91), 2,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
    ACTIONS(93), 2,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
    ACTIONS(197), 2,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
    ACTIONS(201), 2,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [3580] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_PLUS,
    ACTIONS(73), 1,
      anon_sym_DASH,
    ACTIONS(75), 1,
      anon_sym_LT,
    ACTIONS(77), 1,
      anon_sym_GT,
    ACTIONS(81), 1,
      anon_sym_STAR,
    ACTIONS(83), 1,
      anon_sym_SLASH,
    ACTIONS(85), 1,
      anon_sym_DOTMOD,
    ACTIONS(87), 1,
      anon_sym_DOTBITAND,
    ACTIONS(89), 1,
      anon_sym_AMP,
    ACTIONS(95), 1,
      anon_sym_DOTBITOR,
    ACTIONS(97), 1,
      anon_sym_PIPE,
    ACTIONS(99), 1,
      anon_sym_EQ,
    ACTIONS(101), 1,
      anon_sym_LT_GT,
    ACTIONS(103), 1,
      anon_sym_LT_EQ,
    ACTIONS(105), 1,
      anon_sym_GT_EQ,
    ACTIONS(199), 1,
      anon_sym_DOTXOR,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(79), 2,
      anon_sym_CARET,
      anon_sym_DOTBITXOR,
    ACTIONS(91), 2,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
    ACTIONS(93), 2,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
    ACTIONS(197), 2,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
    ACTIONS(201), 2,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [3655] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_PLUS,
    ACTIONS(73), 1,
      anon_sym_DASH,
    ACTIONS(75), 1,
      anon_sym_LT,
    ACTIONS(77), 1,
      anon_sym_GT,
    ACTIONS(81), 1,
      anon_sym_STAR,
    ACTIONS(83), 1,
      anon_sym_SLASH,
    ACTIONS(85), 1,
      anon_sym_DOTMOD,
    ACTIONS(87), 1,
      anon_sym_DOTBITAND,
    ACTIONS(89), 1,
      anon_sym_AMP,
    ACTIONS(95), 1,
      anon_sym_DOTBITOR,
    ACTIONS(97), 1,
      anon_sym_PIPE,
    ACTIONS(99), 1,
      anon_sym_EQ,
    ACTIONS(101), 1,
      anon_sym_LT_GT,
    ACTIONS(103), 1,
      anon_sym_LT_EQ,
    ACTIONS(105), 1,
      anon_sym_GT_EQ,
    ACTIONS(199), 1,
      anon_sym_DOTXOR,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 2,
      anon_sym_CARET,
      anon_sym_DOTBITXOR,
    ACTIONS(91), 2,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
    ACTIONS(93), 2,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
    ACTIONS(197), 2,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
    ACTIONS(201), 2,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [3730] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(548), 1,
      anon_sym_LPAREN,
    ACTIONS(550), 1,
      sym_imm_prefix,
    STATE(61), 1,
      sym_operand_16,
    STATE(63), 1,
      sym_operand_8,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
  [3775] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(552), 1,
      sym_acc_register,
    STATE(59), 1,
      sym_operand_16,
    STATE(63), 1,
      sym_operand_8,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
  [3817] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(550), 1,
      sym_imm_prefix,
    STATE(79), 1,
      sym_operand_16,
    STATE(81), 1,
      sym_operand_8,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
  [3859] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(550), 1,
      sym_imm_prefix,
    STATE(56), 1,
      sym_operand_8,
    STATE(57), 1,
      sym_operand_16,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
  [3901] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(550), 1,
      sym_imm_prefix,
    STATE(59), 1,
      sym_operand_16,
    STATE(63), 1,
      sym_operand_8,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
  [3943] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(548), 1,
      anon_sym_LPAREN,
    STATE(61), 1,
      sym_operand_16,
    STATE(63), 1,
      sym_operand_8,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
  [3985] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(85), 2,
      sym_operand_8,
      sym_operand_16,
  [4022] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    STATE(79), 1,
      sym_operand_16,
    STATE(81), 1,
      sym_operand_8,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
  [4061] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    STATE(59), 1,
      sym_operand_16,
    STATE(63), 1,
      sym_operand_8,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
  [4100] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(554), 1,
      sym_symbol,
    STATE(56), 1,
      sym_operand_8,
    STATE(79), 1,
      sym_operand_16,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
  [4139] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    ACTIONS(554), 1,
      sym_symbol,
    STATE(63), 1,
      sym_operand_8,
    STATE(79), 1,
      sym_operand_16,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
  [4178] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_symbol,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_dec_8,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_h,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(526), 1,
      sym_dec_16,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(62), 2,
      sym_operand_8,
      sym_operand_16,
  [4215] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(556), 1,
      anon_sym_PERCENT,
    ACTIONS(558), 1,
      anon_sym_DOLLAR,
    ACTIONS(560), 1,
      anon_sym_h,
    STATE(80), 1,
      sym_operand_8,
    ACTIONS(518), 2,
      sym_symbol,
      sym_dec_8,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
  [4242] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      aux_sym_hex_8_token2,
    ACTIONS(556), 1,
      anon_sym_PERCENT,
    ACTIONS(558), 1,
      anon_sym_DOLLAR,
    ACTIONS(560), 1,
      anon_sym_h,
    STATE(153), 1,
      sym_operand_8,
    ACTIONS(518), 2,
      sym_symbol,
      sym_dec_8,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
  [4269] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      sym_symbol,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      anon_sym_PERCENT,
    ACTIONS(566), 1,
      anon_sym_DOLLAR,
    ACTIONS(568), 1,
      anon_sym_h,
    ACTIONS(570), 1,
      sym_dec_16,
    STATE(79), 1,
      sym_operand_16,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
  [4298] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      sym_symbol,
    ACTIONS(564), 1,
      anon_sym_PERCENT,
    ACTIONS(566), 1,
      anon_sym_DOLLAR,
    ACTIONS(568), 1,
      anon_sym_h,
    ACTIONS(570), 1,
      sym_dec_16,
    STATE(58), 1,
      sym_operand_16,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
  [4324] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      sym_symbol,
    ACTIONS(564), 1,
      anon_sym_PERCENT,
    ACTIONS(566), 1,
      anon_sym_DOLLAR,
    ACTIONS(568), 1,
      anon_sym_h,
    ACTIONS(570), 1,
      sym_dec_16,
    STATE(47), 1,
      sym_operand_16,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
  [4350] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      sym_symbol,
    ACTIONS(564), 1,
      anon_sym_PERCENT,
    ACTIONS(566), 1,
      anon_sym_DOLLAR,
    ACTIONS(568), 1,
      anon_sym_h,
    ACTIONS(570), 1,
      sym_dec_16,
    STATE(79), 1,
      sym_operand_16,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
  [4376] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      sym_symbol,
    ACTIONS(564), 1,
      anon_sym_PERCENT,
    ACTIONS(566), 1,
      anon_sym_DOLLAR,
    ACTIONS(568), 1,
      anon_sym_h,
    ACTIONS(570), 1,
      sym_dec_16,
    STATE(162), 1,
      sym_operand_16,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
  [4402] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      sym_symbol,
    ACTIONS(564), 1,
      anon_sym_PERCENT,
    ACTIONS(566), 1,
      anon_sym_DOLLAR,
    ACTIONS(568), 1,
      anon_sym_h,
    ACTIONS(570), 1,
      sym_dec_16,
    STATE(66), 1,
      sym_operand_16,
    STATE(36), 2,
      sym_bin_16,
      sym_hex_16,
  [4428] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_PLUS,
    ACTIONS(574), 1,
      anon_sym_DASH,
    STATE(77), 2,
      sym_plus_symbol,
      sym_sub_symbol,
  [4442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 4,
      sym_warning_keyword,
      sym_error_keyword,
      sym_ldwarning_keyword,
      sym_lderror_keyword,
  [4452] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_PLUS,
    ACTIONS(574), 1,
      anon_sym_DASH,
    STATE(69), 2,
      sym_plus_symbol,
      sym_sub_symbol,
  [4466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(51), 1,
      sym_string,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [4477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(67), 1,
      sym_string,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [4488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(65), 1,
      sym_string,
    ACTIONS(508), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [4499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      aux_sym_bin_8_token1,
    ACTIONS(580), 1,
      aux_sym_bin_16_token1,
  [4509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      aux_sym_hex_8_token1,
    ACTIONS(584), 1,
      aux_sym_hex_16_token1,
  [4519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_COMMA,
    ACTIONS(588), 1,
      anon_sym_RPAREN,
  [4529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      sym_x_register,
    ACTIONS(592), 1,
      sym_y_register,
  [4539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      aux_sym_bin_16_token1,
  [4546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_COMMA,
  [4553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_COMMA,
  [4560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      sym_x_register,
  [4567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      sym_symbol,
  [4574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      sym_y_register,
  [4581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      sym_y_register,
  [4588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_RPAREN,
  [4595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
  [4602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      sym_y_register,
  [4609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      sym_x_register,
  [4616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      sym_x_register,
  [4623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      aux_sym_hex_8_token1,
  [4630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      aux_sym_bin_8_token1,
  [4637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_COMMA,
  [4644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      aux_sym_hex_16_token1,
  [4651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(87)] = 0,
  [SMALL_STATE(88)] = 105,
  [SMALL_STATE(89)] = 205,
  [SMALL_STATE(90)] = 305,
  [SMALL_STATE(91)] = 405,
  [SMALL_STATE(92)] = 505,
  [SMALL_STATE(93)] = 605,
  [SMALL_STATE(94)] = 705,
  [SMALL_STATE(95)] = 805,
  [SMALL_STATE(96)] = 905,
  [SMALL_STATE(97)] = 1005,
  [SMALL_STATE(98)] = 1105,
  [SMALL_STATE(99)] = 1205,
  [SMALL_STATE(100)] = 1305,
  [SMALL_STATE(101)] = 1405,
  [SMALL_STATE(102)] = 1505,
  [SMALL_STATE(103)] = 1605,
  [SMALL_STATE(104)] = 1705,
  [SMALL_STATE(105)] = 1805,
  [SMALL_STATE(106)] = 1905,
  [SMALL_STATE(107)] = 2005,
  [SMALL_STATE(108)] = 2105,
  [SMALL_STATE(109)] = 2205,
  [SMALL_STATE(110)] = 2305,
  [SMALL_STATE(111)] = 2405,
  [SMALL_STATE(112)] = 2505,
  [SMALL_STATE(113)] = 2605,
  [SMALL_STATE(114)] = 2705,
  [SMALL_STATE(115)] = 2805,
  [SMALL_STATE(116)] = 2905,
  [SMALL_STATE(117)] = 3005,
  [SMALL_STATE(118)] = 3105,
  [SMALL_STATE(119)] = 3205,
  [SMALL_STATE(120)] = 3305,
  [SMALL_STATE(121)] = 3405,
  [SMALL_STATE(122)] = 3505,
  [SMALL_STATE(123)] = 3580,
  [SMALL_STATE(124)] = 3655,
  [SMALL_STATE(125)] = 3730,
  [SMALL_STATE(126)] = 3775,
  [SMALL_STATE(127)] = 3817,
  [SMALL_STATE(128)] = 3859,
  [SMALL_STATE(129)] = 3901,
  [SMALL_STATE(130)] = 3943,
  [SMALL_STATE(131)] = 3985,
  [SMALL_STATE(132)] = 4022,
  [SMALL_STATE(133)] = 4061,
  [SMALL_STATE(134)] = 4100,
  [SMALL_STATE(135)] = 4139,
  [SMALL_STATE(136)] = 4178,
  [SMALL_STATE(137)] = 4215,
  [SMALL_STATE(138)] = 4242,
  [SMALL_STATE(139)] = 4269,
  [SMALL_STATE(140)] = 4298,
  [SMALL_STATE(141)] = 4324,
  [SMALL_STATE(142)] = 4350,
  [SMALL_STATE(143)] = 4376,
  [SMALL_STATE(144)] = 4402,
  [SMALL_STATE(145)] = 4428,
  [SMALL_STATE(146)] = 4442,
  [SMALL_STATE(147)] = 4452,
  [SMALL_STATE(148)] = 4466,
  [SMALL_STATE(149)] = 4477,
  [SMALL_STATE(150)] = 4488,
  [SMALL_STATE(151)] = 4499,
  [SMALL_STATE(152)] = 4509,
  [SMALL_STATE(153)] = 4519,
  [SMALL_STATE(154)] = 4529,
  [SMALL_STATE(155)] = 4539,
  [SMALL_STATE(156)] = 4546,
  [SMALL_STATE(157)] = 4553,
  [SMALL_STATE(158)] = 4560,
  [SMALL_STATE(159)] = 4567,
  [SMALL_STATE(160)] = 4574,
  [SMALL_STATE(161)] = 4581,
  [SMALL_STATE(162)] = 4588,
  [SMALL_STATE(163)] = 4595,
  [SMALL_STATE(164)] = 4602,
  [SMALL_STATE(165)] = 4609,
  [SMALL_STATE(166)] = 4616,
  [SMALL_STATE(167)] = 4623,
  [SMALL_STATE(168)] = 4630,
  [SMALL_STATE(169)] = 4637,
  [SMALL_STATE(170)] = 4644,
  [SMALL_STATE(171)] = 4651,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca65, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_8, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_8, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_8, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_8, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_and_exp, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_and_exp, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gte_cmp, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gte_cmp, 3, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_pos_exp, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_pos_exp, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lte_cmp, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lte_cmp, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_neq_cmp, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_neq_cmp, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eq_cmp, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eq_cmp, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bit_or_exp, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bit_or_exp, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift_r_exp, 3, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shift_r_exp, 3, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift_l_exp, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shift_l_exp, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bit_and_exp, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bit_and_exp, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_exp, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod_exp, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div_exp, 3, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_div_exp, 3, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_not_exp, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_not_exp, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mult_exp, 3, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mult_exp, 3, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bit_xor_exp, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bit_xor_exp, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gt_cmp, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gt_cmp, 3, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lt_cmp, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lt_cmp, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_exp, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_exp, 3, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_exp, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_exp, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_lobyte_exp, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_lobyte_exp, 2, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_hibyte_exp, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_hibyte_exp, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_ctrl_cmd, 2, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_ctrl_cmd, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bankbytes_ctrl_cmd, 2, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bankbytes_ctrl_cmd, 2, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_bankbyte_exp, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_bankbyte_exp, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_operand_8, 1, 0, 0), REDUCE(sym_operand_16, 1, 0, 0),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_operand_8, 1, 0, 0), REDUCE(sym_operand_16, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_8, 2, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bin_8, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_xor_exp, 3, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_xor_exp, 3, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_not_exp, 2, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_not_exp, 2, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_or_exp, 3, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_or_exp, 3, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_16, 2, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bin_16, 2, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_16, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_16, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_8, 2, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_8, 2, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_16, 2, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_16, 2, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_neg_exp, 2, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_neg_exp, 2, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condes_ctrl_cmd, 4, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condes_ctrl_cmd, 4, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bankbytes_ctrl_cmd_repeat1, 2, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bankbytes_ctrl_cmd_repeat1, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condes_ctrl_cmd, 6, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condes_ctrl_cmd, 6, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca65, 1, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charmap_ctrl_cmd, 4, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charmap_ctrl_cmd, 4, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr_ctrl_cmd, 2, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addr_ctrl_cmd, 2, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr_ctrl_cmd, 3, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addr_ctrl_cmd, 3, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_addr_ctrl_cmd_repeat1, 2, 0, 0),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addr_ctrl_cmd_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_addr_ctrl_cmd_repeat1, 2, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bankbytes_ctrl_cmd, 3, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bankbytes_ctrl_cmd, 3, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asciiz_ctrl_cmd, 2, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asciiz_ctrl_cmd, 2, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_ctrl_cmd, 3, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_ctrl_cmd, 3, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_asciiz_ctrl_cmd_repeat1, 2, 0, 0),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_asciiz_ctrl_cmd_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_asciiz_ctrl_cmd_repeat1, 2, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asciiz_ctrl_cmd, 3, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asciiz_ctrl_cmd, 3, 0, 0),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bankbytes_ctrl_cmd_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zp_addr_inst, 2, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zp_addr_inst, 2, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abs_addr_inst, 2, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abs_addr_inst, 2, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_align_ctrl_cmd, 2, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_align_ctrl_cmd, 2, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rel_addr_inst, 2, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rel_addr_inst, 2, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_ctrl_cmd, 6, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_ctrl_cmd, 6, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abs_x_addr_inst, 4, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abs_x_addr_inst, 4, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_ctrl_cmd, 2, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_ctrl_cmd, 2, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zp_x_addr_inst, 4, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zp_x_addr_inst, 4, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ind_y_addr_inst, 6, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ind_y_addr_inst, 6, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_cmd, 1, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_cmd, 1, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ind_x_addr_inst, 6, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ind_x_addr_inst, 6, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ind_addr_inst, 4, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ind_addr_inst, 4, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plus_symbol, 1, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plus_symbol, 1, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_symbol, 1, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_symbol, 1, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autoimport_ctrl_cmd, 2, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_autoimport_ctrl_cmd, 2, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_impl_addr_inst, 1, 0, 0),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_impl_addr_inst, 1, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imm_addr_inst, 3, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imm_addr_inst, 3, 0, 0),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abs_y_addr_inst, 4, 0, 0),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abs_y_addr_inst, 4, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acc_addr_inst, 2, 0, 0),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_acc_addr_inst, 2, 0, 0),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zp_y_addr_inst, 4, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zp_y_addr_inst, 4, 0, 0),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_align_ctrl_cmd, 4, 0, 0),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_align_ctrl_cmd, 4, 0, 0),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 1, 0, 0),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inst, 1, 0, 0),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [622] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_ca65(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
