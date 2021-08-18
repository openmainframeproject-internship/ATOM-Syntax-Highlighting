#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 6
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 6
#define ALIAS_COUNT 0
#define TOKEN_COUNT 2
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_DOT_STAR_LPAREN_QMARK_LT_EQ_DOT_LBRACE72_RBRACE_RPAREN_LPAREN_LPAREN_LBRACK_CARET0_DASH9_BSLASHr_BSLASHn_RBRACK_PLUS_RPAREN_PIPE_LPAREN_LBRACK0_DASH9_BSLASHr_BSLASHn_RBRACK_LBRACE8_RBRACE_DOT_PLUS_RPAREN_RPAREN = 1,
  sym_source_file = 2,
  sym__definition = 3,
  sym_line_too_long_rule = 4,
  aux_sym_source_file_repeat1 = 5,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOT_STAR_LPAREN_QMARK_LT_EQ_DOT_LBRACE72_RBRACE_RPAREN_LPAREN_LPAREN_LBRACK_CARET0_DASH9_BSLASHr_BSLASHn_RBRACK_PLUS_RPAREN_PIPE_LPAREN_LBRACK0_DASH9_BSLASHr_BSLASHn_RBRACK_LBRACE8_RBRACE_DOT_PLUS_RPAREN_RPAREN] = ".*(\?<=.{72})(([^0-9 \\r\\n]+)|([0-9 \\r\\n]{8}.+))",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_line_too_long_rule] = "line_too_long_rule",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOT_STAR_LPAREN_QMARK_LT_EQ_DOT_LBRACE72_RBRACE_RPAREN_LPAREN_LPAREN_LBRACK_CARET0_DASH9_BSLASHr_BSLASHn_RBRACK_PLUS_RPAREN_PIPE_LPAREN_LBRACK0_DASH9_BSLASHr_BSLASHn_RBRACK_LBRACE8_RBRACE_DOT_PLUS_RPAREN_RPAREN] = anon_sym_DOT_STAR_LPAREN_QMARK_LT_EQ_DOT_LBRACE72_RBRACE_RPAREN_LPAREN_LPAREN_LBRACK_CARET0_DASH9_BSLASHr_BSLASHn_RBRACK_PLUS_RPAREN_PIPE_LPAREN_LBRACK0_DASH9_BSLASHr_BSLASHn_RBRACK_LBRACE8_RBRACE_DOT_PLUS_RPAREN_RPAREN,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_line_too_long_rule] = sym_line_too_long_rule,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT_STAR_LPAREN_QMARK_LT_EQ_DOT_LBRACE72_RBRACE_RPAREN_LPAREN_LPAREN_LBRACK_CARET0_DASH9_BSLASHr_BSLASHn_RBRACK_PLUS_RPAREN_PIPE_LPAREN_LBRACK0_DASH9_BSLASHr_BSLASHn_RBRACK_LBRACE8_RBRACE_DOT_PLUS_RPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_line_too_long_rule] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(46);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(28);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == ')') ADVANCE(43);
      END_STATE();
    case 8:
      if (lookahead == ')') ADVANCE(47);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(3);
      END_STATE();
    case 12:
      if (lookahead == '+') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == '+') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(41);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == '0') ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(44);
      END_STATE();
    case 21:
      if (lookahead == '7') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == '8') ADVANCE(45);
      END_STATE();
    case 23:
      if (lookahead == '9') ADVANCE(1);
      END_STATE();
    case 24:
      if (lookahead == '9') ADVANCE(2);
      END_STATE();
    case 25:
      if (lookahead == '<') ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(16);
      END_STATE();
    case 27:
      if (lookahead == '?') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == '[') ADVANCE(36);
      END_STATE();
    case 29:
      if (lookahead == '[') ADVANCE(19);
      END_STATE();
    case 30:
      if (lookahead == '\\') ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == '\\') ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == '\\') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == '\\') ADVANCE(40);
      END_STATE();
    case 34:
      if (lookahead == ']') ADVANCE(12);
      END_STATE();
    case 35:
      if (lookahead == ']') ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == '^') ADVANCE(18);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 41:
      if (lookahead == '{') ADVANCE(21);
      END_STATE();
    case 42:
      if (lookahead == '{') ADVANCE(22);
      END_STATE();
    case 43:
      if (lookahead == '|') ADVANCE(5);
      END_STATE();
    case 44:
      if (lookahead == '}') ADVANCE(9);
      END_STATE();
    case 45:
      if (lookahead == '}') ADVANCE(17);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DOT_STAR_LPAREN_QMARK_LT_EQ_DOT_LBRACE72_RBRACE_RPAREN_LPAREN_LPAREN_LBRACK_CARET0_DASH9_BSLASHr_BSLASHn_RBRACK_PLUS_RPAREN_PIPE_LPAREN_LBRACK0_DASH9_BSLASHr_BSLASHn_RBRACK_LBRACE8_RBRACE_DOT_PLUS_RPAREN_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOT_STAR_LPAREN_QMARK_LT_EQ_DOT_LBRACE72_RBRACE_RPAREN_LPAREN_LPAREN_LBRACK_CARET0_DASH9_BSLASHr_BSLASHn_RBRACK_PLUS_RPAREN_PIPE_LPAREN_LBRACK0_DASH9_BSLASHr_BSLASHn_RBRACK_LBRACE8_RBRACE_DOT_PLUS_RPAREN_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(5),
    [sym__definition] = STATE(2),
    [sym_line_too_long_rule] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DOT_STAR_LPAREN_QMARK_LT_EQ_DOT_LBRACE72_RBRACE_RPAREN_LPAREN_LPAREN_LBRACK_CARET0_DASH9_BSLASHr_BSLASHn_RBRACK_PLUS_RPAREN_PIPE_LPAREN_LBRACK0_DASH9_BSLASHr_BSLASHn_RBRACK_LBRACE8_RBRACE_DOT_PLUS_RPAREN_RPAREN] = ACTIONS(5),
  },
  [2] = {
    [sym__definition] = STATE(3),
    [sym_line_too_long_rule] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_DOT_STAR_LPAREN_QMARK_LT_EQ_DOT_LBRACE72_RBRACE_RPAREN_LPAREN_LPAREN_LBRACK_CARET0_DASH9_BSLASHr_BSLASHn_RBRACK_PLUS_RPAREN_PIPE_LPAREN_LBRACK0_DASH9_BSLASHr_BSLASHn_RBRACK_LBRACE8_RBRACE_DOT_PLUS_RPAREN_RPAREN] = ACTIONS(5),
  },
  [3] = {
    [sym__definition] = STATE(3),
    [sym_line_too_long_rule] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_DOT_STAR_LPAREN_QMARK_LT_EQ_DOT_LBRACE72_RBRACE_RPAREN_LPAREN_LPAREN_LBRACK_CARET0_DASH9_BSLASHr_BSLASHn_RBRACK_PLUS_RPAREN_PIPE_LPAREN_LBRACK0_DASH9_BSLASHr_BSLASHn_RBRACK_LBRACE8_RBRACE_DOT_PLUS_RPAREN_RPAREN] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(14), 2,
      ts_builtin_sym_end,
      anon_sym_DOT_STAR_LPAREN_QMARK_LT_EQ_DOT_LBRACE72_RBRACE_RPAREN_LPAREN_LPAREN_LBRACK_CARET0_DASH9_BSLASHr_BSLASHn_RBRACK_PLUS_RPAREN_PIPE_LPAREN_LBRACK0_DASH9_BSLASHr_BSLASHn_RBRACK_LBRACE8_RBRACE_DOT_PLUS_RPAREN_RPAREN,
  [5] = 1,
    ACTIONS(16), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 5,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_too_long_rule, 1),
  [16] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_zvm_languages(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
