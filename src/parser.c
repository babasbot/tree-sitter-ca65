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
#define STATE_COUNT 176
#define LARGE_STATE_COUNT 89
#define SYMBOL_COUNT 201
#define ALIAS_COUNT 0
#define TOKEN_COUNT 134
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
  aux_sym_constructor_ctrl_cmd_token1 = 133,
  sym_ca65 = 134,
  sym_string = 135,
  sym_inst = 136,
  sym_impl_addr_inst = 137,
  sym_acc_addr_inst = 138,
  sym_imm_addr_inst = 139,
  sym_abs_addr_inst = 140,
  sym_zp_addr_inst = 141,
  sym_abs_x_addr_inst = 142,
  sym_abs_y_addr_inst = 143,
  sym_zp_x_addr_inst = 144,
  sym_zp_y_addr_inst = 145,
  sym_ind_addr_inst = 146,
  sym_ind_x_addr_inst = 147,
  sym_ind_y_addr_inst = 148,
  sym_rel_addr_inst = 149,
  sym_operand_8 = 150,
  sym_bin_8 = 151,
  sym_hex_8 = 152,
  sym_operand_16 = 153,
  sym_bin_16 = 154,
  sym_hex_16 = 155,
  sym_expression = 156,
  sym_unary_pos_exp = 157,
  sym_unary_neg_exp = 158,
  sym_unary_not_exp = 159,
  sym_unary_lobyte_exp = 160,
  sym_unary_hibyte_exp = 161,
  sym_unary_bankbyte_exp = 162,
  sym_mult_exp = 163,
  sym_div_exp = 164,
  sym_mod_exp = 165,
  sym_bit_and_exp = 166,
  sym_bit_xor_exp = 167,
  sym_shift_l_exp = 168,
  sym_shift_r_exp = 169,
  sym_add_exp = 170,
  sym_sub_exp = 171,
  sym_bit_or_exp = 172,
  sym_eq_cmp = 173,
  sym_neq_cmp = 174,
  sym_lt_cmp = 175,
  sym_gt_cmp = 176,
  sym_lte_cmp = 177,
  sym_gte_cmp = 178,
  sym_bool_and_exp = 179,
  sym_bool_xor_exp = 180,
  sym_bool_or_exp = 181,
  sym_bool_not_exp = 182,
  sym_ctrl_cmd = 183,
  sym_addr_ctrl_cmd = 184,
  sym_align_ctrl_cmd = 185,
  sym_asciiz_ctrl_cmd = 186,
  sym_assert_ctrl_cmd = 187,
  sym_autoimport_ctrl_cmd = 188,
  sym_bankbytes_ctrl_cmd = 189,
  sym_byte_ctrl_cmd = 190,
  sym_case_ctrl_cmd = 191,
  sym_charmap_ctrl_cmd = 192,
  sym_condes_ctrl_cmd = 193,
  sym_constructor_ctrl_cmd = 194,
  sym_plus_symbol = 195,
  sym_sub_symbol = 196,
  aux_sym_ca65_repeat1 = 197,
  aux_sym_addr_ctrl_cmd_repeat1 = 198,
  aux_sym_asciiz_ctrl_cmd_repeat1 = 199,
  aux_sym_bankbytes_ctrl_cmd_repeat1 = 200,
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
  [aux_sym_constructor_ctrl_cmd_token1] = "constructor_ctrl_cmd_token1",
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
  [sym_constructor_ctrl_cmd] = "constructor_ctrl_cmd",
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
  [aux_sym_constructor_ctrl_cmd_token1] = aux_sym_constructor_ctrl_cmd_token1,
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
  [sym_constructor_ctrl_cmd] = sym_constructor_ctrl_cmd,
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
  [aux_sym_constructor_ctrl_cmd_token1] = {
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
  [sym_constructor_ctrl_cmd] = {
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
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 6,
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
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(303);
      ADVANCE_MAP(
        '!', 577,
        '"', 3,
        '#', 542,
        '$', 500,
        '%', 466,
        '&', 559,
        '\'', 6,
        '(', 355,
        ')', 356,
        '*', 555,
        '+', 543,
        ',', 354,
        '-', 544,
        '.', 74,
        '/', 556,
        '0', 467,
        '1', 475,
        '2', 482,
        '6', 487,
        ';', 304,
        '<', 549,
        '=', 567,
        '>', 552,
        '^', 554,
        'h', 501,
        '|', 566,
        '~', 546,
        'A', 317,
        'a', 317,
        'B', 147,
        'b', 147,
        'C', 184,
        'c', 184,
        'D', 162,
        'd', 162,
        'E', 199,
        'e', 199,
        'I', 190,
        'i', 190,
        'J', 187,
        'j', 187,
        'L', 158,
        'l', 158,
        'N', 200,
        'n', 200,
        'O', 227,
        'o', 227,
        'P', 173,
        'p', 173,
        'R', 198,
        'r', 198,
        'S', 145,
        's', 145,
        'T', 138,
        't', 138,
        'W', 141,
        'w', 141,
        'X', 319,
        'x', 319,
        'Y', 320,
        'y', 320,
      );
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(497);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 577,
        '"', 3,
        '#', 542,
        '$', 500,
        '%', 466,
        '\'', 6,
        '(', 355,
        '+', 543,
        '-', 544,
        '.', 81,
        '0', 481,
        '1', 490,
        '2', 485,
        '6', 486,
        ';', 304,
        '<', 548,
        '>', 551,
        '^', 554,
        'h', 502,
        '~', 546,
      );
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(492);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(325);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 577,
        '"', 3,
        '$', 500,
        '%', 466,
        '\'', 6,
        '(', 355,
        '+', 543,
        '-', 544,
        '.', 81,
        '0', 481,
        '1', 490,
        '2', 485,
        '6', 486,
        ';', 304,
        '<', 548,
        '>', 551,
        '^', 554,
        'h', 502,
        '~', 546,
        'C', 323,
        'c', 323,
        'D', 322,
        'd', 322,
        'I', 330,
        'i', 330,
      );
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(492);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(325);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(305);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(500);
      if (lookahead == '%') ADVANCE(466);
      if (lookahead == '(') ADVANCE(355);
      if (lookahead == '0') ADVANCE(528);
      if (lookahead == '6') ADVANCE(531);
      if (lookahead == ';') ADVANCE(304);
      if (lookahead == 'h') ADVANCE(502);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(533);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(536);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '$', 500,
        '%', 466,
        '0', 481,
        '1', 490,
        '2', 485,
        '6', 486,
        ';', 304,
        'h', 502,
        'A', 318,
        'a', 318,
      );
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(492);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(325);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(306);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(504);
      if (lookahead == ';') ADVANCE(304);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(508);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(20);
      if (lookahead == '1') ADVANCE(271);
      if (lookahead == ';') ADVANCE(304);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(511);
      if (lookahead == '1') ADVANCE(526);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(13);
      if (lookahead == ';') ADVANCE(304);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(301);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(538);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(541);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(9);
      if (lookahead == '1') ADVANCE(298);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(11);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(300);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(505);
      if (lookahead == ';') ADVANCE(304);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(507);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(12);
      if (lookahead == '1') ADVANCE(297);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(15);
      if (lookahead == '1') ADVANCE(295);
      END_STATE();
    case 17:
      if (lookahead == '0') ADVANCE(16);
      if (lookahead == '1') ADVANCE(292);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(17);
      if (lookahead == '1') ADVANCE(288);
      END_STATE();
    case 19:
      if (lookahead == '0') ADVANCE(18);
      if (lookahead == '1') ADVANCE(283);
      END_STATE();
    case 20:
      if (lookahead == '0') ADVANCE(19);
      if (lookahead == '1') ADVANCE(277);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '1', 23,
        '8', 579,
        'N', 84,
        'D', 161,
        'd', 161,
        'L', 176,
        'l', 176,
        'S', 155,
        's', 155,
        'U', 248,
        'u', 248,
      );
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '1', 23,
        '8', 579,
        'D', 161,
        'd', 161,
        'L', 176,
        'l', 176,
        'S', 155,
        's', 155,
        'U', 248,
        'u', 248,
      );
      END_STATE();
    case 23:
      if (lookahead == '6') ADVANCE(578);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(413);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(415);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(425);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(429);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(449);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(451);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 31:
      ADVANCE_MAP(
        ':', 321,
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
      if (lookahead == ':') ADVANCE(321);
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
        ':', 321,
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
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(361);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(377);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 37:
      ADVANCE_MAP(
        ':', 321,
        'C', 381,
        'c', 381,
        'D', 383,
        'd', 383,
        'I', 385,
        'i', 385,
        'V', 387,
        'v', 387,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(395);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(397);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(403);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(405);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(443);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(445);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(321);
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
      if (lookahead == ':') ADVANCE(321);
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
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(321);
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
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(437);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(321);
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
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(433);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(321);
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
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(321);
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
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(391);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(455);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      ADVANCE_MAP(
        'A', 21,
        'B', 76,
        'C', 139,
        'H', 91,
        'L', 105,
        'M', 101,
        'N', 102,
        'O', 106,
        'S', 90,
        'X', 100,
        'a', 22,
        'b', 241,
        'c', 99,
      );
      END_STATE();
    case 75:
      ADVANCE_MAP(
        'A', 21,
        'B', 92,
        'C', 139,
        'M', 101,
        'O', 106,
        'S', 90,
        'X', 100,
        'a', 22,
        'b', 142,
        'c', 99,
      );
      END_STATE();
    case 76:
      if (lookahead == 'A') ADVANCE(95);
      if (lookahead == 'I') ADVANCE(110);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(238);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(245);
      END_STATE();
    case 77:
      if (lookahead == 'A') ADVANCE(95);
      if (lookahead == 'I') ADVANCE(116);
      END_STATE();
    case 78:
      if (lookahead == 'A') ADVANCE(97);
      if (lookahead == 'N') ADVANCE(104);
      if (lookahead == 'O') ADVANCE(108);
      if (lookahead == 'X') ADVANCE(103);
      END_STATE();
    case 79:
      if (lookahead == 'A') ADVANCE(97);
      if (lookahead == 'O') ADVANCE(108);
      if (lookahead == 'X') ADVANCE(103);
      END_STATE();
    case 80:
      if (lookahead == 'B') ADVANCE(118);
      END_STATE();
    case 81:
      if (lookahead == 'B') ADVANCE(77);
      if (lookahead == 'H') ADVANCE(91);
      if (lookahead == 'L') ADVANCE(105);
      if (lookahead == 'N') ADVANCE(102);
      END_STATE();
    case 82:
      if (lookahead == 'B') ADVANCE(119);
      END_STATE();
    case 83:
      if (lookahead == 'B') ADVANCE(120);
      END_STATE();
    case 84:
      if (lookahead == 'D') ADVANCE(571);
      END_STATE();
    case 85:
      if (lookahead == 'D') ADVANCE(557);
      END_STATE();
    case 86:
      if (lookahead == 'D') ADVANCE(558);
      END_STATE();
    case 87:
      if (lookahead == 'E') ADVANCE(550);
      END_STATE();
    case 88:
      if (lookahead == 'E') ADVANCE(547);
      END_STATE();
    case 89:
      if (lookahead == 'E') ADVANCE(553);
      END_STATE();
    case 90:
      if (lookahead == 'H') ADVANCE(94);
      END_STATE();
    case 91:
      if (lookahead == 'I') ADVANCE(80);
      END_STATE();
    case 92:
      if (lookahead == 'I') ADVANCE(114);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(192);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(238);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(245);
      END_STATE();
    case 93:
      if (lookahead == 'K') ADVANCE(83);
      END_STATE();
    case 94:
      if (lookahead == 'L') ADVANCE(561);
      if (lookahead == 'R') ADVANCE(563);
      END_STATE();
    case 95:
      if (lookahead == 'N') ADVANCE(93);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(160);
      if (lookahead == 'n') ADVANCE(127);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 97:
      if (lookahead == 'N') ADVANCE(86);
      END_STATE();
    case 98:
      if (lookahead == 'N') ADVANCE(104);
      END_STATE();
    case 99:
      if (lookahead == 'O') ADVANCE(159);
      if (lookahead == 'o') ADVANCE(96);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(242);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(143);
      END_STATE();
    case 100:
      if (lookahead == 'O') ADVANCE(107);
      END_STATE();
    case 101:
      if (lookahead == 'O') ADVANCE(85);
      END_STATE();
    case 102:
      if (lookahead == 'O') ADVANCE(111);
      END_STATE();
    case 103:
      if (lookahead == 'O') ADVANCE(109);
      END_STATE();
    case 104:
      if (lookahead == 'O') ADVANCE(113);
      END_STATE();
    case 105:
      if (lookahead == 'O') ADVANCE(82);
      END_STATE();
    case 106:
      if (lookahead == 'R') ADVANCE(574);
      END_STATE();
    case 107:
      if (lookahead == 'R') ADVANCE(573);
      END_STATE();
    case 108:
      if (lookahead == 'R') ADVANCE(565);
      END_STATE();
    case 109:
      if (lookahead == 'R') ADVANCE(560);
      END_STATE();
    case 110:
      if (lookahead == 'T') ADVANCE(78);
      END_STATE();
    case 111:
      if (lookahead == 'T') ADVANCE(576);
      END_STATE();
    case 112:
      if (lookahead == 'T') ADVANCE(87);
      END_STATE();
    case 113:
      if (lookahead == 'T') ADVANCE(545);
      END_STATE();
    case 114:
      if (lookahead == 'T') ADVANCE(79);
      END_STATE();
    case 115:
      if (lookahead == 'T') ADVANCE(88);
      END_STATE();
    case 116:
      if (lookahead == 'T') ADVANCE(98);
      END_STATE();
    case 117:
      if (lookahead == 'T') ADVANCE(89);
      END_STATE();
    case 118:
      if (lookahead == 'Y') ADVANCE(112);
      END_STATE();
    case 119:
      if (lookahead == 'Y') ADVANCE(115);
      END_STATE();
    case 120:
      if (lookahead == 'Y') ADVANCE(117);
      END_STATE();
    case 121:
      if (lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 122:
      if (lookahead == 'h') ADVANCE(509);
      END_STATE();
    case 123:
      if (lookahead == 'h') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(593);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(128);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(166);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 131:
      ADVANCE_MAP(
        'A', 412,
        'a', 412,
        'E', 234,
        'e', 234,
        'W', 144,
        'w', 144,
        'X', 414,
        'x', 414,
        'Y', 416,
        'y', 416,
      );
      END_STATE();
    case 132:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(422);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(424);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(426);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(428);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(430);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(448);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(450);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(452);
      END_STATE();
    case 136:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(460);
      END_STATE();
    case 137:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(464);
      END_STATE();
    case 138:
      ADVANCE_MAP(
        'A', 259,
        'a', 259,
        'C', 237,
        'c', 237,
        'S', 260,
        's', 260,
        'X', 136,
        'x', 136,
        'Y', 137,
        'y', 137,
      );
      END_STATE();
    case 139:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(242);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(143);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 140:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 141:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 142:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(192);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(238);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(245);
      END_STATE();
    case 143:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 144:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 145:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(153);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      END_STATE();
    case 146:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(261);
      END_STATE();
    case 147:
      ADVANCE_MAP(
        'C', 148,
        'c', 148,
        'E', 214,
        'e', 214,
        'I', 244,
        'i', 244,
        'M', 174,
        'm', 174,
        'N', 163,
        'n', 163,
        'P', 185,
        'p', 185,
        'R', 182,
        'r', 182,
        'V', 149,
        'v', 149,
      );
      END_STATE();
    case 148:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(360);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(362);
      END_STATE();
    case 149:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(376);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(378);
      END_STATE();
    case 150:
      ADVANCE_MAP(
        'C', 380,
        'c', 380,
        'D', 382,
        'd', 382,
        'I', 384,
        'i', 384,
        'V', 386,
        'v', 386,
      );
      END_STATE();
    case 151:
      ADVANCE_MAP(
        'C', 394,
        'c', 394,
        'S', 250,
        's', 250,
        'X', 396,
        'x', 396,
        'Y', 398,
        'y', 398,
      );
      END_STATE();
    case 152:
      ADVANCE_MAP(
        'C', 402,
        'c', 402,
        'T', 168,
        't', 168,
        'X', 404,
        'x', 404,
        'Y', 406,
        'y', 406,
      );
      END_STATE();
    case 153:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(440);
      END_STATE();
    case 154:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(442);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(444);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(446);
      END_STATE();
    case 155:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(180);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(169);
      END_STATE();
    case 156:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(251);
      END_STATE();
    case 157:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(252);
      END_STATE();
    case 158:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(131);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(217);
      END_STATE();
    case 159:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(165);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 160:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(166);
      END_STATE();
    case 161:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(218);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(591);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 170:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(307);
      END_STATE();
    case 171:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(309);
      END_STATE();
    case 172:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(191);
      END_STATE();
    case 173:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(133);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 174:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(368);
      END_STATE();
    case 175:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(436);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(438);
      END_STATE();
    case 176:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 177:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(262);
      END_STATE();
    case 178:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 179:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 180:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 181:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 182:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(374);
      END_STATE();
    case 183:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(146);
      END_STATE();
    case 184:
      ADVANCE_MAP(
        'L', 150,
        'l', 150,
        'M', 208,
        'm', 208,
        'O', 196,
        'o', 196,
        'P', 258,
        'p', 258,
      );
      END_STATE();
    case 185:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(372);
      END_STATE();
    case 186:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(432);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 187:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(209);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(216);
      END_STATE();
    case 188:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(212);
      END_STATE();
    case 189:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(140);
      END_STATE();
    case 190:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 191:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(581);
      END_STATE();
    case 192:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 193:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 194:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 195:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 196:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(243);
      END_STATE();
    case 197:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 198:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(186);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(175);
      END_STATE();
    case 199:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(215);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 200:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 201:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 202:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 203:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 204:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 205:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 206:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 207:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 208:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(388);
      END_STATE();
    case 209:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(408);
      END_STATE();
    case 210:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(420);
      END_STATE();
    case 211:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(590);
      END_STATE();
    case 212:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(204);
      END_STATE();
    case 213:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(253);
      END_STATE();
    case 214:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(364);
      END_STATE();
    case 215:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(400);
      END_STATE();
    case 216:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(410);
      END_STATE();
    case 217:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(418);
      END_STATE();
    case 218:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(580);
      END_STATE();
    case 219:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 220:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 221:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(308);
      END_STATE();
    case 222:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(310);
      END_STATE();
    case 223:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(313);
      END_STATE();
    case 224:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 225:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 226:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 227:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 228:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 229:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 230:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 231:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 232:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 233:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 234:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 235:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 236:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 237:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(462);
      END_STATE();
    case 238:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(586);
      END_STATE();
    case 239:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(592);
      END_STATE();
    case 240:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(585);
      END_STATE();
    case 241:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(238);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(245);
      END_STATE();
    case 242:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
      END_STATE();
    case 243:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(254);
      END_STATE();
    case 244:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(366);
      END_STATE();
    case 245:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(588);
      END_STATE();
    case 246:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(583);
      END_STATE();
    case 247:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(584);
      END_STATE();
    case 248:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(201);
      END_STATE();
    case 249:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(167);
      END_STATE();
    case 250:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(220);
      END_STATE();
    case 251:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(205);
      END_STATE();
    case 252:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(206);
      END_STATE();
    case 253:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(207);
      END_STATE();
    case 254:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(236);
      END_STATE();
    case 255:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 256:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(213);
      END_STATE();
    case 257:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(157);
      END_STATE();
    case 258:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(390);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(392);
      END_STATE();
    case 259:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(454);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(456);
      END_STATE();
    case 260:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(458);
      END_STATE();
    case 261:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(249);
      END_STATE();
    case 262:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(582);
      END_STATE();
    case 263:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(519);
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
          lookahead == '1') ADVANCE(267);
      END_STATE();
    case 269:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(268);
      END_STATE();
    case 270:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(512);
      END_STATE();
    case 271:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(269);
      END_STATE();
    case 272:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(270);
      END_STATE();
    case 273:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(272);
      END_STATE();
    case 274:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(273);
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
          lookahead == '1') ADVANCE(520);
      END_STATE();
    case 279:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(278);
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
          lookahead == '1') ADVANCE(282);
      END_STATE();
    case 284:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(521);
      END_STATE();
    case 285:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(284);
      END_STATE();
    case 286:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(285);
      END_STATE();
    case 287:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(286);
      END_STATE();
    case 288:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(287);
      END_STATE();
    case 289:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(522);
      END_STATE();
    case 290:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(289);
      END_STATE();
    case 291:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(290);
      END_STATE();
    case 292:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(291);
      END_STATE();
    case 293:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(523);
      END_STATE();
    case 294:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(293);
      END_STATE();
    case 295:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(294);
      END_STATE();
    case 296:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(524);
      END_STATE();
    case 297:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(296);
      END_STATE();
    case 298:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(525);
      END_STATE();
    case 299:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(540);
      END_STATE();
    case 300:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(539);
      END_STATE();
    case 301:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(299);
      END_STATE();
    case 302:
      if (eof) ADVANCE(303);
      ADVANCE_MAP(
        '&', 559,
        ')', 356,
        '*', 555,
        '+', 543,
        ',', 354,
        '-', 544,
        '.', 75,
        '/', 556,
        '0', 468,
        '1', 480,
        ';', 304,
        '<', 549,
        '=', 567,
        '>', 552,
        '^', 554,
        '|', 566,
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
          lookahead == ' ') SKIP(302);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_warning_keyword);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_error_keyword);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_ldwarning_keyword);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_lderror_keyword);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_constructor_keyword);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_constructor_keyword);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_destructor_keyword);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_destructor_keyword);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_interruptor_keyword);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_interruptor_keyword);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_acc_register);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_acc_register);
      if (lookahead == 'h') ADVANCE(353);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(122);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(326);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_x_register);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_y_register);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'h') ADVANCE(353);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(122);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(326);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'h') ADVANCE(353);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(331);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(122);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(326);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'h') ADVANCE(353);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(345);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'h') ADVANCE(353);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(122);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(326);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'h') ADVANCE(353);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(346);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(347);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(341);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(344);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(343);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(337);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(338);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(339);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(348);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(350);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(314);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(312);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(316);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(351);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(340);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(352);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(349);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(329);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(336);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(332);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(333);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(334);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(342);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(327);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(335);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(328);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_symbol);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_adc_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_and_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_asl_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_bcc_opcode);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_bcc_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_bcs_opcode);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_bcs_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_beq_opcode);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_beq_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_bit_opcode);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_bit_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_bmi_opcode);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_bmi_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_bne_opcode);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_bne_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_bpl_opcode);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_bpl_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_brk_opcode);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_brk_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_bvc_opcode);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_bvc_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_bvs_opcode);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_bvs_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_clc_opcode);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_clc_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_cld_opcode);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_cld_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_cli_opcode);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_cli_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_clv_opcode);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_clv_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_cmp_opcode);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_cmp_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_cpx_opcode);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_cpx_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_cpy_opcode);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_cpy_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_dec_opcode);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_dec_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_dex_opcode);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_dex_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_dey_opcode);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_dey_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_eor_opcode);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_eor_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_inc_opcode);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_inc_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_inx_opcode);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_inx_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_iny_opcode);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_iny_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_jmp_opcode);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_jmp_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_jsr_opcode);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_jsr_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_lda_opcode);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_lda_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_ldx_opcode);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_ldx_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_ldy_opcode);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_ldy_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_lsr_opcode);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_lsr_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_nop_opcode);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_nop_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_ora_opcode);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_ora_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_pha_opcode);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_pha_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_php_opcode);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_php_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_pla_opcode);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_pla_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_plp_opcode);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_plp_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_rol_opcode);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_rol_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_ror_opcode);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_ror_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_rti_opcode);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_rti_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_rts_opcode);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_rts_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_sbc_opcode);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_sbc_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_sec_opcode);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_sec_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_sed_opcode);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_sed_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_sei_opcode);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_sei_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_sta_opcode);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_sta_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_stx_opcode);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_stx_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_sty_opcode);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_sty_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_tax_opcode);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_tax_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_tay_opcode);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_tay_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_tsx_opcode);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_tsx_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_txa_opcode);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_txa_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_tcs_opcode);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_tcs_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_tya_opcode);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_tya_opcode);
      if (lookahead == ':') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0') ADVANCE(467);
      if (lookahead == '1') ADVANCE(475);
      if (lookahead == '2') ADVANCE(482);
      if (lookahead == '6') ADVANCE(487);
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(497);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(499);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0') ADVANCE(468);
      if (lookahead == '1') ADVANCE(480);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(477);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(477);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(527);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(519);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(474);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(498);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(471);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(470);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(534);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(472);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(499);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(473);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(476);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(469);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(478);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(479);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '0') ADVANCE(481);
      if (lookahead == '1') ADVANCE(490);
      if (lookahead == '2') ADVANCE(485);
      if (lookahead == '6') ADVANCE(486);
      if (lookahead == 'h') ADVANCE(509);
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(492);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(495);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(499);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(529);
      if (lookahead == 'h') ADVANCE(509);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(535);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(529);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(535);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(488);
      if (lookahead == 'h') ADVANCE(509);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(493);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(483);
      if (lookahead == 'h') ADVANCE(509);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(489);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(484);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(496);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(509);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(498);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(535);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(493);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(534);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(498);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_dec_8);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(498);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_dec_8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(535);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_dec_8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_dec_8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(534);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_dec_8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(498);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_h);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_h);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (lookahead == '0') ADVANCE(504);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(508);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (lookahead == '0') ADVANCE(505);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(507);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(540);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(503);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(506);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_hex_8_token2);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0') ADVANCE(511);
      if (lookahead == '1') ADVANCE(526);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(519);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(510);
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
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(516);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(517);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(518);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(512);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(520);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(521);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(522);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(523);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(524);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(525);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_dec_16);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '0') ADVANCE(528);
      if (lookahead == '6') ADVANCE(531);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(533);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(536);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '3') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(534);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(527);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '5') ADVANCE(529);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(535);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '5') ADVANCE(530);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(533);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(527);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(535);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(527);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(534);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(533);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (lookahead == '0') ADVANCE(538);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(541);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(540);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(537);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(539);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_imm_prefix);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_DOTBITNOT);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_DOTLOBYTE);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(562);
      if (lookahead == '=') ADVANCE(569);
      if (lookahead == '>') ADVANCE(568);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_DOTHIBYTE);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(570);
      if (lookahead == '>') ADVANCE(564);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_DOTBANKBYTE);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_DOTMOD);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_DOTBITAND);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(572);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_DOTBITXOR);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_DOTSHL);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_DOTSHR);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_DOTBITOR);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(575);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_DOTAND);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_DOTXOR);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_DOTOR);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_DOTNOT);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_a16_ctrl_cmd);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_a8_ctrl_cmd);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_addr_ctrl_cmd_token1);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_align_ctrl_cmd_token1);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_asciiz_ctrl_cmd_token1);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_assert_ctrl_cmd_token1);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_autoimport_ctrl_cmd_token1);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_bankbytes_ctrl_cmd_token1);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_bss_ctrl_cmd);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_byte_ctrl_cmd_token1);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_byte_ctrl_cmd_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_case_ctrl_cmd_token1);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_charmap_ctrl_cmd_token1);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_code_ctrl_cmd);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_condes_ctrl_cmd_token1);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_constructor_ctrl_cmd_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 302},
  [2] = {.lex_state = 302},
  [3] = {.lex_state = 302},
  [4] = {.lex_state = 302},
  [5] = {.lex_state = 302},
  [6] = {.lex_state = 302},
  [7] = {.lex_state = 302},
  [8] = {.lex_state = 302},
  [9] = {.lex_state = 302},
  [10] = {.lex_state = 302},
  [11] = {.lex_state = 302},
  [12] = {.lex_state = 302},
  [13] = {.lex_state = 302},
  [14] = {.lex_state = 302},
  [15] = {.lex_state = 302},
  [16] = {.lex_state = 302},
  [17] = {.lex_state = 302},
  [18] = {.lex_state = 302},
  [19] = {.lex_state = 302},
  [20] = {.lex_state = 302},
  [21] = {.lex_state = 302},
  [22] = {.lex_state = 302},
  [23] = {.lex_state = 302},
  [24] = {.lex_state = 302},
  [25] = {.lex_state = 302},
  [26] = {.lex_state = 302},
  [27] = {.lex_state = 302},
  [28] = {.lex_state = 302},
  [29] = {.lex_state = 302},
  [30] = {.lex_state = 302},
  [31] = {.lex_state = 302},
  [32] = {.lex_state = 302},
  [33] = {.lex_state = 302},
  [34] = {.lex_state = 302},
  [35] = {.lex_state = 302},
  [36] = {.lex_state = 302},
  [37] = {.lex_state = 302},
  [38] = {.lex_state = 302},
  [39] = {.lex_state = 302},
  [40] = {.lex_state = 302},
  [41] = {.lex_state = 302},
  [42] = {.lex_state = 302},
  [43] = {.lex_state = 302},
  [44] = {.lex_state = 302},
  [45] = {.lex_state = 302},
  [46] = {.lex_state = 302},
  [47] = {.lex_state = 302},
  [48] = {.lex_state = 302},
  [49] = {.lex_state = 302},
  [50] = {.lex_state = 302},
  [51] = {.lex_state = 302},
  [52] = {.lex_state = 302},
  [53] = {.lex_state = 302},
  [54] = {.lex_state = 302},
  [55] = {.lex_state = 302},
  [56] = {.lex_state = 302},
  [57] = {.lex_state = 302},
  [58] = {.lex_state = 302},
  [59] = {.lex_state = 302},
  [60] = {.lex_state = 302},
  [61] = {.lex_state = 302},
  [62] = {.lex_state = 302},
  [63] = {.lex_state = 302},
  [64] = {.lex_state = 302},
  [65] = {.lex_state = 302},
  [66] = {.lex_state = 302},
  [67] = {.lex_state = 302},
  [68] = {.lex_state = 302},
  [69] = {.lex_state = 302},
  [70] = {.lex_state = 302},
  [71] = {.lex_state = 302},
  [72] = {.lex_state = 302},
  [73] = {.lex_state = 302},
  [74] = {.lex_state = 302},
  [75] = {.lex_state = 302},
  [76] = {.lex_state = 302},
  [77] = {.lex_state = 302},
  [78] = {.lex_state = 302},
  [79] = {.lex_state = 302},
  [80] = {.lex_state = 302},
  [81] = {.lex_state = 302},
  [82] = {.lex_state = 302},
  [83] = {.lex_state = 302},
  [84] = {.lex_state = 302},
  [85] = {.lex_state = 302},
  [86] = {.lex_state = 302},
  [87] = {.lex_state = 302},
  [88] = {.lex_state = 302},
  [89] = {.lex_state = 2},
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
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 302},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 14},
  [171] = {.lex_state = 302},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 8},
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
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_ca65] = STATE(174),
    [sym_inst] = STATE(44),
    [sym_impl_addr_inst] = STATE(87),
    [sym_acc_addr_inst] = STATE(87),
    [sym_imm_addr_inst] = STATE(87),
    [sym_abs_addr_inst] = STATE(87),
    [sym_zp_addr_inst] = STATE(87),
    [sym_abs_x_addr_inst] = STATE(87),
    [sym_abs_y_addr_inst] = STATE(87),
    [sym_zp_x_addr_inst] = STATE(87),
    [sym_zp_y_addr_inst] = STATE(87),
    [sym_ind_addr_inst] = STATE(87),
    [sym_ind_x_addr_inst] = STATE(87),
    [sym_ind_y_addr_inst] = STATE(87),
    [sym_rel_addr_inst] = STATE(87),
    [sym_ctrl_cmd] = STATE(44),
    [sym_addr_ctrl_cmd] = STATE(73),
    [sym_align_ctrl_cmd] = STATE(73),
    [sym_asciiz_ctrl_cmd] = STATE(73),
    [sym_assert_ctrl_cmd] = STATE(73),
    [sym_autoimport_ctrl_cmd] = STATE(73),
    [sym_bankbytes_ctrl_cmd] = STATE(73),
    [sym_byte_ctrl_cmd] = STATE(73),
    [sym_case_ctrl_cmd] = STATE(73),
    [sym_charmap_ctrl_cmd] = STATE(73),
    [sym_condes_ctrl_cmd] = STATE(73),
    [sym_constructor_ctrl_cmd] = STATE(73),
    [aux_sym_ca65_repeat1] = STATE(44),
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
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(59),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(61),
    [anon_sym_COMMA] = ACTIONS(61),
    [anon_sym_RPAREN] = ACTIONS(61),
    [sym_adc_opcode] = ACTIONS(63),
    [sym_and_opcode] = ACTIONS(63),
    [sym_asl_opcode] = ACTIONS(63),
    [sym_bcc_opcode] = ACTIONS(63),
    [sym_bcs_opcode] = ACTIONS(63),
    [sym_beq_opcode] = ACTIONS(63),
    [sym_bit_opcode] = ACTIONS(63),
    [sym_bmi_opcode] = ACTIONS(63),
    [sym_bne_opcode] = ACTIONS(63),
    [sym_bpl_opcode] = ACTIONS(63),
    [sym_brk_opcode] = ACTIONS(63),
    [sym_bvc_opcode] = ACTIONS(63),
    [sym_bvs_opcode] = ACTIONS(63),
    [sym_clc_opcode] = ACTIONS(63),
    [sym_cld_opcode] = ACTIONS(63),
    [sym_cli_opcode] = ACTIONS(63),
    [sym_clv_opcode] = ACTIONS(63),
    [sym_cmp_opcode] = ACTIONS(63),
    [sym_cpx_opcode] = ACTIONS(63),
    [sym_cpy_opcode] = ACTIONS(63),
    [sym_dec_opcode] = ACTIONS(63),
    [sym_dex_opcode] = ACTIONS(63),
    [sym_dey_opcode] = ACTIONS(63),
    [sym_eor_opcode] = ACTIONS(63),
    [sym_inc_opcode] = ACTIONS(63),
    [sym_inx_opcode] = ACTIONS(63),
    [sym_iny_opcode] = ACTIONS(63),
    [sym_jmp_opcode] = ACTIONS(63),
    [sym_jsr_opcode] = ACTIONS(63),
    [sym_lda_opcode] = ACTIONS(63),
    [sym_ldx_opcode] = ACTIONS(63),
    [sym_ldy_opcode] = ACTIONS(63),
    [sym_lsr_opcode] = ACTIONS(63),
    [sym_nop_opcode] = ACTIONS(63),
    [sym_ora_opcode] = ACTIONS(63),
    [sym_pha_opcode] = ACTIONS(63),
    [sym_php_opcode] = ACTIONS(63),
    [sym_pla_opcode] = ACTIONS(63),
    [sym_plp_opcode] = ACTIONS(63),
    [sym_rol_opcode] = ACTIONS(63),
    [sym_ror_opcode] = ACTIONS(63),
    [sym_rti_opcode] = ACTIONS(63),
    [sym_rts_opcode] = ACTIONS(63),
    [sym_sbc_opcode] = ACTIONS(63),
    [sym_sec_opcode] = ACTIONS(63),
    [sym_sed_opcode] = ACTIONS(63),
    [sym_sei_opcode] = ACTIONS(63),
    [sym_sta_opcode] = ACTIONS(63),
    [sym_stx_opcode] = ACTIONS(63),
    [sym_sty_opcode] = ACTIONS(63),
    [sym_tax_opcode] = ACTIONS(63),
    [sym_tay_opcode] = ACTIONS(63),
    [sym_tsx_opcode] = ACTIONS(63),
    [sym_txa_opcode] = ACTIONS(63),
    [sym_tcs_opcode] = ACTIONS(63),
    [sym_tya_opcode] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_DOTMOD] = ACTIONS(61),
    [anon_sym_DOTBITAND] = ACTIONS(61),
    [anon_sym_AMP] = ACTIONS(63),
    [anon_sym_DOTBITXOR] = ACTIONS(61),
    [anon_sym_DOTSHL] = ACTIONS(61),
    [anon_sym_LT_LT] = ACTIONS(61),
    [anon_sym_DOTSHR] = ACTIONS(61),
    [anon_sym_GT_GT] = ACTIONS(61),
    [anon_sym_DOTBITOR] = ACTIONS(61),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_EQ] = ACTIONS(61),
    [anon_sym_LT_GT] = ACTIONS(61),
    [anon_sym_LT_EQ] = ACTIONS(61),
    [anon_sym_GT_EQ] = ACTIONS(61),
    [anon_sym_DOTAND] = ACTIONS(61),
    [anon_sym_AMP_AMP] = ACTIONS(61),
    [anon_sym_DOTXOR] = ACTIONS(61),
    [anon_sym_DOTOR] = ACTIONS(61),
    [anon_sym_PIPE_PIPE] = ACTIONS(61),
    [sym_a16_ctrl_cmd] = ACTIONS(61),
    [sym_a8_ctrl_cmd] = ACTIONS(61),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(61),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(61),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(61),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(61),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(61),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(61),
    [sym_bss_ctrl_cmd] = ACTIONS(61),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(61),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(61),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(61),
    [sym_code_ctrl_cmd] = ACTIONS(61),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(61),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(61),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_RPAREN] = ACTIONS(65),
    [sym_adc_opcode] = ACTIONS(67),
    [sym_and_opcode] = ACTIONS(67),
    [sym_asl_opcode] = ACTIONS(67),
    [sym_bcc_opcode] = ACTIONS(67),
    [sym_bcs_opcode] = ACTIONS(67),
    [sym_beq_opcode] = ACTIONS(67),
    [sym_bit_opcode] = ACTIONS(67),
    [sym_bmi_opcode] = ACTIONS(67),
    [sym_bne_opcode] = ACTIONS(67),
    [sym_bpl_opcode] = ACTIONS(67),
    [sym_brk_opcode] = ACTIONS(67),
    [sym_bvc_opcode] = ACTIONS(67),
    [sym_bvs_opcode] = ACTIONS(67),
    [sym_clc_opcode] = ACTIONS(67),
    [sym_cld_opcode] = ACTIONS(67),
    [sym_cli_opcode] = ACTIONS(67),
    [sym_clv_opcode] = ACTIONS(67),
    [sym_cmp_opcode] = ACTIONS(67),
    [sym_cpx_opcode] = ACTIONS(67),
    [sym_cpy_opcode] = ACTIONS(67),
    [sym_dec_opcode] = ACTIONS(67),
    [sym_dex_opcode] = ACTIONS(67),
    [sym_dey_opcode] = ACTIONS(67),
    [sym_eor_opcode] = ACTIONS(67),
    [sym_inc_opcode] = ACTIONS(67),
    [sym_inx_opcode] = ACTIONS(67),
    [sym_iny_opcode] = ACTIONS(67),
    [sym_jmp_opcode] = ACTIONS(67),
    [sym_jsr_opcode] = ACTIONS(67),
    [sym_lda_opcode] = ACTIONS(67),
    [sym_ldx_opcode] = ACTIONS(67),
    [sym_ldy_opcode] = ACTIONS(67),
    [sym_lsr_opcode] = ACTIONS(67),
    [sym_nop_opcode] = ACTIONS(67),
    [sym_ora_opcode] = ACTIONS(67),
    [sym_pha_opcode] = ACTIONS(67),
    [sym_php_opcode] = ACTIONS(67),
    [sym_pla_opcode] = ACTIONS(67),
    [sym_plp_opcode] = ACTIONS(67),
    [sym_rol_opcode] = ACTIONS(67),
    [sym_ror_opcode] = ACTIONS(67),
    [sym_rti_opcode] = ACTIONS(67),
    [sym_rts_opcode] = ACTIONS(67),
    [sym_sbc_opcode] = ACTIONS(67),
    [sym_sec_opcode] = ACTIONS(67),
    [sym_sed_opcode] = ACTIONS(67),
    [sym_sei_opcode] = ACTIONS(67),
    [sym_sta_opcode] = ACTIONS(67),
    [sym_stx_opcode] = ACTIONS(67),
    [sym_sty_opcode] = ACTIONS(67),
    [sym_tax_opcode] = ACTIONS(67),
    [sym_tay_opcode] = ACTIONS(67),
    [sym_tsx_opcode] = ACTIONS(67),
    [sym_txa_opcode] = ACTIONS(67),
    [sym_tcs_opcode] = ACTIONS(67),
    [sym_tya_opcode] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(67),
    [anon_sym_CARET] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DOTMOD] = ACTIONS(65),
    [anon_sym_DOTBITAND] = ACTIONS(65),
    [anon_sym_AMP] = ACTIONS(67),
    [anon_sym_DOTBITXOR] = ACTIONS(65),
    [anon_sym_DOTSHL] = ACTIONS(65),
    [anon_sym_LT_LT] = ACTIONS(65),
    [anon_sym_DOTSHR] = ACTIONS(65),
    [anon_sym_GT_GT] = ACTIONS(65),
    [anon_sym_DOTBITOR] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [anon_sym_LT_GT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_GT_EQ] = ACTIONS(65),
    [anon_sym_DOTAND] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_DOTXOR] = ACTIONS(65),
    [anon_sym_DOTOR] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [sym_a16_ctrl_cmd] = ACTIONS(65),
    [sym_a8_ctrl_cmd] = ACTIONS(65),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(65),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(65),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(65),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(65),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(65),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(65),
    [sym_bss_ctrl_cmd] = ACTIONS(65),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(65),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(65),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(65),
    [sym_code_ctrl_cmd] = ACTIONS(65),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(65),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(65),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(69),
    [sym_adc_opcode] = ACTIONS(71),
    [sym_and_opcode] = ACTIONS(71),
    [sym_asl_opcode] = ACTIONS(71),
    [sym_bcc_opcode] = ACTIONS(71),
    [sym_bcs_opcode] = ACTIONS(71),
    [sym_beq_opcode] = ACTIONS(71),
    [sym_bit_opcode] = ACTIONS(71),
    [sym_bmi_opcode] = ACTIONS(71),
    [sym_bne_opcode] = ACTIONS(71),
    [sym_bpl_opcode] = ACTIONS(71),
    [sym_brk_opcode] = ACTIONS(71),
    [sym_bvc_opcode] = ACTIONS(71),
    [sym_bvs_opcode] = ACTIONS(71),
    [sym_clc_opcode] = ACTIONS(71),
    [sym_cld_opcode] = ACTIONS(71),
    [sym_cli_opcode] = ACTIONS(71),
    [sym_clv_opcode] = ACTIONS(71),
    [sym_cmp_opcode] = ACTIONS(71),
    [sym_cpx_opcode] = ACTIONS(71),
    [sym_cpy_opcode] = ACTIONS(71),
    [sym_dec_opcode] = ACTIONS(71),
    [sym_dex_opcode] = ACTIONS(71),
    [sym_dey_opcode] = ACTIONS(71),
    [sym_eor_opcode] = ACTIONS(71),
    [sym_inc_opcode] = ACTIONS(71),
    [sym_inx_opcode] = ACTIONS(71),
    [sym_iny_opcode] = ACTIONS(71),
    [sym_jmp_opcode] = ACTIONS(71),
    [sym_jsr_opcode] = ACTIONS(71),
    [sym_lda_opcode] = ACTIONS(71),
    [sym_ldx_opcode] = ACTIONS(71),
    [sym_ldy_opcode] = ACTIONS(71),
    [sym_lsr_opcode] = ACTIONS(71),
    [sym_nop_opcode] = ACTIONS(71),
    [sym_ora_opcode] = ACTIONS(71),
    [sym_pha_opcode] = ACTIONS(71),
    [sym_php_opcode] = ACTIONS(71),
    [sym_pla_opcode] = ACTIONS(71),
    [sym_plp_opcode] = ACTIONS(71),
    [sym_rol_opcode] = ACTIONS(71),
    [sym_ror_opcode] = ACTIONS(71),
    [sym_rti_opcode] = ACTIONS(71),
    [sym_rts_opcode] = ACTIONS(71),
    [sym_sbc_opcode] = ACTIONS(71),
    [sym_sec_opcode] = ACTIONS(71),
    [sym_sed_opcode] = ACTIONS(71),
    [sym_sei_opcode] = ACTIONS(71),
    [sym_sta_opcode] = ACTIONS(71),
    [sym_stx_opcode] = ACTIONS(71),
    [sym_sty_opcode] = ACTIONS(71),
    [sym_tax_opcode] = ACTIONS(71),
    [sym_tay_opcode] = ACTIONS(71),
    [sym_tsx_opcode] = ACTIONS(71),
    [sym_txa_opcode] = ACTIONS(71),
    [sym_tcs_opcode] = ACTIONS(71),
    [sym_tya_opcode] = ACTIONS(71),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_DOTMOD] = ACTIONS(87),
    [anon_sym_DOTBITAND] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(91),
    [anon_sym_DOTBITXOR] = ACTIONS(81),
    [anon_sym_DOTSHL] = ACTIONS(93),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_DOTSHR] = ACTIONS(95),
    [anon_sym_GT_GT] = ACTIONS(95),
    [anon_sym_DOTBITOR] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_EQ] = ACTIONS(101),
    [anon_sym_LT_GT] = ACTIONS(103),
    [anon_sym_LT_EQ] = ACTIONS(105),
    [anon_sym_GT_EQ] = ACTIONS(107),
    [anon_sym_DOTAND] = ACTIONS(69),
    [anon_sym_AMP_AMP] = ACTIONS(69),
    [anon_sym_DOTXOR] = ACTIONS(69),
    [anon_sym_DOTOR] = ACTIONS(69),
    [anon_sym_PIPE_PIPE] = ACTIONS(69),
    [sym_a16_ctrl_cmd] = ACTIONS(69),
    [sym_a8_ctrl_cmd] = ACTIONS(69),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(69),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(69),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(69),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(69),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(69),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(69),
    [sym_bss_ctrl_cmd] = ACTIONS(69),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(69),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(69),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(69),
    [sym_code_ctrl_cmd] = ACTIONS(69),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(69),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(69),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(109),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(109),
    [sym_adc_opcode] = ACTIONS(111),
    [sym_and_opcode] = ACTIONS(111),
    [sym_asl_opcode] = ACTIONS(111),
    [sym_bcc_opcode] = ACTIONS(111),
    [sym_bcs_opcode] = ACTIONS(111),
    [sym_beq_opcode] = ACTIONS(111),
    [sym_bit_opcode] = ACTIONS(111),
    [sym_bmi_opcode] = ACTIONS(111),
    [sym_bne_opcode] = ACTIONS(111),
    [sym_bpl_opcode] = ACTIONS(111),
    [sym_brk_opcode] = ACTIONS(111),
    [sym_bvc_opcode] = ACTIONS(111),
    [sym_bvs_opcode] = ACTIONS(111),
    [sym_clc_opcode] = ACTIONS(111),
    [sym_cld_opcode] = ACTIONS(111),
    [sym_cli_opcode] = ACTIONS(111),
    [sym_clv_opcode] = ACTIONS(111),
    [sym_cmp_opcode] = ACTIONS(111),
    [sym_cpx_opcode] = ACTIONS(111),
    [sym_cpy_opcode] = ACTIONS(111),
    [sym_dec_opcode] = ACTIONS(111),
    [sym_dex_opcode] = ACTIONS(111),
    [sym_dey_opcode] = ACTIONS(111),
    [sym_eor_opcode] = ACTIONS(111),
    [sym_inc_opcode] = ACTIONS(111),
    [sym_inx_opcode] = ACTIONS(111),
    [sym_iny_opcode] = ACTIONS(111),
    [sym_jmp_opcode] = ACTIONS(111),
    [sym_jsr_opcode] = ACTIONS(111),
    [sym_lda_opcode] = ACTIONS(111),
    [sym_ldx_opcode] = ACTIONS(111),
    [sym_ldy_opcode] = ACTIONS(111),
    [sym_lsr_opcode] = ACTIONS(111),
    [sym_nop_opcode] = ACTIONS(111),
    [sym_ora_opcode] = ACTIONS(111),
    [sym_pha_opcode] = ACTIONS(111),
    [sym_php_opcode] = ACTIONS(111),
    [sym_pla_opcode] = ACTIONS(111),
    [sym_plp_opcode] = ACTIONS(111),
    [sym_rol_opcode] = ACTIONS(111),
    [sym_ror_opcode] = ACTIONS(111),
    [sym_rti_opcode] = ACTIONS(111),
    [sym_rts_opcode] = ACTIONS(111),
    [sym_sbc_opcode] = ACTIONS(111),
    [sym_sec_opcode] = ACTIONS(111),
    [sym_sed_opcode] = ACTIONS(111),
    [sym_sei_opcode] = ACTIONS(111),
    [sym_sta_opcode] = ACTIONS(111),
    [sym_stx_opcode] = ACTIONS(111),
    [sym_sty_opcode] = ACTIONS(111),
    [sym_tax_opcode] = ACTIONS(111),
    [sym_tay_opcode] = ACTIONS(111),
    [sym_tsx_opcode] = ACTIONS(111),
    [sym_txa_opcode] = ACTIONS(111),
    [sym_tcs_opcode] = ACTIONS(111),
    [sym_tya_opcode] = ACTIONS(111),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(111),
    [anon_sym_GT] = ACTIONS(111),
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_DOTMOD] = ACTIONS(87),
    [anon_sym_DOTBITAND] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(91),
    [anon_sym_DOTBITXOR] = ACTIONS(81),
    [anon_sym_DOTSHL] = ACTIONS(93),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_DOTSHR] = ACTIONS(95),
    [anon_sym_GT_GT] = ACTIONS(95),
    [anon_sym_DOTBITOR] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_LT_GT] = ACTIONS(109),
    [anon_sym_LT_EQ] = ACTIONS(109),
    [anon_sym_GT_EQ] = ACTIONS(109),
    [anon_sym_DOTAND] = ACTIONS(109),
    [anon_sym_AMP_AMP] = ACTIONS(109),
    [anon_sym_DOTXOR] = ACTIONS(109),
    [anon_sym_DOTOR] = ACTIONS(109),
    [anon_sym_PIPE_PIPE] = ACTIONS(109),
    [sym_a16_ctrl_cmd] = ACTIONS(109),
    [sym_a8_ctrl_cmd] = ACTIONS(109),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(109),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(109),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(109),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(109),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(109),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(109),
    [sym_bss_ctrl_cmd] = ACTIONS(109),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(109),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(109),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(109),
    [sym_code_ctrl_cmd] = ACTIONS(109),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(109),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(109),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(113),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(113),
    [anon_sym_COMMA] = ACTIONS(113),
    [anon_sym_RPAREN] = ACTIONS(113),
    [sym_adc_opcode] = ACTIONS(116),
    [sym_and_opcode] = ACTIONS(116),
    [sym_asl_opcode] = ACTIONS(116),
    [sym_bcc_opcode] = ACTIONS(116),
    [sym_bcs_opcode] = ACTIONS(116),
    [sym_beq_opcode] = ACTIONS(116),
    [sym_bit_opcode] = ACTIONS(116),
    [sym_bmi_opcode] = ACTIONS(116),
    [sym_bne_opcode] = ACTIONS(116),
    [sym_bpl_opcode] = ACTIONS(116),
    [sym_brk_opcode] = ACTIONS(116),
    [sym_bvc_opcode] = ACTIONS(116),
    [sym_bvs_opcode] = ACTIONS(116),
    [sym_clc_opcode] = ACTIONS(116),
    [sym_cld_opcode] = ACTIONS(116),
    [sym_cli_opcode] = ACTIONS(116),
    [sym_clv_opcode] = ACTIONS(116),
    [sym_cmp_opcode] = ACTIONS(116),
    [sym_cpx_opcode] = ACTIONS(116),
    [sym_cpy_opcode] = ACTIONS(116),
    [sym_dec_opcode] = ACTIONS(116),
    [sym_dex_opcode] = ACTIONS(116),
    [sym_dey_opcode] = ACTIONS(116),
    [sym_eor_opcode] = ACTIONS(116),
    [sym_inc_opcode] = ACTIONS(116),
    [sym_inx_opcode] = ACTIONS(116),
    [sym_iny_opcode] = ACTIONS(116),
    [sym_jmp_opcode] = ACTIONS(116),
    [sym_jsr_opcode] = ACTIONS(116),
    [sym_lda_opcode] = ACTIONS(116),
    [sym_ldx_opcode] = ACTIONS(116),
    [sym_ldy_opcode] = ACTIONS(116),
    [sym_lsr_opcode] = ACTIONS(116),
    [sym_nop_opcode] = ACTIONS(116),
    [sym_ora_opcode] = ACTIONS(116),
    [sym_pha_opcode] = ACTIONS(116),
    [sym_php_opcode] = ACTIONS(116),
    [sym_pla_opcode] = ACTIONS(116),
    [sym_plp_opcode] = ACTIONS(116),
    [sym_rol_opcode] = ACTIONS(116),
    [sym_ror_opcode] = ACTIONS(116),
    [sym_rti_opcode] = ACTIONS(116),
    [sym_rts_opcode] = ACTIONS(116),
    [sym_sbc_opcode] = ACTIONS(116),
    [sym_sec_opcode] = ACTIONS(116),
    [sym_sed_opcode] = ACTIONS(116),
    [sym_sei_opcode] = ACTIONS(116),
    [sym_sta_opcode] = ACTIONS(116),
    [sym_stx_opcode] = ACTIONS(116),
    [sym_sty_opcode] = ACTIONS(116),
    [sym_tax_opcode] = ACTIONS(116),
    [sym_tay_opcode] = ACTIONS(116),
    [sym_tsx_opcode] = ACTIONS(116),
    [sym_txa_opcode] = ACTIONS(116),
    [sym_tcs_opcode] = ACTIONS(116),
    [sym_tya_opcode] = ACTIONS(116),
    [anon_sym_PLUS] = ACTIONS(113),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(116),
    [anon_sym_GT] = ACTIONS(116),
    [anon_sym_CARET] = ACTIONS(113),
    [anon_sym_STAR] = ACTIONS(113),
    [anon_sym_SLASH] = ACTIONS(113),
    [anon_sym_DOTMOD] = ACTIONS(113),
    [anon_sym_DOTBITAND] = ACTIONS(113),
    [anon_sym_AMP] = ACTIONS(116),
    [anon_sym_DOTBITXOR] = ACTIONS(113),
    [anon_sym_DOTSHL] = ACTIONS(113),
    [anon_sym_LT_LT] = ACTIONS(113),
    [anon_sym_DOTSHR] = ACTIONS(113),
    [anon_sym_GT_GT] = ACTIONS(113),
    [anon_sym_DOTBITOR] = ACTIONS(113),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(113),
    [anon_sym_LT_GT] = ACTIONS(113),
    [anon_sym_LT_EQ] = ACTIONS(113),
    [anon_sym_GT_EQ] = ACTIONS(113),
    [anon_sym_DOTAND] = ACTIONS(113),
    [anon_sym_AMP_AMP] = ACTIONS(113),
    [anon_sym_DOTXOR] = ACTIONS(113),
    [anon_sym_DOTOR] = ACTIONS(113),
    [anon_sym_PIPE_PIPE] = ACTIONS(113),
    [sym_a16_ctrl_cmd] = ACTIONS(113),
    [sym_a8_ctrl_cmd] = ACTIONS(113),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(113),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(113),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(113),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(113),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(113),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(113),
    [sym_bss_ctrl_cmd] = ACTIONS(113),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(113),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(113),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(113),
    [sym_code_ctrl_cmd] = ACTIONS(113),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(113),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(113),
  },
  [7] = {
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
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(121),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_DOTMOD] = ACTIONS(87),
    [anon_sym_DOTBITAND] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(91),
    [anon_sym_DOTBITXOR] = ACTIONS(81),
    [anon_sym_DOTSHL] = ACTIONS(93),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_DOTSHR] = ACTIONS(95),
    [anon_sym_GT_GT] = ACTIONS(95),
    [anon_sym_DOTBITOR] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(99),
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
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(119),
  },
  [8] = {
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
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(125),
    [anon_sym_GT] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_DOTMOD] = ACTIONS(87),
    [anon_sym_DOTBITAND] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(91),
    [anon_sym_DOTBITXOR] = ACTIONS(81),
    [anon_sym_DOTSHL] = ACTIONS(93),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_DOTSHR] = ACTIONS(95),
    [anon_sym_GT_GT] = ACTIONS(95),
    [anon_sym_DOTBITOR] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(99),
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
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(123),
  },
  [9] = {
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
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(129),
    [anon_sym_GT] = ACTIONS(129),
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_DOTMOD] = ACTIONS(87),
    [anon_sym_DOTBITAND] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(91),
    [anon_sym_DOTBITXOR] = ACTIONS(81),
    [anon_sym_DOTSHL] = ACTIONS(93),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_DOTSHR] = ACTIONS(95),
    [anon_sym_GT_GT] = ACTIONS(95),
    [anon_sym_DOTBITOR] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(99),
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
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(127),
  },
  [10] = {
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
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_DOTMOD] = ACTIONS(87),
    [anon_sym_DOTBITAND] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(91),
    [anon_sym_DOTBITXOR] = ACTIONS(81),
    [anon_sym_DOTSHL] = ACTIONS(93),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_DOTSHR] = ACTIONS(95),
    [anon_sym_GT_GT] = ACTIONS(95),
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
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(131),
  },
  [11] = {
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
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(135),
  },
  [12] = {
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
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(139),
  },
  [13] = {
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
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(143),
  },
  [14] = {
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
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(147),
  },
  [15] = {
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
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(151),
  },
  [16] = {
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
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(155),
  },
  [17] = {
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
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(159),
  },
  [18] = {
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
    [anon_sym_PLUS] = ACTIONS(163),
    [anon_sym_DASH] = ACTIONS(163),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_CARET] = ACTIONS(163),
    [anon_sym_STAR] = ACTIONS(163),
    [anon_sym_SLASH] = ACTIONS(163),
    [anon_sym_DOTMOD] = ACTIONS(163),
    [anon_sym_DOTBITAND] = ACTIONS(163),
    [anon_sym_AMP] = ACTIONS(165),
    [anon_sym_DOTBITXOR] = ACTIONS(163),
    [anon_sym_DOTSHL] = ACTIONS(163),
    [anon_sym_LT_LT] = ACTIONS(163),
    [anon_sym_DOTSHR] = ACTIONS(163),
    [anon_sym_GT_GT] = ACTIONS(163),
    [anon_sym_DOTBITOR] = ACTIONS(163),
    [anon_sym_PIPE] = ACTIONS(165),
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
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(163),
  },
  [19] = {
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
    [anon_sym_PLUS] = ACTIONS(167),
    [anon_sym_DASH] = ACTIONS(167),
    [anon_sym_LT] = ACTIONS(169),
    [anon_sym_GT] = ACTIONS(169),
    [anon_sym_CARET] = ACTIONS(167),
    [anon_sym_STAR] = ACTIONS(167),
    [anon_sym_SLASH] = ACTIONS(167),
    [anon_sym_DOTMOD] = ACTIONS(167),
    [anon_sym_DOTBITAND] = ACTIONS(167),
    [anon_sym_AMP] = ACTIONS(169),
    [anon_sym_DOTBITXOR] = ACTIONS(167),
    [anon_sym_DOTSHL] = ACTIONS(167),
    [anon_sym_LT_LT] = ACTIONS(167),
    [anon_sym_DOTSHR] = ACTIONS(167),
    [anon_sym_GT_GT] = ACTIONS(167),
    [anon_sym_DOTBITOR] = ACTIONS(167),
    [anon_sym_PIPE] = ACTIONS(169),
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
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(167),
  },
  [20] = {
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
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(173),
    [anon_sym_GT] = ACTIONS(173),
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_DOTMOD] = ACTIONS(87),
    [anon_sym_DOTBITAND] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(91),
    [anon_sym_DOTBITXOR] = ACTIONS(81),
    [anon_sym_DOTSHL] = ACTIONS(93),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_DOTSHR] = ACTIONS(95),
    [anon_sym_GT_GT] = ACTIONS(95),
    [anon_sym_DOTBITOR] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(99),
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
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(171),
  },
  [21] = {
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
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(177),
    [anon_sym_GT] = ACTIONS(177),
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_DOTMOD] = ACTIONS(87),
    [anon_sym_DOTBITAND] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(91),
    [anon_sym_DOTBITXOR] = ACTIONS(81),
    [anon_sym_DOTSHL] = ACTIONS(93),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_DOTSHR] = ACTIONS(95),
    [anon_sym_GT_GT] = ACTIONS(95),
    [anon_sym_DOTBITOR] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(99),
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
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(175),
  },
  [22] = {
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
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_DOTMOD] = ACTIONS(87),
    [anon_sym_DOTBITAND] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(91),
    [anon_sym_DOTBITXOR] = ACTIONS(81),
    [anon_sym_DOTSHL] = ACTIONS(93),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_DOTSHR] = ACTIONS(95),
    [anon_sym_GT_GT] = ACTIONS(95),
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
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(179),
  },
  [23] = {
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
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_DOTMOD] = ACTIONS(87),
    [anon_sym_DOTBITAND] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(91),
    [anon_sym_DOTBITXOR] = ACTIONS(81),
    [anon_sym_DOTSHL] = ACTIONS(93),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_DOTSHR] = ACTIONS(95),
    [anon_sym_GT_GT] = ACTIONS(95),
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
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(183),
  },
  [24] = {
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
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_DOTMOD] = ACTIONS(87),
    [anon_sym_DOTBITAND] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(91),
    [anon_sym_DOTBITXOR] = ACTIONS(81),
    [anon_sym_DOTSHL] = ACTIONS(93),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_DOTSHR] = ACTIONS(95),
    [anon_sym_GT_GT] = ACTIONS(95),
    [anon_sym_DOTBITOR] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_EQ] = ACTIONS(101),
    [anon_sym_LT_GT] = ACTIONS(103),
    [anon_sym_LT_EQ] = ACTIONS(105),
    [anon_sym_GT_EQ] = ACTIONS(107),
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
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(187),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(191),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(191),
    [sym_adc_opcode] = ACTIONS(193),
    [sym_and_opcode] = ACTIONS(193),
    [sym_asl_opcode] = ACTIONS(193),
    [sym_bcc_opcode] = ACTIONS(193),
    [sym_bcs_opcode] = ACTIONS(193),
    [sym_beq_opcode] = ACTIONS(193),
    [sym_bit_opcode] = ACTIONS(193),
    [sym_bmi_opcode] = ACTIONS(193),
    [sym_bne_opcode] = ACTIONS(193),
    [sym_bpl_opcode] = ACTIONS(193),
    [sym_brk_opcode] = ACTIONS(193),
    [sym_bvc_opcode] = ACTIONS(193),
    [sym_bvs_opcode] = ACTIONS(193),
    [sym_clc_opcode] = ACTIONS(193),
    [sym_cld_opcode] = ACTIONS(193),
    [sym_cli_opcode] = ACTIONS(193),
    [sym_clv_opcode] = ACTIONS(193),
    [sym_cmp_opcode] = ACTIONS(193),
    [sym_cpx_opcode] = ACTIONS(193),
    [sym_cpy_opcode] = ACTIONS(193),
    [sym_dec_opcode] = ACTIONS(193),
    [sym_dex_opcode] = ACTIONS(193),
    [sym_dey_opcode] = ACTIONS(193),
    [sym_eor_opcode] = ACTIONS(193),
    [sym_inc_opcode] = ACTIONS(193),
    [sym_inx_opcode] = ACTIONS(193),
    [sym_iny_opcode] = ACTIONS(193),
    [sym_jmp_opcode] = ACTIONS(193),
    [sym_jsr_opcode] = ACTIONS(193),
    [sym_lda_opcode] = ACTIONS(193),
    [sym_ldx_opcode] = ACTIONS(193),
    [sym_ldy_opcode] = ACTIONS(193),
    [sym_lsr_opcode] = ACTIONS(193),
    [sym_nop_opcode] = ACTIONS(193),
    [sym_ora_opcode] = ACTIONS(193),
    [sym_pha_opcode] = ACTIONS(193),
    [sym_php_opcode] = ACTIONS(193),
    [sym_pla_opcode] = ACTIONS(193),
    [sym_plp_opcode] = ACTIONS(193),
    [sym_rol_opcode] = ACTIONS(193),
    [sym_ror_opcode] = ACTIONS(193),
    [sym_rti_opcode] = ACTIONS(193),
    [sym_rts_opcode] = ACTIONS(193),
    [sym_sbc_opcode] = ACTIONS(193),
    [sym_sec_opcode] = ACTIONS(193),
    [sym_sed_opcode] = ACTIONS(193),
    [sym_sei_opcode] = ACTIONS(193),
    [sym_sta_opcode] = ACTIONS(193),
    [sym_stx_opcode] = ACTIONS(193),
    [sym_sty_opcode] = ACTIONS(193),
    [sym_tax_opcode] = ACTIONS(193),
    [sym_tay_opcode] = ACTIONS(193),
    [sym_tsx_opcode] = ACTIONS(193),
    [sym_txa_opcode] = ACTIONS(193),
    [sym_tcs_opcode] = ACTIONS(193),
    [sym_tya_opcode] = ACTIONS(193),
    [anon_sym_PLUS] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(193),
    [anon_sym_GT] = ACTIONS(193),
    [anon_sym_CARET] = ACTIONS(191),
    [anon_sym_STAR] = ACTIONS(191),
    [anon_sym_SLASH] = ACTIONS(191),
    [anon_sym_DOTMOD] = ACTIONS(191),
    [anon_sym_DOTBITAND] = ACTIONS(191),
    [anon_sym_AMP] = ACTIONS(193),
    [anon_sym_DOTBITXOR] = ACTIONS(191),
    [anon_sym_DOTSHL] = ACTIONS(191),
    [anon_sym_LT_LT] = ACTIONS(191),
    [anon_sym_DOTSHR] = ACTIONS(191),
    [anon_sym_GT_GT] = ACTIONS(191),
    [anon_sym_DOTBITOR] = ACTIONS(191),
    [anon_sym_PIPE] = ACTIONS(193),
    [anon_sym_EQ] = ACTIONS(191),
    [anon_sym_LT_GT] = ACTIONS(191),
    [anon_sym_LT_EQ] = ACTIONS(191),
    [anon_sym_GT_EQ] = ACTIONS(191),
    [anon_sym_DOTAND] = ACTIONS(191),
    [anon_sym_AMP_AMP] = ACTIONS(191),
    [anon_sym_DOTXOR] = ACTIONS(191),
    [anon_sym_DOTOR] = ACTIONS(191),
    [anon_sym_PIPE_PIPE] = ACTIONS(191),
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
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(191),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(195),
    [anon_sym_COMMA] = ACTIONS(195),
    [anon_sym_RPAREN] = ACTIONS(195),
    [sym_adc_opcode] = ACTIONS(197),
    [sym_and_opcode] = ACTIONS(197),
    [sym_asl_opcode] = ACTIONS(197),
    [sym_bcc_opcode] = ACTIONS(197),
    [sym_bcs_opcode] = ACTIONS(197),
    [sym_beq_opcode] = ACTIONS(197),
    [sym_bit_opcode] = ACTIONS(197),
    [sym_bmi_opcode] = ACTIONS(197),
    [sym_bne_opcode] = ACTIONS(197),
    [sym_bpl_opcode] = ACTIONS(197),
    [sym_brk_opcode] = ACTIONS(197),
    [sym_bvc_opcode] = ACTIONS(197),
    [sym_bvs_opcode] = ACTIONS(197),
    [sym_clc_opcode] = ACTIONS(197),
    [sym_cld_opcode] = ACTIONS(197),
    [sym_cli_opcode] = ACTIONS(197),
    [sym_clv_opcode] = ACTIONS(197),
    [sym_cmp_opcode] = ACTIONS(197),
    [sym_cpx_opcode] = ACTIONS(197),
    [sym_cpy_opcode] = ACTIONS(197),
    [sym_dec_opcode] = ACTIONS(197),
    [sym_dex_opcode] = ACTIONS(197),
    [sym_dey_opcode] = ACTIONS(197),
    [sym_eor_opcode] = ACTIONS(197),
    [sym_inc_opcode] = ACTIONS(197),
    [sym_inx_opcode] = ACTIONS(197),
    [sym_iny_opcode] = ACTIONS(197),
    [sym_jmp_opcode] = ACTIONS(197),
    [sym_jsr_opcode] = ACTIONS(197),
    [sym_lda_opcode] = ACTIONS(197),
    [sym_ldx_opcode] = ACTIONS(197),
    [sym_ldy_opcode] = ACTIONS(197),
    [sym_lsr_opcode] = ACTIONS(197),
    [sym_nop_opcode] = ACTIONS(197),
    [sym_ora_opcode] = ACTIONS(197),
    [sym_pha_opcode] = ACTIONS(197),
    [sym_php_opcode] = ACTIONS(197),
    [sym_pla_opcode] = ACTIONS(197),
    [sym_plp_opcode] = ACTIONS(197),
    [sym_rol_opcode] = ACTIONS(197),
    [sym_ror_opcode] = ACTIONS(197),
    [sym_rti_opcode] = ACTIONS(197),
    [sym_rts_opcode] = ACTIONS(197),
    [sym_sbc_opcode] = ACTIONS(197),
    [sym_sec_opcode] = ACTIONS(197),
    [sym_sed_opcode] = ACTIONS(197),
    [sym_sei_opcode] = ACTIONS(197),
    [sym_sta_opcode] = ACTIONS(197),
    [sym_stx_opcode] = ACTIONS(197),
    [sym_sty_opcode] = ACTIONS(197),
    [sym_tax_opcode] = ACTIONS(197),
    [sym_tay_opcode] = ACTIONS(197),
    [sym_tsx_opcode] = ACTIONS(197),
    [sym_txa_opcode] = ACTIONS(197),
    [sym_tcs_opcode] = ACTIONS(197),
    [sym_tya_opcode] = ACTIONS(197),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_DOTMOD] = ACTIONS(87),
    [anon_sym_DOTBITAND] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(91),
    [anon_sym_DOTBITXOR] = ACTIONS(81),
    [anon_sym_DOTSHL] = ACTIONS(93),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_DOTSHR] = ACTIONS(95),
    [anon_sym_GT_GT] = ACTIONS(95),
    [anon_sym_DOTBITOR] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_EQ] = ACTIONS(101),
    [anon_sym_LT_GT] = ACTIONS(103),
    [anon_sym_LT_EQ] = ACTIONS(105),
    [anon_sym_GT_EQ] = ACTIONS(107),
    [anon_sym_DOTAND] = ACTIONS(199),
    [anon_sym_AMP_AMP] = ACTIONS(199),
    [anon_sym_DOTXOR] = ACTIONS(201),
    [anon_sym_DOTOR] = ACTIONS(195),
    [anon_sym_PIPE_PIPE] = ACTIONS(195),
    [sym_a16_ctrl_cmd] = ACTIONS(195),
    [sym_a8_ctrl_cmd] = ACTIONS(195),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(195),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(195),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(195),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(195),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(195),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(195),
    [sym_bss_ctrl_cmd] = ACTIONS(195),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(195),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(195),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(195),
    [sym_code_ctrl_cmd] = ACTIONS(195),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(195),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(195),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(203),
    [anon_sym_RPAREN] = ACTIONS(203),
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
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_DOTMOD] = ACTIONS(87),
    [anon_sym_DOTBITAND] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(91),
    [anon_sym_DOTBITXOR] = ACTIONS(81),
    [anon_sym_DOTSHL] = ACTIONS(93),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_DOTSHR] = ACTIONS(95),
    [anon_sym_GT_GT] = ACTIONS(95),
    [anon_sym_DOTBITOR] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_EQ] = ACTIONS(101),
    [anon_sym_LT_GT] = ACTIONS(103),
    [anon_sym_LT_EQ] = ACTIONS(105),
    [anon_sym_GT_EQ] = ACTIONS(107),
    [anon_sym_DOTAND] = ACTIONS(199),
    [anon_sym_AMP_AMP] = ACTIONS(199),
    [anon_sym_DOTXOR] = ACTIONS(201),
    [anon_sym_DOTOR] = ACTIONS(207),
    [anon_sym_PIPE_PIPE] = ACTIONS(207),
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
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(203),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(209),
    [anon_sym_COMMA] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(209),
    [sym_adc_opcode] = ACTIONS(211),
    [sym_and_opcode] = ACTIONS(211),
    [sym_asl_opcode] = ACTIONS(211),
    [sym_bcc_opcode] = ACTIONS(211),
    [sym_bcs_opcode] = ACTIONS(211),
    [sym_beq_opcode] = ACTIONS(211),
    [sym_bit_opcode] = ACTIONS(211),
    [sym_bmi_opcode] = ACTIONS(211),
    [sym_bne_opcode] = ACTIONS(211),
    [sym_bpl_opcode] = ACTIONS(211),
    [sym_brk_opcode] = ACTIONS(211),
    [sym_bvc_opcode] = ACTIONS(211),
    [sym_bvs_opcode] = ACTIONS(211),
    [sym_clc_opcode] = ACTIONS(211),
    [sym_cld_opcode] = ACTIONS(211),
    [sym_cli_opcode] = ACTIONS(211),
    [sym_clv_opcode] = ACTIONS(211),
    [sym_cmp_opcode] = ACTIONS(211),
    [sym_cpx_opcode] = ACTIONS(211),
    [sym_cpy_opcode] = ACTIONS(211),
    [sym_dec_opcode] = ACTIONS(211),
    [sym_dex_opcode] = ACTIONS(211),
    [sym_dey_opcode] = ACTIONS(211),
    [sym_eor_opcode] = ACTIONS(211),
    [sym_inc_opcode] = ACTIONS(211),
    [sym_inx_opcode] = ACTIONS(211),
    [sym_iny_opcode] = ACTIONS(211),
    [sym_jmp_opcode] = ACTIONS(211),
    [sym_jsr_opcode] = ACTIONS(211),
    [sym_lda_opcode] = ACTIONS(211),
    [sym_ldx_opcode] = ACTIONS(211),
    [sym_ldy_opcode] = ACTIONS(211),
    [sym_lsr_opcode] = ACTIONS(211),
    [sym_nop_opcode] = ACTIONS(211),
    [sym_ora_opcode] = ACTIONS(211),
    [sym_pha_opcode] = ACTIONS(211),
    [sym_php_opcode] = ACTIONS(211),
    [sym_pla_opcode] = ACTIONS(211),
    [sym_plp_opcode] = ACTIONS(211),
    [sym_rol_opcode] = ACTIONS(211),
    [sym_ror_opcode] = ACTIONS(211),
    [sym_rti_opcode] = ACTIONS(211),
    [sym_rts_opcode] = ACTIONS(211),
    [sym_sbc_opcode] = ACTIONS(211),
    [sym_sec_opcode] = ACTIONS(211),
    [sym_sed_opcode] = ACTIONS(211),
    [sym_sei_opcode] = ACTIONS(211),
    [sym_sta_opcode] = ACTIONS(211),
    [sym_stx_opcode] = ACTIONS(211),
    [sym_sty_opcode] = ACTIONS(211),
    [sym_tax_opcode] = ACTIONS(211),
    [sym_tay_opcode] = ACTIONS(211),
    [sym_tsx_opcode] = ACTIONS(211),
    [sym_txa_opcode] = ACTIONS(211),
    [sym_tcs_opcode] = ACTIONS(211),
    [sym_tya_opcode] = ACTIONS(211),
    [anon_sym_PLUS] = ACTIONS(209),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_LT] = ACTIONS(211),
    [anon_sym_GT] = ACTIONS(211),
    [anon_sym_CARET] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(209),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_DOTMOD] = ACTIONS(209),
    [anon_sym_DOTBITAND] = ACTIONS(209),
    [anon_sym_AMP] = ACTIONS(211),
    [anon_sym_DOTBITXOR] = ACTIONS(209),
    [anon_sym_DOTSHL] = ACTIONS(209),
    [anon_sym_LT_LT] = ACTIONS(209),
    [anon_sym_DOTSHR] = ACTIONS(209),
    [anon_sym_GT_GT] = ACTIONS(209),
    [anon_sym_DOTBITOR] = ACTIONS(209),
    [anon_sym_PIPE] = ACTIONS(211),
    [anon_sym_EQ] = ACTIONS(209),
    [anon_sym_LT_GT] = ACTIONS(209),
    [anon_sym_LT_EQ] = ACTIONS(209),
    [anon_sym_GT_EQ] = ACTIONS(209),
    [anon_sym_DOTAND] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(209),
    [anon_sym_DOTXOR] = ACTIONS(209),
    [anon_sym_DOTOR] = ACTIONS(209),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [sym_a16_ctrl_cmd] = ACTIONS(209),
    [sym_a8_ctrl_cmd] = ACTIONS(209),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(209),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(209),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(209),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(209),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(209),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(209),
    [sym_bss_ctrl_cmd] = ACTIONS(209),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(209),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(209),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(209),
    [sym_code_ctrl_cmd] = ACTIONS(209),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(209),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(209),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(213),
    [anon_sym_COMMA] = ACTIONS(213),
    [anon_sym_RPAREN] = ACTIONS(213),
    [sym_adc_opcode] = ACTIONS(215),
    [sym_and_opcode] = ACTIONS(215),
    [sym_asl_opcode] = ACTIONS(215),
    [sym_bcc_opcode] = ACTIONS(215),
    [sym_bcs_opcode] = ACTIONS(215),
    [sym_beq_opcode] = ACTIONS(215),
    [sym_bit_opcode] = ACTIONS(215),
    [sym_bmi_opcode] = ACTIONS(215),
    [sym_bne_opcode] = ACTIONS(215),
    [sym_bpl_opcode] = ACTIONS(215),
    [sym_brk_opcode] = ACTIONS(215),
    [sym_bvc_opcode] = ACTIONS(215),
    [sym_bvs_opcode] = ACTIONS(215),
    [sym_clc_opcode] = ACTIONS(215),
    [sym_cld_opcode] = ACTIONS(215),
    [sym_cli_opcode] = ACTIONS(215),
    [sym_clv_opcode] = ACTIONS(215),
    [sym_cmp_opcode] = ACTIONS(215),
    [sym_cpx_opcode] = ACTIONS(215),
    [sym_cpy_opcode] = ACTIONS(215),
    [sym_dec_opcode] = ACTIONS(215),
    [sym_dex_opcode] = ACTIONS(215),
    [sym_dey_opcode] = ACTIONS(215),
    [sym_eor_opcode] = ACTIONS(215),
    [sym_inc_opcode] = ACTIONS(215),
    [sym_inx_opcode] = ACTIONS(215),
    [sym_iny_opcode] = ACTIONS(215),
    [sym_jmp_opcode] = ACTIONS(215),
    [sym_jsr_opcode] = ACTIONS(215),
    [sym_lda_opcode] = ACTIONS(215),
    [sym_ldx_opcode] = ACTIONS(215),
    [sym_ldy_opcode] = ACTIONS(215),
    [sym_lsr_opcode] = ACTIONS(215),
    [sym_nop_opcode] = ACTIONS(215),
    [sym_ora_opcode] = ACTIONS(215),
    [sym_pha_opcode] = ACTIONS(215),
    [sym_php_opcode] = ACTIONS(215),
    [sym_pla_opcode] = ACTIONS(215),
    [sym_plp_opcode] = ACTIONS(215),
    [sym_rol_opcode] = ACTIONS(215),
    [sym_ror_opcode] = ACTIONS(215),
    [sym_rti_opcode] = ACTIONS(215),
    [sym_rts_opcode] = ACTIONS(215),
    [sym_sbc_opcode] = ACTIONS(215),
    [sym_sec_opcode] = ACTIONS(215),
    [sym_sed_opcode] = ACTIONS(215),
    [sym_sei_opcode] = ACTIONS(215),
    [sym_sta_opcode] = ACTIONS(215),
    [sym_stx_opcode] = ACTIONS(215),
    [sym_sty_opcode] = ACTIONS(215),
    [sym_tax_opcode] = ACTIONS(215),
    [sym_tay_opcode] = ACTIONS(215),
    [sym_tsx_opcode] = ACTIONS(215),
    [sym_txa_opcode] = ACTIONS(215),
    [sym_tcs_opcode] = ACTIONS(215),
    [sym_tya_opcode] = ACTIONS(215),
    [anon_sym_PLUS] = ACTIONS(213),
    [anon_sym_DASH] = ACTIONS(213),
    [anon_sym_LT] = ACTIONS(215),
    [anon_sym_GT] = ACTIONS(215),
    [anon_sym_CARET] = ACTIONS(213),
    [anon_sym_STAR] = ACTIONS(213),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_DOTMOD] = ACTIONS(213),
    [anon_sym_DOTBITAND] = ACTIONS(213),
    [anon_sym_AMP] = ACTIONS(215),
    [anon_sym_DOTBITXOR] = ACTIONS(213),
    [anon_sym_DOTSHL] = ACTIONS(213),
    [anon_sym_LT_LT] = ACTIONS(213),
    [anon_sym_DOTSHR] = ACTIONS(213),
    [anon_sym_GT_GT] = ACTIONS(213),
    [anon_sym_DOTBITOR] = ACTIONS(213),
    [anon_sym_PIPE] = ACTIONS(215),
    [anon_sym_EQ] = ACTIONS(213),
    [anon_sym_LT_GT] = ACTIONS(213),
    [anon_sym_LT_EQ] = ACTIONS(213),
    [anon_sym_GT_EQ] = ACTIONS(213),
    [anon_sym_DOTAND] = ACTIONS(213),
    [anon_sym_AMP_AMP] = ACTIONS(213),
    [anon_sym_DOTXOR] = ACTIONS(213),
    [anon_sym_DOTOR] = ACTIONS(213),
    [anon_sym_PIPE_PIPE] = ACTIONS(213),
    [sym_a16_ctrl_cmd] = ACTIONS(213),
    [sym_a8_ctrl_cmd] = ACTIONS(213),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(213),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(213),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(213),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(213),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(213),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(213),
    [sym_bss_ctrl_cmd] = ACTIONS(213),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(213),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(213),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(213),
    [sym_code_ctrl_cmd] = ACTIONS(213),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(213),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(213),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(217),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_RPAREN] = ACTIONS(217),
    [sym_adc_opcode] = ACTIONS(219),
    [sym_and_opcode] = ACTIONS(219),
    [sym_asl_opcode] = ACTIONS(219),
    [sym_bcc_opcode] = ACTIONS(219),
    [sym_bcs_opcode] = ACTIONS(219),
    [sym_beq_opcode] = ACTIONS(219),
    [sym_bit_opcode] = ACTIONS(219),
    [sym_bmi_opcode] = ACTIONS(219),
    [sym_bne_opcode] = ACTIONS(219),
    [sym_bpl_opcode] = ACTIONS(219),
    [sym_brk_opcode] = ACTIONS(219),
    [sym_bvc_opcode] = ACTIONS(219),
    [sym_bvs_opcode] = ACTIONS(219),
    [sym_clc_opcode] = ACTIONS(219),
    [sym_cld_opcode] = ACTIONS(219),
    [sym_cli_opcode] = ACTIONS(219),
    [sym_clv_opcode] = ACTIONS(219),
    [sym_cmp_opcode] = ACTIONS(219),
    [sym_cpx_opcode] = ACTIONS(219),
    [sym_cpy_opcode] = ACTIONS(219),
    [sym_dec_opcode] = ACTIONS(219),
    [sym_dex_opcode] = ACTIONS(219),
    [sym_dey_opcode] = ACTIONS(219),
    [sym_eor_opcode] = ACTIONS(219),
    [sym_inc_opcode] = ACTIONS(219),
    [sym_inx_opcode] = ACTIONS(219),
    [sym_iny_opcode] = ACTIONS(219),
    [sym_jmp_opcode] = ACTIONS(219),
    [sym_jsr_opcode] = ACTIONS(219),
    [sym_lda_opcode] = ACTIONS(219),
    [sym_ldx_opcode] = ACTIONS(219),
    [sym_ldy_opcode] = ACTIONS(219),
    [sym_lsr_opcode] = ACTIONS(219),
    [sym_nop_opcode] = ACTIONS(219),
    [sym_ora_opcode] = ACTIONS(219),
    [sym_pha_opcode] = ACTIONS(219),
    [sym_php_opcode] = ACTIONS(219),
    [sym_pla_opcode] = ACTIONS(219),
    [sym_plp_opcode] = ACTIONS(219),
    [sym_rol_opcode] = ACTIONS(219),
    [sym_ror_opcode] = ACTIONS(219),
    [sym_rti_opcode] = ACTIONS(219),
    [sym_rts_opcode] = ACTIONS(219),
    [sym_sbc_opcode] = ACTIONS(219),
    [sym_sec_opcode] = ACTIONS(219),
    [sym_sed_opcode] = ACTIONS(219),
    [sym_sei_opcode] = ACTIONS(219),
    [sym_sta_opcode] = ACTIONS(219),
    [sym_stx_opcode] = ACTIONS(219),
    [sym_sty_opcode] = ACTIONS(219),
    [sym_tax_opcode] = ACTIONS(219),
    [sym_tay_opcode] = ACTIONS(219),
    [sym_tsx_opcode] = ACTIONS(219),
    [sym_txa_opcode] = ACTIONS(219),
    [sym_tcs_opcode] = ACTIONS(219),
    [sym_tya_opcode] = ACTIONS(219),
    [anon_sym_PLUS] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_LT] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_CARET] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(217),
    [anon_sym_SLASH] = ACTIONS(217),
    [anon_sym_DOTMOD] = ACTIONS(217),
    [anon_sym_DOTBITAND] = ACTIONS(217),
    [anon_sym_AMP] = ACTIONS(219),
    [anon_sym_DOTBITXOR] = ACTIONS(217),
    [anon_sym_DOTSHL] = ACTIONS(217),
    [anon_sym_LT_LT] = ACTIONS(217),
    [anon_sym_DOTSHR] = ACTIONS(217),
    [anon_sym_GT_GT] = ACTIONS(217),
    [anon_sym_DOTBITOR] = ACTIONS(217),
    [anon_sym_PIPE] = ACTIONS(219),
    [anon_sym_EQ] = ACTIONS(217),
    [anon_sym_LT_GT] = ACTIONS(217),
    [anon_sym_LT_EQ] = ACTIONS(217),
    [anon_sym_GT_EQ] = ACTIONS(217),
    [anon_sym_DOTAND] = ACTIONS(217),
    [anon_sym_AMP_AMP] = ACTIONS(217),
    [anon_sym_DOTXOR] = ACTIONS(217),
    [anon_sym_DOTOR] = ACTIONS(217),
    [anon_sym_PIPE_PIPE] = ACTIONS(217),
    [sym_a16_ctrl_cmd] = ACTIONS(217),
    [sym_a8_ctrl_cmd] = ACTIONS(217),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(217),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(217),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(217),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(217),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(217),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(217),
    [sym_bss_ctrl_cmd] = ACTIONS(217),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(217),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(217),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(217),
    [sym_code_ctrl_cmd] = ACTIONS(217),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(217),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(217),
  },
  [31] = {
    [aux_sym_bankbytes_ctrl_cmd_repeat1] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(221),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(223),
    [sym_adc_opcode] = ACTIONS(225),
    [sym_and_opcode] = ACTIONS(225),
    [sym_asl_opcode] = ACTIONS(225),
    [sym_bcc_opcode] = ACTIONS(225),
    [sym_bcs_opcode] = ACTIONS(225),
    [sym_beq_opcode] = ACTIONS(225),
    [sym_bit_opcode] = ACTIONS(225),
    [sym_bmi_opcode] = ACTIONS(225),
    [sym_bne_opcode] = ACTIONS(225),
    [sym_bpl_opcode] = ACTIONS(225),
    [sym_brk_opcode] = ACTIONS(225),
    [sym_bvc_opcode] = ACTIONS(225),
    [sym_bvs_opcode] = ACTIONS(225),
    [sym_clc_opcode] = ACTIONS(225),
    [sym_cld_opcode] = ACTIONS(225),
    [sym_cli_opcode] = ACTIONS(225),
    [sym_clv_opcode] = ACTIONS(225),
    [sym_cmp_opcode] = ACTIONS(225),
    [sym_cpx_opcode] = ACTIONS(225),
    [sym_cpy_opcode] = ACTIONS(225),
    [sym_dec_opcode] = ACTIONS(225),
    [sym_dex_opcode] = ACTIONS(225),
    [sym_dey_opcode] = ACTIONS(225),
    [sym_eor_opcode] = ACTIONS(225),
    [sym_inc_opcode] = ACTIONS(225),
    [sym_inx_opcode] = ACTIONS(225),
    [sym_iny_opcode] = ACTIONS(225),
    [sym_jmp_opcode] = ACTIONS(225),
    [sym_jsr_opcode] = ACTIONS(225),
    [sym_lda_opcode] = ACTIONS(225),
    [sym_ldx_opcode] = ACTIONS(225),
    [sym_ldy_opcode] = ACTIONS(225),
    [sym_lsr_opcode] = ACTIONS(225),
    [sym_nop_opcode] = ACTIONS(225),
    [sym_ora_opcode] = ACTIONS(225),
    [sym_pha_opcode] = ACTIONS(225),
    [sym_php_opcode] = ACTIONS(225),
    [sym_pla_opcode] = ACTIONS(225),
    [sym_plp_opcode] = ACTIONS(225),
    [sym_rol_opcode] = ACTIONS(225),
    [sym_ror_opcode] = ACTIONS(225),
    [sym_rti_opcode] = ACTIONS(225),
    [sym_rts_opcode] = ACTIONS(225),
    [sym_sbc_opcode] = ACTIONS(225),
    [sym_sec_opcode] = ACTIONS(225),
    [sym_sed_opcode] = ACTIONS(225),
    [sym_sei_opcode] = ACTIONS(225),
    [sym_sta_opcode] = ACTIONS(225),
    [sym_stx_opcode] = ACTIONS(225),
    [sym_sty_opcode] = ACTIONS(225),
    [sym_tax_opcode] = ACTIONS(225),
    [sym_tay_opcode] = ACTIONS(225),
    [sym_tsx_opcode] = ACTIONS(225),
    [sym_txa_opcode] = ACTIONS(225),
    [sym_tcs_opcode] = ACTIONS(225),
    [sym_tya_opcode] = ACTIONS(225),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_DOTMOD] = ACTIONS(87),
    [anon_sym_DOTBITAND] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(91),
    [anon_sym_DOTBITXOR] = ACTIONS(81),
    [anon_sym_DOTSHL] = ACTIONS(93),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_DOTSHR] = ACTIONS(95),
    [anon_sym_GT_GT] = ACTIONS(95),
    [anon_sym_DOTBITOR] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_EQ] = ACTIONS(101),
    [anon_sym_LT_GT] = ACTIONS(103),
    [anon_sym_LT_EQ] = ACTIONS(105),
    [anon_sym_GT_EQ] = ACTIONS(107),
    [anon_sym_DOTAND] = ACTIONS(199),
    [anon_sym_AMP_AMP] = ACTIONS(199),
    [anon_sym_DOTXOR] = ACTIONS(201),
    [anon_sym_DOTOR] = ACTIONS(207),
    [anon_sym_PIPE_PIPE] = ACTIONS(207),
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
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(221),
  },
  [32] = {
    [aux_sym_bankbytes_ctrl_cmd_repeat1] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(227),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(227),
    [anon_sym_COMMA] = ACTIONS(223),
    [sym_adc_opcode] = ACTIONS(229),
    [sym_and_opcode] = ACTIONS(229),
    [sym_asl_opcode] = ACTIONS(229),
    [sym_bcc_opcode] = ACTIONS(229),
    [sym_bcs_opcode] = ACTIONS(229),
    [sym_beq_opcode] = ACTIONS(229),
    [sym_bit_opcode] = ACTIONS(229),
    [sym_bmi_opcode] = ACTIONS(229),
    [sym_bne_opcode] = ACTIONS(229),
    [sym_bpl_opcode] = ACTIONS(229),
    [sym_brk_opcode] = ACTIONS(229),
    [sym_bvc_opcode] = ACTIONS(229),
    [sym_bvs_opcode] = ACTIONS(229),
    [sym_clc_opcode] = ACTIONS(229),
    [sym_cld_opcode] = ACTIONS(229),
    [sym_cli_opcode] = ACTIONS(229),
    [sym_clv_opcode] = ACTIONS(229),
    [sym_cmp_opcode] = ACTIONS(229),
    [sym_cpx_opcode] = ACTIONS(229),
    [sym_cpy_opcode] = ACTIONS(229),
    [sym_dec_opcode] = ACTIONS(229),
    [sym_dex_opcode] = ACTIONS(229),
    [sym_dey_opcode] = ACTIONS(229),
    [sym_eor_opcode] = ACTIONS(229),
    [sym_inc_opcode] = ACTIONS(229),
    [sym_inx_opcode] = ACTIONS(229),
    [sym_iny_opcode] = ACTIONS(229),
    [sym_jmp_opcode] = ACTIONS(229),
    [sym_jsr_opcode] = ACTIONS(229),
    [sym_lda_opcode] = ACTIONS(229),
    [sym_ldx_opcode] = ACTIONS(229),
    [sym_ldy_opcode] = ACTIONS(229),
    [sym_lsr_opcode] = ACTIONS(229),
    [sym_nop_opcode] = ACTIONS(229),
    [sym_ora_opcode] = ACTIONS(229),
    [sym_pha_opcode] = ACTIONS(229),
    [sym_php_opcode] = ACTIONS(229),
    [sym_pla_opcode] = ACTIONS(229),
    [sym_plp_opcode] = ACTIONS(229),
    [sym_rol_opcode] = ACTIONS(229),
    [sym_ror_opcode] = ACTIONS(229),
    [sym_rti_opcode] = ACTIONS(229),
    [sym_rts_opcode] = ACTIONS(229),
    [sym_sbc_opcode] = ACTIONS(229),
    [sym_sec_opcode] = ACTIONS(229),
    [sym_sed_opcode] = ACTIONS(229),
    [sym_sei_opcode] = ACTIONS(229),
    [sym_sta_opcode] = ACTIONS(229),
    [sym_stx_opcode] = ACTIONS(229),
    [sym_sty_opcode] = ACTIONS(229),
    [sym_tax_opcode] = ACTIONS(229),
    [sym_tay_opcode] = ACTIONS(229),
    [sym_tsx_opcode] = ACTIONS(229),
    [sym_txa_opcode] = ACTIONS(229),
    [sym_tcs_opcode] = ACTIONS(229),
    [sym_tya_opcode] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_DOTMOD] = ACTIONS(87),
    [anon_sym_DOTBITAND] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(91),
    [anon_sym_DOTBITXOR] = ACTIONS(81),
    [anon_sym_DOTSHL] = ACTIONS(93),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_DOTSHR] = ACTIONS(95),
    [anon_sym_GT_GT] = ACTIONS(95),
    [anon_sym_DOTBITOR] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_EQ] = ACTIONS(101),
    [anon_sym_LT_GT] = ACTIONS(103),
    [anon_sym_LT_EQ] = ACTIONS(105),
    [anon_sym_GT_EQ] = ACTIONS(107),
    [anon_sym_DOTAND] = ACTIONS(199),
    [anon_sym_AMP_AMP] = ACTIONS(199),
    [anon_sym_DOTXOR] = ACTIONS(201),
    [anon_sym_DOTOR] = ACTIONS(207),
    [anon_sym_PIPE_PIPE] = ACTIONS(207),
    [sym_a16_ctrl_cmd] = ACTIONS(227),
    [sym_a8_ctrl_cmd] = ACTIONS(227),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(227),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(227),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(227),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(227),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(227),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(227),
    [sym_bss_ctrl_cmd] = ACTIONS(227),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(227),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(227),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(227),
    [sym_code_ctrl_cmd] = ACTIONS(227),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(227),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(227),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(231),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(231),
    [anon_sym_COMMA] = ACTIONS(231),
    [anon_sym_RPAREN] = ACTIONS(231),
    [sym_adc_opcode] = ACTIONS(233),
    [sym_and_opcode] = ACTIONS(233),
    [sym_asl_opcode] = ACTIONS(233),
    [sym_bcc_opcode] = ACTIONS(233),
    [sym_bcs_opcode] = ACTIONS(233),
    [sym_beq_opcode] = ACTIONS(233),
    [sym_bit_opcode] = ACTIONS(233),
    [sym_bmi_opcode] = ACTIONS(233),
    [sym_bne_opcode] = ACTIONS(233),
    [sym_bpl_opcode] = ACTIONS(233),
    [sym_brk_opcode] = ACTIONS(233),
    [sym_bvc_opcode] = ACTIONS(233),
    [sym_bvs_opcode] = ACTIONS(233),
    [sym_clc_opcode] = ACTIONS(233),
    [sym_cld_opcode] = ACTIONS(233),
    [sym_cli_opcode] = ACTIONS(233),
    [sym_clv_opcode] = ACTIONS(233),
    [sym_cmp_opcode] = ACTIONS(233),
    [sym_cpx_opcode] = ACTIONS(233),
    [sym_cpy_opcode] = ACTIONS(233),
    [sym_dec_opcode] = ACTIONS(233),
    [sym_dex_opcode] = ACTIONS(233),
    [sym_dey_opcode] = ACTIONS(233),
    [sym_eor_opcode] = ACTIONS(233),
    [sym_inc_opcode] = ACTIONS(233),
    [sym_inx_opcode] = ACTIONS(233),
    [sym_iny_opcode] = ACTIONS(233),
    [sym_jmp_opcode] = ACTIONS(233),
    [sym_jsr_opcode] = ACTIONS(233),
    [sym_lda_opcode] = ACTIONS(233),
    [sym_ldx_opcode] = ACTIONS(233),
    [sym_ldy_opcode] = ACTIONS(233),
    [sym_lsr_opcode] = ACTIONS(233),
    [sym_nop_opcode] = ACTIONS(233),
    [sym_ora_opcode] = ACTIONS(233),
    [sym_pha_opcode] = ACTIONS(233),
    [sym_php_opcode] = ACTIONS(233),
    [sym_pla_opcode] = ACTIONS(233),
    [sym_plp_opcode] = ACTIONS(233),
    [sym_rol_opcode] = ACTIONS(233),
    [sym_ror_opcode] = ACTIONS(233),
    [sym_rti_opcode] = ACTIONS(233),
    [sym_rts_opcode] = ACTIONS(233),
    [sym_sbc_opcode] = ACTIONS(233),
    [sym_sec_opcode] = ACTIONS(233),
    [sym_sed_opcode] = ACTIONS(233),
    [sym_sei_opcode] = ACTIONS(233),
    [sym_sta_opcode] = ACTIONS(233),
    [sym_stx_opcode] = ACTIONS(233),
    [sym_sty_opcode] = ACTIONS(233),
    [sym_tax_opcode] = ACTIONS(233),
    [sym_tay_opcode] = ACTIONS(233),
    [sym_tsx_opcode] = ACTIONS(233),
    [sym_txa_opcode] = ACTIONS(233),
    [sym_tcs_opcode] = ACTIONS(233),
    [sym_tya_opcode] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(233),
    [anon_sym_GT] = ACTIONS(233),
    [anon_sym_CARET] = ACTIONS(231),
    [anon_sym_STAR] = ACTIONS(231),
    [anon_sym_SLASH] = ACTIONS(231),
    [anon_sym_DOTMOD] = ACTIONS(231),
    [anon_sym_DOTBITAND] = ACTIONS(231),
    [anon_sym_AMP] = ACTIONS(233),
    [anon_sym_DOTBITXOR] = ACTIONS(231),
    [anon_sym_DOTSHL] = ACTIONS(231),
    [anon_sym_LT_LT] = ACTIONS(231),
    [anon_sym_DOTSHR] = ACTIONS(231),
    [anon_sym_GT_GT] = ACTIONS(231),
    [anon_sym_DOTBITOR] = ACTIONS(231),
    [anon_sym_PIPE] = ACTIONS(233),
    [anon_sym_EQ] = ACTIONS(231),
    [anon_sym_LT_GT] = ACTIONS(231),
    [anon_sym_LT_EQ] = ACTIONS(231),
    [anon_sym_GT_EQ] = ACTIONS(231),
    [anon_sym_DOTAND] = ACTIONS(231),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_DOTXOR] = ACTIONS(231),
    [anon_sym_DOTOR] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(231),
    [sym_a16_ctrl_cmd] = ACTIONS(231),
    [sym_a8_ctrl_cmd] = ACTIONS(231),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(231),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(231),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(231),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(231),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(231),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(231),
    [sym_bss_ctrl_cmd] = ACTIONS(231),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(231),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(231),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(231),
    [sym_code_ctrl_cmd] = ACTIONS(231),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(231),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(231),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(235),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(235),
    [anon_sym_COMMA] = ACTIONS(235),
    [anon_sym_RPAREN] = ACTIONS(235),
    [sym_adc_opcode] = ACTIONS(237),
    [sym_and_opcode] = ACTIONS(237),
    [sym_asl_opcode] = ACTIONS(237),
    [sym_bcc_opcode] = ACTIONS(237),
    [sym_bcs_opcode] = ACTIONS(237),
    [sym_beq_opcode] = ACTIONS(237),
    [sym_bit_opcode] = ACTIONS(237),
    [sym_bmi_opcode] = ACTIONS(237),
    [sym_bne_opcode] = ACTIONS(237),
    [sym_bpl_opcode] = ACTIONS(237),
    [sym_brk_opcode] = ACTIONS(237),
    [sym_bvc_opcode] = ACTIONS(237),
    [sym_bvs_opcode] = ACTIONS(237),
    [sym_clc_opcode] = ACTIONS(237),
    [sym_cld_opcode] = ACTIONS(237),
    [sym_cli_opcode] = ACTIONS(237),
    [sym_clv_opcode] = ACTIONS(237),
    [sym_cmp_opcode] = ACTIONS(237),
    [sym_cpx_opcode] = ACTIONS(237),
    [sym_cpy_opcode] = ACTIONS(237),
    [sym_dec_opcode] = ACTIONS(237),
    [sym_dex_opcode] = ACTIONS(237),
    [sym_dey_opcode] = ACTIONS(237),
    [sym_eor_opcode] = ACTIONS(237),
    [sym_inc_opcode] = ACTIONS(237),
    [sym_inx_opcode] = ACTIONS(237),
    [sym_iny_opcode] = ACTIONS(237),
    [sym_jmp_opcode] = ACTIONS(237),
    [sym_jsr_opcode] = ACTIONS(237),
    [sym_lda_opcode] = ACTIONS(237),
    [sym_ldx_opcode] = ACTIONS(237),
    [sym_ldy_opcode] = ACTIONS(237),
    [sym_lsr_opcode] = ACTIONS(237),
    [sym_nop_opcode] = ACTIONS(237),
    [sym_ora_opcode] = ACTIONS(237),
    [sym_pha_opcode] = ACTIONS(237),
    [sym_php_opcode] = ACTIONS(237),
    [sym_pla_opcode] = ACTIONS(237),
    [sym_plp_opcode] = ACTIONS(237),
    [sym_rol_opcode] = ACTIONS(237),
    [sym_ror_opcode] = ACTIONS(237),
    [sym_rti_opcode] = ACTIONS(237),
    [sym_rts_opcode] = ACTIONS(237),
    [sym_sbc_opcode] = ACTIONS(237),
    [sym_sec_opcode] = ACTIONS(237),
    [sym_sed_opcode] = ACTIONS(237),
    [sym_sei_opcode] = ACTIONS(237),
    [sym_sta_opcode] = ACTIONS(237),
    [sym_stx_opcode] = ACTIONS(237),
    [sym_sty_opcode] = ACTIONS(237),
    [sym_tax_opcode] = ACTIONS(237),
    [sym_tay_opcode] = ACTIONS(237),
    [sym_tsx_opcode] = ACTIONS(237),
    [sym_txa_opcode] = ACTIONS(237),
    [sym_tcs_opcode] = ACTIONS(237),
    [sym_tya_opcode] = ACTIONS(237),
    [anon_sym_PLUS] = ACTIONS(235),
    [anon_sym_DASH] = ACTIONS(235),
    [anon_sym_LT] = ACTIONS(237),
    [anon_sym_GT] = ACTIONS(237),
    [anon_sym_CARET] = ACTIONS(235),
    [anon_sym_STAR] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(235),
    [anon_sym_DOTMOD] = ACTIONS(235),
    [anon_sym_DOTBITAND] = ACTIONS(235),
    [anon_sym_AMP] = ACTIONS(237),
    [anon_sym_DOTBITXOR] = ACTIONS(235),
    [anon_sym_DOTSHL] = ACTIONS(235),
    [anon_sym_LT_LT] = ACTIONS(235),
    [anon_sym_DOTSHR] = ACTIONS(235),
    [anon_sym_GT_GT] = ACTIONS(235),
    [anon_sym_DOTBITOR] = ACTIONS(235),
    [anon_sym_PIPE] = ACTIONS(237),
    [anon_sym_EQ] = ACTIONS(235),
    [anon_sym_LT_GT] = ACTIONS(235),
    [anon_sym_LT_EQ] = ACTIONS(235),
    [anon_sym_GT_EQ] = ACTIONS(235),
    [anon_sym_DOTAND] = ACTIONS(235),
    [anon_sym_AMP_AMP] = ACTIONS(235),
    [anon_sym_DOTXOR] = ACTIONS(235),
    [anon_sym_DOTOR] = ACTIONS(235),
    [anon_sym_PIPE_PIPE] = ACTIONS(235),
    [sym_a16_ctrl_cmd] = ACTIONS(235),
    [sym_a8_ctrl_cmd] = ACTIONS(235),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(235),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(235),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(235),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(235),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(235),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(235),
    [sym_bss_ctrl_cmd] = ACTIONS(235),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(235),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(235),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(235),
    [sym_code_ctrl_cmd] = ACTIONS(235),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(235),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(235),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(239),
    [anon_sym_COMMA] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(239),
    [sym_adc_opcode] = ACTIONS(241),
    [sym_and_opcode] = ACTIONS(241),
    [sym_asl_opcode] = ACTIONS(241),
    [sym_bcc_opcode] = ACTIONS(241),
    [sym_bcs_opcode] = ACTIONS(241),
    [sym_beq_opcode] = ACTIONS(241),
    [sym_bit_opcode] = ACTIONS(241),
    [sym_bmi_opcode] = ACTIONS(241),
    [sym_bne_opcode] = ACTIONS(241),
    [sym_bpl_opcode] = ACTIONS(241),
    [sym_brk_opcode] = ACTIONS(241),
    [sym_bvc_opcode] = ACTIONS(241),
    [sym_bvs_opcode] = ACTIONS(241),
    [sym_clc_opcode] = ACTIONS(241),
    [sym_cld_opcode] = ACTIONS(241),
    [sym_cli_opcode] = ACTIONS(241),
    [sym_clv_opcode] = ACTIONS(241),
    [sym_cmp_opcode] = ACTIONS(241),
    [sym_cpx_opcode] = ACTIONS(241),
    [sym_cpy_opcode] = ACTIONS(241),
    [sym_dec_opcode] = ACTIONS(241),
    [sym_dex_opcode] = ACTIONS(241),
    [sym_dey_opcode] = ACTIONS(241),
    [sym_eor_opcode] = ACTIONS(241),
    [sym_inc_opcode] = ACTIONS(241),
    [sym_inx_opcode] = ACTIONS(241),
    [sym_iny_opcode] = ACTIONS(241),
    [sym_jmp_opcode] = ACTIONS(241),
    [sym_jsr_opcode] = ACTIONS(241),
    [sym_lda_opcode] = ACTIONS(241),
    [sym_ldx_opcode] = ACTIONS(241),
    [sym_ldy_opcode] = ACTIONS(241),
    [sym_lsr_opcode] = ACTIONS(241),
    [sym_nop_opcode] = ACTIONS(241),
    [sym_ora_opcode] = ACTIONS(241),
    [sym_pha_opcode] = ACTIONS(241),
    [sym_php_opcode] = ACTIONS(241),
    [sym_pla_opcode] = ACTIONS(241),
    [sym_plp_opcode] = ACTIONS(241),
    [sym_rol_opcode] = ACTIONS(241),
    [sym_ror_opcode] = ACTIONS(241),
    [sym_rti_opcode] = ACTIONS(241),
    [sym_rts_opcode] = ACTIONS(241),
    [sym_sbc_opcode] = ACTIONS(241),
    [sym_sec_opcode] = ACTIONS(241),
    [sym_sed_opcode] = ACTIONS(241),
    [sym_sei_opcode] = ACTIONS(241),
    [sym_sta_opcode] = ACTIONS(241),
    [sym_stx_opcode] = ACTIONS(241),
    [sym_sty_opcode] = ACTIONS(241),
    [sym_tax_opcode] = ACTIONS(241),
    [sym_tay_opcode] = ACTIONS(241),
    [sym_tsx_opcode] = ACTIONS(241),
    [sym_txa_opcode] = ACTIONS(241),
    [sym_tcs_opcode] = ACTIONS(241),
    [sym_tya_opcode] = ACTIONS(241),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_LT] = ACTIONS(241),
    [anon_sym_GT] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(239),
    [anon_sym_SLASH] = ACTIONS(239),
    [anon_sym_DOTMOD] = ACTIONS(239),
    [anon_sym_DOTBITAND] = ACTIONS(239),
    [anon_sym_AMP] = ACTIONS(241),
    [anon_sym_DOTBITXOR] = ACTIONS(239),
    [anon_sym_DOTSHL] = ACTIONS(239),
    [anon_sym_LT_LT] = ACTIONS(239),
    [anon_sym_DOTSHR] = ACTIONS(239),
    [anon_sym_GT_GT] = ACTIONS(239),
    [anon_sym_DOTBITOR] = ACTIONS(239),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_EQ] = ACTIONS(239),
    [anon_sym_LT_GT] = ACTIONS(239),
    [anon_sym_LT_EQ] = ACTIONS(239),
    [anon_sym_GT_EQ] = ACTIONS(239),
    [anon_sym_DOTAND] = ACTIONS(239),
    [anon_sym_AMP_AMP] = ACTIONS(239),
    [anon_sym_DOTXOR] = ACTIONS(239),
    [anon_sym_DOTOR] = ACTIONS(239),
    [anon_sym_PIPE_PIPE] = ACTIONS(239),
    [sym_a16_ctrl_cmd] = ACTIONS(239),
    [sym_a8_ctrl_cmd] = ACTIONS(239),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(239),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(239),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(239),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(239),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(239),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(239),
    [sym_bss_ctrl_cmd] = ACTIONS(239),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(239),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(239),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(239),
    [sym_code_ctrl_cmd] = ACTIONS(239),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(239),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(239),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(243),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(243),
    [anon_sym_COMMA] = ACTIONS(243),
    [anon_sym_RPAREN] = ACTIONS(243),
    [sym_adc_opcode] = ACTIONS(245),
    [sym_and_opcode] = ACTIONS(245),
    [sym_asl_opcode] = ACTIONS(245),
    [sym_bcc_opcode] = ACTIONS(245),
    [sym_bcs_opcode] = ACTIONS(245),
    [sym_beq_opcode] = ACTIONS(245),
    [sym_bit_opcode] = ACTIONS(245),
    [sym_bmi_opcode] = ACTIONS(245),
    [sym_bne_opcode] = ACTIONS(245),
    [sym_bpl_opcode] = ACTIONS(245),
    [sym_brk_opcode] = ACTIONS(245),
    [sym_bvc_opcode] = ACTIONS(245),
    [sym_bvs_opcode] = ACTIONS(245),
    [sym_clc_opcode] = ACTIONS(245),
    [sym_cld_opcode] = ACTIONS(245),
    [sym_cli_opcode] = ACTIONS(245),
    [sym_clv_opcode] = ACTIONS(245),
    [sym_cmp_opcode] = ACTIONS(245),
    [sym_cpx_opcode] = ACTIONS(245),
    [sym_cpy_opcode] = ACTIONS(245),
    [sym_dec_opcode] = ACTIONS(245),
    [sym_dex_opcode] = ACTIONS(245),
    [sym_dey_opcode] = ACTIONS(245),
    [sym_eor_opcode] = ACTIONS(245),
    [sym_inc_opcode] = ACTIONS(245),
    [sym_inx_opcode] = ACTIONS(245),
    [sym_iny_opcode] = ACTIONS(245),
    [sym_jmp_opcode] = ACTIONS(245),
    [sym_jsr_opcode] = ACTIONS(245),
    [sym_lda_opcode] = ACTIONS(245),
    [sym_ldx_opcode] = ACTIONS(245),
    [sym_ldy_opcode] = ACTIONS(245),
    [sym_lsr_opcode] = ACTIONS(245),
    [sym_nop_opcode] = ACTIONS(245),
    [sym_ora_opcode] = ACTIONS(245),
    [sym_pha_opcode] = ACTIONS(245),
    [sym_php_opcode] = ACTIONS(245),
    [sym_pla_opcode] = ACTIONS(245),
    [sym_plp_opcode] = ACTIONS(245),
    [sym_rol_opcode] = ACTIONS(245),
    [sym_ror_opcode] = ACTIONS(245),
    [sym_rti_opcode] = ACTIONS(245),
    [sym_rts_opcode] = ACTIONS(245),
    [sym_sbc_opcode] = ACTIONS(245),
    [sym_sec_opcode] = ACTIONS(245),
    [sym_sed_opcode] = ACTIONS(245),
    [sym_sei_opcode] = ACTIONS(245),
    [sym_sta_opcode] = ACTIONS(245),
    [sym_stx_opcode] = ACTIONS(245),
    [sym_sty_opcode] = ACTIONS(245),
    [sym_tax_opcode] = ACTIONS(245),
    [sym_tay_opcode] = ACTIONS(245),
    [sym_tsx_opcode] = ACTIONS(245),
    [sym_txa_opcode] = ACTIONS(245),
    [sym_tcs_opcode] = ACTIONS(245),
    [sym_tya_opcode] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(243),
    [anon_sym_LT] = ACTIONS(245),
    [anon_sym_GT] = ACTIONS(245),
    [anon_sym_CARET] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(243),
    [anon_sym_DOTMOD] = ACTIONS(243),
    [anon_sym_DOTBITAND] = ACTIONS(243),
    [anon_sym_AMP] = ACTIONS(245),
    [anon_sym_DOTBITXOR] = ACTIONS(243),
    [anon_sym_DOTSHL] = ACTIONS(243),
    [anon_sym_LT_LT] = ACTIONS(243),
    [anon_sym_DOTSHR] = ACTIONS(243),
    [anon_sym_GT_GT] = ACTIONS(243),
    [anon_sym_DOTBITOR] = ACTIONS(243),
    [anon_sym_PIPE] = ACTIONS(245),
    [anon_sym_EQ] = ACTIONS(243),
    [anon_sym_LT_GT] = ACTIONS(243),
    [anon_sym_LT_EQ] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(243),
    [anon_sym_DOTAND] = ACTIONS(243),
    [anon_sym_AMP_AMP] = ACTIONS(243),
    [anon_sym_DOTXOR] = ACTIONS(243),
    [anon_sym_DOTOR] = ACTIONS(243),
    [anon_sym_PIPE_PIPE] = ACTIONS(243),
    [sym_a16_ctrl_cmd] = ACTIONS(243),
    [sym_a8_ctrl_cmd] = ACTIONS(243),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(243),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(243),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(243),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(243),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(243),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(243),
    [sym_bss_ctrl_cmd] = ACTIONS(243),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(243),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(243),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(243),
    [sym_code_ctrl_cmd] = ACTIONS(243),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(243),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(243),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(247),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(247),
    [anon_sym_COMMA] = ACTIONS(247),
    [anon_sym_RPAREN] = ACTIONS(247),
    [sym_adc_opcode] = ACTIONS(249),
    [sym_and_opcode] = ACTIONS(249),
    [sym_asl_opcode] = ACTIONS(249),
    [sym_bcc_opcode] = ACTIONS(249),
    [sym_bcs_opcode] = ACTIONS(249),
    [sym_beq_opcode] = ACTIONS(249),
    [sym_bit_opcode] = ACTIONS(249),
    [sym_bmi_opcode] = ACTIONS(249),
    [sym_bne_opcode] = ACTIONS(249),
    [sym_bpl_opcode] = ACTIONS(249),
    [sym_brk_opcode] = ACTIONS(249),
    [sym_bvc_opcode] = ACTIONS(249),
    [sym_bvs_opcode] = ACTIONS(249),
    [sym_clc_opcode] = ACTIONS(249),
    [sym_cld_opcode] = ACTIONS(249),
    [sym_cli_opcode] = ACTIONS(249),
    [sym_clv_opcode] = ACTIONS(249),
    [sym_cmp_opcode] = ACTIONS(249),
    [sym_cpx_opcode] = ACTIONS(249),
    [sym_cpy_opcode] = ACTIONS(249),
    [sym_dec_opcode] = ACTIONS(249),
    [sym_dex_opcode] = ACTIONS(249),
    [sym_dey_opcode] = ACTIONS(249),
    [sym_eor_opcode] = ACTIONS(249),
    [sym_inc_opcode] = ACTIONS(249),
    [sym_inx_opcode] = ACTIONS(249),
    [sym_iny_opcode] = ACTIONS(249),
    [sym_jmp_opcode] = ACTIONS(249),
    [sym_jsr_opcode] = ACTIONS(249),
    [sym_lda_opcode] = ACTIONS(249),
    [sym_ldx_opcode] = ACTIONS(249),
    [sym_ldy_opcode] = ACTIONS(249),
    [sym_lsr_opcode] = ACTIONS(249),
    [sym_nop_opcode] = ACTIONS(249),
    [sym_ora_opcode] = ACTIONS(249),
    [sym_pha_opcode] = ACTIONS(249),
    [sym_php_opcode] = ACTIONS(249),
    [sym_pla_opcode] = ACTIONS(249),
    [sym_plp_opcode] = ACTIONS(249),
    [sym_rol_opcode] = ACTIONS(249),
    [sym_ror_opcode] = ACTIONS(249),
    [sym_rti_opcode] = ACTIONS(249),
    [sym_rts_opcode] = ACTIONS(249),
    [sym_sbc_opcode] = ACTIONS(249),
    [sym_sec_opcode] = ACTIONS(249),
    [sym_sed_opcode] = ACTIONS(249),
    [sym_sei_opcode] = ACTIONS(249),
    [sym_sta_opcode] = ACTIONS(249),
    [sym_stx_opcode] = ACTIONS(249),
    [sym_sty_opcode] = ACTIONS(249),
    [sym_tax_opcode] = ACTIONS(249),
    [sym_tay_opcode] = ACTIONS(249),
    [sym_tsx_opcode] = ACTIONS(249),
    [sym_txa_opcode] = ACTIONS(249),
    [sym_tcs_opcode] = ACTIONS(249),
    [sym_tya_opcode] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_LT] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(249),
    [anon_sym_CARET] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(247),
    [anon_sym_DOTMOD] = ACTIONS(247),
    [anon_sym_DOTBITAND] = ACTIONS(247),
    [anon_sym_AMP] = ACTIONS(249),
    [anon_sym_DOTBITXOR] = ACTIONS(247),
    [anon_sym_DOTSHL] = ACTIONS(247),
    [anon_sym_LT_LT] = ACTIONS(247),
    [anon_sym_DOTSHR] = ACTIONS(247),
    [anon_sym_GT_GT] = ACTIONS(247),
    [anon_sym_DOTBITOR] = ACTIONS(247),
    [anon_sym_PIPE] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_LT_GT] = ACTIONS(247),
    [anon_sym_LT_EQ] = ACTIONS(247),
    [anon_sym_GT_EQ] = ACTIONS(247),
    [anon_sym_DOTAND] = ACTIONS(247),
    [anon_sym_AMP_AMP] = ACTIONS(247),
    [anon_sym_DOTXOR] = ACTIONS(247),
    [anon_sym_DOTOR] = ACTIONS(247),
    [anon_sym_PIPE_PIPE] = ACTIONS(247),
    [sym_a16_ctrl_cmd] = ACTIONS(247),
    [sym_a8_ctrl_cmd] = ACTIONS(247),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(247),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(247),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(247),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(247),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(247),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(247),
    [sym_bss_ctrl_cmd] = ACTIONS(247),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(247),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(247),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(247),
    [sym_code_ctrl_cmd] = ACTIONS(247),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(247),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(247),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(251),
    [anon_sym_COMMA] = ACTIONS(251),
    [anon_sym_RPAREN] = ACTIONS(251),
    [sym_adc_opcode] = ACTIONS(253),
    [sym_and_opcode] = ACTIONS(253),
    [sym_asl_opcode] = ACTIONS(253),
    [sym_bcc_opcode] = ACTIONS(253),
    [sym_bcs_opcode] = ACTIONS(253),
    [sym_beq_opcode] = ACTIONS(253),
    [sym_bit_opcode] = ACTIONS(253),
    [sym_bmi_opcode] = ACTIONS(253),
    [sym_bne_opcode] = ACTIONS(253),
    [sym_bpl_opcode] = ACTIONS(253),
    [sym_brk_opcode] = ACTIONS(253),
    [sym_bvc_opcode] = ACTIONS(253),
    [sym_bvs_opcode] = ACTIONS(253),
    [sym_clc_opcode] = ACTIONS(253),
    [sym_cld_opcode] = ACTIONS(253),
    [sym_cli_opcode] = ACTIONS(253),
    [sym_clv_opcode] = ACTIONS(253),
    [sym_cmp_opcode] = ACTIONS(253),
    [sym_cpx_opcode] = ACTIONS(253),
    [sym_cpy_opcode] = ACTIONS(253),
    [sym_dec_opcode] = ACTIONS(253),
    [sym_dex_opcode] = ACTIONS(253),
    [sym_dey_opcode] = ACTIONS(253),
    [sym_eor_opcode] = ACTIONS(253),
    [sym_inc_opcode] = ACTIONS(253),
    [sym_inx_opcode] = ACTIONS(253),
    [sym_iny_opcode] = ACTIONS(253),
    [sym_jmp_opcode] = ACTIONS(253),
    [sym_jsr_opcode] = ACTIONS(253),
    [sym_lda_opcode] = ACTIONS(253),
    [sym_ldx_opcode] = ACTIONS(253),
    [sym_ldy_opcode] = ACTIONS(253),
    [sym_lsr_opcode] = ACTIONS(253),
    [sym_nop_opcode] = ACTIONS(253),
    [sym_ora_opcode] = ACTIONS(253),
    [sym_pha_opcode] = ACTIONS(253),
    [sym_php_opcode] = ACTIONS(253),
    [sym_pla_opcode] = ACTIONS(253),
    [sym_plp_opcode] = ACTIONS(253),
    [sym_rol_opcode] = ACTIONS(253),
    [sym_ror_opcode] = ACTIONS(253),
    [sym_rti_opcode] = ACTIONS(253),
    [sym_rts_opcode] = ACTIONS(253),
    [sym_sbc_opcode] = ACTIONS(253),
    [sym_sec_opcode] = ACTIONS(253),
    [sym_sed_opcode] = ACTIONS(253),
    [sym_sei_opcode] = ACTIONS(253),
    [sym_sta_opcode] = ACTIONS(253),
    [sym_stx_opcode] = ACTIONS(253),
    [sym_sty_opcode] = ACTIONS(253),
    [sym_tax_opcode] = ACTIONS(253),
    [sym_tay_opcode] = ACTIONS(253),
    [sym_tsx_opcode] = ACTIONS(253),
    [sym_txa_opcode] = ACTIONS(253),
    [sym_tcs_opcode] = ACTIONS(253),
    [sym_tya_opcode] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(251),
    [anon_sym_DASH] = ACTIONS(251),
    [anon_sym_LT] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_CARET] = ACTIONS(251),
    [anon_sym_STAR] = ACTIONS(251),
    [anon_sym_SLASH] = ACTIONS(251),
    [anon_sym_DOTMOD] = ACTIONS(251),
    [anon_sym_DOTBITAND] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(253),
    [anon_sym_DOTBITXOR] = ACTIONS(251),
    [anon_sym_DOTSHL] = ACTIONS(251),
    [anon_sym_LT_LT] = ACTIONS(251),
    [anon_sym_DOTSHR] = ACTIONS(251),
    [anon_sym_GT_GT] = ACTIONS(251),
    [anon_sym_DOTBITOR] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(253),
    [anon_sym_EQ] = ACTIONS(251),
    [anon_sym_LT_GT] = ACTIONS(251),
    [anon_sym_LT_EQ] = ACTIONS(251),
    [anon_sym_GT_EQ] = ACTIONS(251),
    [anon_sym_DOTAND] = ACTIONS(251),
    [anon_sym_AMP_AMP] = ACTIONS(251),
    [anon_sym_DOTXOR] = ACTIONS(251),
    [anon_sym_DOTOR] = ACTIONS(251),
    [anon_sym_PIPE_PIPE] = ACTIONS(251),
    [sym_a16_ctrl_cmd] = ACTIONS(251),
    [sym_a8_ctrl_cmd] = ACTIONS(251),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(251),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(251),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(251),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(251),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(251),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(251),
    [sym_bss_ctrl_cmd] = ACTIONS(251),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(251),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(251),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(251),
    [sym_code_ctrl_cmd] = ACTIONS(251),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(251),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(251),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(255),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(255),
    [anon_sym_COMMA] = ACTIONS(255),
    [anon_sym_RPAREN] = ACTIONS(255),
    [sym_adc_opcode] = ACTIONS(257),
    [sym_and_opcode] = ACTIONS(257),
    [sym_asl_opcode] = ACTIONS(257),
    [sym_bcc_opcode] = ACTIONS(257),
    [sym_bcs_opcode] = ACTIONS(257),
    [sym_beq_opcode] = ACTIONS(257),
    [sym_bit_opcode] = ACTIONS(257),
    [sym_bmi_opcode] = ACTIONS(257),
    [sym_bne_opcode] = ACTIONS(257),
    [sym_bpl_opcode] = ACTIONS(257),
    [sym_brk_opcode] = ACTIONS(257),
    [sym_bvc_opcode] = ACTIONS(257),
    [sym_bvs_opcode] = ACTIONS(257),
    [sym_clc_opcode] = ACTIONS(257),
    [sym_cld_opcode] = ACTIONS(257),
    [sym_cli_opcode] = ACTIONS(257),
    [sym_clv_opcode] = ACTIONS(257),
    [sym_cmp_opcode] = ACTIONS(257),
    [sym_cpx_opcode] = ACTIONS(257),
    [sym_cpy_opcode] = ACTIONS(257),
    [sym_dec_opcode] = ACTIONS(257),
    [sym_dex_opcode] = ACTIONS(257),
    [sym_dey_opcode] = ACTIONS(257),
    [sym_eor_opcode] = ACTIONS(257),
    [sym_inc_opcode] = ACTIONS(257),
    [sym_inx_opcode] = ACTIONS(257),
    [sym_iny_opcode] = ACTIONS(257),
    [sym_jmp_opcode] = ACTIONS(257),
    [sym_jsr_opcode] = ACTIONS(257),
    [sym_lda_opcode] = ACTIONS(257),
    [sym_ldx_opcode] = ACTIONS(257),
    [sym_ldy_opcode] = ACTIONS(257),
    [sym_lsr_opcode] = ACTIONS(257),
    [sym_nop_opcode] = ACTIONS(257),
    [sym_ora_opcode] = ACTIONS(257),
    [sym_pha_opcode] = ACTIONS(257),
    [sym_php_opcode] = ACTIONS(257),
    [sym_pla_opcode] = ACTIONS(257),
    [sym_plp_opcode] = ACTIONS(257),
    [sym_rol_opcode] = ACTIONS(257),
    [sym_ror_opcode] = ACTIONS(257),
    [sym_rti_opcode] = ACTIONS(257),
    [sym_rts_opcode] = ACTIONS(257),
    [sym_sbc_opcode] = ACTIONS(257),
    [sym_sec_opcode] = ACTIONS(257),
    [sym_sed_opcode] = ACTIONS(257),
    [sym_sei_opcode] = ACTIONS(257),
    [sym_sta_opcode] = ACTIONS(257),
    [sym_stx_opcode] = ACTIONS(257),
    [sym_sty_opcode] = ACTIONS(257),
    [sym_tax_opcode] = ACTIONS(257),
    [sym_tay_opcode] = ACTIONS(257),
    [sym_tsx_opcode] = ACTIONS(257),
    [sym_txa_opcode] = ACTIONS(257),
    [sym_tcs_opcode] = ACTIONS(257),
    [sym_tya_opcode] = ACTIONS(257),
    [anon_sym_PLUS] = ACTIONS(255),
    [anon_sym_DASH] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(257),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_CARET] = ACTIONS(255),
    [anon_sym_STAR] = ACTIONS(255),
    [anon_sym_SLASH] = ACTIONS(255),
    [anon_sym_DOTMOD] = ACTIONS(255),
    [anon_sym_DOTBITAND] = ACTIONS(255),
    [anon_sym_AMP] = ACTIONS(257),
    [anon_sym_DOTBITXOR] = ACTIONS(255),
    [anon_sym_DOTSHL] = ACTIONS(255),
    [anon_sym_LT_LT] = ACTIONS(255),
    [anon_sym_DOTSHR] = ACTIONS(255),
    [anon_sym_GT_GT] = ACTIONS(255),
    [anon_sym_DOTBITOR] = ACTIONS(255),
    [anon_sym_PIPE] = ACTIONS(257),
    [anon_sym_EQ] = ACTIONS(255),
    [anon_sym_LT_GT] = ACTIONS(255),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [anon_sym_DOTAND] = ACTIONS(255),
    [anon_sym_AMP_AMP] = ACTIONS(255),
    [anon_sym_DOTXOR] = ACTIONS(255),
    [anon_sym_DOTOR] = ACTIONS(255),
    [anon_sym_PIPE_PIPE] = ACTIONS(255),
    [sym_a16_ctrl_cmd] = ACTIONS(255),
    [sym_a8_ctrl_cmd] = ACTIONS(255),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(255),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(255),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(255),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(255),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(255),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(255),
    [sym_bss_ctrl_cmd] = ACTIONS(255),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(255),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(255),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(255),
    [sym_code_ctrl_cmd] = ACTIONS(255),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(255),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(255),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(259),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(259),
    [anon_sym_RPAREN] = ACTIONS(259),
    [sym_adc_opcode] = ACTIONS(261),
    [sym_and_opcode] = ACTIONS(261),
    [sym_asl_opcode] = ACTIONS(261),
    [sym_bcc_opcode] = ACTIONS(261),
    [sym_bcs_opcode] = ACTIONS(261),
    [sym_beq_opcode] = ACTIONS(261),
    [sym_bit_opcode] = ACTIONS(261),
    [sym_bmi_opcode] = ACTIONS(261),
    [sym_bne_opcode] = ACTIONS(261),
    [sym_bpl_opcode] = ACTIONS(261),
    [sym_brk_opcode] = ACTIONS(261),
    [sym_bvc_opcode] = ACTIONS(261),
    [sym_bvs_opcode] = ACTIONS(261),
    [sym_clc_opcode] = ACTIONS(261),
    [sym_cld_opcode] = ACTIONS(261),
    [sym_cli_opcode] = ACTIONS(261),
    [sym_clv_opcode] = ACTIONS(261),
    [sym_cmp_opcode] = ACTIONS(261),
    [sym_cpx_opcode] = ACTIONS(261),
    [sym_cpy_opcode] = ACTIONS(261),
    [sym_dec_opcode] = ACTIONS(261),
    [sym_dex_opcode] = ACTIONS(261),
    [sym_dey_opcode] = ACTIONS(261),
    [sym_eor_opcode] = ACTIONS(261),
    [sym_inc_opcode] = ACTIONS(261),
    [sym_inx_opcode] = ACTIONS(261),
    [sym_iny_opcode] = ACTIONS(261),
    [sym_jmp_opcode] = ACTIONS(261),
    [sym_jsr_opcode] = ACTIONS(261),
    [sym_lda_opcode] = ACTIONS(261),
    [sym_ldx_opcode] = ACTIONS(261),
    [sym_ldy_opcode] = ACTIONS(261),
    [sym_lsr_opcode] = ACTIONS(261),
    [sym_nop_opcode] = ACTIONS(261),
    [sym_ora_opcode] = ACTIONS(261),
    [sym_pha_opcode] = ACTIONS(261),
    [sym_php_opcode] = ACTIONS(261),
    [sym_pla_opcode] = ACTIONS(261),
    [sym_plp_opcode] = ACTIONS(261),
    [sym_rol_opcode] = ACTIONS(261),
    [sym_ror_opcode] = ACTIONS(261),
    [sym_rti_opcode] = ACTIONS(261),
    [sym_rts_opcode] = ACTIONS(261),
    [sym_sbc_opcode] = ACTIONS(261),
    [sym_sec_opcode] = ACTIONS(261),
    [sym_sed_opcode] = ACTIONS(261),
    [sym_sei_opcode] = ACTIONS(261),
    [sym_sta_opcode] = ACTIONS(261),
    [sym_stx_opcode] = ACTIONS(261),
    [sym_sty_opcode] = ACTIONS(261),
    [sym_tax_opcode] = ACTIONS(261),
    [sym_tay_opcode] = ACTIONS(261),
    [sym_tsx_opcode] = ACTIONS(261),
    [sym_txa_opcode] = ACTIONS(261),
    [sym_tcs_opcode] = ACTIONS(261),
    [sym_tya_opcode] = ACTIONS(261),
    [anon_sym_PLUS] = ACTIONS(259),
    [anon_sym_DASH] = ACTIONS(259),
    [anon_sym_LT] = ACTIONS(261),
    [anon_sym_GT] = ACTIONS(261),
    [anon_sym_CARET] = ACTIONS(259),
    [anon_sym_STAR] = ACTIONS(259),
    [anon_sym_SLASH] = ACTIONS(259),
    [anon_sym_DOTMOD] = ACTIONS(259),
    [anon_sym_DOTBITAND] = ACTIONS(259),
    [anon_sym_AMP] = ACTIONS(261),
    [anon_sym_DOTBITXOR] = ACTIONS(259),
    [anon_sym_DOTSHL] = ACTIONS(259),
    [anon_sym_LT_LT] = ACTIONS(259),
    [anon_sym_DOTSHR] = ACTIONS(259),
    [anon_sym_GT_GT] = ACTIONS(259),
    [anon_sym_DOTBITOR] = ACTIONS(259),
    [anon_sym_PIPE] = ACTIONS(261),
    [anon_sym_EQ] = ACTIONS(259),
    [anon_sym_LT_GT] = ACTIONS(259),
    [anon_sym_LT_EQ] = ACTIONS(259),
    [anon_sym_GT_EQ] = ACTIONS(259),
    [anon_sym_DOTAND] = ACTIONS(259),
    [anon_sym_AMP_AMP] = ACTIONS(259),
    [anon_sym_DOTXOR] = ACTIONS(259),
    [anon_sym_DOTOR] = ACTIONS(259),
    [anon_sym_PIPE_PIPE] = ACTIONS(259),
    [sym_a16_ctrl_cmd] = ACTIONS(259),
    [sym_a8_ctrl_cmd] = ACTIONS(259),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(259),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(259),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(259),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(259),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(259),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(259),
    [sym_bss_ctrl_cmd] = ACTIONS(259),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(259),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(259),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(259),
    [sym_code_ctrl_cmd] = ACTIONS(259),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(259),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(259),
  },
  [41] = {
    [sym_inst] = STATE(41),
    [sym_impl_addr_inst] = STATE(87),
    [sym_acc_addr_inst] = STATE(87),
    [sym_imm_addr_inst] = STATE(87),
    [sym_abs_addr_inst] = STATE(87),
    [sym_zp_addr_inst] = STATE(87),
    [sym_abs_x_addr_inst] = STATE(87),
    [sym_abs_y_addr_inst] = STATE(87),
    [sym_zp_x_addr_inst] = STATE(87),
    [sym_zp_y_addr_inst] = STATE(87),
    [sym_ind_addr_inst] = STATE(87),
    [sym_ind_x_addr_inst] = STATE(87),
    [sym_ind_y_addr_inst] = STATE(87),
    [sym_rel_addr_inst] = STATE(87),
    [sym_ctrl_cmd] = STATE(41),
    [sym_addr_ctrl_cmd] = STATE(73),
    [sym_align_ctrl_cmd] = STATE(73),
    [sym_asciiz_ctrl_cmd] = STATE(73),
    [sym_assert_ctrl_cmd] = STATE(73),
    [sym_autoimport_ctrl_cmd] = STATE(73),
    [sym_bankbytes_ctrl_cmd] = STATE(73),
    [sym_byte_ctrl_cmd] = STATE(73),
    [sym_case_ctrl_cmd] = STATE(73),
    [sym_charmap_ctrl_cmd] = STATE(73),
    [sym_condes_ctrl_cmd] = STATE(73),
    [sym_constructor_ctrl_cmd] = STATE(73),
    [aux_sym_ca65_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(263),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(265),
    [sym_adc_opcode] = ACTIONS(268),
    [sym_and_opcode] = ACTIONS(268),
    [sym_asl_opcode] = ACTIONS(271),
    [sym_bcc_opcode] = ACTIONS(274),
    [sym_bcs_opcode] = ACTIONS(274),
    [sym_beq_opcode] = ACTIONS(274),
    [sym_bit_opcode] = ACTIONS(277),
    [sym_bmi_opcode] = ACTIONS(274),
    [sym_bne_opcode] = ACTIONS(274),
    [sym_bpl_opcode] = ACTIONS(274),
    [sym_brk_opcode] = ACTIONS(280),
    [sym_bvc_opcode] = ACTIONS(274),
    [sym_bvs_opcode] = ACTIONS(274),
    [sym_clc_opcode] = ACTIONS(280),
    [sym_cld_opcode] = ACTIONS(280),
    [sym_cli_opcode] = ACTIONS(280),
    [sym_clv_opcode] = ACTIONS(280),
    [sym_cmp_opcode] = ACTIONS(268),
    [sym_cpx_opcode] = ACTIONS(283),
    [sym_cpy_opcode] = ACTIONS(283),
    [sym_dec_opcode] = ACTIONS(286),
    [sym_dex_opcode] = ACTIONS(280),
    [sym_dey_opcode] = ACTIONS(280),
    [sym_eor_opcode] = ACTIONS(268),
    [sym_inc_opcode] = ACTIONS(286),
    [sym_inx_opcode] = ACTIONS(280),
    [sym_iny_opcode] = ACTIONS(280),
    [sym_jmp_opcode] = ACTIONS(289),
    [sym_jsr_opcode] = ACTIONS(292),
    [sym_lda_opcode] = ACTIONS(268),
    [sym_ldx_opcode] = ACTIONS(295),
    [sym_ldy_opcode] = ACTIONS(298),
    [sym_lsr_opcode] = ACTIONS(298),
    [sym_nop_opcode] = ACTIONS(280),
    [sym_ora_opcode] = ACTIONS(268),
    [sym_pha_opcode] = ACTIONS(280),
    [sym_php_opcode] = ACTIONS(280),
    [sym_pla_opcode] = ACTIONS(280),
    [sym_plp_opcode] = ACTIONS(280),
    [sym_rol_opcode] = ACTIONS(271),
    [sym_ror_opcode] = ACTIONS(271),
    [sym_rti_opcode] = ACTIONS(280),
    [sym_rts_opcode] = ACTIONS(280),
    [sym_sbc_opcode] = ACTIONS(268),
    [sym_sec_opcode] = ACTIONS(280),
    [sym_sed_opcode] = ACTIONS(280),
    [sym_sei_opcode] = ACTIONS(280),
    [sym_sta_opcode] = ACTIONS(301),
    [sym_stx_opcode] = ACTIONS(304),
    [sym_sty_opcode] = ACTIONS(307),
    [sym_tax_opcode] = ACTIONS(280),
    [sym_tay_opcode] = ACTIONS(280),
    [sym_tsx_opcode] = ACTIONS(280),
    [sym_txa_opcode] = ACTIONS(280),
    [sym_tcs_opcode] = ACTIONS(280),
    [sym_tya_opcode] = ACTIONS(280),
    [sym_a16_ctrl_cmd] = ACTIONS(310),
    [sym_a8_ctrl_cmd] = ACTIONS(310),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(313),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(316),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(319),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(322),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(325),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(328),
    [sym_bss_ctrl_cmd] = ACTIONS(310),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(331),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(334),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(337),
    [sym_code_ctrl_cmd] = ACTIONS(310),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(340),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(343),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(346),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(346),
    [anon_sym_COMMA] = ACTIONS(348),
    [sym_adc_opcode] = ACTIONS(350),
    [sym_and_opcode] = ACTIONS(350),
    [sym_asl_opcode] = ACTIONS(350),
    [sym_bcc_opcode] = ACTIONS(350),
    [sym_bcs_opcode] = ACTIONS(350),
    [sym_beq_opcode] = ACTIONS(350),
    [sym_bit_opcode] = ACTIONS(350),
    [sym_bmi_opcode] = ACTIONS(350),
    [sym_bne_opcode] = ACTIONS(350),
    [sym_bpl_opcode] = ACTIONS(350),
    [sym_brk_opcode] = ACTIONS(350),
    [sym_bvc_opcode] = ACTIONS(350),
    [sym_bvs_opcode] = ACTIONS(350),
    [sym_clc_opcode] = ACTIONS(350),
    [sym_cld_opcode] = ACTIONS(350),
    [sym_cli_opcode] = ACTIONS(350),
    [sym_clv_opcode] = ACTIONS(350),
    [sym_cmp_opcode] = ACTIONS(350),
    [sym_cpx_opcode] = ACTIONS(350),
    [sym_cpy_opcode] = ACTIONS(350),
    [sym_dec_opcode] = ACTIONS(350),
    [sym_dex_opcode] = ACTIONS(350),
    [sym_dey_opcode] = ACTIONS(350),
    [sym_eor_opcode] = ACTIONS(350),
    [sym_inc_opcode] = ACTIONS(350),
    [sym_inx_opcode] = ACTIONS(350),
    [sym_iny_opcode] = ACTIONS(350),
    [sym_jmp_opcode] = ACTIONS(350),
    [sym_jsr_opcode] = ACTIONS(350),
    [sym_lda_opcode] = ACTIONS(350),
    [sym_ldx_opcode] = ACTIONS(350),
    [sym_ldy_opcode] = ACTIONS(350),
    [sym_lsr_opcode] = ACTIONS(350),
    [sym_nop_opcode] = ACTIONS(350),
    [sym_ora_opcode] = ACTIONS(350),
    [sym_pha_opcode] = ACTIONS(350),
    [sym_php_opcode] = ACTIONS(350),
    [sym_pla_opcode] = ACTIONS(350),
    [sym_plp_opcode] = ACTIONS(350),
    [sym_rol_opcode] = ACTIONS(350),
    [sym_ror_opcode] = ACTIONS(350),
    [sym_rti_opcode] = ACTIONS(350),
    [sym_rts_opcode] = ACTIONS(350),
    [sym_sbc_opcode] = ACTIONS(350),
    [sym_sec_opcode] = ACTIONS(350),
    [sym_sed_opcode] = ACTIONS(350),
    [sym_sei_opcode] = ACTIONS(350),
    [sym_sta_opcode] = ACTIONS(350),
    [sym_stx_opcode] = ACTIONS(350),
    [sym_sty_opcode] = ACTIONS(350),
    [sym_tax_opcode] = ACTIONS(350),
    [sym_tay_opcode] = ACTIONS(350),
    [sym_tsx_opcode] = ACTIONS(350),
    [sym_txa_opcode] = ACTIONS(350),
    [sym_tcs_opcode] = ACTIONS(350),
    [sym_tya_opcode] = ACTIONS(350),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_DOTMOD] = ACTIONS(87),
    [anon_sym_DOTBITAND] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(91),
    [anon_sym_DOTBITXOR] = ACTIONS(81),
    [anon_sym_DOTSHL] = ACTIONS(93),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_DOTSHR] = ACTIONS(95),
    [anon_sym_GT_GT] = ACTIONS(95),
    [anon_sym_DOTBITOR] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_EQ] = ACTIONS(101),
    [anon_sym_LT_GT] = ACTIONS(103),
    [anon_sym_LT_EQ] = ACTIONS(105),
    [anon_sym_GT_EQ] = ACTIONS(107),
    [anon_sym_DOTAND] = ACTIONS(199),
    [anon_sym_AMP_AMP] = ACTIONS(199),
    [anon_sym_DOTXOR] = ACTIONS(201),
    [anon_sym_DOTOR] = ACTIONS(207),
    [anon_sym_PIPE_PIPE] = ACTIONS(207),
    [sym_a16_ctrl_cmd] = ACTIONS(346),
    [sym_a8_ctrl_cmd] = ACTIONS(346),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(346),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(346),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(346),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(346),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(346),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(346),
    [sym_bss_ctrl_cmd] = ACTIONS(346),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(346),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(346),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(346),
    [sym_code_ctrl_cmd] = ACTIONS(346),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(346),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(346),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(352),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(352),
    [anon_sym_COMMA] = ACTIONS(352),
    [sym_adc_opcode] = ACTIONS(354),
    [sym_and_opcode] = ACTIONS(354),
    [sym_asl_opcode] = ACTIONS(354),
    [sym_bcc_opcode] = ACTIONS(354),
    [sym_bcs_opcode] = ACTIONS(354),
    [sym_beq_opcode] = ACTIONS(354),
    [sym_bit_opcode] = ACTIONS(354),
    [sym_bmi_opcode] = ACTIONS(354),
    [sym_bne_opcode] = ACTIONS(354),
    [sym_bpl_opcode] = ACTIONS(354),
    [sym_brk_opcode] = ACTIONS(354),
    [sym_bvc_opcode] = ACTIONS(354),
    [sym_bvs_opcode] = ACTIONS(354),
    [sym_clc_opcode] = ACTIONS(354),
    [sym_cld_opcode] = ACTIONS(354),
    [sym_cli_opcode] = ACTIONS(354),
    [sym_clv_opcode] = ACTIONS(354),
    [sym_cmp_opcode] = ACTIONS(354),
    [sym_cpx_opcode] = ACTIONS(354),
    [sym_cpy_opcode] = ACTIONS(354),
    [sym_dec_opcode] = ACTIONS(354),
    [sym_dex_opcode] = ACTIONS(354),
    [sym_dey_opcode] = ACTIONS(354),
    [sym_eor_opcode] = ACTIONS(354),
    [sym_inc_opcode] = ACTIONS(354),
    [sym_inx_opcode] = ACTIONS(354),
    [sym_iny_opcode] = ACTIONS(354),
    [sym_jmp_opcode] = ACTIONS(354),
    [sym_jsr_opcode] = ACTIONS(354),
    [sym_lda_opcode] = ACTIONS(354),
    [sym_ldx_opcode] = ACTIONS(354),
    [sym_ldy_opcode] = ACTIONS(354),
    [sym_lsr_opcode] = ACTIONS(354),
    [sym_nop_opcode] = ACTIONS(354),
    [sym_ora_opcode] = ACTIONS(354),
    [sym_pha_opcode] = ACTIONS(354),
    [sym_php_opcode] = ACTIONS(354),
    [sym_pla_opcode] = ACTIONS(354),
    [sym_plp_opcode] = ACTIONS(354),
    [sym_rol_opcode] = ACTIONS(354),
    [sym_ror_opcode] = ACTIONS(354),
    [sym_rti_opcode] = ACTIONS(354),
    [sym_rts_opcode] = ACTIONS(354),
    [sym_sbc_opcode] = ACTIONS(354),
    [sym_sec_opcode] = ACTIONS(354),
    [sym_sed_opcode] = ACTIONS(354),
    [sym_sei_opcode] = ACTIONS(354),
    [sym_sta_opcode] = ACTIONS(354),
    [sym_stx_opcode] = ACTIONS(354),
    [sym_sty_opcode] = ACTIONS(354),
    [sym_tax_opcode] = ACTIONS(354),
    [sym_tay_opcode] = ACTIONS(354),
    [sym_tsx_opcode] = ACTIONS(354),
    [sym_txa_opcode] = ACTIONS(354),
    [sym_tcs_opcode] = ACTIONS(354),
    [sym_tya_opcode] = ACTIONS(354),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_DOTMOD] = ACTIONS(87),
    [anon_sym_DOTBITAND] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(91),
    [anon_sym_DOTBITXOR] = ACTIONS(81),
    [anon_sym_DOTSHL] = ACTIONS(93),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_DOTSHR] = ACTIONS(95),
    [anon_sym_GT_GT] = ACTIONS(95),
    [anon_sym_DOTBITOR] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_EQ] = ACTIONS(101),
    [anon_sym_LT_GT] = ACTIONS(103),
    [anon_sym_LT_EQ] = ACTIONS(105),
    [anon_sym_GT_EQ] = ACTIONS(107),
    [anon_sym_DOTAND] = ACTIONS(199),
    [anon_sym_AMP_AMP] = ACTIONS(199),
    [anon_sym_DOTXOR] = ACTIONS(201),
    [anon_sym_DOTOR] = ACTIONS(207),
    [anon_sym_PIPE_PIPE] = ACTIONS(207),
    [sym_a16_ctrl_cmd] = ACTIONS(352),
    [sym_a8_ctrl_cmd] = ACTIONS(352),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(352),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(352),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(352),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(352),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(352),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(352),
    [sym_bss_ctrl_cmd] = ACTIONS(352),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(352),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(352),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(352),
    [sym_code_ctrl_cmd] = ACTIONS(352),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(352),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(352),
  },
  [44] = {
    [sym_inst] = STATE(41),
    [sym_impl_addr_inst] = STATE(87),
    [sym_acc_addr_inst] = STATE(87),
    [sym_imm_addr_inst] = STATE(87),
    [sym_abs_addr_inst] = STATE(87),
    [sym_zp_addr_inst] = STATE(87),
    [sym_abs_x_addr_inst] = STATE(87),
    [sym_abs_y_addr_inst] = STATE(87),
    [sym_zp_x_addr_inst] = STATE(87),
    [sym_zp_y_addr_inst] = STATE(87),
    [sym_ind_addr_inst] = STATE(87),
    [sym_ind_x_addr_inst] = STATE(87),
    [sym_ind_y_addr_inst] = STATE(87),
    [sym_rel_addr_inst] = STATE(87),
    [sym_ctrl_cmd] = STATE(41),
    [sym_addr_ctrl_cmd] = STATE(73),
    [sym_align_ctrl_cmd] = STATE(73),
    [sym_asciiz_ctrl_cmd] = STATE(73),
    [sym_assert_ctrl_cmd] = STATE(73),
    [sym_autoimport_ctrl_cmd] = STATE(73),
    [sym_bankbytes_ctrl_cmd] = STATE(73),
    [sym_byte_ctrl_cmd] = STATE(73),
    [sym_case_ctrl_cmd] = STATE(73),
    [sym_charmap_ctrl_cmd] = STATE(73),
    [sym_condes_ctrl_cmd] = STATE(73),
    [sym_constructor_ctrl_cmd] = STATE(73),
    [aux_sym_ca65_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(356),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(358),
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
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(59),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(360),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(360),
    [sym_adc_opcode] = ACTIONS(362),
    [sym_and_opcode] = ACTIONS(362),
    [sym_asl_opcode] = ACTIONS(362),
    [sym_bcc_opcode] = ACTIONS(362),
    [sym_bcs_opcode] = ACTIONS(362),
    [sym_beq_opcode] = ACTIONS(362),
    [sym_bit_opcode] = ACTIONS(362),
    [sym_bmi_opcode] = ACTIONS(362),
    [sym_bne_opcode] = ACTIONS(362),
    [sym_bpl_opcode] = ACTIONS(362),
    [sym_brk_opcode] = ACTIONS(362),
    [sym_bvc_opcode] = ACTIONS(362),
    [sym_bvs_opcode] = ACTIONS(362),
    [sym_clc_opcode] = ACTIONS(362),
    [sym_cld_opcode] = ACTIONS(362),
    [sym_cli_opcode] = ACTIONS(362),
    [sym_clv_opcode] = ACTIONS(362),
    [sym_cmp_opcode] = ACTIONS(362),
    [sym_cpx_opcode] = ACTIONS(362),
    [sym_cpy_opcode] = ACTIONS(362),
    [sym_dec_opcode] = ACTIONS(362),
    [sym_dex_opcode] = ACTIONS(362),
    [sym_dey_opcode] = ACTIONS(362),
    [sym_eor_opcode] = ACTIONS(362),
    [sym_inc_opcode] = ACTIONS(362),
    [sym_inx_opcode] = ACTIONS(362),
    [sym_iny_opcode] = ACTIONS(362),
    [sym_jmp_opcode] = ACTIONS(362),
    [sym_jsr_opcode] = ACTIONS(362),
    [sym_lda_opcode] = ACTIONS(362),
    [sym_ldx_opcode] = ACTIONS(362),
    [sym_ldy_opcode] = ACTIONS(362),
    [sym_lsr_opcode] = ACTIONS(362),
    [sym_nop_opcode] = ACTIONS(362),
    [sym_ora_opcode] = ACTIONS(362),
    [sym_pha_opcode] = ACTIONS(362),
    [sym_php_opcode] = ACTIONS(362),
    [sym_pla_opcode] = ACTIONS(362),
    [sym_plp_opcode] = ACTIONS(362),
    [sym_rol_opcode] = ACTIONS(362),
    [sym_ror_opcode] = ACTIONS(362),
    [sym_rti_opcode] = ACTIONS(362),
    [sym_rts_opcode] = ACTIONS(362),
    [sym_sbc_opcode] = ACTIONS(362),
    [sym_sec_opcode] = ACTIONS(362),
    [sym_sed_opcode] = ACTIONS(362),
    [sym_sei_opcode] = ACTIONS(362),
    [sym_sta_opcode] = ACTIONS(362),
    [sym_stx_opcode] = ACTIONS(362),
    [sym_sty_opcode] = ACTIONS(362),
    [sym_tax_opcode] = ACTIONS(362),
    [sym_tay_opcode] = ACTIONS(362),
    [sym_tsx_opcode] = ACTIONS(362),
    [sym_txa_opcode] = ACTIONS(362),
    [sym_tcs_opcode] = ACTIONS(362),
    [sym_tya_opcode] = ACTIONS(362),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_DOTMOD] = ACTIONS(87),
    [anon_sym_DOTBITAND] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(91),
    [anon_sym_DOTBITXOR] = ACTIONS(81),
    [anon_sym_DOTSHL] = ACTIONS(93),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_DOTSHR] = ACTIONS(95),
    [anon_sym_GT_GT] = ACTIONS(95),
    [anon_sym_DOTBITOR] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_EQ] = ACTIONS(101),
    [anon_sym_LT_GT] = ACTIONS(103),
    [anon_sym_LT_EQ] = ACTIONS(105),
    [anon_sym_GT_EQ] = ACTIONS(107),
    [anon_sym_DOTAND] = ACTIONS(199),
    [anon_sym_AMP_AMP] = ACTIONS(199),
    [anon_sym_DOTXOR] = ACTIONS(201),
    [anon_sym_DOTOR] = ACTIONS(207),
    [anon_sym_PIPE_PIPE] = ACTIONS(207),
    [sym_a16_ctrl_cmd] = ACTIONS(360),
    [sym_a8_ctrl_cmd] = ACTIONS(360),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(360),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(360),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(360),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(360),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(360),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(360),
    [sym_bss_ctrl_cmd] = ACTIONS(360),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(360),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(360),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(360),
    [sym_code_ctrl_cmd] = ACTIONS(360),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(360),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(360),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(364),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(364),
    [sym_adc_opcode] = ACTIONS(366),
    [sym_and_opcode] = ACTIONS(366),
    [sym_asl_opcode] = ACTIONS(366),
    [sym_bcc_opcode] = ACTIONS(366),
    [sym_bcs_opcode] = ACTIONS(366),
    [sym_beq_opcode] = ACTIONS(366),
    [sym_bit_opcode] = ACTIONS(366),
    [sym_bmi_opcode] = ACTIONS(366),
    [sym_bne_opcode] = ACTIONS(366),
    [sym_bpl_opcode] = ACTIONS(366),
    [sym_brk_opcode] = ACTIONS(366),
    [sym_bvc_opcode] = ACTIONS(366),
    [sym_bvs_opcode] = ACTIONS(366),
    [sym_clc_opcode] = ACTIONS(366),
    [sym_cld_opcode] = ACTIONS(366),
    [sym_cli_opcode] = ACTIONS(366),
    [sym_clv_opcode] = ACTIONS(366),
    [sym_cmp_opcode] = ACTIONS(366),
    [sym_cpx_opcode] = ACTIONS(366),
    [sym_cpy_opcode] = ACTIONS(366),
    [sym_dec_opcode] = ACTIONS(366),
    [sym_dex_opcode] = ACTIONS(366),
    [sym_dey_opcode] = ACTIONS(366),
    [sym_eor_opcode] = ACTIONS(366),
    [sym_inc_opcode] = ACTIONS(366),
    [sym_inx_opcode] = ACTIONS(366),
    [sym_iny_opcode] = ACTIONS(366),
    [sym_jmp_opcode] = ACTIONS(366),
    [sym_jsr_opcode] = ACTIONS(366),
    [sym_lda_opcode] = ACTIONS(366),
    [sym_ldx_opcode] = ACTIONS(366),
    [sym_ldy_opcode] = ACTIONS(366),
    [sym_lsr_opcode] = ACTIONS(366),
    [sym_nop_opcode] = ACTIONS(366),
    [sym_ora_opcode] = ACTIONS(366),
    [sym_pha_opcode] = ACTIONS(366),
    [sym_php_opcode] = ACTIONS(366),
    [sym_pla_opcode] = ACTIONS(366),
    [sym_plp_opcode] = ACTIONS(366),
    [sym_rol_opcode] = ACTIONS(366),
    [sym_ror_opcode] = ACTIONS(366),
    [sym_rti_opcode] = ACTIONS(366),
    [sym_rts_opcode] = ACTIONS(366),
    [sym_sbc_opcode] = ACTIONS(366),
    [sym_sec_opcode] = ACTIONS(366),
    [sym_sed_opcode] = ACTIONS(366),
    [sym_sei_opcode] = ACTIONS(366),
    [sym_sta_opcode] = ACTIONS(366),
    [sym_stx_opcode] = ACTIONS(366),
    [sym_sty_opcode] = ACTIONS(366),
    [sym_tax_opcode] = ACTIONS(366),
    [sym_tay_opcode] = ACTIONS(366),
    [sym_tsx_opcode] = ACTIONS(366),
    [sym_txa_opcode] = ACTIONS(366),
    [sym_tcs_opcode] = ACTIONS(366),
    [sym_tya_opcode] = ACTIONS(366),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_DOTMOD] = ACTIONS(87),
    [anon_sym_DOTBITAND] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(91),
    [anon_sym_DOTBITXOR] = ACTIONS(81),
    [anon_sym_DOTSHL] = ACTIONS(93),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_DOTSHR] = ACTIONS(95),
    [anon_sym_GT_GT] = ACTIONS(95),
    [anon_sym_DOTBITOR] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_EQ] = ACTIONS(101),
    [anon_sym_LT_GT] = ACTIONS(103),
    [anon_sym_LT_EQ] = ACTIONS(105),
    [anon_sym_GT_EQ] = ACTIONS(107),
    [anon_sym_DOTAND] = ACTIONS(199),
    [anon_sym_AMP_AMP] = ACTIONS(199),
    [anon_sym_DOTXOR] = ACTIONS(201),
    [anon_sym_DOTOR] = ACTIONS(207),
    [anon_sym_PIPE_PIPE] = ACTIONS(207),
    [sym_a16_ctrl_cmd] = ACTIONS(364),
    [sym_a8_ctrl_cmd] = ACTIONS(364),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(364),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(364),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(364),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(364),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(364),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(364),
    [sym_bss_ctrl_cmd] = ACTIONS(364),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(364),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(364),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(364),
    [sym_code_ctrl_cmd] = ACTIONS(364),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(364),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(364),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(368),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(368),
    [sym_adc_opcode] = ACTIONS(370),
    [sym_and_opcode] = ACTIONS(370),
    [sym_asl_opcode] = ACTIONS(370),
    [sym_bcc_opcode] = ACTIONS(370),
    [sym_bcs_opcode] = ACTIONS(370),
    [sym_beq_opcode] = ACTIONS(370),
    [sym_bit_opcode] = ACTIONS(370),
    [sym_bmi_opcode] = ACTIONS(370),
    [sym_bne_opcode] = ACTIONS(370),
    [sym_bpl_opcode] = ACTIONS(370),
    [sym_brk_opcode] = ACTIONS(370),
    [sym_bvc_opcode] = ACTIONS(370),
    [sym_bvs_opcode] = ACTIONS(370),
    [sym_clc_opcode] = ACTIONS(370),
    [sym_cld_opcode] = ACTIONS(370),
    [sym_cli_opcode] = ACTIONS(370),
    [sym_clv_opcode] = ACTIONS(370),
    [sym_cmp_opcode] = ACTIONS(370),
    [sym_cpx_opcode] = ACTIONS(370),
    [sym_cpy_opcode] = ACTIONS(370),
    [sym_dec_opcode] = ACTIONS(370),
    [sym_dex_opcode] = ACTIONS(370),
    [sym_dey_opcode] = ACTIONS(370),
    [sym_eor_opcode] = ACTIONS(370),
    [sym_inc_opcode] = ACTIONS(370),
    [sym_inx_opcode] = ACTIONS(370),
    [sym_iny_opcode] = ACTIONS(370),
    [sym_jmp_opcode] = ACTIONS(370),
    [sym_jsr_opcode] = ACTIONS(370),
    [sym_lda_opcode] = ACTIONS(370),
    [sym_ldx_opcode] = ACTIONS(370),
    [sym_ldy_opcode] = ACTIONS(370),
    [sym_lsr_opcode] = ACTIONS(370),
    [sym_nop_opcode] = ACTIONS(370),
    [sym_ora_opcode] = ACTIONS(370),
    [sym_pha_opcode] = ACTIONS(370),
    [sym_php_opcode] = ACTIONS(370),
    [sym_pla_opcode] = ACTIONS(370),
    [sym_plp_opcode] = ACTIONS(370),
    [sym_rol_opcode] = ACTIONS(370),
    [sym_ror_opcode] = ACTIONS(370),
    [sym_rti_opcode] = ACTIONS(370),
    [sym_rts_opcode] = ACTIONS(370),
    [sym_sbc_opcode] = ACTIONS(370),
    [sym_sec_opcode] = ACTIONS(370),
    [sym_sed_opcode] = ACTIONS(370),
    [sym_sei_opcode] = ACTIONS(370),
    [sym_sta_opcode] = ACTIONS(370),
    [sym_stx_opcode] = ACTIONS(370),
    [sym_sty_opcode] = ACTIONS(370),
    [sym_tax_opcode] = ACTIONS(370),
    [sym_tay_opcode] = ACTIONS(370),
    [sym_tsx_opcode] = ACTIONS(370),
    [sym_txa_opcode] = ACTIONS(370),
    [sym_tcs_opcode] = ACTIONS(370),
    [sym_tya_opcode] = ACTIONS(370),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_DOTMOD] = ACTIONS(87),
    [anon_sym_DOTBITAND] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(91),
    [anon_sym_DOTBITXOR] = ACTIONS(81),
    [anon_sym_DOTSHL] = ACTIONS(93),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_DOTSHR] = ACTIONS(95),
    [anon_sym_GT_GT] = ACTIONS(95),
    [anon_sym_DOTBITOR] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_EQ] = ACTIONS(101),
    [anon_sym_LT_GT] = ACTIONS(103),
    [anon_sym_LT_EQ] = ACTIONS(105),
    [anon_sym_GT_EQ] = ACTIONS(107),
    [anon_sym_DOTAND] = ACTIONS(199),
    [anon_sym_AMP_AMP] = ACTIONS(199),
    [anon_sym_DOTXOR] = ACTIONS(201),
    [anon_sym_DOTOR] = ACTIONS(207),
    [anon_sym_PIPE_PIPE] = ACTIONS(207),
    [sym_a16_ctrl_cmd] = ACTIONS(368),
    [sym_a8_ctrl_cmd] = ACTIONS(368),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(368),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(368),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(368),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(368),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(368),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(368),
    [sym_bss_ctrl_cmd] = ACTIONS(368),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(368),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(368),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(368),
    [sym_code_ctrl_cmd] = ACTIONS(368),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(368),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(368),
  },
  [48] = {
    [aux_sym_addr_ctrl_cmd_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(372),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(372),
    [anon_sym_COMMA] = ACTIONS(374),
    [sym_adc_opcode] = ACTIONS(377),
    [sym_and_opcode] = ACTIONS(377),
    [sym_asl_opcode] = ACTIONS(377),
    [sym_bcc_opcode] = ACTIONS(377),
    [sym_bcs_opcode] = ACTIONS(377),
    [sym_beq_opcode] = ACTIONS(377),
    [sym_bit_opcode] = ACTIONS(377),
    [sym_bmi_opcode] = ACTIONS(377),
    [sym_bne_opcode] = ACTIONS(377),
    [sym_bpl_opcode] = ACTIONS(377),
    [sym_brk_opcode] = ACTIONS(377),
    [sym_bvc_opcode] = ACTIONS(377),
    [sym_bvs_opcode] = ACTIONS(377),
    [sym_clc_opcode] = ACTIONS(377),
    [sym_cld_opcode] = ACTIONS(377),
    [sym_cli_opcode] = ACTIONS(377),
    [sym_clv_opcode] = ACTIONS(377),
    [sym_cmp_opcode] = ACTIONS(377),
    [sym_cpx_opcode] = ACTIONS(377),
    [sym_cpy_opcode] = ACTIONS(377),
    [sym_dec_opcode] = ACTIONS(377),
    [sym_dex_opcode] = ACTIONS(377),
    [sym_dey_opcode] = ACTIONS(377),
    [sym_eor_opcode] = ACTIONS(377),
    [sym_inc_opcode] = ACTIONS(377),
    [sym_inx_opcode] = ACTIONS(377),
    [sym_iny_opcode] = ACTIONS(377),
    [sym_jmp_opcode] = ACTIONS(377),
    [sym_jsr_opcode] = ACTIONS(377),
    [sym_lda_opcode] = ACTIONS(377),
    [sym_ldx_opcode] = ACTIONS(377),
    [sym_ldy_opcode] = ACTIONS(377),
    [sym_lsr_opcode] = ACTIONS(377),
    [sym_nop_opcode] = ACTIONS(377),
    [sym_ora_opcode] = ACTIONS(377),
    [sym_pha_opcode] = ACTIONS(377),
    [sym_php_opcode] = ACTIONS(377),
    [sym_pla_opcode] = ACTIONS(377),
    [sym_plp_opcode] = ACTIONS(377),
    [sym_rol_opcode] = ACTIONS(377),
    [sym_ror_opcode] = ACTIONS(377),
    [sym_rti_opcode] = ACTIONS(377),
    [sym_rts_opcode] = ACTIONS(377),
    [sym_sbc_opcode] = ACTIONS(377),
    [sym_sec_opcode] = ACTIONS(377),
    [sym_sed_opcode] = ACTIONS(377),
    [sym_sei_opcode] = ACTIONS(377),
    [sym_sta_opcode] = ACTIONS(377),
    [sym_stx_opcode] = ACTIONS(377),
    [sym_sty_opcode] = ACTIONS(377),
    [sym_tax_opcode] = ACTIONS(377),
    [sym_tay_opcode] = ACTIONS(377),
    [sym_tsx_opcode] = ACTIONS(377),
    [sym_txa_opcode] = ACTIONS(377),
    [sym_tcs_opcode] = ACTIONS(377),
    [sym_tya_opcode] = ACTIONS(377),
    [sym_a16_ctrl_cmd] = ACTIONS(372),
    [sym_a8_ctrl_cmd] = ACTIONS(372),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(372),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(372),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(372),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(372),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(372),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(372),
    [sym_bss_ctrl_cmd] = ACTIONS(372),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(372),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(372),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(372),
    [sym_code_ctrl_cmd] = ACTIONS(372),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(372),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(372),
  },
  [49] = {
    [aux_sym_addr_ctrl_cmd_repeat1] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(379),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(379),
    [anon_sym_COMMA] = ACTIONS(381),
    [sym_adc_opcode] = ACTIONS(383),
    [sym_and_opcode] = ACTIONS(383),
    [sym_asl_opcode] = ACTIONS(383),
    [sym_bcc_opcode] = ACTIONS(383),
    [sym_bcs_opcode] = ACTIONS(383),
    [sym_beq_opcode] = ACTIONS(383),
    [sym_bit_opcode] = ACTIONS(383),
    [sym_bmi_opcode] = ACTIONS(383),
    [sym_bne_opcode] = ACTIONS(383),
    [sym_bpl_opcode] = ACTIONS(383),
    [sym_brk_opcode] = ACTIONS(383),
    [sym_bvc_opcode] = ACTIONS(383),
    [sym_bvs_opcode] = ACTIONS(383),
    [sym_clc_opcode] = ACTIONS(383),
    [sym_cld_opcode] = ACTIONS(383),
    [sym_cli_opcode] = ACTIONS(383),
    [sym_clv_opcode] = ACTIONS(383),
    [sym_cmp_opcode] = ACTIONS(383),
    [sym_cpx_opcode] = ACTIONS(383),
    [sym_cpy_opcode] = ACTIONS(383),
    [sym_dec_opcode] = ACTIONS(383),
    [sym_dex_opcode] = ACTIONS(383),
    [sym_dey_opcode] = ACTIONS(383),
    [sym_eor_opcode] = ACTIONS(383),
    [sym_inc_opcode] = ACTIONS(383),
    [sym_inx_opcode] = ACTIONS(383),
    [sym_iny_opcode] = ACTIONS(383),
    [sym_jmp_opcode] = ACTIONS(383),
    [sym_jsr_opcode] = ACTIONS(383),
    [sym_lda_opcode] = ACTIONS(383),
    [sym_ldx_opcode] = ACTIONS(383),
    [sym_ldy_opcode] = ACTIONS(383),
    [sym_lsr_opcode] = ACTIONS(383),
    [sym_nop_opcode] = ACTIONS(383),
    [sym_ora_opcode] = ACTIONS(383),
    [sym_pha_opcode] = ACTIONS(383),
    [sym_php_opcode] = ACTIONS(383),
    [sym_pla_opcode] = ACTIONS(383),
    [sym_plp_opcode] = ACTIONS(383),
    [sym_rol_opcode] = ACTIONS(383),
    [sym_ror_opcode] = ACTIONS(383),
    [sym_rti_opcode] = ACTIONS(383),
    [sym_rts_opcode] = ACTIONS(383),
    [sym_sbc_opcode] = ACTIONS(383),
    [sym_sec_opcode] = ACTIONS(383),
    [sym_sed_opcode] = ACTIONS(383),
    [sym_sei_opcode] = ACTIONS(383),
    [sym_sta_opcode] = ACTIONS(383),
    [sym_stx_opcode] = ACTIONS(383),
    [sym_sty_opcode] = ACTIONS(383),
    [sym_tax_opcode] = ACTIONS(383),
    [sym_tay_opcode] = ACTIONS(383),
    [sym_tsx_opcode] = ACTIONS(383),
    [sym_txa_opcode] = ACTIONS(383),
    [sym_tcs_opcode] = ACTIONS(383),
    [sym_tya_opcode] = ACTIONS(383),
    [sym_a16_ctrl_cmd] = ACTIONS(379),
    [sym_a8_ctrl_cmd] = ACTIONS(379),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(379),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(379),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(379),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(379),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(379),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(379),
    [sym_bss_ctrl_cmd] = ACTIONS(379),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(379),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(379),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(379),
    [sym_code_ctrl_cmd] = ACTIONS(379),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(379),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(379),
  },
  [50] = {
    [aux_sym_asciiz_ctrl_cmd_repeat1] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(385),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(385),
    [anon_sym_COMMA] = ACTIONS(387),
    [sym_adc_opcode] = ACTIONS(389),
    [sym_and_opcode] = ACTIONS(389),
    [sym_asl_opcode] = ACTIONS(389),
    [sym_bcc_opcode] = ACTIONS(389),
    [sym_bcs_opcode] = ACTIONS(389),
    [sym_beq_opcode] = ACTIONS(389),
    [sym_bit_opcode] = ACTIONS(389),
    [sym_bmi_opcode] = ACTIONS(389),
    [sym_bne_opcode] = ACTIONS(389),
    [sym_bpl_opcode] = ACTIONS(389),
    [sym_brk_opcode] = ACTIONS(389),
    [sym_bvc_opcode] = ACTIONS(389),
    [sym_bvs_opcode] = ACTIONS(389),
    [sym_clc_opcode] = ACTIONS(389),
    [sym_cld_opcode] = ACTIONS(389),
    [sym_cli_opcode] = ACTIONS(389),
    [sym_clv_opcode] = ACTIONS(389),
    [sym_cmp_opcode] = ACTIONS(389),
    [sym_cpx_opcode] = ACTIONS(389),
    [sym_cpy_opcode] = ACTIONS(389),
    [sym_dec_opcode] = ACTIONS(389),
    [sym_dex_opcode] = ACTIONS(389),
    [sym_dey_opcode] = ACTIONS(389),
    [sym_eor_opcode] = ACTIONS(389),
    [sym_inc_opcode] = ACTIONS(389),
    [sym_inx_opcode] = ACTIONS(389),
    [sym_iny_opcode] = ACTIONS(389),
    [sym_jmp_opcode] = ACTIONS(389),
    [sym_jsr_opcode] = ACTIONS(389),
    [sym_lda_opcode] = ACTIONS(389),
    [sym_ldx_opcode] = ACTIONS(389),
    [sym_ldy_opcode] = ACTIONS(389),
    [sym_lsr_opcode] = ACTIONS(389),
    [sym_nop_opcode] = ACTIONS(389),
    [sym_ora_opcode] = ACTIONS(389),
    [sym_pha_opcode] = ACTIONS(389),
    [sym_php_opcode] = ACTIONS(389),
    [sym_pla_opcode] = ACTIONS(389),
    [sym_plp_opcode] = ACTIONS(389),
    [sym_rol_opcode] = ACTIONS(389),
    [sym_ror_opcode] = ACTIONS(389),
    [sym_rti_opcode] = ACTIONS(389),
    [sym_rts_opcode] = ACTIONS(389),
    [sym_sbc_opcode] = ACTIONS(389),
    [sym_sec_opcode] = ACTIONS(389),
    [sym_sed_opcode] = ACTIONS(389),
    [sym_sei_opcode] = ACTIONS(389),
    [sym_sta_opcode] = ACTIONS(389),
    [sym_stx_opcode] = ACTIONS(389),
    [sym_sty_opcode] = ACTIONS(389),
    [sym_tax_opcode] = ACTIONS(389),
    [sym_tay_opcode] = ACTIONS(389),
    [sym_tsx_opcode] = ACTIONS(389),
    [sym_txa_opcode] = ACTIONS(389),
    [sym_tcs_opcode] = ACTIONS(389),
    [sym_tya_opcode] = ACTIONS(389),
    [sym_a16_ctrl_cmd] = ACTIONS(385),
    [sym_a8_ctrl_cmd] = ACTIONS(385),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(385),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(385),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(385),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(385),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(385),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(385),
    [sym_bss_ctrl_cmd] = ACTIONS(385),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(385),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(385),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(385),
    [sym_code_ctrl_cmd] = ACTIONS(385),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(385),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(385),
  },
  [51] = {
    [aux_sym_bankbytes_ctrl_cmd_repeat1] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(391),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(391),
    [anon_sym_COMMA] = ACTIONS(223),
    [sym_adc_opcode] = ACTIONS(393),
    [sym_and_opcode] = ACTIONS(393),
    [sym_asl_opcode] = ACTIONS(393),
    [sym_bcc_opcode] = ACTIONS(393),
    [sym_bcs_opcode] = ACTIONS(393),
    [sym_beq_opcode] = ACTIONS(393),
    [sym_bit_opcode] = ACTIONS(393),
    [sym_bmi_opcode] = ACTIONS(393),
    [sym_bne_opcode] = ACTIONS(393),
    [sym_bpl_opcode] = ACTIONS(393),
    [sym_brk_opcode] = ACTIONS(393),
    [sym_bvc_opcode] = ACTIONS(393),
    [sym_bvs_opcode] = ACTIONS(393),
    [sym_clc_opcode] = ACTIONS(393),
    [sym_cld_opcode] = ACTIONS(393),
    [sym_cli_opcode] = ACTIONS(393),
    [sym_clv_opcode] = ACTIONS(393),
    [sym_cmp_opcode] = ACTIONS(393),
    [sym_cpx_opcode] = ACTIONS(393),
    [sym_cpy_opcode] = ACTIONS(393),
    [sym_dec_opcode] = ACTIONS(393),
    [sym_dex_opcode] = ACTIONS(393),
    [sym_dey_opcode] = ACTIONS(393),
    [sym_eor_opcode] = ACTIONS(393),
    [sym_inc_opcode] = ACTIONS(393),
    [sym_inx_opcode] = ACTIONS(393),
    [sym_iny_opcode] = ACTIONS(393),
    [sym_jmp_opcode] = ACTIONS(393),
    [sym_jsr_opcode] = ACTIONS(393),
    [sym_lda_opcode] = ACTIONS(393),
    [sym_ldx_opcode] = ACTIONS(393),
    [sym_ldy_opcode] = ACTIONS(393),
    [sym_lsr_opcode] = ACTIONS(393),
    [sym_nop_opcode] = ACTIONS(393),
    [sym_ora_opcode] = ACTIONS(393),
    [sym_pha_opcode] = ACTIONS(393),
    [sym_php_opcode] = ACTIONS(393),
    [sym_pla_opcode] = ACTIONS(393),
    [sym_plp_opcode] = ACTIONS(393),
    [sym_rol_opcode] = ACTIONS(393),
    [sym_ror_opcode] = ACTIONS(393),
    [sym_rti_opcode] = ACTIONS(393),
    [sym_rts_opcode] = ACTIONS(393),
    [sym_sbc_opcode] = ACTIONS(393),
    [sym_sec_opcode] = ACTIONS(393),
    [sym_sed_opcode] = ACTIONS(393),
    [sym_sei_opcode] = ACTIONS(393),
    [sym_sta_opcode] = ACTIONS(393),
    [sym_stx_opcode] = ACTIONS(393),
    [sym_sty_opcode] = ACTIONS(393),
    [sym_tax_opcode] = ACTIONS(393),
    [sym_tay_opcode] = ACTIONS(393),
    [sym_tsx_opcode] = ACTIONS(393),
    [sym_txa_opcode] = ACTIONS(393),
    [sym_tcs_opcode] = ACTIONS(393),
    [sym_tya_opcode] = ACTIONS(393),
    [sym_a16_ctrl_cmd] = ACTIONS(391),
    [sym_a8_ctrl_cmd] = ACTIONS(391),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(391),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(391),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(391),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(391),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(391),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(391),
    [sym_bss_ctrl_cmd] = ACTIONS(391),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(391),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(391),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(391),
    [sym_code_ctrl_cmd] = ACTIONS(391),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(391),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(391),
  },
  [52] = {
    [aux_sym_bankbytes_ctrl_cmd_repeat1] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(395),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(395),
    [anon_sym_COMMA] = ACTIONS(223),
    [sym_adc_opcode] = ACTIONS(397),
    [sym_and_opcode] = ACTIONS(397),
    [sym_asl_opcode] = ACTIONS(397),
    [sym_bcc_opcode] = ACTIONS(397),
    [sym_bcs_opcode] = ACTIONS(397),
    [sym_beq_opcode] = ACTIONS(397),
    [sym_bit_opcode] = ACTIONS(397),
    [sym_bmi_opcode] = ACTIONS(397),
    [sym_bne_opcode] = ACTIONS(397),
    [sym_bpl_opcode] = ACTIONS(397),
    [sym_brk_opcode] = ACTIONS(397),
    [sym_bvc_opcode] = ACTIONS(397),
    [sym_bvs_opcode] = ACTIONS(397),
    [sym_clc_opcode] = ACTIONS(397),
    [sym_cld_opcode] = ACTIONS(397),
    [sym_cli_opcode] = ACTIONS(397),
    [sym_clv_opcode] = ACTIONS(397),
    [sym_cmp_opcode] = ACTIONS(397),
    [sym_cpx_opcode] = ACTIONS(397),
    [sym_cpy_opcode] = ACTIONS(397),
    [sym_dec_opcode] = ACTIONS(397),
    [sym_dex_opcode] = ACTIONS(397),
    [sym_dey_opcode] = ACTIONS(397),
    [sym_eor_opcode] = ACTIONS(397),
    [sym_inc_opcode] = ACTIONS(397),
    [sym_inx_opcode] = ACTIONS(397),
    [sym_iny_opcode] = ACTIONS(397),
    [sym_jmp_opcode] = ACTIONS(397),
    [sym_jsr_opcode] = ACTIONS(397),
    [sym_lda_opcode] = ACTIONS(397),
    [sym_ldx_opcode] = ACTIONS(397),
    [sym_ldy_opcode] = ACTIONS(397),
    [sym_lsr_opcode] = ACTIONS(397),
    [sym_nop_opcode] = ACTIONS(397),
    [sym_ora_opcode] = ACTIONS(397),
    [sym_pha_opcode] = ACTIONS(397),
    [sym_php_opcode] = ACTIONS(397),
    [sym_pla_opcode] = ACTIONS(397),
    [sym_plp_opcode] = ACTIONS(397),
    [sym_rol_opcode] = ACTIONS(397),
    [sym_ror_opcode] = ACTIONS(397),
    [sym_rti_opcode] = ACTIONS(397),
    [sym_rts_opcode] = ACTIONS(397),
    [sym_sbc_opcode] = ACTIONS(397),
    [sym_sec_opcode] = ACTIONS(397),
    [sym_sed_opcode] = ACTIONS(397),
    [sym_sei_opcode] = ACTIONS(397),
    [sym_sta_opcode] = ACTIONS(397),
    [sym_stx_opcode] = ACTIONS(397),
    [sym_sty_opcode] = ACTIONS(397),
    [sym_tax_opcode] = ACTIONS(397),
    [sym_tay_opcode] = ACTIONS(397),
    [sym_tsx_opcode] = ACTIONS(397),
    [sym_txa_opcode] = ACTIONS(397),
    [sym_tcs_opcode] = ACTIONS(397),
    [sym_tya_opcode] = ACTIONS(397),
    [sym_a16_ctrl_cmd] = ACTIONS(395),
    [sym_a8_ctrl_cmd] = ACTIONS(395),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(395),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(395),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(395),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(395),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(395),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(395),
    [sym_bss_ctrl_cmd] = ACTIONS(395),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(395),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(395),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(395),
    [sym_code_ctrl_cmd] = ACTIONS(395),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(395),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(395),
  },
  [53] = {
    [aux_sym_asciiz_ctrl_cmd_repeat1] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(399),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(399),
    [anon_sym_COMMA] = ACTIONS(387),
    [sym_adc_opcode] = ACTIONS(401),
    [sym_and_opcode] = ACTIONS(401),
    [sym_asl_opcode] = ACTIONS(401),
    [sym_bcc_opcode] = ACTIONS(401),
    [sym_bcs_opcode] = ACTIONS(401),
    [sym_beq_opcode] = ACTIONS(401),
    [sym_bit_opcode] = ACTIONS(401),
    [sym_bmi_opcode] = ACTIONS(401),
    [sym_bne_opcode] = ACTIONS(401),
    [sym_bpl_opcode] = ACTIONS(401),
    [sym_brk_opcode] = ACTIONS(401),
    [sym_bvc_opcode] = ACTIONS(401),
    [sym_bvs_opcode] = ACTIONS(401),
    [sym_clc_opcode] = ACTIONS(401),
    [sym_cld_opcode] = ACTIONS(401),
    [sym_cli_opcode] = ACTIONS(401),
    [sym_clv_opcode] = ACTIONS(401),
    [sym_cmp_opcode] = ACTIONS(401),
    [sym_cpx_opcode] = ACTIONS(401),
    [sym_cpy_opcode] = ACTIONS(401),
    [sym_dec_opcode] = ACTIONS(401),
    [sym_dex_opcode] = ACTIONS(401),
    [sym_dey_opcode] = ACTIONS(401),
    [sym_eor_opcode] = ACTIONS(401),
    [sym_inc_opcode] = ACTIONS(401),
    [sym_inx_opcode] = ACTIONS(401),
    [sym_iny_opcode] = ACTIONS(401),
    [sym_jmp_opcode] = ACTIONS(401),
    [sym_jsr_opcode] = ACTIONS(401),
    [sym_lda_opcode] = ACTIONS(401),
    [sym_ldx_opcode] = ACTIONS(401),
    [sym_ldy_opcode] = ACTIONS(401),
    [sym_lsr_opcode] = ACTIONS(401),
    [sym_nop_opcode] = ACTIONS(401),
    [sym_ora_opcode] = ACTIONS(401),
    [sym_pha_opcode] = ACTIONS(401),
    [sym_php_opcode] = ACTIONS(401),
    [sym_pla_opcode] = ACTIONS(401),
    [sym_plp_opcode] = ACTIONS(401),
    [sym_rol_opcode] = ACTIONS(401),
    [sym_ror_opcode] = ACTIONS(401),
    [sym_rti_opcode] = ACTIONS(401),
    [sym_rts_opcode] = ACTIONS(401),
    [sym_sbc_opcode] = ACTIONS(401),
    [sym_sec_opcode] = ACTIONS(401),
    [sym_sed_opcode] = ACTIONS(401),
    [sym_sei_opcode] = ACTIONS(401),
    [sym_sta_opcode] = ACTIONS(401),
    [sym_stx_opcode] = ACTIONS(401),
    [sym_sty_opcode] = ACTIONS(401),
    [sym_tax_opcode] = ACTIONS(401),
    [sym_tay_opcode] = ACTIONS(401),
    [sym_tsx_opcode] = ACTIONS(401),
    [sym_txa_opcode] = ACTIONS(401),
    [sym_tcs_opcode] = ACTIONS(401),
    [sym_tya_opcode] = ACTIONS(401),
    [sym_a16_ctrl_cmd] = ACTIONS(399),
    [sym_a8_ctrl_cmd] = ACTIONS(399),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(399),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(399),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(399),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(399),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(399),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(399),
    [sym_bss_ctrl_cmd] = ACTIONS(399),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(399),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(399),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(399),
    [sym_code_ctrl_cmd] = ACTIONS(399),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(399),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(399),
  },
  [54] = {
    [aux_sym_bankbytes_ctrl_cmd_repeat1] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(352),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(352),
    [anon_sym_COMMA] = ACTIONS(403),
    [sym_adc_opcode] = ACTIONS(354),
    [sym_and_opcode] = ACTIONS(354),
    [sym_asl_opcode] = ACTIONS(354),
    [sym_bcc_opcode] = ACTIONS(354),
    [sym_bcs_opcode] = ACTIONS(354),
    [sym_beq_opcode] = ACTIONS(354),
    [sym_bit_opcode] = ACTIONS(354),
    [sym_bmi_opcode] = ACTIONS(354),
    [sym_bne_opcode] = ACTIONS(354),
    [sym_bpl_opcode] = ACTIONS(354),
    [sym_brk_opcode] = ACTIONS(354),
    [sym_bvc_opcode] = ACTIONS(354),
    [sym_bvs_opcode] = ACTIONS(354),
    [sym_clc_opcode] = ACTIONS(354),
    [sym_cld_opcode] = ACTIONS(354),
    [sym_cli_opcode] = ACTIONS(354),
    [sym_clv_opcode] = ACTIONS(354),
    [sym_cmp_opcode] = ACTIONS(354),
    [sym_cpx_opcode] = ACTIONS(354),
    [sym_cpy_opcode] = ACTIONS(354),
    [sym_dec_opcode] = ACTIONS(354),
    [sym_dex_opcode] = ACTIONS(354),
    [sym_dey_opcode] = ACTIONS(354),
    [sym_eor_opcode] = ACTIONS(354),
    [sym_inc_opcode] = ACTIONS(354),
    [sym_inx_opcode] = ACTIONS(354),
    [sym_iny_opcode] = ACTIONS(354),
    [sym_jmp_opcode] = ACTIONS(354),
    [sym_jsr_opcode] = ACTIONS(354),
    [sym_lda_opcode] = ACTIONS(354),
    [sym_ldx_opcode] = ACTIONS(354),
    [sym_ldy_opcode] = ACTIONS(354),
    [sym_lsr_opcode] = ACTIONS(354),
    [sym_nop_opcode] = ACTIONS(354),
    [sym_ora_opcode] = ACTIONS(354),
    [sym_pha_opcode] = ACTIONS(354),
    [sym_php_opcode] = ACTIONS(354),
    [sym_pla_opcode] = ACTIONS(354),
    [sym_plp_opcode] = ACTIONS(354),
    [sym_rol_opcode] = ACTIONS(354),
    [sym_ror_opcode] = ACTIONS(354),
    [sym_rti_opcode] = ACTIONS(354),
    [sym_rts_opcode] = ACTIONS(354),
    [sym_sbc_opcode] = ACTIONS(354),
    [sym_sec_opcode] = ACTIONS(354),
    [sym_sed_opcode] = ACTIONS(354),
    [sym_sei_opcode] = ACTIONS(354),
    [sym_sta_opcode] = ACTIONS(354),
    [sym_stx_opcode] = ACTIONS(354),
    [sym_sty_opcode] = ACTIONS(354),
    [sym_tax_opcode] = ACTIONS(354),
    [sym_tay_opcode] = ACTIONS(354),
    [sym_tsx_opcode] = ACTIONS(354),
    [sym_txa_opcode] = ACTIONS(354),
    [sym_tcs_opcode] = ACTIONS(354),
    [sym_tya_opcode] = ACTIONS(354),
    [sym_a16_ctrl_cmd] = ACTIONS(352),
    [sym_a8_ctrl_cmd] = ACTIONS(352),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(352),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(352),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(352),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(352),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(352),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(352),
    [sym_bss_ctrl_cmd] = ACTIONS(352),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(352),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(352),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(352),
    [sym_code_ctrl_cmd] = ACTIONS(352),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(352),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(352),
  },
  [55] = {
    [aux_sym_asciiz_ctrl_cmd_repeat1] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(406),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(406),
    [anon_sym_COMMA] = ACTIONS(408),
    [sym_adc_opcode] = ACTIONS(411),
    [sym_and_opcode] = ACTIONS(411),
    [sym_asl_opcode] = ACTIONS(411),
    [sym_bcc_opcode] = ACTIONS(411),
    [sym_bcs_opcode] = ACTIONS(411),
    [sym_beq_opcode] = ACTIONS(411),
    [sym_bit_opcode] = ACTIONS(411),
    [sym_bmi_opcode] = ACTIONS(411),
    [sym_bne_opcode] = ACTIONS(411),
    [sym_bpl_opcode] = ACTIONS(411),
    [sym_brk_opcode] = ACTIONS(411),
    [sym_bvc_opcode] = ACTIONS(411),
    [sym_bvs_opcode] = ACTIONS(411),
    [sym_clc_opcode] = ACTIONS(411),
    [sym_cld_opcode] = ACTIONS(411),
    [sym_cli_opcode] = ACTIONS(411),
    [sym_clv_opcode] = ACTIONS(411),
    [sym_cmp_opcode] = ACTIONS(411),
    [sym_cpx_opcode] = ACTIONS(411),
    [sym_cpy_opcode] = ACTIONS(411),
    [sym_dec_opcode] = ACTIONS(411),
    [sym_dex_opcode] = ACTIONS(411),
    [sym_dey_opcode] = ACTIONS(411),
    [sym_eor_opcode] = ACTIONS(411),
    [sym_inc_opcode] = ACTIONS(411),
    [sym_inx_opcode] = ACTIONS(411),
    [sym_iny_opcode] = ACTIONS(411),
    [sym_jmp_opcode] = ACTIONS(411),
    [sym_jsr_opcode] = ACTIONS(411),
    [sym_lda_opcode] = ACTIONS(411),
    [sym_ldx_opcode] = ACTIONS(411),
    [sym_ldy_opcode] = ACTIONS(411),
    [sym_lsr_opcode] = ACTIONS(411),
    [sym_nop_opcode] = ACTIONS(411),
    [sym_ora_opcode] = ACTIONS(411),
    [sym_pha_opcode] = ACTIONS(411),
    [sym_php_opcode] = ACTIONS(411),
    [sym_pla_opcode] = ACTIONS(411),
    [sym_plp_opcode] = ACTIONS(411),
    [sym_rol_opcode] = ACTIONS(411),
    [sym_ror_opcode] = ACTIONS(411),
    [sym_rti_opcode] = ACTIONS(411),
    [sym_rts_opcode] = ACTIONS(411),
    [sym_sbc_opcode] = ACTIONS(411),
    [sym_sec_opcode] = ACTIONS(411),
    [sym_sed_opcode] = ACTIONS(411),
    [sym_sei_opcode] = ACTIONS(411),
    [sym_sta_opcode] = ACTIONS(411),
    [sym_stx_opcode] = ACTIONS(411),
    [sym_sty_opcode] = ACTIONS(411),
    [sym_tax_opcode] = ACTIONS(411),
    [sym_tay_opcode] = ACTIONS(411),
    [sym_tsx_opcode] = ACTIONS(411),
    [sym_txa_opcode] = ACTIONS(411),
    [sym_tcs_opcode] = ACTIONS(411),
    [sym_tya_opcode] = ACTIONS(411),
    [sym_a16_ctrl_cmd] = ACTIONS(406),
    [sym_a8_ctrl_cmd] = ACTIONS(406),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(406),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(406),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(406),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(406),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(406),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(406),
    [sym_bss_ctrl_cmd] = ACTIONS(406),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(406),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(406),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(406),
    [sym_code_ctrl_cmd] = ACTIONS(406),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(406),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(406),
  },
  [56] = {
    [aux_sym_addr_ctrl_cmd_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(413),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(413),
    [anon_sym_COMMA] = ACTIONS(381),
    [sym_adc_opcode] = ACTIONS(415),
    [sym_and_opcode] = ACTIONS(415),
    [sym_asl_opcode] = ACTIONS(415),
    [sym_bcc_opcode] = ACTIONS(415),
    [sym_bcs_opcode] = ACTIONS(415),
    [sym_beq_opcode] = ACTIONS(415),
    [sym_bit_opcode] = ACTIONS(415),
    [sym_bmi_opcode] = ACTIONS(415),
    [sym_bne_opcode] = ACTIONS(415),
    [sym_bpl_opcode] = ACTIONS(415),
    [sym_brk_opcode] = ACTIONS(415),
    [sym_bvc_opcode] = ACTIONS(415),
    [sym_bvs_opcode] = ACTIONS(415),
    [sym_clc_opcode] = ACTIONS(415),
    [sym_cld_opcode] = ACTIONS(415),
    [sym_cli_opcode] = ACTIONS(415),
    [sym_clv_opcode] = ACTIONS(415),
    [sym_cmp_opcode] = ACTIONS(415),
    [sym_cpx_opcode] = ACTIONS(415),
    [sym_cpy_opcode] = ACTIONS(415),
    [sym_dec_opcode] = ACTIONS(415),
    [sym_dex_opcode] = ACTIONS(415),
    [sym_dey_opcode] = ACTIONS(415),
    [sym_eor_opcode] = ACTIONS(415),
    [sym_inc_opcode] = ACTIONS(415),
    [sym_inx_opcode] = ACTIONS(415),
    [sym_iny_opcode] = ACTIONS(415),
    [sym_jmp_opcode] = ACTIONS(415),
    [sym_jsr_opcode] = ACTIONS(415),
    [sym_lda_opcode] = ACTIONS(415),
    [sym_ldx_opcode] = ACTIONS(415),
    [sym_ldy_opcode] = ACTIONS(415),
    [sym_lsr_opcode] = ACTIONS(415),
    [sym_nop_opcode] = ACTIONS(415),
    [sym_ora_opcode] = ACTIONS(415),
    [sym_pha_opcode] = ACTIONS(415),
    [sym_php_opcode] = ACTIONS(415),
    [sym_pla_opcode] = ACTIONS(415),
    [sym_plp_opcode] = ACTIONS(415),
    [sym_rol_opcode] = ACTIONS(415),
    [sym_ror_opcode] = ACTIONS(415),
    [sym_rti_opcode] = ACTIONS(415),
    [sym_rts_opcode] = ACTIONS(415),
    [sym_sbc_opcode] = ACTIONS(415),
    [sym_sec_opcode] = ACTIONS(415),
    [sym_sed_opcode] = ACTIONS(415),
    [sym_sei_opcode] = ACTIONS(415),
    [sym_sta_opcode] = ACTIONS(415),
    [sym_stx_opcode] = ACTIONS(415),
    [sym_sty_opcode] = ACTIONS(415),
    [sym_tax_opcode] = ACTIONS(415),
    [sym_tay_opcode] = ACTIONS(415),
    [sym_tsx_opcode] = ACTIONS(415),
    [sym_txa_opcode] = ACTIONS(415),
    [sym_tcs_opcode] = ACTIONS(415),
    [sym_tya_opcode] = ACTIONS(415),
    [sym_a16_ctrl_cmd] = ACTIONS(413),
    [sym_a8_ctrl_cmd] = ACTIONS(413),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(413),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(413),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(413),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(413),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(413),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(413),
    [sym_bss_ctrl_cmd] = ACTIONS(413),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(413),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(413),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(413),
    [sym_code_ctrl_cmd] = ACTIONS(413),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(413),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(413),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(417),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(417),
    [anon_sym_COMMA] = ACTIONS(419),
    [sym_adc_opcode] = ACTIONS(421),
    [sym_and_opcode] = ACTIONS(421),
    [sym_asl_opcode] = ACTIONS(421),
    [sym_bcc_opcode] = ACTIONS(421),
    [sym_bcs_opcode] = ACTIONS(421),
    [sym_beq_opcode] = ACTIONS(421),
    [sym_bit_opcode] = ACTIONS(421),
    [sym_bmi_opcode] = ACTIONS(421),
    [sym_bne_opcode] = ACTIONS(421),
    [sym_bpl_opcode] = ACTIONS(421),
    [sym_brk_opcode] = ACTIONS(421),
    [sym_bvc_opcode] = ACTIONS(421),
    [sym_bvs_opcode] = ACTIONS(421),
    [sym_clc_opcode] = ACTIONS(421),
    [sym_cld_opcode] = ACTIONS(421),
    [sym_cli_opcode] = ACTIONS(421),
    [sym_clv_opcode] = ACTIONS(421),
    [sym_cmp_opcode] = ACTIONS(421),
    [sym_cpx_opcode] = ACTIONS(421),
    [sym_cpy_opcode] = ACTIONS(421),
    [sym_dec_opcode] = ACTIONS(421),
    [sym_dex_opcode] = ACTIONS(421),
    [sym_dey_opcode] = ACTIONS(421),
    [sym_eor_opcode] = ACTIONS(421),
    [sym_inc_opcode] = ACTIONS(421),
    [sym_inx_opcode] = ACTIONS(421),
    [sym_iny_opcode] = ACTIONS(421),
    [sym_jmp_opcode] = ACTIONS(421),
    [sym_jsr_opcode] = ACTIONS(421),
    [sym_lda_opcode] = ACTIONS(421),
    [sym_ldx_opcode] = ACTIONS(421),
    [sym_ldy_opcode] = ACTIONS(421),
    [sym_lsr_opcode] = ACTIONS(421),
    [sym_nop_opcode] = ACTIONS(421),
    [sym_ora_opcode] = ACTIONS(421),
    [sym_pha_opcode] = ACTIONS(421),
    [sym_php_opcode] = ACTIONS(421),
    [sym_pla_opcode] = ACTIONS(421),
    [sym_plp_opcode] = ACTIONS(421),
    [sym_rol_opcode] = ACTIONS(421),
    [sym_ror_opcode] = ACTIONS(421),
    [sym_rti_opcode] = ACTIONS(421),
    [sym_rts_opcode] = ACTIONS(421),
    [sym_sbc_opcode] = ACTIONS(421),
    [sym_sec_opcode] = ACTIONS(421),
    [sym_sed_opcode] = ACTIONS(421),
    [sym_sei_opcode] = ACTIONS(421),
    [sym_sta_opcode] = ACTIONS(421),
    [sym_stx_opcode] = ACTIONS(421),
    [sym_sty_opcode] = ACTIONS(421),
    [sym_tax_opcode] = ACTIONS(421),
    [sym_tay_opcode] = ACTIONS(421),
    [sym_tsx_opcode] = ACTIONS(421),
    [sym_txa_opcode] = ACTIONS(421),
    [sym_tcs_opcode] = ACTIONS(421),
    [sym_tya_opcode] = ACTIONS(421),
    [sym_a16_ctrl_cmd] = ACTIONS(417),
    [sym_a8_ctrl_cmd] = ACTIONS(417),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(417),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(417),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(417),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(417),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(417),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(417),
    [sym_bss_ctrl_cmd] = ACTIONS(417),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(417),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(417),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(417),
    [sym_code_ctrl_cmd] = ACTIONS(417),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(417),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(417),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(423),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(423),
    [anon_sym_COMMA] = ACTIONS(425),
    [sym_adc_opcode] = ACTIONS(427),
    [sym_and_opcode] = ACTIONS(427),
    [sym_asl_opcode] = ACTIONS(427),
    [sym_bcc_opcode] = ACTIONS(427),
    [sym_bcs_opcode] = ACTIONS(427),
    [sym_beq_opcode] = ACTIONS(427),
    [sym_bit_opcode] = ACTIONS(427),
    [sym_bmi_opcode] = ACTIONS(427),
    [sym_bne_opcode] = ACTIONS(427),
    [sym_bpl_opcode] = ACTIONS(427),
    [sym_brk_opcode] = ACTIONS(427),
    [sym_bvc_opcode] = ACTIONS(427),
    [sym_bvs_opcode] = ACTIONS(427),
    [sym_clc_opcode] = ACTIONS(427),
    [sym_cld_opcode] = ACTIONS(427),
    [sym_cli_opcode] = ACTIONS(427),
    [sym_clv_opcode] = ACTIONS(427),
    [sym_cmp_opcode] = ACTIONS(427),
    [sym_cpx_opcode] = ACTIONS(427),
    [sym_cpy_opcode] = ACTIONS(427),
    [sym_dec_opcode] = ACTIONS(427),
    [sym_dex_opcode] = ACTIONS(427),
    [sym_dey_opcode] = ACTIONS(427),
    [sym_eor_opcode] = ACTIONS(427),
    [sym_inc_opcode] = ACTIONS(427),
    [sym_inx_opcode] = ACTIONS(427),
    [sym_iny_opcode] = ACTIONS(427),
    [sym_jmp_opcode] = ACTIONS(427),
    [sym_jsr_opcode] = ACTIONS(427),
    [sym_lda_opcode] = ACTIONS(427),
    [sym_ldx_opcode] = ACTIONS(427),
    [sym_ldy_opcode] = ACTIONS(427),
    [sym_lsr_opcode] = ACTIONS(427),
    [sym_nop_opcode] = ACTIONS(427),
    [sym_ora_opcode] = ACTIONS(427),
    [sym_pha_opcode] = ACTIONS(427),
    [sym_php_opcode] = ACTIONS(427),
    [sym_pla_opcode] = ACTIONS(427),
    [sym_plp_opcode] = ACTIONS(427),
    [sym_rol_opcode] = ACTIONS(427),
    [sym_ror_opcode] = ACTIONS(427),
    [sym_rti_opcode] = ACTIONS(427),
    [sym_rts_opcode] = ACTIONS(427),
    [sym_sbc_opcode] = ACTIONS(427),
    [sym_sec_opcode] = ACTIONS(427),
    [sym_sed_opcode] = ACTIONS(427),
    [sym_sei_opcode] = ACTIONS(427),
    [sym_sta_opcode] = ACTIONS(427),
    [sym_stx_opcode] = ACTIONS(427),
    [sym_sty_opcode] = ACTIONS(427),
    [sym_tax_opcode] = ACTIONS(427),
    [sym_tay_opcode] = ACTIONS(427),
    [sym_tsx_opcode] = ACTIONS(427),
    [sym_txa_opcode] = ACTIONS(427),
    [sym_tcs_opcode] = ACTIONS(427),
    [sym_tya_opcode] = ACTIONS(427),
    [sym_a16_ctrl_cmd] = ACTIONS(423),
    [sym_a8_ctrl_cmd] = ACTIONS(423),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(423),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(423),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(423),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(423),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(423),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(423),
    [sym_bss_ctrl_cmd] = ACTIONS(423),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(423),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(423),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(423),
    [sym_code_ctrl_cmd] = ACTIONS(423),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(423),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(423),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(417),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(417),
    [anon_sym_COMMA] = ACTIONS(429),
    [sym_adc_opcode] = ACTIONS(421),
    [sym_and_opcode] = ACTIONS(421),
    [sym_asl_opcode] = ACTIONS(421),
    [sym_bcc_opcode] = ACTIONS(421),
    [sym_bcs_opcode] = ACTIONS(421),
    [sym_beq_opcode] = ACTIONS(421),
    [sym_bit_opcode] = ACTIONS(421),
    [sym_bmi_opcode] = ACTIONS(421),
    [sym_bne_opcode] = ACTIONS(421),
    [sym_bpl_opcode] = ACTIONS(421),
    [sym_brk_opcode] = ACTIONS(421),
    [sym_bvc_opcode] = ACTIONS(421),
    [sym_bvs_opcode] = ACTIONS(421),
    [sym_clc_opcode] = ACTIONS(421),
    [sym_cld_opcode] = ACTIONS(421),
    [sym_cli_opcode] = ACTIONS(421),
    [sym_clv_opcode] = ACTIONS(421),
    [sym_cmp_opcode] = ACTIONS(421),
    [sym_cpx_opcode] = ACTIONS(421),
    [sym_cpy_opcode] = ACTIONS(421),
    [sym_dec_opcode] = ACTIONS(421),
    [sym_dex_opcode] = ACTIONS(421),
    [sym_dey_opcode] = ACTIONS(421),
    [sym_eor_opcode] = ACTIONS(421),
    [sym_inc_opcode] = ACTIONS(421),
    [sym_inx_opcode] = ACTIONS(421),
    [sym_iny_opcode] = ACTIONS(421),
    [sym_jmp_opcode] = ACTIONS(421),
    [sym_jsr_opcode] = ACTIONS(421),
    [sym_lda_opcode] = ACTIONS(421),
    [sym_ldx_opcode] = ACTIONS(421),
    [sym_ldy_opcode] = ACTIONS(421),
    [sym_lsr_opcode] = ACTIONS(421),
    [sym_nop_opcode] = ACTIONS(421),
    [sym_ora_opcode] = ACTIONS(421),
    [sym_pha_opcode] = ACTIONS(421),
    [sym_php_opcode] = ACTIONS(421),
    [sym_pla_opcode] = ACTIONS(421),
    [sym_plp_opcode] = ACTIONS(421),
    [sym_rol_opcode] = ACTIONS(421),
    [sym_ror_opcode] = ACTIONS(421),
    [sym_rti_opcode] = ACTIONS(421),
    [sym_rts_opcode] = ACTIONS(421),
    [sym_sbc_opcode] = ACTIONS(421),
    [sym_sec_opcode] = ACTIONS(421),
    [sym_sed_opcode] = ACTIONS(421),
    [sym_sei_opcode] = ACTIONS(421),
    [sym_sta_opcode] = ACTIONS(421),
    [sym_stx_opcode] = ACTIONS(421),
    [sym_sty_opcode] = ACTIONS(421),
    [sym_tax_opcode] = ACTIONS(421),
    [sym_tay_opcode] = ACTIONS(421),
    [sym_tsx_opcode] = ACTIONS(421),
    [sym_txa_opcode] = ACTIONS(421),
    [sym_tcs_opcode] = ACTIONS(421),
    [sym_tya_opcode] = ACTIONS(421),
    [sym_a16_ctrl_cmd] = ACTIONS(417),
    [sym_a8_ctrl_cmd] = ACTIONS(417),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(417),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(417),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(417),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(417),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(417),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(417),
    [sym_bss_ctrl_cmd] = ACTIONS(417),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(417),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(417),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(417),
    [sym_code_ctrl_cmd] = ACTIONS(417),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(417),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(417),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(417),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(417),
    [anon_sym_COMMA] = ACTIONS(431),
    [sym_adc_opcode] = ACTIONS(421),
    [sym_and_opcode] = ACTIONS(421),
    [sym_asl_opcode] = ACTIONS(421),
    [sym_bcc_opcode] = ACTIONS(421),
    [sym_bcs_opcode] = ACTIONS(421),
    [sym_beq_opcode] = ACTIONS(421),
    [sym_bit_opcode] = ACTIONS(421),
    [sym_bmi_opcode] = ACTIONS(421),
    [sym_bne_opcode] = ACTIONS(421),
    [sym_bpl_opcode] = ACTIONS(421),
    [sym_brk_opcode] = ACTIONS(421),
    [sym_bvc_opcode] = ACTIONS(421),
    [sym_bvs_opcode] = ACTIONS(421),
    [sym_clc_opcode] = ACTIONS(421),
    [sym_cld_opcode] = ACTIONS(421),
    [sym_cli_opcode] = ACTIONS(421),
    [sym_clv_opcode] = ACTIONS(421),
    [sym_cmp_opcode] = ACTIONS(421),
    [sym_cpx_opcode] = ACTIONS(421),
    [sym_cpy_opcode] = ACTIONS(421),
    [sym_dec_opcode] = ACTIONS(421),
    [sym_dex_opcode] = ACTIONS(421),
    [sym_dey_opcode] = ACTIONS(421),
    [sym_eor_opcode] = ACTIONS(421),
    [sym_inc_opcode] = ACTIONS(421),
    [sym_inx_opcode] = ACTIONS(421),
    [sym_iny_opcode] = ACTIONS(421),
    [sym_jmp_opcode] = ACTIONS(421),
    [sym_jsr_opcode] = ACTIONS(421),
    [sym_lda_opcode] = ACTIONS(421),
    [sym_ldx_opcode] = ACTIONS(421),
    [sym_ldy_opcode] = ACTIONS(421),
    [sym_lsr_opcode] = ACTIONS(421),
    [sym_nop_opcode] = ACTIONS(421),
    [sym_ora_opcode] = ACTIONS(421),
    [sym_pha_opcode] = ACTIONS(421),
    [sym_php_opcode] = ACTIONS(421),
    [sym_pla_opcode] = ACTIONS(421),
    [sym_plp_opcode] = ACTIONS(421),
    [sym_rol_opcode] = ACTIONS(421),
    [sym_ror_opcode] = ACTIONS(421),
    [sym_rti_opcode] = ACTIONS(421),
    [sym_rts_opcode] = ACTIONS(421),
    [sym_sbc_opcode] = ACTIONS(421),
    [sym_sec_opcode] = ACTIONS(421),
    [sym_sed_opcode] = ACTIONS(421),
    [sym_sei_opcode] = ACTIONS(421),
    [sym_sta_opcode] = ACTIONS(421),
    [sym_stx_opcode] = ACTIONS(421),
    [sym_sty_opcode] = ACTIONS(421),
    [sym_tax_opcode] = ACTIONS(421),
    [sym_tay_opcode] = ACTIONS(421),
    [sym_tsx_opcode] = ACTIONS(421),
    [sym_txa_opcode] = ACTIONS(421),
    [sym_tcs_opcode] = ACTIONS(421),
    [sym_tya_opcode] = ACTIONS(421),
    [sym_a16_ctrl_cmd] = ACTIONS(417),
    [sym_a8_ctrl_cmd] = ACTIONS(417),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(417),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(417),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(417),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(417),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(417),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(417),
    [sym_bss_ctrl_cmd] = ACTIONS(417),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(417),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(417),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(417),
    [sym_code_ctrl_cmd] = ACTIONS(417),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(417),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(417),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(433),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(433),
    [anon_sym_COMMA] = ACTIONS(435),
    [sym_adc_opcode] = ACTIONS(437),
    [sym_and_opcode] = ACTIONS(437),
    [sym_asl_opcode] = ACTIONS(437),
    [sym_bcc_opcode] = ACTIONS(437),
    [sym_bcs_opcode] = ACTIONS(437),
    [sym_beq_opcode] = ACTIONS(437),
    [sym_bit_opcode] = ACTIONS(437),
    [sym_bmi_opcode] = ACTIONS(437),
    [sym_bne_opcode] = ACTIONS(437),
    [sym_bpl_opcode] = ACTIONS(437),
    [sym_brk_opcode] = ACTIONS(437),
    [sym_bvc_opcode] = ACTIONS(437),
    [sym_bvs_opcode] = ACTIONS(437),
    [sym_clc_opcode] = ACTIONS(437),
    [sym_cld_opcode] = ACTIONS(437),
    [sym_cli_opcode] = ACTIONS(437),
    [sym_clv_opcode] = ACTIONS(437),
    [sym_cmp_opcode] = ACTIONS(437),
    [sym_cpx_opcode] = ACTIONS(437),
    [sym_cpy_opcode] = ACTIONS(437),
    [sym_dec_opcode] = ACTIONS(437),
    [sym_dex_opcode] = ACTIONS(437),
    [sym_dey_opcode] = ACTIONS(437),
    [sym_eor_opcode] = ACTIONS(437),
    [sym_inc_opcode] = ACTIONS(437),
    [sym_inx_opcode] = ACTIONS(437),
    [sym_iny_opcode] = ACTIONS(437),
    [sym_jmp_opcode] = ACTIONS(437),
    [sym_jsr_opcode] = ACTIONS(437),
    [sym_lda_opcode] = ACTIONS(437),
    [sym_ldx_opcode] = ACTIONS(437),
    [sym_ldy_opcode] = ACTIONS(437),
    [sym_lsr_opcode] = ACTIONS(437),
    [sym_nop_opcode] = ACTIONS(437),
    [sym_ora_opcode] = ACTIONS(437),
    [sym_pha_opcode] = ACTIONS(437),
    [sym_php_opcode] = ACTIONS(437),
    [sym_pla_opcode] = ACTIONS(437),
    [sym_plp_opcode] = ACTIONS(437),
    [sym_rol_opcode] = ACTIONS(437),
    [sym_ror_opcode] = ACTIONS(437),
    [sym_rti_opcode] = ACTIONS(437),
    [sym_rts_opcode] = ACTIONS(437),
    [sym_sbc_opcode] = ACTIONS(437),
    [sym_sec_opcode] = ACTIONS(437),
    [sym_sed_opcode] = ACTIONS(437),
    [sym_sei_opcode] = ACTIONS(437),
    [sym_sta_opcode] = ACTIONS(437),
    [sym_stx_opcode] = ACTIONS(437),
    [sym_sty_opcode] = ACTIONS(437),
    [sym_tax_opcode] = ACTIONS(437),
    [sym_tay_opcode] = ACTIONS(437),
    [sym_tsx_opcode] = ACTIONS(437),
    [sym_txa_opcode] = ACTIONS(437),
    [sym_tcs_opcode] = ACTIONS(437),
    [sym_tya_opcode] = ACTIONS(437),
    [sym_a16_ctrl_cmd] = ACTIONS(433),
    [sym_a8_ctrl_cmd] = ACTIONS(433),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(433),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(433),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(433),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(433),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(433),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(433),
    [sym_bss_ctrl_cmd] = ACTIONS(433),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(433),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(433),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(433),
    [sym_code_ctrl_cmd] = ACTIONS(433),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(433),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(433),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(433),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(433),
    [anon_sym_COMMA] = ACTIONS(439),
    [sym_adc_opcode] = ACTIONS(437),
    [sym_and_opcode] = ACTIONS(437),
    [sym_asl_opcode] = ACTIONS(437),
    [sym_bcc_opcode] = ACTIONS(437),
    [sym_bcs_opcode] = ACTIONS(437),
    [sym_beq_opcode] = ACTIONS(437),
    [sym_bit_opcode] = ACTIONS(437),
    [sym_bmi_opcode] = ACTIONS(437),
    [sym_bne_opcode] = ACTIONS(437),
    [sym_bpl_opcode] = ACTIONS(437),
    [sym_brk_opcode] = ACTIONS(437),
    [sym_bvc_opcode] = ACTIONS(437),
    [sym_bvs_opcode] = ACTIONS(437),
    [sym_clc_opcode] = ACTIONS(437),
    [sym_cld_opcode] = ACTIONS(437),
    [sym_cli_opcode] = ACTIONS(437),
    [sym_clv_opcode] = ACTIONS(437),
    [sym_cmp_opcode] = ACTIONS(437),
    [sym_cpx_opcode] = ACTIONS(437),
    [sym_cpy_opcode] = ACTIONS(437),
    [sym_dec_opcode] = ACTIONS(437),
    [sym_dex_opcode] = ACTIONS(437),
    [sym_dey_opcode] = ACTIONS(437),
    [sym_eor_opcode] = ACTIONS(437),
    [sym_inc_opcode] = ACTIONS(437),
    [sym_inx_opcode] = ACTIONS(437),
    [sym_iny_opcode] = ACTIONS(437),
    [sym_jmp_opcode] = ACTIONS(437),
    [sym_jsr_opcode] = ACTIONS(437),
    [sym_lda_opcode] = ACTIONS(437),
    [sym_ldx_opcode] = ACTIONS(437),
    [sym_ldy_opcode] = ACTIONS(437),
    [sym_lsr_opcode] = ACTIONS(437),
    [sym_nop_opcode] = ACTIONS(437),
    [sym_ora_opcode] = ACTIONS(437),
    [sym_pha_opcode] = ACTIONS(437),
    [sym_php_opcode] = ACTIONS(437),
    [sym_pla_opcode] = ACTIONS(437),
    [sym_plp_opcode] = ACTIONS(437),
    [sym_rol_opcode] = ACTIONS(437),
    [sym_ror_opcode] = ACTIONS(437),
    [sym_rti_opcode] = ACTIONS(437),
    [sym_rts_opcode] = ACTIONS(437),
    [sym_sbc_opcode] = ACTIONS(437),
    [sym_sec_opcode] = ACTIONS(437),
    [sym_sed_opcode] = ACTIONS(437),
    [sym_sei_opcode] = ACTIONS(437),
    [sym_sta_opcode] = ACTIONS(437),
    [sym_stx_opcode] = ACTIONS(437),
    [sym_sty_opcode] = ACTIONS(437),
    [sym_tax_opcode] = ACTIONS(437),
    [sym_tay_opcode] = ACTIONS(437),
    [sym_tsx_opcode] = ACTIONS(437),
    [sym_txa_opcode] = ACTIONS(437),
    [sym_tcs_opcode] = ACTIONS(437),
    [sym_tya_opcode] = ACTIONS(437),
    [sym_a16_ctrl_cmd] = ACTIONS(433),
    [sym_a8_ctrl_cmd] = ACTIONS(433),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(433),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(433),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(433),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(433),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(433),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(433),
    [sym_bss_ctrl_cmd] = ACTIONS(433),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(433),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(433),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(433),
    [sym_code_ctrl_cmd] = ACTIONS(433),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(433),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(433),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(372),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(372),
    [anon_sym_COMMA] = ACTIONS(372),
    [sym_adc_opcode] = ACTIONS(377),
    [sym_and_opcode] = ACTIONS(377),
    [sym_asl_opcode] = ACTIONS(377),
    [sym_bcc_opcode] = ACTIONS(377),
    [sym_bcs_opcode] = ACTIONS(377),
    [sym_beq_opcode] = ACTIONS(377),
    [sym_bit_opcode] = ACTIONS(377),
    [sym_bmi_opcode] = ACTIONS(377),
    [sym_bne_opcode] = ACTIONS(377),
    [sym_bpl_opcode] = ACTIONS(377),
    [sym_brk_opcode] = ACTIONS(377),
    [sym_bvc_opcode] = ACTIONS(377),
    [sym_bvs_opcode] = ACTIONS(377),
    [sym_clc_opcode] = ACTIONS(377),
    [sym_cld_opcode] = ACTIONS(377),
    [sym_cli_opcode] = ACTIONS(377),
    [sym_clv_opcode] = ACTIONS(377),
    [sym_cmp_opcode] = ACTIONS(377),
    [sym_cpx_opcode] = ACTIONS(377),
    [sym_cpy_opcode] = ACTIONS(377),
    [sym_dec_opcode] = ACTIONS(377),
    [sym_dex_opcode] = ACTIONS(377),
    [sym_dey_opcode] = ACTIONS(377),
    [sym_eor_opcode] = ACTIONS(377),
    [sym_inc_opcode] = ACTIONS(377),
    [sym_inx_opcode] = ACTIONS(377),
    [sym_iny_opcode] = ACTIONS(377),
    [sym_jmp_opcode] = ACTIONS(377),
    [sym_jsr_opcode] = ACTIONS(377),
    [sym_lda_opcode] = ACTIONS(377),
    [sym_ldx_opcode] = ACTIONS(377),
    [sym_ldy_opcode] = ACTIONS(377),
    [sym_lsr_opcode] = ACTIONS(377),
    [sym_nop_opcode] = ACTIONS(377),
    [sym_ora_opcode] = ACTIONS(377),
    [sym_pha_opcode] = ACTIONS(377),
    [sym_php_opcode] = ACTIONS(377),
    [sym_pla_opcode] = ACTIONS(377),
    [sym_plp_opcode] = ACTIONS(377),
    [sym_rol_opcode] = ACTIONS(377),
    [sym_ror_opcode] = ACTIONS(377),
    [sym_rti_opcode] = ACTIONS(377),
    [sym_rts_opcode] = ACTIONS(377),
    [sym_sbc_opcode] = ACTIONS(377),
    [sym_sec_opcode] = ACTIONS(377),
    [sym_sed_opcode] = ACTIONS(377),
    [sym_sei_opcode] = ACTIONS(377),
    [sym_sta_opcode] = ACTIONS(377),
    [sym_stx_opcode] = ACTIONS(377),
    [sym_sty_opcode] = ACTIONS(377),
    [sym_tax_opcode] = ACTIONS(377),
    [sym_tay_opcode] = ACTIONS(377),
    [sym_tsx_opcode] = ACTIONS(377),
    [sym_txa_opcode] = ACTIONS(377),
    [sym_tcs_opcode] = ACTIONS(377),
    [sym_tya_opcode] = ACTIONS(377),
    [sym_a16_ctrl_cmd] = ACTIONS(372),
    [sym_a8_ctrl_cmd] = ACTIONS(372),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(372),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(372),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(372),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(372),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(372),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(372),
    [sym_bss_ctrl_cmd] = ACTIONS(372),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(372),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(372),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(372),
    [sym_code_ctrl_cmd] = ACTIONS(372),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(372),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(372),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(346),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(346),
    [anon_sym_COMMA] = ACTIONS(348),
    [sym_adc_opcode] = ACTIONS(350),
    [sym_and_opcode] = ACTIONS(350),
    [sym_asl_opcode] = ACTIONS(350),
    [sym_bcc_opcode] = ACTIONS(350),
    [sym_bcs_opcode] = ACTIONS(350),
    [sym_beq_opcode] = ACTIONS(350),
    [sym_bit_opcode] = ACTIONS(350),
    [sym_bmi_opcode] = ACTIONS(350),
    [sym_bne_opcode] = ACTIONS(350),
    [sym_bpl_opcode] = ACTIONS(350),
    [sym_brk_opcode] = ACTIONS(350),
    [sym_bvc_opcode] = ACTIONS(350),
    [sym_bvs_opcode] = ACTIONS(350),
    [sym_clc_opcode] = ACTIONS(350),
    [sym_cld_opcode] = ACTIONS(350),
    [sym_cli_opcode] = ACTIONS(350),
    [sym_clv_opcode] = ACTIONS(350),
    [sym_cmp_opcode] = ACTIONS(350),
    [sym_cpx_opcode] = ACTIONS(350),
    [sym_cpy_opcode] = ACTIONS(350),
    [sym_dec_opcode] = ACTIONS(350),
    [sym_dex_opcode] = ACTIONS(350),
    [sym_dey_opcode] = ACTIONS(350),
    [sym_eor_opcode] = ACTIONS(350),
    [sym_inc_opcode] = ACTIONS(350),
    [sym_inx_opcode] = ACTIONS(350),
    [sym_iny_opcode] = ACTIONS(350),
    [sym_jmp_opcode] = ACTIONS(350),
    [sym_jsr_opcode] = ACTIONS(350),
    [sym_lda_opcode] = ACTIONS(350),
    [sym_ldx_opcode] = ACTIONS(350),
    [sym_ldy_opcode] = ACTIONS(350),
    [sym_lsr_opcode] = ACTIONS(350),
    [sym_nop_opcode] = ACTIONS(350),
    [sym_ora_opcode] = ACTIONS(350),
    [sym_pha_opcode] = ACTIONS(350),
    [sym_php_opcode] = ACTIONS(350),
    [sym_pla_opcode] = ACTIONS(350),
    [sym_plp_opcode] = ACTIONS(350),
    [sym_rol_opcode] = ACTIONS(350),
    [sym_ror_opcode] = ACTIONS(350),
    [sym_rti_opcode] = ACTIONS(350),
    [sym_rts_opcode] = ACTIONS(350),
    [sym_sbc_opcode] = ACTIONS(350),
    [sym_sec_opcode] = ACTIONS(350),
    [sym_sed_opcode] = ACTIONS(350),
    [sym_sei_opcode] = ACTIONS(350),
    [sym_sta_opcode] = ACTIONS(350),
    [sym_stx_opcode] = ACTIONS(350),
    [sym_sty_opcode] = ACTIONS(350),
    [sym_tax_opcode] = ACTIONS(350),
    [sym_tay_opcode] = ACTIONS(350),
    [sym_tsx_opcode] = ACTIONS(350),
    [sym_txa_opcode] = ACTIONS(350),
    [sym_tcs_opcode] = ACTIONS(350),
    [sym_tya_opcode] = ACTIONS(350),
    [sym_a16_ctrl_cmd] = ACTIONS(346),
    [sym_a8_ctrl_cmd] = ACTIONS(346),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(346),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(346),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(346),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(346),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(346),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(346),
    [sym_bss_ctrl_cmd] = ACTIONS(346),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(346),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(346),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(346),
    [sym_code_ctrl_cmd] = ACTIONS(346),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(346),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(346),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(406),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(406),
    [anon_sym_COMMA] = ACTIONS(406),
    [sym_adc_opcode] = ACTIONS(411),
    [sym_and_opcode] = ACTIONS(411),
    [sym_asl_opcode] = ACTIONS(411),
    [sym_bcc_opcode] = ACTIONS(411),
    [sym_bcs_opcode] = ACTIONS(411),
    [sym_beq_opcode] = ACTIONS(411),
    [sym_bit_opcode] = ACTIONS(411),
    [sym_bmi_opcode] = ACTIONS(411),
    [sym_bne_opcode] = ACTIONS(411),
    [sym_bpl_opcode] = ACTIONS(411),
    [sym_brk_opcode] = ACTIONS(411),
    [sym_bvc_opcode] = ACTIONS(411),
    [sym_bvs_opcode] = ACTIONS(411),
    [sym_clc_opcode] = ACTIONS(411),
    [sym_cld_opcode] = ACTIONS(411),
    [sym_cli_opcode] = ACTIONS(411),
    [sym_clv_opcode] = ACTIONS(411),
    [sym_cmp_opcode] = ACTIONS(411),
    [sym_cpx_opcode] = ACTIONS(411),
    [sym_cpy_opcode] = ACTIONS(411),
    [sym_dec_opcode] = ACTIONS(411),
    [sym_dex_opcode] = ACTIONS(411),
    [sym_dey_opcode] = ACTIONS(411),
    [sym_eor_opcode] = ACTIONS(411),
    [sym_inc_opcode] = ACTIONS(411),
    [sym_inx_opcode] = ACTIONS(411),
    [sym_iny_opcode] = ACTIONS(411),
    [sym_jmp_opcode] = ACTIONS(411),
    [sym_jsr_opcode] = ACTIONS(411),
    [sym_lda_opcode] = ACTIONS(411),
    [sym_ldx_opcode] = ACTIONS(411),
    [sym_ldy_opcode] = ACTIONS(411),
    [sym_lsr_opcode] = ACTIONS(411),
    [sym_nop_opcode] = ACTIONS(411),
    [sym_ora_opcode] = ACTIONS(411),
    [sym_pha_opcode] = ACTIONS(411),
    [sym_php_opcode] = ACTIONS(411),
    [sym_pla_opcode] = ACTIONS(411),
    [sym_plp_opcode] = ACTIONS(411),
    [sym_rol_opcode] = ACTIONS(411),
    [sym_ror_opcode] = ACTIONS(411),
    [sym_rti_opcode] = ACTIONS(411),
    [sym_rts_opcode] = ACTIONS(411),
    [sym_sbc_opcode] = ACTIONS(411),
    [sym_sec_opcode] = ACTIONS(411),
    [sym_sed_opcode] = ACTIONS(411),
    [sym_sei_opcode] = ACTIONS(411),
    [sym_sta_opcode] = ACTIONS(411),
    [sym_stx_opcode] = ACTIONS(411),
    [sym_sty_opcode] = ACTIONS(411),
    [sym_tax_opcode] = ACTIONS(411),
    [sym_tay_opcode] = ACTIONS(411),
    [sym_tsx_opcode] = ACTIONS(411),
    [sym_txa_opcode] = ACTIONS(411),
    [sym_tcs_opcode] = ACTIONS(411),
    [sym_tya_opcode] = ACTIONS(411),
    [sym_a16_ctrl_cmd] = ACTIONS(406),
    [sym_a8_ctrl_cmd] = ACTIONS(406),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(406),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(406),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(406),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(406),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(406),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(406),
    [sym_bss_ctrl_cmd] = ACTIONS(406),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(406),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(406),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(406),
    [sym_code_ctrl_cmd] = ACTIONS(406),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(406),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(406),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(441),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(441),
    [anon_sym_COMMA] = ACTIONS(443),
    [sym_adc_opcode] = ACTIONS(445),
    [sym_and_opcode] = ACTIONS(445),
    [sym_asl_opcode] = ACTIONS(445),
    [sym_bcc_opcode] = ACTIONS(445),
    [sym_bcs_opcode] = ACTIONS(445),
    [sym_beq_opcode] = ACTIONS(445),
    [sym_bit_opcode] = ACTIONS(445),
    [sym_bmi_opcode] = ACTIONS(445),
    [sym_bne_opcode] = ACTIONS(445),
    [sym_bpl_opcode] = ACTIONS(445),
    [sym_brk_opcode] = ACTIONS(445),
    [sym_bvc_opcode] = ACTIONS(445),
    [sym_bvs_opcode] = ACTIONS(445),
    [sym_clc_opcode] = ACTIONS(445),
    [sym_cld_opcode] = ACTIONS(445),
    [sym_cli_opcode] = ACTIONS(445),
    [sym_clv_opcode] = ACTIONS(445),
    [sym_cmp_opcode] = ACTIONS(445),
    [sym_cpx_opcode] = ACTIONS(445),
    [sym_cpy_opcode] = ACTIONS(445),
    [sym_dec_opcode] = ACTIONS(445),
    [sym_dex_opcode] = ACTIONS(445),
    [sym_dey_opcode] = ACTIONS(445),
    [sym_eor_opcode] = ACTIONS(445),
    [sym_inc_opcode] = ACTIONS(445),
    [sym_inx_opcode] = ACTIONS(445),
    [sym_iny_opcode] = ACTIONS(445),
    [sym_jmp_opcode] = ACTIONS(445),
    [sym_jsr_opcode] = ACTIONS(445),
    [sym_lda_opcode] = ACTIONS(445),
    [sym_ldx_opcode] = ACTIONS(445),
    [sym_ldy_opcode] = ACTIONS(445),
    [sym_lsr_opcode] = ACTIONS(445),
    [sym_nop_opcode] = ACTIONS(445),
    [sym_ora_opcode] = ACTIONS(445),
    [sym_pha_opcode] = ACTIONS(445),
    [sym_php_opcode] = ACTIONS(445),
    [sym_pla_opcode] = ACTIONS(445),
    [sym_plp_opcode] = ACTIONS(445),
    [sym_rol_opcode] = ACTIONS(445),
    [sym_ror_opcode] = ACTIONS(445),
    [sym_rti_opcode] = ACTIONS(445),
    [sym_rts_opcode] = ACTIONS(445),
    [sym_sbc_opcode] = ACTIONS(445),
    [sym_sec_opcode] = ACTIONS(445),
    [sym_sed_opcode] = ACTIONS(445),
    [sym_sei_opcode] = ACTIONS(445),
    [sym_sta_opcode] = ACTIONS(445),
    [sym_stx_opcode] = ACTIONS(445),
    [sym_sty_opcode] = ACTIONS(445),
    [sym_tax_opcode] = ACTIONS(445),
    [sym_tay_opcode] = ACTIONS(445),
    [sym_tsx_opcode] = ACTIONS(445),
    [sym_txa_opcode] = ACTIONS(445),
    [sym_tcs_opcode] = ACTIONS(445),
    [sym_tya_opcode] = ACTIONS(445),
    [sym_a16_ctrl_cmd] = ACTIONS(441),
    [sym_a8_ctrl_cmd] = ACTIONS(441),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(441),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(441),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(441),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(441),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(441),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(441),
    [sym_bss_ctrl_cmd] = ACTIONS(441),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(441),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(441),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(441),
    [sym_code_ctrl_cmd] = ACTIONS(441),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(441),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(441),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(113),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(113),
    [anon_sym_COMMA] = ACTIONS(235),
    [sym_adc_opcode] = ACTIONS(116),
    [sym_and_opcode] = ACTIONS(116),
    [sym_asl_opcode] = ACTIONS(116),
    [sym_bcc_opcode] = ACTIONS(116),
    [sym_bcs_opcode] = ACTIONS(116),
    [sym_beq_opcode] = ACTIONS(116),
    [sym_bit_opcode] = ACTIONS(116),
    [sym_bmi_opcode] = ACTIONS(116),
    [sym_bne_opcode] = ACTIONS(116),
    [sym_bpl_opcode] = ACTIONS(116),
    [sym_brk_opcode] = ACTIONS(116),
    [sym_bvc_opcode] = ACTIONS(116),
    [sym_bvs_opcode] = ACTIONS(116),
    [sym_clc_opcode] = ACTIONS(116),
    [sym_cld_opcode] = ACTIONS(116),
    [sym_cli_opcode] = ACTIONS(116),
    [sym_clv_opcode] = ACTIONS(116),
    [sym_cmp_opcode] = ACTIONS(116),
    [sym_cpx_opcode] = ACTIONS(116),
    [sym_cpy_opcode] = ACTIONS(116),
    [sym_dec_opcode] = ACTIONS(116),
    [sym_dex_opcode] = ACTIONS(116),
    [sym_dey_opcode] = ACTIONS(116),
    [sym_eor_opcode] = ACTIONS(116),
    [sym_inc_opcode] = ACTIONS(116),
    [sym_inx_opcode] = ACTIONS(116),
    [sym_iny_opcode] = ACTIONS(116),
    [sym_jmp_opcode] = ACTIONS(116),
    [sym_jsr_opcode] = ACTIONS(116),
    [sym_lda_opcode] = ACTIONS(116),
    [sym_ldx_opcode] = ACTIONS(116),
    [sym_ldy_opcode] = ACTIONS(116),
    [sym_lsr_opcode] = ACTIONS(116),
    [sym_nop_opcode] = ACTIONS(116),
    [sym_ora_opcode] = ACTIONS(116),
    [sym_pha_opcode] = ACTIONS(116),
    [sym_php_opcode] = ACTIONS(116),
    [sym_pla_opcode] = ACTIONS(116),
    [sym_plp_opcode] = ACTIONS(116),
    [sym_rol_opcode] = ACTIONS(116),
    [sym_ror_opcode] = ACTIONS(116),
    [sym_rti_opcode] = ACTIONS(116),
    [sym_rts_opcode] = ACTIONS(116),
    [sym_sbc_opcode] = ACTIONS(116),
    [sym_sec_opcode] = ACTIONS(116),
    [sym_sed_opcode] = ACTIONS(116),
    [sym_sei_opcode] = ACTIONS(116),
    [sym_sta_opcode] = ACTIONS(116),
    [sym_stx_opcode] = ACTIONS(116),
    [sym_sty_opcode] = ACTIONS(116),
    [sym_tax_opcode] = ACTIONS(116),
    [sym_tay_opcode] = ACTIONS(116),
    [sym_tsx_opcode] = ACTIONS(116),
    [sym_txa_opcode] = ACTIONS(116),
    [sym_tcs_opcode] = ACTIONS(116),
    [sym_tya_opcode] = ACTIONS(116),
    [sym_a16_ctrl_cmd] = ACTIONS(113),
    [sym_a8_ctrl_cmd] = ACTIONS(113),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(113),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(113),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(113),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(113),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(113),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(113),
    [sym_bss_ctrl_cmd] = ACTIONS(113),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(113),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(113),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(113),
    [sym_code_ctrl_cmd] = ACTIONS(113),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(113),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(113),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(447),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(447),
    [sym_adc_opcode] = ACTIONS(449),
    [sym_and_opcode] = ACTIONS(449),
    [sym_asl_opcode] = ACTIONS(449),
    [sym_bcc_opcode] = ACTIONS(449),
    [sym_bcs_opcode] = ACTIONS(449),
    [sym_beq_opcode] = ACTIONS(449),
    [sym_bit_opcode] = ACTIONS(449),
    [sym_bmi_opcode] = ACTIONS(449),
    [sym_bne_opcode] = ACTIONS(449),
    [sym_bpl_opcode] = ACTIONS(449),
    [sym_brk_opcode] = ACTIONS(449),
    [sym_bvc_opcode] = ACTIONS(449),
    [sym_bvs_opcode] = ACTIONS(449),
    [sym_clc_opcode] = ACTIONS(449),
    [sym_cld_opcode] = ACTIONS(449),
    [sym_cli_opcode] = ACTIONS(449),
    [sym_clv_opcode] = ACTIONS(449),
    [sym_cmp_opcode] = ACTIONS(449),
    [sym_cpx_opcode] = ACTIONS(449),
    [sym_cpy_opcode] = ACTIONS(449),
    [sym_dec_opcode] = ACTIONS(449),
    [sym_dex_opcode] = ACTIONS(449),
    [sym_dey_opcode] = ACTIONS(449),
    [sym_eor_opcode] = ACTIONS(449),
    [sym_inc_opcode] = ACTIONS(449),
    [sym_inx_opcode] = ACTIONS(449),
    [sym_iny_opcode] = ACTIONS(449),
    [sym_jmp_opcode] = ACTIONS(449),
    [sym_jsr_opcode] = ACTIONS(449),
    [sym_lda_opcode] = ACTIONS(449),
    [sym_ldx_opcode] = ACTIONS(449),
    [sym_ldy_opcode] = ACTIONS(449),
    [sym_lsr_opcode] = ACTIONS(449),
    [sym_nop_opcode] = ACTIONS(449),
    [sym_ora_opcode] = ACTIONS(449),
    [sym_pha_opcode] = ACTIONS(449),
    [sym_php_opcode] = ACTIONS(449),
    [sym_pla_opcode] = ACTIONS(449),
    [sym_plp_opcode] = ACTIONS(449),
    [sym_rol_opcode] = ACTIONS(449),
    [sym_ror_opcode] = ACTIONS(449),
    [sym_rti_opcode] = ACTIONS(449),
    [sym_rts_opcode] = ACTIONS(449),
    [sym_sbc_opcode] = ACTIONS(449),
    [sym_sec_opcode] = ACTIONS(449),
    [sym_sed_opcode] = ACTIONS(449),
    [sym_sei_opcode] = ACTIONS(449),
    [sym_sta_opcode] = ACTIONS(449),
    [sym_stx_opcode] = ACTIONS(449),
    [sym_sty_opcode] = ACTIONS(449),
    [sym_tax_opcode] = ACTIONS(449),
    [sym_tay_opcode] = ACTIONS(449),
    [sym_tsx_opcode] = ACTIONS(449),
    [sym_txa_opcode] = ACTIONS(449),
    [sym_tcs_opcode] = ACTIONS(449),
    [sym_tya_opcode] = ACTIONS(449),
    [sym_a16_ctrl_cmd] = ACTIONS(447),
    [sym_a8_ctrl_cmd] = ACTIONS(447),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(447),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(447),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(447),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(447),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(447),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(447),
    [sym_bss_ctrl_cmd] = ACTIONS(447),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(447),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(447),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(447),
    [sym_code_ctrl_cmd] = ACTIONS(447),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(447),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(447),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(451),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(451),
    [sym_adc_opcode] = ACTIONS(453),
    [sym_and_opcode] = ACTIONS(453),
    [sym_asl_opcode] = ACTIONS(453),
    [sym_bcc_opcode] = ACTIONS(453),
    [sym_bcs_opcode] = ACTIONS(453),
    [sym_beq_opcode] = ACTIONS(453),
    [sym_bit_opcode] = ACTIONS(453),
    [sym_bmi_opcode] = ACTIONS(453),
    [sym_bne_opcode] = ACTIONS(453),
    [sym_bpl_opcode] = ACTIONS(453),
    [sym_brk_opcode] = ACTIONS(453),
    [sym_bvc_opcode] = ACTIONS(453),
    [sym_bvs_opcode] = ACTIONS(453),
    [sym_clc_opcode] = ACTIONS(453),
    [sym_cld_opcode] = ACTIONS(453),
    [sym_cli_opcode] = ACTIONS(453),
    [sym_clv_opcode] = ACTIONS(453),
    [sym_cmp_opcode] = ACTIONS(453),
    [sym_cpx_opcode] = ACTIONS(453),
    [sym_cpy_opcode] = ACTIONS(453),
    [sym_dec_opcode] = ACTIONS(453),
    [sym_dex_opcode] = ACTIONS(453),
    [sym_dey_opcode] = ACTIONS(453),
    [sym_eor_opcode] = ACTIONS(453),
    [sym_inc_opcode] = ACTIONS(453),
    [sym_inx_opcode] = ACTIONS(453),
    [sym_iny_opcode] = ACTIONS(453),
    [sym_jmp_opcode] = ACTIONS(453),
    [sym_jsr_opcode] = ACTIONS(453),
    [sym_lda_opcode] = ACTIONS(453),
    [sym_ldx_opcode] = ACTIONS(453),
    [sym_ldy_opcode] = ACTIONS(453),
    [sym_lsr_opcode] = ACTIONS(453),
    [sym_nop_opcode] = ACTIONS(453),
    [sym_ora_opcode] = ACTIONS(453),
    [sym_pha_opcode] = ACTIONS(453),
    [sym_php_opcode] = ACTIONS(453),
    [sym_pla_opcode] = ACTIONS(453),
    [sym_plp_opcode] = ACTIONS(453),
    [sym_rol_opcode] = ACTIONS(453),
    [sym_ror_opcode] = ACTIONS(453),
    [sym_rti_opcode] = ACTIONS(453),
    [sym_rts_opcode] = ACTIONS(453),
    [sym_sbc_opcode] = ACTIONS(453),
    [sym_sec_opcode] = ACTIONS(453),
    [sym_sed_opcode] = ACTIONS(453),
    [sym_sei_opcode] = ACTIONS(453),
    [sym_sta_opcode] = ACTIONS(453),
    [sym_stx_opcode] = ACTIONS(453),
    [sym_sty_opcode] = ACTIONS(453),
    [sym_tax_opcode] = ACTIONS(453),
    [sym_tay_opcode] = ACTIONS(453),
    [sym_tsx_opcode] = ACTIONS(453),
    [sym_txa_opcode] = ACTIONS(453),
    [sym_tcs_opcode] = ACTIONS(453),
    [sym_tya_opcode] = ACTIONS(453),
    [sym_a16_ctrl_cmd] = ACTIONS(451),
    [sym_a8_ctrl_cmd] = ACTIONS(451),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(451),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(451),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(451),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(451),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(451),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(451),
    [sym_bss_ctrl_cmd] = ACTIONS(451),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(451),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(451),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(451),
    [sym_code_ctrl_cmd] = ACTIONS(451),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(451),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(451),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(455),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(455),
    [sym_adc_opcode] = ACTIONS(457),
    [sym_and_opcode] = ACTIONS(457),
    [sym_asl_opcode] = ACTIONS(457),
    [sym_bcc_opcode] = ACTIONS(457),
    [sym_bcs_opcode] = ACTIONS(457),
    [sym_beq_opcode] = ACTIONS(457),
    [sym_bit_opcode] = ACTIONS(457),
    [sym_bmi_opcode] = ACTIONS(457),
    [sym_bne_opcode] = ACTIONS(457),
    [sym_bpl_opcode] = ACTIONS(457),
    [sym_brk_opcode] = ACTIONS(457),
    [sym_bvc_opcode] = ACTIONS(457),
    [sym_bvs_opcode] = ACTIONS(457),
    [sym_clc_opcode] = ACTIONS(457),
    [sym_cld_opcode] = ACTIONS(457),
    [sym_cli_opcode] = ACTIONS(457),
    [sym_clv_opcode] = ACTIONS(457),
    [sym_cmp_opcode] = ACTIONS(457),
    [sym_cpx_opcode] = ACTIONS(457),
    [sym_cpy_opcode] = ACTIONS(457),
    [sym_dec_opcode] = ACTIONS(457),
    [sym_dex_opcode] = ACTIONS(457),
    [sym_dey_opcode] = ACTIONS(457),
    [sym_eor_opcode] = ACTIONS(457),
    [sym_inc_opcode] = ACTIONS(457),
    [sym_inx_opcode] = ACTIONS(457),
    [sym_iny_opcode] = ACTIONS(457),
    [sym_jmp_opcode] = ACTIONS(457),
    [sym_jsr_opcode] = ACTIONS(457),
    [sym_lda_opcode] = ACTIONS(457),
    [sym_ldx_opcode] = ACTIONS(457),
    [sym_ldy_opcode] = ACTIONS(457),
    [sym_lsr_opcode] = ACTIONS(457),
    [sym_nop_opcode] = ACTIONS(457),
    [sym_ora_opcode] = ACTIONS(457),
    [sym_pha_opcode] = ACTIONS(457),
    [sym_php_opcode] = ACTIONS(457),
    [sym_pla_opcode] = ACTIONS(457),
    [sym_plp_opcode] = ACTIONS(457),
    [sym_rol_opcode] = ACTIONS(457),
    [sym_ror_opcode] = ACTIONS(457),
    [sym_rti_opcode] = ACTIONS(457),
    [sym_rts_opcode] = ACTIONS(457),
    [sym_sbc_opcode] = ACTIONS(457),
    [sym_sec_opcode] = ACTIONS(457),
    [sym_sed_opcode] = ACTIONS(457),
    [sym_sei_opcode] = ACTIONS(457),
    [sym_sta_opcode] = ACTIONS(457),
    [sym_stx_opcode] = ACTIONS(457),
    [sym_sty_opcode] = ACTIONS(457),
    [sym_tax_opcode] = ACTIONS(457),
    [sym_tay_opcode] = ACTIONS(457),
    [sym_tsx_opcode] = ACTIONS(457),
    [sym_txa_opcode] = ACTIONS(457),
    [sym_tcs_opcode] = ACTIONS(457),
    [sym_tya_opcode] = ACTIONS(457),
    [sym_a16_ctrl_cmd] = ACTIONS(455),
    [sym_a8_ctrl_cmd] = ACTIONS(455),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(455),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(455),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(455),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(455),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(455),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(455),
    [sym_bss_ctrl_cmd] = ACTIONS(455),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(455),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(455),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(455),
    [sym_code_ctrl_cmd] = ACTIONS(455),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(455),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(455),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(459),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(459),
    [sym_adc_opcode] = ACTIONS(461),
    [sym_and_opcode] = ACTIONS(461),
    [sym_asl_opcode] = ACTIONS(461),
    [sym_bcc_opcode] = ACTIONS(461),
    [sym_bcs_opcode] = ACTIONS(461),
    [sym_beq_opcode] = ACTIONS(461),
    [sym_bit_opcode] = ACTIONS(461),
    [sym_bmi_opcode] = ACTIONS(461),
    [sym_bne_opcode] = ACTIONS(461),
    [sym_bpl_opcode] = ACTIONS(461),
    [sym_brk_opcode] = ACTIONS(461),
    [sym_bvc_opcode] = ACTIONS(461),
    [sym_bvs_opcode] = ACTIONS(461),
    [sym_clc_opcode] = ACTIONS(461),
    [sym_cld_opcode] = ACTIONS(461),
    [sym_cli_opcode] = ACTIONS(461),
    [sym_clv_opcode] = ACTIONS(461),
    [sym_cmp_opcode] = ACTIONS(461),
    [sym_cpx_opcode] = ACTIONS(461),
    [sym_cpy_opcode] = ACTIONS(461),
    [sym_dec_opcode] = ACTIONS(461),
    [sym_dex_opcode] = ACTIONS(461),
    [sym_dey_opcode] = ACTIONS(461),
    [sym_eor_opcode] = ACTIONS(461),
    [sym_inc_opcode] = ACTIONS(461),
    [sym_inx_opcode] = ACTIONS(461),
    [sym_iny_opcode] = ACTIONS(461),
    [sym_jmp_opcode] = ACTIONS(461),
    [sym_jsr_opcode] = ACTIONS(461),
    [sym_lda_opcode] = ACTIONS(461),
    [sym_ldx_opcode] = ACTIONS(461),
    [sym_ldy_opcode] = ACTIONS(461),
    [sym_lsr_opcode] = ACTIONS(461),
    [sym_nop_opcode] = ACTIONS(461),
    [sym_ora_opcode] = ACTIONS(461),
    [sym_pha_opcode] = ACTIONS(461),
    [sym_php_opcode] = ACTIONS(461),
    [sym_pla_opcode] = ACTIONS(461),
    [sym_plp_opcode] = ACTIONS(461),
    [sym_rol_opcode] = ACTIONS(461),
    [sym_ror_opcode] = ACTIONS(461),
    [sym_rti_opcode] = ACTIONS(461),
    [sym_rts_opcode] = ACTIONS(461),
    [sym_sbc_opcode] = ACTIONS(461),
    [sym_sec_opcode] = ACTIONS(461),
    [sym_sed_opcode] = ACTIONS(461),
    [sym_sei_opcode] = ACTIONS(461),
    [sym_sta_opcode] = ACTIONS(461),
    [sym_stx_opcode] = ACTIONS(461),
    [sym_sty_opcode] = ACTIONS(461),
    [sym_tax_opcode] = ACTIONS(461),
    [sym_tay_opcode] = ACTIONS(461),
    [sym_tsx_opcode] = ACTIONS(461),
    [sym_txa_opcode] = ACTIONS(461),
    [sym_tcs_opcode] = ACTIONS(461),
    [sym_tya_opcode] = ACTIONS(461),
    [sym_a16_ctrl_cmd] = ACTIONS(459),
    [sym_a8_ctrl_cmd] = ACTIONS(459),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(459),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(459),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(459),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(459),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(459),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(459),
    [sym_bss_ctrl_cmd] = ACTIONS(459),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(459),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(459),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(459),
    [sym_code_ctrl_cmd] = ACTIONS(459),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(459),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(459),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(463),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(463),
    [sym_adc_opcode] = ACTIONS(465),
    [sym_and_opcode] = ACTIONS(465),
    [sym_asl_opcode] = ACTIONS(465),
    [sym_bcc_opcode] = ACTIONS(465),
    [sym_bcs_opcode] = ACTIONS(465),
    [sym_beq_opcode] = ACTIONS(465),
    [sym_bit_opcode] = ACTIONS(465),
    [sym_bmi_opcode] = ACTIONS(465),
    [sym_bne_opcode] = ACTIONS(465),
    [sym_bpl_opcode] = ACTIONS(465),
    [sym_brk_opcode] = ACTIONS(465),
    [sym_bvc_opcode] = ACTIONS(465),
    [sym_bvs_opcode] = ACTIONS(465),
    [sym_clc_opcode] = ACTIONS(465),
    [sym_cld_opcode] = ACTIONS(465),
    [sym_cli_opcode] = ACTIONS(465),
    [sym_clv_opcode] = ACTIONS(465),
    [sym_cmp_opcode] = ACTIONS(465),
    [sym_cpx_opcode] = ACTIONS(465),
    [sym_cpy_opcode] = ACTIONS(465),
    [sym_dec_opcode] = ACTIONS(465),
    [sym_dex_opcode] = ACTIONS(465),
    [sym_dey_opcode] = ACTIONS(465),
    [sym_eor_opcode] = ACTIONS(465),
    [sym_inc_opcode] = ACTIONS(465),
    [sym_inx_opcode] = ACTIONS(465),
    [sym_iny_opcode] = ACTIONS(465),
    [sym_jmp_opcode] = ACTIONS(465),
    [sym_jsr_opcode] = ACTIONS(465),
    [sym_lda_opcode] = ACTIONS(465),
    [sym_ldx_opcode] = ACTIONS(465),
    [sym_ldy_opcode] = ACTIONS(465),
    [sym_lsr_opcode] = ACTIONS(465),
    [sym_nop_opcode] = ACTIONS(465),
    [sym_ora_opcode] = ACTIONS(465),
    [sym_pha_opcode] = ACTIONS(465),
    [sym_php_opcode] = ACTIONS(465),
    [sym_pla_opcode] = ACTIONS(465),
    [sym_plp_opcode] = ACTIONS(465),
    [sym_rol_opcode] = ACTIONS(465),
    [sym_ror_opcode] = ACTIONS(465),
    [sym_rti_opcode] = ACTIONS(465),
    [sym_rts_opcode] = ACTIONS(465),
    [sym_sbc_opcode] = ACTIONS(465),
    [sym_sec_opcode] = ACTIONS(465),
    [sym_sed_opcode] = ACTIONS(465),
    [sym_sei_opcode] = ACTIONS(465),
    [sym_sta_opcode] = ACTIONS(465),
    [sym_stx_opcode] = ACTIONS(465),
    [sym_sty_opcode] = ACTIONS(465),
    [sym_tax_opcode] = ACTIONS(465),
    [sym_tay_opcode] = ACTIONS(465),
    [sym_tsx_opcode] = ACTIONS(465),
    [sym_txa_opcode] = ACTIONS(465),
    [sym_tcs_opcode] = ACTIONS(465),
    [sym_tya_opcode] = ACTIONS(465),
    [sym_a16_ctrl_cmd] = ACTIONS(463),
    [sym_a8_ctrl_cmd] = ACTIONS(463),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(463),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(463),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(463),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(463),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(463),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(463),
    [sym_bss_ctrl_cmd] = ACTIONS(463),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(463),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(463),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(463),
    [sym_code_ctrl_cmd] = ACTIONS(463),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(463),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(463),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(467),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(467),
    [sym_adc_opcode] = ACTIONS(469),
    [sym_and_opcode] = ACTIONS(469),
    [sym_asl_opcode] = ACTIONS(469),
    [sym_bcc_opcode] = ACTIONS(469),
    [sym_bcs_opcode] = ACTIONS(469),
    [sym_beq_opcode] = ACTIONS(469),
    [sym_bit_opcode] = ACTIONS(469),
    [sym_bmi_opcode] = ACTIONS(469),
    [sym_bne_opcode] = ACTIONS(469),
    [sym_bpl_opcode] = ACTIONS(469),
    [sym_brk_opcode] = ACTIONS(469),
    [sym_bvc_opcode] = ACTIONS(469),
    [sym_bvs_opcode] = ACTIONS(469),
    [sym_clc_opcode] = ACTIONS(469),
    [sym_cld_opcode] = ACTIONS(469),
    [sym_cli_opcode] = ACTIONS(469),
    [sym_clv_opcode] = ACTIONS(469),
    [sym_cmp_opcode] = ACTIONS(469),
    [sym_cpx_opcode] = ACTIONS(469),
    [sym_cpy_opcode] = ACTIONS(469),
    [sym_dec_opcode] = ACTIONS(469),
    [sym_dex_opcode] = ACTIONS(469),
    [sym_dey_opcode] = ACTIONS(469),
    [sym_eor_opcode] = ACTIONS(469),
    [sym_inc_opcode] = ACTIONS(469),
    [sym_inx_opcode] = ACTIONS(469),
    [sym_iny_opcode] = ACTIONS(469),
    [sym_jmp_opcode] = ACTIONS(469),
    [sym_jsr_opcode] = ACTIONS(469),
    [sym_lda_opcode] = ACTIONS(469),
    [sym_ldx_opcode] = ACTIONS(469),
    [sym_ldy_opcode] = ACTIONS(469),
    [sym_lsr_opcode] = ACTIONS(469),
    [sym_nop_opcode] = ACTIONS(469),
    [sym_ora_opcode] = ACTIONS(469),
    [sym_pha_opcode] = ACTIONS(469),
    [sym_php_opcode] = ACTIONS(469),
    [sym_pla_opcode] = ACTIONS(469),
    [sym_plp_opcode] = ACTIONS(469),
    [sym_rol_opcode] = ACTIONS(469),
    [sym_ror_opcode] = ACTIONS(469),
    [sym_rti_opcode] = ACTIONS(469),
    [sym_rts_opcode] = ACTIONS(469),
    [sym_sbc_opcode] = ACTIONS(469),
    [sym_sec_opcode] = ACTIONS(469),
    [sym_sed_opcode] = ACTIONS(469),
    [sym_sei_opcode] = ACTIONS(469),
    [sym_sta_opcode] = ACTIONS(469),
    [sym_stx_opcode] = ACTIONS(469),
    [sym_sty_opcode] = ACTIONS(469),
    [sym_tax_opcode] = ACTIONS(469),
    [sym_tay_opcode] = ACTIONS(469),
    [sym_tsx_opcode] = ACTIONS(469),
    [sym_txa_opcode] = ACTIONS(469),
    [sym_tcs_opcode] = ACTIONS(469),
    [sym_tya_opcode] = ACTIONS(469),
    [sym_a16_ctrl_cmd] = ACTIONS(467),
    [sym_a8_ctrl_cmd] = ACTIONS(467),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(467),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(467),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(467),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(467),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(467),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(467),
    [sym_bss_ctrl_cmd] = ACTIONS(467),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(467),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(467),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(467),
    [sym_code_ctrl_cmd] = ACTIONS(467),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(467),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(467),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(471),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(471),
    [sym_adc_opcode] = ACTIONS(473),
    [sym_and_opcode] = ACTIONS(473),
    [sym_asl_opcode] = ACTIONS(473),
    [sym_bcc_opcode] = ACTIONS(473),
    [sym_bcs_opcode] = ACTIONS(473),
    [sym_beq_opcode] = ACTIONS(473),
    [sym_bit_opcode] = ACTIONS(473),
    [sym_bmi_opcode] = ACTIONS(473),
    [sym_bne_opcode] = ACTIONS(473),
    [sym_bpl_opcode] = ACTIONS(473),
    [sym_brk_opcode] = ACTIONS(473),
    [sym_bvc_opcode] = ACTIONS(473),
    [sym_bvs_opcode] = ACTIONS(473),
    [sym_clc_opcode] = ACTIONS(473),
    [sym_cld_opcode] = ACTIONS(473),
    [sym_cli_opcode] = ACTIONS(473),
    [sym_clv_opcode] = ACTIONS(473),
    [sym_cmp_opcode] = ACTIONS(473),
    [sym_cpx_opcode] = ACTIONS(473),
    [sym_cpy_opcode] = ACTIONS(473),
    [sym_dec_opcode] = ACTIONS(473),
    [sym_dex_opcode] = ACTIONS(473),
    [sym_dey_opcode] = ACTIONS(473),
    [sym_eor_opcode] = ACTIONS(473),
    [sym_inc_opcode] = ACTIONS(473),
    [sym_inx_opcode] = ACTIONS(473),
    [sym_iny_opcode] = ACTIONS(473),
    [sym_jmp_opcode] = ACTIONS(473),
    [sym_jsr_opcode] = ACTIONS(473),
    [sym_lda_opcode] = ACTIONS(473),
    [sym_ldx_opcode] = ACTIONS(473),
    [sym_ldy_opcode] = ACTIONS(473),
    [sym_lsr_opcode] = ACTIONS(473),
    [sym_nop_opcode] = ACTIONS(473),
    [sym_ora_opcode] = ACTIONS(473),
    [sym_pha_opcode] = ACTIONS(473),
    [sym_php_opcode] = ACTIONS(473),
    [sym_pla_opcode] = ACTIONS(473),
    [sym_plp_opcode] = ACTIONS(473),
    [sym_rol_opcode] = ACTIONS(473),
    [sym_ror_opcode] = ACTIONS(473),
    [sym_rti_opcode] = ACTIONS(473),
    [sym_rts_opcode] = ACTIONS(473),
    [sym_sbc_opcode] = ACTIONS(473),
    [sym_sec_opcode] = ACTIONS(473),
    [sym_sed_opcode] = ACTIONS(473),
    [sym_sei_opcode] = ACTIONS(473),
    [sym_sta_opcode] = ACTIONS(473),
    [sym_stx_opcode] = ACTIONS(473),
    [sym_sty_opcode] = ACTIONS(473),
    [sym_tax_opcode] = ACTIONS(473),
    [sym_tay_opcode] = ACTIONS(473),
    [sym_tsx_opcode] = ACTIONS(473),
    [sym_txa_opcode] = ACTIONS(473),
    [sym_tcs_opcode] = ACTIONS(473),
    [sym_tya_opcode] = ACTIONS(473),
    [sym_a16_ctrl_cmd] = ACTIONS(471),
    [sym_a8_ctrl_cmd] = ACTIONS(471),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(471),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(471),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(471),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(471),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(471),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(471),
    [sym_bss_ctrl_cmd] = ACTIONS(471),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(471),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(471),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(471),
    [sym_code_ctrl_cmd] = ACTIONS(471),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(471),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(471),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(475),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(475),
    [sym_adc_opcode] = ACTIONS(477),
    [sym_and_opcode] = ACTIONS(477),
    [sym_asl_opcode] = ACTIONS(477),
    [sym_bcc_opcode] = ACTIONS(477),
    [sym_bcs_opcode] = ACTIONS(477),
    [sym_beq_opcode] = ACTIONS(477),
    [sym_bit_opcode] = ACTIONS(477),
    [sym_bmi_opcode] = ACTIONS(477),
    [sym_bne_opcode] = ACTIONS(477),
    [sym_bpl_opcode] = ACTIONS(477),
    [sym_brk_opcode] = ACTIONS(477),
    [sym_bvc_opcode] = ACTIONS(477),
    [sym_bvs_opcode] = ACTIONS(477),
    [sym_clc_opcode] = ACTIONS(477),
    [sym_cld_opcode] = ACTIONS(477),
    [sym_cli_opcode] = ACTIONS(477),
    [sym_clv_opcode] = ACTIONS(477),
    [sym_cmp_opcode] = ACTIONS(477),
    [sym_cpx_opcode] = ACTIONS(477),
    [sym_cpy_opcode] = ACTIONS(477),
    [sym_dec_opcode] = ACTIONS(477),
    [sym_dex_opcode] = ACTIONS(477),
    [sym_dey_opcode] = ACTIONS(477),
    [sym_eor_opcode] = ACTIONS(477),
    [sym_inc_opcode] = ACTIONS(477),
    [sym_inx_opcode] = ACTIONS(477),
    [sym_iny_opcode] = ACTIONS(477),
    [sym_jmp_opcode] = ACTIONS(477),
    [sym_jsr_opcode] = ACTIONS(477),
    [sym_lda_opcode] = ACTIONS(477),
    [sym_ldx_opcode] = ACTIONS(477),
    [sym_ldy_opcode] = ACTIONS(477),
    [sym_lsr_opcode] = ACTIONS(477),
    [sym_nop_opcode] = ACTIONS(477),
    [sym_ora_opcode] = ACTIONS(477),
    [sym_pha_opcode] = ACTIONS(477),
    [sym_php_opcode] = ACTIONS(477),
    [sym_pla_opcode] = ACTIONS(477),
    [sym_plp_opcode] = ACTIONS(477),
    [sym_rol_opcode] = ACTIONS(477),
    [sym_ror_opcode] = ACTIONS(477),
    [sym_rti_opcode] = ACTIONS(477),
    [sym_rts_opcode] = ACTIONS(477),
    [sym_sbc_opcode] = ACTIONS(477),
    [sym_sec_opcode] = ACTIONS(477),
    [sym_sed_opcode] = ACTIONS(477),
    [sym_sei_opcode] = ACTIONS(477),
    [sym_sta_opcode] = ACTIONS(477),
    [sym_stx_opcode] = ACTIONS(477),
    [sym_sty_opcode] = ACTIONS(477),
    [sym_tax_opcode] = ACTIONS(477),
    [sym_tay_opcode] = ACTIONS(477),
    [sym_tsx_opcode] = ACTIONS(477),
    [sym_txa_opcode] = ACTIONS(477),
    [sym_tcs_opcode] = ACTIONS(477),
    [sym_tya_opcode] = ACTIONS(477),
    [sym_a16_ctrl_cmd] = ACTIONS(475),
    [sym_a8_ctrl_cmd] = ACTIONS(475),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(475),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(475),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(475),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(475),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(475),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(475),
    [sym_bss_ctrl_cmd] = ACTIONS(475),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(475),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(475),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(475),
    [sym_code_ctrl_cmd] = ACTIONS(475),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(475),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(475),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(479),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(479),
    [sym_adc_opcode] = ACTIONS(481),
    [sym_and_opcode] = ACTIONS(481),
    [sym_asl_opcode] = ACTIONS(481),
    [sym_bcc_opcode] = ACTIONS(481),
    [sym_bcs_opcode] = ACTIONS(481),
    [sym_beq_opcode] = ACTIONS(481),
    [sym_bit_opcode] = ACTIONS(481),
    [sym_bmi_opcode] = ACTIONS(481),
    [sym_bne_opcode] = ACTIONS(481),
    [sym_bpl_opcode] = ACTIONS(481),
    [sym_brk_opcode] = ACTIONS(481),
    [sym_bvc_opcode] = ACTIONS(481),
    [sym_bvs_opcode] = ACTIONS(481),
    [sym_clc_opcode] = ACTIONS(481),
    [sym_cld_opcode] = ACTIONS(481),
    [sym_cli_opcode] = ACTIONS(481),
    [sym_clv_opcode] = ACTIONS(481),
    [sym_cmp_opcode] = ACTIONS(481),
    [sym_cpx_opcode] = ACTIONS(481),
    [sym_cpy_opcode] = ACTIONS(481),
    [sym_dec_opcode] = ACTIONS(481),
    [sym_dex_opcode] = ACTIONS(481),
    [sym_dey_opcode] = ACTIONS(481),
    [sym_eor_opcode] = ACTIONS(481),
    [sym_inc_opcode] = ACTIONS(481),
    [sym_inx_opcode] = ACTIONS(481),
    [sym_iny_opcode] = ACTIONS(481),
    [sym_jmp_opcode] = ACTIONS(481),
    [sym_jsr_opcode] = ACTIONS(481),
    [sym_lda_opcode] = ACTIONS(481),
    [sym_ldx_opcode] = ACTIONS(481),
    [sym_ldy_opcode] = ACTIONS(481),
    [sym_lsr_opcode] = ACTIONS(481),
    [sym_nop_opcode] = ACTIONS(481),
    [sym_ora_opcode] = ACTIONS(481),
    [sym_pha_opcode] = ACTIONS(481),
    [sym_php_opcode] = ACTIONS(481),
    [sym_pla_opcode] = ACTIONS(481),
    [sym_plp_opcode] = ACTIONS(481),
    [sym_rol_opcode] = ACTIONS(481),
    [sym_ror_opcode] = ACTIONS(481),
    [sym_rti_opcode] = ACTIONS(481),
    [sym_rts_opcode] = ACTIONS(481),
    [sym_sbc_opcode] = ACTIONS(481),
    [sym_sec_opcode] = ACTIONS(481),
    [sym_sed_opcode] = ACTIONS(481),
    [sym_sei_opcode] = ACTIONS(481),
    [sym_sta_opcode] = ACTIONS(481),
    [sym_stx_opcode] = ACTIONS(481),
    [sym_sty_opcode] = ACTIONS(481),
    [sym_tax_opcode] = ACTIONS(481),
    [sym_tay_opcode] = ACTIONS(481),
    [sym_tsx_opcode] = ACTIONS(481),
    [sym_txa_opcode] = ACTIONS(481),
    [sym_tcs_opcode] = ACTIONS(481),
    [sym_tya_opcode] = ACTIONS(481),
    [sym_a16_ctrl_cmd] = ACTIONS(479),
    [sym_a8_ctrl_cmd] = ACTIONS(479),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(479),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(479),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(479),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(479),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(479),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(479),
    [sym_bss_ctrl_cmd] = ACTIONS(479),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(479),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(479),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(479),
    [sym_code_ctrl_cmd] = ACTIONS(479),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(479),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(479),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(483),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(483),
    [sym_adc_opcode] = ACTIONS(485),
    [sym_and_opcode] = ACTIONS(485),
    [sym_asl_opcode] = ACTIONS(485),
    [sym_bcc_opcode] = ACTIONS(485),
    [sym_bcs_opcode] = ACTIONS(485),
    [sym_beq_opcode] = ACTIONS(485),
    [sym_bit_opcode] = ACTIONS(485),
    [sym_bmi_opcode] = ACTIONS(485),
    [sym_bne_opcode] = ACTIONS(485),
    [sym_bpl_opcode] = ACTIONS(485),
    [sym_brk_opcode] = ACTIONS(485),
    [sym_bvc_opcode] = ACTIONS(485),
    [sym_bvs_opcode] = ACTIONS(485),
    [sym_clc_opcode] = ACTIONS(485),
    [sym_cld_opcode] = ACTIONS(485),
    [sym_cli_opcode] = ACTIONS(485),
    [sym_clv_opcode] = ACTIONS(485),
    [sym_cmp_opcode] = ACTIONS(485),
    [sym_cpx_opcode] = ACTIONS(485),
    [sym_cpy_opcode] = ACTIONS(485),
    [sym_dec_opcode] = ACTIONS(485),
    [sym_dex_opcode] = ACTIONS(485),
    [sym_dey_opcode] = ACTIONS(485),
    [sym_eor_opcode] = ACTIONS(485),
    [sym_inc_opcode] = ACTIONS(485),
    [sym_inx_opcode] = ACTIONS(485),
    [sym_iny_opcode] = ACTIONS(485),
    [sym_jmp_opcode] = ACTIONS(485),
    [sym_jsr_opcode] = ACTIONS(485),
    [sym_lda_opcode] = ACTIONS(485),
    [sym_ldx_opcode] = ACTIONS(485),
    [sym_ldy_opcode] = ACTIONS(485),
    [sym_lsr_opcode] = ACTIONS(485),
    [sym_nop_opcode] = ACTIONS(485),
    [sym_ora_opcode] = ACTIONS(485),
    [sym_pha_opcode] = ACTIONS(485),
    [sym_php_opcode] = ACTIONS(485),
    [sym_pla_opcode] = ACTIONS(485),
    [sym_plp_opcode] = ACTIONS(485),
    [sym_rol_opcode] = ACTIONS(485),
    [sym_ror_opcode] = ACTIONS(485),
    [sym_rti_opcode] = ACTIONS(485),
    [sym_rts_opcode] = ACTIONS(485),
    [sym_sbc_opcode] = ACTIONS(485),
    [sym_sec_opcode] = ACTIONS(485),
    [sym_sed_opcode] = ACTIONS(485),
    [sym_sei_opcode] = ACTIONS(485),
    [sym_sta_opcode] = ACTIONS(485),
    [sym_stx_opcode] = ACTIONS(485),
    [sym_sty_opcode] = ACTIONS(485),
    [sym_tax_opcode] = ACTIONS(485),
    [sym_tay_opcode] = ACTIONS(485),
    [sym_tsx_opcode] = ACTIONS(485),
    [sym_txa_opcode] = ACTIONS(485),
    [sym_tcs_opcode] = ACTIONS(485),
    [sym_tya_opcode] = ACTIONS(485),
    [sym_a16_ctrl_cmd] = ACTIONS(483),
    [sym_a8_ctrl_cmd] = ACTIONS(483),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(483),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(483),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(483),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(483),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(483),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(483),
    [sym_bss_ctrl_cmd] = ACTIONS(483),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(483),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(483),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(483),
    [sym_code_ctrl_cmd] = ACTIONS(483),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(483),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(483),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(487),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(487),
    [sym_adc_opcode] = ACTIONS(489),
    [sym_and_opcode] = ACTIONS(489),
    [sym_asl_opcode] = ACTIONS(489),
    [sym_bcc_opcode] = ACTIONS(489),
    [sym_bcs_opcode] = ACTIONS(489),
    [sym_beq_opcode] = ACTIONS(489),
    [sym_bit_opcode] = ACTIONS(489),
    [sym_bmi_opcode] = ACTIONS(489),
    [sym_bne_opcode] = ACTIONS(489),
    [sym_bpl_opcode] = ACTIONS(489),
    [sym_brk_opcode] = ACTIONS(489),
    [sym_bvc_opcode] = ACTIONS(489),
    [sym_bvs_opcode] = ACTIONS(489),
    [sym_clc_opcode] = ACTIONS(489),
    [sym_cld_opcode] = ACTIONS(489),
    [sym_cli_opcode] = ACTIONS(489),
    [sym_clv_opcode] = ACTIONS(489),
    [sym_cmp_opcode] = ACTIONS(489),
    [sym_cpx_opcode] = ACTIONS(489),
    [sym_cpy_opcode] = ACTIONS(489),
    [sym_dec_opcode] = ACTIONS(489),
    [sym_dex_opcode] = ACTIONS(489),
    [sym_dey_opcode] = ACTIONS(489),
    [sym_eor_opcode] = ACTIONS(489),
    [sym_inc_opcode] = ACTIONS(489),
    [sym_inx_opcode] = ACTIONS(489),
    [sym_iny_opcode] = ACTIONS(489),
    [sym_jmp_opcode] = ACTIONS(489),
    [sym_jsr_opcode] = ACTIONS(489),
    [sym_lda_opcode] = ACTIONS(489),
    [sym_ldx_opcode] = ACTIONS(489),
    [sym_ldy_opcode] = ACTIONS(489),
    [sym_lsr_opcode] = ACTIONS(489),
    [sym_nop_opcode] = ACTIONS(489),
    [sym_ora_opcode] = ACTIONS(489),
    [sym_pha_opcode] = ACTIONS(489),
    [sym_php_opcode] = ACTIONS(489),
    [sym_pla_opcode] = ACTIONS(489),
    [sym_plp_opcode] = ACTIONS(489),
    [sym_rol_opcode] = ACTIONS(489),
    [sym_ror_opcode] = ACTIONS(489),
    [sym_rti_opcode] = ACTIONS(489),
    [sym_rts_opcode] = ACTIONS(489),
    [sym_sbc_opcode] = ACTIONS(489),
    [sym_sec_opcode] = ACTIONS(489),
    [sym_sed_opcode] = ACTIONS(489),
    [sym_sei_opcode] = ACTIONS(489),
    [sym_sta_opcode] = ACTIONS(489),
    [sym_stx_opcode] = ACTIONS(489),
    [sym_sty_opcode] = ACTIONS(489),
    [sym_tax_opcode] = ACTIONS(489),
    [sym_tay_opcode] = ACTIONS(489),
    [sym_tsx_opcode] = ACTIONS(489),
    [sym_txa_opcode] = ACTIONS(489),
    [sym_tcs_opcode] = ACTIONS(489),
    [sym_tya_opcode] = ACTIONS(489),
    [sym_a16_ctrl_cmd] = ACTIONS(487),
    [sym_a8_ctrl_cmd] = ACTIONS(487),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(487),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(487),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(487),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(487),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(487),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(487),
    [sym_bss_ctrl_cmd] = ACTIONS(487),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(487),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(487),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(487),
    [sym_code_ctrl_cmd] = ACTIONS(487),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(487),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(487),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(491),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(491),
    [sym_adc_opcode] = ACTIONS(493),
    [sym_and_opcode] = ACTIONS(493),
    [sym_asl_opcode] = ACTIONS(493),
    [sym_bcc_opcode] = ACTIONS(493),
    [sym_bcs_opcode] = ACTIONS(493),
    [sym_beq_opcode] = ACTIONS(493),
    [sym_bit_opcode] = ACTIONS(493),
    [sym_bmi_opcode] = ACTIONS(493),
    [sym_bne_opcode] = ACTIONS(493),
    [sym_bpl_opcode] = ACTIONS(493),
    [sym_brk_opcode] = ACTIONS(493),
    [sym_bvc_opcode] = ACTIONS(493),
    [sym_bvs_opcode] = ACTIONS(493),
    [sym_clc_opcode] = ACTIONS(493),
    [sym_cld_opcode] = ACTIONS(493),
    [sym_cli_opcode] = ACTIONS(493),
    [sym_clv_opcode] = ACTIONS(493),
    [sym_cmp_opcode] = ACTIONS(493),
    [sym_cpx_opcode] = ACTIONS(493),
    [sym_cpy_opcode] = ACTIONS(493),
    [sym_dec_opcode] = ACTIONS(493),
    [sym_dex_opcode] = ACTIONS(493),
    [sym_dey_opcode] = ACTIONS(493),
    [sym_eor_opcode] = ACTIONS(493),
    [sym_inc_opcode] = ACTIONS(493),
    [sym_inx_opcode] = ACTIONS(493),
    [sym_iny_opcode] = ACTIONS(493),
    [sym_jmp_opcode] = ACTIONS(493),
    [sym_jsr_opcode] = ACTIONS(493),
    [sym_lda_opcode] = ACTIONS(493),
    [sym_ldx_opcode] = ACTIONS(493),
    [sym_ldy_opcode] = ACTIONS(493),
    [sym_lsr_opcode] = ACTIONS(493),
    [sym_nop_opcode] = ACTIONS(493),
    [sym_ora_opcode] = ACTIONS(493),
    [sym_pha_opcode] = ACTIONS(493),
    [sym_php_opcode] = ACTIONS(493),
    [sym_pla_opcode] = ACTIONS(493),
    [sym_plp_opcode] = ACTIONS(493),
    [sym_rol_opcode] = ACTIONS(493),
    [sym_ror_opcode] = ACTIONS(493),
    [sym_rti_opcode] = ACTIONS(493),
    [sym_rts_opcode] = ACTIONS(493),
    [sym_sbc_opcode] = ACTIONS(493),
    [sym_sec_opcode] = ACTIONS(493),
    [sym_sed_opcode] = ACTIONS(493),
    [sym_sei_opcode] = ACTIONS(493),
    [sym_sta_opcode] = ACTIONS(493),
    [sym_stx_opcode] = ACTIONS(493),
    [sym_sty_opcode] = ACTIONS(493),
    [sym_tax_opcode] = ACTIONS(493),
    [sym_tay_opcode] = ACTIONS(493),
    [sym_tsx_opcode] = ACTIONS(493),
    [sym_txa_opcode] = ACTIONS(493),
    [sym_tcs_opcode] = ACTIONS(493),
    [sym_tya_opcode] = ACTIONS(493),
    [sym_a16_ctrl_cmd] = ACTIONS(491),
    [sym_a8_ctrl_cmd] = ACTIONS(491),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(491),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(491),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(491),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(491),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(491),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(491),
    [sym_bss_ctrl_cmd] = ACTIONS(491),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(491),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(491),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(491),
    [sym_code_ctrl_cmd] = ACTIONS(491),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(491),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(491),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(417),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(417),
    [sym_adc_opcode] = ACTIONS(421),
    [sym_and_opcode] = ACTIONS(421),
    [sym_asl_opcode] = ACTIONS(421),
    [sym_bcc_opcode] = ACTIONS(421),
    [sym_bcs_opcode] = ACTIONS(421),
    [sym_beq_opcode] = ACTIONS(421),
    [sym_bit_opcode] = ACTIONS(421),
    [sym_bmi_opcode] = ACTIONS(421),
    [sym_bne_opcode] = ACTIONS(421),
    [sym_bpl_opcode] = ACTIONS(421),
    [sym_brk_opcode] = ACTIONS(421),
    [sym_bvc_opcode] = ACTIONS(421),
    [sym_bvs_opcode] = ACTIONS(421),
    [sym_clc_opcode] = ACTIONS(421),
    [sym_cld_opcode] = ACTIONS(421),
    [sym_cli_opcode] = ACTIONS(421),
    [sym_clv_opcode] = ACTIONS(421),
    [sym_cmp_opcode] = ACTIONS(421),
    [sym_cpx_opcode] = ACTIONS(421),
    [sym_cpy_opcode] = ACTIONS(421),
    [sym_dec_opcode] = ACTIONS(421),
    [sym_dex_opcode] = ACTIONS(421),
    [sym_dey_opcode] = ACTIONS(421),
    [sym_eor_opcode] = ACTIONS(421),
    [sym_inc_opcode] = ACTIONS(421),
    [sym_inx_opcode] = ACTIONS(421),
    [sym_iny_opcode] = ACTIONS(421),
    [sym_jmp_opcode] = ACTIONS(421),
    [sym_jsr_opcode] = ACTIONS(421),
    [sym_lda_opcode] = ACTIONS(421),
    [sym_ldx_opcode] = ACTIONS(421),
    [sym_ldy_opcode] = ACTIONS(421),
    [sym_lsr_opcode] = ACTIONS(421),
    [sym_nop_opcode] = ACTIONS(421),
    [sym_ora_opcode] = ACTIONS(421),
    [sym_pha_opcode] = ACTIONS(421),
    [sym_php_opcode] = ACTIONS(421),
    [sym_pla_opcode] = ACTIONS(421),
    [sym_plp_opcode] = ACTIONS(421),
    [sym_rol_opcode] = ACTIONS(421),
    [sym_ror_opcode] = ACTIONS(421),
    [sym_rti_opcode] = ACTIONS(421),
    [sym_rts_opcode] = ACTIONS(421),
    [sym_sbc_opcode] = ACTIONS(421),
    [sym_sec_opcode] = ACTIONS(421),
    [sym_sed_opcode] = ACTIONS(421),
    [sym_sei_opcode] = ACTIONS(421),
    [sym_sta_opcode] = ACTIONS(421),
    [sym_stx_opcode] = ACTIONS(421),
    [sym_sty_opcode] = ACTIONS(421),
    [sym_tax_opcode] = ACTIONS(421),
    [sym_tay_opcode] = ACTIONS(421),
    [sym_tsx_opcode] = ACTIONS(421),
    [sym_txa_opcode] = ACTIONS(421),
    [sym_tcs_opcode] = ACTIONS(421),
    [sym_tya_opcode] = ACTIONS(421),
    [sym_a16_ctrl_cmd] = ACTIONS(417),
    [sym_a8_ctrl_cmd] = ACTIONS(417),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(417),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(417),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(417),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(417),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(417),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(417),
    [sym_bss_ctrl_cmd] = ACTIONS(417),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(417),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(417),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(417),
    [sym_code_ctrl_cmd] = ACTIONS(417),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(417),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(417),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(433),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(433),
    [sym_adc_opcode] = ACTIONS(437),
    [sym_and_opcode] = ACTIONS(437),
    [sym_asl_opcode] = ACTIONS(437),
    [sym_bcc_opcode] = ACTIONS(437),
    [sym_bcs_opcode] = ACTIONS(437),
    [sym_beq_opcode] = ACTIONS(437),
    [sym_bit_opcode] = ACTIONS(437),
    [sym_bmi_opcode] = ACTIONS(437),
    [sym_bne_opcode] = ACTIONS(437),
    [sym_bpl_opcode] = ACTIONS(437),
    [sym_brk_opcode] = ACTIONS(437),
    [sym_bvc_opcode] = ACTIONS(437),
    [sym_bvs_opcode] = ACTIONS(437),
    [sym_clc_opcode] = ACTIONS(437),
    [sym_cld_opcode] = ACTIONS(437),
    [sym_cli_opcode] = ACTIONS(437),
    [sym_clv_opcode] = ACTIONS(437),
    [sym_cmp_opcode] = ACTIONS(437),
    [sym_cpx_opcode] = ACTIONS(437),
    [sym_cpy_opcode] = ACTIONS(437),
    [sym_dec_opcode] = ACTIONS(437),
    [sym_dex_opcode] = ACTIONS(437),
    [sym_dey_opcode] = ACTIONS(437),
    [sym_eor_opcode] = ACTIONS(437),
    [sym_inc_opcode] = ACTIONS(437),
    [sym_inx_opcode] = ACTIONS(437),
    [sym_iny_opcode] = ACTIONS(437),
    [sym_jmp_opcode] = ACTIONS(437),
    [sym_jsr_opcode] = ACTIONS(437),
    [sym_lda_opcode] = ACTIONS(437),
    [sym_ldx_opcode] = ACTIONS(437),
    [sym_ldy_opcode] = ACTIONS(437),
    [sym_lsr_opcode] = ACTIONS(437),
    [sym_nop_opcode] = ACTIONS(437),
    [sym_ora_opcode] = ACTIONS(437),
    [sym_pha_opcode] = ACTIONS(437),
    [sym_php_opcode] = ACTIONS(437),
    [sym_pla_opcode] = ACTIONS(437),
    [sym_plp_opcode] = ACTIONS(437),
    [sym_rol_opcode] = ACTIONS(437),
    [sym_ror_opcode] = ACTIONS(437),
    [sym_rti_opcode] = ACTIONS(437),
    [sym_rts_opcode] = ACTIONS(437),
    [sym_sbc_opcode] = ACTIONS(437),
    [sym_sec_opcode] = ACTIONS(437),
    [sym_sed_opcode] = ACTIONS(437),
    [sym_sei_opcode] = ACTIONS(437),
    [sym_sta_opcode] = ACTIONS(437),
    [sym_stx_opcode] = ACTIONS(437),
    [sym_sty_opcode] = ACTIONS(437),
    [sym_tax_opcode] = ACTIONS(437),
    [sym_tay_opcode] = ACTIONS(437),
    [sym_tsx_opcode] = ACTIONS(437),
    [sym_txa_opcode] = ACTIONS(437),
    [sym_tcs_opcode] = ACTIONS(437),
    [sym_tya_opcode] = ACTIONS(437),
    [sym_a16_ctrl_cmd] = ACTIONS(433),
    [sym_a8_ctrl_cmd] = ACTIONS(433),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(433),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(433),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(433),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(433),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(433),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(433),
    [sym_bss_ctrl_cmd] = ACTIONS(433),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(433),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(433),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(433),
    [sym_code_ctrl_cmd] = ACTIONS(433),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(433),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(433),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(495),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(495),
    [sym_adc_opcode] = ACTIONS(497),
    [sym_and_opcode] = ACTIONS(497),
    [sym_asl_opcode] = ACTIONS(497),
    [sym_bcc_opcode] = ACTIONS(497),
    [sym_bcs_opcode] = ACTIONS(497),
    [sym_beq_opcode] = ACTIONS(497),
    [sym_bit_opcode] = ACTIONS(497),
    [sym_bmi_opcode] = ACTIONS(497),
    [sym_bne_opcode] = ACTIONS(497),
    [sym_bpl_opcode] = ACTIONS(497),
    [sym_brk_opcode] = ACTIONS(497),
    [sym_bvc_opcode] = ACTIONS(497),
    [sym_bvs_opcode] = ACTIONS(497),
    [sym_clc_opcode] = ACTIONS(497),
    [sym_cld_opcode] = ACTIONS(497),
    [sym_cli_opcode] = ACTIONS(497),
    [sym_clv_opcode] = ACTIONS(497),
    [sym_cmp_opcode] = ACTIONS(497),
    [sym_cpx_opcode] = ACTIONS(497),
    [sym_cpy_opcode] = ACTIONS(497),
    [sym_dec_opcode] = ACTIONS(497),
    [sym_dex_opcode] = ACTIONS(497),
    [sym_dey_opcode] = ACTIONS(497),
    [sym_eor_opcode] = ACTIONS(497),
    [sym_inc_opcode] = ACTIONS(497),
    [sym_inx_opcode] = ACTIONS(497),
    [sym_iny_opcode] = ACTIONS(497),
    [sym_jmp_opcode] = ACTIONS(497),
    [sym_jsr_opcode] = ACTIONS(497),
    [sym_lda_opcode] = ACTIONS(497),
    [sym_ldx_opcode] = ACTIONS(497),
    [sym_ldy_opcode] = ACTIONS(497),
    [sym_lsr_opcode] = ACTIONS(497),
    [sym_nop_opcode] = ACTIONS(497),
    [sym_ora_opcode] = ACTIONS(497),
    [sym_pha_opcode] = ACTIONS(497),
    [sym_php_opcode] = ACTIONS(497),
    [sym_pla_opcode] = ACTIONS(497),
    [sym_plp_opcode] = ACTIONS(497),
    [sym_rol_opcode] = ACTIONS(497),
    [sym_ror_opcode] = ACTIONS(497),
    [sym_rti_opcode] = ACTIONS(497),
    [sym_rts_opcode] = ACTIONS(497),
    [sym_sbc_opcode] = ACTIONS(497),
    [sym_sec_opcode] = ACTIONS(497),
    [sym_sed_opcode] = ACTIONS(497),
    [sym_sei_opcode] = ACTIONS(497),
    [sym_sta_opcode] = ACTIONS(497),
    [sym_stx_opcode] = ACTIONS(497),
    [sym_sty_opcode] = ACTIONS(497),
    [sym_tax_opcode] = ACTIONS(497),
    [sym_tay_opcode] = ACTIONS(497),
    [sym_tsx_opcode] = ACTIONS(497),
    [sym_txa_opcode] = ACTIONS(497),
    [sym_tcs_opcode] = ACTIONS(497),
    [sym_tya_opcode] = ACTIONS(497),
    [sym_a16_ctrl_cmd] = ACTIONS(495),
    [sym_a8_ctrl_cmd] = ACTIONS(495),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(495),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(495),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(495),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(495),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(495),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(495),
    [sym_bss_ctrl_cmd] = ACTIONS(495),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(495),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(495),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(495),
    [sym_code_ctrl_cmd] = ACTIONS(495),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(495),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(495),
  },
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(499),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(499),
    [sym_adc_opcode] = ACTIONS(501),
    [sym_and_opcode] = ACTIONS(501),
    [sym_asl_opcode] = ACTIONS(501),
    [sym_bcc_opcode] = ACTIONS(501),
    [sym_bcs_opcode] = ACTIONS(501),
    [sym_beq_opcode] = ACTIONS(501),
    [sym_bit_opcode] = ACTIONS(501),
    [sym_bmi_opcode] = ACTIONS(501),
    [sym_bne_opcode] = ACTIONS(501),
    [sym_bpl_opcode] = ACTIONS(501),
    [sym_brk_opcode] = ACTIONS(501),
    [sym_bvc_opcode] = ACTIONS(501),
    [sym_bvs_opcode] = ACTIONS(501),
    [sym_clc_opcode] = ACTIONS(501),
    [sym_cld_opcode] = ACTIONS(501),
    [sym_cli_opcode] = ACTIONS(501),
    [sym_clv_opcode] = ACTIONS(501),
    [sym_cmp_opcode] = ACTIONS(501),
    [sym_cpx_opcode] = ACTIONS(501),
    [sym_cpy_opcode] = ACTIONS(501),
    [sym_dec_opcode] = ACTIONS(501),
    [sym_dex_opcode] = ACTIONS(501),
    [sym_dey_opcode] = ACTIONS(501),
    [sym_eor_opcode] = ACTIONS(501),
    [sym_inc_opcode] = ACTIONS(501),
    [sym_inx_opcode] = ACTIONS(501),
    [sym_iny_opcode] = ACTIONS(501),
    [sym_jmp_opcode] = ACTIONS(501),
    [sym_jsr_opcode] = ACTIONS(501),
    [sym_lda_opcode] = ACTIONS(501),
    [sym_ldx_opcode] = ACTIONS(501),
    [sym_ldy_opcode] = ACTIONS(501),
    [sym_lsr_opcode] = ACTIONS(501),
    [sym_nop_opcode] = ACTIONS(501),
    [sym_ora_opcode] = ACTIONS(501),
    [sym_pha_opcode] = ACTIONS(501),
    [sym_php_opcode] = ACTIONS(501),
    [sym_pla_opcode] = ACTIONS(501),
    [sym_plp_opcode] = ACTIONS(501),
    [sym_rol_opcode] = ACTIONS(501),
    [sym_ror_opcode] = ACTIONS(501),
    [sym_rti_opcode] = ACTIONS(501),
    [sym_rts_opcode] = ACTIONS(501),
    [sym_sbc_opcode] = ACTIONS(501),
    [sym_sec_opcode] = ACTIONS(501),
    [sym_sed_opcode] = ACTIONS(501),
    [sym_sei_opcode] = ACTIONS(501),
    [sym_sta_opcode] = ACTIONS(501),
    [sym_stx_opcode] = ACTIONS(501),
    [sym_sty_opcode] = ACTIONS(501),
    [sym_tax_opcode] = ACTIONS(501),
    [sym_tay_opcode] = ACTIONS(501),
    [sym_tsx_opcode] = ACTIONS(501),
    [sym_txa_opcode] = ACTIONS(501),
    [sym_tcs_opcode] = ACTIONS(501),
    [sym_tya_opcode] = ACTIONS(501),
    [sym_a16_ctrl_cmd] = ACTIONS(499),
    [sym_a8_ctrl_cmd] = ACTIONS(499),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(499),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(499),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(499),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(499),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(499),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(499),
    [sym_bss_ctrl_cmd] = ACTIONS(499),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(499),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(499),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(499),
    [sym_code_ctrl_cmd] = ACTIONS(499),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(499),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(499),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(503),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(503),
    [sym_adc_opcode] = ACTIONS(505),
    [sym_and_opcode] = ACTIONS(505),
    [sym_asl_opcode] = ACTIONS(505),
    [sym_bcc_opcode] = ACTIONS(505),
    [sym_bcs_opcode] = ACTIONS(505),
    [sym_beq_opcode] = ACTIONS(505),
    [sym_bit_opcode] = ACTIONS(505),
    [sym_bmi_opcode] = ACTIONS(505),
    [sym_bne_opcode] = ACTIONS(505),
    [sym_bpl_opcode] = ACTIONS(505),
    [sym_brk_opcode] = ACTIONS(505),
    [sym_bvc_opcode] = ACTIONS(505),
    [sym_bvs_opcode] = ACTIONS(505),
    [sym_clc_opcode] = ACTIONS(505),
    [sym_cld_opcode] = ACTIONS(505),
    [sym_cli_opcode] = ACTIONS(505),
    [sym_clv_opcode] = ACTIONS(505),
    [sym_cmp_opcode] = ACTIONS(505),
    [sym_cpx_opcode] = ACTIONS(505),
    [sym_cpy_opcode] = ACTIONS(505),
    [sym_dec_opcode] = ACTIONS(505),
    [sym_dex_opcode] = ACTIONS(505),
    [sym_dey_opcode] = ACTIONS(505),
    [sym_eor_opcode] = ACTIONS(505),
    [sym_inc_opcode] = ACTIONS(505),
    [sym_inx_opcode] = ACTIONS(505),
    [sym_iny_opcode] = ACTIONS(505),
    [sym_jmp_opcode] = ACTIONS(505),
    [sym_jsr_opcode] = ACTIONS(505),
    [sym_lda_opcode] = ACTIONS(505),
    [sym_ldx_opcode] = ACTIONS(505),
    [sym_ldy_opcode] = ACTIONS(505),
    [sym_lsr_opcode] = ACTIONS(505),
    [sym_nop_opcode] = ACTIONS(505),
    [sym_ora_opcode] = ACTIONS(505),
    [sym_pha_opcode] = ACTIONS(505),
    [sym_php_opcode] = ACTIONS(505),
    [sym_pla_opcode] = ACTIONS(505),
    [sym_plp_opcode] = ACTIONS(505),
    [sym_rol_opcode] = ACTIONS(505),
    [sym_ror_opcode] = ACTIONS(505),
    [sym_rti_opcode] = ACTIONS(505),
    [sym_rts_opcode] = ACTIONS(505),
    [sym_sbc_opcode] = ACTIONS(505),
    [sym_sec_opcode] = ACTIONS(505),
    [sym_sed_opcode] = ACTIONS(505),
    [sym_sei_opcode] = ACTIONS(505),
    [sym_sta_opcode] = ACTIONS(505),
    [sym_stx_opcode] = ACTIONS(505),
    [sym_sty_opcode] = ACTIONS(505),
    [sym_tax_opcode] = ACTIONS(505),
    [sym_tay_opcode] = ACTIONS(505),
    [sym_tsx_opcode] = ACTIONS(505),
    [sym_txa_opcode] = ACTIONS(505),
    [sym_tcs_opcode] = ACTIONS(505),
    [sym_tya_opcode] = ACTIONS(505),
    [sym_a16_ctrl_cmd] = ACTIONS(503),
    [sym_a8_ctrl_cmd] = ACTIONS(503),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(503),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(503),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(503),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(503),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(503),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(503),
    [sym_bss_ctrl_cmd] = ACTIONS(503),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(503),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(503),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(503),
    [sym_code_ctrl_cmd] = ACTIONS(503),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(503),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(503),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(507),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(507),
    [sym_adc_opcode] = ACTIONS(509),
    [sym_and_opcode] = ACTIONS(509),
    [sym_asl_opcode] = ACTIONS(509),
    [sym_bcc_opcode] = ACTIONS(509),
    [sym_bcs_opcode] = ACTIONS(509),
    [sym_beq_opcode] = ACTIONS(509),
    [sym_bit_opcode] = ACTIONS(509),
    [sym_bmi_opcode] = ACTIONS(509),
    [sym_bne_opcode] = ACTIONS(509),
    [sym_bpl_opcode] = ACTIONS(509),
    [sym_brk_opcode] = ACTIONS(509),
    [sym_bvc_opcode] = ACTIONS(509),
    [sym_bvs_opcode] = ACTIONS(509),
    [sym_clc_opcode] = ACTIONS(509),
    [sym_cld_opcode] = ACTIONS(509),
    [sym_cli_opcode] = ACTIONS(509),
    [sym_clv_opcode] = ACTIONS(509),
    [sym_cmp_opcode] = ACTIONS(509),
    [sym_cpx_opcode] = ACTIONS(509),
    [sym_cpy_opcode] = ACTIONS(509),
    [sym_dec_opcode] = ACTIONS(509),
    [sym_dex_opcode] = ACTIONS(509),
    [sym_dey_opcode] = ACTIONS(509),
    [sym_eor_opcode] = ACTIONS(509),
    [sym_inc_opcode] = ACTIONS(509),
    [sym_inx_opcode] = ACTIONS(509),
    [sym_iny_opcode] = ACTIONS(509),
    [sym_jmp_opcode] = ACTIONS(509),
    [sym_jsr_opcode] = ACTIONS(509),
    [sym_lda_opcode] = ACTIONS(509),
    [sym_ldx_opcode] = ACTIONS(509),
    [sym_ldy_opcode] = ACTIONS(509),
    [sym_lsr_opcode] = ACTIONS(509),
    [sym_nop_opcode] = ACTIONS(509),
    [sym_ora_opcode] = ACTIONS(509),
    [sym_pha_opcode] = ACTIONS(509),
    [sym_php_opcode] = ACTIONS(509),
    [sym_pla_opcode] = ACTIONS(509),
    [sym_plp_opcode] = ACTIONS(509),
    [sym_rol_opcode] = ACTIONS(509),
    [sym_ror_opcode] = ACTIONS(509),
    [sym_rti_opcode] = ACTIONS(509),
    [sym_rts_opcode] = ACTIONS(509),
    [sym_sbc_opcode] = ACTIONS(509),
    [sym_sec_opcode] = ACTIONS(509),
    [sym_sed_opcode] = ACTIONS(509),
    [sym_sei_opcode] = ACTIONS(509),
    [sym_sta_opcode] = ACTIONS(509),
    [sym_stx_opcode] = ACTIONS(509),
    [sym_sty_opcode] = ACTIONS(509),
    [sym_tax_opcode] = ACTIONS(509),
    [sym_tay_opcode] = ACTIONS(509),
    [sym_tsx_opcode] = ACTIONS(509),
    [sym_txa_opcode] = ACTIONS(509),
    [sym_tcs_opcode] = ACTIONS(509),
    [sym_tya_opcode] = ACTIONS(509),
    [sym_a16_ctrl_cmd] = ACTIONS(507),
    [sym_a8_ctrl_cmd] = ACTIONS(507),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(507),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(507),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(507),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(507),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(507),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(507),
    [sym_bss_ctrl_cmd] = ACTIONS(507),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(507),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(507),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(507),
    [sym_code_ctrl_cmd] = ACTIONS(507),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(507),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(507),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(511),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(511),
    [sym_adc_opcode] = ACTIONS(513),
    [sym_and_opcode] = ACTIONS(513),
    [sym_asl_opcode] = ACTIONS(513),
    [sym_bcc_opcode] = ACTIONS(513),
    [sym_bcs_opcode] = ACTIONS(513),
    [sym_beq_opcode] = ACTIONS(513),
    [sym_bit_opcode] = ACTIONS(513),
    [sym_bmi_opcode] = ACTIONS(513),
    [sym_bne_opcode] = ACTIONS(513),
    [sym_bpl_opcode] = ACTIONS(513),
    [sym_brk_opcode] = ACTIONS(513),
    [sym_bvc_opcode] = ACTIONS(513),
    [sym_bvs_opcode] = ACTIONS(513),
    [sym_clc_opcode] = ACTIONS(513),
    [sym_cld_opcode] = ACTIONS(513),
    [sym_cli_opcode] = ACTIONS(513),
    [sym_clv_opcode] = ACTIONS(513),
    [sym_cmp_opcode] = ACTIONS(513),
    [sym_cpx_opcode] = ACTIONS(513),
    [sym_cpy_opcode] = ACTIONS(513),
    [sym_dec_opcode] = ACTIONS(513),
    [sym_dex_opcode] = ACTIONS(513),
    [sym_dey_opcode] = ACTIONS(513),
    [sym_eor_opcode] = ACTIONS(513),
    [sym_inc_opcode] = ACTIONS(513),
    [sym_inx_opcode] = ACTIONS(513),
    [sym_iny_opcode] = ACTIONS(513),
    [sym_jmp_opcode] = ACTIONS(513),
    [sym_jsr_opcode] = ACTIONS(513),
    [sym_lda_opcode] = ACTIONS(513),
    [sym_ldx_opcode] = ACTIONS(513),
    [sym_ldy_opcode] = ACTIONS(513),
    [sym_lsr_opcode] = ACTIONS(513),
    [sym_nop_opcode] = ACTIONS(513),
    [sym_ora_opcode] = ACTIONS(513),
    [sym_pha_opcode] = ACTIONS(513),
    [sym_php_opcode] = ACTIONS(513),
    [sym_pla_opcode] = ACTIONS(513),
    [sym_plp_opcode] = ACTIONS(513),
    [sym_rol_opcode] = ACTIONS(513),
    [sym_ror_opcode] = ACTIONS(513),
    [sym_rti_opcode] = ACTIONS(513),
    [sym_rts_opcode] = ACTIONS(513),
    [sym_sbc_opcode] = ACTIONS(513),
    [sym_sec_opcode] = ACTIONS(513),
    [sym_sed_opcode] = ACTIONS(513),
    [sym_sei_opcode] = ACTIONS(513),
    [sym_sta_opcode] = ACTIONS(513),
    [sym_stx_opcode] = ACTIONS(513),
    [sym_sty_opcode] = ACTIONS(513),
    [sym_tax_opcode] = ACTIONS(513),
    [sym_tay_opcode] = ACTIONS(513),
    [sym_tsx_opcode] = ACTIONS(513),
    [sym_txa_opcode] = ACTIONS(513),
    [sym_tcs_opcode] = ACTIONS(513),
    [sym_tya_opcode] = ACTIONS(513),
    [sym_a16_ctrl_cmd] = ACTIONS(511),
    [sym_a8_ctrl_cmd] = ACTIONS(511),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(511),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(511),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(511),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(511),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(511),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(511),
    [sym_bss_ctrl_cmd] = ACTIONS(511),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(511),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(511),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(511),
    [sym_code_ctrl_cmd] = ACTIONS(511),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(511),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(511),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(515),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(515),
    [sym_adc_opcode] = ACTIONS(517),
    [sym_and_opcode] = ACTIONS(517),
    [sym_asl_opcode] = ACTIONS(517),
    [sym_bcc_opcode] = ACTIONS(517),
    [sym_bcs_opcode] = ACTIONS(517),
    [sym_beq_opcode] = ACTIONS(517),
    [sym_bit_opcode] = ACTIONS(517),
    [sym_bmi_opcode] = ACTIONS(517),
    [sym_bne_opcode] = ACTIONS(517),
    [sym_bpl_opcode] = ACTIONS(517),
    [sym_brk_opcode] = ACTIONS(517),
    [sym_bvc_opcode] = ACTIONS(517),
    [sym_bvs_opcode] = ACTIONS(517),
    [sym_clc_opcode] = ACTIONS(517),
    [sym_cld_opcode] = ACTIONS(517),
    [sym_cli_opcode] = ACTIONS(517),
    [sym_clv_opcode] = ACTIONS(517),
    [sym_cmp_opcode] = ACTIONS(517),
    [sym_cpx_opcode] = ACTIONS(517),
    [sym_cpy_opcode] = ACTIONS(517),
    [sym_dec_opcode] = ACTIONS(517),
    [sym_dex_opcode] = ACTIONS(517),
    [sym_dey_opcode] = ACTIONS(517),
    [sym_eor_opcode] = ACTIONS(517),
    [sym_inc_opcode] = ACTIONS(517),
    [sym_inx_opcode] = ACTIONS(517),
    [sym_iny_opcode] = ACTIONS(517),
    [sym_jmp_opcode] = ACTIONS(517),
    [sym_jsr_opcode] = ACTIONS(517),
    [sym_lda_opcode] = ACTIONS(517),
    [sym_ldx_opcode] = ACTIONS(517),
    [sym_ldy_opcode] = ACTIONS(517),
    [sym_lsr_opcode] = ACTIONS(517),
    [sym_nop_opcode] = ACTIONS(517),
    [sym_ora_opcode] = ACTIONS(517),
    [sym_pha_opcode] = ACTIONS(517),
    [sym_php_opcode] = ACTIONS(517),
    [sym_pla_opcode] = ACTIONS(517),
    [sym_plp_opcode] = ACTIONS(517),
    [sym_rol_opcode] = ACTIONS(517),
    [sym_ror_opcode] = ACTIONS(517),
    [sym_rti_opcode] = ACTIONS(517),
    [sym_rts_opcode] = ACTIONS(517),
    [sym_sbc_opcode] = ACTIONS(517),
    [sym_sec_opcode] = ACTIONS(517),
    [sym_sed_opcode] = ACTIONS(517),
    [sym_sei_opcode] = ACTIONS(517),
    [sym_sta_opcode] = ACTIONS(517),
    [sym_stx_opcode] = ACTIONS(517),
    [sym_sty_opcode] = ACTIONS(517),
    [sym_tax_opcode] = ACTIONS(517),
    [sym_tay_opcode] = ACTIONS(517),
    [sym_tsx_opcode] = ACTIONS(517),
    [sym_txa_opcode] = ACTIONS(517),
    [sym_tcs_opcode] = ACTIONS(517),
    [sym_tya_opcode] = ACTIONS(517),
    [sym_a16_ctrl_cmd] = ACTIONS(515),
    [sym_a8_ctrl_cmd] = ACTIONS(515),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(515),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(515),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(515),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(515),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(515),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(515),
    [sym_bss_ctrl_cmd] = ACTIONS(515),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(515),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(515),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(515),
    [sym_code_ctrl_cmd] = ACTIONS(515),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(515),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(515),
  },
  [88] = {
    [ts_builtin_sym_end] = ACTIONS(519),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(519),
    [sym_adc_opcode] = ACTIONS(521),
    [sym_and_opcode] = ACTIONS(521),
    [sym_asl_opcode] = ACTIONS(521),
    [sym_bcc_opcode] = ACTIONS(521),
    [sym_bcs_opcode] = ACTIONS(521),
    [sym_beq_opcode] = ACTIONS(521),
    [sym_bit_opcode] = ACTIONS(521),
    [sym_bmi_opcode] = ACTIONS(521),
    [sym_bne_opcode] = ACTIONS(521),
    [sym_bpl_opcode] = ACTIONS(521),
    [sym_brk_opcode] = ACTIONS(521),
    [sym_bvc_opcode] = ACTIONS(521),
    [sym_bvs_opcode] = ACTIONS(521),
    [sym_clc_opcode] = ACTIONS(521),
    [sym_cld_opcode] = ACTIONS(521),
    [sym_cli_opcode] = ACTIONS(521),
    [sym_clv_opcode] = ACTIONS(521),
    [sym_cmp_opcode] = ACTIONS(521),
    [sym_cpx_opcode] = ACTIONS(521),
    [sym_cpy_opcode] = ACTIONS(521),
    [sym_dec_opcode] = ACTIONS(521),
    [sym_dex_opcode] = ACTIONS(521),
    [sym_dey_opcode] = ACTIONS(521),
    [sym_eor_opcode] = ACTIONS(521),
    [sym_inc_opcode] = ACTIONS(521),
    [sym_inx_opcode] = ACTIONS(521),
    [sym_iny_opcode] = ACTIONS(521),
    [sym_jmp_opcode] = ACTIONS(521),
    [sym_jsr_opcode] = ACTIONS(521),
    [sym_lda_opcode] = ACTIONS(521),
    [sym_ldx_opcode] = ACTIONS(521),
    [sym_ldy_opcode] = ACTIONS(521),
    [sym_lsr_opcode] = ACTIONS(521),
    [sym_nop_opcode] = ACTIONS(521),
    [sym_ora_opcode] = ACTIONS(521),
    [sym_pha_opcode] = ACTIONS(521),
    [sym_php_opcode] = ACTIONS(521),
    [sym_pla_opcode] = ACTIONS(521),
    [sym_plp_opcode] = ACTIONS(521),
    [sym_rol_opcode] = ACTIONS(521),
    [sym_ror_opcode] = ACTIONS(521),
    [sym_rti_opcode] = ACTIONS(521),
    [sym_rts_opcode] = ACTIONS(521),
    [sym_sbc_opcode] = ACTIONS(521),
    [sym_sec_opcode] = ACTIONS(521),
    [sym_sed_opcode] = ACTIONS(521),
    [sym_sei_opcode] = ACTIONS(521),
    [sym_sta_opcode] = ACTIONS(521),
    [sym_stx_opcode] = ACTIONS(521),
    [sym_sty_opcode] = ACTIONS(521),
    [sym_tax_opcode] = ACTIONS(521),
    [sym_tay_opcode] = ACTIONS(521),
    [sym_tsx_opcode] = ACTIONS(521),
    [sym_txa_opcode] = ACTIONS(521),
    [sym_tcs_opcode] = ACTIONS(521),
    [sym_tya_opcode] = ACTIONS(521),
    [sym_a16_ctrl_cmd] = ACTIONS(519),
    [sym_a8_ctrl_cmd] = ACTIONS(519),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(519),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(519),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(519),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(519),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(519),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(519),
    [sym_bss_ctrl_cmd] = ACTIONS(519),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(519),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(519),
    [aux_sym_charmap_ctrl_cmd_token1] = ACTIONS(519),
    [sym_code_ctrl_cmd] = ACTIONS(519),
    [aux_sym_condes_ctrl_cmd_token1] = ACTIONS(519),
    [aux_sym_constructor_ctrl_cmd_token1] = ACTIONS(519),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(543), 1,
      anon_sym_PLUS,
    ACTIONS(545), 1,
      anon_sym_DASH,
    STATE(42), 1,
      sym_expression,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(547), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(549), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(551), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(555), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    ACTIONS(525), 3,
      sym_constructor_keyword,
      sym_destructor_keyword,
      sym_interruptor_keyword,
    STATE(25), 29,
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
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(543), 1,
      anon_sym_PLUS,
    ACTIONS(545), 1,
      anon_sym_DASH,
    STATE(23), 1,
      sym_expression,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(547), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(549), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(551), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(555), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(25), 29,
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
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(543), 1,
      anon_sym_PLUS,
    ACTIONS(545), 1,
      anon_sym_DASH,
    STATE(35), 1,
      sym_expression,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(547), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(549), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(551), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(555), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(25), 29,
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
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(543), 1,
      anon_sym_PLUS,
    ACTIONS(545), 1,
      anon_sym_DASH,
    STATE(126), 1,
      sym_expression,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(547), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(549), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(551), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(555), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(25), 29,
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
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(543), 1,
      anon_sym_PLUS,
    ACTIONS(545), 1,
      anon_sym_DASH,
    STATE(32), 1,
      sym_expression,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(547), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(549), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(551), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(555), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(25), 29,
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
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(543), 1,
      anon_sym_PLUS,
    ACTIONS(545), 1,
      anon_sym_DASH,
    STATE(31), 1,
      sym_expression,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(547), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(549), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(551), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(555), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(25), 29,
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
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(543), 1,
      anon_sym_PLUS,
    ACTIONS(545), 1,
      anon_sym_DASH,
    STATE(127), 1,
      sym_expression,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(547), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(549), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(551), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(555), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(25), 29,
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
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(543), 1,
      anon_sym_PLUS,
    ACTIONS(545), 1,
      anon_sym_DASH,
    STATE(125), 1,
      sym_expression,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(547), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(549), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(551), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(555), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(25), 29,
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
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(543), 1,
      anon_sym_PLUS,
    ACTIONS(545), 1,
      anon_sym_DASH,
    STATE(40), 1,
      sym_expression,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(547), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(549), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(551), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(555), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(25), 29,
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
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(543), 1,
      anon_sym_PLUS,
    ACTIONS(545), 1,
      anon_sym_DASH,
    STATE(33), 1,
      sym_expression,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(547), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(549), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(551), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(555), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(25), 29,
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
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(543), 1,
      anon_sym_PLUS,
    ACTIONS(545), 1,
      anon_sym_DASH,
    STATE(47), 1,
      sym_expression,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(547), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(549), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(551), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(555), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(25), 29,
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
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(543), 1,
      anon_sym_PLUS,
    ACTIONS(545), 1,
      anon_sym_DASH,
    STATE(16), 1,
      sym_expression,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(547), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(549), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(551), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(555), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(25), 29,
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
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(543), 1,
      anon_sym_PLUS,
    ACTIONS(545), 1,
      anon_sym_DASH,
    STATE(45), 1,
      sym_expression,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(547), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(549), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(551), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(555), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(25), 29,
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
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(543), 1,
      anon_sym_PLUS,
    ACTIONS(545), 1,
      anon_sym_DASH,
    STATE(17), 1,
      sym_expression,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(547), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(549), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(551), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(555), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(25), 29,
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
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(543), 1,
      anon_sym_PLUS,
    ACTIONS(545), 1,
      anon_sym_DASH,
    STATE(27), 1,
      sym_expression,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(547), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(549), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(551), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(555), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(25), 29,
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
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(543), 1,
      anon_sym_PLUS,
    ACTIONS(545), 1,
      anon_sym_DASH,
    STATE(22), 1,
      sym_expression,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(547), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(549), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(551), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(555), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(25), 29,
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
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(543), 1,
      anon_sym_PLUS,
    ACTIONS(545), 1,
      anon_sym_DASH,
    STATE(21), 1,
      sym_expression,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(547), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(549), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(551), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(555), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(25), 29,
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
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(543), 1,
      anon_sym_PLUS,
    ACTIONS(545), 1,
      anon_sym_DASH,
    STATE(20), 1,
      sym_expression,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(547), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(549), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(551), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(555), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(25), 29,
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
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(543), 1,
      anon_sym_PLUS,
    ACTIONS(545), 1,
      anon_sym_DASH,
    STATE(19), 1,
      sym_expression,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(547), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(549), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(551), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(555), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(25), 29,
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
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(543), 1,
      anon_sym_PLUS,
    ACTIONS(545), 1,
      anon_sym_DASH,
    STATE(18), 1,
      sym_expression,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(547), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(549), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(551), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(555), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(25), 29,
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
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(543), 1,
      anon_sym_PLUS,
    ACTIONS(545), 1,
      anon_sym_DASH,
    STATE(15), 1,
      sym_expression,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(547), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(549), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(551), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(555), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(25), 29,
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
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(543), 1,
      anon_sym_PLUS,
    ACTIONS(545), 1,
      anon_sym_DASH,
    STATE(14), 1,
      sym_expression,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(547), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(549), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(551), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(555), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(25), 29,
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
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(543), 1,
      anon_sym_PLUS,
    ACTIONS(545), 1,
      anon_sym_DASH,
    STATE(13), 1,
      sym_expression,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(547), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(549), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(551), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(555), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(25), 29,
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
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(543), 1,
      anon_sym_PLUS,
    ACTIONS(545), 1,
      anon_sym_DASH,
    STATE(12), 1,
      sym_expression,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(547), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(549), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(551), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(555), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(25), 29,
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
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(543), 1,
      anon_sym_PLUS,
    ACTIONS(545), 1,
      anon_sym_DASH,
    STATE(11), 1,
      sym_expression,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(547), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(549), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(551), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(555), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(25), 29,
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
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(543), 1,
      anon_sym_PLUS,
    ACTIONS(545), 1,
      anon_sym_DASH,
    STATE(10), 1,
      sym_expression,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(547), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(549), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(551), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(555), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(25), 29,
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
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(543), 1,
      anon_sym_PLUS,
    ACTIONS(545), 1,
      anon_sym_DASH,
    STATE(9), 1,
      sym_expression,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(547), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(549), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(551), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(555), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(25), 29,
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
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(543), 1,
      anon_sym_PLUS,
    ACTIONS(545), 1,
      anon_sym_DASH,
    STATE(8), 1,
      sym_expression,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(547), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(549), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(551), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(555), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(25), 29,
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
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(543), 1,
      anon_sym_PLUS,
    ACTIONS(545), 1,
      anon_sym_DASH,
    STATE(7), 1,
      sym_expression,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(547), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(549), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(551), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(555), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(25), 29,
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
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(543), 1,
      anon_sym_PLUS,
    ACTIONS(545), 1,
      anon_sym_DASH,
    STATE(5), 1,
      sym_expression,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(547), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(549), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(551), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(555), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(25), 29,
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
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(543), 1,
      anon_sym_PLUS,
    ACTIONS(545), 1,
      anon_sym_DASH,
    STATE(4), 1,
      sym_expression,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(547), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(549), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(551), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(555), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(25), 29,
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
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(543), 1,
      anon_sym_PLUS,
    ACTIONS(545), 1,
      anon_sym_DASH,
    STATE(24), 1,
      sym_expression,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(547), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(549), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(551), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(555), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(25), 29,
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
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(543), 1,
      anon_sym_PLUS,
    ACTIONS(545), 1,
      anon_sym_DASH,
    STATE(26), 1,
      sym_expression,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(547), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(549), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(551), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(555), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(25), 29,
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
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(543), 1,
      anon_sym_PLUS,
    ACTIONS(545), 1,
      anon_sym_DASH,
    STATE(43), 1,
      sym_expression,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(547), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(549), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(551), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(555), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(25), 29,
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
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(543), 1,
      anon_sym_PLUS,
    ACTIONS(545), 1,
      anon_sym_DASH,
    STATE(46), 1,
      sym_expression,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(547), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(549), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(551), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(555), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(25), 29,
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
  [3505] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(543), 1,
      anon_sym_PLUS,
    ACTIONS(545), 1,
      anon_sym_DASH,
    STATE(28), 1,
      sym_expression,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(547), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(549), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(551), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(555), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(25), 29,
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
  [3605] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_LT,
    ACTIONS(79), 1,
      anon_sym_GT,
    ACTIONS(83), 1,
      anon_sym_STAR,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      anon_sym_DOTMOD,
    ACTIONS(89), 1,
      anon_sym_DOTBITAND,
    ACTIONS(91), 1,
      anon_sym_AMP,
    ACTIONS(97), 1,
      anon_sym_DOTBITOR,
    ACTIONS(99), 1,
      anon_sym_PIPE,
    ACTIONS(101), 1,
      anon_sym_EQ,
    ACTIONS(103), 1,
      anon_sym_LT_GT,
    ACTIONS(105), 1,
      anon_sym_LT_EQ,
    ACTIONS(107), 1,
      anon_sym_GT_EQ,
    ACTIONS(201), 1,
      anon_sym_DOTXOR,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
    ACTIONS(81), 2,
      anon_sym_CARET,
      anon_sym_DOTBITXOR,
    ACTIONS(93), 2,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
    ACTIONS(95), 2,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
    ACTIONS(199), 2,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
    ACTIONS(207), 2,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [3680] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_LT,
    ACTIONS(79), 1,
      anon_sym_GT,
    ACTIONS(83), 1,
      anon_sym_STAR,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      anon_sym_DOTMOD,
    ACTIONS(89), 1,
      anon_sym_DOTBITAND,
    ACTIONS(91), 1,
      anon_sym_AMP,
    ACTIONS(97), 1,
      anon_sym_DOTBITOR,
    ACTIONS(99), 1,
      anon_sym_PIPE,
    ACTIONS(101), 1,
      anon_sym_EQ,
    ACTIONS(103), 1,
      anon_sym_LT_GT,
    ACTIONS(105), 1,
      anon_sym_LT_EQ,
    ACTIONS(107), 1,
      anon_sym_GT_EQ,
    ACTIONS(201), 1,
      anon_sym_DOTXOR,
    ACTIONS(559), 1,
      anon_sym_COMMA,
    ACTIONS(81), 2,
      anon_sym_CARET,
      anon_sym_DOTBITXOR,
    ACTIONS(93), 2,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
    ACTIONS(95), 2,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
    ACTIONS(199), 2,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
    ACTIONS(207), 2,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [3755] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_LT,
    ACTIONS(79), 1,
      anon_sym_GT,
    ACTIONS(83), 1,
      anon_sym_STAR,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      anon_sym_DOTMOD,
    ACTIONS(89), 1,
      anon_sym_DOTBITAND,
    ACTIONS(91), 1,
      anon_sym_AMP,
    ACTIONS(97), 1,
      anon_sym_DOTBITOR,
    ACTIONS(99), 1,
      anon_sym_PIPE,
    ACTIONS(101), 1,
      anon_sym_EQ,
    ACTIONS(103), 1,
      anon_sym_LT_GT,
    ACTIONS(105), 1,
      anon_sym_LT_EQ,
    ACTIONS(107), 1,
      anon_sym_GT_EQ,
    ACTIONS(201), 1,
      anon_sym_DOTXOR,
    ACTIONS(561), 1,
      anon_sym_COMMA,
    ACTIONS(81), 2,
      anon_sym_CARET,
      anon_sym_DOTBITXOR,
    ACTIONS(93), 2,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
    ACTIONS(95), 2,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
    ACTIONS(199), 2,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
    ACTIONS(207), 2,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [3830] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(563), 1,
      anon_sym_LPAREN,
    ACTIONS(565), 1,
      sym_imm_prefix,
    STATE(60), 1,
      sym_operand_16,
    STATE(61), 1,
      sym_operand_8,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
  [3875] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(567), 1,
      sym_acc_register,
    STATE(59), 1,
      sym_operand_16,
    STATE(61), 1,
      sym_operand_8,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
  [3917] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(565), 1,
      sym_imm_prefix,
    STATE(80), 1,
      sym_operand_16,
    STATE(81), 1,
      sym_operand_8,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
  [3959] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(565), 1,
      sym_imm_prefix,
    STATE(57), 1,
      sym_operand_16,
    STATE(62), 1,
      sym_operand_8,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
  [4001] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(565), 1,
      sym_imm_prefix,
    STATE(59), 1,
      sym_operand_16,
    STATE(61), 1,
      sym_operand_8,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
  [4043] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(563), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym_operand_16,
    STATE(61), 1,
      sym_operand_8,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
  [4085] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    STATE(80), 1,
      sym_operand_16,
    STATE(81), 1,
      sym_operand_8,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
  [4124] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    STATE(59), 1,
      sym_operand_16,
    STATE(61), 1,
      sym_operand_8,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
  [4163] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(86), 2,
      sym_operand_8,
      sym_operand_16,
  [4200] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(569), 1,
      sym_symbol,
    STATE(62), 1,
      sym_operand_8,
    STATE(80), 1,
      sym_operand_16,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
  [4239] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    ACTIONS(569), 1,
      sym_symbol,
    STATE(61), 1,
      sym_operand_8,
    STATE(80), 1,
      sym_operand_16,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
  [4278] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(531), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      sym_dec_8,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      anon_sym_h,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(541), 1,
      sym_dec_16,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(58), 2,
      sym_operand_8,
      sym_operand_16,
  [4315] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(571), 1,
      anon_sym_PERCENT,
    ACTIONS(573), 1,
      anon_sym_DOLLAR,
    ACTIONS(575), 1,
      anon_sym_h,
    STATE(82), 1,
      sym_operand_8,
    ACTIONS(533), 2,
      sym_symbol,
      sym_dec_8,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
  [4342] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      aux_sym_hex_8_token2,
    ACTIONS(571), 1,
      anon_sym_PERCENT,
    ACTIONS(573), 1,
      anon_sym_DOLLAR,
    ACTIONS(575), 1,
      anon_sym_h,
    STATE(155), 1,
      sym_operand_8,
    ACTIONS(533), 2,
      sym_symbol,
      sym_dec_8,
    STATE(34), 2,
      sym_bin_8,
      sym_hex_8,
  [4369] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      sym_symbol,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_PERCENT,
    ACTIONS(581), 1,
      anon_sym_DOLLAR,
    ACTIONS(583), 1,
      anon_sym_h,
    ACTIONS(585), 1,
      sym_dec_16,
    STATE(80), 1,
      sym_operand_16,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
  [4398] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      sym_symbol,
    ACTIONS(579), 1,
      anon_sym_PERCENT,
    ACTIONS(581), 1,
      anon_sym_DOLLAR,
    ACTIONS(583), 1,
      anon_sym_h,
    ACTIONS(585), 1,
      sym_dec_16,
    STATE(63), 1,
      sym_operand_16,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
  [4424] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      sym_symbol,
    ACTIONS(579), 1,
      anon_sym_PERCENT,
    ACTIONS(581), 1,
      anon_sym_DOLLAR,
    ACTIONS(583), 1,
      anon_sym_h,
    ACTIONS(585), 1,
      sym_dec_16,
    STATE(80), 1,
      sym_operand_16,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
  [4450] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      sym_symbol,
    ACTIONS(579), 1,
      anon_sym_PERCENT,
    ACTIONS(581), 1,
      anon_sym_DOLLAR,
    ACTIONS(583), 1,
      anon_sym_h,
    ACTIONS(585), 1,
      sym_dec_16,
    STATE(165), 1,
      sym_operand_16,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
  [4476] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      sym_symbol,
    ACTIONS(579), 1,
      anon_sym_PERCENT,
    ACTIONS(581), 1,
      anon_sym_DOLLAR,
    ACTIONS(583), 1,
      anon_sym_h,
    ACTIONS(585), 1,
      sym_dec_16,
    STATE(49), 1,
      sym_operand_16,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
  [4502] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      sym_symbol,
    ACTIONS(579), 1,
      anon_sym_PERCENT,
    ACTIONS(581), 1,
      anon_sym_DOLLAR,
    ACTIONS(583), 1,
      anon_sym_h,
    ACTIONS(585), 1,
      sym_dec_16,
    STATE(83), 1,
      sym_operand_16,
    STATE(37), 2,
      sym_bin_16,
      sym_hex_16,
  [4528] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_PLUS,
    ACTIONS(589), 1,
      anon_sym_DASH,
    STATE(77), 2,
      sym_plus_symbol,
      sym_sub_symbol,
  [4542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 4,
      sym_warning_keyword,
      sym_error_keyword,
      sym_ldwarning_keyword,
      sym_lderror_keyword,
  [4552] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_PLUS,
    ACTIONS(589), 1,
      anon_sym_DASH,
    STATE(70), 2,
      sym_plus_symbol,
      sym_sub_symbol,
  [4566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(65), 1,
      sym_string,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [4577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(50), 1,
      sym_string,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [4588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(88), 1,
      sym_string,
    ACTIONS(523), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [4599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      sym_x_register,
    ACTIONS(595), 1,
      sym_y_register,
  [4609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    ACTIONS(599), 1,
      anon_sym_RPAREN,
  [4619] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      aux_sym_bin_8_token1,
    ACTIONS(603), 1,
      aux_sym_bin_16_token1,
  [4629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      aux_sym_hex_8_token1,
    ACTIONS(607), 1,
      aux_sym_hex_16_token1,
  [4639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      aux_sym_bin_16_token1,
  [4646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_COMMA,
  [4653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_COMMA,
  [4660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      sym_x_register,
  [4667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      sym_symbol,
  [4674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      sym_y_register,
  [4681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      sym_y_register,
  [4688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_RPAREN,
  [4695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      sym_x_register,
  [4702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
  [4709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      sym_y_register,
  [4716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      sym_x_register,
  [4723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      aux_sym_hex_8_token1,
  [4730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      aux_sym_bin_8_token1,
  [4737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_COMMA,
  [4744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      aux_sym_hex_16_token1,
  [4751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      ts_builtin_sym_end,
  [4758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      sym_symbol,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(89)] = 0,
  [SMALL_STATE(90)] = 105,
  [SMALL_STATE(91)] = 205,
  [SMALL_STATE(92)] = 305,
  [SMALL_STATE(93)] = 405,
  [SMALL_STATE(94)] = 505,
  [SMALL_STATE(95)] = 605,
  [SMALL_STATE(96)] = 705,
  [SMALL_STATE(97)] = 805,
  [SMALL_STATE(98)] = 905,
  [SMALL_STATE(99)] = 1005,
  [SMALL_STATE(100)] = 1105,
  [SMALL_STATE(101)] = 1205,
  [SMALL_STATE(102)] = 1305,
  [SMALL_STATE(103)] = 1405,
  [SMALL_STATE(104)] = 1505,
  [SMALL_STATE(105)] = 1605,
  [SMALL_STATE(106)] = 1705,
  [SMALL_STATE(107)] = 1805,
  [SMALL_STATE(108)] = 1905,
  [SMALL_STATE(109)] = 2005,
  [SMALL_STATE(110)] = 2105,
  [SMALL_STATE(111)] = 2205,
  [SMALL_STATE(112)] = 2305,
  [SMALL_STATE(113)] = 2405,
  [SMALL_STATE(114)] = 2505,
  [SMALL_STATE(115)] = 2605,
  [SMALL_STATE(116)] = 2705,
  [SMALL_STATE(117)] = 2805,
  [SMALL_STATE(118)] = 2905,
  [SMALL_STATE(119)] = 3005,
  [SMALL_STATE(120)] = 3105,
  [SMALL_STATE(121)] = 3205,
  [SMALL_STATE(122)] = 3305,
  [SMALL_STATE(123)] = 3405,
  [SMALL_STATE(124)] = 3505,
  [SMALL_STATE(125)] = 3605,
  [SMALL_STATE(126)] = 3680,
  [SMALL_STATE(127)] = 3755,
  [SMALL_STATE(128)] = 3830,
  [SMALL_STATE(129)] = 3875,
  [SMALL_STATE(130)] = 3917,
  [SMALL_STATE(131)] = 3959,
  [SMALL_STATE(132)] = 4001,
  [SMALL_STATE(133)] = 4043,
  [SMALL_STATE(134)] = 4085,
  [SMALL_STATE(135)] = 4124,
  [SMALL_STATE(136)] = 4163,
  [SMALL_STATE(137)] = 4200,
  [SMALL_STATE(138)] = 4239,
  [SMALL_STATE(139)] = 4278,
  [SMALL_STATE(140)] = 4315,
  [SMALL_STATE(141)] = 4342,
  [SMALL_STATE(142)] = 4369,
  [SMALL_STATE(143)] = 4398,
  [SMALL_STATE(144)] = 4424,
  [SMALL_STATE(145)] = 4450,
  [SMALL_STATE(146)] = 4476,
  [SMALL_STATE(147)] = 4502,
  [SMALL_STATE(148)] = 4528,
  [SMALL_STATE(149)] = 4542,
  [SMALL_STATE(150)] = 4552,
  [SMALL_STATE(151)] = 4566,
  [SMALL_STATE(152)] = 4577,
  [SMALL_STATE(153)] = 4588,
  [SMALL_STATE(154)] = 4599,
  [SMALL_STATE(155)] = 4609,
  [SMALL_STATE(156)] = 4619,
  [SMALL_STATE(157)] = 4629,
  [SMALL_STATE(158)] = 4639,
  [SMALL_STATE(159)] = 4646,
  [SMALL_STATE(160)] = 4653,
  [SMALL_STATE(161)] = 4660,
  [SMALL_STATE(162)] = 4667,
  [SMALL_STATE(163)] = 4674,
  [SMALL_STATE(164)] = 4681,
  [SMALL_STATE(165)] = 4688,
  [SMALL_STATE(166)] = 4695,
  [SMALL_STATE(167)] = 4702,
  [SMALL_STATE(168)] = 4709,
  [SMALL_STATE(169)] = 4716,
  [SMALL_STATE(170)] = 4723,
  [SMALL_STATE(171)] = 4730,
  [SMALL_STATE(172)] = 4737,
  [SMALL_STATE(173)] = 4744,
  [SMALL_STATE(174)] = 4751,
  [SMALL_STATE(175)] = 4758,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca65, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_8, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bin_8, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_and_exp, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_and_exp, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gte_cmp, 3, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gte_cmp, 3, 0, 0),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_operand_8, 1, 0, 0), REDUCE(sym_operand_16, 1, 0, 0),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_operand_8, 1, 0, 0), REDUCE(sym_operand_16, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lte_cmp, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lte_cmp, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_neq_cmp, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_neq_cmp, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eq_cmp, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eq_cmp, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bit_or_exp, 3, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bit_or_exp, 3, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift_r_exp, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shift_r_exp, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift_l_exp, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shift_l_exp, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bit_and_exp, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bit_and_exp, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_exp, 3, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod_exp, 3, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div_exp, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_div_exp, 3, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_not_exp, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_not_exp, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_lobyte_exp, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_lobyte_exp, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mult_exp, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mult_exp, 3, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bit_xor_exp, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bit_xor_exp, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gt_cmp, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gt_cmp, 3, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lt_cmp, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lt_cmp, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_exp, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_exp, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_exp, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_exp, 3, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_xor_exp, 3, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_xor_exp, 3, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_or_exp, 3, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_or_exp, 3, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_not_exp, 2, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_not_exp, 2, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_hibyte_exp, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_hibyte_exp, 2, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_16, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bin_16, 2, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_ctrl_cmd, 2, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_ctrl_cmd, 2, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bankbytes_ctrl_cmd, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bankbytes_ctrl_cmd, 2, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_neg_exp, 2, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_neg_exp, 2, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_8, 1, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_8, 1, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_bankbyte_exp, 2, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_bankbyte_exp, 2, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_8, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_8, 1, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_16, 1, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_16, 1, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_8, 2, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_8, 2, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_16, 2, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_16, 2, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_pos_exp, 2, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_pos_exp, 2, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condes_ctrl_cmd, 4, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condes_ctrl_cmd, 4, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bankbytes_ctrl_cmd_repeat1, 2, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bankbytes_ctrl_cmd_repeat1, 2, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca65, 1, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_ctrl_cmd, 4, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_ctrl_cmd, 4, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charmap_ctrl_cmd, 4, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charmap_ctrl_cmd, 4, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condes_ctrl_cmd, 6, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condes_ctrl_cmd, 6, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_addr_ctrl_cmd_repeat1, 2, 0, 0),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addr_ctrl_cmd_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_addr_ctrl_cmd_repeat1, 2, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr_ctrl_cmd, 2, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addr_ctrl_cmd, 2, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asciiz_ctrl_cmd, 2, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asciiz_ctrl_cmd, 2, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_ctrl_cmd, 3, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_ctrl_cmd, 3, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bankbytes_ctrl_cmd, 3, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bankbytes_ctrl_cmd, 3, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asciiz_ctrl_cmd, 3, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asciiz_ctrl_cmd, 3, 0, 0),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bankbytes_ctrl_cmd_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_asciiz_ctrl_cmd_repeat1, 2, 0, 0),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_asciiz_ctrl_cmd_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_asciiz_ctrl_cmd_repeat1, 2, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr_ctrl_cmd, 3, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addr_ctrl_cmd, 3, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abs_addr_inst, 2, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abs_addr_inst, 2, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_align_ctrl_cmd, 2, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_align_ctrl_cmd, 2, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zp_addr_inst, 2, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zp_addr_inst, 2, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_ctrl_cmd, 2, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_ctrl_cmd, 2, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ind_y_addr_inst, 6, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ind_y_addr_inst, 6, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_impl_addr_inst, 1, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_impl_addr_inst, 1, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_ctrl_cmd, 2, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_ctrl_cmd, 2, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zp_x_addr_inst, 4, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zp_x_addr_inst, 4, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ind_x_addr_inst, 6, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ind_x_addr_inst, 6, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_cmd, 1, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_cmd, 1, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ind_addr_inst, 4, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ind_addr_inst, 4, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plus_symbol, 1, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plus_symbol, 1, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_symbol, 1, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_symbol, 1, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autoimport_ctrl_cmd, 2, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_autoimport_ctrl_cmd, 2, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abs_y_addr_inst, 4, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abs_y_addr_inst, 4, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abs_x_addr_inst, 4, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abs_x_addr_inst, 4, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imm_addr_inst, 3, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imm_addr_inst, 3, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rel_addr_inst, 2, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rel_addr_inst, 2, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acc_addr_inst, 2, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_acc_addr_inst, 2, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zp_y_addr_inst, 4, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zp_y_addr_inst, 4, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_align_ctrl_cmd, 4, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_align_ctrl_cmd, 4, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 1, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inst, 1, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_ctrl_cmd, 6, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_ctrl_cmd, 6, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [637] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
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
