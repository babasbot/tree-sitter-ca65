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
#define STATE_COUNT 156
#define LARGE_STATE_COUNT 80
#define SYMBOL_COUNT 186
#define ALIAS_COUNT 0
#define TOKEN_COUNT 124
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  aux_sym_string_token1 = 2,
  aux_sym_string_token2 = 3,
  sym_acc_register = 4,
  sym_x_register = 5,
  sym_y_register = 6,
  sym_label = 7,
  sym_symbol = 8,
  anon_sym_COMMA = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  sym_adc_opcode = 12,
  sym_and_opcode = 13,
  sym_asl_opcode = 14,
  sym_bcc_opcode = 15,
  sym_bcs_opcode = 16,
  sym_beq_opcode = 17,
  sym_bit_opcode = 18,
  sym_bmi_opcode = 19,
  sym_bne_opcode = 20,
  sym_bpl_opcode = 21,
  sym_brk_opcode = 22,
  sym_bvc_opcode = 23,
  sym_bvs_opcode = 24,
  sym_clc_opcode = 25,
  sym_cld_opcode = 26,
  sym_cli_opcode = 27,
  sym_clv_opcode = 28,
  sym_cmp_opcode = 29,
  sym_cpx_opcode = 30,
  sym_cpy_opcode = 31,
  sym_dec_opcode = 32,
  sym_dex_opcode = 33,
  sym_dey_opcode = 34,
  sym_eor_opcode = 35,
  sym_inc_opcode = 36,
  sym_inx_opcode = 37,
  sym_iny_opcode = 38,
  sym_jmp_opcode = 39,
  sym_jsr_opcode = 40,
  sym_lda_opcode = 41,
  sym_ldx_opcode = 42,
  sym_ldy_opcode = 43,
  sym_lsr_opcode = 44,
  sym_nop_opcode = 45,
  sym_ora_opcode = 46,
  sym_pha_opcode = 47,
  sym_php_opcode = 48,
  sym_pla_opcode = 49,
  sym_plp_opcode = 50,
  sym_rol_opcode = 51,
  sym_ror_opcode = 52,
  sym_rti_opcode = 53,
  sym_rts_opcode = 54,
  sym_sbc_opcode = 55,
  sym_sec_opcode = 56,
  sym_sed_opcode = 57,
  sym_sei_opcode = 58,
  sym_sta_opcode = 59,
  sym_stx_opcode = 60,
  sym_sty_opcode = 61,
  sym_tax_opcode = 62,
  sym_tay_opcode = 63,
  sym_tsx_opcode = 64,
  sym_txa_opcode = 65,
  sym_tcs_opcode = 66,
  sym_tya_opcode = 67,
  anon_sym_PERCENT = 68,
  aux_sym_bin_8_token1 = 69,
  sym_dec_8 = 70,
  anon_sym_DOLLAR = 71,
  anon_sym_h = 72,
  aux_sym_hex_8_token1 = 73,
  aux_sym_hex_8_token2 = 74,
  aux_sym_bin_16_token1 = 75,
  sym_dec_16 = 76,
  aux_sym_hex_16_token1 = 77,
  sym_imm_prefix = 78,
  anon_sym_PLUS = 79,
  anon_sym_DASH = 80,
  anon_sym_DOTBITNOT = 81,
  anon_sym_TILDE = 82,
  anon_sym_DOTLOBYTE = 83,
  anon_sym_LT = 84,
  anon_sym_DOTHIBYTE = 85,
  anon_sym_GT = 86,
  anon_sym_DOTBANKBYTE = 87,
  anon_sym_CARET = 88,
  anon_sym_STAR = 89,
  anon_sym_SLASH = 90,
  anon_sym_DOTMOD = 91,
  anon_sym_DOTBITAND = 92,
  anon_sym_AMP = 93,
  anon_sym_DOTBITXOR = 94,
  anon_sym_DOTSHL = 95,
  anon_sym_LT_LT = 96,
  anon_sym_DOTSHR = 97,
  anon_sym_GT_GT = 98,
  anon_sym_DOTBITOR = 99,
  anon_sym_PIPE = 100,
  anon_sym_EQ = 101,
  anon_sym_LT_GT = 102,
  anon_sym_LT_EQ = 103,
  anon_sym_GT_EQ = 104,
  anon_sym_DOTAND = 105,
  anon_sym_AMP_AMP = 106,
  anon_sym_DOTXOR = 107,
  anon_sym_DOTOR = 108,
  anon_sym_PIPE_PIPE = 109,
  anon_sym_DOTNOT = 110,
  anon_sym_BANG = 111,
  sym_a16_ctrl_cmd = 112,
  sym_a8_ctrl_cmd = 113,
  aux_sym_addr_ctrl_cmd_token1 = 114,
  aux_sym_align_ctrl_cmd_token1 = 115,
  aux_sym_asciiz_ctrl_cmd_token1 = 116,
  aux_sym_assert_ctrl_cmd_token1 = 117,
  aux_sym_autoimport_ctrl_cmd_token1 = 118,
  aux_sym_bankbytes_ctrl_cmd_token1 = 119,
  sym_warning_keyword = 120,
  sym_error_keyword = 121,
  sym_ldwarning_keyword = 122,
  sym_lderror_keyword = 123,
  sym_ca65 = 124,
  sym_string = 125,
  sym_inst = 126,
  sym_impl_addr_inst = 127,
  sym_acc_addr_inst = 128,
  sym_imm_addr_inst = 129,
  sym_abs_addr_inst = 130,
  sym_zp_addr_inst = 131,
  sym_abs_x_addr_inst = 132,
  sym_abs_y_addr_inst = 133,
  sym_zp_x_addr_inst = 134,
  sym_zp_y_addr_inst = 135,
  sym_ind_addr_inst = 136,
  sym_ind_x_addr_inst = 137,
  sym_ind_y_addr_inst = 138,
  sym_rel_addr_inst = 139,
  sym_operand_8 = 140,
  sym_bin_8 = 141,
  sym_hex_8 = 142,
  sym_operand_16 = 143,
  sym_bin_16 = 144,
  sym_hex_16 = 145,
  sym_expression = 146,
  sym_unary_pos_exp = 147,
  sym_unary_neg_exp = 148,
  sym_unary_not_exp = 149,
  sym_unary_lobyte_exp = 150,
  sym_unary_hibyte_exp = 151,
  sym_unary_bankbyte_exp = 152,
  sym_mult_exp = 153,
  sym_div_exp = 154,
  sym_mod_exp = 155,
  sym_bit_and_exp = 156,
  sym_bit_xor_exp = 157,
  sym_shift_l_exp = 158,
  sym_shift_r_exp = 159,
  sym_add_exp = 160,
  sym_sub_exp = 161,
  sym_bit_or_exp = 162,
  sym_eq_cmp = 163,
  sym_neq_cmp = 164,
  sym_lt_cmp = 165,
  sym_gt_cmp = 166,
  sym_lte_cmp = 167,
  sym_gte_cmp = 168,
  sym_bool_and_exp = 169,
  sym_bool_xor_exp = 170,
  sym_bool_or_exp = 171,
  sym_bool_not_exp = 172,
  sym_ctrl_cmd = 173,
  sym_addr_ctrl_cmd = 174,
  sym_align_ctrl_cmd = 175,
  sym_asciiz_ctrl_cmd = 176,
  sym_assert_ctrl_cmd = 177,
  sym_autoimport_ctrl_cmd = 178,
  sym_bankbytes_ctrl_cmd = 179,
  sym_plus_symbol = 180,
  sym_sub_symbol = 181,
  aux_sym_ca65_repeat1 = 182,
  aux_sym_addr_ctrl_cmd_repeat1 = 183,
  aux_sym_asciiz_ctrl_cmd_repeat1 = 184,
  aux_sym_bankbytes_ctrl_cmd_repeat1 = 185,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
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
  [sym_warning_keyword] = "warning_keyword",
  [sym_error_keyword] = "error_keyword",
  [sym_ldwarning_keyword] = "ldwarning_keyword",
  [sym_lderror_keyword] = "lderror_keyword",
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
  [sym_warning_keyword] = sym_warning_keyword,
  [sym_error_keyword] = sym_error_keyword,
  [sym_ldwarning_keyword] = sym_ldwarning_keyword,
  [sym_lderror_keyword] = sym_lderror_keyword,
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
  [56] = 11,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(255);
      ADVANCE_MAP(
        '!', 490,
        '"', 2,
        '#', 455,
        '$', 413,
        '%', 379,
        '&', 472,
        '\'', 5,
        '(', 268,
        ')', 269,
        '*', 468,
        '+', 456,
        ',', 267,
        '-', 457,
        '.', 73,
        '/', 469,
        '0', 380,
        '1', 388,
        '2', 395,
        '6', 400,
        ';', 256,
        '<', 462,
        '=', 480,
        '>', 465,
        'E', 187,
        'L', 162,
        '^', 467,
        'e', 134,
        'h', 414,
        'l', 83,
        'w', 119,
        '|', 479,
        '~', 459,
        'A', 259,
        'a', 259,
        'B', 153,
        'b', 153,
        'C', 178,
        'c', 178,
        'D', 164,
        'd', 164,
        'I', 185,
        'i', 185,
        'J', 181,
        'j', 181,
        'N', 188,
        'n', 188,
        'O', 196,
        'o', 196,
        'P', 169,
        'p', 169,
        'R', 186,
        'r', 186,
        'S', 151,
        's', 151,
        'T', 149,
        't', 149,
        'X', 261,
        'x', 261,
        'Y', 262,
        'y', 262,
      );
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(410);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(412);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 490,
        '#', 455,
        '$', 413,
        '%', 379,
        '(', 268,
        '+', 456,
        '-', 457,
        '.', 80,
        '0', 394,
        '1', 403,
        '2', 398,
        '6', 399,
        ';', 256,
        '<', 461,
        '>', 464,
        '^', 467,
        'h', 415,
        '~', 459,
      );
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(405);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(264);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(257);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(413);
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == '0') ADVANCE(441);
      if (lookahead == '6') ADVANCE(444);
      if (lookahead == ';') ADVANCE(256);
      if (lookahead == 'h') ADVANCE(415);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(449);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '$', 413,
        '%', 379,
        '0', 394,
        '1', 403,
        '2', 398,
        '6', 399,
        ';', 256,
        'h', 415,
        'A', 260,
        'a', 260,
      );
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(405);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(264);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(417);
      if (lookahead == ';') ADVANCE(256);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(421);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(19);
      if (lookahead == '1') ADVANCE(223);
      if (lookahead == ';') ADVANCE(256);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(424);
      if (lookahead == '1') ADVANCE(439);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(12);
      if (lookahead == ';') ADVANCE(256);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(253);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(451);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(454);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(8);
      if (lookahead == '1') ADVANCE(250);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(10);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(252);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(418);
      if (lookahead == ';') ADVANCE(256);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(420);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(11);
      if (lookahead == '1') ADVANCE(249);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(14);
      if (lookahead == '1') ADVANCE(247);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(15);
      if (lookahead == '1') ADVANCE(244);
      END_STATE();
    case 17:
      if (lookahead == '0') ADVANCE(16);
      if (lookahead == '1') ADVANCE(240);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(17);
      if (lookahead == '1') ADVANCE(235);
      END_STATE();
    case 19:
      if (lookahead == '0') ADVANCE(18);
      if (lookahead == '1') ADVANCE(229);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '1', 22,
        '8', 492,
        'N', 84,
        'D', 163,
        'd', 163,
        'L', 172,
        'l', 172,
        'S', 161,
        's', 161,
        'U', 208,
        'u', 208,
      );
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '1', 22,
        '8', 492,
        'D', 163,
        'd', 163,
        'L', 172,
        'l', 172,
        'S', 161,
        's', 161,
        'U', 208,
        'u', 208,
      );
      END_STATE();
    case 22:
      if (lookahead == '6') ADVANCE(491);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(326);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(328);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(338);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(342);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(362);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(364);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 30:
      ADVANCE_MAP(
        ':', 263,
        'A', 70,
        'a', 70,
        'C', 67,
        'c', 67,
        'S', 71,
        's', 71,
        'X', 28,
        'x', 28,
        'Y', 29,
        'y', 29,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 32:
      ADVANCE_MAP(
        ':', 263,
        'C', 34,
        'c', 34,
        'E', 62,
        'e', 62,
        'I', 68,
        'i', 68,
        'M', 47,
        'm', 47,
        'N', 45,
        'n', 45,
        'P', 52,
        'p', 52,
        'R', 49,
        'r', 49,
        'V', 35,
        'v', 35,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(274);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(290);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 36:
      ADVANCE_MAP(
        ':', 263,
        'C', 294,
        'c', 294,
        'D', 296,
        'd', 296,
        'I', 298,
        'i', 298,
        'V', 300,
        'v', 300,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(308);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(310);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(316);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(318);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(356);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(358);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(33);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(43);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(23);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(25);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(350);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(36);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(59);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(346);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(60);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(53);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(304);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(368);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 73:
      ADVANCE_MAP(
        'A', 20,
        'B', 75,
        'H', 91,
        'L', 103,
        'M', 99,
        'N', 100,
        'O', 104,
        'S', 90,
        'X', 98,
        'a', 21,
      );
      END_STATE();
    case 74:
      ADVANCE_MAP(
        'A', 20,
        'B', 92,
        'M', 99,
        'O', 104,
        'S', 90,
        'X', 98,
        'a', 21,
        'b', 150,
      );
      END_STATE();
    case 75:
      if (lookahead == 'A') ADVANCE(95);
      if (lookahead == 'I') ADVANCE(108);
      END_STATE();
    case 76:
      if (lookahead == 'A') ADVANCE(95);
      if (lookahead == 'I') ADVANCE(114);
      END_STATE();
    case 77:
      if (lookahead == 'A') ADVANCE(96);
      if (lookahead == 'N') ADVANCE(102);
      if (lookahead == 'O') ADVANCE(106);
      if (lookahead == 'X') ADVANCE(101);
      END_STATE();
    case 78:
      if (lookahead == 'A') ADVANCE(96);
      if (lookahead == 'O') ADVANCE(106);
      if (lookahead == 'X') ADVANCE(101);
      END_STATE();
    case 79:
      if (lookahead == 'B') ADVANCE(116);
      END_STATE();
    case 80:
      if (lookahead == 'B') ADVANCE(76);
      if (lookahead == 'H') ADVANCE(91);
      if (lookahead == 'L') ADVANCE(103);
      if (lookahead == 'N') ADVANCE(100);
      END_STATE();
    case 81:
      if (lookahead == 'B') ADVANCE(117);
      END_STATE();
    case 82:
      if (lookahead == 'B') ADVANCE(118);
      END_STATE();
    case 83:
      if (lookahead == 'D') ADVANCE(142);
      if (lookahead == 'd') ADVANCE(121);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(198);
      END_STATE();
    case 84:
      if (lookahead == 'D') ADVANCE(484);
      END_STATE();
    case 85:
      if (lookahead == 'D') ADVANCE(470);
      END_STATE();
    case 86:
      if (lookahead == 'D') ADVANCE(471);
      END_STATE();
    case 87:
      if (lookahead == 'E') ADVANCE(463);
      END_STATE();
    case 88:
      if (lookahead == 'E') ADVANCE(460);
      END_STATE();
    case 89:
      if (lookahead == 'E') ADVANCE(466);
      END_STATE();
    case 90:
      if (lookahead == 'H') ADVANCE(94);
      END_STATE();
    case 91:
      if (lookahead == 'I') ADVANCE(79);
      END_STATE();
    case 92:
      if (lookahead == 'I') ADVANCE(112);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 93:
      if (lookahead == 'K') ADVANCE(82);
      END_STATE();
    case 94:
      if (lookahead == 'L') ADVANCE(474);
      if (lookahead == 'R') ADVANCE(476);
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
      if (lookahead == 'O') ADVANCE(81);
      END_STATE();
    case 104:
      if (lookahead == 'R') ADVANCE(487);
      END_STATE();
    case 105:
      if (lookahead == 'R') ADVANCE(486);
      END_STATE();
    case 106:
      if (lookahead == 'R') ADVANCE(478);
      END_STATE();
    case 107:
      if (lookahead == 'R') ADVANCE(473);
      END_STATE();
    case 108:
      if (lookahead == 'T') ADVANCE(77);
      END_STATE();
    case 109:
      if (lookahead == 'T') ADVANCE(489);
      END_STATE();
    case 110:
      if (lookahead == 'T') ADVANCE(87);
      END_STATE();
    case 111:
      if (lookahead == 'T') ADVANCE(458);
      END_STATE();
    case 112:
      if (lookahead == 'T') ADVANCE(78);
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
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 121:
      ADVANCE_MAP(
        'e', 140,
        'w', 120,
        'A', 325,
        'a', 325,
        'X', 327,
        'x', 327,
        'Y', 329,
        'y', 329,
      );
      END_STATE();
    case 122:
      if (lookahead == 'g') ADVANCE(499);
      END_STATE();
    case 123:
      if (lookahead == 'g') ADVANCE(501);
      END_STATE();
    case 124:
      if (lookahead == 'h') ADVANCE(422);
      END_STATE();
    case 125:
      if (lookahead == 'h') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(500);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(502);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 142:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(325);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(327);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(329);
      END_STATE();
    case 143:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(335);
      END_STATE();
    case 144:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(337);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(339);
      END_STATE();
    case 145:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(341);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(343);
      END_STATE();
    case 146:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(361);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(363);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(365);
      END_STATE();
    case 147:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(373);
      END_STATE();
    case 148:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(377);
      END_STATE();
    case 149:
      ADVANCE_MAP(
        'A', 211,
        'a', 211,
        'C', 203,
        'c', 203,
        'S', 212,
        's', 212,
        'X', 147,
        'x', 147,
        'Y', 148,
        'y', 148,
      );
      END_STATE();
    case 150:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 151:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(159);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 152:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(213);
      END_STATE();
    case 153:
      ADVANCE_MAP(
        'C', 154,
        'c', 154,
        'E', 195,
        'e', 195,
        'I', 205,
        'i', 205,
        'M', 170,
        'm', 170,
        'N', 165,
        'n', 165,
        'P', 179,
        'p', 179,
        'R', 176,
        'r', 176,
        'V', 155,
        'v', 155,
      );
      END_STATE();
    case 154:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(273);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(275);
      END_STATE();
    case 155:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(289);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(291);
      END_STATE();
    case 156:
      ADVANCE_MAP(
        'C', 293,
        'c', 293,
        'D', 295,
        'd', 295,
        'I', 297,
        'i', 297,
        'V', 299,
        'v', 299,
      );
      END_STATE();
    case 157:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(307);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(309);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(311);
      END_STATE();
    case 158:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(315);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(317);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(319);
      END_STATE();
    case 159:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(353);
      END_STATE();
    case 160:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(355);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(357);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(359);
      END_STATE();
    case 161:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(175);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(167);
      END_STATE();
    case 162:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(142);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(198);
      END_STATE();
    case 163:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 168:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(183);
      END_STATE();
    case 169:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(144);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 170:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(281);
      END_STATE();
    case 171:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(349);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(351);
      END_STATE();
    case 172:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 173:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 174:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 175:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 176:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(287);
      END_STATE();
    case 177:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(152);
      END_STATE();
    case 178:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(156);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(191);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(210);
      END_STATE();
    case 179:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(285);
      END_STATE();
    case 180:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(345);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(347);
      END_STATE();
    case 181:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(192);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(199);
      END_STATE();
    case 182:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(194);
      END_STATE();
    case 183:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(494);
      END_STATE();
    case 184:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 185:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 186:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(180);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(171);
      END_STATE();
    case 187:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 188:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 189:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 190:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 191:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(301);
      END_STATE();
    case 192:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(321);
      END_STATE();
    case 193:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(333);
      END_STATE();
    case 194:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(190);
      END_STATE();
    case 195:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(277);
      END_STATE();
    case 196:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 197:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(313);
      END_STATE();
    case 198:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 199:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 200:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(493);
      END_STATE();
    case 201:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 202:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 203:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(375);
      END_STATE();
    case 204:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(498);
      END_STATE();
    case 205:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(279);
      END_STATE();
    case 206:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(496);
      END_STATE();
    case 207:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(497);
      END_STATE();
    case 208:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(189);
      END_STATE();
    case 209:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(166);
      END_STATE();
    case 210:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(303);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(305);
      END_STATE();
    case 211:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(367);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(369);
      END_STATE();
    case 212:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(371);
      END_STATE();
    case 213:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(209);
      END_STATE();
    case 214:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(495);
      END_STATE();
    case 215:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(432);
      END_STATE();
    case 216:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(215);
      END_STATE();
    case 217:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(216);
      END_STATE();
    case 218:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(217);
      END_STATE();
    case 219:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(218);
      END_STATE();
    case 220:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(219);
      END_STATE();
    case 221:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(220);
      END_STATE();
    case 222:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(425);
      END_STATE();
    case 223:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(221);
      END_STATE();
    case 224:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(222);
      END_STATE();
    case 225:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(224);
      END_STATE();
    case 226:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(225);
      END_STATE();
    case 227:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(226);
      END_STATE();
    case 228:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(227);
      END_STATE();
    case 229:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(228);
      END_STATE();
    case 230:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(433);
      END_STATE();
    case 231:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(230);
      END_STATE();
    case 232:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(231);
      END_STATE();
    case 233:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(232);
      END_STATE();
    case 234:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(233);
      END_STATE();
    case 235:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(234);
      END_STATE();
    case 236:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(434);
      END_STATE();
    case 237:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(236);
      END_STATE();
    case 238:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(237);
      END_STATE();
    case 239:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(238);
      END_STATE();
    case 240:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(239);
      END_STATE();
    case 241:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(435);
      END_STATE();
    case 242:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(241);
      END_STATE();
    case 243:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(242);
      END_STATE();
    case 244:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(243);
      END_STATE();
    case 245:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(436);
      END_STATE();
    case 246:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(245);
      END_STATE();
    case 247:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(246);
      END_STATE();
    case 248:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(437);
      END_STATE();
    case 249:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(248);
      END_STATE();
    case 250:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(438);
      END_STATE();
    case 251:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(453);
      END_STATE();
    case 252:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(452);
      END_STATE();
    case 253:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      END_STATE();
    case 254:
      if (eof) ADVANCE(255);
      ADVANCE_MAP(
        '&', 472,
        ')', 269,
        '*', 468,
        '+', 456,
        ',', 267,
        '-', 457,
        '.', 74,
        '/', 469,
        '0', 381,
        '1', 393,
        ';', 256,
        '<', 462,
        '=', 480,
        '>', 465,
        '^', 467,
        '|', 479,
        'A', 41,
        'a', 41,
        'B', 32,
        'b', 32,
        'C', 50,
        'c', 50,
        'D', 44,
        'd', 44,
        'E', 57,
        'e', 57,
        'I', 55,
        'i', 55,
        'J', 54,
        'j', 54,
        'L', 42,
        'l', 42,
        'N', 58,
        'n', 58,
        'O', 63,
        'o', 63,
        'P', 46,
        'p', 46,
        'R', 56,
        'r', 56,
        'S', 31,
        's', 31,
        'T', 30,
        't', 30,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(254);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_acc_register);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_acc_register);
      if (lookahead == 'h') ADVANCE(266);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(124);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(265);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_x_register);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_y_register);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'h') ADVANCE(266);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(124);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(265);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'h') ADVANCE(266);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_symbol);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_adc_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_and_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_asl_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_bcc_opcode);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_bcc_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_bcs_opcode);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_bcs_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_beq_opcode);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_beq_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_bit_opcode);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_bit_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_bmi_opcode);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_bmi_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_bne_opcode);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_bne_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_bpl_opcode);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_bpl_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_brk_opcode);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_brk_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_bvc_opcode);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_bvc_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_bvs_opcode);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_bvs_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_clc_opcode);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_clc_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_cld_opcode);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_cld_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_cli_opcode);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_cli_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_clv_opcode);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_clv_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_cmp_opcode);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_cmp_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_cpx_opcode);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_cpx_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_cpy_opcode);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_cpy_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_dec_opcode);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_dec_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_dex_opcode);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_dex_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_dey_opcode);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_dey_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_eor_opcode);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_eor_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_inc_opcode);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_inc_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_inx_opcode);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_inx_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_iny_opcode);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_iny_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_jmp_opcode);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_jmp_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_jsr_opcode);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_jsr_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_lda_opcode);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_lda_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_ldx_opcode);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_ldx_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_ldy_opcode);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_ldy_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_lsr_opcode);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_lsr_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_nop_opcode);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_nop_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_ora_opcode);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_ora_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_pha_opcode);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_pha_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_php_opcode);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_php_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_pla_opcode);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_pla_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_plp_opcode);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_plp_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_rol_opcode);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_rol_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_ror_opcode);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_ror_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_rti_opcode);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_rti_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_rts_opcode);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_rts_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_sbc_opcode);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_sbc_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_sec_opcode);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_sec_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_sed_opcode);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_sed_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_sei_opcode);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_sei_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_sta_opcode);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_sta_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_stx_opcode);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_stx_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_sty_opcode);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_sty_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_tax_opcode);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_tax_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_tay_opcode);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_tay_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_tsx_opcode);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_tsx_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_txa_opcode);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_txa_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_tcs_opcode);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_tcs_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_tya_opcode);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_tya_opcode);
      if (lookahead == ':') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0') ADVANCE(380);
      if (lookahead == '1') ADVANCE(388);
      if (lookahead == '2') ADVANCE(395);
      if (lookahead == '6') ADVANCE(400);
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(410);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(412);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0') ADVANCE(381);
      if (lookahead == '1') ADVANCE(393);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(390);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(390);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(440);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(432);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(387);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(411);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(384);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(383);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(447);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(385);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(412);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(386);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(389);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(382);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(391);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(392);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '0') ADVANCE(394);
      if (lookahead == '1') ADVANCE(403);
      if (lookahead == '2') ADVANCE(398);
      if (lookahead == '6') ADVANCE(399);
      if (lookahead == 'h') ADVANCE(422);
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(405);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(408);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(412);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(442);
      if (lookahead == 'h') ADVANCE(422);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(448);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(442);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(448);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(401);
      if (lookahead == 'h') ADVANCE(422);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(406);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(396);
      if (lookahead == 'h') ADVANCE(422);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(402);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(397);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(409);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(422);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(411);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(406);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(411);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(404);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_dec_8);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(411);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_dec_8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_dec_8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(409);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_dec_8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_dec_8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(411);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_h);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_h);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (lookahead == '0') ADVANCE(417);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(421);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (lookahead == '0') ADVANCE(418);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(420);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(453);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(416);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(419);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_hex_8_token2);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0') ADVANCE(424);
      if (lookahead == '1') ADVANCE(439);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(432);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(423);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(426);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(427);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(428);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(429);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(430);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(431);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(425);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(433);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(434);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(435);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(436);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(437);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(438);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_dec_16);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '0') ADVANCE(441);
      if (lookahead == '6') ADVANCE(444);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(449);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '3') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(447);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(440);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '5') ADVANCE(442);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(448);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '5') ADVANCE(443);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(446);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(440);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(440);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (lookahead == '0') ADVANCE(451);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(454);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(453);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(450);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(452);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_imm_prefix);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_DOTBITNOT);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_DOTLOBYTE);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(475);
      if (lookahead == '=') ADVANCE(482);
      if (lookahead == '>') ADVANCE(481);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_DOTHIBYTE);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(483);
      if (lookahead == '>') ADVANCE(477);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_DOTBANKBYTE);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_DOTMOD);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_DOTBITAND);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(485);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_DOTBITXOR);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_DOTSHL);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_DOTSHR);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_DOTBITOR);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(488);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_DOTAND);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_DOTXOR);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_DOTOR);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_DOTNOT);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_a16_ctrl_cmd);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_a8_ctrl_cmd);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_addr_ctrl_cmd_token1);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_align_ctrl_cmd_token1);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_asciiz_ctrl_cmd_token1);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_assert_ctrl_cmd_token1);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_autoimport_ctrl_cmd_token1);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_bankbytes_ctrl_cmd_token1);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_warning_keyword);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_error_keyword);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_ldwarning_keyword);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_lderror_keyword);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 254},
  [2] = {.lex_state = 254},
  [3] = {.lex_state = 254},
  [4] = {.lex_state = 254},
  [5] = {.lex_state = 254},
  [6] = {.lex_state = 254},
  [7] = {.lex_state = 254},
  [8] = {.lex_state = 254},
  [9] = {.lex_state = 254},
  [10] = {.lex_state = 254},
  [11] = {.lex_state = 254},
  [12] = {.lex_state = 254},
  [13] = {.lex_state = 254},
  [14] = {.lex_state = 254},
  [15] = {.lex_state = 254},
  [16] = {.lex_state = 254},
  [17] = {.lex_state = 254},
  [18] = {.lex_state = 254},
  [19] = {.lex_state = 254},
  [20] = {.lex_state = 254},
  [21] = {.lex_state = 254},
  [22] = {.lex_state = 254},
  [23] = {.lex_state = 254},
  [24] = {.lex_state = 254},
  [25] = {.lex_state = 254},
  [26] = {.lex_state = 254},
  [27] = {.lex_state = 254},
  [28] = {.lex_state = 254},
  [29] = {.lex_state = 254},
  [30] = {.lex_state = 254},
  [31] = {.lex_state = 254},
  [32] = {.lex_state = 254},
  [33] = {.lex_state = 254},
  [34] = {.lex_state = 254},
  [35] = {.lex_state = 254},
  [36] = {.lex_state = 254},
  [37] = {.lex_state = 254},
  [38] = {.lex_state = 254},
  [39] = {.lex_state = 254},
  [40] = {.lex_state = 254},
  [41] = {.lex_state = 254},
  [42] = {.lex_state = 254},
  [43] = {.lex_state = 254},
  [44] = {.lex_state = 254},
  [45] = {.lex_state = 254},
  [46] = {.lex_state = 254},
  [47] = {.lex_state = 254},
  [48] = {.lex_state = 254},
  [49] = {.lex_state = 254},
  [50] = {.lex_state = 254},
  [51] = {.lex_state = 254},
  [52] = {.lex_state = 254},
  [53] = {.lex_state = 254},
  [54] = {.lex_state = 254},
  [55] = {.lex_state = 254},
  [56] = {.lex_state = 254},
  [57] = {.lex_state = 254},
  [58] = {.lex_state = 254},
  [59] = {.lex_state = 254},
  [60] = {.lex_state = 254},
  [61] = {.lex_state = 254},
  [62] = {.lex_state = 254},
  [63] = {.lex_state = 254},
  [64] = {.lex_state = 254},
  [65] = {.lex_state = 254},
  [66] = {.lex_state = 254},
  [67] = {.lex_state = 254},
  [68] = {.lex_state = 254},
  [69] = {.lex_state = 254},
  [70] = {.lex_state = 254},
  [71] = {.lex_state = 254},
  [72] = {.lex_state = 254},
  [73] = {.lex_state = 254},
  [74] = {.lex_state = 254},
  [75] = {.lex_state = 254},
  [76] = {.lex_state = 254},
  [77] = {.lex_state = 254},
  [78] = {.lex_state = 254},
  [79] = {.lex_state = 254},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
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
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 254},
  [139] = {.lex_state = 6},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 13},
  [154] = {.lex_state = 254},
  [155] = {.lex_state = 9},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym_string_token1] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
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
    [sym_warning_keyword] = ACTIONS(1),
    [sym_error_keyword] = ACTIONS(1),
    [sym_ldwarning_keyword] = ACTIONS(1),
    [sym_lderror_keyword] = ACTIONS(1),
  },
  [1] = {
    [sym_ca65] = STATE(145),
    [sym_inst] = STATE(41),
    [sym_impl_addr_inst] = STATE(73),
    [sym_acc_addr_inst] = STATE(73),
    [sym_imm_addr_inst] = STATE(73),
    [sym_abs_addr_inst] = STATE(73),
    [sym_zp_addr_inst] = STATE(73),
    [sym_abs_x_addr_inst] = STATE(73),
    [sym_abs_y_addr_inst] = STATE(73),
    [sym_zp_x_addr_inst] = STATE(73),
    [sym_zp_y_addr_inst] = STATE(73),
    [sym_ind_addr_inst] = STATE(73),
    [sym_ind_x_addr_inst] = STATE(73),
    [sym_ind_y_addr_inst] = STATE(73),
    [sym_rel_addr_inst] = STATE(73),
    [sym_ctrl_cmd] = STATE(41),
    [sym_addr_ctrl_cmd] = STATE(79),
    [sym_align_ctrl_cmd] = STATE(79),
    [sym_asciiz_ctrl_cmd] = STATE(79),
    [sym_assert_ctrl_cmd] = STATE(79),
    [sym_autoimport_ctrl_cmd] = STATE(79),
    [sym_bankbytes_ctrl_cmd] = STATE(79),
    [aux_sym_ca65_repeat1] = STATE(41),
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
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(51),
    [sym_adc_opcode] = ACTIONS(53),
    [sym_and_opcode] = ACTIONS(53),
    [sym_asl_opcode] = ACTIONS(53),
    [sym_bcc_opcode] = ACTIONS(53),
    [sym_bcs_opcode] = ACTIONS(53),
    [sym_beq_opcode] = ACTIONS(53),
    [sym_bit_opcode] = ACTIONS(53),
    [sym_bmi_opcode] = ACTIONS(53),
    [sym_bne_opcode] = ACTIONS(53),
    [sym_bpl_opcode] = ACTIONS(53),
    [sym_brk_opcode] = ACTIONS(53),
    [sym_bvc_opcode] = ACTIONS(53),
    [sym_bvs_opcode] = ACTIONS(53),
    [sym_clc_opcode] = ACTIONS(53),
    [sym_cld_opcode] = ACTIONS(53),
    [sym_cli_opcode] = ACTIONS(53),
    [sym_clv_opcode] = ACTIONS(53),
    [sym_cmp_opcode] = ACTIONS(53),
    [sym_cpx_opcode] = ACTIONS(53),
    [sym_cpy_opcode] = ACTIONS(53),
    [sym_dec_opcode] = ACTIONS(53),
    [sym_dex_opcode] = ACTIONS(53),
    [sym_dey_opcode] = ACTIONS(53),
    [sym_eor_opcode] = ACTIONS(53),
    [sym_inc_opcode] = ACTIONS(53),
    [sym_inx_opcode] = ACTIONS(53),
    [sym_iny_opcode] = ACTIONS(53),
    [sym_jmp_opcode] = ACTIONS(53),
    [sym_jsr_opcode] = ACTIONS(53),
    [sym_lda_opcode] = ACTIONS(53),
    [sym_ldx_opcode] = ACTIONS(53),
    [sym_ldy_opcode] = ACTIONS(53),
    [sym_lsr_opcode] = ACTIONS(53),
    [sym_nop_opcode] = ACTIONS(53),
    [sym_ora_opcode] = ACTIONS(53),
    [sym_pha_opcode] = ACTIONS(53),
    [sym_php_opcode] = ACTIONS(53),
    [sym_pla_opcode] = ACTIONS(53),
    [sym_plp_opcode] = ACTIONS(53),
    [sym_rol_opcode] = ACTIONS(53),
    [sym_ror_opcode] = ACTIONS(53),
    [sym_rti_opcode] = ACTIONS(53),
    [sym_rts_opcode] = ACTIONS(53),
    [sym_sbc_opcode] = ACTIONS(53),
    [sym_sec_opcode] = ACTIONS(53),
    [sym_sed_opcode] = ACTIONS(53),
    [sym_sei_opcode] = ACTIONS(53),
    [sym_sta_opcode] = ACTIONS(53),
    [sym_stx_opcode] = ACTIONS(53),
    [sym_sty_opcode] = ACTIONS(53),
    [sym_tax_opcode] = ACTIONS(53),
    [sym_tay_opcode] = ACTIONS(53),
    [sym_tsx_opcode] = ACTIONS(53),
    [sym_txa_opcode] = ACTIONS(53),
    [sym_tcs_opcode] = ACTIONS(53),
    [sym_tya_opcode] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_CARET] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_SLASH] = ACTIONS(51),
    [anon_sym_DOTMOD] = ACTIONS(51),
    [anon_sym_DOTBITAND] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(53),
    [anon_sym_DOTBITXOR] = ACTIONS(51),
    [anon_sym_DOTSHL] = ACTIONS(51),
    [anon_sym_LT_LT] = ACTIONS(51),
    [anon_sym_DOTSHR] = ACTIONS(51),
    [anon_sym_GT_GT] = ACTIONS(51),
    [anon_sym_DOTBITOR] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_LT_GT] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_DOTAND] = ACTIONS(51),
    [anon_sym_AMP_AMP] = ACTIONS(51),
    [anon_sym_DOTXOR] = ACTIONS(51),
    [anon_sym_DOTOR] = ACTIONS(51),
    [anon_sym_PIPE_PIPE] = ACTIONS(51),
    [sym_a16_ctrl_cmd] = ACTIONS(51),
    [sym_a8_ctrl_cmd] = ACTIONS(51),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(51),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(51),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(51),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(51),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(51),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(51),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(55),
    [anon_sym_COMMA] = ACTIONS(55),
    [anon_sym_RPAREN] = ACTIONS(55),
    [sym_adc_opcode] = ACTIONS(57),
    [sym_and_opcode] = ACTIONS(57),
    [sym_asl_opcode] = ACTIONS(57),
    [sym_bcc_opcode] = ACTIONS(57),
    [sym_bcs_opcode] = ACTIONS(57),
    [sym_beq_opcode] = ACTIONS(57),
    [sym_bit_opcode] = ACTIONS(57),
    [sym_bmi_opcode] = ACTIONS(57),
    [sym_bne_opcode] = ACTIONS(57),
    [sym_bpl_opcode] = ACTIONS(57),
    [sym_brk_opcode] = ACTIONS(57),
    [sym_bvc_opcode] = ACTIONS(57),
    [sym_bvs_opcode] = ACTIONS(57),
    [sym_clc_opcode] = ACTIONS(57),
    [sym_cld_opcode] = ACTIONS(57),
    [sym_cli_opcode] = ACTIONS(57),
    [sym_clv_opcode] = ACTIONS(57),
    [sym_cmp_opcode] = ACTIONS(57),
    [sym_cpx_opcode] = ACTIONS(57),
    [sym_cpy_opcode] = ACTIONS(57),
    [sym_dec_opcode] = ACTIONS(57),
    [sym_dex_opcode] = ACTIONS(57),
    [sym_dey_opcode] = ACTIONS(57),
    [sym_eor_opcode] = ACTIONS(57),
    [sym_inc_opcode] = ACTIONS(57),
    [sym_inx_opcode] = ACTIONS(57),
    [sym_iny_opcode] = ACTIONS(57),
    [sym_jmp_opcode] = ACTIONS(57),
    [sym_jsr_opcode] = ACTIONS(57),
    [sym_lda_opcode] = ACTIONS(57),
    [sym_ldx_opcode] = ACTIONS(57),
    [sym_ldy_opcode] = ACTIONS(57),
    [sym_lsr_opcode] = ACTIONS(57),
    [sym_nop_opcode] = ACTIONS(57),
    [sym_ora_opcode] = ACTIONS(57),
    [sym_pha_opcode] = ACTIONS(57),
    [sym_php_opcode] = ACTIONS(57),
    [sym_pla_opcode] = ACTIONS(57),
    [sym_plp_opcode] = ACTIONS(57),
    [sym_rol_opcode] = ACTIONS(57),
    [sym_ror_opcode] = ACTIONS(57),
    [sym_rti_opcode] = ACTIONS(57),
    [sym_rts_opcode] = ACTIONS(57),
    [sym_sbc_opcode] = ACTIONS(57),
    [sym_sec_opcode] = ACTIONS(57),
    [sym_sed_opcode] = ACTIONS(57),
    [sym_sei_opcode] = ACTIONS(57),
    [sym_sta_opcode] = ACTIONS(57),
    [sym_stx_opcode] = ACTIONS(57),
    [sym_sty_opcode] = ACTIONS(57),
    [sym_tax_opcode] = ACTIONS(57),
    [sym_tay_opcode] = ACTIONS(57),
    [sym_tsx_opcode] = ACTIONS(57),
    [sym_txa_opcode] = ACTIONS(57),
    [sym_tcs_opcode] = ACTIONS(57),
    [sym_tya_opcode] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(55),
    [anon_sym_DASH] = ACTIONS(55),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_CARET] = ACTIONS(55),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_SLASH] = ACTIONS(55),
    [anon_sym_DOTMOD] = ACTIONS(55),
    [anon_sym_DOTBITAND] = ACTIONS(55),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_DOTBITXOR] = ACTIONS(55),
    [anon_sym_DOTSHL] = ACTIONS(55),
    [anon_sym_LT_LT] = ACTIONS(55),
    [anon_sym_DOTSHR] = ACTIONS(55),
    [anon_sym_GT_GT] = ACTIONS(55),
    [anon_sym_DOTBITOR] = ACTIONS(55),
    [anon_sym_PIPE] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(55),
    [anon_sym_LT_GT] = ACTIONS(55),
    [anon_sym_LT_EQ] = ACTIONS(55),
    [anon_sym_GT_EQ] = ACTIONS(55),
    [anon_sym_DOTAND] = ACTIONS(55),
    [anon_sym_AMP_AMP] = ACTIONS(55),
    [anon_sym_DOTXOR] = ACTIONS(55),
    [anon_sym_DOTOR] = ACTIONS(55),
    [anon_sym_PIPE_PIPE] = ACTIONS(55),
    [sym_a16_ctrl_cmd] = ACTIONS(55),
    [sym_a8_ctrl_cmd] = ACTIONS(55),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(55),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(55),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(55),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(55),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(55),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(55),
  },
  [4] = {
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
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_CARET] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_DOTMOD] = ACTIONS(73),
    [anon_sym_DOTBITAND] = ACTIONS(75),
    [anon_sym_AMP] = ACTIONS(77),
    [anon_sym_DOTBITXOR] = ACTIONS(67),
    [anon_sym_DOTSHL] = ACTIONS(79),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_DOTSHR] = ACTIONS(81),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_DOTBITOR] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(85),
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
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(87),
    [sym_adc_opcode] = ACTIONS(89),
    [sym_and_opcode] = ACTIONS(89),
    [sym_asl_opcode] = ACTIONS(89),
    [sym_bcc_opcode] = ACTIONS(89),
    [sym_bcs_opcode] = ACTIONS(89),
    [sym_beq_opcode] = ACTIONS(89),
    [sym_bit_opcode] = ACTIONS(89),
    [sym_bmi_opcode] = ACTIONS(89),
    [sym_bne_opcode] = ACTIONS(89),
    [sym_bpl_opcode] = ACTIONS(89),
    [sym_brk_opcode] = ACTIONS(89),
    [sym_bvc_opcode] = ACTIONS(89),
    [sym_bvs_opcode] = ACTIONS(89),
    [sym_clc_opcode] = ACTIONS(89),
    [sym_cld_opcode] = ACTIONS(89),
    [sym_cli_opcode] = ACTIONS(89),
    [sym_clv_opcode] = ACTIONS(89),
    [sym_cmp_opcode] = ACTIONS(89),
    [sym_cpx_opcode] = ACTIONS(89),
    [sym_cpy_opcode] = ACTIONS(89),
    [sym_dec_opcode] = ACTIONS(89),
    [sym_dex_opcode] = ACTIONS(89),
    [sym_dey_opcode] = ACTIONS(89),
    [sym_eor_opcode] = ACTIONS(89),
    [sym_inc_opcode] = ACTIONS(89),
    [sym_inx_opcode] = ACTIONS(89),
    [sym_iny_opcode] = ACTIONS(89),
    [sym_jmp_opcode] = ACTIONS(89),
    [sym_jsr_opcode] = ACTIONS(89),
    [sym_lda_opcode] = ACTIONS(89),
    [sym_ldx_opcode] = ACTIONS(89),
    [sym_ldy_opcode] = ACTIONS(89),
    [sym_lsr_opcode] = ACTIONS(89),
    [sym_nop_opcode] = ACTIONS(89),
    [sym_ora_opcode] = ACTIONS(89),
    [sym_pha_opcode] = ACTIONS(89),
    [sym_php_opcode] = ACTIONS(89),
    [sym_pla_opcode] = ACTIONS(89),
    [sym_plp_opcode] = ACTIONS(89),
    [sym_rol_opcode] = ACTIONS(89),
    [sym_ror_opcode] = ACTIONS(89),
    [sym_rti_opcode] = ACTIONS(89),
    [sym_rts_opcode] = ACTIONS(89),
    [sym_sbc_opcode] = ACTIONS(89),
    [sym_sec_opcode] = ACTIONS(89),
    [sym_sed_opcode] = ACTIONS(89),
    [sym_sei_opcode] = ACTIONS(89),
    [sym_sta_opcode] = ACTIONS(89),
    [sym_stx_opcode] = ACTIONS(89),
    [sym_sty_opcode] = ACTIONS(89),
    [sym_tax_opcode] = ACTIONS(89),
    [sym_tay_opcode] = ACTIONS(89),
    [sym_tsx_opcode] = ACTIONS(89),
    [sym_txa_opcode] = ACTIONS(89),
    [sym_tcs_opcode] = ACTIONS(89),
    [sym_tya_opcode] = ACTIONS(89),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_CARET] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_DOTMOD] = ACTIONS(73),
    [anon_sym_DOTBITAND] = ACTIONS(75),
    [anon_sym_AMP] = ACTIONS(77),
    [anon_sym_DOTBITXOR] = ACTIONS(67),
    [anon_sym_DOTSHL] = ACTIONS(79),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_DOTSHR] = ACTIONS(81),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_DOTBITOR] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(87),
    [anon_sym_LT_GT] = ACTIONS(87),
    [anon_sym_LT_EQ] = ACTIONS(87),
    [anon_sym_GT_EQ] = ACTIONS(87),
    [anon_sym_DOTAND] = ACTIONS(87),
    [anon_sym_AMP_AMP] = ACTIONS(87),
    [anon_sym_DOTXOR] = ACTIONS(87),
    [anon_sym_DOTOR] = ACTIONS(87),
    [anon_sym_PIPE_PIPE] = ACTIONS(87),
    [sym_a16_ctrl_cmd] = ACTIONS(87),
    [sym_a8_ctrl_cmd] = ACTIONS(87),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(87),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(87),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(87),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(87),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(87),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(87),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(91),
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [sym_adc_opcode] = ACTIONS(93),
    [sym_and_opcode] = ACTIONS(93),
    [sym_asl_opcode] = ACTIONS(93),
    [sym_bcc_opcode] = ACTIONS(93),
    [sym_bcs_opcode] = ACTIONS(93),
    [sym_beq_opcode] = ACTIONS(93),
    [sym_bit_opcode] = ACTIONS(93),
    [sym_bmi_opcode] = ACTIONS(93),
    [sym_bne_opcode] = ACTIONS(93),
    [sym_bpl_opcode] = ACTIONS(93),
    [sym_brk_opcode] = ACTIONS(93),
    [sym_bvc_opcode] = ACTIONS(93),
    [sym_bvs_opcode] = ACTIONS(93),
    [sym_clc_opcode] = ACTIONS(93),
    [sym_cld_opcode] = ACTIONS(93),
    [sym_cli_opcode] = ACTIONS(93),
    [sym_clv_opcode] = ACTIONS(93),
    [sym_cmp_opcode] = ACTIONS(93),
    [sym_cpx_opcode] = ACTIONS(93),
    [sym_cpy_opcode] = ACTIONS(93),
    [sym_dec_opcode] = ACTIONS(93),
    [sym_dex_opcode] = ACTIONS(93),
    [sym_dey_opcode] = ACTIONS(93),
    [sym_eor_opcode] = ACTIONS(93),
    [sym_inc_opcode] = ACTIONS(93),
    [sym_inx_opcode] = ACTIONS(93),
    [sym_iny_opcode] = ACTIONS(93),
    [sym_jmp_opcode] = ACTIONS(93),
    [sym_jsr_opcode] = ACTIONS(93),
    [sym_lda_opcode] = ACTIONS(93),
    [sym_ldx_opcode] = ACTIONS(93),
    [sym_ldy_opcode] = ACTIONS(93),
    [sym_lsr_opcode] = ACTIONS(93),
    [sym_nop_opcode] = ACTIONS(93),
    [sym_ora_opcode] = ACTIONS(93),
    [sym_pha_opcode] = ACTIONS(93),
    [sym_php_opcode] = ACTIONS(93),
    [sym_pla_opcode] = ACTIONS(93),
    [sym_plp_opcode] = ACTIONS(93),
    [sym_rol_opcode] = ACTIONS(93),
    [sym_ror_opcode] = ACTIONS(93),
    [sym_rti_opcode] = ACTIONS(93),
    [sym_rts_opcode] = ACTIONS(93),
    [sym_sbc_opcode] = ACTIONS(93),
    [sym_sec_opcode] = ACTIONS(93),
    [sym_sed_opcode] = ACTIONS(93),
    [sym_sei_opcode] = ACTIONS(93),
    [sym_sta_opcode] = ACTIONS(93),
    [sym_stx_opcode] = ACTIONS(93),
    [sym_sty_opcode] = ACTIONS(93),
    [sym_tax_opcode] = ACTIONS(93),
    [sym_tay_opcode] = ACTIONS(93),
    [sym_tsx_opcode] = ACTIONS(93),
    [sym_txa_opcode] = ACTIONS(93),
    [sym_tcs_opcode] = ACTIONS(93),
    [sym_tya_opcode] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_CARET] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_DOTMOD] = ACTIONS(73),
    [anon_sym_DOTBITAND] = ACTIONS(75),
    [anon_sym_AMP] = ACTIONS(77),
    [anon_sym_DOTBITXOR] = ACTIONS(67),
    [anon_sym_DOTSHL] = ACTIONS(79),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_DOTSHR] = ACTIONS(81),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_DOTBITOR] = ACTIONS(91),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_EQ] = ACTIONS(91),
    [anon_sym_LT_GT] = ACTIONS(91),
    [anon_sym_LT_EQ] = ACTIONS(91),
    [anon_sym_GT_EQ] = ACTIONS(91),
    [anon_sym_DOTAND] = ACTIONS(91),
    [anon_sym_AMP_AMP] = ACTIONS(91),
    [anon_sym_DOTXOR] = ACTIONS(91),
    [anon_sym_DOTOR] = ACTIONS(91),
    [anon_sym_PIPE_PIPE] = ACTIONS(91),
    [sym_a16_ctrl_cmd] = ACTIONS(91),
    [sym_a8_ctrl_cmd] = ACTIONS(91),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(91),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(91),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(91),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(91),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(91),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(91),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(95),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(95),
    [sym_adc_opcode] = ACTIONS(97),
    [sym_and_opcode] = ACTIONS(97),
    [sym_asl_opcode] = ACTIONS(97),
    [sym_bcc_opcode] = ACTIONS(97),
    [sym_bcs_opcode] = ACTIONS(97),
    [sym_beq_opcode] = ACTIONS(97),
    [sym_bit_opcode] = ACTIONS(97),
    [sym_bmi_opcode] = ACTIONS(97),
    [sym_bne_opcode] = ACTIONS(97),
    [sym_bpl_opcode] = ACTIONS(97),
    [sym_brk_opcode] = ACTIONS(97),
    [sym_bvc_opcode] = ACTIONS(97),
    [sym_bvs_opcode] = ACTIONS(97),
    [sym_clc_opcode] = ACTIONS(97),
    [sym_cld_opcode] = ACTIONS(97),
    [sym_cli_opcode] = ACTIONS(97),
    [sym_clv_opcode] = ACTIONS(97),
    [sym_cmp_opcode] = ACTIONS(97),
    [sym_cpx_opcode] = ACTIONS(97),
    [sym_cpy_opcode] = ACTIONS(97),
    [sym_dec_opcode] = ACTIONS(97),
    [sym_dex_opcode] = ACTIONS(97),
    [sym_dey_opcode] = ACTIONS(97),
    [sym_eor_opcode] = ACTIONS(97),
    [sym_inc_opcode] = ACTIONS(97),
    [sym_inx_opcode] = ACTIONS(97),
    [sym_iny_opcode] = ACTIONS(97),
    [sym_jmp_opcode] = ACTIONS(97),
    [sym_jsr_opcode] = ACTIONS(97),
    [sym_lda_opcode] = ACTIONS(97),
    [sym_ldx_opcode] = ACTIONS(97),
    [sym_ldy_opcode] = ACTIONS(97),
    [sym_lsr_opcode] = ACTIONS(97),
    [sym_nop_opcode] = ACTIONS(97),
    [sym_ora_opcode] = ACTIONS(97),
    [sym_pha_opcode] = ACTIONS(97),
    [sym_php_opcode] = ACTIONS(97),
    [sym_pla_opcode] = ACTIONS(97),
    [sym_plp_opcode] = ACTIONS(97),
    [sym_rol_opcode] = ACTIONS(97),
    [sym_ror_opcode] = ACTIONS(97),
    [sym_rti_opcode] = ACTIONS(97),
    [sym_rts_opcode] = ACTIONS(97),
    [sym_sbc_opcode] = ACTIONS(97),
    [sym_sec_opcode] = ACTIONS(97),
    [sym_sed_opcode] = ACTIONS(97),
    [sym_sei_opcode] = ACTIONS(97),
    [sym_sta_opcode] = ACTIONS(97),
    [sym_stx_opcode] = ACTIONS(97),
    [sym_sty_opcode] = ACTIONS(97),
    [sym_tax_opcode] = ACTIONS(97),
    [sym_tay_opcode] = ACTIONS(97),
    [sym_tsx_opcode] = ACTIONS(97),
    [sym_txa_opcode] = ACTIONS(97),
    [sym_tcs_opcode] = ACTIONS(97),
    [sym_tya_opcode] = ACTIONS(97),
    [anon_sym_PLUS] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_LT] = ACTIONS(97),
    [anon_sym_GT] = ACTIONS(97),
    [anon_sym_CARET] = ACTIONS(95),
    [anon_sym_STAR] = ACTIONS(95),
    [anon_sym_SLASH] = ACTIONS(95),
    [anon_sym_DOTMOD] = ACTIONS(95),
    [anon_sym_DOTBITAND] = ACTIONS(95),
    [anon_sym_AMP] = ACTIONS(97),
    [anon_sym_DOTBITXOR] = ACTIONS(95),
    [anon_sym_DOTSHL] = ACTIONS(95),
    [anon_sym_LT_LT] = ACTIONS(95),
    [anon_sym_DOTSHR] = ACTIONS(95),
    [anon_sym_GT_GT] = ACTIONS(95),
    [anon_sym_DOTBITOR] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_EQ] = ACTIONS(95),
    [anon_sym_LT_GT] = ACTIONS(95),
    [anon_sym_LT_EQ] = ACTIONS(95),
    [anon_sym_GT_EQ] = ACTIONS(95),
    [anon_sym_DOTAND] = ACTIONS(95),
    [anon_sym_AMP_AMP] = ACTIONS(95),
    [anon_sym_DOTXOR] = ACTIONS(95),
    [anon_sym_DOTOR] = ACTIONS(95),
    [anon_sym_PIPE_PIPE] = ACTIONS(95),
    [sym_a16_ctrl_cmd] = ACTIONS(95),
    [sym_a8_ctrl_cmd] = ACTIONS(95),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(95),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(95),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(95),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(95),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(95),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(95),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_RPAREN] = ACTIONS(99),
    [sym_adc_opcode] = ACTIONS(101),
    [sym_and_opcode] = ACTIONS(101),
    [sym_asl_opcode] = ACTIONS(101),
    [sym_bcc_opcode] = ACTIONS(101),
    [sym_bcs_opcode] = ACTIONS(101),
    [sym_beq_opcode] = ACTIONS(101),
    [sym_bit_opcode] = ACTIONS(101),
    [sym_bmi_opcode] = ACTIONS(101),
    [sym_bne_opcode] = ACTIONS(101),
    [sym_bpl_opcode] = ACTIONS(101),
    [sym_brk_opcode] = ACTIONS(101),
    [sym_bvc_opcode] = ACTIONS(101),
    [sym_bvs_opcode] = ACTIONS(101),
    [sym_clc_opcode] = ACTIONS(101),
    [sym_cld_opcode] = ACTIONS(101),
    [sym_cli_opcode] = ACTIONS(101),
    [sym_clv_opcode] = ACTIONS(101),
    [sym_cmp_opcode] = ACTIONS(101),
    [sym_cpx_opcode] = ACTIONS(101),
    [sym_cpy_opcode] = ACTIONS(101),
    [sym_dec_opcode] = ACTIONS(101),
    [sym_dex_opcode] = ACTIONS(101),
    [sym_dey_opcode] = ACTIONS(101),
    [sym_eor_opcode] = ACTIONS(101),
    [sym_inc_opcode] = ACTIONS(101),
    [sym_inx_opcode] = ACTIONS(101),
    [sym_iny_opcode] = ACTIONS(101),
    [sym_jmp_opcode] = ACTIONS(101),
    [sym_jsr_opcode] = ACTIONS(101),
    [sym_lda_opcode] = ACTIONS(101),
    [sym_ldx_opcode] = ACTIONS(101),
    [sym_ldy_opcode] = ACTIONS(101),
    [sym_lsr_opcode] = ACTIONS(101),
    [sym_nop_opcode] = ACTIONS(101),
    [sym_ora_opcode] = ACTIONS(101),
    [sym_pha_opcode] = ACTIONS(101),
    [sym_php_opcode] = ACTIONS(101),
    [sym_pla_opcode] = ACTIONS(101),
    [sym_plp_opcode] = ACTIONS(101),
    [sym_rol_opcode] = ACTIONS(101),
    [sym_ror_opcode] = ACTIONS(101),
    [sym_rti_opcode] = ACTIONS(101),
    [sym_rts_opcode] = ACTIONS(101),
    [sym_sbc_opcode] = ACTIONS(101),
    [sym_sec_opcode] = ACTIONS(101),
    [sym_sed_opcode] = ACTIONS(101),
    [sym_sei_opcode] = ACTIONS(101),
    [sym_sta_opcode] = ACTIONS(101),
    [sym_stx_opcode] = ACTIONS(101),
    [sym_sty_opcode] = ACTIONS(101),
    [sym_tax_opcode] = ACTIONS(101),
    [sym_tay_opcode] = ACTIONS(101),
    [sym_tsx_opcode] = ACTIONS(101),
    [sym_txa_opcode] = ACTIONS(101),
    [sym_tcs_opcode] = ACTIONS(101),
    [sym_tya_opcode] = ACTIONS(101),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_DASH] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_CARET] = ACTIONS(99),
    [anon_sym_STAR] = ACTIONS(99),
    [anon_sym_SLASH] = ACTIONS(99),
    [anon_sym_DOTMOD] = ACTIONS(99),
    [anon_sym_DOTBITAND] = ACTIONS(99),
    [anon_sym_AMP] = ACTIONS(101),
    [anon_sym_DOTBITXOR] = ACTIONS(99),
    [anon_sym_DOTSHL] = ACTIONS(99),
    [anon_sym_LT_LT] = ACTIONS(99),
    [anon_sym_DOTSHR] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_DOTBITOR] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(101),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_LT_GT] = ACTIONS(99),
    [anon_sym_LT_EQ] = ACTIONS(99),
    [anon_sym_GT_EQ] = ACTIONS(99),
    [anon_sym_DOTAND] = ACTIONS(99),
    [anon_sym_AMP_AMP] = ACTIONS(99),
    [anon_sym_DOTXOR] = ACTIONS(99),
    [anon_sym_DOTOR] = ACTIONS(99),
    [anon_sym_PIPE_PIPE] = ACTIONS(99),
    [sym_a16_ctrl_cmd] = ACTIONS(99),
    [sym_a8_ctrl_cmd] = ACTIONS(99),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(99),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(99),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(99),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(99),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(99),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(99),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(103),
    [sym_adc_opcode] = ACTIONS(105),
    [sym_and_opcode] = ACTIONS(105),
    [sym_asl_opcode] = ACTIONS(105),
    [sym_bcc_opcode] = ACTIONS(105),
    [sym_bcs_opcode] = ACTIONS(105),
    [sym_beq_opcode] = ACTIONS(105),
    [sym_bit_opcode] = ACTIONS(105),
    [sym_bmi_opcode] = ACTIONS(105),
    [sym_bne_opcode] = ACTIONS(105),
    [sym_bpl_opcode] = ACTIONS(105),
    [sym_brk_opcode] = ACTIONS(105),
    [sym_bvc_opcode] = ACTIONS(105),
    [sym_bvs_opcode] = ACTIONS(105),
    [sym_clc_opcode] = ACTIONS(105),
    [sym_cld_opcode] = ACTIONS(105),
    [sym_cli_opcode] = ACTIONS(105),
    [sym_clv_opcode] = ACTIONS(105),
    [sym_cmp_opcode] = ACTIONS(105),
    [sym_cpx_opcode] = ACTIONS(105),
    [sym_cpy_opcode] = ACTIONS(105),
    [sym_dec_opcode] = ACTIONS(105),
    [sym_dex_opcode] = ACTIONS(105),
    [sym_dey_opcode] = ACTIONS(105),
    [sym_eor_opcode] = ACTIONS(105),
    [sym_inc_opcode] = ACTIONS(105),
    [sym_inx_opcode] = ACTIONS(105),
    [sym_iny_opcode] = ACTIONS(105),
    [sym_jmp_opcode] = ACTIONS(105),
    [sym_jsr_opcode] = ACTIONS(105),
    [sym_lda_opcode] = ACTIONS(105),
    [sym_ldx_opcode] = ACTIONS(105),
    [sym_ldy_opcode] = ACTIONS(105),
    [sym_lsr_opcode] = ACTIONS(105),
    [sym_nop_opcode] = ACTIONS(105),
    [sym_ora_opcode] = ACTIONS(105),
    [sym_pha_opcode] = ACTIONS(105),
    [sym_php_opcode] = ACTIONS(105),
    [sym_pla_opcode] = ACTIONS(105),
    [sym_plp_opcode] = ACTIONS(105),
    [sym_rol_opcode] = ACTIONS(105),
    [sym_ror_opcode] = ACTIONS(105),
    [sym_rti_opcode] = ACTIONS(105),
    [sym_rts_opcode] = ACTIONS(105),
    [sym_sbc_opcode] = ACTIONS(105),
    [sym_sec_opcode] = ACTIONS(105),
    [sym_sed_opcode] = ACTIONS(105),
    [sym_sei_opcode] = ACTIONS(105),
    [sym_sta_opcode] = ACTIONS(105),
    [sym_stx_opcode] = ACTIONS(105),
    [sym_sty_opcode] = ACTIONS(105),
    [sym_tax_opcode] = ACTIONS(105),
    [sym_tay_opcode] = ACTIONS(105),
    [sym_tsx_opcode] = ACTIONS(105),
    [sym_txa_opcode] = ACTIONS(105),
    [sym_tcs_opcode] = ACTIONS(105),
    [sym_tya_opcode] = ACTIONS(105),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_LT] = ACTIONS(105),
    [anon_sym_GT] = ACTIONS(105),
    [anon_sym_CARET] = ACTIONS(103),
    [anon_sym_STAR] = ACTIONS(103),
    [anon_sym_SLASH] = ACTIONS(103),
    [anon_sym_DOTMOD] = ACTIONS(103),
    [anon_sym_DOTBITAND] = ACTIONS(103),
    [anon_sym_AMP] = ACTIONS(105),
    [anon_sym_DOTBITXOR] = ACTIONS(103),
    [anon_sym_DOTSHL] = ACTIONS(103),
    [anon_sym_LT_LT] = ACTIONS(103),
    [anon_sym_DOTSHR] = ACTIONS(103),
    [anon_sym_GT_GT] = ACTIONS(103),
    [anon_sym_DOTBITOR] = ACTIONS(103),
    [anon_sym_PIPE] = ACTIONS(105),
    [anon_sym_EQ] = ACTIONS(103),
    [anon_sym_LT_GT] = ACTIONS(103),
    [anon_sym_LT_EQ] = ACTIONS(103),
    [anon_sym_GT_EQ] = ACTIONS(103),
    [anon_sym_DOTAND] = ACTIONS(103),
    [anon_sym_AMP_AMP] = ACTIONS(103),
    [anon_sym_DOTXOR] = ACTIONS(103),
    [anon_sym_DOTOR] = ACTIONS(103),
    [anon_sym_PIPE_PIPE] = ACTIONS(103),
    [sym_a16_ctrl_cmd] = ACTIONS(103),
    [sym_a8_ctrl_cmd] = ACTIONS(103),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(103),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(103),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(103),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(103),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(103),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(103),
  },
  [10] = {
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
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(107),
    [anon_sym_STAR] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_DOTMOD] = ACTIONS(107),
    [anon_sym_DOTBITAND] = ACTIONS(107),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_DOTBITXOR] = ACTIONS(107),
    [anon_sym_DOTSHL] = ACTIONS(107),
    [anon_sym_LT_LT] = ACTIONS(107),
    [anon_sym_DOTSHR] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_DOTBITOR] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(109),
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
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(111),
    [anon_sym_COMMA] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [sym_adc_opcode] = ACTIONS(114),
    [sym_and_opcode] = ACTIONS(114),
    [sym_asl_opcode] = ACTIONS(114),
    [sym_bcc_opcode] = ACTIONS(114),
    [sym_bcs_opcode] = ACTIONS(114),
    [sym_beq_opcode] = ACTIONS(114),
    [sym_bit_opcode] = ACTIONS(114),
    [sym_bmi_opcode] = ACTIONS(114),
    [sym_bne_opcode] = ACTIONS(114),
    [sym_bpl_opcode] = ACTIONS(114),
    [sym_brk_opcode] = ACTIONS(114),
    [sym_bvc_opcode] = ACTIONS(114),
    [sym_bvs_opcode] = ACTIONS(114),
    [sym_clc_opcode] = ACTIONS(114),
    [sym_cld_opcode] = ACTIONS(114),
    [sym_cli_opcode] = ACTIONS(114),
    [sym_clv_opcode] = ACTIONS(114),
    [sym_cmp_opcode] = ACTIONS(114),
    [sym_cpx_opcode] = ACTIONS(114),
    [sym_cpy_opcode] = ACTIONS(114),
    [sym_dec_opcode] = ACTIONS(114),
    [sym_dex_opcode] = ACTIONS(114),
    [sym_dey_opcode] = ACTIONS(114),
    [sym_eor_opcode] = ACTIONS(114),
    [sym_inc_opcode] = ACTIONS(114),
    [sym_inx_opcode] = ACTIONS(114),
    [sym_iny_opcode] = ACTIONS(114),
    [sym_jmp_opcode] = ACTIONS(114),
    [sym_jsr_opcode] = ACTIONS(114),
    [sym_lda_opcode] = ACTIONS(114),
    [sym_ldx_opcode] = ACTIONS(114),
    [sym_ldy_opcode] = ACTIONS(114),
    [sym_lsr_opcode] = ACTIONS(114),
    [sym_nop_opcode] = ACTIONS(114),
    [sym_ora_opcode] = ACTIONS(114),
    [sym_pha_opcode] = ACTIONS(114),
    [sym_php_opcode] = ACTIONS(114),
    [sym_pla_opcode] = ACTIONS(114),
    [sym_plp_opcode] = ACTIONS(114),
    [sym_rol_opcode] = ACTIONS(114),
    [sym_ror_opcode] = ACTIONS(114),
    [sym_rti_opcode] = ACTIONS(114),
    [sym_rts_opcode] = ACTIONS(114),
    [sym_sbc_opcode] = ACTIONS(114),
    [sym_sec_opcode] = ACTIONS(114),
    [sym_sed_opcode] = ACTIONS(114),
    [sym_sei_opcode] = ACTIONS(114),
    [sym_sta_opcode] = ACTIONS(114),
    [sym_stx_opcode] = ACTIONS(114),
    [sym_sty_opcode] = ACTIONS(114),
    [sym_tax_opcode] = ACTIONS(114),
    [sym_tay_opcode] = ACTIONS(114),
    [sym_tsx_opcode] = ACTIONS(114),
    [sym_txa_opcode] = ACTIONS(114),
    [sym_tcs_opcode] = ACTIONS(114),
    [sym_tya_opcode] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_LT] = ACTIONS(114),
    [anon_sym_GT] = ACTIONS(114),
    [anon_sym_CARET] = ACTIONS(111),
    [anon_sym_STAR] = ACTIONS(111),
    [anon_sym_SLASH] = ACTIONS(111),
    [anon_sym_DOTMOD] = ACTIONS(111),
    [anon_sym_DOTBITAND] = ACTIONS(111),
    [anon_sym_AMP] = ACTIONS(114),
    [anon_sym_DOTBITXOR] = ACTIONS(111),
    [anon_sym_DOTSHL] = ACTIONS(111),
    [anon_sym_LT_LT] = ACTIONS(111),
    [anon_sym_DOTSHR] = ACTIONS(111),
    [anon_sym_GT_GT] = ACTIONS(111),
    [anon_sym_DOTBITOR] = ACTIONS(111),
    [anon_sym_PIPE] = ACTIONS(114),
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
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(117),
    [anon_sym_COMMA] = ACTIONS(117),
    [anon_sym_RPAREN] = ACTIONS(117),
    [sym_adc_opcode] = ACTIONS(119),
    [sym_and_opcode] = ACTIONS(119),
    [sym_asl_opcode] = ACTIONS(119),
    [sym_bcc_opcode] = ACTIONS(119),
    [sym_bcs_opcode] = ACTIONS(119),
    [sym_beq_opcode] = ACTIONS(119),
    [sym_bit_opcode] = ACTIONS(119),
    [sym_bmi_opcode] = ACTIONS(119),
    [sym_bne_opcode] = ACTIONS(119),
    [sym_bpl_opcode] = ACTIONS(119),
    [sym_brk_opcode] = ACTIONS(119),
    [sym_bvc_opcode] = ACTIONS(119),
    [sym_bvs_opcode] = ACTIONS(119),
    [sym_clc_opcode] = ACTIONS(119),
    [sym_cld_opcode] = ACTIONS(119),
    [sym_cli_opcode] = ACTIONS(119),
    [sym_clv_opcode] = ACTIONS(119),
    [sym_cmp_opcode] = ACTIONS(119),
    [sym_cpx_opcode] = ACTIONS(119),
    [sym_cpy_opcode] = ACTIONS(119),
    [sym_dec_opcode] = ACTIONS(119),
    [sym_dex_opcode] = ACTIONS(119),
    [sym_dey_opcode] = ACTIONS(119),
    [sym_eor_opcode] = ACTIONS(119),
    [sym_inc_opcode] = ACTIONS(119),
    [sym_inx_opcode] = ACTIONS(119),
    [sym_iny_opcode] = ACTIONS(119),
    [sym_jmp_opcode] = ACTIONS(119),
    [sym_jsr_opcode] = ACTIONS(119),
    [sym_lda_opcode] = ACTIONS(119),
    [sym_ldx_opcode] = ACTIONS(119),
    [sym_ldy_opcode] = ACTIONS(119),
    [sym_lsr_opcode] = ACTIONS(119),
    [sym_nop_opcode] = ACTIONS(119),
    [sym_ora_opcode] = ACTIONS(119),
    [sym_pha_opcode] = ACTIONS(119),
    [sym_php_opcode] = ACTIONS(119),
    [sym_pla_opcode] = ACTIONS(119),
    [sym_plp_opcode] = ACTIONS(119),
    [sym_rol_opcode] = ACTIONS(119),
    [sym_ror_opcode] = ACTIONS(119),
    [sym_rti_opcode] = ACTIONS(119),
    [sym_rts_opcode] = ACTIONS(119),
    [sym_sbc_opcode] = ACTIONS(119),
    [sym_sec_opcode] = ACTIONS(119),
    [sym_sed_opcode] = ACTIONS(119),
    [sym_sei_opcode] = ACTIONS(119),
    [sym_sta_opcode] = ACTIONS(119),
    [sym_stx_opcode] = ACTIONS(119),
    [sym_sty_opcode] = ACTIONS(119),
    [sym_tax_opcode] = ACTIONS(119),
    [sym_tay_opcode] = ACTIONS(119),
    [sym_tsx_opcode] = ACTIONS(119),
    [sym_txa_opcode] = ACTIONS(119),
    [sym_tcs_opcode] = ACTIONS(119),
    [sym_tya_opcode] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_LT] = ACTIONS(119),
    [anon_sym_GT] = ACTIONS(119),
    [anon_sym_CARET] = ACTIONS(117),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(117),
    [anon_sym_DOTMOD] = ACTIONS(117),
    [anon_sym_DOTBITAND] = ACTIONS(117),
    [anon_sym_AMP] = ACTIONS(119),
    [anon_sym_DOTBITXOR] = ACTIONS(117),
    [anon_sym_DOTSHL] = ACTIONS(117),
    [anon_sym_LT_LT] = ACTIONS(117),
    [anon_sym_DOTSHR] = ACTIONS(117),
    [anon_sym_GT_GT] = ACTIONS(117),
    [anon_sym_DOTBITOR] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(119),
    [anon_sym_EQ] = ACTIONS(117),
    [anon_sym_LT_GT] = ACTIONS(117),
    [anon_sym_LT_EQ] = ACTIONS(117),
    [anon_sym_GT_EQ] = ACTIONS(117),
    [anon_sym_DOTAND] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(117),
    [anon_sym_DOTXOR] = ACTIONS(117),
    [anon_sym_DOTOR] = ACTIONS(117),
    [anon_sym_PIPE_PIPE] = ACTIONS(117),
    [sym_a16_ctrl_cmd] = ACTIONS(117),
    [sym_a8_ctrl_cmd] = ACTIONS(117),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(117),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(117),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(117),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(117),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(117),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(117),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(121),
    [anon_sym_COMMA] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(121),
    [sym_adc_opcode] = ACTIONS(123),
    [sym_and_opcode] = ACTIONS(123),
    [sym_asl_opcode] = ACTIONS(123),
    [sym_bcc_opcode] = ACTIONS(123),
    [sym_bcs_opcode] = ACTIONS(123),
    [sym_beq_opcode] = ACTIONS(123),
    [sym_bit_opcode] = ACTIONS(123),
    [sym_bmi_opcode] = ACTIONS(123),
    [sym_bne_opcode] = ACTIONS(123),
    [sym_bpl_opcode] = ACTIONS(123),
    [sym_brk_opcode] = ACTIONS(123),
    [sym_bvc_opcode] = ACTIONS(123),
    [sym_bvs_opcode] = ACTIONS(123),
    [sym_clc_opcode] = ACTIONS(123),
    [sym_cld_opcode] = ACTIONS(123),
    [sym_cli_opcode] = ACTIONS(123),
    [sym_clv_opcode] = ACTIONS(123),
    [sym_cmp_opcode] = ACTIONS(123),
    [sym_cpx_opcode] = ACTIONS(123),
    [sym_cpy_opcode] = ACTIONS(123),
    [sym_dec_opcode] = ACTIONS(123),
    [sym_dex_opcode] = ACTIONS(123),
    [sym_dey_opcode] = ACTIONS(123),
    [sym_eor_opcode] = ACTIONS(123),
    [sym_inc_opcode] = ACTIONS(123),
    [sym_inx_opcode] = ACTIONS(123),
    [sym_iny_opcode] = ACTIONS(123),
    [sym_jmp_opcode] = ACTIONS(123),
    [sym_jsr_opcode] = ACTIONS(123),
    [sym_lda_opcode] = ACTIONS(123),
    [sym_ldx_opcode] = ACTIONS(123),
    [sym_ldy_opcode] = ACTIONS(123),
    [sym_lsr_opcode] = ACTIONS(123),
    [sym_nop_opcode] = ACTIONS(123),
    [sym_ora_opcode] = ACTIONS(123),
    [sym_pha_opcode] = ACTIONS(123),
    [sym_php_opcode] = ACTIONS(123),
    [sym_pla_opcode] = ACTIONS(123),
    [sym_plp_opcode] = ACTIONS(123),
    [sym_rol_opcode] = ACTIONS(123),
    [sym_ror_opcode] = ACTIONS(123),
    [sym_rti_opcode] = ACTIONS(123),
    [sym_rts_opcode] = ACTIONS(123),
    [sym_sbc_opcode] = ACTIONS(123),
    [sym_sec_opcode] = ACTIONS(123),
    [sym_sed_opcode] = ACTIONS(123),
    [sym_sei_opcode] = ACTIONS(123),
    [sym_sta_opcode] = ACTIONS(123),
    [sym_stx_opcode] = ACTIONS(123),
    [sym_sty_opcode] = ACTIONS(123),
    [sym_tax_opcode] = ACTIONS(123),
    [sym_tay_opcode] = ACTIONS(123),
    [sym_tsx_opcode] = ACTIONS(123),
    [sym_txa_opcode] = ACTIONS(123),
    [sym_tcs_opcode] = ACTIONS(123),
    [sym_tya_opcode] = ACTIONS(123),
    [anon_sym_PLUS] = ACTIONS(121),
    [anon_sym_DASH] = ACTIONS(121),
    [anon_sym_LT] = ACTIONS(123),
    [anon_sym_GT] = ACTIONS(123),
    [anon_sym_CARET] = ACTIONS(121),
    [anon_sym_STAR] = ACTIONS(121),
    [anon_sym_SLASH] = ACTIONS(121),
    [anon_sym_DOTMOD] = ACTIONS(121),
    [anon_sym_DOTBITAND] = ACTIONS(121),
    [anon_sym_AMP] = ACTIONS(123),
    [anon_sym_DOTBITXOR] = ACTIONS(121),
    [anon_sym_DOTSHL] = ACTIONS(121),
    [anon_sym_LT_LT] = ACTIONS(121),
    [anon_sym_DOTSHR] = ACTIONS(121),
    [anon_sym_GT_GT] = ACTIONS(121),
    [anon_sym_DOTBITOR] = ACTIONS(121),
    [anon_sym_PIPE] = ACTIONS(123),
    [anon_sym_EQ] = ACTIONS(121),
    [anon_sym_LT_GT] = ACTIONS(121),
    [anon_sym_LT_EQ] = ACTIONS(121),
    [anon_sym_GT_EQ] = ACTIONS(121),
    [anon_sym_DOTAND] = ACTIONS(121),
    [anon_sym_AMP_AMP] = ACTIONS(121),
    [anon_sym_DOTXOR] = ACTIONS(121),
    [anon_sym_DOTOR] = ACTIONS(121),
    [anon_sym_PIPE_PIPE] = ACTIONS(121),
    [sym_a16_ctrl_cmd] = ACTIONS(121),
    [sym_a8_ctrl_cmd] = ACTIONS(121),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(121),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(121),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(121),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(121),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(121),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(121),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(125),
    [anon_sym_COMMA] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(125),
    [sym_adc_opcode] = ACTIONS(127),
    [sym_and_opcode] = ACTIONS(127),
    [sym_asl_opcode] = ACTIONS(127),
    [sym_bcc_opcode] = ACTIONS(127),
    [sym_bcs_opcode] = ACTIONS(127),
    [sym_beq_opcode] = ACTIONS(127),
    [sym_bit_opcode] = ACTIONS(127),
    [sym_bmi_opcode] = ACTIONS(127),
    [sym_bne_opcode] = ACTIONS(127),
    [sym_bpl_opcode] = ACTIONS(127),
    [sym_brk_opcode] = ACTIONS(127),
    [sym_bvc_opcode] = ACTIONS(127),
    [sym_bvs_opcode] = ACTIONS(127),
    [sym_clc_opcode] = ACTIONS(127),
    [sym_cld_opcode] = ACTIONS(127),
    [sym_cli_opcode] = ACTIONS(127),
    [sym_clv_opcode] = ACTIONS(127),
    [sym_cmp_opcode] = ACTIONS(127),
    [sym_cpx_opcode] = ACTIONS(127),
    [sym_cpy_opcode] = ACTIONS(127),
    [sym_dec_opcode] = ACTIONS(127),
    [sym_dex_opcode] = ACTIONS(127),
    [sym_dey_opcode] = ACTIONS(127),
    [sym_eor_opcode] = ACTIONS(127),
    [sym_inc_opcode] = ACTIONS(127),
    [sym_inx_opcode] = ACTIONS(127),
    [sym_iny_opcode] = ACTIONS(127),
    [sym_jmp_opcode] = ACTIONS(127),
    [sym_jsr_opcode] = ACTIONS(127),
    [sym_lda_opcode] = ACTIONS(127),
    [sym_ldx_opcode] = ACTIONS(127),
    [sym_ldy_opcode] = ACTIONS(127),
    [sym_lsr_opcode] = ACTIONS(127),
    [sym_nop_opcode] = ACTIONS(127),
    [sym_ora_opcode] = ACTIONS(127),
    [sym_pha_opcode] = ACTIONS(127),
    [sym_php_opcode] = ACTIONS(127),
    [sym_pla_opcode] = ACTIONS(127),
    [sym_plp_opcode] = ACTIONS(127),
    [sym_rol_opcode] = ACTIONS(127),
    [sym_ror_opcode] = ACTIONS(127),
    [sym_rti_opcode] = ACTIONS(127),
    [sym_rts_opcode] = ACTIONS(127),
    [sym_sbc_opcode] = ACTIONS(127),
    [sym_sec_opcode] = ACTIONS(127),
    [sym_sed_opcode] = ACTIONS(127),
    [sym_sei_opcode] = ACTIONS(127),
    [sym_sta_opcode] = ACTIONS(127),
    [sym_stx_opcode] = ACTIONS(127),
    [sym_sty_opcode] = ACTIONS(127),
    [sym_tax_opcode] = ACTIONS(127),
    [sym_tay_opcode] = ACTIONS(127),
    [sym_tsx_opcode] = ACTIONS(127),
    [sym_txa_opcode] = ACTIONS(127),
    [sym_tcs_opcode] = ACTIONS(127),
    [sym_tya_opcode] = ACTIONS(127),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(127),
    [anon_sym_GT] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_DOTMOD] = ACTIONS(73),
    [anon_sym_DOTBITAND] = ACTIONS(75),
    [anon_sym_AMP] = ACTIONS(77),
    [anon_sym_DOTBITXOR] = ACTIONS(67),
    [anon_sym_DOTSHL] = ACTIONS(79),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_DOTSHR] = ACTIONS(81),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_DOTBITOR] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(125),
    [anon_sym_LT_GT] = ACTIONS(125),
    [anon_sym_LT_EQ] = ACTIONS(125),
    [anon_sym_GT_EQ] = ACTIONS(125),
    [anon_sym_DOTAND] = ACTIONS(125),
    [anon_sym_AMP_AMP] = ACTIONS(125),
    [anon_sym_DOTXOR] = ACTIONS(125),
    [anon_sym_DOTOR] = ACTIONS(125),
    [anon_sym_PIPE_PIPE] = ACTIONS(125),
    [sym_a16_ctrl_cmd] = ACTIONS(125),
    [sym_a8_ctrl_cmd] = ACTIONS(125),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(125),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(125),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(125),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(125),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(125),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(125),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(129),
    [anon_sym_COMMA] = ACTIONS(129),
    [anon_sym_RPAREN] = ACTIONS(129),
    [sym_adc_opcode] = ACTIONS(131),
    [sym_and_opcode] = ACTIONS(131),
    [sym_asl_opcode] = ACTIONS(131),
    [sym_bcc_opcode] = ACTIONS(131),
    [sym_bcs_opcode] = ACTIONS(131),
    [sym_beq_opcode] = ACTIONS(131),
    [sym_bit_opcode] = ACTIONS(131),
    [sym_bmi_opcode] = ACTIONS(131),
    [sym_bne_opcode] = ACTIONS(131),
    [sym_bpl_opcode] = ACTIONS(131),
    [sym_brk_opcode] = ACTIONS(131),
    [sym_bvc_opcode] = ACTIONS(131),
    [sym_bvs_opcode] = ACTIONS(131),
    [sym_clc_opcode] = ACTIONS(131),
    [sym_cld_opcode] = ACTIONS(131),
    [sym_cli_opcode] = ACTIONS(131),
    [sym_clv_opcode] = ACTIONS(131),
    [sym_cmp_opcode] = ACTIONS(131),
    [sym_cpx_opcode] = ACTIONS(131),
    [sym_cpy_opcode] = ACTIONS(131),
    [sym_dec_opcode] = ACTIONS(131),
    [sym_dex_opcode] = ACTIONS(131),
    [sym_dey_opcode] = ACTIONS(131),
    [sym_eor_opcode] = ACTIONS(131),
    [sym_inc_opcode] = ACTIONS(131),
    [sym_inx_opcode] = ACTIONS(131),
    [sym_iny_opcode] = ACTIONS(131),
    [sym_jmp_opcode] = ACTIONS(131),
    [sym_jsr_opcode] = ACTIONS(131),
    [sym_lda_opcode] = ACTIONS(131),
    [sym_ldx_opcode] = ACTIONS(131),
    [sym_ldy_opcode] = ACTIONS(131),
    [sym_lsr_opcode] = ACTIONS(131),
    [sym_nop_opcode] = ACTIONS(131),
    [sym_ora_opcode] = ACTIONS(131),
    [sym_pha_opcode] = ACTIONS(131),
    [sym_php_opcode] = ACTIONS(131),
    [sym_pla_opcode] = ACTIONS(131),
    [sym_plp_opcode] = ACTIONS(131),
    [sym_rol_opcode] = ACTIONS(131),
    [sym_ror_opcode] = ACTIONS(131),
    [sym_rti_opcode] = ACTIONS(131),
    [sym_rts_opcode] = ACTIONS(131),
    [sym_sbc_opcode] = ACTIONS(131),
    [sym_sec_opcode] = ACTIONS(131),
    [sym_sed_opcode] = ACTIONS(131),
    [sym_sei_opcode] = ACTIONS(131),
    [sym_sta_opcode] = ACTIONS(131),
    [sym_stx_opcode] = ACTIONS(131),
    [sym_sty_opcode] = ACTIONS(131),
    [sym_tax_opcode] = ACTIONS(131),
    [sym_tay_opcode] = ACTIONS(131),
    [sym_tsx_opcode] = ACTIONS(131),
    [sym_txa_opcode] = ACTIONS(131),
    [sym_tcs_opcode] = ACTIONS(131),
    [sym_tya_opcode] = ACTIONS(131),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_CARET] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_DOTMOD] = ACTIONS(73),
    [anon_sym_DOTBITAND] = ACTIONS(75),
    [anon_sym_AMP] = ACTIONS(77),
    [anon_sym_DOTBITXOR] = ACTIONS(67),
    [anon_sym_DOTSHL] = ACTIONS(79),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_DOTSHR] = ACTIONS(81),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_DOTBITOR] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(129),
    [anon_sym_LT_GT] = ACTIONS(129),
    [anon_sym_LT_EQ] = ACTIONS(129),
    [anon_sym_GT_EQ] = ACTIONS(129),
    [anon_sym_DOTAND] = ACTIONS(129),
    [anon_sym_AMP_AMP] = ACTIONS(129),
    [anon_sym_DOTXOR] = ACTIONS(129),
    [anon_sym_DOTOR] = ACTIONS(129),
    [anon_sym_PIPE_PIPE] = ACTIONS(129),
    [sym_a16_ctrl_cmd] = ACTIONS(129),
    [sym_a8_ctrl_cmd] = ACTIONS(129),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(129),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(129),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(129),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(129),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(129),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(129),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(133),
    [anon_sym_COMMA] = ACTIONS(133),
    [anon_sym_RPAREN] = ACTIONS(133),
    [sym_adc_opcode] = ACTIONS(135),
    [sym_and_opcode] = ACTIONS(135),
    [sym_asl_opcode] = ACTIONS(135),
    [sym_bcc_opcode] = ACTIONS(135),
    [sym_bcs_opcode] = ACTIONS(135),
    [sym_beq_opcode] = ACTIONS(135),
    [sym_bit_opcode] = ACTIONS(135),
    [sym_bmi_opcode] = ACTIONS(135),
    [sym_bne_opcode] = ACTIONS(135),
    [sym_bpl_opcode] = ACTIONS(135),
    [sym_brk_opcode] = ACTIONS(135),
    [sym_bvc_opcode] = ACTIONS(135),
    [sym_bvs_opcode] = ACTIONS(135),
    [sym_clc_opcode] = ACTIONS(135),
    [sym_cld_opcode] = ACTIONS(135),
    [sym_cli_opcode] = ACTIONS(135),
    [sym_clv_opcode] = ACTIONS(135),
    [sym_cmp_opcode] = ACTIONS(135),
    [sym_cpx_opcode] = ACTIONS(135),
    [sym_cpy_opcode] = ACTIONS(135),
    [sym_dec_opcode] = ACTIONS(135),
    [sym_dex_opcode] = ACTIONS(135),
    [sym_dey_opcode] = ACTIONS(135),
    [sym_eor_opcode] = ACTIONS(135),
    [sym_inc_opcode] = ACTIONS(135),
    [sym_inx_opcode] = ACTIONS(135),
    [sym_iny_opcode] = ACTIONS(135),
    [sym_jmp_opcode] = ACTIONS(135),
    [sym_jsr_opcode] = ACTIONS(135),
    [sym_lda_opcode] = ACTIONS(135),
    [sym_ldx_opcode] = ACTIONS(135),
    [sym_ldy_opcode] = ACTIONS(135),
    [sym_lsr_opcode] = ACTIONS(135),
    [sym_nop_opcode] = ACTIONS(135),
    [sym_ora_opcode] = ACTIONS(135),
    [sym_pha_opcode] = ACTIONS(135),
    [sym_php_opcode] = ACTIONS(135),
    [sym_pla_opcode] = ACTIONS(135),
    [sym_plp_opcode] = ACTIONS(135),
    [sym_rol_opcode] = ACTIONS(135),
    [sym_ror_opcode] = ACTIONS(135),
    [sym_rti_opcode] = ACTIONS(135),
    [sym_rts_opcode] = ACTIONS(135),
    [sym_sbc_opcode] = ACTIONS(135),
    [sym_sec_opcode] = ACTIONS(135),
    [sym_sed_opcode] = ACTIONS(135),
    [sym_sei_opcode] = ACTIONS(135),
    [sym_sta_opcode] = ACTIONS(135),
    [sym_stx_opcode] = ACTIONS(135),
    [sym_sty_opcode] = ACTIONS(135),
    [sym_tax_opcode] = ACTIONS(135),
    [sym_tay_opcode] = ACTIONS(135),
    [sym_tsx_opcode] = ACTIONS(135),
    [sym_txa_opcode] = ACTIONS(135),
    [sym_tcs_opcode] = ACTIONS(135),
    [sym_tya_opcode] = ACTIONS(135),
    [anon_sym_PLUS] = ACTIONS(133),
    [anon_sym_DASH] = ACTIONS(133),
    [anon_sym_LT] = ACTIONS(135),
    [anon_sym_GT] = ACTIONS(135),
    [anon_sym_CARET] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_DOTMOD] = ACTIONS(73),
    [anon_sym_DOTBITAND] = ACTIONS(75),
    [anon_sym_AMP] = ACTIONS(77),
    [anon_sym_DOTBITXOR] = ACTIONS(67),
    [anon_sym_DOTSHL] = ACTIONS(79),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_DOTSHR] = ACTIONS(81),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_DOTBITOR] = ACTIONS(133),
    [anon_sym_PIPE] = ACTIONS(135),
    [anon_sym_EQ] = ACTIONS(133),
    [anon_sym_LT_GT] = ACTIONS(133),
    [anon_sym_LT_EQ] = ACTIONS(133),
    [anon_sym_GT_EQ] = ACTIONS(133),
    [anon_sym_DOTAND] = ACTIONS(133),
    [anon_sym_AMP_AMP] = ACTIONS(133),
    [anon_sym_DOTXOR] = ACTIONS(133),
    [anon_sym_DOTOR] = ACTIONS(133),
    [anon_sym_PIPE_PIPE] = ACTIONS(133),
    [sym_a16_ctrl_cmd] = ACTIONS(133),
    [sym_a8_ctrl_cmd] = ACTIONS(133),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(133),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(133),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(133),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(133),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(133),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(133),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(137),
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(137),
    [sym_adc_opcode] = ACTIONS(139),
    [sym_and_opcode] = ACTIONS(139),
    [sym_asl_opcode] = ACTIONS(139),
    [sym_bcc_opcode] = ACTIONS(139),
    [sym_bcs_opcode] = ACTIONS(139),
    [sym_beq_opcode] = ACTIONS(139),
    [sym_bit_opcode] = ACTIONS(139),
    [sym_bmi_opcode] = ACTIONS(139),
    [sym_bne_opcode] = ACTIONS(139),
    [sym_bpl_opcode] = ACTIONS(139),
    [sym_brk_opcode] = ACTIONS(139),
    [sym_bvc_opcode] = ACTIONS(139),
    [sym_bvs_opcode] = ACTIONS(139),
    [sym_clc_opcode] = ACTIONS(139),
    [sym_cld_opcode] = ACTIONS(139),
    [sym_cli_opcode] = ACTIONS(139),
    [sym_clv_opcode] = ACTIONS(139),
    [sym_cmp_opcode] = ACTIONS(139),
    [sym_cpx_opcode] = ACTIONS(139),
    [sym_cpy_opcode] = ACTIONS(139),
    [sym_dec_opcode] = ACTIONS(139),
    [sym_dex_opcode] = ACTIONS(139),
    [sym_dey_opcode] = ACTIONS(139),
    [sym_eor_opcode] = ACTIONS(139),
    [sym_inc_opcode] = ACTIONS(139),
    [sym_inx_opcode] = ACTIONS(139),
    [sym_iny_opcode] = ACTIONS(139),
    [sym_jmp_opcode] = ACTIONS(139),
    [sym_jsr_opcode] = ACTIONS(139),
    [sym_lda_opcode] = ACTIONS(139),
    [sym_ldx_opcode] = ACTIONS(139),
    [sym_ldy_opcode] = ACTIONS(139),
    [sym_lsr_opcode] = ACTIONS(139),
    [sym_nop_opcode] = ACTIONS(139),
    [sym_ora_opcode] = ACTIONS(139),
    [sym_pha_opcode] = ACTIONS(139),
    [sym_php_opcode] = ACTIONS(139),
    [sym_pla_opcode] = ACTIONS(139),
    [sym_plp_opcode] = ACTIONS(139),
    [sym_rol_opcode] = ACTIONS(139),
    [sym_ror_opcode] = ACTIONS(139),
    [sym_rti_opcode] = ACTIONS(139),
    [sym_rts_opcode] = ACTIONS(139),
    [sym_sbc_opcode] = ACTIONS(139),
    [sym_sec_opcode] = ACTIONS(139),
    [sym_sed_opcode] = ACTIONS(139),
    [sym_sei_opcode] = ACTIONS(139),
    [sym_sta_opcode] = ACTIONS(139),
    [sym_stx_opcode] = ACTIONS(139),
    [sym_sty_opcode] = ACTIONS(139),
    [sym_tax_opcode] = ACTIONS(139),
    [sym_tay_opcode] = ACTIONS(139),
    [sym_tsx_opcode] = ACTIONS(139),
    [sym_txa_opcode] = ACTIONS(139),
    [sym_tcs_opcode] = ACTIONS(139),
    [sym_tya_opcode] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(137),
    [anon_sym_LT] = ACTIONS(139),
    [anon_sym_GT] = ACTIONS(139),
    [anon_sym_CARET] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_DOTMOD] = ACTIONS(73),
    [anon_sym_DOTBITAND] = ACTIONS(75),
    [anon_sym_AMP] = ACTIONS(77),
    [anon_sym_DOTBITXOR] = ACTIONS(67),
    [anon_sym_DOTSHL] = ACTIONS(79),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_DOTSHR] = ACTIONS(81),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_DOTBITOR] = ACTIONS(137),
    [anon_sym_PIPE] = ACTIONS(139),
    [anon_sym_EQ] = ACTIONS(137),
    [anon_sym_LT_GT] = ACTIONS(137),
    [anon_sym_LT_EQ] = ACTIONS(137),
    [anon_sym_GT_EQ] = ACTIONS(137),
    [anon_sym_DOTAND] = ACTIONS(137),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_DOTXOR] = ACTIONS(137),
    [anon_sym_DOTOR] = ACTIONS(137),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [sym_a16_ctrl_cmd] = ACTIONS(137),
    [sym_a8_ctrl_cmd] = ACTIONS(137),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(137),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(137),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(137),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(137),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(137),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(137),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(141),
    [sym_adc_opcode] = ACTIONS(143),
    [sym_and_opcode] = ACTIONS(143),
    [sym_asl_opcode] = ACTIONS(143),
    [sym_bcc_opcode] = ACTIONS(143),
    [sym_bcs_opcode] = ACTIONS(143),
    [sym_beq_opcode] = ACTIONS(143),
    [sym_bit_opcode] = ACTIONS(143),
    [sym_bmi_opcode] = ACTIONS(143),
    [sym_bne_opcode] = ACTIONS(143),
    [sym_bpl_opcode] = ACTIONS(143),
    [sym_brk_opcode] = ACTIONS(143),
    [sym_bvc_opcode] = ACTIONS(143),
    [sym_bvs_opcode] = ACTIONS(143),
    [sym_clc_opcode] = ACTIONS(143),
    [sym_cld_opcode] = ACTIONS(143),
    [sym_cli_opcode] = ACTIONS(143),
    [sym_clv_opcode] = ACTIONS(143),
    [sym_cmp_opcode] = ACTIONS(143),
    [sym_cpx_opcode] = ACTIONS(143),
    [sym_cpy_opcode] = ACTIONS(143),
    [sym_dec_opcode] = ACTIONS(143),
    [sym_dex_opcode] = ACTIONS(143),
    [sym_dey_opcode] = ACTIONS(143),
    [sym_eor_opcode] = ACTIONS(143),
    [sym_inc_opcode] = ACTIONS(143),
    [sym_inx_opcode] = ACTIONS(143),
    [sym_iny_opcode] = ACTIONS(143),
    [sym_jmp_opcode] = ACTIONS(143),
    [sym_jsr_opcode] = ACTIONS(143),
    [sym_lda_opcode] = ACTIONS(143),
    [sym_ldx_opcode] = ACTIONS(143),
    [sym_ldy_opcode] = ACTIONS(143),
    [sym_lsr_opcode] = ACTIONS(143),
    [sym_nop_opcode] = ACTIONS(143),
    [sym_ora_opcode] = ACTIONS(143),
    [sym_pha_opcode] = ACTIONS(143),
    [sym_php_opcode] = ACTIONS(143),
    [sym_pla_opcode] = ACTIONS(143),
    [sym_plp_opcode] = ACTIONS(143),
    [sym_rol_opcode] = ACTIONS(143),
    [sym_ror_opcode] = ACTIONS(143),
    [sym_rti_opcode] = ACTIONS(143),
    [sym_rts_opcode] = ACTIONS(143),
    [sym_sbc_opcode] = ACTIONS(143),
    [sym_sec_opcode] = ACTIONS(143),
    [sym_sed_opcode] = ACTIONS(143),
    [sym_sei_opcode] = ACTIONS(143),
    [sym_sta_opcode] = ACTIONS(143),
    [sym_stx_opcode] = ACTIONS(143),
    [sym_sty_opcode] = ACTIONS(143),
    [sym_tax_opcode] = ACTIONS(143),
    [sym_tay_opcode] = ACTIONS(143),
    [sym_tsx_opcode] = ACTIONS(143),
    [sym_txa_opcode] = ACTIONS(143),
    [sym_tcs_opcode] = ACTIONS(143),
    [sym_tya_opcode] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(141),
    [anon_sym_DASH] = ACTIONS(141),
    [anon_sym_LT] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(143),
    [anon_sym_CARET] = ACTIONS(141),
    [anon_sym_STAR] = ACTIONS(141),
    [anon_sym_SLASH] = ACTIONS(141),
    [anon_sym_DOTMOD] = ACTIONS(141),
    [anon_sym_DOTBITAND] = ACTIONS(141),
    [anon_sym_AMP] = ACTIONS(143),
    [anon_sym_DOTBITXOR] = ACTIONS(141),
    [anon_sym_DOTSHL] = ACTIONS(141),
    [anon_sym_LT_LT] = ACTIONS(141),
    [anon_sym_DOTSHR] = ACTIONS(141),
    [anon_sym_GT_GT] = ACTIONS(141),
    [anon_sym_DOTBITOR] = ACTIONS(141),
    [anon_sym_PIPE] = ACTIONS(143),
    [anon_sym_EQ] = ACTIONS(141),
    [anon_sym_LT_GT] = ACTIONS(141),
    [anon_sym_LT_EQ] = ACTIONS(141),
    [anon_sym_GT_EQ] = ACTIONS(141),
    [anon_sym_DOTAND] = ACTIONS(141),
    [anon_sym_AMP_AMP] = ACTIONS(141),
    [anon_sym_DOTXOR] = ACTIONS(141),
    [anon_sym_DOTOR] = ACTIONS(141),
    [anon_sym_PIPE_PIPE] = ACTIONS(141),
    [sym_a16_ctrl_cmd] = ACTIONS(141),
    [sym_a8_ctrl_cmd] = ACTIONS(141),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(141),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(141),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(141),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(141),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(141),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(141),
  },
  [19] = {
    [aux_sym_bankbytes_ctrl_cmd_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(145),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(147),
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
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_CARET] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_DOTMOD] = ACTIONS(73),
    [anon_sym_DOTBITAND] = ACTIONS(75),
    [anon_sym_AMP] = ACTIONS(77),
    [anon_sym_DOTBITXOR] = ACTIONS(67),
    [anon_sym_DOTSHL] = ACTIONS(79),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_DOTSHR] = ACTIONS(81),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_DOTBITOR] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(155),
    [anon_sym_LT_GT] = ACTIONS(157),
    [anon_sym_LT_EQ] = ACTIONS(159),
    [anon_sym_GT_EQ] = ACTIONS(161),
    [anon_sym_DOTAND] = ACTIONS(163),
    [anon_sym_AMP_AMP] = ACTIONS(163),
    [anon_sym_DOTXOR] = ACTIONS(165),
    [anon_sym_DOTOR] = ACTIONS(167),
    [anon_sym_PIPE_PIPE] = ACTIONS(167),
    [sym_a16_ctrl_cmd] = ACTIONS(145),
    [sym_a8_ctrl_cmd] = ACTIONS(145),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(145),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(145),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(145),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(145),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(145),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(145),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(169),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_RPAREN] = ACTIONS(169),
    [sym_adc_opcode] = ACTIONS(171),
    [sym_and_opcode] = ACTIONS(171),
    [sym_asl_opcode] = ACTIONS(171),
    [sym_bcc_opcode] = ACTIONS(171),
    [sym_bcs_opcode] = ACTIONS(171),
    [sym_beq_opcode] = ACTIONS(171),
    [sym_bit_opcode] = ACTIONS(171),
    [sym_bmi_opcode] = ACTIONS(171),
    [sym_bne_opcode] = ACTIONS(171),
    [sym_bpl_opcode] = ACTIONS(171),
    [sym_brk_opcode] = ACTIONS(171),
    [sym_bvc_opcode] = ACTIONS(171),
    [sym_bvs_opcode] = ACTIONS(171),
    [sym_clc_opcode] = ACTIONS(171),
    [sym_cld_opcode] = ACTIONS(171),
    [sym_cli_opcode] = ACTIONS(171),
    [sym_clv_opcode] = ACTIONS(171),
    [sym_cmp_opcode] = ACTIONS(171),
    [sym_cpx_opcode] = ACTIONS(171),
    [sym_cpy_opcode] = ACTIONS(171),
    [sym_dec_opcode] = ACTIONS(171),
    [sym_dex_opcode] = ACTIONS(171),
    [sym_dey_opcode] = ACTIONS(171),
    [sym_eor_opcode] = ACTIONS(171),
    [sym_inc_opcode] = ACTIONS(171),
    [sym_inx_opcode] = ACTIONS(171),
    [sym_iny_opcode] = ACTIONS(171),
    [sym_jmp_opcode] = ACTIONS(171),
    [sym_jsr_opcode] = ACTIONS(171),
    [sym_lda_opcode] = ACTIONS(171),
    [sym_ldx_opcode] = ACTIONS(171),
    [sym_ldy_opcode] = ACTIONS(171),
    [sym_lsr_opcode] = ACTIONS(171),
    [sym_nop_opcode] = ACTIONS(171),
    [sym_ora_opcode] = ACTIONS(171),
    [sym_pha_opcode] = ACTIONS(171),
    [sym_php_opcode] = ACTIONS(171),
    [sym_pla_opcode] = ACTIONS(171),
    [sym_plp_opcode] = ACTIONS(171),
    [sym_rol_opcode] = ACTIONS(171),
    [sym_ror_opcode] = ACTIONS(171),
    [sym_rti_opcode] = ACTIONS(171),
    [sym_rts_opcode] = ACTIONS(171),
    [sym_sbc_opcode] = ACTIONS(171),
    [sym_sec_opcode] = ACTIONS(171),
    [sym_sed_opcode] = ACTIONS(171),
    [sym_sei_opcode] = ACTIONS(171),
    [sym_sta_opcode] = ACTIONS(171),
    [sym_stx_opcode] = ACTIONS(171),
    [sym_sty_opcode] = ACTIONS(171),
    [sym_tax_opcode] = ACTIONS(171),
    [sym_tay_opcode] = ACTIONS(171),
    [sym_tsx_opcode] = ACTIONS(171),
    [sym_txa_opcode] = ACTIONS(171),
    [sym_tcs_opcode] = ACTIONS(171),
    [sym_tya_opcode] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(169),
    [anon_sym_DASH] = ACTIONS(169),
    [anon_sym_LT] = ACTIONS(171),
    [anon_sym_GT] = ACTIONS(171),
    [anon_sym_CARET] = ACTIONS(169),
    [anon_sym_STAR] = ACTIONS(169),
    [anon_sym_SLASH] = ACTIONS(169),
    [anon_sym_DOTMOD] = ACTIONS(169),
    [anon_sym_DOTBITAND] = ACTIONS(169),
    [anon_sym_AMP] = ACTIONS(171),
    [anon_sym_DOTBITXOR] = ACTIONS(169),
    [anon_sym_DOTSHL] = ACTIONS(169),
    [anon_sym_LT_LT] = ACTIONS(169),
    [anon_sym_DOTSHR] = ACTIONS(169),
    [anon_sym_GT_GT] = ACTIONS(169),
    [anon_sym_DOTBITOR] = ACTIONS(169),
    [anon_sym_PIPE] = ACTIONS(171),
    [anon_sym_EQ] = ACTIONS(169),
    [anon_sym_LT_GT] = ACTIONS(169),
    [anon_sym_LT_EQ] = ACTIONS(169),
    [anon_sym_GT_EQ] = ACTIONS(169),
    [anon_sym_DOTAND] = ACTIONS(169),
    [anon_sym_AMP_AMP] = ACTIONS(169),
    [anon_sym_DOTXOR] = ACTIONS(169),
    [anon_sym_DOTOR] = ACTIONS(169),
    [anon_sym_PIPE_PIPE] = ACTIONS(169),
    [sym_a16_ctrl_cmd] = ACTIONS(169),
    [sym_a8_ctrl_cmd] = ACTIONS(169),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(169),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(169),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(169),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(169),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(169),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(169),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [sym_adc_opcode] = ACTIONS(175),
    [sym_and_opcode] = ACTIONS(175),
    [sym_asl_opcode] = ACTIONS(175),
    [sym_bcc_opcode] = ACTIONS(175),
    [sym_bcs_opcode] = ACTIONS(175),
    [sym_beq_opcode] = ACTIONS(175),
    [sym_bit_opcode] = ACTIONS(175),
    [sym_bmi_opcode] = ACTIONS(175),
    [sym_bne_opcode] = ACTIONS(175),
    [sym_bpl_opcode] = ACTIONS(175),
    [sym_brk_opcode] = ACTIONS(175),
    [sym_bvc_opcode] = ACTIONS(175),
    [sym_bvs_opcode] = ACTIONS(175),
    [sym_clc_opcode] = ACTIONS(175),
    [sym_cld_opcode] = ACTIONS(175),
    [sym_cli_opcode] = ACTIONS(175),
    [sym_clv_opcode] = ACTIONS(175),
    [sym_cmp_opcode] = ACTIONS(175),
    [sym_cpx_opcode] = ACTIONS(175),
    [sym_cpy_opcode] = ACTIONS(175),
    [sym_dec_opcode] = ACTIONS(175),
    [sym_dex_opcode] = ACTIONS(175),
    [sym_dey_opcode] = ACTIONS(175),
    [sym_eor_opcode] = ACTIONS(175),
    [sym_inc_opcode] = ACTIONS(175),
    [sym_inx_opcode] = ACTIONS(175),
    [sym_iny_opcode] = ACTIONS(175),
    [sym_jmp_opcode] = ACTIONS(175),
    [sym_jsr_opcode] = ACTIONS(175),
    [sym_lda_opcode] = ACTIONS(175),
    [sym_ldx_opcode] = ACTIONS(175),
    [sym_ldy_opcode] = ACTIONS(175),
    [sym_lsr_opcode] = ACTIONS(175),
    [sym_nop_opcode] = ACTIONS(175),
    [sym_ora_opcode] = ACTIONS(175),
    [sym_pha_opcode] = ACTIONS(175),
    [sym_php_opcode] = ACTIONS(175),
    [sym_pla_opcode] = ACTIONS(175),
    [sym_plp_opcode] = ACTIONS(175),
    [sym_rol_opcode] = ACTIONS(175),
    [sym_ror_opcode] = ACTIONS(175),
    [sym_rti_opcode] = ACTIONS(175),
    [sym_rts_opcode] = ACTIONS(175),
    [sym_sbc_opcode] = ACTIONS(175),
    [sym_sec_opcode] = ACTIONS(175),
    [sym_sed_opcode] = ACTIONS(175),
    [sym_sei_opcode] = ACTIONS(175),
    [sym_sta_opcode] = ACTIONS(175),
    [sym_stx_opcode] = ACTIONS(175),
    [sym_sty_opcode] = ACTIONS(175),
    [sym_tax_opcode] = ACTIONS(175),
    [sym_tay_opcode] = ACTIONS(175),
    [sym_tsx_opcode] = ACTIONS(175),
    [sym_txa_opcode] = ACTIONS(175),
    [sym_tcs_opcode] = ACTIONS(175),
    [sym_tya_opcode] = ACTIONS(175),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(175),
    [anon_sym_GT] = ACTIONS(175),
    [anon_sym_CARET] = ACTIONS(173),
    [anon_sym_STAR] = ACTIONS(173),
    [anon_sym_SLASH] = ACTIONS(173),
    [anon_sym_DOTMOD] = ACTIONS(173),
    [anon_sym_DOTBITAND] = ACTIONS(173),
    [anon_sym_AMP] = ACTIONS(175),
    [anon_sym_DOTBITXOR] = ACTIONS(173),
    [anon_sym_DOTSHL] = ACTIONS(173),
    [anon_sym_LT_LT] = ACTIONS(173),
    [anon_sym_DOTSHR] = ACTIONS(173),
    [anon_sym_GT_GT] = ACTIONS(173),
    [anon_sym_DOTBITOR] = ACTIONS(173),
    [anon_sym_PIPE] = ACTIONS(175),
    [anon_sym_EQ] = ACTIONS(173),
    [anon_sym_LT_GT] = ACTIONS(173),
    [anon_sym_LT_EQ] = ACTIONS(173),
    [anon_sym_GT_EQ] = ACTIONS(173),
    [anon_sym_DOTAND] = ACTIONS(173),
    [anon_sym_AMP_AMP] = ACTIONS(173),
    [anon_sym_DOTXOR] = ACTIONS(173),
    [anon_sym_DOTOR] = ACTIONS(173),
    [anon_sym_PIPE_PIPE] = ACTIONS(173),
    [sym_a16_ctrl_cmd] = ACTIONS(173),
    [sym_a8_ctrl_cmd] = ACTIONS(173),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(173),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(173),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(173),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(173),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(173),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(173),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [sym_adc_opcode] = ACTIONS(179),
    [sym_and_opcode] = ACTIONS(179),
    [sym_asl_opcode] = ACTIONS(179),
    [sym_bcc_opcode] = ACTIONS(179),
    [sym_bcs_opcode] = ACTIONS(179),
    [sym_beq_opcode] = ACTIONS(179),
    [sym_bit_opcode] = ACTIONS(179),
    [sym_bmi_opcode] = ACTIONS(179),
    [sym_bne_opcode] = ACTIONS(179),
    [sym_bpl_opcode] = ACTIONS(179),
    [sym_brk_opcode] = ACTIONS(179),
    [sym_bvc_opcode] = ACTIONS(179),
    [sym_bvs_opcode] = ACTIONS(179),
    [sym_clc_opcode] = ACTIONS(179),
    [sym_cld_opcode] = ACTIONS(179),
    [sym_cli_opcode] = ACTIONS(179),
    [sym_clv_opcode] = ACTIONS(179),
    [sym_cmp_opcode] = ACTIONS(179),
    [sym_cpx_opcode] = ACTIONS(179),
    [sym_cpy_opcode] = ACTIONS(179),
    [sym_dec_opcode] = ACTIONS(179),
    [sym_dex_opcode] = ACTIONS(179),
    [sym_dey_opcode] = ACTIONS(179),
    [sym_eor_opcode] = ACTIONS(179),
    [sym_inc_opcode] = ACTIONS(179),
    [sym_inx_opcode] = ACTIONS(179),
    [sym_iny_opcode] = ACTIONS(179),
    [sym_jmp_opcode] = ACTIONS(179),
    [sym_jsr_opcode] = ACTIONS(179),
    [sym_lda_opcode] = ACTIONS(179),
    [sym_ldx_opcode] = ACTIONS(179),
    [sym_ldy_opcode] = ACTIONS(179),
    [sym_lsr_opcode] = ACTIONS(179),
    [sym_nop_opcode] = ACTIONS(179),
    [sym_ora_opcode] = ACTIONS(179),
    [sym_pha_opcode] = ACTIONS(179),
    [sym_php_opcode] = ACTIONS(179),
    [sym_pla_opcode] = ACTIONS(179),
    [sym_plp_opcode] = ACTIONS(179),
    [sym_rol_opcode] = ACTIONS(179),
    [sym_ror_opcode] = ACTIONS(179),
    [sym_rti_opcode] = ACTIONS(179),
    [sym_rts_opcode] = ACTIONS(179),
    [sym_sbc_opcode] = ACTIONS(179),
    [sym_sec_opcode] = ACTIONS(179),
    [sym_sed_opcode] = ACTIONS(179),
    [sym_sei_opcode] = ACTIONS(179),
    [sym_sta_opcode] = ACTIONS(179),
    [sym_stx_opcode] = ACTIONS(179),
    [sym_sty_opcode] = ACTIONS(179),
    [sym_tax_opcode] = ACTIONS(179),
    [sym_tay_opcode] = ACTIONS(179),
    [sym_tsx_opcode] = ACTIONS(179),
    [sym_txa_opcode] = ACTIONS(179),
    [sym_tcs_opcode] = ACTIONS(179),
    [sym_tya_opcode] = ACTIONS(179),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_CARET] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_DOTMOD] = ACTIONS(73),
    [anon_sym_DOTBITAND] = ACTIONS(75),
    [anon_sym_AMP] = ACTIONS(77),
    [anon_sym_DOTBITXOR] = ACTIONS(67),
    [anon_sym_DOTSHL] = ACTIONS(79),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_DOTSHR] = ACTIONS(81),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_DOTBITOR] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(155),
    [anon_sym_LT_GT] = ACTIONS(157),
    [anon_sym_LT_EQ] = ACTIONS(159),
    [anon_sym_GT_EQ] = ACTIONS(161),
    [anon_sym_DOTAND] = ACTIONS(163),
    [anon_sym_AMP_AMP] = ACTIONS(163),
    [anon_sym_DOTXOR] = ACTIONS(165),
    [anon_sym_DOTOR] = ACTIONS(167),
    [anon_sym_PIPE_PIPE] = ACTIONS(167),
    [sym_a16_ctrl_cmd] = ACTIONS(177),
    [sym_a8_ctrl_cmd] = ACTIONS(177),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(177),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(177),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(177),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(177),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(177),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(177),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(181),
    [sym_adc_opcode] = ACTIONS(183),
    [sym_and_opcode] = ACTIONS(183),
    [sym_asl_opcode] = ACTIONS(183),
    [sym_bcc_opcode] = ACTIONS(183),
    [sym_bcs_opcode] = ACTIONS(183),
    [sym_beq_opcode] = ACTIONS(183),
    [sym_bit_opcode] = ACTIONS(183),
    [sym_bmi_opcode] = ACTIONS(183),
    [sym_bne_opcode] = ACTIONS(183),
    [sym_bpl_opcode] = ACTIONS(183),
    [sym_brk_opcode] = ACTIONS(183),
    [sym_bvc_opcode] = ACTIONS(183),
    [sym_bvs_opcode] = ACTIONS(183),
    [sym_clc_opcode] = ACTIONS(183),
    [sym_cld_opcode] = ACTIONS(183),
    [sym_cli_opcode] = ACTIONS(183),
    [sym_clv_opcode] = ACTIONS(183),
    [sym_cmp_opcode] = ACTIONS(183),
    [sym_cpx_opcode] = ACTIONS(183),
    [sym_cpy_opcode] = ACTIONS(183),
    [sym_dec_opcode] = ACTIONS(183),
    [sym_dex_opcode] = ACTIONS(183),
    [sym_dey_opcode] = ACTIONS(183),
    [sym_eor_opcode] = ACTIONS(183),
    [sym_inc_opcode] = ACTIONS(183),
    [sym_inx_opcode] = ACTIONS(183),
    [sym_iny_opcode] = ACTIONS(183),
    [sym_jmp_opcode] = ACTIONS(183),
    [sym_jsr_opcode] = ACTIONS(183),
    [sym_lda_opcode] = ACTIONS(183),
    [sym_ldx_opcode] = ACTIONS(183),
    [sym_ldy_opcode] = ACTIONS(183),
    [sym_lsr_opcode] = ACTIONS(183),
    [sym_nop_opcode] = ACTIONS(183),
    [sym_ora_opcode] = ACTIONS(183),
    [sym_pha_opcode] = ACTIONS(183),
    [sym_php_opcode] = ACTIONS(183),
    [sym_pla_opcode] = ACTIONS(183),
    [sym_plp_opcode] = ACTIONS(183),
    [sym_rol_opcode] = ACTIONS(183),
    [sym_ror_opcode] = ACTIONS(183),
    [sym_rti_opcode] = ACTIONS(183),
    [sym_rts_opcode] = ACTIONS(183),
    [sym_sbc_opcode] = ACTIONS(183),
    [sym_sec_opcode] = ACTIONS(183),
    [sym_sed_opcode] = ACTIONS(183),
    [sym_sei_opcode] = ACTIONS(183),
    [sym_sta_opcode] = ACTIONS(183),
    [sym_stx_opcode] = ACTIONS(183),
    [sym_sty_opcode] = ACTIONS(183),
    [sym_tax_opcode] = ACTIONS(183),
    [sym_tay_opcode] = ACTIONS(183),
    [sym_tsx_opcode] = ACTIONS(183),
    [sym_txa_opcode] = ACTIONS(183),
    [sym_tcs_opcode] = ACTIONS(183),
    [sym_tya_opcode] = ACTIONS(183),
    [anon_sym_PLUS] = ACTIONS(181),
    [anon_sym_DASH] = ACTIONS(181),
    [anon_sym_LT] = ACTIONS(183),
    [anon_sym_GT] = ACTIONS(183),
    [anon_sym_CARET] = ACTIONS(181),
    [anon_sym_STAR] = ACTIONS(181),
    [anon_sym_SLASH] = ACTIONS(181),
    [anon_sym_DOTMOD] = ACTIONS(181),
    [anon_sym_DOTBITAND] = ACTIONS(181),
    [anon_sym_AMP] = ACTIONS(183),
    [anon_sym_DOTBITXOR] = ACTIONS(181),
    [anon_sym_DOTSHL] = ACTIONS(181),
    [anon_sym_LT_LT] = ACTIONS(181),
    [anon_sym_DOTSHR] = ACTIONS(181),
    [anon_sym_GT_GT] = ACTIONS(181),
    [anon_sym_DOTBITOR] = ACTIONS(181),
    [anon_sym_PIPE] = ACTIONS(183),
    [anon_sym_EQ] = ACTIONS(181),
    [anon_sym_LT_GT] = ACTIONS(181),
    [anon_sym_LT_EQ] = ACTIONS(181),
    [anon_sym_GT_EQ] = ACTIONS(181),
    [anon_sym_DOTAND] = ACTIONS(181),
    [anon_sym_AMP_AMP] = ACTIONS(181),
    [anon_sym_DOTXOR] = ACTIONS(181),
    [anon_sym_DOTOR] = ACTIONS(181),
    [anon_sym_PIPE_PIPE] = ACTIONS(181),
    [sym_a16_ctrl_cmd] = ACTIONS(181),
    [sym_a8_ctrl_cmd] = ACTIONS(181),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(181),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(181),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(181),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(181),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(181),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(181),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(185),
    [anon_sym_COMMA] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(185),
    [sym_adc_opcode] = ACTIONS(187),
    [sym_and_opcode] = ACTIONS(187),
    [sym_asl_opcode] = ACTIONS(187),
    [sym_bcc_opcode] = ACTIONS(187),
    [sym_bcs_opcode] = ACTIONS(187),
    [sym_beq_opcode] = ACTIONS(187),
    [sym_bit_opcode] = ACTIONS(187),
    [sym_bmi_opcode] = ACTIONS(187),
    [sym_bne_opcode] = ACTIONS(187),
    [sym_bpl_opcode] = ACTIONS(187),
    [sym_brk_opcode] = ACTIONS(187),
    [sym_bvc_opcode] = ACTIONS(187),
    [sym_bvs_opcode] = ACTIONS(187),
    [sym_clc_opcode] = ACTIONS(187),
    [sym_cld_opcode] = ACTIONS(187),
    [sym_cli_opcode] = ACTIONS(187),
    [sym_clv_opcode] = ACTIONS(187),
    [sym_cmp_opcode] = ACTIONS(187),
    [sym_cpx_opcode] = ACTIONS(187),
    [sym_cpy_opcode] = ACTIONS(187),
    [sym_dec_opcode] = ACTIONS(187),
    [sym_dex_opcode] = ACTIONS(187),
    [sym_dey_opcode] = ACTIONS(187),
    [sym_eor_opcode] = ACTIONS(187),
    [sym_inc_opcode] = ACTIONS(187),
    [sym_inx_opcode] = ACTIONS(187),
    [sym_iny_opcode] = ACTIONS(187),
    [sym_jmp_opcode] = ACTIONS(187),
    [sym_jsr_opcode] = ACTIONS(187),
    [sym_lda_opcode] = ACTIONS(187),
    [sym_ldx_opcode] = ACTIONS(187),
    [sym_ldy_opcode] = ACTIONS(187),
    [sym_lsr_opcode] = ACTIONS(187),
    [sym_nop_opcode] = ACTIONS(187),
    [sym_ora_opcode] = ACTIONS(187),
    [sym_pha_opcode] = ACTIONS(187),
    [sym_php_opcode] = ACTIONS(187),
    [sym_pla_opcode] = ACTIONS(187),
    [sym_plp_opcode] = ACTIONS(187),
    [sym_rol_opcode] = ACTIONS(187),
    [sym_ror_opcode] = ACTIONS(187),
    [sym_rti_opcode] = ACTIONS(187),
    [sym_rts_opcode] = ACTIONS(187),
    [sym_sbc_opcode] = ACTIONS(187),
    [sym_sec_opcode] = ACTIONS(187),
    [sym_sed_opcode] = ACTIONS(187),
    [sym_sei_opcode] = ACTIONS(187),
    [sym_sta_opcode] = ACTIONS(187),
    [sym_stx_opcode] = ACTIONS(187),
    [sym_sty_opcode] = ACTIONS(187),
    [sym_tax_opcode] = ACTIONS(187),
    [sym_tay_opcode] = ACTIONS(187),
    [sym_tsx_opcode] = ACTIONS(187),
    [sym_txa_opcode] = ACTIONS(187),
    [sym_tcs_opcode] = ACTIONS(187),
    [sym_tya_opcode] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(187),
    [anon_sym_GT] = ACTIONS(187),
    [anon_sym_CARET] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_DOTMOD] = ACTIONS(73),
    [anon_sym_DOTBITAND] = ACTIONS(75),
    [anon_sym_AMP] = ACTIONS(77),
    [anon_sym_DOTBITXOR] = ACTIONS(67),
    [anon_sym_DOTSHL] = ACTIONS(79),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_DOTSHR] = ACTIONS(81),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_DOTBITOR] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(185),
    [anon_sym_LT_GT] = ACTIONS(185),
    [anon_sym_LT_EQ] = ACTIONS(185),
    [anon_sym_GT_EQ] = ACTIONS(185),
    [anon_sym_DOTAND] = ACTIONS(185),
    [anon_sym_AMP_AMP] = ACTIONS(185),
    [anon_sym_DOTXOR] = ACTIONS(185),
    [anon_sym_DOTOR] = ACTIONS(185),
    [anon_sym_PIPE_PIPE] = ACTIONS(185),
    [sym_a16_ctrl_cmd] = ACTIONS(185),
    [sym_a8_ctrl_cmd] = ACTIONS(185),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(185),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(185),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(185),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(185),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(185),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(185),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(189),
    [sym_adc_opcode] = ACTIONS(191),
    [sym_and_opcode] = ACTIONS(191),
    [sym_asl_opcode] = ACTIONS(191),
    [sym_bcc_opcode] = ACTIONS(191),
    [sym_bcs_opcode] = ACTIONS(191),
    [sym_beq_opcode] = ACTIONS(191),
    [sym_bit_opcode] = ACTIONS(191),
    [sym_bmi_opcode] = ACTIONS(191),
    [sym_bne_opcode] = ACTIONS(191),
    [sym_bpl_opcode] = ACTIONS(191),
    [sym_brk_opcode] = ACTIONS(191),
    [sym_bvc_opcode] = ACTIONS(191),
    [sym_bvs_opcode] = ACTIONS(191),
    [sym_clc_opcode] = ACTIONS(191),
    [sym_cld_opcode] = ACTIONS(191),
    [sym_cli_opcode] = ACTIONS(191),
    [sym_clv_opcode] = ACTIONS(191),
    [sym_cmp_opcode] = ACTIONS(191),
    [sym_cpx_opcode] = ACTIONS(191),
    [sym_cpy_opcode] = ACTIONS(191),
    [sym_dec_opcode] = ACTIONS(191),
    [sym_dex_opcode] = ACTIONS(191),
    [sym_dey_opcode] = ACTIONS(191),
    [sym_eor_opcode] = ACTIONS(191),
    [sym_inc_opcode] = ACTIONS(191),
    [sym_inx_opcode] = ACTIONS(191),
    [sym_iny_opcode] = ACTIONS(191),
    [sym_jmp_opcode] = ACTIONS(191),
    [sym_jsr_opcode] = ACTIONS(191),
    [sym_lda_opcode] = ACTIONS(191),
    [sym_ldx_opcode] = ACTIONS(191),
    [sym_ldy_opcode] = ACTIONS(191),
    [sym_lsr_opcode] = ACTIONS(191),
    [sym_nop_opcode] = ACTIONS(191),
    [sym_ora_opcode] = ACTIONS(191),
    [sym_pha_opcode] = ACTIONS(191),
    [sym_php_opcode] = ACTIONS(191),
    [sym_pla_opcode] = ACTIONS(191),
    [sym_plp_opcode] = ACTIONS(191),
    [sym_rol_opcode] = ACTIONS(191),
    [sym_ror_opcode] = ACTIONS(191),
    [sym_rti_opcode] = ACTIONS(191),
    [sym_rts_opcode] = ACTIONS(191),
    [sym_sbc_opcode] = ACTIONS(191),
    [sym_sec_opcode] = ACTIONS(191),
    [sym_sed_opcode] = ACTIONS(191),
    [sym_sei_opcode] = ACTIONS(191),
    [sym_sta_opcode] = ACTIONS(191),
    [sym_stx_opcode] = ACTIONS(191),
    [sym_sty_opcode] = ACTIONS(191),
    [sym_tax_opcode] = ACTIONS(191),
    [sym_tay_opcode] = ACTIONS(191),
    [sym_tsx_opcode] = ACTIONS(191),
    [sym_txa_opcode] = ACTIONS(191),
    [sym_tcs_opcode] = ACTIONS(191),
    [sym_tya_opcode] = ACTIONS(191),
    [anon_sym_PLUS] = ACTIONS(189),
    [anon_sym_DASH] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(191),
    [anon_sym_GT] = ACTIONS(191),
    [anon_sym_CARET] = ACTIONS(189),
    [anon_sym_STAR] = ACTIONS(189),
    [anon_sym_SLASH] = ACTIONS(189),
    [anon_sym_DOTMOD] = ACTIONS(189),
    [anon_sym_DOTBITAND] = ACTIONS(189),
    [anon_sym_AMP] = ACTIONS(191),
    [anon_sym_DOTBITXOR] = ACTIONS(189),
    [anon_sym_DOTSHL] = ACTIONS(189),
    [anon_sym_LT_LT] = ACTIONS(189),
    [anon_sym_DOTSHR] = ACTIONS(189),
    [anon_sym_GT_GT] = ACTIONS(189),
    [anon_sym_DOTBITOR] = ACTIONS(189),
    [anon_sym_PIPE] = ACTIONS(191),
    [anon_sym_EQ] = ACTIONS(189),
    [anon_sym_LT_GT] = ACTIONS(189),
    [anon_sym_LT_EQ] = ACTIONS(189),
    [anon_sym_GT_EQ] = ACTIONS(189),
    [anon_sym_DOTAND] = ACTIONS(189),
    [anon_sym_AMP_AMP] = ACTIONS(189),
    [anon_sym_DOTXOR] = ACTIONS(189),
    [anon_sym_DOTOR] = ACTIONS(189),
    [anon_sym_PIPE_PIPE] = ACTIONS(189),
    [sym_a16_ctrl_cmd] = ACTIONS(189),
    [sym_a8_ctrl_cmd] = ACTIONS(189),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(189),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(189),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(189),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(189),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(189),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(189),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(193),
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
    [anon_sym_PLUS] = ACTIONS(193),
    [anon_sym_DASH] = ACTIONS(193),
    [anon_sym_LT] = ACTIONS(195),
    [anon_sym_GT] = ACTIONS(195),
    [anon_sym_CARET] = ACTIONS(193),
    [anon_sym_STAR] = ACTIONS(193),
    [anon_sym_SLASH] = ACTIONS(193),
    [anon_sym_DOTMOD] = ACTIONS(193),
    [anon_sym_DOTBITAND] = ACTIONS(193),
    [anon_sym_AMP] = ACTIONS(195),
    [anon_sym_DOTBITXOR] = ACTIONS(193),
    [anon_sym_DOTSHL] = ACTIONS(193),
    [anon_sym_LT_LT] = ACTIONS(193),
    [anon_sym_DOTSHR] = ACTIONS(193),
    [anon_sym_GT_GT] = ACTIONS(193),
    [anon_sym_DOTBITOR] = ACTIONS(193),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_EQ] = ACTIONS(193),
    [anon_sym_LT_GT] = ACTIONS(193),
    [anon_sym_LT_EQ] = ACTIONS(193),
    [anon_sym_GT_EQ] = ACTIONS(193),
    [anon_sym_DOTAND] = ACTIONS(193),
    [anon_sym_AMP_AMP] = ACTIONS(193),
    [anon_sym_DOTXOR] = ACTIONS(193),
    [anon_sym_DOTOR] = ACTIONS(193),
    [anon_sym_PIPE_PIPE] = ACTIONS(193),
    [sym_a16_ctrl_cmd] = ACTIONS(193),
    [sym_a8_ctrl_cmd] = ACTIONS(193),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(193),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(193),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(193),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(193),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(193),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(193),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(197),
    [anon_sym_RPAREN] = ACTIONS(197),
    [sym_adc_opcode] = ACTIONS(199),
    [sym_and_opcode] = ACTIONS(199),
    [sym_asl_opcode] = ACTIONS(199),
    [sym_bcc_opcode] = ACTIONS(199),
    [sym_bcs_opcode] = ACTIONS(199),
    [sym_beq_opcode] = ACTIONS(199),
    [sym_bit_opcode] = ACTIONS(199),
    [sym_bmi_opcode] = ACTIONS(199),
    [sym_bne_opcode] = ACTIONS(199),
    [sym_bpl_opcode] = ACTIONS(199),
    [sym_brk_opcode] = ACTIONS(199),
    [sym_bvc_opcode] = ACTIONS(199),
    [sym_bvs_opcode] = ACTIONS(199),
    [sym_clc_opcode] = ACTIONS(199),
    [sym_cld_opcode] = ACTIONS(199),
    [sym_cli_opcode] = ACTIONS(199),
    [sym_clv_opcode] = ACTIONS(199),
    [sym_cmp_opcode] = ACTIONS(199),
    [sym_cpx_opcode] = ACTIONS(199),
    [sym_cpy_opcode] = ACTIONS(199),
    [sym_dec_opcode] = ACTIONS(199),
    [sym_dex_opcode] = ACTIONS(199),
    [sym_dey_opcode] = ACTIONS(199),
    [sym_eor_opcode] = ACTIONS(199),
    [sym_inc_opcode] = ACTIONS(199),
    [sym_inx_opcode] = ACTIONS(199),
    [sym_iny_opcode] = ACTIONS(199),
    [sym_jmp_opcode] = ACTIONS(199),
    [sym_jsr_opcode] = ACTIONS(199),
    [sym_lda_opcode] = ACTIONS(199),
    [sym_ldx_opcode] = ACTIONS(199),
    [sym_ldy_opcode] = ACTIONS(199),
    [sym_lsr_opcode] = ACTIONS(199),
    [sym_nop_opcode] = ACTIONS(199),
    [sym_ora_opcode] = ACTIONS(199),
    [sym_pha_opcode] = ACTIONS(199),
    [sym_php_opcode] = ACTIONS(199),
    [sym_pla_opcode] = ACTIONS(199),
    [sym_plp_opcode] = ACTIONS(199),
    [sym_rol_opcode] = ACTIONS(199),
    [sym_ror_opcode] = ACTIONS(199),
    [sym_rti_opcode] = ACTIONS(199),
    [sym_rts_opcode] = ACTIONS(199),
    [sym_sbc_opcode] = ACTIONS(199),
    [sym_sec_opcode] = ACTIONS(199),
    [sym_sed_opcode] = ACTIONS(199),
    [sym_sei_opcode] = ACTIONS(199),
    [sym_sta_opcode] = ACTIONS(199),
    [sym_stx_opcode] = ACTIONS(199),
    [sym_sty_opcode] = ACTIONS(199),
    [sym_tax_opcode] = ACTIONS(199),
    [sym_tay_opcode] = ACTIONS(199),
    [sym_tsx_opcode] = ACTIONS(199),
    [sym_txa_opcode] = ACTIONS(199),
    [sym_tcs_opcode] = ACTIONS(199),
    [sym_tya_opcode] = ACTIONS(199),
    [anon_sym_PLUS] = ACTIONS(197),
    [anon_sym_DASH] = ACTIONS(197),
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_GT] = ACTIONS(199),
    [anon_sym_CARET] = ACTIONS(197),
    [anon_sym_STAR] = ACTIONS(197),
    [anon_sym_SLASH] = ACTIONS(197),
    [anon_sym_DOTMOD] = ACTIONS(197),
    [anon_sym_DOTBITAND] = ACTIONS(197),
    [anon_sym_AMP] = ACTIONS(199),
    [anon_sym_DOTBITXOR] = ACTIONS(197),
    [anon_sym_DOTSHL] = ACTIONS(197),
    [anon_sym_LT_LT] = ACTIONS(197),
    [anon_sym_DOTSHR] = ACTIONS(197),
    [anon_sym_GT_GT] = ACTIONS(197),
    [anon_sym_DOTBITOR] = ACTIONS(197),
    [anon_sym_PIPE] = ACTIONS(199),
    [anon_sym_EQ] = ACTIONS(197),
    [anon_sym_LT_GT] = ACTIONS(197),
    [anon_sym_LT_EQ] = ACTIONS(197),
    [anon_sym_GT_EQ] = ACTIONS(197),
    [anon_sym_DOTAND] = ACTIONS(197),
    [anon_sym_AMP_AMP] = ACTIONS(197),
    [anon_sym_DOTXOR] = ACTIONS(197),
    [anon_sym_DOTOR] = ACTIONS(197),
    [anon_sym_PIPE_PIPE] = ACTIONS(197),
    [sym_a16_ctrl_cmd] = ACTIONS(197),
    [sym_a8_ctrl_cmd] = ACTIONS(197),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(197),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(197),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(197),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(197),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(197),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(197),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(201),
    [anon_sym_COMMA] = ACTIONS(201),
    [anon_sym_RPAREN] = ACTIONS(201),
    [sym_adc_opcode] = ACTIONS(203),
    [sym_and_opcode] = ACTIONS(203),
    [sym_asl_opcode] = ACTIONS(203),
    [sym_bcc_opcode] = ACTIONS(203),
    [sym_bcs_opcode] = ACTIONS(203),
    [sym_beq_opcode] = ACTIONS(203),
    [sym_bit_opcode] = ACTIONS(203),
    [sym_bmi_opcode] = ACTIONS(203),
    [sym_bne_opcode] = ACTIONS(203),
    [sym_bpl_opcode] = ACTIONS(203),
    [sym_brk_opcode] = ACTIONS(203),
    [sym_bvc_opcode] = ACTIONS(203),
    [sym_bvs_opcode] = ACTIONS(203),
    [sym_clc_opcode] = ACTIONS(203),
    [sym_cld_opcode] = ACTIONS(203),
    [sym_cli_opcode] = ACTIONS(203),
    [sym_clv_opcode] = ACTIONS(203),
    [sym_cmp_opcode] = ACTIONS(203),
    [sym_cpx_opcode] = ACTIONS(203),
    [sym_cpy_opcode] = ACTIONS(203),
    [sym_dec_opcode] = ACTIONS(203),
    [sym_dex_opcode] = ACTIONS(203),
    [sym_dey_opcode] = ACTIONS(203),
    [sym_eor_opcode] = ACTIONS(203),
    [sym_inc_opcode] = ACTIONS(203),
    [sym_inx_opcode] = ACTIONS(203),
    [sym_iny_opcode] = ACTIONS(203),
    [sym_jmp_opcode] = ACTIONS(203),
    [sym_jsr_opcode] = ACTIONS(203),
    [sym_lda_opcode] = ACTIONS(203),
    [sym_ldx_opcode] = ACTIONS(203),
    [sym_ldy_opcode] = ACTIONS(203),
    [sym_lsr_opcode] = ACTIONS(203),
    [sym_nop_opcode] = ACTIONS(203),
    [sym_ora_opcode] = ACTIONS(203),
    [sym_pha_opcode] = ACTIONS(203),
    [sym_php_opcode] = ACTIONS(203),
    [sym_pla_opcode] = ACTIONS(203),
    [sym_plp_opcode] = ACTIONS(203),
    [sym_rol_opcode] = ACTIONS(203),
    [sym_ror_opcode] = ACTIONS(203),
    [sym_rti_opcode] = ACTIONS(203),
    [sym_rts_opcode] = ACTIONS(203),
    [sym_sbc_opcode] = ACTIONS(203),
    [sym_sec_opcode] = ACTIONS(203),
    [sym_sed_opcode] = ACTIONS(203),
    [sym_sei_opcode] = ACTIONS(203),
    [sym_sta_opcode] = ACTIONS(203),
    [sym_stx_opcode] = ACTIONS(203),
    [sym_sty_opcode] = ACTIONS(203),
    [sym_tax_opcode] = ACTIONS(203),
    [sym_tay_opcode] = ACTIONS(203),
    [sym_tsx_opcode] = ACTIONS(203),
    [sym_txa_opcode] = ACTIONS(203),
    [sym_tcs_opcode] = ACTIONS(203),
    [sym_tya_opcode] = ACTIONS(203),
    [anon_sym_PLUS] = ACTIONS(201),
    [anon_sym_DASH] = ACTIONS(201),
    [anon_sym_LT] = ACTIONS(203),
    [anon_sym_GT] = ACTIONS(203),
    [anon_sym_CARET] = ACTIONS(201),
    [anon_sym_STAR] = ACTIONS(201),
    [anon_sym_SLASH] = ACTIONS(201),
    [anon_sym_DOTMOD] = ACTIONS(201),
    [anon_sym_DOTBITAND] = ACTIONS(201),
    [anon_sym_AMP] = ACTIONS(203),
    [anon_sym_DOTBITXOR] = ACTIONS(201),
    [anon_sym_DOTSHL] = ACTIONS(201),
    [anon_sym_LT_LT] = ACTIONS(201),
    [anon_sym_DOTSHR] = ACTIONS(201),
    [anon_sym_GT_GT] = ACTIONS(201),
    [anon_sym_DOTBITOR] = ACTIONS(201),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_EQ] = ACTIONS(201),
    [anon_sym_LT_GT] = ACTIONS(201),
    [anon_sym_LT_EQ] = ACTIONS(201),
    [anon_sym_GT_EQ] = ACTIONS(201),
    [anon_sym_DOTAND] = ACTIONS(201),
    [anon_sym_AMP_AMP] = ACTIONS(201),
    [anon_sym_DOTXOR] = ACTIONS(201),
    [anon_sym_DOTOR] = ACTIONS(201),
    [anon_sym_PIPE_PIPE] = ACTIONS(201),
    [sym_a16_ctrl_cmd] = ACTIONS(201),
    [sym_a8_ctrl_cmd] = ACTIONS(201),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(201),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(201),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(201),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(201),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(201),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(201),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(205),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_RPAREN] = ACTIONS(205),
    [sym_adc_opcode] = ACTIONS(207),
    [sym_and_opcode] = ACTIONS(207),
    [sym_asl_opcode] = ACTIONS(207),
    [sym_bcc_opcode] = ACTIONS(207),
    [sym_bcs_opcode] = ACTIONS(207),
    [sym_beq_opcode] = ACTIONS(207),
    [sym_bit_opcode] = ACTIONS(207),
    [sym_bmi_opcode] = ACTIONS(207),
    [sym_bne_opcode] = ACTIONS(207),
    [sym_bpl_opcode] = ACTIONS(207),
    [sym_brk_opcode] = ACTIONS(207),
    [sym_bvc_opcode] = ACTIONS(207),
    [sym_bvs_opcode] = ACTIONS(207),
    [sym_clc_opcode] = ACTIONS(207),
    [sym_cld_opcode] = ACTIONS(207),
    [sym_cli_opcode] = ACTIONS(207),
    [sym_clv_opcode] = ACTIONS(207),
    [sym_cmp_opcode] = ACTIONS(207),
    [sym_cpx_opcode] = ACTIONS(207),
    [sym_cpy_opcode] = ACTIONS(207),
    [sym_dec_opcode] = ACTIONS(207),
    [sym_dex_opcode] = ACTIONS(207),
    [sym_dey_opcode] = ACTIONS(207),
    [sym_eor_opcode] = ACTIONS(207),
    [sym_inc_opcode] = ACTIONS(207),
    [sym_inx_opcode] = ACTIONS(207),
    [sym_iny_opcode] = ACTIONS(207),
    [sym_jmp_opcode] = ACTIONS(207),
    [sym_jsr_opcode] = ACTIONS(207),
    [sym_lda_opcode] = ACTIONS(207),
    [sym_ldx_opcode] = ACTIONS(207),
    [sym_ldy_opcode] = ACTIONS(207),
    [sym_lsr_opcode] = ACTIONS(207),
    [sym_nop_opcode] = ACTIONS(207),
    [sym_ora_opcode] = ACTIONS(207),
    [sym_pha_opcode] = ACTIONS(207),
    [sym_php_opcode] = ACTIONS(207),
    [sym_pla_opcode] = ACTIONS(207),
    [sym_plp_opcode] = ACTIONS(207),
    [sym_rol_opcode] = ACTIONS(207),
    [sym_ror_opcode] = ACTIONS(207),
    [sym_rti_opcode] = ACTIONS(207),
    [sym_rts_opcode] = ACTIONS(207),
    [sym_sbc_opcode] = ACTIONS(207),
    [sym_sec_opcode] = ACTIONS(207),
    [sym_sed_opcode] = ACTIONS(207),
    [sym_sei_opcode] = ACTIONS(207),
    [sym_sta_opcode] = ACTIONS(207),
    [sym_stx_opcode] = ACTIONS(207),
    [sym_sty_opcode] = ACTIONS(207),
    [sym_tax_opcode] = ACTIONS(207),
    [sym_tay_opcode] = ACTIONS(207),
    [sym_tsx_opcode] = ACTIONS(207),
    [sym_txa_opcode] = ACTIONS(207),
    [sym_tcs_opcode] = ACTIONS(207),
    [sym_tya_opcode] = ACTIONS(207),
    [anon_sym_PLUS] = ACTIONS(205),
    [anon_sym_DASH] = ACTIONS(205),
    [anon_sym_LT] = ACTIONS(207),
    [anon_sym_GT] = ACTIONS(207),
    [anon_sym_CARET] = ACTIONS(205),
    [anon_sym_STAR] = ACTIONS(205),
    [anon_sym_SLASH] = ACTIONS(205),
    [anon_sym_DOTMOD] = ACTIONS(205),
    [anon_sym_DOTBITAND] = ACTIONS(205),
    [anon_sym_AMP] = ACTIONS(207),
    [anon_sym_DOTBITXOR] = ACTIONS(205),
    [anon_sym_DOTSHL] = ACTIONS(205),
    [anon_sym_LT_LT] = ACTIONS(205),
    [anon_sym_DOTSHR] = ACTIONS(205),
    [anon_sym_GT_GT] = ACTIONS(205),
    [anon_sym_DOTBITOR] = ACTIONS(205),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_EQ] = ACTIONS(205),
    [anon_sym_LT_GT] = ACTIONS(205),
    [anon_sym_LT_EQ] = ACTIONS(205),
    [anon_sym_GT_EQ] = ACTIONS(205),
    [anon_sym_DOTAND] = ACTIONS(205),
    [anon_sym_AMP_AMP] = ACTIONS(205),
    [anon_sym_DOTXOR] = ACTIONS(205),
    [anon_sym_DOTOR] = ACTIONS(205),
    [anon_sym_PIPE_PIPE] = ACTIONS(205),
    [sym_a16_ctrl_cmd] = ACTIONS(205),
    [sym_a8_ctrl_cmd] = ACTIONS(205),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(205),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(205),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(205),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(205),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(205),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(205),
  },
  [30] = {
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
  },
  [31] = {
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
  },
  [32] = {
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
  },
  [33] = {
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
  },
  [34] = {
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
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_LT] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_CARET] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_DOTMOD] = ACTIONS(225),
    [anon_sym_DOTBITAND] = ACTIONS(225),
    [anon_sym_AMP] = ACTIONS(227),
    [anon_sym_DOTBITXOR] = ACTIONS(225),
    [anon_sym_DOTSHL] = ACTIONS(225),
    [anon_sym_LT_LT] = ACTIONS(225),
    [anon_sym_DOTSHR] = ACTIONS(225),
    [anon_sym_GT_GT] = ACTIONS(225),
    [anon_sym_DOTBITOR] = ACTIONS(225),
    [anon_sym_PIPE] = ACTIONS(227),
    [anon_sym_EQ] = ACTIONS(225),
    [anon_sym_LT_GT] = ACTIONS(225),
    [anon_sym_LT_EQ] = ACTIONS(225),
    [anon_sym_GT_EQ] = ACTIONS(225),
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
  },
  [35] = {
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
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_CARET] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_DOTMOD] = ACTIONS(73),
    [anon_sym_DOTBITAND] = ACTIONS(75),
    [anon_sym_AMP] = ACTIONS(77),
    [anon_sym_DOTBITXOR] = ACTIONS(67),
    [anon_sym_DOTSHL] = ACTIONS(79),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_DOTSHR] = ACTIONS(81),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_DOTBITOR] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(155),
    [anon_sym_LT_GT] = ACTIONS(157),
    [anon_sym_LT_EQ] = ACTIONS(159),
    [anon_sym_GT_EQ] = ACTIONS(161),
    [anon_sym_DOTAND] = ACTIONS(229),
    [anon_sym_AMP_AMP] = ACTIONS(229),
    [anon_sym_DOTXOR] = ACTIONS(229),
    [anon_sym_DOTOR] = ACTIONS(229),
    [anon_sym_PIPE_PIPE] = ACTIONS(229),
    [sym_a16_ctrl_cmd] = ACTIONS(229),
    [sym_a8_ctrl_cmd] = ACTIONS(229),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(229),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(229),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(229),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(229),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(229),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(229),
  },
  [36] = {
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
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_CARET] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_DOTMOD] = ACTIONS(73),
    [anon_sym_DOTBITAND] = ACTIONS(75),
    [anon_sym_AMP] = ACTIONS(77),
    [anon_sym_DOTBITXOR] = ACTIONS(67),
    [anon_sym_DOTSHL] = ACTIONS(79),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_DOTSHR] = ACTIONS(81),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_DOTBITOR] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(155),
    [anon_sym_LT_GT] = ACTIONS(157),
    [anon_sym_LT_EQ] = ACTIONS(159),
    [anon_sym_GT_EQ] = ACTIONS(161),
    [anon_sym_DOTAND] = ACTIONS(163),
    [anon_sym_AMP_AMP] = ACTIONS(163),
    [anon_sym_DOTXOR] = ACTIONS(165),
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
  },
  [37] = {
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
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_CARET] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_DOTMOD] = ACTIONS(73),
    [anon_sym_DOTBITAND] = ACTIONS(75),
    [anon_sym_AMP] = ACTIONS(77),
    [anon_sym_DOTBITXOR] = ACTIONS(67),
    [anon_sym_DOTSHL] = ACTIONS(79),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_DOTSHR] = ACTIONS(81),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_DOTBITOR] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(155),
    [anon_sym_LT_GT] = ACTIONS(157),
    [anon_sym_LT_EQ] = ACTIONS(159),
    [anon_sym_GT_EQ] = ACTIONS(161),
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
  },
  [38] = {
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
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(243),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_CARET] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_DOTMOD] = ACTIONS(73),
    [anon_sym_DOTBITAND] = ACTIONS(75),
    [anon_sym_AMP] = ACTIONS(77),
    [anon_sym_DOTBITXOR] = ACTIONS(67),
    [anon_sym_DOTSHL] = ACTIONS(79),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_DOTSHR] = ACTIONS(81),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_DOTBITOR] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(85),
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
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(245),
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
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_CARET] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_DOTMOD] = ACTIONS(73),
    [anon_sym_DOTBITAND] = ACTIONS(75),
    [anon_sym_AMP] = ACTIONS(77),
    [anon_sym_DOTBITXOR] = ACTIONS(67),
    [anon_sym_DOTSHL] = ACTIONS(79),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_DOTSHR] = ACTIONS(81),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_DOTBITOR] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(155),
    [anon_sym_LT_GT] = ACTIONS(157),
    [anon_sym_LT_EQ] = ACTIONS(159),
    [anon_sym_GT_EQ] = ACTIONS(161),
    [anon_sym_DOTAND] = ACTIONS(163),
    [anon_sym_AMP_AMP] = ACTIONS(163),
    [anon_sym_DOTXOR] = ACTIONS(165),
    [anon_sym_DOTOR] = ACTIONS(167),
    [anon_sym_PIPE_PIPE] = ACTIONS(167),
    [sym_a16_ctrl_cmd] = ACTIONS(245),
    [sym_a8_ctrl_cmd] = ACTIONS(245),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(245),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(245),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(245),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(245),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(245),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(245),
  },
  [40] = {
    [sym_inst] = STATE(40),
    [sym_impl_addr_inst] = STATE(73),
    [sym_acc_addr_inst] = STATE(73),
    [sym_imm_addr_inst] = STATE(73),
    [sym_abs_addr_inst] = STATE(73),
    [sym_zp_addr_inst] = STATE(73),
    [sym_abs_x_addr_inst] = STATE(73),
    [sym_abs_y_addr_inst] = STATE(73),
    [sym_zp_x_addr_inst] = STATE(73),
    [sym_zp_y_addr_inst] = STATE(73),
    [sym_ind_addr_inst] = STATE(73),
    [sym_ind_x_addr_inst] = STATE(73),
    [sym_ind_y_addr_inst] = STATE(73),
    [sym_rel_addr_inst] = STATE(73),
    [sym_ctrl_cmd] = STATE(40),
    [sym_addr_ctrl_cmd] = STATE(79),
    [sym_align_ctrl_cmd] = STATE(79),
    [sym_asciiz_ctrl_cmd] = STATE(79),
    [sym_assert_ctrl_cmd] = STATE(79),
    [sym_autoimport_ctrl_cmd] = STATE(79),
    [sym_bankbytes_ctrl_cmd] = STATE(79),
    [aux_sym_ca65_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(249),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(251),
    [sym_adc_opcode] = ACTIONS(254),
    [sym_and_opcode] = ACTIONS(254),
    [sym_asl_opcode] = ACTIONS(257),
    [sym_bcc_opcode] = ACTIONS(260),
    [sym_bcs_opcode] = ACTIONS(260),
    [sym_beq_opcode] = ACTIONS(260),
    [sym_bit_opcode] = ACTIONS(263),
    [sym_bmi_opcode] = ACTIONS(260),
    [sym_bne_opcode] = ACTIONS(260),
    [sym_bpl_opcode] = ACTIONS(260),
    [sym_brk_opcode] = ACTIONS(266),
    [sym_bvc_opcode] = ACTIONS(260),
    [sym_bvs_opcode] = ACTIONS(260),
    [sym_clc_opcode] = ACTIONS(266),
    [sym_cld_opcode] = ACTIONS(266),
    [sym_cli_opcode] = ACTIONS(266),
    [sym_clv_opcode] = ACTIONS(266),
    [sym_cmp_opcode] = ACTIONS(254),
    [sym_cpx_opcode] = ACTIONS(269),
    [sym_cpy_opcode] = ACTIONS(269),
    [sym_dec_opcode] = ACTIONS(272),
    [sym_dex_opcode] = ACTIONS(266),
    [sym_dey_opcode] = ACTIONS(266),
    [sym_eor_opcode] = ACTIONS(254),
    [sym_inc_opcode] = ACTIONS(272),
    [sym_inx_opcode] = ACTIONS(266),
    [sym_iny_opcode] = ACTIONS(266),
    [sym_jmp_opcode] = ACTIONS(275),
    [sym_jsr_opcode] = ACTIONS(278),
    [sym_lda_opcode] = ACTIONS(254),
    [sym_ldx_opcode] = ACTIONS(281),
    [sym_ldy_opcode] = ACTIONS(284),
    [sym_lsr_opcode] = ACTIONS(284),
    [sym_nop_opcode] = ACTIONS(266),
    [sym_ora_opcode] = ACTIONS(254),
    [sym_pha_opcode] = ACTIONS(266),
    [sym_php_opcode] = ACTIONS(266),
    [sym_pla_opcode] = ACTIONS(266),
    [sym_plp_opcode] = ACTIONS(266),
    [sym_rol_opcode] = ACTIONS(257),
    [sym_ror_opcode] = ACTIONS(257),
    [sym_rti_opcode] = ACTIONS(266),
    [sym_rts_opcode] = ACTIONS(266),
    [sym_sbc_opcode] = ACTIONS(254),
    [sym_sec_opcode] = ACTIONS(266),
    [sym_sed_opcode] = ACTIONS(266),
    [sym_sei_opcode] = ACTIONS(266),
    [sym_sta_opcode] = ACTIONS(287),
    [sym_stx_opcode] = ACTIONS(290),
    [sym_sty_opcode] = ACTIONS(293),
    [sym_tax_opcode] = ACTIONS(266),
    [sym_tay_opcode] = ACTIONS(266),
    [sym_tsx_opcode] = ACTIONS(266),
    [sym_txa_opcode] = ACTIONS(266),
    [sym_tcs_opcode] = ACTIONS(266),
    [sym_tya_opcode] = ACTIONS(266),
    [sym_a16_ctrl_cmd] = ACTIONS(296),
    [sym_a8_ctrl_cmd] = ACTIONS(296),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(299),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(302),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(305),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(308),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(311),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(314),
  },
  [41] = {
    [sym_inst] = STATE(40),
    [sym_impl_addr_inst] = STATE(73),
    [sym_acc_addr_inst] = STATE(73),
    [sym_imm_addr_inst] = STATE(73),
    [sym_abs_addr_inst] = STATE(73),
    [sym_zp_addr_inst] = STATE(73),
    [sym_abs_x_addr_inst] = STATE(73),
    [sym_abs_y_addr_inst] = STATE(73),
    [sym_zp_x_addr_inst] = STATE(73),
    [sym_zp_y_addr_inst] = STATE(73),
    [sym_ind_addr_inst] = STATE(73),
    [sym_ind_x_addr_inst] = STATE(73),
    [sym_ind_y_addr_inst] = STATE(73),
    [sym_rel_addr_inst] = STATE(73),
    [sym_ctrl_cmd] = STATE(40),
    [sym_addr_ctrl_cmd] = STATE(79),
    [sym_align_ctrl_cmd] = STATE(79),
    [sym_asciiz_ctrl_cmd] = STATE(79),
    [sym_assert_ctrl_cmd] = STATE(79),
    [sym_autoimport_ctrl_cmd] = STATE(79),
    [sym_bankbytes_ctrl_cmd] = STATE(79),
    [aux_sym_ca65_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(317),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(319),
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
  },
  [42] = {
    [aux_sym_addr_ctrl_cmd_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(321),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(321),
    [anon_sym_COMMA] = ACTIONS(323),
    [sym_adc_opcode] = ACTIONS(325),
    [sym_and_opcode] = ACTIONS(325),
    [sym_asl_opcode] = ACTIONS(325),
    [sym_bcc_opcode] = ACTIONS(325),
    [sym_bcs_opcode] = ACTIONS(325),
    [sym_beq_opcode] = ACTIONS(325),
    [sym_bit_opcode] = ACTIONS(325),
    [sym_bmi_opcode] = ACTIONS(325),
    [sym_bne_opcode] = ACTIONS(325),
    [sym_bpl_opcode] = ACTIONS(325),
    [sym_brk_opcode] = ACTIONS(325),
    [sym_bvc_opcode] = ACTIONS(325),
    [sym_bvs_opcode] = ACTIONS(325),
    [sym_clc_opcode] = ACTIONS(325),
    [sym_cld_opcode] = ACTIONS(325),
    [sym_cli_opcode] = ACTIONS(325),
    [sym_clv_opcode] = ACTIONS(325),
    [sym_cmp_opcode] = ACTIONS(325),
    [sym_cpx_opcode] = ACTIONS(325),
    [sym_cpy_opcode] = ACTIONS(325),
    [sym_dec_opcode] = ACTIONS(325),
    [sym_dex_opcode] = ACTIONS(325),
    [sym_dey_opcode] = ACTIONS(325),
    [sym_eor_opcode] = ACTIONS(325),
    [sym_inc_opcode] = ACTIONS(325),
    [sym_inx_opcode] = ACTIONS(325),
    [sym_iny_opcode] = ACTIONS(325),
    [sym_jmp_opcode] = ACTIONS(325),
    [sym_jsr_opcode] = ACTIONS(325),
    [sym_lda_opcode] = ACTIONS(325),
    [sym_ldx_opcode] = ACTIONS(325),
    [sym_ldy_opcode] = ACTIONS(325),
    [sym_lsr_opcode] = ACTIONS(325),
    [sym_nop_opcode] = ACTIONS(325),
    [sym_ora_opcode] = ACTIONS(325),
    [sym_pha_opcode] = ACTIONS(325),
    [sym_php_opcode] = ACTIONS(325),
    [sym_pla_opcode] = ACTIONS(325),
    [sym_plp_opcode] = ACTIONS(325),
    [sym_rol_opcode] = ACTIONS(325),
    [sym_ror_opcode] = ACTIONS(325),
    [sym_rti_opcode] = ACTIONS(325),
    [sym_rts_opcode] = ACTIONS(325),
    [sym_sbc_opcode] = ACTIONS(325),
    [sym_sec_opcode] = ACTIONS(325),
    [sym_sed_opcode] = ACTIONS(325),
    [sym_sei_opcode] = ACTIONS(325),
    [sym_sta_opcode] = ACTIONS(325),
    [sym_stx_opcode] = ACTIONS(325),
    [sym_sty_opcode] = ACTIONS(325),
    [sym_tax_opcode] = ACTIONS(325),
    [sym_tay_opcode] = ACTIONS(325),
    [sym_tsx_opcode] = ACTIONS(325),
    [sym_txa_opcode] = ACTIONS(325),
    [sym_tcs_opcode] = ACTIONS(325),
    [sym_tya_opcode] = ACTIONS(325),
    [sym_a16_ctrl_cmd] = ACTIONS(321),
    [sym_a8_ctrl_cmd] = ACTIONS(321),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(321),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(321),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(321),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(321),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(321),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(321),
  },
  [43] = {
    [aux_sym_bankbytes_ctrl_cmd_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(327),
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
    [sym_a16_ctrl_cmd] = ACTIONS(245),
    [sym_a8_ctrl_cmd] = ACTIONS(245),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(245),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(245),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(245),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(245),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(245),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(245),
  },
  [44] = {
    [aux_sym_asciiz_ctrl_cmd_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(330),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(330),
    [anon_sym_COMMA] = ACTIONS(332),
    [sym_adc_opcode] = ACTIONS(334),
    [sym_and_opcode] = ACTIONS(334),
    [sym_asl_opcode] = ACTIONS(334),
    [sym_bcc_opcode] = ACTIONS(334),
    [sym_bcs_opcode] = ACTIONS(334),
    [sym_beq_opcode] = ACTIONS(334),
    [sym_bit_opcode] = ACTIONS(334),
    [sym_bmi_opcode] = ACTIONS(334),
    [sym_bne_opcode] = ACTIONS(334),
    [sym_bpl_opcode] = ACTIONS(334),
    [sym_brk_opcode] = ACTIONS(334),
    [sym_bvc_opcode] = ACTIONS(334),
    [sym_bvs_opcode] = ACTIONS(334),
    [sym_clc_opcode] = ACTIONS(334),
    [sym_cld_opcode] = ACTIONS(334),
    [sym_cli_opcode] = ACTIONS(334),
    [sym_clv_opcode] = ACTIONS(334),
    [sym_cmp_opcode] = ACTIONS(334),
    [sym_cpx_opcode] = ACTIONS(334),
    [sym_cpy_opcode] = ACTIONS(334),
    [sym_dec_opcode] = ACTIONS(334),
    [sym_dex_opcode] = ACTIONS(334),
    [sym_dey_opcode] = ACTIONS(334),
    [sym_eor_opcode] = ACTIONS(334),
    [sym_inc_opcode] = ACTIONS(334),
    [sym_inx_opcode] = ACTIONS(334),
    [sym_iny_opcode] = ACTIONS(334),
    [sym_jmp_opcode] = ACTIONS(334),
    [sym_jsr_opcode] = ACTIONS(334),
    [sym_lda_opcode] = ACTIONS(334),
    [sym_ldx_opcode] = ACTIONS(334),
    [sym_ldy_opcode] = ACTIONS(334),
    [sym_lsr_opcode] = ACTIONS(334),
    [sym_nop_opcode] = ACTIONS(334),
    [sym_ora_opcode] = ACTIONS(334),
    [sym_pha_opcode] = ACTIONS(334),
    [sym_php_opcode] = ACTIONS(334),
    [sym_pla_opcode] = ACTIONS(334),
    [sym_plp_opcode] = ACTIONS(334),
    [sym_rol_opcode] = ACTIONS(334),
    [sym_ror_opcode] = ACTIONS(334),
    [sym_rti_opcode] = ACTIONS(334),
    [sym_rts_opcode] = ACTIONS(334),
    [sym_sbc_opcode] = ACTIONS(334),
    [sym_sec_opcode] = ACTIONS(334),
    [sym_sed_opcode] = ACTIONS(334),
    [sym_sei_opcode] = ACTIONS(334),
    [sym_sta_opcode] = ACTIONS(334),
    [sym_stx_opcode] = ACTIONS(334),
    [sym_sty_opcode] = ACTIONS(334),
    [sym_tax_opcode] = ACTIONS(334),
    [sym_tay_opcode] = ACTIONS(334),
    [sym_tsx_opcode] = ACTIONS(334),
    [sym_txa_opcode] = ACTIONS(334),
    [sym_tcs_opcode] = ACTIONS(334),
    [sym_tya_opcode] = ACTIONS(334),
    [sym_a16_ctrl_cmd] = ACTIONS(330),
    [sym_a8_ctrl_cmd] = ACTIONS(330),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(330),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(330),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(330),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(330),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(330),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(330),
  },
  [45] = {
    [aux_sym_bankbytes_ctrl_cmd_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(336),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(336),
    [anon_sym_COMMA] = ACTIONS(147),
    [sym_adc_opcode] = ACTIONS(338),
    [sym_and_opcode] = ACTIONS(338),
    [sym_asl_opcode] = ACTIONS(338),
    [sym_bcc_opcode] = ACTIONS(338),
    [sym_bcs_opcode] = ACTIONS(338),
    [sym_beq_opcode] = ACTIONS(338),
    [sym_bit_opcode] = ACTIONS(338),
    [sym_bmi_opcode] = ACTIONS(338),
    [sym_bne_opcode] = ACTIONS(338),
    [sym_bpl_opcode] = ACTIONS(338),
    [sym_brk_opcode] = ACTIONS(338),
    [sym_bvc_opcode] = ACTIONS(338),
    [sym_bvs_opcode] = ACTIONS(338),
    [sym_clc_opcode] = ACTIONS(338),
    [sym_cld_opcode] = ACTIONS(338),
    [sym_cli_opcode] = ACTIONS(338),
    [sym_clv_opcode] = ACTIONS(338),
    [sym_cmp_opcode] = ACTIONS(338),
    [sym_cpx_opcode] = ACTIONS(338),
    [sym_cpy_opcode] = ACTIONS(338),
    [sym_dec_opcode] = ACTIONS(338),
    [sym_dex_opcode] = ACTIONS(338),
    [sym_dey_opcode] = ACTIONS(338),
    [sym_eor_opcode] = ACTIONS(338),
    [sym_inc_opcode] = ACTIONS(338),
    [sym_inx_opcode] = ACTIONS(338),
    [sym_iny_opcode] = ACTIONS(338),
    [sym_jmp_opcode] = ACTIONS(338),
    [sym_jsr_opcode] = ACTIONS(338),
    [sym_lda_opcode] = ACTIONS(338),
    [sym_ldx_opcode] = ACTIONS(338),
    [sym_ldy_opcode] = ACTIONS(338),
    [sym_lsr_opcode] = ACTIONS(338),
    [sym_nop_opcode] = ACTIONS(338),
    [sym_ora_opcode] = ACTIONS(338),
    [sym_pha_opcode] = ACTIONS(338),
    [sym_php_opcode] = ACTIONS(338),
    [sym_pla_opcode] = ACTIONS(338),
    [sym_plp_opcode] = ACTIONS(338),
    [sym_rol_opcode] = ACTIONS(338),
    [sym_ror_opcode] = ACTIONS(338),
    [sym_rti_opcode] = ACTIONS(338),
    [sym_rts_opcode] = ACTIONS(338),
    [sym_sbc_opcode] = ACTIONS(338),
    [sym_sec_opcode] = ACTIONS(338),
    [sym_sed_opcode] = ACTIONS(338),
    [sym_sei_opcode] = ACTIONS(338),
    [sym_sta_opcode] = ACTIONS(338),
    [sym_stx_opcode] = ACTIONS(338),
    [sym_sty_opcode] = ACTIONS(338),
    [sym_tax_opcode] = ACTIONS(338),
    [sym_tay_opcode] = ACTIONS(338),
    [sym_tsx_opcode] = ACTIONS(338),
    [sym_txa_opcode] = ACTIONS(338),
    [sym_tcs_opcode] = ACTIONS(338),
    [sym_tya_opcode] = ACTIONS(338),
    [sym_a16_ctrl_cmd] = ACTIONS(336),
    [sym_a8_ctrl_cmd] = ACTIONS(336),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(336),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(336),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(336),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(336),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(336),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(336),
  },
  [46] = {
    [aux_sym_addr_ctrl_cmd_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(340),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(340),
    [anon_sym_COMMA] = ACTIONS(342),
    [sym_adc_opcode] = ACTIONS(345),
    [sym_and_opcode] = ACTIONS(345),
    [sym_asl_opcode] = ACTIONS(345),
    [sym_bcc_opcode] = ACTIONS(345),
    [sym_bcs_opcode] = ACTIONS(345),
    [sym_beq_opcode] = ACTIONS(345),
    [sym_bit_opcode] = ACTIONS(345),
    [sym_bmi_opcode] = ACTIONS(345),
    [sym_bne_opcode] = ACTIONS(345),
    [sym_bpl_opcode] = ACTIONS(345),
    [sym_brk_opcode] = ACTIONS(345),
    [sym_bvc_opcode] = ACTIONS(345),
    [sym_bvs_opcode] = ACTIONS(345),
    [sym_clc_opcode] = ACTIONS(345),
    [sym_cld_opcode] = ACTIONS(345),
    [sym_cli_opcode] = ACTIONS(345),
    [sym_clv_opcode] = ACTIONS(345),
    [sym_cmp_opcode] = ACTIONS(345),
    [sym_cpx_opcode] = ACTIONS(345),
    [sym_cpy_opcode] = ACTIONS(345),
    [sym_dec_opcode] = ACTIONS(345),
    [sym_dex_opcode] = ACTIONS(345),
    [sym_dey_opcode] = ACTIONS(345),
    [sym_eor_opcode] = ACTIONS(345),
    [sym_inc_opcode] = ACTIONS(345),
    [sym_inx_opcode] = ACTIONS(345),
    [sym_iny_opcode] = ACTIONS(345),
    [sym_jmp_opcode] = ACTIONS(345),
    [sym_jsr_opcode] = ACTIONS(345),
    [sym_lda_opcode] = ACTIONS(345),
    [sym_ldx_opcode] = ACTIONS(345),
    [sym_ldy_opcode] = ACTIONS(345),
    [sym_lsr_opcode] = ACTIONS(345),
    [sym_nop_opcode] = ACTIONS(345),
    [sym_ora_opcode] = ACTIONS(345),
    [sym_pha_opcode] = ACTIONS(345),
    [sym_php_opcode] = ACTIONS(345),
    [sym_pla_opcode] = ACTIONS(345),
    [sym_plp_opcode] = ACTIONS(345),
    [sym_rol_opcode] = ACTIONS(345),
    [sym_ror_opcode] = ACTIONS(345),
    [sym_rti_opcode] = ACTIONS(345),
    [sym_rts_opcode] = ACTIONS(345),
    [sym_sbc_opcode] = ACTIONS(345),
    [sym_sec_opcode] = ACTIONS(345),
    [sym_sed_opcode] = ACTIONS(345),
    [sym_sei_opcode] = ACTIONS(345),
    [sym_sta_opcode] = ACTIONS(345),
    [sym_stx_opcode] = ACTIONS(345),
    [sym_sty_opcode] = ACTIONS(345),
    [sym_tax_opcode] = ACTIONS(345),
    [sym_tay_opcode] = ACTIONS(345),
    [sym_tsx_opcode] = ACTIONS(345),
    [sym_txa_opcode] = ACTIONS(345),
    [sym_tcs_opcode] = ACTIONS(345),
    [sym_tya_opcode] = ACTIONS(345),
    [sym_a16_ctrl_cmd] = ACTIONS(340),
    [sym_a8_ctrl_cmd] = ACTIONS(340),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(340),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(340),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(340),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(340),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(340),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(340),
  },
  [47] = {
    [aux_sym_addr_ctrl_cmd_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(347),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(347),
    [anon_sym_COMMA] = ACTIONS(323),
    [sym_adc_opcode] = ACTIONS(349),
    [sym_and_opcode] = ACTIONS(349),
    [sym_asl_opcode] = ACTIONS(349),
    [sym_bcc_opcode] = ACTIONS(349),
    [sym_bcs_opcode] = ACTIONS(349),
    [sym_beq_opcode] = ACTIONS(349),
    [sym_bit_opcode] = ACTIONS(349),
    [sym_bmi_opcode] = ACTIONS(349),
    [sym_bne_opcode] = ACTIONS(349),
    [sym_bpl_opcode] = ACTIONS(349),
    [sym_brk_opcode] = ACTIONS(349),
    [sym_bvc_opcode] = ACTIONS(349),
    [sym_bvs_opcode] = ACTIONS(349),
    [sym_clc_opcode] = ACTIONS(349),
    [sym_cld_opcode] = ACTIONS(349),
    [sym_cli_opcode] = ACTIONS(349),
    [sym_clv_opcode] = ACTIONS(349),
    [sym_cmp_opcode] = ACTIONS(349),
    [sym_cpx_opcode] = ACTIONS(349),
    [sym_cpy_opcode] = ACTIONS(349),
    [sym_dec_opcode] = ACTIONS(349),
    [sym_dex_opcode] = ACTIONS(349),
    [sym_dey_opcode] = ACTIONS(349),
    [sym_eor_opcode] = ACTIONS(349),
    [sym_inc_opcode] = ACTIONS(349),
    [sym_inx_opcode] = ACTIONS(349),
    [sym_iny_opcode] = ACTIONS(349),
    [sym_jmp_opcode] = ACTIONS(349),
    [sym_jsr_opcode] = ACTIONS(349),
    [sym_lda_opcode] = ACTIONS(349),
    [sym_ldx_opcode] = ACTIONS(349),
    [sym_ldy_opcode] = ACTIONS(349),
    [sym_lsr_opcode] = ACTIONS(349),
    [sym_nop_opcode] = ACTIONS(349),
    [sym_ora_opcode] = ACTIONS(349),
    [sym_pha_opcode] = ACTIONS(349),
    [sym_php_opcode] = ACTIONS(349),
    [sym_pla_opcode] = ACTIONS(349),
    [sym_plp_opcode] = ACTIONS(349),
    [sym_rol_opcode] = ACTIONS(349),
    [sym_ror_opcode] = ACTIONS(349),
    [sym_rti_opcode] = ACTIONS(349),
    [sym_rts_opcode] = ACTIONS(349),
    [sym_sbc_opcode] = ACTIONS(349),
    [sym_sec_opcode] = ACTIONS(349),
    [sym_sed_opcode] = ACTIONS(349),
    [sym_sei_opcode] = ACTIONS(349),
    [sym_sta_opcode] = ACTIONS(349),
    [sym_stx_opcode] = ACTIONS(349),
    [sym_sty_opcode] = ACTIONS(349),
    [sym_tax_opcode] = ACTIONS(349),
    [sym_tay_opcode] = ACTIONS(349),
    [sym_tsx_opcode] = ACTIONS(349),
    [sym_txa_opcode] = ACTIONS(349),
    [sym_tcs_opcode] = ACTIONS(349),
    [sym_tya_opcode] = ACTIONS(349),
    [sym_a16_ctrl_cmd] = ACTIONS(347),
    [sym_a8_ctrl_cmd] = ACTIONS(347),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(347),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(347),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(347),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(347),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(347),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(347),
  },
  [48] = {
    [aux_sym_asciiz_ctrl_cmd_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(351),
    [anon_sym_COMMA] = ACTIONS(353),
    [sym_adc_opcode] = ACTIONS(356),
    [sym_and_opcode] = ACTIONS(356),
    [sym_asl_opcode] = ACTIONS(356),
    [sym_bcc_opcode] = ACTIONS(356),
    [sym_bcs_opcode] = ACTIONS(356),
    [sym_beq_opcode] = ACTIONS(356),
    [sym_bit_opcode] = ACTIONS(356),
    [sym_bmi_opcode] = ACTIONS(356),
    [sym_bne_opcode] = ACTIONS(356),
    [sym_bpl_opcode] = ACTIONS(356),
    [sym_brk_opcode] = ACTIONS(356),
    [sym_bvc_opcode] = ACTIONS(356),
    [sym_bvs_opcode] = ACTIONS(356),
    [sym_clc_opcode] = ACTIONS(356),
    [sym_cld_opcode] = ACTIONS(356),
    [sym_cli_opcode] = ACTIONS(356),
    [sym_clv_opcode] = ACTIONS(356),
    [sym_cmp_opcode] = ACTIONS(356),
    [sym_cpx_opcode] = ACTIONS(356),
    [sym_cpy_opcode] = ACTIONS(356),
    [sym_dec_opcode] = ACTIONS(356),
    [sym_dex_opcode] = ACTIONS(356),
    [sym_dey_opcode] = ACTIONS(356),
    [sym_eor_opcode] = ACTIONS(356),
    [sym_inc_opcode] = ACTIONS(356),
    [sym_inx_opcode] = ACTIONS(356),
    [sym_iny_opcode] = ACTIONS(356),
    [sym_jmp_opcode] = ACTIONS(356),
    [sym_jsr_opcode] = ACTIONS(356),
    [sym_lda_opcode] = ACTIONS(356),
    [sym_ldx_opcode] = ACTIONS(356),
    [sym_ldy_opcode] = ACTIONS(356),
    [sym_lsr_opcode] = ACTIONS(356),
    [sym_nop_opcode] = ACTIONS(356),
    [sym_ora_opcode] = ACTIONS(356),
    [sym_pha_opcode] = ACTIONS(356),
    [sym_php_opcode] = ACTIONS(356),
    [sym_pla_opcode] = ACTIONS(356),
    [sym_plp_opcode] = ACTIONS(356),
    [sym_rol_opcode] = ACTIONS(356),
    [sym_ror_opcode] = ACTIONS(356),
    [sym_rti_opcode] = ACTIONS(356),
    [sym_rts_opcode] = ACTIONS(356),
    [sym_sbc_opcode] = ACTIONS(356),
    [sym_sec_opcode] = ACTIONS(356),
    [sym_sed_opcode] = ACTIONS(356),
    [sym_sei_opcode] = ACTIONS(356),
    [sym_sta_opcode] = ACTIONS(356),
    [sym_stx_opcode] = ACTIONS(356),
    [sym_sty_opcode] = ACTIONS(356),
    [sym_tax_opcode] = ACTIONS(356),
    [sym_tay_opcode] = ACTIONS(356),
    [sym_tsx_opcode] = ACTIONS(356),
    [sym_txa_opcode] = ACTIONS(356),
    [sym_tcs_opcode] = ACTIONS(356),
    [sym_tya_opcode] = ACTIONS(356),
    [sym_a16_ctrl_cmd] = ACTIONS(351),
    [sym_a8_ctrl_cmd] = ACTIONS(351),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(351),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(351),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(351),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(351),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(351),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(351),
  },
  [49] = {
    [aux_sym_asciiz_ctrl_cmd_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(358),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(358),
    [anon_sym_COMMA] = ACTIONS(332),
    [sym_adc_opcode] = ACTIONS(360),
    [sym_and_opcode] = ACTIONS(360),
    [sym_asl_opcode] = ACTIONS(360),
    [sym_bcc_opcode] = ACTIONS(360),
    [sym_bcs_opcode] = ACTIONS(360),
    [sym_beq_opcode] = ACTIONS(360),
    [sym_bit_opcode] = ACTIONS(360),
    [sym_bmi_opcode] = ACTIONS(360),
    [sym_bne_opcode] = ACTIONS(360),
    [sym_bpl_opcode] = ACTIONS(360),
    [sym_brk_opcode] = ACTIONS(360),
    [sym_bvc_opcode] = ACTIONS(360),
    [sym_bvs_opcode] = ACTIONS(360),
    [sym_clc_opcode] = ACTIONS(360),
    [sym_cld_opcode] = ACTIONS(360),
    [sym_cli_opcode] = ACTIONS(360),
    [sym_clv_opcode] = ACTIONS(360),
    [sym_cmp_opcode] = ACTIONS(360),
    [sym_cpx_opcode] = ACTIONS(360),
    [sym_cpy_opcode] = ACTIONS(360),
    [sym_dec_opcode] = ACTIONS(360),
    [sym_dex_opcode] = ACTIONS(360),
    [sym_dey_opcode] = ACTIONS(360),
    [sym_eor_opcode] = ACTIONS(360),
    [sym_inc_opcode] = ACTIONS(360),
    [sym_inx_opcode] = ACTIONS(360),
    [sym_iny_opcode] = ACTIONS(360),
    [sym_jmp_opcode] = ACTIONS(360),
    [sym_jsr_opcode] = ACTIONS(360),
    [sym_lda_opcode] = ACTIONS(360),
    [sym_ldx_opcode] = ACTIONS(360),
    [sym_ldy_opcode] = ACTIONS(360),
    [sym_lsr_opcode] = ACTIONS(360),
    [sym_nop_opcode] = ACTIONS(360),
    [sym_ora_opcode] = ACTIONS(360),
    [sym_pha_opcode] = ACTIONS(360),
    [sym_php_opcode] = ACTIONS(360),
    [sym_pla_opcode] = ACTIONS(360),
    [sym_plp_opcode] = ACTIONS(360),
    [sym_rol_opcode] = ACTIONS(360),
    [sym_ror_opcode] = ACTIONS(360),
    [sym_rti_opcode] = ACTIONS(360),
    [sym_rts_opcode] = ACTIONS(360),
    [sym_sbc_opcode] = ACTIONS(360),
    [sym_sec_opcode] = ACTIONS(360),
    [sym_sed_opcode] = ACTIONS(360),
    [sym_sei_opcode] = ACTIONS(360),
    [sym_sta_opcode] = ACTIONS(360),
    [sym_stx_opcode] = ACTIONS(360),
    [sym_sty_opcode] = ACTIONS(360),
    [sym_tax_opcode] = ACTIONS(360),
    [sym_tay_opcode] = ACTIONS(360),
    [sym_tsx_opcode] = ACTIONS(360),
    [sym_txa_opcode] = ACTIONS(360),
    [sym_tcs_opcode] = ACTIONS(360),
    [sym_tya_opcode] = ACTIONS(360),
    [sym_a16_ctrl_cmd] = ACTIONS(358),
    [sym_a8_ctrl_cmd] = ACTIONS(358),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(358),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(358),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(358),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(358),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(358),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(358),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(362),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(362),
    [anon_sym_COMMA] = ACTIONS(364),
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
    [sym_a16_ctrl_cmd] = ACTIONS(362),
    [sym_a8_ctrl_cmd] = ACTIONS(362),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(362),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(362),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(362),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(362),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(362),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(362),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(340),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(340),
    [anon_sym_COMMA] = ACTIONS(340),
    [sym_adc_opcode] = ACTIONS(345),
    [sym_and_opcode] = ACTIONS(345),
    [sym_asl_opcode] = ACTIONS(345),
    [sym_bcc_opcode] = ACTIONS(345),
    [sym_bcs_opcode] = ACTIONS(345),
    [sym_beq_opcode] = ACTIONS(345),
    [sym_bit_opcode] = ACTIONS(345),
    [sym_bmi_opcode] = ACTIONS(345),
    [sym_bne_opcode] = ACTIONS(345),
    [sym_bpl_opcode] = ACTIONS(345),
    [sym_brk_opcode] = ACTIONS(345),
    [sym_bvc_opcode] = ACTIONS(345),
    [sym_bvs_opcode] = ACTIONS(345),
    [sym_clc_opcode] = ACTIONS(345),
    [sym_cld_opcode] = ACTIONS(345),
    [sym_cli_opcode] = ACTIONS(345),
    [sym_clv_opcode] = ACTIONS(345),
    [sym_cmp_opcode] = ACTIONS(345),
    [sym_cpx_opcode] = ACTIONS(345),
    [sym_cpy_opcode] = ACTIONS(345),
    [sym_dec_opcode] = ACTIONS(345),
    [sym_dex_opcode] = ACTIONS(345),
    [sym_dey_opcode] = ACTIONS(345),
    [sym_eor_opcode] = ACTIONS(345),
    [sym_inc_opcode] = ACTIONS(345),
    [sym_inx_opcode] = ACTIONS(345),
    [sym_iny_opcode] = ACTIONS(345),
    [sym_jmp_opcode] = ACTIONS(345),
    [sym_jsr_opcode] = ACTIONS(345),
    [sym_lda_opcode] = ACTIONS(345),
    [sym_ldx_opcode] = ACTIONS(345),
    [sym_ldy_opcode] = ACTIONS(345),
    [sym_lsr_opcode] = ACTIONS(345),
    [sym_nop_opcode] = ACTIONS(345),
    [sym_ora_opcode] = ACTIONS(345),
    [sym_pha_opcode] = ACTIONS(345),
    [sym_php_opcode] = ACTIONS(345),
    [sym_pla_opcode] = ACTIONS(345),
    [sym_plp_opcode] = ACTIONS(345),
    [sym_rol_opcode] = ACTIONS(345),
    [sym_ror_opcode] = ACTIONS(345),
    [sym_rti_opcode] = ACTIONS(345),
    [sym_rts_opcode] = ACTIONS(345),
    [sym_sbc_opcode] = ACTIONS(345),
    [sym_sec_opcode] = ACTIONS(345),
    [sym_sed_opcode] = ACTIONS(345),
    [sym_sei_opcode] = ACTIONS(345),
    [sym_sta_opcode] = ACTIONS(345),
    [sym_stx_opcode] = ACTIONS(345),
    [sym_sty_opcode] = ACTIONS(345),
    [sym_tax_opcode] = ACTIONS(345),
    [sym_tay_opcode] = ACTIONS(345),
    [sym_tsx_opcode] = ACTIONS(345),
    [sym_txa_opcode] = ACTIONS(345),
    [sym_tcs_opcode] = ACTIONS(345),
    [sym_tya_opcode] = ACTIONS(345),
    [sym_a16_ctrl_cmd] = ACTIONS(340),
    [sym_a8_ctrl_cmd] = ACTIONS(340),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(340),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(340),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(340),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(340),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(340),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(340),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(368),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(368),
    [anon_sym_COMMA] = ACTIONS(370),
    [sym_adc_opcode] = ACTIONS(372),
    [sym_and_opcode] = ACTIONS(372),
    [sym_asl_opcode] = ACTIONS(372),
    [sym_bcc_opcode] = ACTIONS(372),
    [sym_bcs_opcode] = ACTIONS(372),
    [sym_beq_opcode] = ACTIONS(372),
    [sym_bit_opcode] = ACTIONS(372),
    [sym_bmi_opcode] = ACTIONS(372),
    [sym_bne_opcode] = ACTIONS(372),
    [sym_bpl_opcode] = ACTIONS(372),
    [sym_brk_opcode] = ACTIONS(372),
    [sym_bvc_opcode] = ACTIONS(372),
    [sym_bvs_opcode] = ACTIONS(372),
    [sym_clc_opcode] = ACTIONS(372),
    [sym_cld_opcode] = ACTIONS(372),
    [sym_cli_opcode] = ACTIONS(372),
    [sym_clv_opcode] = ACTIONS(372),
    [sym_cmp_opcode] = ACTIONS(372),
    [sym_cpx_opcode] = ACTIONS(372),
    [sym_cpy_opcode] = ACTIONS(372),
    [sym_dec_opcode] = ACTIONS(372),
    [sym_dex_opcode] = ACTIONS(372),
    [sym_dey_opcode] = ACTIONS(372),
    [sym_eor_opcode] = ACTIONS(372),
    [sym_inc_opcode] = ACTIONS(372),
    [sym_inx_opcode] = ACTIONS(372),
    [sym_iny_opcode] = ACTIONS(372),
    [sym_jmp_opcode] = ACTIONS(372),
    [sym_jsr_opcode] = ACTIONS(372),
    [sym_lda_opcode] = ACTIONS(372),
    [sym_ldx_opcode] = ACTIONS(372),
    [sym_ldy_opcode] = ACTIONS(372),
    [sym_lsr_opcode] = ACTIONS(372),
    [sym_nop_opcode] = ACTIONS(372),
    [sym_ora_opcode] = ACTIONS(372),
    [sym_pha_opcode] = ACTIONS(372),
    [sym_php_opcode] = ACTIONS(372),
    [sym_pla_opcode] = ACTIONS(372),
    [sym_plp_opcode] = ACTIONS(372),
    [sym_rol_opcode] = ACTIONS(372),
    [sym_ror_opcode] = ACTIONS(372),
    [sym_rti_opcode] = ACTIONS(372),
    [sym_rts_opcode] = ACTIONS(372),
    [sym_sbc_opcode] = ACTIONS(372),
    [sym_sec_opcode] = ACTIONS(372),
    [sym_sed_opcode] = ACTIONS(372),
    [sym_sei_opcode] = ACTIONS(372),
    [sym_sta_opcode] = ACTIONS(372),
    [sym_stx_opcode] = ACTIONS(372),
    [sym_sty_opcode] = ACTIONS(372),
    [sym_tax_opcode] = ACTIONS(372),
    [sym_tay_opcode] = ACTIONS(372),
    [sym_tsx_opcode] = ACTIONS(372),
    [sym_txa_opcode] = ACTIONS(372),
    [sym_tcs_opcode] = ACTIONS(372),
    [sym_tya_opcode] = ACTIONS(372),
    [sym_a16_ctrl_cmd] = ACTIONS(368),
    [sym_a8_ctrl_cmd] = ACTIONS(368),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(368),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(368),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(368),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(368),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(368),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(368),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(362),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(362),
    [anon_sym_COMMA] = ACTIONS(374),
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
    [sym_a16_ctrl_cmd] = ACTIONS(362),
    [sym_a8_ctrl_cmd] = ACTIONS(362),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(362),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(362),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(362),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(362),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(362),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(362),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(376),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(376),
    [anon_sym_COMMA] = ACTIONS(378),
    [sym_adc_opcode] = ACTIONS(380),
    [sym_and_opcode] = ACTIONS(380),
    [sym_asl_opcode] = ACTIONS(380),
    [sym_bcc_opcode] = ACTIONS(380),
    [sym_bcs_opcode] = ACTIONS(380),
    [sym_beq_opcode] = ACTIONS(380),
    [sym_bit_opcode] = ACTIONS(380),
    [sym_bmi_opcode] = ACTIONS(380),
    [sym_bne_opcode] = ACTIONS(380),
    [sym_bpl_opcode] = ACTIONS(380),
    [sym_brk_opcode] = ACTIONS(380),
    [sym_bvc_opcode] = ACTIONS(380),
    [sym_bvs_opcode] = ACTIONS(380),
    [sym_clc_opcode] = ACTIONS(380),
    [sym_cld_opcode] = ACTIONS(380),
    [sym_cli_opcode] = ACTIONS(380),
    [sym_clv_opcode] = ACTIONS(380),
    [sym_cmp_opcode] = ACTIONS(380),
    [sym_cpx_opcode] = ACTIONS(380),
    [sym_cpy_opcode] = ACTIONS(380),
    [sym_dec_opcode] = ACTIONS(380),
    [sym_dex_opcode] = ACTIONS(380),
    [sym_dey_opcode] = ACTIONS(380),
    [sym_eor_opcode] = ACTIONS(380),
    [sym_inc_opcode] = ACTIONS(380),
    [sym_inx_opcode] = ACTIONS(380),
    [sym_iny_opcode] = ACTIONS(380),
    [sym_jmp_opcode] = ACTIONS(380),
    [sym_jsr_opcode] = ACTIONS(380),
    [sym_lda_opcode] = ACTIONS(380),
    [sym_ldx_opcode] = ACTIONS(380),
    [sym_ldy_opcode] = ACTIONS(380),
    [sym_lsr_opcode] = ACTIONS(380),
    [sym_nop_opcode] = ACTIONS(380),
    [sym_ora_opcode] = ACTIONS(380),
    [sym_pha_opcode] = ACTIONS(380),
    [sym_php_opcode] = ACTIONS(380),
    [sym_pla_opcode] = ACTIONS(380),
    [sym_plp_opcode] = ACTIONS(380),
    [sym_rol_opcode] = ACTIONS(380),
    [sym_ror_opcode] = ACTIONS(380),
    [sym_rti_opcode] = ACTIONS(380),
    [sym_rts_opcode] = ACTIONS(380),
    [sym_sbc_opcode] = ACTIONS(380),
    [sym_sec_opcode] = ACTIONS(380),
    [sym_sed_opcode] = ACTIONS(380),
    [sym_sei_opcode] = ACTIONS(380),
    [sym_sta_opcode] = ACTIONS(380),
    [sym_stx_opcode] = ACTIONS(380),
    [sym_sty_opcode] = ACTIONS(380),
    [sym_tax_opcode] = ACTIONS(380),
    [sym_tay_opcode] = ACTIONS(380),
    [sym_tsx_opcode] = ACTIONS(380),
    [sym_txa_opcode] = ACTIONS(380),
    [sym_tcs_opcode] = ACTIONS(380),
    [sym_tya_opcode] = ACTIONS(380),
    [sym_a16_ctrl_cmd] = ACTIONS(376),
    [sym_a8_ctrl_cmd] = ACTIONS(376),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(376),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(376),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(376),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(376),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(376),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(376),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(382),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(382),
    [anon_sym_COMMA] = ACTIONS(382),
    [sym_adc_opcode] = ACTIONS(384),
    [sym_and_opcode] = ACTIONS(384),
    [sym_asl_opcode] = ACTIONS(384),
    [sym_bcc_opcode] = ACTIONS(384),
    [sym_bcs_opcode] = ACTIONS(384),
    [sym_beq_opcode] = ACTIONS(384),
    [sym_bit_opcode] = ACTIONS(384),
    [sym_bmi_opcode] = ACTIONS(384),
    [sym_bne_opcode] = ACTIONS(384),
    [sym_bpl_opcode] = ACTIONS(384),
    [sym_brk_opcode] = ACTIONS(384),
    [sym_bvc_opcode] = ACTIONS(384),
    [sym_bvs_opcode] = ACTIONS(384),
    [sym_clc_opcode] = ACTIONS(384),
    [sym_cld_opcode] = ACTIONS(384),
    [sym_cli_opcode] = ACTIONS(384),
    [sym_clv_opcode] = ACTIONS(384),
    [sym_cmp_opcode] = ACTIONS(384),
    [sym_cpx_opcode] = ACTIONS(384),
    [sym_cpy_opcode] = ACTIONS(384),
    [sym_dec_opcode] = ACTIONS(384),
    [sym_dex_opcode] = ACTIONS(384),
    [sym_dey_opcode] = ACTIONS(384),
    [sym_eor_opcode] = ACTIONS(384),
    [sym_inc_opcode] = ACTIONS(384),
    [sym_inx_opcode] = ACTIONS(384),
    [sym_iny_opcode] = ACTIONS(384),
    [sym_jmp_opcode] = ACTIONS(384),
    [sym_jsr_opcode] = ACTIONS(384),
    [sym_lda_opcode] = ACTIONS(384),
    [sym_ldx_opcode] = ACTIONS(384),
    [sym_ldy_opcode] = ACTIONS(384),
    [sym_lsr_opcode] = ACTIONS(384),
    [sym_nop_opcode] = ACTIONS(384),
    [sym_ora_opcode] = ACTIONS(384),
    [sym_pha_opcode] = ACTIONS(384),
    [sym_php_opcode] = ACTIONS(384),
    [sym_pla_opcode] = ACTIONS(384),
    [sym_plp_opcode] = ACTIONS(384),
    [sym_rol_opcode] = ACTIONS(384),
    [sym_ror_opcode] = ACTIONS(384),
    [sym_rti_opcode] = ACTIONS(384),
    [sym_rts_opcode] = ACTIONS(384),
    [sym_sbc_opcode] = ACTIONS(384),
    [sym_sec_opcode] = ACTIONS(384),
    [sym_sed_opcode] = ACTIONS(384),
    [sym_sei_opcode] = ACTIONS(384),
    [sym_sta_opcode] = ACTIONS(384),
    [sym_stx_opcode] = ACTIONS(384),
    [sym_sty_opcode] = ACTIONS(384),
    [sym_tax_opcode] = ACTIONS(384),
    [sym_tay_opcode] = ACTIONS(384),
    [sym_tsx_opcode] = ACTIONS(384),
    [sym_txa_opcode] = ACTIONS(384),
    [sym_tcs_opcode] = ACTIONS(384),
    [sym_tya_opcode] = ACTIONS(384),
    [sym_a16_ctrl_cmd] = ACTIONS(382),
    [sym_a8_ctrl_cmd] = ACTIONS(382),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(382),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(382),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(382),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(382),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(382),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(382),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(111),
    [anon_sym_COMMA] = ACTIONS(205),
    [sym_adc_opcode] = ACTIONS(114),
    [sym_and_opcode] = ACTIONS(114),
    [sym_asl_opcode] = ACTIONS(114),
    [sym_bcc_opcode] = ACTIONS(114),
    [sym_bcs_opcode] = ACTIONS(114),
    [sym_beq_opcode] = ACTIONS(114),
    [sym_bit_opcode] = ACTIONS(114),
    [sym_bmi_opcode] = ACTIONS(114),
    [sym_bne_opcode] = ACTIONS(114),
    [sym_bpl_opcode] = ACTIONS(114),
    [sym_brk_opcode] = ACTIONS(114),
    [sym_bvc_opcode] = ACTIONS(114),
    [sym_bvs_opcode] = ACTIONS(114),
    [sym_clc_opcode] = ACTIONS(114),
    [sym_cld_opcode] = ACTIONS(114),
    [sym_cli_opcode] = ACTIONS(114),
    [sym_clv_opcode] = ACTIONS(114),
    [sym_cmp_opcode] = ACTIONS(114),
    [sym_cpx_opcode] = ACTIONS(114),
    [sym_cpy_opcode] = ACTIONS(114),
    [sym_dec_opcode] = ACTIONS(114),
    [sym_dex_opcode] = ACTIONS(114),
    [sym_dey_opcode] = ACTIONS(114),
    [sym_eor_opcode] = ACTIONS(114),
    [sym_inc_opcode] = ACTIONS(114),
    [sym_inx_opcode] = ACTIONS(114),
    [sym_iny_opcode] = ACTIONS(114),
    [sym_jmp_opcode] = ACTIONS(114),
    [sym_jsr_opcode] = ACTIONS(114),
    [sym_lda_opcode] = ACTIONS(114),
    [sym_ldx_opcode] = ACTIONS(114),
    [sym_ldy_opcode] = ACTIONS(114),
    [sym_lsr_opcode] = ACTIONS(114),
    [sym_nop_opcode] = ACTIONS(114),
    [sym_ora_opcode] = ACTIONS(114),
    [sym_pha_opcode] = ACTIONS(114),
    [sym_php_opcode] = ACTIONS(114),
    [sym_pla_opcode] = ACTIONS(114),
    [sym_plp_opcode] = ACTIONS(114),
    [sym_rol_opcode] = ACTIONS(114),
    [sym_ror_opcode] = ACTIONS(114),
    [sym_rti_opcode] = ACTIONS(114),
    [sym_rts_opcode] = ACTIONS(114),
    [sym_sbc_opcode] = ACTIONS(114),
    [sym_sec_opcode] = ACTIONS(114),
    [sym_sed_opcode] = ACTIONS(114),
    [sym_sei_opcode] = ACTIONS(114),
    [sym_sta_opcode] = ACTIONS(114),
    [sym_stx_opcode] = ACTIONS(114),
    [sym_sty_opcode] = ACTIONS(114),
    [sym_tax_opcode] = ACTIONS(114),
    [sym_tay_opcode] = ACTIONS(114),
    [sym_tsx_opcode] = ACTIONS(114),
    [sym_txa_opcode] = ACTIONS(114),
    [sym_tcs_opcode] = ACTIONS(114),
    [sym_tya_opcode] = ACTIONS(114),
    [sym_a16_ctrl_cmd] = ACTIONS(111),
    [sym_a8_ctrl_cmd] = ACTIONS(111),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(111),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(111),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(111),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(111),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(111),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(111),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(368),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(368),
    [anon_sym_COMMA] = ACTIONS(386),
    [sym_adc_opcode] = ACTIONS(372),
    [sym_and_opcode] = ACTIONS(372),
    [sym_asl_opcode] = ACTIONS(372),
    [sym_bcc_opcode] = ACTIONS(372),
    [sym_bcs_opcode] = ACTIONS(372),
    [sym_beq_opcode] = ACTIONS(372),
    [sym_bit_opcode] = ACTIONS(372),
    [sym_bmi_opcode] = ACTIONS(372),
    [sym_bne_opcode] = ACTIONS(372),
    [sym_bpl_opcode] = ACTIONS(372),
    [sym_brk_opcode] = ACTIONS(372),
    [sym_bvc_opcode] = ACTIONS(372),
    [sym_bvs_opcode] = ACTIONS(372),
    [sym_clc_opcode] = ACTIONS(372),
    [sym_cld_opcode] = ACTIONS(372),
    [sym_cli_opcode] = ACTIONS(372),
    [sym_clv_opcode] = ACTIONS(372),
    [sym_cmp_opcode] = ACTIONS(372),
    [sym_cpx_opcode] = ACTIONS(372),
    [sym_cpy_opcode] = ACTIONS(372),
    [sym_dec_opcode] = ACTIONS(372),
    [sym_dex_opcode] = ACTIONS(372),
    [sym_dey_opcode] = ACTIONS(372),
    [sym_eor_opcode] = ACTIONS(372),
    [sym_inc_opcode] = ACTIONS(372),
    [sym_inx_opcode] = ACTIONS(372),
    [sym_iny_opcode] = ACTIONS(372),
    [sym_jmp_opcode] = ACTIONS(372),
    [sym_jsr_opcode] = ACTIONS(372),
    [sym_lda_opcode] = ACTIONS(372),
    [sym_ldx_opcode] = ACTIONS(372),
    [sym_ldy_opcode] = ACTIONS(372),
    [sym_lsr_opcode] = ACTIONS(372),
    [sym_nop_opcode] = ACTIONS(372),
    [sym_ora_opcode] = ACTIONS(372),
    [sym_pha_opcode] = ACTIONS(372),
    [sym_php_opcode] = ACTIONS(372),
    [sym_pla_opcode] = ACTIONS(372),
    [sym_plp_opcode] = ACTIONS(372),
    [sym_rol_opcode] = ACTIONS(372),
    [sym_ror_opcode] = ACTIONS(372),
    [sym_rti_opcode] = ACTIONS(372),
    [sym_rts_opcode] = ACTIONS(372),
    [sym_sbc_opcode] = ACTIONS(372),
    [sym_sec_opcode] = ACTIONS(372),
    [sym_sed_opcode] = ACTIONS(372),
    [sym_sei_opcode] = ACTIONS(372),
    [sym_sta_opcode] = ACTIONS(372),
    [sym_stx_opcode] = ACTIONS(372),
    [sym_sty_opcode] = ACTIONS(372),
    [sym_tax_opcode] = ACTIONS(372),
    [sym_tay_opcode] = ACTIONS(372),
    [sym_tsx_opcode] = ACTIONS(372),
    [sym_txa_opcode] = ACTIONS(372),
    [sym_tcs_opcode] = ACTIONS(372),
    [sym_tya_opcode] = ACTIONS(372),
    [sym_a16_ctrl_cmd] = ACTIONS(368),
    [sym_a8_ctrl_cmd] = ACTIONS(368),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(368),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(368),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(368),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(368),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(368),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(368),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(351),
    [anon_sym_COMMA] = ACTIONS(351),
    [sym_adc_opcode] = ACTIONS(356),
    [sym_and_opcode] = ACTIONS(356),
    [sym_asl_opcode] = ACTIONS(356),
    [sym_bcc_opcode] = ACTIONS(356),
    [sym_bcs_opcode] = ACTIONS(356),
    [sym_beq_opcode] = ACTIONS(356),
    [sym_bit_opcode] = ACTIONS(356),
    [sym_bmi_opcode] = ACTIONS(356),
    [sym_bne_opcode] = ACTIONS(356),
    [sym_bpl_opcode] = ACTIONS(356),
    [sym_brk_opcode] = ACTIONS(356),
    [sym_bvc_opcode] = ACTIONS(356),
    [sym_bvs_opcode] = ACTIONS(356),
    [sym_clc_opcode] = ACTIONS(356),
    [sym_cld_opcode] = ACTIONS(356),
    [sym_cli_opcode] = ACTIONS(356),
    [sym_clv_opcode] = ACTIONS(356),
    [sym_cmp_opcode] = ACTIONS(356),
    [sym_cpx_opcode] = ACTIONS(356),
    [sym_cpy_opcode] = ACTIONS(356),
    [sym_dec_opcode] = ACTIONS(356),
    [sym_dex_opcode] = ACTIONS(356),
    [sym_dey_opcode] = ACTIONS(356),
    [sym_eor_opcode] = ACTIONS(356),
    [sym_inc_opcode] = ACTIONS(356),
    [sym_inx_opcode] = ACTIONS(356),
    [sym_iny_opcode] = ACTIONS(356),
    [sym_jmp_opcode] = ACTIONS(356),
    [sym_jsr_opcode] = ACTIONS(356),
    [sym_lda_opcode] = ACTIONS(356),
    [sym_ldx_opcode] = ACTIONS(356),
    [sym_ldy_opcode] = ACTIONS(356),
    [sym_lsr_opcode] = ACTIONS(356),
    [sym_nop_opcode] = ACTIONS(356),
    [sym_ora_opcode] = ACTIONS(356),
    [sym_pha_opcode] = ACTIONS(356),
    [sym_php_opcode] = ACTIONS(356),
    [sym_pla_opcode] = ACTIONS(356),
    [sym_plp_opcode] = ACTIONS(356),
    [sym_rol_opcode] = ACTIONS(356),
    [sym_ror_opcode] = ACTIONS(356),
    [sym_rti_opcode] = ACTIONS(356),
    [sym_rts_opcode] = ACTIONS(356),
    [sym_sbc_opcode] = ACTIONS(356),
    [sym_sec_opcode] = ACTIONS(356),
    [sym_sed_opcode] = ACTIONS(356),
    [sym_sei_opcode] = ACTIONS(356),
    [sym_sta_opcode] = ACTIONS(356),
    [sym_stx_opcode] = ACTIONS(356),
    [sym_sty_opcode] = ACTIONS(356),
    [sym_tax_opcode] = ACTIONS(356),
    [sym_tay_opcode] = ACTIONS(356),
    [sym_tsx_opcode] = ACTIONS(356),
    [sym_txa_opcode] = ACTIONS(356),
    [sym_tcs_opcode] = ACTIONS(356),
    [sym_tya_opcode] = ACTIONS(356),
    [sym_a16_ctrl_cmd] = ACTIONS(351),
    [sym_a8_ctrl_cmd] = ACTIONS(351),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(351),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(351),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(351),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(351),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(351),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(351),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(362),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(362),
    [anon_sym_COMMA] = ACTIONS(388),
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
    [sym_a16_ctrl_cmd] = ACTIONS(362),
    [sym_a8_ctrl_cmd] = ACTIONS(362),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(362),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(362),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(362),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(362),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(362),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(362),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(390),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(390),
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
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(394),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(394),
    [sym_adc_opcode] = ACTIONS(396),
    [sym_and_opcode] = ACTIONS(396),
    [sym_asl_opcode] = ACTIONS(396),
    [sym_bcc_opcode] = ACTIONS(396),
    [sym_bcs_opcode] = ACTIONS(396),
    [sym_beq_opcode] = ACTIONS(396),
    [sym_bit_opcode] = ACTIONS(396),
    [sym_bmi_opcode] = ACTIONS(396),
    [sym_bne_opcode] = ACTIONS(396),
    [sym_bpl_opcode] = ACTIONS(396),
    [sym_brk_opcode] = ACTIONS(396),
    [sym_bvc_opcode] = ACTIONS(396),
    [sym_bvs_opcode] = ACTIONS(396),
    [sym_clc_opcode] = ACTIONS(396),
    [sym_cld_opcode] = ACTIONS(396),
    [sym_cli_opcode] = ACTIONS(396),
    [sym_clv_opcode] = ACTIONS(396),
    [sym_cmp_opcode] = ACTIONS(396),
    [sym_cpx_opcode] = ACTIONS(396),
    [sym_cpy_opcode] = ACTIONS(396),
    [sym_dec_opcode] = ACTIONS(396),
    [sym_dex_opcode] = ACTIONS(396),
    [sym_dey_opcode] = ACTIONS(396),
    [sym_eor_opcode] = ACTIONS(396),
    [sym_inc_opcode] = ACTIONS(396),
    [sym_inx_opcode] = ACTIONS(396),
    [sym_iny_opcode] = ACTIONS(396),
    [sym_jmp_opcode] = ACTIONS(396),
    [sym_jsr_opcode] = ACTIONS(396),
    [sym_lda_opcode] = ACTIONS(396),
    [sym_ldx_opcode] = ACTIONS(396),
    [sym_ldy_opcode] = ACTIONS(396),
    [sym_lsr_opcode] = ACTIONS(396),
    [sym_nop_opcode] = ACTIONS(396),
    [sym_ora_opcode] = ACTIONS(396),
    [sym_pha_opcode] = ACTIONS(396),
    [sym_php_opcode] = ACTIONS(396),
    [sym_pla_opcode] = ACTIONS(396),
    [sym_plp_opcode] = ACTIONS(396),
    [sym_rol_opcode] = ACTIONS(396),
    [sym_ror_opcode] = ACTIONS(396),
    [sym_rti_opcode] = ACTIONS(396),
    [sym_rts_opcode] = ACTIONS(396),
    [sym_sbc_opcode] = ACTIONS(396),
    [sym_sec_opcode] = ACTIONS(396),
    [sym_sed_opcode] = ACTIONS(396),
    [sym_sei_opcode] = ACTIONS(396),
    [sym_sta_opcode] = ACTIONS(396),
    [sym_stx_opcode] = ACTIONS(396),
    [sym_sty_opcode] = ACTIONS(396),
    [sym_tax_opcode] = ACTIONS(396),
    [sym_tay_opcode] = ACTIONS(396),
    [sym_tsx_opcode] = ACTIONS(396),
    [sym_txa_opcode] = ACTIONS(396),
    [sym_tcs_opcode] = ACTIONS(396),
    [sym_tya_opcode] = ACTIONS(396),
    [sym_a16_ctrl_cmd] = ACTIONS(394),
    [sym_a8_ctrl_cmd] = ACTIONS(394),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(394),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(394),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(394),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(394),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(394),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(394),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(398),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(398),
    [sym_adc_opcode] = ACTIONS(400),
    [sym_and_opcode] = ACTIONS(400),
    [sym_asl_opcode] = ACTIONS(400),
    [sym_bcc_opcode] = ACTIONS(400),
    [sym_bcs_opcode] = ACTIONS(400),
    [sym_beq_opcode] = ACTIONS(400),
    [sym_bit_opcode] = ACTIONS(400),
    [sym_bmi_opcode] = ACTIONS(400),
    [sym_bne_opcode] = ACTIONS(400),
    [sym_bpl_opcode] = ACTIONS(400),
    [sym_brk_opcode] = ACTIONS(400),
    [sym_bvc_opcode] = ACTIONS(400),
    [sym_bvs_opcode] = ACTIONS(400),
    [sym_clc_opcode] = ACTIONS(400),
    [sym_cld_opcode] = ACTIONS(400),
    [sym_cli_opcode] = ACTIONS(400),
    [sym_clv_opcode] = ACTIONS(400),
    [sym_cmp_opcode] = ACTIONS(400),
    [sym_cpx_opcode] = ACTIONS(400),
    [sym_cpy_opcode] = ACTIONS(400),
    [sym_dec_opcode] = ACTIONS(400),
    [sym_dex_opcode] = ACTIONS(400),
    [sym_dey_opcode] = ACTIONS(400),
    [sym_eor_opcode] = ACTIONS(400),
    [sym_inc_opcode] = ACTIONS(400),
    [sym_inx_opcode] = ACTIONS(400),
    [sym_iny_opcode] = ACTIONS(400),
    [sym_jmp_opcode] = ACTIONS(400),
    [sym_jsr_opcode] = ACTIONS(400),
    [sym_lda_opcode] = ACTIONS(400),
    [sym_ldx_opcode] = ACTIONS(400),
    [sym_ldy_opcode] = ACTIONS(400),
    [sym_lsr_opcode] = ACTIONS(400),
    [sym_nop_opcode] = ACTIONS(400),
    [sym_ora_opcode] = ACTIONS(400),
    [sym_pha_opcode] = ACTIONS(400),
    [sym_php_opcode] = ACTIONS(400),
    [sym_pla_opcode] = ACTIONS(400),
    [sym_plp_opcode] = ACTIONS(400),
    [sym_rol_opcode] = ACTIONS(400),
    [sym_ror_opcode] = ACTIONS(400),
    [sym_rti_opcode] = ACTIONS(400),
    [sym_rts_opcode] = ACTIONS(400),
    [sym_sbc_opcode] = ACTIONS(400),
    [sym_sec_opcode] = ACTIONS(400),
    [sym_sed_opcode] = ACTIONS(400),
    [sym_sei_opcode] = ACTIONS(400),
    [sym_sta_opcode] = ACTIONS(400),
    [sym_stx_opcode] = ACTIONS(400),
    [sym_sty_opcode] = ACTIONS(400),
    [sym_tax_opcode] = ACTIONS(400),
    [sym_tay_opcode] = ACTIONS(400),
    [sym_tsx_opcode] = ACTIONS(400),
    [sym_txa_opcode] = ACTIONS(400),
    [sym_tcs_opcode] = ACTIONS(400),
    [sym_tya_opcode] = ACTIONS(400),
    [sym_a16_ctrl_cmd] = ACTIONS(398),
    [sym_a8_ctrl_cmd] = ACTIONS(398),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(398),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(398),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(398),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(398),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(398),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(398),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(402),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(402),
    [sym_adc_opcode] = ACTIONS(404),
    [sym_and_opcode] = ACTIONS(404),
    [sym_asl_opcode] = ACTIONS(404),
    [sym_bcc_opcode] = ACTIONS(404),
    [sym_bcs_opcode] = ACTIONS(404),
    [sym_beq_opcode] = ACTIONS(404),
    [sym_bit_opcode] = ACTIONS(404),
    [sym_bmi_opcode] = ACTIONS(404),
    [sym_bne_opcode] = ACTIONS(404),
    [sym_bpl_opcode] = ACTIONS(404),
    [sym_brk_opcode] = ACTIONS(404),
    [sym_bvc_opcode] = ACTIONS(404),
    [sym_bvs_opcode] = ACTIONS(404),
    [sym_clc_opcode] = ACTIONS(404),
    [sym_cld_opcode] = ACTIONS(404),
    [sym_cli_opcode] = ACTIONS(404),
    [sym_clv_opcode] = ACTIONS(404),
    [sym_cmp_opcode] = ACTIONS(404),
    [sym_cpx_opcode] = ACTIONS(404),
    [sym_cpy_opcode] = ACTIONS(404),
    [sym_dec_opcode] = ACTIONS(404),
    [sym_dex_opcode] = ACTIONS(404),
    [sym_dey_opcode] = ACTIONS(404),
    [sym_eor_opcode] = ACTIONS(404),
    [sym_inc_opcode] = ACTIONS(404),
    [sym_inx_opcode] = ACTIONS(404),
    [sym_iny_opcode] = ACTIONS(404),
    [sym_jmp_opcode] = ACTIONS(404),
    [sym_jsr_opcode] = ACTIONS(404),
    [sym_lda_opcode] = ACTIONS(404),
    [sym_ldx_opcode] = ACTIONS(404),
    [sym_ldy_opcode] = ACTIONS(404),
    [sym_lsr_opcode] = ACTIONS(404),
    [sym_nop_opcode] = ACTIONS(404),
    [sym_ora_opcode] = ACTIONS(404),
    [sym_pha_opcode] = ACTIONS(404),
    [sym_php_opcode] = ACTIONS(404),
    [sym_pla_opcode] = ACTIONS(404),
    [sym_plp_opcode] = ACTIONS(404),
    [sym_rol_opcode] = ACTIONS(404),
    [sym_ror_opcode] = ACTIONS(404),
    [sym_rti_opcode] = ACTIONS(404),
    [sym_rts_opcode] = ACTIONS(404),
    [sym_sbc_opcode] = ACTIONS(404),
    [sym_sec_opcode] = ACTIONS(404),
    [sym_sed_opcode] = ACTIONS(404),
    [sym_sei_opcode] = ACTIONS(404),
    [sym_sta_opcode] = ACTIONS(404),
    [sym_stx_opcode] = ACTIONS(404),
    [sym_sty_opcode] = ACTIONS(404),
    [sym_tax_opcode] = ACTIONS(404),
    [sym_tay_opcode] = ACTIONS(404),
    [sym_tsx_opcode] = ACTIONS(404),
    [sym_txa_opcode] = ACTIONS(404),
    [sym_tcs_opcode] = ACTIONS(404),
    [sym_tya_opcode] = ACTIONS(404),
    [sym_a16_ctrl_cmd] = ACTIONS(402),
    [sym_a8_ctrl_cmd] = ACTIONS(402),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(402),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(402),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(402),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(402),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(402),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(402),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(406),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(406),
    [sym_adc_opcode] = ACTIONS(408),
    [sym_and_opcode] = ACTIONS(408),
    [sym_asl_opcode] = ACTIONS(408),
    [sym_bcc_opcode] = ACTIONS(408),
    [sym_bcs_opcode] = ACTIONS(408),
    [sym_beq_opcode] = ACTIONS(408),
    [sym_bit_opcode] = ACTIONS(408),
    [sym_bmi_opcode] = ACTIONS(408),
    [sym_bne_opcode] = ACTIONS(408),
    [sym_bpl_opcode] = ACTIONS(408),
    [sym_brk_opcode] = ACTIONS(408),
    [sym_bvc_opcode] = ACTIONS(408),
    [sym_bvs_opcode] = ACTIONS(408),
    [sym_clc_opcode] = ACTIONS(408),
    [sym_cld_opcode] = ACTIONS(408),
    [sym_cli_opcode] = ACTIONS(408),
    [sym_clv_opcode] = ACTIONS(408),
    [sym_cmp_opcode] = ACTIONS(408),
    [sym_cpx_opcode] = ACTIONS(408),
    [sym_cpy_opcode] = ACTIONS(408),
    [sym_dec_opcode] = ACTIONS(408),
    [sym_dex_opcode] = ACTIONS(408),
    [sym_dey_opcode] = ACTIONS(408),
    [sym_eor_opcode] = ACTIONS(408),
    [sym_inc_opcode] = ACTIONS(408),
    [sym_inx_opcode] = ACTIONS(408),
    [sym_iny_opcode] = ACTIONS(408),
    [sym_jmp_opcode] = ACTIONS(408),
    [sym_jsr_opcode] = ACTIONS(408),
    [sym_lda_opcode] = ACTIONS(408),
    [sym_ldx_opcode] = ACTIONS(408),
    [sym_ldy_opcode] = ACTIONS(408),
    [sym_lsr_opcode] = ACTIONS(408),
    [sym_nop_opcode] = ACTIONS(408),
    [sym_ora_opcode] = ACTIONS(408),
    [sym_pha_opcode] = ACTIONS(408),
    [sym_php_opcode] = ACTIONS(408),
    [sym_pla_opcode] = ACTIONS(408),
    [sym_plp_opcode] = ACTIONS(408),
    [sym_rol_opcode] = ACTIONS(408),
    [sym_ror_opcode] = ACTIONS(408),
    [sym_rti_opcode] = ACTIONS(408),
    [sym_rts_opcode] = ACTIONS(408),
    [sym_sbc_opcode] = ACTIONS(408),
    [sym_sec_opcode] = ACTIONS(408),
    [sym_sed_opcode] = ACTIONS(408),
    [sym_sei_opcode] = ACTIONS(408),
    [sym_sta_opcode] = ACTIONS(408),
    [sym_stx_opcode] = ACTIONS(408),
    [sym_sty_opcode] = ACTIONS(408),
    [sym_tax_opcode] = ACTIONS(408),
    [sym_tay_opcode] = ACTIONS(408),
    [sym_tsx_opcode] = ACTIONS(408),
    [sym_txa_opcode] = ACTIONS(408),
    [sym_tcs_opcode] = ACTIONS(408),
    [sym_tya_opcode] = ACTIONS(408),
    [sym_a16_ctrl_cmd] = ACTIONS(406),
    [sym_a8_ctrl_cmd] = ACTIONS(406),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(406),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(406),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(406),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(406),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(406),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(406),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(410),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(410),
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
    [sym_a16_ctrl_cmd] = ACTIONS(410),
    [sym_a8_ctrl_cmd] = ACTIONS(410),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(410),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(410),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(410),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(410),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(410),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(410),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(414),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(414),
    [sym_adc_opcode] = ACTIONS(416),
    [sym_and_opcode] = ACTIONS(416),
    [sym_asl_opcode] = ACTIONS(416),
    [sym_bcc_opcode] = ACTIONS(416),
    [sym_bcs_opcode] = ACTIONS(416),
    [sym_beq_opcode] = ACTIONS(416),
    [sym_bit_opcode] = ACTIONS(416),
    [sym_bmi_opcode] = ACTIONS(416),
    [sym_bne_opcode] = ACTIONS(416),
    [sym_bpl_opcode] = ACTIONS(416),
    [sym_brk_opcode] = ACTIONS(416),
    [sym_bvc_opcode] = ACTIONS(416),
    [sym_bvs_opcode] = ACTIONS(416),
    [sym_clc_opcode] = ACTIONS(416),
    [sym_cld_opcode] = ACTIONS(416),
    [sym_cli_opcode] = ACTIONS(416),
    [sym_clv_opcode] = ACTIONS(416),
    [sym_cmp_opcode] = ACTIONS(416),
    [sym_cpx_opcode] = ACTIONS(416),
    [sym_cpy_opcode] = ACTIONS(416),
    [sym_dec_opcode] = ACTIONS(416),
    [sym_dex_opcode] = ACTIONS(416),
    [sym_dey_opcode] = ACTIONS(416),
    [sym_eor_opcode] = ACTIONS(416),
    [sym_inc_opcode] = ACTIONS(416),
    [sym_inx_opcode] = ACTIONS(416),
    [sym_iny_opcode] = ACTIONS(416),
    [sym_jmp_opcode] = ACTIONS(416),
    [sym_jsr_opcode] = ACTIONS(416),
    [sym_lda_opcode] = ACTIONS(416),
    [sym_ldx_opcode] = ACTIONS(416),
    [sym_ldy_opcode] = ACTIONS(416),
    [sym_lsr_opcode] = ACTIONS(416),
    [sym_nop_opcode] = ACTIONS(416),
    [sym_ora_opcode] = ACTIONS(416),
    [sym_pha_opcode] = ACTIONS(416),
    [sym_php_opcode] = ACTIONS(416),
    [sym_pla_opcode] = ACTIONS(416),
    [sym_plp_opcode] = ACTIONS(416),
    [sym_rol_opcode] = ACTIONS(416),
    [sym_ror_opcode] = ACTIONS(416),
    [sym_rti_opcode] = ACTIONS(416),
    [sym_rts_opcode] = ACTIONS(416),
    [sym_sbc_opcode] = ACTIONS(416),
    [sym_sec_opcode] = ACTIONS(416),
    [sym_sed_opcode] = ACTIONS(416),
    [sym_sei_opcode] = ACTIONS(416),
    [sym_sta_opcode] = ACTIONS(416),
    [sym_stx_opcode] = ACTIONS(416),
    [sym_sty_opcode] = ACTIONS(416),
    [sym_tax_opcode] = ACTIONS(416),
    [sym_tay_opcode] = ACTIONS(416),
    [sym_tsx_opcode] = ACTIONS(416),
    [sym_txa_opcode] = ACTIONS(416),
    [sym_tcs_opcode] = ACTIONS(416),
    [sym_tya_opcode] = ACTIONS(416),
    [sym_a16_ctrl_cmd] = ACTIONS(414),
    [sym_a8_ctrl_cmd] = ACTIONS(414),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(414),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(414),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(414),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(414),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(414),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(414),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(418),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(418),
    [sym_adc_opcode] = ACTIONS(420),
    [sym_and_opcode] = ACTIONS(420),
    [sym_asl_opcode] = ACTIONS(420),
    [sym_bcc_opcode] = ACTIONS(420),
    [sym_bcs_opcode] = ACTIONS(420),
    [sym_beq_opcode] = ACTIONS(420),
    [sym_bit_opcode] = ACTIONS(420),
    [sym_bmi_opcode] = ACTIONS(420),
    [sym_bne_opcode] = ACTIONS(420),
    [sym_bpl_opcode] = ACTIONS(420),
    [sym_brk_opcode] = ACTIONS(420),
    [sym_bvc_opcode] = ACTIONS(420),
    [sym_bvs_opcode] = ACTIONS(420),
    [sym_clc_opcode] = ACTIONS(420),
    [sym_cld_opcode] = ACTIONS(420),
    [sym_cli_opcode] = ACTIONS(420),
    [sym_clv_opcode] = ACTIONS(420),
    [sym_cmp_opcode] = ACTIONS(420),
    [sym_cpx_opcode] = ACTIONS(420),
    [sym_cpy_opcode] = ACTIONS(420),
    [sym_dec_opcode] = ACTIONS(420),
    [sym_dex_opcode] = ACTIONS(420),
    [sym_dey_opcode] = ACTIONS(420),
    [sym_eor_opcode] = ACTIONS(420),
    [sym_inc_opcode] = ACTIONS(420),
    [sym_inx_opcode] = ACTIONS(420),
    [sym_iny_opcode] = ACTIONS(420),
    [sym_jmp_opcode] = ACTIONS(420),
    [sym_jsr_opcode] = ACTIONS(420),
    [sym_lda_opcode] = ACTIONS(420),
    [sym_ldx_opcode] = ACTIONS(420),
    [sym_ldy_opcode] = ACTIONS(420),
    [sym_lsr_opcode] = ACTIONS(420),
    [sym_nop_opcode] = ACTIONS(420),
    [sym_ora_opcode] = ACTIONS(420),
    [sym_pha_opcode] = ACTIONS(420),
    [sym_php_opcode] = ACTIONS(420),
    [sym_pla_opcode] = ACTIONS(420),
    [sym_plp_opcode] = ACTIONS(420),
    [sym_rol_opcode] = ACTIONS(420),
    [sym_ror_opcode] = ACTIONS(420),
    [sym_rti_opcode] = ACTIONS(420),
    [sym_rts_opcode] = ACTIONS(420),
    [sym_sbc_opcode] = ACTIONS(420),
    [sym_sec_opcode] = ACTIONS(420),
    [sym_sed_opcode] = ACTIONS(420),
    [sym_sei_opcode] = ACTIONS(420),
    [sym_sta_opcode] = ACTIONS(420),
    [sym_stx_opcode] = ACTIONS(420),
    [sym_sty_opcode] = ACTIONS(420),
    [sym_tax_opcode] = ACTIONS(420),
    [sym_tay_opcode] = ACTIONS(420),
    [sym_tsx_opcode] = ACTIONS(420),
    [sym_txa_opcode] = ACTIONS(420),
    [sym_tcs_opcode] = ACTIONS(420),
    [sym_tya_opcode] = ACTIONS(420),
    [sym_a16_ctrl_cmd] = ACTIONS(418),
    [sym_a8_ctrl_cmd] = ACTIONS(418),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(418),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(418),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(418),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(418),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(418),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(418),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(422),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(422),
    [sym_adc_opcode] = ACTIONS(424),
    [sym_and_opcode] = ACTIONS(424),
    [sym_asl_opcode] = ACTIONS(424),
    [sym_bcc_opcode] = ACTIONS(424),
    [sym_bcs_opcode] = ACTIONS(424),
    [sym_beq_opcode] = ACTIONS(424),
    [sym_bit_opcode] = ACTIONS(424),
    [sym_bmi_opcode] = ACTIONS(424),
    [sym_bne_opcode] = ACTIONS(424),
    [sym_bpl_opcode] = ACTIONS(424),
    [sym_brk_opcode] = ACTIONS(424),
    [sym_bvc_opcode] = ACTIONS(424),
    [sym_bvs_opcode] = ACTIONS(424),
    [sym_clc_opcode] = ACTIONS(424),
    [sym_cld_opcode] = ACTIONS(424),
    [sym_cli_opcode] = ACTIONS(424),
    [sym_clv_opcode] = ACTIONS(424),
    [sym_cmp_opcode] = ACTIONS(424),
    [sym_cpx_opcode] = ACTIONS(424),
    [sym_cpy_opcode] = ACTIONS(424),
    [sym_dec_opcode] = ACTIONS(424),
    [sym_dex_opcode] = ACTIONS(424),
    [sym_dey_opcode] = ACTIONS(424),
    [sym_eor_opcode] = ACTIONS(424),
    [sym_inc_opcode] = ACTIONS(424),
    [sym_inx_opcode] = ACTIONS(424),
    [sym_iny_opcode] = ACTIONS(424),
    [sym_jmp_opcode] = ACTIONS(424),
    [sym_jsr_opcode] = ACTIONS(424),
    [sym_lda_opcode] = ACTIONS(424),
    [sym_ldx_opcode] = ACTIONS(424),
    [sym_ldy_opcode] = ACTIONS(424),
    [sym_lsr_opcode] = ACTIONS(424),
    [sym_nop_opcode] = ACTIONS(424),
    [sym_ora_opcode] = ACTIONS(424),
    [sym_pha_opcode] = ACTIONS(424),
    [sym_php_opcode] = ACTIONS(424),
    [sym_pla_opcode] = ACTIONS(424),
    [sym_plp_opcode] = ACTIONS(424),
    [sym_rol_opcode] = ACTIONS(424),
    [sym_ror_opcode] = ACTIONS(424),
    [sym_rti_opcode] = ACTIONS(424),
    [sym_rts_opcode] = ACTIONS(424),
    [sym_sbc_opcode] = ACTIONS(424),
    [sym_sec_opcode] = ACTIONS(424),
    [sym_sed_opcode] = ACTIONS(424),
    [sym_sei_opcode] = ACTIONS(424),
    [sym_sta_opcode] = ACTIONS(424),
    [sym_stx_opcode] = ACTIONS(424),
    [sym_sty_opcode] = ACTIONS(424),
    [sym_tax_opcode] = ACTIONS(424),
    [sym_tay_opcode] = ACTIONS(424),
    [sym_tsx_opcode] = ACTIONS(424),
    [sym_txa_opcode] = ACTIONS(424),
    [sym_tcs_opcode] = ACTIONS(424),
    [sym_tya_opcode] = ACTIONS(424),
    [sym_a16_ctrl_cmd] = ACTIONS(422),
    [sym_a8_ctrl_cmd] = ACTIONS(422),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(422),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(422),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(422),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(422),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(422),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(422),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(426),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(426),
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
    [sym_a16_ctrl_cmd] = ACTIONS(426),
    [sym_a8_ctrl_cmd] = ACTIONS(426),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(426),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(426),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(426),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(426),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(426),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(426),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(430),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(430),
    [sym_adc_opcode] = ACTIONS(432),
    [sym_and_opcode] = ACTIONS(432),
    [sym_asl_opcode] = ACTIONS(432),
    [sym_bcc_opcode] = ACTIONS(432),
    [sym_bcs_opcode] = ACTIONS(432),
    [sym_beq_opcode] = ACTIONS(432),
    [sym_bit_opcode] = ACTIONS(432),
    [sym_bmi_opcode] = ACTIONS(432),
    [sym_bne_opcode] = ACTIONS(432),
    [sym_bpl_opcode] = ACTIONS(432),
    [sym_brk_opcode] = ACTIONS(432),
    [sym_bvc_opcode] = ACTIONS(432),
    [sym_bvs_opcode] = ACTIONS(432),
    [sym_clc_opcode] = ACTIONS(432),
    [sym_cld_opcode] = ACTIONS(432),
    [sym_cli_opcode] = ACTIONS(432),
    [sym_clv_opcode] = ACTIONS(432),
    [sym_cmp_opcode] = ACTIONS(432),
    [sym_cpx_opcode] = ACTIONS(432),
    [sym_cpy_opcode] = ACTIONS(432),
    [sym_dec_opcode] = ACTIONS(432),
    [sym_dex_opcode] = ACTIONS(432),
    [sym_dey_opcode] = ACTIONS(432),
    [sym_eor_opcode] = ACTIONS(432),
    [sym_inc_opcode] = ACTIONS(432),
    [sym_inx_opcode] = ACTIONS(432),
    [sym_iny_opcode] = ACTIONS(432),
    [sym_jmp_opcode] = ACTIONS(432),
    [sym_jsr_opcode] = ACTIONS(432),
    [sym_lda_opcode] = ACTIONS(432),
    [sym_ldx_opcode] = ACTIONS(432),
    [sym_ldy_opcode] = ACTIONS(432),
    [sym_lsr_opcode] = ACTIONS(432),
    [sym_nop_opcode] = ACTIONS(432),
    [sym_ora_opcode] = ACTIONS(432),
    [sym_pha_opcode] = ACTIONS(432),
    [sym_php_opcode] = ACTIONS(432),
    [sym_pla_opcode] = ACTIONS(432),
    [sym_plp_opcode] = ACTIONS(432),
    [sym_rol_opcode] = ACTIONS(432),
    [sym_ror_opcode] = ACTIONS(432),
    [sym_rti_opcode] = ACTIONS(432),
    [sym_rts_opcode] = ACTIONS(432),
    [sym_sbc_opcode] = ACTIONS(432),
    [sym_sec_opcode] = ACTIONS(432),
    [sym_sed_opcode] = ACTIONS(432),
    [sym_sei_opcode] = ACTIONS(432),
    [sym_sta_opcode] = ACTIONS(432),
    [sym_stx_opcode] = ACTIONS(432),
    [sym_sty_opcode] = ACTIONS(432),
    [sym_tax_opcode] = ACTIONS(432),
    [sym_tay_opcode] = ACTIONS(432),
    [sym_tsx_opcode] = ACTIONS(432),
    [sym_txa_opcode] = ACTIONS(432),
    [sym_tcs_opcode] = ACTIONS(432),
    [sym_tya_opcode] = ACTIONS(432),
    [sym_a16_ctrl_cmd] = ACTIONS(430),
    [sym_a8_ctrl_cmd] = ACTIONS(430),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(430),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(430),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(430),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(430),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(430),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(430),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(434),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(434),
    [sym_adc_opcode] = ACTIONS(436),
    [sym_and_opcode] = ACTIONS(436),
    [sym_asl_opcode] = ACTIONS(436),
    [sym_bcc_opcode] = ACTIONS(436),
    [sym_bcs_opcode] = ACTIONS(436),
    [sym_beq_opcode] = ACTIONS(436),
    [sym_bit_opcode] = ACTIONS(436),
    [sym_bmi_opcode] = ACTIONS(436),
    [sym_bne_opcode] = ACTIONS(436),
    [sym_bpl_opcode] = ACTIONS(436),
    [sym_brk_opcode] = ACTIONS(436),
    [sym_bvc_opcode] = ACTIONS(436),
    [sym_bvs_opcode] = ACTIONS(436),
    [sym_clc_opcode] = ACTIONS(436),
    [sym_cld_opcode] = ACTIONS(436),
    [sym_cli_opcode] = ACTIONS(436),
    [sym_clv_opcode] = ACTIONS(436),
    [sym_cmp_opcode] = ACTIONS(436),
    [sym_cpx_opcode] = ACTIONS(436),
    [sym_cpy_opcode] = ACTIONS(436),
    [sym_dec_opcode] = ACTIONS(436),
    [sym_dex_opcode] = ACTIONS(436),
    [sym_dey_opcode] = ACTIONS(436),
    [sym_eor_opcode] = ACTIONS(436),
    [sym_inc_opcode] = ACTIONS(436),
    [sym_inx_opcode] = ACTIONS(436),
    [sym_iny_opcode] = ACTIONS(436),
    [sym_jmp_opcode] = ACTIONS(436),
    [sym_jsr_opcode] = ACTIONS(436),
    [sym_lda_opcode] = ACTIONS(436),
    [sym_ldx_opcode] = ACTIONS(436),
    [sym_ldy_opcode] = ACTIONS(436),
    [sym_lsr_opcode] = ACTIONS(436),
    [sym_nop_opcode] = ACTIONS(436),
    [sym_ora_opcode] = ACTIONS(436),
    [sym_pha_opcode] = ACTIONS(436),
    [sym_php_opcode] = ACTIONS(436),
    [sym_pla_opcode] = ACTIONS(436),
    [sym_plp_opcode] = ACTIONS(436),
    [sym_rol_opcode] = ACTIONS(436),
    [sym_ror_opcode] = ACTIONS(436),
    [sym_rti_opcode] = ACTIONS(436),
    [sym_rts_opcode] = ACTIONS(436),
    [sym_sbc_opcode] = ACTIONS(436),
    [sym_sec_opcode] = ACTIONS(436),
    [sym_sed_opcode] = ACTIONS(436),
    [sym_sei_opcode] = ACTIONS(436),
    [sym_sta_opcode] = ACTIONS(436),
    [sym_stx_opcode] = ACTIONS(436),
    [sym_sty_opcode] = ACTIONS(436),
    [sym_tax_opcode] = ACTIONS(436),
    [sym_tay_opcode] = ACTIONS(436),
    [sym_tsx_opcode] = ACTIONS(436),
    [sym_txa_opcode] = ACTIONS(436),
    [sym_tcs_opcode] = ACTIONS(436),
    [sym_tya_opcode] = ACTIONS(436),
    [sym_a16_ctrl_cmd] = ACTIONS(434),
    [sym_a8_ctrl_cmd] = ACTIONS(434),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(434),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(434),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(434),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(434),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(434),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(434),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(438),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(438),
    [sym_adc_opcode] = ACTIONS(440),
    [sym_and_opcode] = ACTIONS(440),
    [sym_asl_opcode] = ACTIONS(440),
    [sym_bcc_opcode] = ACTIONS(440),
    [sym_bcs_opcode] = ACTIONS(440),
    [sym_beq_opcode] = ACTIONS(440),
    [sym_bit_opcode] = ACTIONS(440),
    [sym_bmi_opcode] = ACTIONS(440),
    [sym_bne_opcode] = ACTIONS(440),
    [sym_bpl_opcode] = ACTIONS(440),
    [sym_brk_opcode] = ACTIONS(440),
    [sym_bvc_opcode] = ACTIONS(440),
    [sym_bvs_opcode] = ACTIONS(440),
    [sym_clc_opcode] = ACTIONS(440),
    [sym_cld_opcode] = ACTIONS(440),
    [sym_cli_opcode] = ACTIONS(440),
    [sym_clv_opcode] = ACTIONS(440),
    [sym_cmp_opcode] = ACTIONS(440),
    [sym_cpx_opcode] = ACTIONS(440),
    [sym_cpy_opcode] = ACTIONS(440),
    [sym_dec_opcode] = ACTIONS(440),
    [sym_dex_opcode] = ACTIONS(440),
    [sym_dey_opcode] = ACTIONS(440),
    [sym_eor_opcode] = ACTIONS(440),
    [sym_inc_opcode] = ACTIONS(440),
    [sym_inx_opcode] = ACTIONS(440),
    [sym_iny_opcode] = ACTIONS(440),
    [sym_jmp_opcode] = ACTIONS(440),
    [sym_jsr_opcode] = ACTIONS(440),
    [sym_lda_opcode] = ACTIONS(440),
    [sym_ldx_opcode] = ACTIONS(440),
    [sym_ldy_opcode] = ACTIONS(440),
    [sym_lsr_opcode] = ACTIONS(440),
    [sym_nop_opcode] = ACTIONS(440),
    [sym_ora_opcode] = ACTIONS(440),
    [sym_pha_opcode] = ACTIONS(440),
    [sym_php_opcode] = ACTIONS(440),
    [sym_pla_opcode] = ACTIONS(440),
    [sym_plp_opcode] = ACTIONS(440),
    [sym_rol_opcode] = ACTIONS(440),
    [sym_ror_opcode] = ACTIONS(440),
    [sym_rti_opcode] = ACTIONS(440),
    [sym_rts_opcode] = ACTIONS(440),
    [sym_sbc_opcode] = ACTIONS(440),
    [sym_sec_opcode] = ACTIONS(440),
    [sym_sed_opcode] = ACTIONS(440),
    [sym_sei_opcode] = ACTIONS(440),
    [sym_sta_opcode] = ACTIONS(440),
    [sym_stx_opcode] = ACTIONS(440),
    [sym_sty_opcode] = ACTIONS(440),
    [sym_tax_opcode] = ACTIONS(440),
    [sym_tay_opcode] = ACTIONS(440),
    [sym_tsx_opcode] = ACTIONS(440),
    [sym_txa_opcode] = ACTIONS(440),
    [sym_tcs_opcode] = ACTIONS(440),
    [sym_tya_opcode] = ACTIONS(440),
    [sym_a16_ctrl_cmd] = ACTIONS(438),
    [sym_a8_ctrl_cmd] = ACTIONS(438),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(438),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(438),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(438),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(438),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(438),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(438),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(442),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(442),
    [sym_adc_opcode] = ACTIONS(444),
    [sym_and_opcode] = ACTIONS(444),
    [sym_asl_opcode] = ACTIONS(444),
    [sym_bcc_opcode] = ACTIONS(444),
    [sym_bcs_opcode] = ACTIONS(444),
    [sym_beq_opcode] = ACTIONS(444),
    [sym_bit_opcode] = ACTIONS(444),
    [sym_bmi_opcode] = ACTIONS(444),
    [sym_bne_opcode] = ACTIONS(444),
    [sym_bpl_opcode] = ACTIONS(444),
    [sym_brk_opcode] = ACTIONS(444),
    [sym_bvc_opcode] = ACTIONS(444),
    [sym_bvs_opcode] = ACTIONS(444),
    [sym_clc_opcode] = ACTIONS(444),
    [sym_cld_opcode] = ACTIONS(444),
    [sym_cli_opcode] = ACTIONS(444),
    [sym_clv_opcode] = ACTIONS(444),
    [sym_cmp_opcode] = ACTIONS(444),
    [sym_cpx_opcode] = ACTIONS(444),
    [sym_cpy_opcode] = ACTIONS(444),
    [sym_dec_opcode] = ACTIONS(444),
    [sym_dex_opcode] = ACTIONS(444),
    [sym_dey_opcode] = ACTIONS(444),
    [sym_eor_opcode] = ACTIONS(444),
    [sym_inc_opcode] = ACTIONS(444),
    [sym_inx_opcode] = ACTIONS(444),
    [sym_iny_opcode] = ACTIONS(444),
    [sym_jmp_opcode] = ACTIONS(444),
    [sym_jsr_opcode] = ACTIONS(444),
    [sym_lda_opcode] = ACTIONS(444),
    [sym_ldx_opcode] = ACTIONS(444),
    [sym_ldy_opcode] = ACTIONS(444),
    [sym_lsr_opcode] = ACTIONS(444),
    [sym_nop_opcode] = ACTIONS(444),
    [sym_ora_opcode] = ACTIONS(444),
    [sym_pha_opcode] = ACTIONS(444),
    [sym_php_opcode] = ACTIONS(444),
    [sym_pla_opcode] = ACTIONS(444),
    [sym_plp_opcode] = ACTIONS(444),
    [sym_rol_opcode] = ACTIONS(444),
    [sym_ror_opcode] = ACTIONS(444),
    [sym_rti_opcode] = ACTIONS(444),
    [sym_rts_opcode] = ACTIONS(444),
    [sym_sbc_opcode] = ACTIONS(444),
    [sym_sec_opcode] = ACTIONS(444),
    [sym_sed_opcode] = ACTIONS(444),
    [sym_sei_opcode] = ACTIONS(444),
    [sym_sta_opcode] = ACTIONS(444),
    [sym_stx_opcode] = ACTIONS(444),
    [sym_sty_opcode] = ACTIONS(444),
    [sym_tax_opcode] = ACTIONS(444),
    [sym_tay_opcode] = ACTIONS(444),
    [sym_tsx_opcode] = ACTIONS(444),
    [sym_txa_opcode] = ACTIONS(444),
    [sym_tcs_opcode] = ACTIONS(444),
    [sym_tya_opcode] = ACTIONS(444),
    [sym_a16_ctrl_cmd] = ACTIONS(442),
    [sym_a8_ctrl_cmd] = ACTIONS(442),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(442),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(442),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(442),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(442),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(442),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(442),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(446),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(446),
    [sym_adc_opcode] = ACTIONS(448),
    [sym_and_opcode] = ACTIONS(448),
    [sym_asl_opcode] = ACTIONS(448),
    [sym_bcc_opcode] = ACTIONS(448),
    [sym_bcs_opcode] = ACTIONS(448),
    [sym_beq_opcode] = ACTIONS(448),
    [sym_bit_opcode] = ACTIONS(448),
    [sym_bmi_opcode] = ACTIONS(448),
    [sym_bne_opcode] = ACTIONS(448),
    [sym_bpl_opcode] = ACTIONS(448),
    [sym_brk_opcode] = ACTIONS(448),
    [sym_bvc_opcode] = ACTIONS(448),
    [sym_bvs_opcode] = ACTIONS(448),
    [sym_clc_opcode] = ACTIONS(448),
    [sym_cld_opcode] = ACTIONS(448),
    [sym_cli_opcode] = ACTIONS(448),
    [sym_clv_opcode] = ACTIONS(448),
    [sym_cmp_opcode] = ACTIONS(448),
    [sym_cpx_opcode] = ACTIONS(448),
    [sym_cpy_opcode] = ACTIONS(448),
    [sym_dec_opcode] = ACTIONS(448),
    [sym_dex_opcode] = ACTIONS(448),
    [sym_dey_opcode] = ACTIONS(448),
    [sym_eor_opcode] = ACTIONS(448),
    [sym_inc_opcode] = ACTIONS(448),
    [sym_inx_opcode] = ACTIONS(448),
    [sym_iny_opcode] = ACTIONS(448),
    [sym_jmp_opcode] = ACTIONS(448),
    [sym_jsr_opcode] = ACTIONS(448),
    [sym_lda_opcode] = ACTIONS(448),
    [sym_ldx_opcode] = ACTIONS(448),
    [sym_ldy_opcode] = ACTIONS(448),
    [sym_lsr_opcode] = ACTIONS(448),
    [sym_nop_opcode] = ACTIONS(448),
    [sym_ora_opcode] = ACTIONS(448),
    [sym_pha_opcode] = ACTIONS(448),
    [sym_php_opcode] = ACTIONS(448),
    [sym_pla_opcode] = ACTIONS(448),
    [sym_plp_opcode] = ACTIONS(448),
    [sym_rol_opcode] = ACTIONS(448),
    [sym_ror_opcode] = ACTIONS(448),
    [sym_rti_opcode] = ACTIONS(448),
    [sym_rts_opcode] = ACTIONS(448),
    [sym_sbc_opcode] = ACTIONS(448),
    [sym_sec_opcode] = ACTIONS(448),
    [sym_sed_opcode] = ACTIONS(448),
    [sym_sei_opcode] = ACTIONS(448),
    [sym_sta_opcode] = ACTIONS(448),
    [sym_stx_opcode] = ACTIONS(448),
    [sym_sty_opcode] = ACTIONS(448),
    [sym_tax_opcode] = ACTIONS(448),
    [sym_tay_opcode] = ACTIONS(448),
    [sym_tsx_opcode] = ACTIONS(448),
    [sym_txa_opcode] = ACTIONS(448),
    [sym_tcs_opcode] = ACTIONS(448),
    [sym_tya_opcode] = ACTIONS(448),
    [sym_a16_ctrl_cmd] = ACTIONS(446),
    [sym_a8_ctrl_cmd] = ACTIONS(446),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(446),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(446),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(446),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(446),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(446),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(446),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(362),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(362),
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
    [sym_a16_ctrl_cmd] = ACTIONS(362),
    [sym_a8_ctrl_cmd] = ACTIONS(362),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(362),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(362),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(362),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(362),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(362),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(362),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(368),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(368),
    [sym_adc_opcode] = ACTIONS(372),
    [sym_and_opcode] = ACTIONS(372),
    [sym_asl_opcode] = ACTIONS(372),
    [sym_bcc_opcode] = ACTIONS(372),
    [sym_bcs_opcode] = ACTIONS(372),
    [sym_beq_opcode] = ACTIONS(372),
    [sym_bit_opcode] = ACTIONS(372),
    [sym_bmi_opcode] = ACTIONS(372),
    [sym_bne_opcode] = ACTIONS(372),
    [sym_bpl_opcode] = ACTIONS(372),
    [sym_brk_opcode] = ACTIONS(372),
    [sym_bvc_opcode] = ACTIONS(372),
    [sym_bvs_opcode] = ACTIONS(372),
    [sym_clc_opcode] = ACTIONS(372),
    [sym_cld_opcode] = ACTIONS(372),
    [sym_cli_opcode] = ACTIONS(372),
    [sym_clv_opcode] = ACTIONS(372),
    [sym_cmp_opcode] = ACTIONS(372),
    [sym_cpx_opcode] = ACTIONS(372),
    [sym_cpy_opcode] = ACTIONS(372),
    [sym_dec_opcode] = ACTIONS(372),
    [sym_dex_opcode] = ACTIONS(372),
    [sym_dey_opcode] = ACTIONS(372),
    [sym_eor_opcode] = ACTIONS(372),
    [sym_inc_opcode] = ACTIONS(372),
    [sym_inx_opcode] = ACTIONS(372),
    [sym_iny_opcode] = ACTIONS(372),
    [sym_jmp_opcode] = ACTIONS(372),
    [sym_jsr_opcode] = ACTIONS(372),
    [sym_lda_opcode] = ACTIONS(372),
    [sym_ldx_opcode] = ACTIONS(372),
    [sym_ldy_opcode] = ACTIONS(372),
    [sym_lsr_opcode] = ACTIONS(372),
    [sym_nop_opcode] = ACTIONS(372),
    [sym_ora_opcode] = ACTIONS(372),
    [sym_pha_opcode] = ACTIONS(372),
    [sym_php_opcode] = ACTIONS(372),
    [sym_pla_opcode] = ACTIONS(372),
    [sym_plp_opcode] = ACTIONS(372),
    [sym_rol_opcode] = ACTIONS(372),
    [sym_ror_opcode] = ACTIONS(372),
    [sym_rti_opcode] = ACTIONS(372),
    [sym_rts_opcode] = ACTIONS(372),
    [sym_sbc_opcode] = ACTIONS(372),
    [sym_sec_opcode] = ACTIONS(372),
    [sym_sed_opcode] = ACTIONS(372),
    [sym_sei_opcode] = ACTIONS(372),
    [sym_sta_opcode] = ACTIONS(372),
    [sym_stx_opcode] = ACTIONS(372),
    [sym_sty_opcode] = ACTIONS(372),
    [sym_tax_opcode] = ACTIONS(372),
    [sym_tay_opcode] = ACTIONS(372),
    [sym_tsx_opcode] = ACTIONS(372),
    [sym_txa_opcode] = ACTIONS(372),
    [sym_tcs_opcode] = ACTIONS(372),
    [sym_tya_opcode] = ACTIONS(372),
    [sym_a16_ctrl_cmd] = ACTIONS(368),
    [sym_a8_ctrl_cmd] = ACTIONS(368),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(368),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(368),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(368),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(368),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(368),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(368),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(450),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(450),
    [sym_adc_opcode] = ACTIONS(452),
    [sym_and_opcode] = ACTIONS(452),
    [sym_asl_opcode] = ACTIONS(452),
    [sym_bcc_opcode] = ACTIONS(452),
    [sym_bcs_opcode] = ACTIONS(452),
    [sym_beq_opcode] = ACTIONS(452),
    [sym_bit_opcode] = ACTIONS(452),
    [sym_bmi_opcode] = ACTIONS(452),
    [sym_bne_opcode] = ACTIONS(452),
    [sym_bpl_opcode] = ACTIONS(452),
    [sym_brk_opcode] = ACTIONS(452),
    [sym_bvc_opcode] = ACTIONS(452),
    [sym_bvs_opcode] = ACTIONS(452),
    [sym_clc_opcode] = ACTIONS(452),
    [sym_cld_opcode] = ACTIONS(452),
    [sym_cli_opcode] = ACTIONS(452),
    [sym_clv_opcode] = ACTIONS(452),
    [sym_cmp_opcode] = ACTIONS(452),
    [sym_cpx_opcode] = ACTIONS(452),
    [sym_cpy_opcode] = ACTIONS(452),
    [sym_dec_opcode] = ACTIONS(452),
    [sym_dex_opcode] = ACTIONS(452),
    [sym_dey_opcode] = ACTIONS(452),
    [sym_eor_opcode] = ACTIONS(452),
    [sym_inc_opcode] = ACTIONS(452),
    [sym_inx_opcode] = ACTIONS(452),
    [sym_iny_opcode] = ACTIONS(452),
    [sym_jmp_opcode] = ACTIONS(452),
    [sym_jsr_opcode] = ACTIONS(452),
    [sym_lda_opcode] = ACTIONS(452),
    [sym_ldx_opcode] = ACTIONS(452),
    [sym_ldy_opcode] = ACTIONS(452),
    [sym_lsr_opcode] = ACTIONS(452),
    [sym_nop_opcode] = ACTIONS(452),
    [sym_ora_opcode] = ACTIONS(452),
    [sym_pha_opcode] = ACTIONS(452),
    [sym_php_opcode] = ACTIONS(452),
    [sym_pla_opcode] = ACTIONS(452),
    [sym_plp_opcode] = ACTIONS(452),
    [sym_rol_opcode] = ACTIONS(452),
    [sym_ror_opcode] = ACTIONS(452),
    [sym_rti_opcode] = ACTIONS(452),
    [sym_rts_opcode] = ACTIONS(452),
    [sym_sbc_opcode] = ACTIONS(452),
    [sym_sec_opcode] = ACTIONS(452),
    [sym_sed_opcode] = ACTIONS(452),
    [sym_sei_opcode] = ACTIONS(452),
    [sym_sta_opcode] = ACTIONS(452),
    [sym_stx_opcode] = ACTIONS(452),
    [sym_sty_opcode] = ACTIONS(452),
    [sym_tax_opcode] = ACTIONS(452),
    [sym_tay_opcode] = ACTIONS(452),
    [sym_tsx_opcode] = ACTIONS(452),
    [sym_txa_opcode] = ACTIONS(452),
    [sym_tcs_opcode] = ACTIONS(452),
    [sym_tya_opcode] = ACTIONS(452),
    [sym_a16_ctrl_cmd] = ACTIONS(450),
    [sym_a8_ctrl_cmd] = ACTIONS(450),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(450),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(450),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(450),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(450),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(450),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(450),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(454),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(454),
    [sym_adc_opcode] = ACTIONS(456),
    [sym_and_opcode] = ACTIONS(456),
    [sym_asl_opcode] = ACTIONS(456),
    [sym_bcc_opcode] = ACTIONS(456),
    [sym_bcs_opcode] = ACTIONS(456),
    [sym_beq_opcode] = ACTIONS(456),
    [sym_bit_opcode] = ACTIONS(456),
    [sym_bmi_opcode] = ACTIONS(456),
    [sym_bne_opcode] = ACTIONS(456),
    [sym_bpl_opcode] = ACTIONS(456),
    [sym_brk_opcode] = ACTIONS(456),
    [sym_bvc_opcode] = ACTIONS(456),
    [sym_bvs_opcode] = ACTIONS(456),
    [sym_clc_opcode] = ACTIONS(456),
    [sym_cld_opcode] = ACTIONS(456),
    [sym_cli_opcode] = ACTIONS(456),
    [sym_clv_opcode] = ACTIONS(456),
    [sym_cmp_opcode] = ACTIONS(456),
    [sym_cpx_opcode] = ACTIONS(456),
    [sym_cpy_opcode] = ACTIONS(456),
    [sym_dec_opcode] = ACTIONS(456),
    [sym_dex_opcode] = ACTIONS(456),
    [sym_dey_opcode] = ACTIONS(456),
    [sym_eor_opcode] = ACTIONS(456),
    [sym_inc_opcode] = ACTIONS(456),
    [sym_inx_opcode] = ACTIONS(456),
    [sym_iny_opcode] = ACTIONS(456),
    [sym_jmp_opcode] = ACTIONS(456),
    [sym_jsr_opcode] = ACTIONS(456),
    [sym_lda_opcode] = ACTIONS(456),
    [sym_ldx_opcode] = ACTIONS(456),
    [sym_ldy_opcode] = ACTIONS(456),
    [sym_lsr_opcode] = ACTIONS(456),
    [sym_nop_opcode] = ACTIONS(456),
    [sym_ora_opcode] = ACTIONS(456),
    [sym_pha_opcode] = ACTIONS(456),
    [sym_php_opcode] = ACTIONS(456),
    [sym_pla_opcode] = ACTIONS(456),
    [sym_plp_opcode] = ACTIONS(456),
    [sym_rol_opcode] = ACTIONS(456),
    [sym_ror_opcode] = ACTIONS(456),
    [sym_rti_opcode] = ACTIONS(456),
    [sym_rts_opcode] = ACTIONS(456),
    [sym_sbc_opcode] = ACTIONS(456),
    [sym_sec_opcode] = ACTIONS(456),
    [sym_sed_opcode] = ACTIONS(456),
    [sym_sei_opcode] = ACTIONS(456),
    [sym_sta_opcode] = ACTIONS(456),
    [sym_stx_opcode] = ACTIONS(456),
    [sym_sty_opcode] = ACTIONS(456),
    [sym_tax_opcode] = ACTIONS(456),
    [sym_tay_opcode] = ACTIONS(456),
    [sym_tsx_opcode] = ACTIONS(456),
    [sym_txa_opcode] = ACTIONS(456),
    [sym_tcs_opcode] = ACTIONS(456),
    [sym_tya_opcode] = ACTIONS(456),
    [sym_a16_ctrl_cmd] = ACTIONS(454),
    [sym_a8_ctrl_cmd] = ACTIONS(454),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(454),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(454),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(454),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(454),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(454),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(454),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(458),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(458),
    [sym_adc_opcode] = ACTIONS(460),
    [sym_and_opcode] = ACTIONS(460),
    [sym_asl_opcode] = ACTIONS(460),
    [sym_bcc_opcode] = ACTIONS(460),
    [sym_bcs_opcode] = ACTIONS(460),
    [sym_beq_opcode] = ACTIONS(460),
    [sym_bit_opcode] = ACTIONS(460),
    [sym_bmi_opcode] = ACTIONS(460),
    [sym_bne_opcode] = ACTIONS(460),
    [sym_bpl_opcode] = ACTIONS(460),
    [sym_brk_opcode] = ACTIONS(460),
    [sym_bvc_opcode] = ACTIONS(460),
    [sym_bvs_opcode] = ACTIONS(460),
    [sym_clc_opcode] = ACTIONS(460),
    [sym_cld_opcode] = ACTIONS(460),
    [sym_cli_opcode] = ACTIONS(460),
    [sym_clv_opcode] = ACTIONS(460),
    [sym_cmp_opcode] = ACTIONS(460),
    [sym_cpx_opcode] = ACTIONS(460),
    [sym_cpy_opcode] = ACTIONS(460),
    [sym_dec_opcode] = ACTIONS(460),
    [sym_dex_opcode] = ACTIONS(460),
    [sym_dey_opcode] = ACTIONS(460),
    [sym_eor_opcode] = ACTIONS(460),
    [sym_inc_opcode] = ACTIONS(460),
    [sym_inx_opcode] = ACTIONS(460),
    [sym_iny_opcode] = ACTIONS(460),
    [sym_jmp_opcode] = ACTIONS(460),
    [sym_jsr_opcode] = ACTIONS(460),
    [sym_lda_opcode] = ACTIONS(460),
    [sym_ldx_opcode] = ACTIONS(460),
    [sym_ldy_opcode] = ACTIONS(460),
    [sym_lsr_opcode] = ACTIONS(460),
    [sym_nop_opcode] = ACTIONS(460),
    [sym_ora_opcode] = ACTIONS(460),
    [sym_pha_opcode] = ACTIONS(460),
    [sym_php_opcode] = ACTIONS(460),
    [sym_pla_opcode] = ACTIONS(460),
    [sym_plp_opcode] = ACTIONS(460),
    [sym_rol_opcode] = ACTIONS(460),
    [sym_ror_opcode] = ACTIONS(460),
    [sym_rti_opcode] = ACTIONS(460),
    [sym_rts_opcode] = ACTIONS(460),
    [sym_sbc_opcode] = ACTIONS(460),
    [sym_sec_opcode] = ACTIONS(460),
    [sym_sed_opcode] = ACTIONS(460),
    [sym_sei_opcode] = ACTIONS(460),
    [sym_sta_opcode] = ACTIONS(460),
    [sym_stx_opcode] = ACTIONS(460),
    [sym_sty_opcode] = ACTIONS(460),
    [sym_tax_opcode] = ACTIONS(460),
    [sym_tay_opcode] = ACTIONS(460),
    [sym_tsx_opcode] = ACTIONS(460),
    [sym_txa_opcode] = ACTIONS(460),
    [sym_tcs_opcode] = ACTIONS(460),
    [sym_tya_opcode] = ACTIONS(460),
    [sym_a16_ctrl_cmd] = ACTIONS(458),
    [sym_a8_ctrl_cmd] = ACTIONS(458),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(458),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(458),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(458),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(458),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(458),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(458),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(478), 1,
      anon_sym_PLUS,
    ACTIONS(480), 1,
      anon_sym_DASH,
    STATE(15), 1,
      sym_expression,
    ACTIONS(482), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(484), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(486), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(490), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(20), 28,
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
  [95] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(478), 1,
      anon_sym_PLUS,
    ACTIONS(480), 1,
      anon_sym_DASH,
    STATE(36), 1,
      sym_expression,
    ACTIONS(482), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(484), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(486), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(490), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(20), 28,
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
  [190] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(478), 1,
      anon_sym_PLUS,
    ACTIONS(480), 1,
      anon_sym_DASH,
    STATE(33), 1,
      sym_expression,
    ACTIONS(482), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(484), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(486), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(490), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(20), 28,
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
  [285] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(478), 1,
      anon_sym_PLUS,
    ACTIONS(480), 1,
      anon_sym_DASH,
    STATE(30), 1,
      sym_expression,
    ACTIONS(482), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(484), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(486), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(490), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(20), 28,
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
  [380] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(478), 1,
      anon_sym_PLUS,
    ACTIONS(480), 1,
      anon_sym_DASH,
    STATE(110), 1,
      sym_expression,
    ACTIONS(482), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(484), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(486), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(490), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(20), 28,
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
  [475] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(478), 1,
      anon_sym_PLUS,
    ACTIONS(480), 1,
      anon_sym_DASH,
    STATE(28), 1,
      sym_expression,
    ACTIONS(482), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(484), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(486), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(490), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(20), 28,
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
  [570] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(478), 1,
      anon_sym_PLUS,
    ACTIONS(480), 1,
      anon_sym_DASH,
    STATE(27), 1,
      sym_expression,
    ACTIONS(482), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(484), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(486), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(490), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(20), 28,
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
  [665] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(478), 1,
      anon_sym_PLUS,
    ACTIONS(480), 1,
      anon_sym_DASH,
    STATE(2), 1,
      sym_expression,
    ACTIONS(482), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(484), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(486), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(490), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(20), 28,
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
  [760] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(478), 1,
      anon_sym_PLUS,
    ACTIONS(480), 1,
      anon_sym_DASH,
    STATE(23), 1,
      sym_expression,
    ACTIONS(482), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(484), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(486), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(490), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(20), 28,
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
  [855] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(478), 1,
      anon_sym_PLUS,
    ACTIONS(480), 1,
      anon_sym_DASH,
    STATE(22), 1,
      sym_expression,
    ACTIONS(482), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(484), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(486), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(490), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(20), 28,
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
  [950] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(478), 1,
      anon_sym_PLUS,
    ACTIONS(480), 1,
      anon_sym_DASH,
    STATE(111), 1,
      sym_expression,
    ACTIONS(482), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(484), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(486), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(490), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(20), 28,
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
  [1045] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(478), 1,
      anon_sym_PLUS,
    ACTIONS(480), 1,
      anon_sym_DASH,
    STATE(19), 1,
      sym_expression,
    ACTIONS(482), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(484), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(486), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(490), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(20), 28,
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
  [1140] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(478), 1,
      anon_sym_PLUS,
    ACTIONS(480), 1,
      anon_sym_DASH,
    STATE(39), 1,
      sym_expression,
    ACTIONS(482), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(484), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(486), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(490), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(20), 28,
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
  [1235] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(478), 1,
      anon_sym_PLUS,
    ACTIONS(480), 1,
      anon_sym_DASH,
    STATE(17), 1,
      sym_expression,
    ACTIONS(482), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(484), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(486), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(490), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(20), 28,
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
  [1330] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(478), 1,
      anon_sym_PLUS,
    ACTIONS(480), 1,
      anon_sym_DASH,
    STATE(16), 1,
      sym_expression,
    ACTIONS(482), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(484), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(486), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(490), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(20), 28,
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
  [1425] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(478), 1,
      anon_sym_PLUS,
    ACTIONS(480), 1,
      anon_sym_DASH,
    STATE(37), 1,
      sym_expression,
    ACTIONS(482), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(484), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(486), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(490), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(20), 28,
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
  [1520] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(478), 1,
      anon_sym_PLUS,
    ACTIONS(480), 1,
      anon_sym_DASH,
    STATE(14), 1,
      sym_expression,
    ACTIONS(482), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(484), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(486), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(490), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(20), 28,
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
  [1615] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(478), 1,
      anon_sym_PLUS,
    ACTIONS(480), 1,
      anon_sym_DASH,
    STATE(13), 1,
      sym_expression,
    ACTIONS(482), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(484), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(486), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(490), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(20), 28,
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
  [1710] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(478), 1,
      anon_sym_PLUS,
    ACTIONS(480), 1,
      anon_sym_DASH,
    STATE(3), 1,
      sym_expression,
    ACTIONS(482), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(484), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(486), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(490), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(20), 28,
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
  [1805] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(478), 1,
      anon_sym_PLUS,
    ACTIONS(480), 1,
      anon_sym_DASH,
    STATE(26), 1,
      sym_expression,
    ACTIONS(482), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(484), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(486), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(490), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(20), 28,
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
  [1900] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(478), 1,
      anon_sym_PLUS,
    ACTIONS(480), 1,
      anon_sym_DASH,
    STATE(10), 1,
      sym_expression,
    ACTIONS(482), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(484), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(486), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(490), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(20), 28,
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
  [1995] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(478), 1,
      anon_sym_PLUS,
    ACTIONS(480), 1,
      anon_sym_DASH,
    STATE(9), 1,
      sym_expression,
    ACTIONS(482), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(484), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(486), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(490), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(20), 28,
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
  [2090] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(478), 1,
      anon_sym_PLUS,
    ACTIONS(480), 1,
      anon_sym_DASH,
    STATE(8), 1,
      sym_expression,
    ACTIONS(482), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(484), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(486), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(490), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(20), 28,
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
  [2185] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(478), 1,
      anon_sym_PLUS,
    ACTIONS(480), 1,
      anon_sym_DASH,
    STATE(7), 1,
      sym_expression,
    ACTIONS(482), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(484), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(486), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(490), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(20), 28,
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
  [2280] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(478), 1,
      anon_sym_PLUS,
    ACTIONS(480), 1,
      anon_sym_DASH,
    STATE(6), 1,
      sym_expression,
    ACTIONS(482), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(484), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(486), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(490), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(20), 28,
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
  [2375] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(478), 1,
      anon_sym_PLUS,
    ACTIONS(480), 1,
      anon_sym_DASH,
    STATE(5), 1,
      sym_expression,
    ACTIONS(482), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(484), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(486), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(490), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(20), 28,
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
  [2470] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(478), 1,
      anon_sym_PLUS,
    ACTIONS(480), 1,
      anon_sym_DASH,
    STATE(4), 1,
      sym_expression,
    ACTIONS(482), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(484), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(486), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(490), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(20), 28,
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
  [2565] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(478), 1,
      anon_sym_PLUS,
    ACTIONS(480), 1,
      anon_sym_DASH,
    STATE(24), 1,
      sym_expression,
    ACTIONS(482), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(484), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(486), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(490), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(20), 28,
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
  [2660] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(478), 1,
      anon_sym_PLUS,
    ACTIONS(480), 1,
      anon_sym_DASH,
    STATE(38), 1,
      sym_expression,
    ACTIONS(482), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(484), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(486), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(490), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(20), 28,
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
  [2755] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(478), 1,
      anon_sym_PLUS,
    ACTIONS(480), 1,
      anon_sym_DASH,
    STATE(35), 1,
      sym_expression,
    ACTIONS(482), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(484), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(486), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(490), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(20), 28,
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
  [2850] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_PLUS,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      anon_sym_DOTMOD,
    ACTIONS(75), 1,
      anon_sym_DOTBITAND,
    ACTIONS(77), 1,
      anon_sym_AMP,
    ACTIONS(83), 1,
      anon_sym_DOTBITOR,
    ACTIONS(85), 1,
      anon_sym_PIPE,
    ACTIONS(151), 1,
      anon_sym_LT,
    ACTIONS(153), 1,
      anon_sym_GT,
    ACTIONS(155), 1,
      anon_sym_EQ,
    ACTIONS(157), 1,
      anon_sym_LT_GT,
    ACTIONS(159), 1,
      anon_sym_LT_EQ,
    ACTIONS(161), 1,
      anon_sym_GT_EQ,
    ACTIONS(165), 1,
      anon_sym_DOTXOR,
    ACTIONS(492), 1,
      anon_sym_COMMA,
    ACTIONS(67), 2,
      anon_sym_CARET,
      anon_sym_DOTBITXOR,
    ACTIONS(79), 2,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
    ACTIONS(81), 2,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
    ACTIONS(163), 2,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
    ACTIONS(167), 2,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [2925] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_PLUS,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      anon_sym_DOTMOD,
    ACTIONS(75), 1,
      anon_sym_DOTBITAND,
    ACTIONS(77), 1,
      anon_sym_AMP,
    ACTIONS(83), 1,
      anon_sym_DOTBITOR,
    ACTIONS(85), 1,
      anon_sym_PIPE,
    ACTIONS(151), 1,
      anon_sym_LT,
    ACTIONS(153), 1,
      anon_sym_GT,
    ACTIONS(155), 1,
      anon_sym_EQ,
    ACTIONS(157), 1,
      anon_sym_LT_GT,
    ACTIONS(159), 1,
      anon_sym_LT_EQ,
    ACTIONS(161), 1,
      anon_sym_GT_EQ,
    ACTIONS(165), 1,
      anon_sym_DOTXOR,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 2,
      anon_sym_CARET,
      anon_sym_DOTBITXOR,
    ACTIONS(79), 2,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
    ACTIONS(81), 2,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
    ACTIONS(163), 2,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
    ACTIONS(167), 2,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [3000] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(496), 1,
      anon_sym_LPAREN,
    ACTIONS(498), 1,
      sym_imm_prefix,
    STATE(50), 1,
      sym_operand_16,
    STATE(57), 1,
      sym_operand_8,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
  [3045] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(498), 1,
      sym_imm_prefix,
    STATE(75), 1,
      sym_operand_16,
    STATE(76), 1,
      sym_operand_8,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
  [3087] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(498), 1,
      sym_imm_prefix,
    STATE(52), 1,
      sym_operand_8,
    STATE(53), 1,
      sym_operand_16,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
  [3129] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(498), 1,
      sym_imm_prefix,
    STATE(57), 1,
      sym_operand_8,
    STATE(59), 1,
      sym_operand_16,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
  [3171] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(500), 1,
      sym_acc_register,
    STATE(57), 1,
      sym_operand_8,
    STATE(59), 1,
      sym_operand_16,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
  [3213] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(496), 1,
      anon_sym_LPAREN,
    STATE(50), 1,
      sym_operand_16,
    STATE(57), 1,
      sym_operand_8,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
  [3255] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(61), 2,
      sym_operand_8,
      sym_operand_16,
  [3292] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    STATE(75), 1,
      sym_operand_16,
    STATE(76), 1,
      sym_operand_8,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
  [3331] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    STATE(57), 1,
      sym_operand_8,
    STATE(59), 1,
      sym_operand_16,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
  [3370] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_symbol,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(54), 2,
      sym_operand_8,
      sym_operand_16,
  [3407] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(502), 1,
      sym_symbol,
    STATE(57), 1,
      sym_operand_8,
    STATE(75), 1,
      sym_operand_16,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
  [3446] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      sym_dec_8,
    ACTIONS(470), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_h,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(476), 1,
      sym_dec_16,
    ACTIONS(502), 1,
      sym_symbol,
    STATE(52), 1,
      sym_operand_8,
    STATE(75), 1,
      sym_operand_16,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
  [3485] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(504), 1,
      anon_sym_PERCENT,
    ACTIONS(506), 1,
      anon_sym_DOLLAR,
    ACTIONS(508), 1,
      anon_sym_h,
    STATE(72), 1,
      sym_operand_8,
    ACTIONS(468), 2,
      sym_symbol,
      sym_dec_8,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
  [3512] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      aux_sym_hex_8_token2,
    ACTIONS(504), 1,
      anon_sym_PERCENT,
    ACTIONS(506), 1,
      anon_sym_DOLLAR,
    ACTIONS(508), 1,
      anon_sym_h,
    STATE(140), 1,
      sym_operand_8,
    ACTIONS(468), 2,
      sym_symbol,
      sym_dec_8,
    STATE(29), 2,
      sym_bin_8,
      sym_hex_8,
  [3539] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      sym_symbol,
    ACTIONS(510), 1,
      anon_sym_LPAREN,
    ACTIONS(512), 1,
      anon_sym_PERCENT,
    ACTIONS(514), 1,
      anon_sym_DOLLAR,
    ACTIONS(516), 1,
      anon_sym_h,
    ACTIONS(518), 1,
      sym_dec_16,
    STATE(75), 1,
      sym_operand_16,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
  [3568] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      sym_symbol,
    ACTIONS(512), 1,
      anon_sym_PERCENT,
    ACTIONS(514), 1,
      anon_sym_DOLLAR,
    ACTIONS(516), 1,
      anon_sym_h,
    ACTIONS(518), 1,
      sym_dec_16,
    STATE(51), 1,
      sym_operand_16,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
  [3594] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      sym_symbol,
    ACTIONS(512), 1,
      anon_sym_PERCENT,
    ACTIONS(514), 1,
      anon_sym_DOLLAR,
    ACTIONS(516), 1,
      anon_sym_h,
    ACTIONS(518), 1,
      sym_dec_16,
    STATE(148), 1,
      sym_operand_16,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
  [3620] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      sym_symbol,
    ACTIONS(512), 1,
      anon_sym_PERCENT,
    ACTIONS(514), 1,
      anon_sym_DOLLAR,
    ACTIONS(516), 1,
      anon_sym_h,
    ACTIONS(518), 1,
      sym_dec_16,
    STATE(47), 1,
      sym_operand_16,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
  [3646] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      sym_symbol,
    ACTIONS(512), 1,
      anon_sym_PERCENT,
    ACTIONS(514), 1,
      anon_sym_DOLLAR,
    ACTIONS(516), 1,
      anon_sym_h,
    ACTIONS(518), 1,
      sym_dec_16,
    STATE(77), 1,
      sym_operand_16,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
  [3672] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      sym_symbol,
    ACTIONS(512), 1,
      anon_sym_PERCENT,
    ACTIONS(514), 1,
      anon_sym_DOLLAR,
    ACTIONS(516), 1,
      anon_sym_h,
    ACTIONS(518), 1,
      sym_dec_16,
    STATE(75), 1,
      sym_operand_16,
    STATE(32), 2,
      sym_bin_16,
      sym_hex_16,
  [3698] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_PLUS,
    ACTIONS(522), 1,
      anon_sym_DASH,
    STATE(70), 2,
      sym_plus_symbol,
      sym_sub_symbol,
  [3712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 4,
      sym_warning_keyword,
      sym_error_keyword,
      sym_ldwarning_keyword,
      sym_lderror_keyword,
  [3722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(49), 1,
      sym_string,
    ACTIONS(526), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [3733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(78), 1,
      sym_string,
    ACTIONS(526), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [3744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(58), 1,
      sym_string,
    ACTIONS(526), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [3755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      sym_x_register,
    ACTIONS(530), 1,
      sym_y_register,
  [3765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      aux_sym_bin_8_token1,
    ACTIONS(534), 1,
      aux_sym_bin_16_token1,
  [3775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      aux_sym_hex_8_token1,
    ACTIONS(538), 1,
      aux_sym_hex_16_token1,
  [3785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_COMMA,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
  [3795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      aux_sym_bin_16_token1,
  [3802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COMMA,
  [3809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_COMMA,
  [3816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      sym_x_register,
  [3823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      ts_builtin_sym_end,
  [3830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_y_register,
  [3837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      sym_y_register,
  [3844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
  [3851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_RPAREN,
  [3858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      sym_y_register,
  [3865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      sym_x_register,
  [3872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      sym_x_register,
  [3879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      aux_sym_hex_8_token1,
  [3886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      aux_sym_bin_8_token1,
  [3893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      aux_sym_hex_16_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(80)] = 0,
  [SMALL_STATE(81)] = 95,
  [SMALL_STATE(82)] = 190,
  [SMALL_STATE(83)] = 285,
  [SMALL_STATE(84)] = 380,
  [SMALL_STATE(85)] = 475,
  [SMALL_STATE(86)] = 570,
  [SMALL_STATE(87)] = 665,
  [SMALL_STATE(88)] = 760,
  [SMALL_STATE(89)] = 855,
  [SMALL_STATE(90)] = 950,
  [SMALL_STATE(91)] = 1045,
  [SMALL_STATE(92)] = 1140,
  [SMALL_STATE(93)] = 1235,
  [SMALL_STATE(94)] = 1330,
  [SMALL_STATE(95)] = 1425,
  [SMALL_STATE(96)] = 1520,
  [SMALL_STATE(97)] = 1615,
  [SMALL_STATE(98)] = 1710,
  [SMALL_STATE(99)] = 1805,
  [SMALL_STATE(100)] = 1900,
  [SMALL_STATE(101)] = 1995,
  [SMALL_STATE(102)] = 2090,
  [SMALL_STATE(103)] = 2185,
  [SMALL_STATE(104)] = 2280,
  [SMALL_STATE(105)] = 2375,
  [SMALL_STATE(106)] = 2470,
  [SMALL_STATE(107)] = 2565,
  [SMALL_STATE(108)] = 2660,
  [SMALL_STATE(109)] = 2755,
  [SMALL_STATE(110)] = 2850,
  [SMALL_STATE(111)] = 2925,
  [SMALL_STATE(112)] = 3000,
  [SMALL_STATE(113)] = 3045,
  [SMALL_STATE(114)] = 3087,
  [SMALL_STATE(115)] = 3129,
  [SMALL_STATE(116)] = 3171,
  [SMALL_STATE(117)] = 3213,
  [SMALL_STATE(118)] = 3255,
  [SMALL_STATE(119)] = 3292,
  [SMALL_STATE(120)] = 3331,
  [SMALL_STATE(121)] = 3370,
  [SMALL_STATE(122)] = 3407,
  [SMALL_STATE(123)] = 3446,
  [SMALL_STATE(124)] = 3485,
  [SMALL_STATE(125)] = 3512,
  [SMALL_STATE(126)] = 3539,
  [SMALL_STATE(127)] = 3568,
  [SMALL_STATE(128)] = 3594,
  [SMALL_STATE(129)] = 3620,
  [SMALL_STATE(130)] = 3646,
  [SMALL_STATE(131)] = 3672,
  [SMALL_STATE(132)] = 3698,
  [SMALL_STATE(133)] = 3712,
  [SMALL_STATE(134)] = 3722,
  [SMALL_STATE(135)] = 3733,
  [SMALL_STATE(136)] = 3744,
  [SMALL_STATE(137)] = 3755,
  [SMALL_STATE(138)] = 3765,
  [SMALL_STATE(139)] = 3775,
  [SMALL_STATE(140)] = 3785,
  [SMALL_STATE(141)] = 3795,
  [SMALL_STATE(142)] = 3802,
  [SMALL_STATE(143)] = 3809,
  [SMALL_STATE(144)] = 3816,
  [SMALL_STATE(145)] = 3823,
  [SMALL_STATE(146)] = 3830,
  [SMALL_STATE(147)] = 3837,
  [SMALL_STATE(148)] = 3844,
  [SMALL_STATE(149)] = 3851,
  [SMALL_STATE(150)] = 3858,
  [SMALL_STATE(151)] = 3865,
  [SMALL_STATE(152)] = 3872,
  [SMALL_STATE(153)] = 3879,
  [SMALL_STATE(154)] = 3886,
  [SMALL_STATE(155)] = 3893,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca65, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_hibyte_exp, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_hibyte_exp, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mult_exp, 3, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mult_exp, 3, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_neq_cmp, 3, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_neq_cmp, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eq_cmp, 3, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eq_cmp, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bit_or_exp, 3, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bit_or_exp, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift_r_exp, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shift_r_exp, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift_l_exp, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shift_l_exp, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bit_and_exp, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bit_and_exp, 3, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_exp, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod_exp, 3, 0, 0),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_operand_8, 1, 0, 0), REDUCE(sym_operand_16, 1, 0, 0),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_operand_8, 1, 0, 0), REDUCE(sym_operand_16, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_8, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bin_8, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bit_xor_exp, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bit_xor_exp, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gt_cmp, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gt_cmp, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lt_cmp, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lt_cmp, 3, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_exp, 3, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_exp, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_exp, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_exp, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bankbytes_ctrl_cmd, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bankbytes_ctrl_cmd, 2, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_16, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_16, 2, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_not_exp, 2, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_not_exp, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_bankbyte_exp, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_bankbyte_exp, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lte_cmp, 3, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lte_cmp, 3, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_8, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_8, 2, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div_exp, 3, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_div_exp, 3, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_lobyte_exp, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_lobyte_exp, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_not_exp, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_not_exp, 2, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_8, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_8, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_neg_exp, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_neg_exp, 2, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_8, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_8, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_16, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_16, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_pos_exp, 2, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_pos_exp, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_16, 2, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bin_16, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_and_exp, 3, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_and_exp, 3, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_or_exp, 3, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_or_exp, 3, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_xor_exp, 3, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_xor_exp, 3, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gte_cmp, 3, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gte_cmp, 3, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bankbytes_ctrl_cmd_repeat1, 2, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bankbytes_ctrl_cmd_repeat1, 2, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca65, 1, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr_ctrl_cmd, 3, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addr_ctrl_cmd, 3, 0, 0),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bankbytes_ctrl_cmd_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asciiz_ctrl_cmd, 3, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asciiz_ctrl_cmd, 3, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bankbytes_ctrl_cmd, 3, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bankbytes_ctrl_cmd, 3, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_addr_ctrl_cmd_repeat1, 2, 0, 0),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addr_ctrl_cmd_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_addr_ctrl_cmd_repeat1, 2, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr_ctrl_cmd, 2, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addr_ctrl_cmd, 2, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_asciiz_ctrl_cmd_repeat1, 2, 0, 0),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_asciiz_ctrl_cmd_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_asciiz_ctrl_cmd_repeat1, 2, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asciiz_ctrl_cmd, 2, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asciiz_ctrl_cmd, 2, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abs_addr_inst, 2, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abs_addr_inst, 2, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zp_addr_inst, 2, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zp_addr_inst, 2, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_align_ctrl_cmd, 2, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_align_ctrl_cmd, 2, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plus_symbol, 1, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plus_symbol, 1, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_align_ctrl_cmd, 4, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_align_ctrl_cmd, 4, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zp_y_addr_inst, 4, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zp_y_addr_inst, 4, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ind_addr_inst, 4, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ind_addr_inst, 4, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abs_y_addr_inst, 4, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abs_y_addr_inst, 4, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abs_x_addr_inst, 4, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abs_x_addr_inst, 4, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_symbol, 1, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_symbol, 1, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ind_y_addr_inst, 6, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ind_y_addr_inst, 6, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ind_x_addr_inst, 6, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ind_x_addr_inst, 6, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zp_x_addr_inst, 4, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zp_x_addr_inst, 4, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autoimport_ctrl_cmd, 2, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_autoimport_ctrl_cmd, 2, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_impl_addr_inst, 1, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_impl_addr_inst, 1, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imm_addr_inst, 3, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imm_addr_inst, 3, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 1, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inst, 1, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acc_addr_inst, 2, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_acc_addr_inst, 2, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rel_addr_inst, 2, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rel_addr_inst, 2, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_ctrl_cmd, 6, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_ctrl_cmd, 6, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_cmd, 1, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_cmd, 1, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [552] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
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
