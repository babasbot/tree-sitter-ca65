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
#define STATE_COUNT 67
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 132
#define ALIAS_COUNT 0
#define TOKEN_COUNT 109
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  sym_acc_register = 2,
  sym_x_register = 3,
  sym_y_register = 4,
  sym_label = 5,
  sym_symbol = 6,
  anon_sym_COMMA = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  sym_adc_opcode = 10,
  sym_and_opcode = 11,
  sym_asl_opcode = 12,
  sym_bcc_opcode = 13,
  sym_bcs_opcode = 14,
  sym_beq_opcode = 15,
  sym_bit_opcode = 16,
  sym_bmi_opcode = 17,
  sym_bne_opcode = 18,
  sym_bpl_opcode = 19,
  sym_brk_opcode = 20,
  sym_bvc_opcode = 21,
  sym_bvs_opcode = 22,
  sym_clc_opcode = 23,
  sym_cld_opcode = 24,
  sym_cli_opcode = 25,
  sym_clv_opcode = 26,
  sym_cmp_opcode = 27,
  sym_cpx_opcode = 28,
  sym_cpy_opcode = 29,
  sym_dec_opcode = 30,
  sym_dex_opcode = 31,
  sym_dey_opcode = 32,
  sym_eor_opcode = 33,
  sym_inc_opcode = 34,
  sym_inx_opcode = 35,
  sym_iny_opcode = 36,
  sym_jmp_opcode = 37,
  sym_jsr_opcode = 38,
  sym_lda_opcode = 39,
  sym_ldx_opcode = 40,
  sym_ldy_opcode = 41,
  sym_lsr_opcode = 42,
  sym_nop_opcode = 43,
  sym_ora_opcode = 44,
  sym_pha_opcode = 45,
  sym_php_opcode = 46,
  sym_pla_opcode = 47,
  sym_plp_opcode = 48,
  sym_rol_opcode = 49,
  sym_ror_opcode = 50,
  sym_rti_opcode = 51,
  sym_rts_opcode = 52,
  sym_sbc_opcode = 53,
  sym_sec_opcode = 54,
  sym_sed_opcode = 55,
  sym_sei_opcode = 56,
  sym_sta_opcode = 57,
  sym_stx_opcode = 58,
  sym_sty_opcode = 59,
  sym_tax_opcode = 60,
  sym_tay_opcode = 61,
  sym_tsx_opcode = 62,
  sym_txa_opcode = 63,
  sym_tcs_opcode = 64,
  sym_tya_opcode = 65,
  anon_sym_PERCENT = 66,
  aux_sym_bin_8_token1 = 67,
  sym_dec_8 = 68,
  anon_sym_DOLLAR = 69,
  anon_sym_h = 70,
  aux_sym_hex_8_token1 = 71,
  aux_sym_hex_8_token2 = 72,
  aux_sym_bin_16_token1 = 73,
  sym_dec_16 = 74,
  aux_sym_hex_16_token1 = 75,
  sym_imm_prefix = 76,
  anon_sym_PLUS = 77,
  anon_sym_DASH = 78,
  anon_sym_DOTBITNOT = 79,
  anon_sym_TILDE = 80,
  anon_sym_DOTLOBYTE = 81,
  anon_sym_LT = 82,
  anon_sym_DOTHIBYTE = 83,
  anon_sym_GT = 84,
  anon_sym_DOTBANKBYTE = 85,
  anon_sym_CARET = 86,
  anon_sym_STAR = 87,
  anon_sym_SLASH = 88,
  anon_sym_DOTMOD = 89,
  anon_sym_DOTBITAND = 90,
  anon_sym_AMP = 91,
  anon_sym_DOTBITXOR = 92,
  anon_sym_DOTSHL = 93,
  anon_sym_DOTSHR = 94,
  anon_sym_DOTBITOR = 95,
  anon_sym_PIPE = 96,
  anon_sym_EQ = 97,
  anon_sym_LT_EQ = 98,
  anon_sym_GT_EQ = 99,
  anon_sym_DOTAND = 100,
  anon_sym_AMP_AMP = 101,
  anon_sym_DOTXOR = 102,
  anon_sym_DOTOR = 103,
  anon_sym_PIPE_PIPE = 104,
  anon_sym_DOTNOT = 105,
  anon_sym_BANG = 106,
  sym_a16_ctrl_cmd = 107,
  sym_a8_ctrl_cmd = 108,
  sym_ca65 = 109,
  sym_inst = 110,
  sym_impl_addr_inst = 111,
  sym_acc_addr_inst = 112,
  sym_imm_addr_inst = 113,
  sym_abs_addr_inst = 114,
  sym_zp_addr_inst = 115,
  sym_abs_x_addr_inst = 116,
  sym_abs_y_addr_inst = 117,
  sym_zp_x_addr_inst = 118,
  sym_zp_y_addr_inst = 119,
  sym_ind_addr_inst = 120,
  sym_ind_x_addr_inst = 121,
  sym_ind_y_addr_inst = 122,
  sym_rel_addr_inst = 123,
  sym_operand_8 = 124,
  sym_bin_8 = 125,
  sym_hex_8 = 126,
  sym_operand_16 = 127,
  sym_bin_16 = 128,
  sym_hex_16 = 129,
  sym_ctrl_cmd = 130,
  aux_sym_ca65_repeat1 = 131,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
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
  [anon_sym_DOTSHR] = ".SHR",
  [anon_sym_DOTBITOR] = ".BITOR",
  [anon_sym_PIPE] = "|",
  [anon_sym_EQ] = "=",
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
  [sym_ca65] = "ca65",
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
  [sym_ctrl_cmd] = "ctrl_cmd",
  [aux_sym_ca65_repeat1] = "ca65_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
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
  [anon_sym_DOTSHR] = anon_sym_DOTSHR,
  [anon_sym_DOTBITOR] = anon_sym_DOTBITOR,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_EQ] = anon_sym_EQ,
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
  [sym_ca65] = sym_ca65,
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
  [sym_ctrl_cmd] = sym_ctrl_cmd,
  [aux_sym_ca65_repeat1] = aux_sym_ca65_repeat1,
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
  [anon_sym_DOTSHR] = {
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
  [sym_ca65] = {
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
  [sym_ctrl_cmd] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_ca65_repeat1] = {
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
  [17] = 13,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(197);
      ADVANCE_MAP(
        '!', 430,
        '#', 400,
        '$', 358,
        '%', 319,
        '&', 415,
        '(', 208,
        ')', 209,
        '*', 411,
        '+', 401,
        ',', 207,
        '-', 402,
        '.', 72,
        '/', 412,
        '0', 321,
        '1', 337,
        ';', 198,
        '<', 406,
        '=', 421,
        '>', 408,
        '^', 410,
        'h', 359,
        '|', 420,
        '~', 404,
        'A', 199,
        'a', 199,
        'B', 121,
        'b', 121,
        'C', 136,
        'c', 136,
        'D', 130,
        'd', 130,
        'E', 142,
        'e', 142,
        'I', 140,
        'i', 140,
        'J', 139,
        'j', 139,
        'L', 129,
        'l', 129,
        'N', 143,
        'n', 143,
        'O', 148,
        'o', 148,
        'P', 132,
        'p', 132,
        'R', 141,
        'r', 141,
        'S', 120,
        's', 120,
        'T', 119,
        't', 119,
        'X', 201,
        'x', 201,
        'Y', 202,
        'y', 202,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '#', 400,
        '$', 358,
        '%', 319,
        '(', 208,
        '0', 339,
        '1', 348,
        '2', 341,
        '6', 342,
        ';', 198,
        'h', 360,
      );
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(353);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(358);
      if (lookahead == '%') ADVANCE(319);
      if (lookahead == '(') ADVANCE(208);
      if (lookahead == '0') ADVANCE(386);
      if (lookahead == '6') ADVANCE(389);
      if (lookahead == ';') ADVANCE(198);
      if (lookahead == 'h') ADVANCE(360);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(391);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(394);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '$', 358,
        '%', 319,
        '0', 339,
        '1', 348,
        '2', 341,
        '6', 342,
        ';', 198,
        'h', 360,
        'A', 200,
        'a', 200,
      );
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(353);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(358);
      if (lookahead == '%') ADVANCE(319);
      if (lookahead == '0') ADVANCE(340);
      if (lookahead == '1') ADVANCE(356);
      if (lookahead == '2') ADVANCE(344);
      if (lookahead == ';') ADVANCE(198);
      if (lookahead == 'h') ADVANCE(360);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(369);
      if (lookahead == '1') ADVANCE(384);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(362);
      if (lookahead == ';') ADVANCE(198);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(10);
      if (lookahead == ';') ADVANCE(198);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(396);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(399);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(5);
      if (lookahead == '1') ADVANCE(192);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(8);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(9);
      if (lookahead == '1') ADVANCE(191);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(363);
      if (lookahead == ';') ADVANCE(198);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(365);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(11);
      if (lookahead == '1') ADVANCE(189);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(13);
      if (lookahead == '1') ADVANCE(186);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(14);
      if (lookahead == '1') ADVANCE(182);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(15);
      if (lookahead == '1') ADVANCE(177);
      END_STATE();
    case 17:
      if (lookahead == '0') ADVANCE(16);
      if (lookahead == '1') ADVANCE(171);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(322);
      if (lookahead == '1') ADVANCE(336);
      if (lookahead == ';') ADVANCE(198);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      END_STATE();
    case 19:
      if (lookahead == '1') ADVANCE(21);
      if (lookahead == '8') ADVANCE(432);
      END_STATE();
    case 20:
      if (lookahead == '1') ADVANCE(21);
      if (lookahead == '8') ADVANCE(432);
      if (lookahead == 'N') ADVANCE(78);
      END_STATE();
    case 21:
      if (lookahead == '6') ADVANCE(431);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(266);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(268);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(278);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(282);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(302);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(304);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 29:
      ADVANCE_MAP(
        ':', 203,
        'A', 69,
        'a', 69,
        'C', 66,
        'c', 66,
        'S', 70,
        's', 70,
        'X', 27,
        'x', 27,
        'Y', 28,
        'y', 28,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(38);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 31:
      ADVANCE_MAP(
        ':', 203,
        'C', 33,
        'c', 33,
        'E', 61,
        'e', 61,
        'I', 67,
        'i', 67,
        'M', 46,
        'm', 46,
        'N', 44,
        'n', 44,
        'P', 51,
        'p', 51,
        'R', 48,
        'r', 48,
        'V', 34,
        'v', 34,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(214);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(230);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 35:
      ADVANCE_MAP(
        ':', 203,
        'C', 234,
        'c', 234,
        'D', 236,
        'd', 236,
        'I', 238,
        'i', 238,
        'V', 240,
        'v', 240,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(248);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(250);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(256);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(258);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(296);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(298);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(32);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(42);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(22);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(24);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(290);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(35);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(58);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(286);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(59);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(52);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(244);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(308);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 72:
      ADVANCE_MAP(
        'A', 20,
        'B', 73,
        'H', 85,
        'L', 95,
        'M', 91,
        'N', 92,
        'O', 96,
        'S', 84,
        'X', 90,
        'a', 19,
      );
      END_STATE();
    case 73:
      if (lookahead == 'A') ADVANCE(88);
      if (lookahead == 'I') ADVANCE(100);
      END_STATE();
    case 74:
      if (lookahead == 'A') ADVANCE(89);
      if (lookahead == 'N') ADVANCE(94);
      if (lookahead == 'O') ADVANCE(98);
      if (lookahead == 'X') ADVANCE(93);
      END_STATE();
    case 75:
      if (lookahead == 'B') ADVANCE(106);
      END_STATE();
    case 76:
      if (lookahead == 'B') ADVANCE(107);
      END_STATE();
    case 77:
      if (lookahead == 'B') ADVANCE(108);
      END_STATE();
    case 78:
      if (lookahead == 'D') ADVANCE(424);
      END_STATE();
    case 79:
      if (lookahead == 'D') ADVANCE(413);
      END_STATE();
    case 80:
      if (lookahead == 'D') ADVANCE(414);
      END_STATE();
    case 81:
      if (lookahead == 'E') ADVANCE(407);
      END_STATE();
    case 82:
      if (lookahead == 'E') ADVANCE(405);
      END_STATE();
    case 83:
      if (lookahead == 'E') ADVANCE(409);
      END_STATE();
    case 84:
      if (lookahead == 'H') ADVANCE(87);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(75);
      END_STATE();
    case 86:
      if (lookahead == 'K') ADVANCE(77);
      END_STATE();
    case 87:
      if (lookahead == 'L') ADVANCE(417);
      if (lookahead == 'R') ADVANCE(418);
      END_STATE();
    case 88:
      if (lookahead == 'N') ADVANCE(86);
      END_STATE();
    case 89:
      if (lookahead == 'N') ADVANCE(80);
      END_STATE();
    case 90:
      if (lookahead == 'O') ADVANCE(97);
      END_STATE();
    case 91:
      if (lookahead == 'O') ADVANCE(79);
      END_STATE();
    case 92:
      if (lookahead == 'O') ADVANCE(101);
      END_STATE();
    case 93:
      if (lookahead == 'O') ADVANCE(99);
      END_STATE();
    case 94:
      if (lookahead == 'O') ADVANCE(103);
      END_STATE();
    case 95:
      if (lookahead == 'O') ADVANCE(76);
      END_STATE();
    case 96:
      if (lookahead == 'R') ADVANCE(427);
      END_STATE();
    case 97:
      if (lookahead == 'R') ADVANCE(426);
      END_STATE();
    case 98:
      if (lookahead == 'R') ADVANCE(419);
      END_STATE();
    case 99:
      if (lookahead == 'R') ADVANCE(416);
      END_STATE();
    case 100:
      if (lookahead == 'T') ADVANCE(74);
      END_STATE();
    case 101:
      if (lookahead == 'T') ADVANCE(429);
      END_STATE();
    case 102:
      if (lookahead == 'T') ADVANCE(81);
      END_STATE();
    case 103:
      if (lookahead == 'T') ADVANCE(403);
      END_STATE();
    case 104:
      if (lookahead == 'T') ADVANCE(82);
      END_STATE();
    case 105:
      if (lookahead == 'T') ADVANCE(83);
      END_STATE();
    case 106:
      if (lookahead == 'Y') ADVANCE(102);
      END_STATE();
    case 107:
      if (lookahead == 'Y') ADVANCE(104);
      END_STATE();
    case 108:
      if (lookahead == 'Y') ADVANCE(105);
      END_STATE();
    case 109:
      if (lookahead == 'h') ADVANCE(367);
      END_STATE();
    case 110:
      if (lookahead == 'h') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 111:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 112:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(267);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(269);
      END_STATE();
    case 113:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(275);
      END_STATE();
    case 114:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(277);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(279);
      END_STATE();
    case 115:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(281);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(283);
      END_STATE();
    case 116:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(301);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(303);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(305);
      END_STATE();
    case 117:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(313);
      END_STATE();
    case 118:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(317);
      END_STATE();
    case 119:
      ADVANCE_MAP(
        'A', 155,
        'a', 155,
        'C', 152,
        'c', 152,
        'S', 156,
        's', 156,
        'X', 117,
        'x', 117,
        'Y', 118,
        'y', 118,
      );
      END_STATE();
    case 120:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 121:
      ADVANCE_MAP(
        'C', 122,
        'c', 122,
        'E', 147,
        'e', 147,
        'I', 153,
        'i', 153,
        'M', 133,
        'm', 133,
        'N', 131,
        'n', 131,
        'P', 137,
        'p', 137,
        'R', 135,
        'r', 135,
        'V', 123,
        'v', 123,
      );
      END_STATE();
    case 122:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(213);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(215);
      END_STATE();
    case 123:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(229);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(231);
      END_STATE();
    case 124:
      ADVANCE_MAP(
        'C', 233,
        'c', 233,
        'D', 235,
        'd', 235,
        'I', 237,
        'i', 237,
        'V', 239,
        'v', 239,
      );
      END_STATE();
    case 125:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(247);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(249);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(251);
      END_STATE();
    case 126:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(255);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(257);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(259);
      END_STATE();
    case 127:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(293);
      END_STATE();
    case 128:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(295);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(297);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(299);
      END_STATE();
    case 129:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(151);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 132:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(114);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 133:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 134:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(289);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(291);
      END_STATE();
    case 135:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(227);
      END_STATE();
    case 136:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(124);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(144);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(154);
      END_STATE();
    case 137:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(225);
      END_STATE();
    case 138:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(285);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 139:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      END_STATE();
    case 140:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 141:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(138);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(134);
      END_STATE();
    case 142:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 143:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 144:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(241);
      END_STATE();
    case 145:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(261);
      END_STATE();
    case 146:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(273);
      END_STATE();
    case 147:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(217);
      END_STATE();
    case 148:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 149:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 150:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 151:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 152:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(315);
      END_STATE();
    case 153:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(219);
      END_STATE();
    case 154:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(243);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(245);
      END_STATE();
    case 155:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(307);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(309);
      END_STATE();
    case 156:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(311);
      END_STATE();
    case 157:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(377);
      END_STATE();
    case 158:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(157);
      END_STATE();
    case 159:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(158);
      END_STATE();
    case 160:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(159);
      END_STATE();
    case 161:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(160);
      END_STATE();
    case 162:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(161);
      END_STATE();
    case 163:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(162);
      END_STATE();
    case 164:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(370);
      END_STATE();
    case 165:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(163);
      END_STATE();
    case 166:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(164);
      END_STATE();
    case 167:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(166);
      END_STATE();
    case 168:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(167);
      END_STATE();
    case 169:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(168);
      END_STATE();
    case 170:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(169);
      END_STATE();
    case 171:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(170);
      END_STATE();
    case 172:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(378);
      END_STATE();
    case 173:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(172);
      END_STATE();
    case 174:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(173);
      END_STATE();
    case 175:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(174);
      END_STATE();
    case 176:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(175);
      END_STATE();
    case 177:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(176);
      END_STATE();
    case 178:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(379);
      END_STATE();
    case 179:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(178);
      END_STATE();
    case 180:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(179);
      END_STATE();
    case 181:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(180);
      END_STATE();
    case 182:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(181);
      END_STATE();
    case 183:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(380);
      END_STATE();
    case 184:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(183);
      END_STATE();
    case 185:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(184);
      END_STATE();
    case 186:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(185);
      END_STATE();
    case 187:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(381);
      END_STATE();
    case 188:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(187);
      END_STATE();
    case 189:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(188);
      END_STATE();
    case 190:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(382);
      END_STATE();
    case 191:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(190);
      END_STATE();
    case 192:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(383);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(398);
      END_STATE();
    case 194:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(397);
      END_STATE();
    case 195:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(193);
      END_STATE();
    case 196:
      if (eof) ADVANCE(197);
      ADVANCE_MAP(
        ')', 209,
        ',', 207,
        '.', 111,
        '0', 17,
        '1', 165,
        ';', 198,
        'A', 40,
        'a', 40,
        'B', 31,
        'b', 31,
        'C', 49,
        'c', 49,
        'D', 43,
        'd', 43,
        'E', 56,
        'e', 56,
        'I', 54,
        'i', 54,
        'J', 53,
        'j', 53,
        'L', 41,
        'l', 41,
        'N', 57,
        'n', 57,
        'O', 62,
        'o', 62,
        'P', 45,
        'p', 45,
        'R', 55,
        'r', 55,
        'S', 30,
        's', 30,
        'T', 29,
        't', 29,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(196);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_acc_register);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_acc_register);
      if (lookahead == 'h') ADVANCE(206);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(109);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_x_register);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_y_register);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'h') ADVANCE(206);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(109);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'h') ADVANCE(206);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_symbol);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_adc_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_and_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_asl_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_bcc_opcode);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_bcc_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_bcs_opcode);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_bcs_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_beq_opcode);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_beq_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_bit_opcode);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_bit_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_bmi_opcode);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_bmi_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_bne_opcode);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_bne_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_bpl_opcode);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_bpl_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_brk_opcode);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_brk_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_bvc_opcode);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_bvc_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_bvs_opcode);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_bvs_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_clc_opcode);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_clc_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_cld_opcode);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_cld_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_cli_opcode);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_cli_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_clv_opcode);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_clv_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_cmp_opcode);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_cmp_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_cpx_opcode);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_cpx_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_cpy_opcode);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_cpy_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_dec_opcode);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_dec_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_dex_opcode);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_dex_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_dey_opcode);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_dey_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_eor_opcode);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_eor_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_inc_opcode);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_inc_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_inx_opcode);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_inx_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_iny_opcode);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_iny_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_jmp_opcode);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_jmp_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_jsr_opcode);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_jsr_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_lda_opcode);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_lda_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_ldx_opcode);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_ldx_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_ldy_opcode);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_ldy_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_lsr_opcode);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_lsr_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_nop_opcode);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_nop_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_ora_opcode);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_ora_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_pha_opcode);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_pha_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_php_opcode);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_php_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_pla_opcode);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_pla_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_plp_opcode);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_plp_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_rol_opcode);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_rol_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_ror_opcode);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_ror_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_rti_opcode);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_rti_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_rts_opcode);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_rts_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_sbc_opcode);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_sbc_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_sec_opcode);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_sec_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_sed_opcode);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_sed_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_sei_opcode);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_sei_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_sta_opcode);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_sta_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_stx_opcode);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_stx_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_sty_opcode);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_sty_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_tax_opcode);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_tax_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_tay_opcode);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_tay_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_tsx_opcode);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_tsx_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_txa_opcode);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_txa_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_tcs_opcode);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_tcs_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_tya_opcode);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_tya_opcode);
      if (lookahead == ':') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0') ADVANCE(321);
      if (lookahead == '1') ADVANCE(337);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0') ADVANCE(322);
      if (lookahead == '1') ADVANCE(336);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(377);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(320);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(323);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(324);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(325);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(326);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(327);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(328);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(329);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(330);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(331);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(332);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(333);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(334);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(335);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_dec_8);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '0') ADVANCE(339);
      if (lookahead == '1') ADVANCE(348);
      if (lookahead == '2') ADVANCE(341);
      if (lookahead == '6') ADVANCE(342);
      if (lookahead == 'h') ADVANCE(367);
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(353);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '0') ADVANCE(340);
      if (lookahead == '1') ADVANCE(356);
      if (lookahead == '2') ADVANCE(344);
      if (lookahead == 'h') ADVANCE(367);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(346);
      if (lookahead == 'h') ADVANCE(367);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(343);
      if (lookahead == 'h') ADVANCE(367);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(350);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(387);
      if (lookahead == 'h') ADVANCE(367);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(393);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(347);
      if (lookahead == 'h') ADVANCE(367);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(352);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(367);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(367);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(357);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(338);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(393);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_dec_8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_h);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_h);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (lookahead == '0') ADVANCE(362);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (lookahead == '0') ADVANCE(363);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(365);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(398);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(361);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(364);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_hex_8_token2);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0') ADVANCE(369);
      if (lookahead == '1') ADVANCE(384);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(377);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(368);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(371);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(372);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(373);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(374);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(375);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(376);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(370);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(378);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(379);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(380);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(381);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(382);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(383);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_dec_16);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '0') ADVANCE(386);
      if (lookahead == '6') ADVANCE(389);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(391);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(394);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '3') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(392);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(385);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '5') ADVANCE(387);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(393);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '5') ADVANCE(388);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(391);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(385);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(393);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(385);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(391);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (lookahead == '0') ADVANCE(396);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(399);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(398);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(397);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_imm_prefix);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_DOTBITNOT);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_DOTLOBYTE);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(422);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_DOTHIBYTE);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(423);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_DOTBANKBYTE);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_DOTMOD);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_DOTBITAND);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(425);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_DOTBITXOR);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_DOTSHL);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_DOTSHR);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_DOTBITOR);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(428);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_DOTAND);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_DOTXOR);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_DOTOR);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_DOTNOT);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_a16_ctrl_cmd);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_a8_ctrl_cmd);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 196},
  [2] = {.lex_state = 196},
  [3] = {.lex_state = 196},
  [4] = {.lex_state = 196},
  [5] = {.lex_state = 196},
  [6] = {.lex_state = 196},
  [7] = {.lex_state = 196},
  [8] = {.lex_state = 196},
  [9] = {.lex_state = 196},
  [10] = {.lex_state = 196},
  [11] = {.lex_state = 196},
  [12] = {.lex_state = 196},
  [13] = {.lex_state = 196},
  [14] = {.lex_state = 196},
  [15] = {.lex_state = 196},
  [16] = {.lex_state = 196},
  [17] = {.lex_state = 196},
  [18] = {.lex_state = 196},
  [19] = {.lex_state = 196},
  [20] = {.lex_state = 196},
  [21] = {.lex_state = 196},
  [22] = {.lex_state = 196},
  [23] = {.lex_state = 196},
  [24] = {.lex_state = 196},
  [25] = {.lex_state = 196},
  [26] = {.lex_state = 196},
  [27] = {.lex_state = 196},
  [28] = {.lex_state = 196},
  [29] = {.lex_state = 196},
  [30] = {.lex_state = 196},
  [31] = {.lex_state = 196},
  [32] = {.lex_state = 196},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 196},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 18},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 12},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
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
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_h] = ACTIONS(1),
    [aux_sym_bin_16_token1] = ACTIONS(1),
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
    [anon_sym_DOTSHR] = ACTIONS(1),
    [anon_sym_DOTBITOR] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
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
  },
  [1] = {
    [sym_ca65] = STATE(59),
    [sym_inst] = STATE(2),
    [sym_impl_addr_inst] = STATE(19),
    [sym_acc_addr_inst] = STATE(19),
    [sym_imm_addr_inst] = STATE(19),
    [sym_abs_addr_inst] = STATE(19),
    [sym_zp_addr_inst] = STATE(19),
    [sym_abs_x_addr_inst] = STATE(19),
    [sym_abs_y_addr_inst] = STATE(19),
    [sym_zp_x_addr_inst] = STATE(19),
    [sym_zp_y_addr_inst] = STATE(19),
    [sym_ind_addr_inst] = STATE(19),
    [sym_ind_x_addr_inst] = STATE(19),
    [sym_ind_y_addr_inst] = STATE(19),
    [sym_rel_addr_inst] = STATE(19),
    [sym_ctrl_cmd] = STATE(2),
    [aux_sym_ca65_repeat1] = STATE(2),
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
  },
  [2] = {
    [sym_inst] = STATE(3),
    [sym_impl_addr_inst] = STATE(19),
    [sym_acc_addr_inst] = STATE(19),
    [sym_imm_addr_inst] = STATE(19),
    [sym_abs_addr_inst] = STATE(19),
    [sym_zp_addr_inst] = STATE(19),
    [sym_abs_x_addr_inst] = STATE(19),
    [sym_abs_y_addr_inst] = STATE(19),
    [sym_zp_x_addr_inst] = STATE(19),
    [sym_zp_y_addr_inst] = STATE(19),
    [sym_ind_addr_inst] = STATE(19),
    [sym_ind_x_addr_inst] = STATE(19),
    [sym_ind_y_addr_inst] = STATE(19),
    [sym_rel_addr_inst] = STATE(19),
    [sym_ctrl_cmd] = STATE(3),
    [aux_sym_ca65_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(41),
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
  },
  [3] = {
    [sym_inst] = STATE(3),
    [sym_impl_addr_inst] = STATE(19),
    [sym_acc_addr_inst] = STATE(19),
    [sym_imm_addr_inst] = STATE(19),
    [sym_abs_addr_inst] = STATE(19),
    [sym_zp_addr_inst] = STATE(19),
    [sym_abs_x_addr_inst] = STATE(19),
    [sym_abs_y_addr_inst] = STATE(19),
    [sym_zp_x_addr_inst] = STATE(19),
    [sym_zp_y_addr_inst] = STATE(19),
    [sym_ind_addr_inst] = STATE(19),
    [sym_ind_x_addr_inst] = STATE(19),
    [sym_ind_y_addr_inst] = STATE(19),
    [sym_rel_addr_inst] = STATE(19),
    [sym_ctrl_cmd] = STATE(3),
    [aux_sym_ca65_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(45),
    [sym_adc_opcode] = ACTIONS(48),
    [sym_and_opcode] = ACTIONS(48),
    [sym_asl_opcode] = ACTIONS(51),
    [sym_bcc_opcode] = ACTIONS(54),
    [sym_bcs_opcode] = ACTIONS(54),
    [sym_beq_opcode] = ACTIONS(54),
    [sym_bit_opcode] = ACTIONS(57),
    [sym_bmi_opcode] = ACTIONS(54),
    [sym_bne_opcode] = ACTIONS(54),
    [sym_bpl_opcode] = ACTIONS(54),
    [sym_brk_opcode] = ACTIONS(60),
    [sym_bvc_opcode] = ACTIONS(54),
    [sym_bvs_opcode] = ACTIONS(54),
    [sym_clc_opcode] = ACTIONS(60),
    [sym_cld_opcode] = ACTIONS(60),
    [sym_cli_opcode] = ACTIONS(60),
    [sym_clv_opcode] = ACTIONS(60),
    [sym_cmp_opcode] = ACTIONS(48),
    [sym_cpx_opcode] = ACTIONS(63),
    [sym_cpy_opcode] = ACTIONS(63),
    [sym_dec_opcode] = ACTIONS(66),
    [sym_dex_opcode] = ACTIONS(60),
    [sym_dey_opcode] = ACTIONS(60),
    [sym_eor_opcode] = ACTIONS(48),
    [sym_inc_opcode] = ACTIONS(66),
    [sym_inx_opcode] = ACTIONS(60),
    [sym_iny_opcode] = ACTIONS(60),
    [sym_jmp_opcode] = ACTIONS(69),
    [sym_jsr_opcode] = ACTIONS(72),
    [sym_lda_opcode] = ACTIONS(48),
    [sym_ldx_opcode] = ACTIONS(75),
    [sym_ldy_opcode] = ACTIONS(78),
    [sym_lsr_opcode] = ACTIONS(78),
    [sym_nop_opcode] = ACTIONS(60),
    [sym_ora_opcode] = ACTIONS(48),
    [sym_pha_opcode] = ACTIONS(60),
    [sym_php_opcode] = ACTIONS(60),
    [sym_pla_opcode] = ACTIONS(60),
    [sym_plp_opcode] = ACTIONS(60),
    [sym_rol_opcode] = ACTIONS(51),
    [sym_ror_opcode] = ACTIONS(51),
    [sym_rti_opcode] = ACTIONS(60),
    [sym_rts_opcode] = ACTIONS(60),
    [sym_sbc_opcode] = ACTIONS(48),
    [sym_sec_opcode] = ACTIONS(60),
    [sym_sed_opcode] = ACTIONS(60),
    [sym_sei_opcode] = ACTIONS(60),
    [sym_sta_opcode] = ACTIONS(81),
    [sym_stx_opcode] = ACTIONS(84),
    [sym_sty_opcode] = ACTIONS(87),
    [sym_tax_opcode] = ACTIONS(60),
    [sym_tay_opcode] = ACTIONS(60),
    [sym_tsx_opcode] = ACTIONS(60),
    [sym_txa_opcode] = ACTIONS(60),
    [sym_tcs_opcode] = ACTIONS(60),
    [sym_tya_opcode] = ACTIONS(60),
    [sym_a16_ctrl_cmd] = ACTIONS(90),
    [sym_a8_ctrl_cmd] = ACTIONS(90),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 6,
      ts_builtin_sym_end,
      sym_label,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
    ACTIONS(95), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [70] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 6,
      ts_builtin_sym_end,
      sym_label,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
    ACTIONS(99), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      sym_label,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
    ACTIONS(103), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [210] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 6,
      ts_builtin_sym_end,
      sym_label,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
    ACTIONS(107), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 6,
      ts_builtin_sym_end,
      sym_label,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
    ACTIONS(111), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 6,
      ts_builtin_sym_end,
      sym_label,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
    ACTIONS(115), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 6,
      ts_builtin_sym_end,
      sym_label,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
    ACTIONS(119), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [490] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(121), 4,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
    ACTIONS(125), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [561] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(127), 4,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
    ACTIONS(131), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [632] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    ACTIONS(133), 4,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
    ACTIONS(136), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [703] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    ACTIONS(121), 4,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
    ACTIONS(125), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [774] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(121), 4,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
    ACTIONS(125), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(127), 4,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
    ACTIONS(131), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 5,
      ts_builtin_sym_end,
      sym_label,
      anon_sym_COMMA,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
    ACTIONS(136), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 4,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
    ACTIONS(147), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [1053] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 4,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
    ACTIONS(151), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [1121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 4,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
    ACTIONS(155), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [1189] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 4,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
    ACTIONS(159), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [1257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 4,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
    ACTIONS(163), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [1325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 4,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
    ACTIONS(167), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [1393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 4,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
    ACTIONS(171), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [1461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 4,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
    ACTIONS(175), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [1529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 4,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
    ACTIONS(179), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [1597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 4,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
    ACTIONS(183), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [1665] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 4,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
    ACTIONS(187), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [1733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 4,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
    ACTIONS(191), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [1801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 4,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
    ACTIONS(131), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [1869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 4,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
    ACTIONS(125), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [1937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 4,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
    ACTIONS(195), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [2005] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_symbol,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_PERCENT,
    ACTIONS(203), 1,
      sym_dec_8,
    ACTIONS(205), 1,
      anon_sym_DOLLAR,
    ACTIONS(207), 1,
      anon_sym_h,
    ACTIONS(209), 1,
      aux_sym_hex_8_token2,
    ACTIONS(211), 1,
      sym_dec_16,
    ACTIONS(213), 1,
      sym_imm_prefix,
    STATE(15), 1,
      sym_operand_16,
    STATE(16), 1,
      sym_operand_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(10), 2,
      sym_bin_8,
      sym_hex_8,
  [2050] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_symbol,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_PERCENT,
    ACTIONS(203), 1,
      sym_dec_8,
    ACTIONS(205), 1,
      anon_sym_DOLLAR,
    ACTIONS(207), 1,
      anon_sym_h,
    ACTIONS(209), 1,
      aux_sym_hex_8_token2,
    ACTIONS(211), 1,
      sym_dec_16,
    STATE(15), 1,
      sym_operand_16,
    STATE(16), 1,
      sym_operand_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(10), 2,
      sym_bin_8,
      sym_hex_8,
  [2092] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_symbol,
    ACTIONS(201), 1,
      anon_sym_PERCENT,
    ACTIONS(203), 1,
      sym_dec_8,
    ACTIONS(205), 1,
      anon_sym_DOLLAR,
    ACTIONS(207), 1,
      anon_sym_h,
    ACTIONS(209), 1,
      aux_sym_hex_8_token2,
    ACTIONS(211), 1,
      sym_dec_16,
    ACTIONS(213), 1,
      sym_imm_prefix,
    STATE(14), 1,
      sym_operand_16,
    STATE(16), 1,
      sym_operand_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(10), 2,
      sym_bin_8,
      sym_hex_8,
  [2134] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_symbol,
    ACTIONS(201), 1,
      anon_sym_PERCENT,
    ACTIONS(203), 1,
      sym_dec_8,
    ACTIONS(205), 1,
      anon_sym_DOLLAR,
    ACTIONS(207), 1,
      anon_sym_h,
    ACTIONS(209), 1,
      aux_sym_hex_8_token2,
    ACTIONS(211), 1,
      sym_dec_16,
    ACTIONS(213), 1,
      sym_imm_prefix,
    STATE(11), 1,
      sym_operand_16,
    STATE(12), 1,
      sym_operand_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(10), 2,
      sym_bin_8,
      sym_hex_8,
  [2176] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_symbol,
    ACTIONS(201), 1,
      anon_sym_PERCENT,
    ACTIONS(203), 1,
      sym_dec_8,
    ACTIONS(205), 1,
      anon_sym_DOLLAR,
    ACTIONS(207), 1,
      anon_sym_h,
    ACTIONS(209), 1,
      aux_sym_hex_8_token2,
    ACTIONS(211), 1,
      sym_dec_16,
    ACTIONS(213), 1,
      sym_imm_prefix,
    STATE(30), 1,
      sym_operand_8,
    STATE(31), 1,
      sym_operand_16,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(10), 2,
      sym_bin_8,
      sym_hex_8,
  [2218] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_symbol,
    ACTIONS(201), 1,
      anon_sym_PERCENT,
    ACTIONS(203), 1,
      sym_dec_8,
    ACTIONS(205), 1,
      anon_sym_DOLLAR,
    ACTIONS(207), 1,
      anon_sym_h,
    ACTIONS(209), 1,
      aux_sym_hex_8_token2,
    ACTIONS(211), 1,
      sym_dec_16,
    ACTIONS(215), 1,
      sym_acc_register,
    STATE(14), 1,
      sym_operand_16,
    STATE(16), 1,
      sym_operand_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(10), 2,
      sym_bin_8,
      sym_hex_8,
  [2260] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_PERCENT,
    ACTIONS(203), 1,
      sym_dec_8,
    ACTIONS(205), 1,
      anon_sym_DOLLAR,
    ACTIONS(207), 1,
      anon_sym_h,
    ACTIONS(209), 1,
      aux_sym_hex_8_token2,
    ACTIONS(211), 1,
      sym_dec_16,
    ACTIONS(217), 1,
      sym_symbol,
    STATE(16), 1,
      sym_operand_8,
    STATE(31), 1,
      sym_operand_16,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(10), 2,
      sym_bin_8,
      sym_hex_8,
  [2299] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_symbol,
    ACTIONS(201), 1,
      anon_sym_PERCENT,
    ACTIONS(203), 1,
      sym_dec_8,
    ACTIONS(205), 1,
      anon_sym_DOLLAR,
    ACTIONS(207), 1,
      anon_sym_h,
    ACTIONS(209), 1,
      aux_sym_hex_8_token2,
    ACTIONS(211), 1,
      sym_dec_16,
    STATE(30), 1,
      sym_operand_8,
    STATE(31), 1,
      sym_operand_16,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(10), 2,
      sym_bin_8,
      sym_hex_8,
  [2338] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_symbol,
    ACTIONS(201), 1,
      anon_sym_PERCENT,
    ACTIONS(203), 1,
      sym_dec_8,
    ACTIONS(205), 1,
      anon_sym_DOLLAR,
    ACTIONS(207), 1,
      anon_sym_h,
    ACTIONS(209), 1,
      aux_sym_hex_8_token2,
    ACTIONS(211), 1,
      sym_dec_16,
    STATE(14), 1,
      sym_operand_16,
    STATE(16), 1,
      sym_operand_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(10), 2,
      sym_bin_8,
      sym_hex_8,
  [2377] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_PERCENT,
    ACTIONS(203), 1,
      sym_dec_8,
    ACTIONS(205), 1,
      anon_sym_DOLLAR,
    ACTIONS(207), 1,
      anon_sym_h,
    ACTIONS(209), 1,
      aux_sym_hex_8_token2,
    ACTIONS(211), 1,
      sym_dec_16,
    ACTIONS(217), 1,
      sym_symbol,
    STATE(12), 1,
      sym_operand_8,
    STATE(31), 1,
      sym_operand_16,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(10), 2,
      sym_bin_8,
      sym_hex_8,
  [2416] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_symbol,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      anon_sym_PERCENT,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    ACTIONS(225), 1,
      anon_sym_h,
    ACTIONS(227), 1,
      sym_dec_16,
    STATE(31), 1,
      sym_operand_16,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
  [2445] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      aux_sym_hex_8_token2,
    ACTIONS(229), 1,
      anon_sym_PERCENT,
    ACTIONS(231), 1,
      anon_sym_DOLLAR,
    ACTIONS(233), 1,
      anon_sym_h,
    STATE(21), 1,
      sym_operand_8,
    ACTIONS(203), 2,
      sym_symbol,
      sym_dec_8,
    STATE(10), 2,
      sym_bin_8,
      sym_hex_8,
  [2472] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      aux_sym_hex_8_token2,
    ACTIONS(229), 1,
      anon_sym_PERCENT,
    ACTIONS(231), 1,
      anon_sym_DOLLAR,
    ACTIONS(233), 1,
      anon_sym_h,
    STATE(50), 1,
      sym_operand_8,
    ACTIONS(203), 2,
      sym_symbol,
      sym_dec_8,
    STATE(10), 2,
      sym_bin_8,
      sym_hex_8,
  [2499] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_symbol,
    ACTIONS(221), 1,
      anon_sym_PERCENT,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    ACTIONS(225), 1,
      anon_sym_h,
    ACTIONS(227), 1,
      sym_dec_16,
    STATE(29), 1,
      sym_operand_16,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
  [2525] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_symbol,
    ACTIONS(221), 1,
      anon_sym_PERCENT,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    ACTIONS(225), 1,
      anon_sym_h,
    ACTIONS(227), 1,
      sym_dec_16,
    STATE(60), 1,
      sym_operand_16,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
  [2551] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_symbol,
    ACTIONS(221), 1,
      anon_sym_PERCENT,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    ACTIONS(225), 1,
      anon_sym_h,
    ACTIONS(227), 1,
      sym_dec_16,
    STATE(31), 1,
      sym_operand_16,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
  [2577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      aux_sym_bin_8_token1,
    ACTIONS(237), 1,
      aux_sym_bin_16_token1,
  [2587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
  [2597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      aux_sym_hex_8_token1,
    ACTIONS(245), 1,
      aux_sym_hex_16_token1,
  [2607] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_x_register,
    ACTIONS(249), 1,
      sym_y_register,
  [2617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      aux_sym_bin_16_token1,
  [2624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      sym_y_register,
  [2631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_x_register,
  [2638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_COMMA,
  [2645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      aux_sym_bin_8_token1,
  [2652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym_y_register,
  [2659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
  [2666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
  [2673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_x_register,
  [2680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
  [2687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      sym_y_register,
  [2694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_x_register,
  [2701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      aux_sym_hex_16_token1,
  [2708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      aux_sym_hex_8_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 70,
  [SMALL_STATE(6)] = 140,
  [SMALL_STATE(7)] = 210,
  [SMALL_STATE(8)] = 280,
  [SMALL_STATE(9)] = 350,
  [SMALL_STATE(10)] = 420,
  [SMALL_STATE(11)] = 490,
  [SMALL_STATE(12)] = 561,
  [SMALL_STATE(13)] = 632,
  [SMALL_STATE(14)] = 703,
  [SMALL_STATE(15)] = 774,
  [SMALL_STATE(16)] = 845,
  [SMALL_STATE(17)] = 916,
  [SMALL_STATE(18)] = 985,
  [SMALL_STATE(19)] = 1053,
  [SMALL_STATE(20)] = 1121,
  [SMALL_STATE(21)] = 1189,
  [SMALL_STATE(22)] = 1257,
  [SMALL_STATE(23)] = 1325,
  [SMALL_STATE(24)] = 1393,
  [SMALL_STATE(25)] = 1461,
  [SMALL_STATE(26)] = 1529,
  [SMALL_STATE(27)] = 1597,
  [SMALL_STATE(28)] = 1665,
  [SMALL_STATE(29)] = 1733,
  [SMALL_STATE(30)] = 1801,
  [SMALL_STATE(31)] = 1869,
  [SMALL_STATE(32)] = 1937,
  [SMALL_STATE(33)] = 2005,
  [SMALL_STATE(34)] = 2050,
  [SMALL_STATE(35)] = 2092,
  [SMALL_STATE(36)] = 2134,
  [SMALL_STATE(37)] = 2176,
  [SMALL_STATE(38)] = 2218,
  [SMALL_STATE(39)] = 2260,
  [SMALL_STATE(40)] = 2299,
  [SMALL_STATE(41)] = 2338,
  [SMALL_STATE(42)] = 2377,
  [SMALL_STATE(43)] = 2416,
  [SMALL_STATE(44)] = 2445,
  [SMALL_STATE(45)] = 2472,
  [SMALL_STATE(46)] = 2499,
  [SMALL_STATE(47)] = 2525,
  [SMALL_STATE(48)] = 2551,
  [SMALL_STATE(49)] = 2577,
  [SMALL_STATE(50)] = 2587,
  [SMALL_STATE(51)] = 2597,
  [SMALL_STATE(52)] = 2607,
  [SMALL_STATE(53)] = 2617,
  [SMALL_STATE(54)] = 2624,
  [SMALL_STATE(55)] = 2631,
  [SMALL_STATE(56)] = 2638,
  [SMALL_STATE(57)] = 2645,
  [SMALL_STATE(58)] = 2652,
  [SMALL_STATE(59)] = 2659,
  [SMALL_STATE(60)] = 2666,
  [SMALL_STATE(61)] = 2673,
  [SMALL_STATE(62)] = 2680,
  [SMALL_STATE(63)] = 2687,
  [SMALL_STATE(64)] = 2694,
  [SMALL_STATE(65)] = 2701,
  [SMALL_STATE(66)] = 2708,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca65, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca65, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_8, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bin_8, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_16, 2, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bin_16, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_8, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_8, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_16, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_16, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_8, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_8, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_16, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_16, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_8, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_8, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abs_addr_inst, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abs_addr_inst, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zp_addr_inst, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zp_addr_inst, 2, 0, 0),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_operand_8, 1, 0, 0), REDUCE(sym_operand_16, 1, 0, 0),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_operand_8, 1, 0, 0), REDUCE(sym_operand_16, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zp_y_addr_inst, 4, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zp_y_addr_inst, 4, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 1, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inst, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zp_x_addr_inst, 4, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zp_x_addr_inst, 4, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imm_addr_inst, 3, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imm_addr_inst, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abs_x_addr_inst, 4, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abs_x_addr_inst, 4, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_cmd, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_cmd, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abs_y_addr_inst, 4, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abs_y_addr_inst, 4, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ind_addr_inst, 4, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ind_addr_inst, 4, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acc_addr_inst, 2, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_acc_addr_inst, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ind_x_addr_inst, 6, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ind_x_addr_inst, 6, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_impl_addr_inst, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_impl_addr_inst, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rel_addr_inst, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rel_addr_inst, 2, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ind_y_addr_inst, 6, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ind_y_addr_inst, 6, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [261] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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
