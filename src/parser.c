#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 10
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_literal_token1 = 1,
  anon_sym_BSLASH = 2,
  aux_sym__escape_token1 = 3,
  anon_sym_AT = 4,
  aux_sym_captureLabel_token1 = 5,
  sym_replaceStart = 6,
  sym_replaceEnd = 7,
  sym_lineQuantifier = 8,
  sym_regex = 9,
  sym_tsq = 10,
  sym__errorSentinel = 11,
  sym_query = 12,
  sym__token = 13,
  sym_literal = 14,
  sym__escape = 15,
  sym_captureLabel = 16,
  aux_sym_query_repeat1 = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_literal_token1] = "literal_token1",
  [anon_sym_BSLASH] = "\\",
  [aux_sym__escape_token1] = "_escape_token1",
  [anon_sym_AT] = "@",
  [aux_sym_captureLabel_token1] = "captureLabel_token1",
  [sym_replaceStart] = "replaceStart",
  [sym_replaceEnd] = "replaceEnd",
  [sym_lineQuantifier] = "lineQuantifier",
  [sym_regex] = "regex",
  [sym_tsq] = "tsq",
  [sym__errorSentinel] = "_errorSentinel",
  [sym_query] = "query",
  [sym__token] = "_token",
  [sym_literal] = "literal",
  [sym__escape] = "_escape",
  [sym_captureLabel] = "captureLabel",
  [aux_sym_query_repeat1] = "query_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_literal_token1] = aux_sym_literal_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym__escape_token1] = aux_sym__escape_token1,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_captureLabel_token1] = aux_sym_captureLabel_token1,
  [sym_replaceStart] = sym_replaceStart,
  [sym_replaceEnd] = sym_replaceEnd,
  [sym_lineQuantifier] = sym_lineQuantifier,
  [sym_regex] = sym_regex,
  [sym_tsq] = sym_tsq,
  [sym__errorSentinel] = sym__errorSentinel,
  [sym_query] = sym_query,
  [sym__token] = sym__token,
  [sym_literal] = sym_literal,
  [sym__escape] = sym__escape,
  [sym_captureLabel] = sym_captureLabel,
  [aux_sym_query_repeat1] = aux_sym_query_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__escape_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_captureLabel_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_replaceStart] = {
    .visible = true,
    .named = true,
  },
  [sym_replaceEnd] = {
    .visible = true,
    .named = true,
  },
  [sym_lineQuantifier] = {
    .visible = true,
    .named = true,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym_tsq] = {
    .visible = true,
    .named = true,
  },
  [sym__errorSentinel] = {
    .visible = false,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym__token] = {
    .visible = false,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__escape] = {
    .visible = false,
    .named = true,
  },
  [sym_captureLabel] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_query_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '@') ADVANCE(9);
      if (lookahead == '[') ADVANCE(11);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == ']') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 2:
      if (eof) ADVANCE(3);
      if (lookahead == '@') ADVANCE(9);
      if (lookahead == '[') ADVANCE(11);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == ']') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != '/') ADVANCE(5);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != '/' &&
          lookahead != '@' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != '/' &&
          lookahead != '@' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym__escape_token1);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym__escape_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_captureLabel_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_replaceStart);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_replaceEnd);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 2, .external_lex_state = 2},
  [2] = {.lex_state = 2, .external_lex_state = 2},
  [3] = {.lex_state = 2, .external_lex_state = 2},
  [4] = {.lex_state = 2, .external_lex_state = 2},
  [5] = {.lex_state = 2, .external_lex_state = 2},
  [6] = {.lex_state = 2, .external_lex_state = 2},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
};

enum {
  ts_external_token_lineQuantifier = 0,
  ts_external_token_regex = 1,
  ts_external_token_tsq = 2,
  ts_external_token__errorSentinel = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_lineQuantifier] = sym_lineQuantifier,
  [ts_external_token_regex] = sym_regex,
  [ts_external_token_tsq] = sym_tsq,
  [ts_external_token__errorSentinel] = sym__errorSentinel,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_lineQuantifier] = true,
    [ts_external_token_regex] = true,
    [ts_external_token_tsq] = true,
    [ts_external_token__errorSentinel] = true,
  },
  [2] = {
    [ts_external_token_lineQuantifier] = true,
    [ts_external_token_regex] = true,
    [ts_external_token_tsq] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_captureLabel_token1] = ACTIONS(1),
    [sym_replaceStart] = ACTIONS(1),
    [sym_replaceEnd] = ACTIONS(1),
    [sym_lineQuantifier] = ACTIONS(1),
    [sym_regex] = ACTIONS(1),
    [sym_tsq] = ACTIONS(1),
    [sym__errorSentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_query] = STATE(9),
    [sym__token] = STATE(2),
    [sym_literal] = STATE(2),
    [sym__escape] = STATE(4),
    [sym_captureLabel] = STATE(2),
    [aux_sym_query_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_literal_token1] = ACTIONS(5),
    [anon_sym_BSLASH] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(9),
    [sym_replaceStart] = ACTIONS(11),
    [sym_replaceEnd] = ACTIONS(11),
    [sym_lineQuantifier] = ACTIONS(13),
    [sym_regex] = ACTIONS(13),
    [sym_tsq] = ACTIONS(13),
  },
  [2] = {
    [sym__token] = STATE(3),
    [sym_literal] = STATE(3),
    [sym__escape] = STATE(4),
    [sym_captureLabel] = STATE(3),
    [aux_sym_query_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [aux_sym_literal_token1] = ACTIONS(5),
    [anon_sym_BSLASH] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(9),
    [sym_replaceStart] = ACTIONS(17),
    [sym_replaceEnd] = ACTIONS(17),
    [sym_lineQuantifier] = ACTIONS(19),
    [sym_regex] = ACTIONS(19),
    [sym_tsq] = ACTIONS(19),
  },
  [3] = {
    [sym__token] = STATE(3),
    [sym_literal] = STATE(3),
    [sym__escape] = STATE(4),
    [sym_captureLabel] = STATE(3),
    [aux_sym_query_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(21),
    [aux_sym_literal_token1] = ACTIONS(23),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_AT] = ACTIONS(29),
    [sym_replaceStart] = ACTIONS(32),
    [sym_replaceEnd] = ACTIONS(32),
    [sym_lineQuantifier] = ACTIONS(35),
    [sym_regex] = ACTIONS(35),
    [sym_tsq] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(40), 4,
      anon_sym_BSLASH,
      anon_sym_AT,
      sym_replaceStart,
      sym_replaceEnd,
    ACTIONS(38), 5,
      sym_lineQuantifier,
      sym_regex,
      sym_tsq,
      ts_builtin_sym_end,
      aux_sym_literal_token1,
  [14] = 2,
    ACTIONS(44), 4,
      anon_sym_BSLASH,
      anon_sym_AT,
      sym_replaceStart,
      sym_replaceEnd,
    ACTIONS(42), 5,
      sym_lineQuantifier,
      sym_regex,
      sym_tsq,
      ts_builtin_sym_end,
      aux_sym_literal_token1,
  [28] = 2,
    ACTIONS(48), 4,
      anon_sym_BSLASH,
      anon_sym_AT,
      sym_replaceStart,
      sym_replaceEnd,
    ACTIONS(46), 5,
      sym_lineQuantifier,
      sym_regex,
      sym_tsq,
      ts_builtin_sym_end,
      aux_sym_literal_token1,
  [42] = 1,
    ACTIONS(50), 1,
      aux_sym__escape_token1,
  [46] = 1,
    ACTIONS(52), 1,
      aux_sym_captureLabel_token1,
  [50] = 1,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 14,
  [SMALL_STATE(6)] = 28,
  [SMALL_STATE(7)] = 42,
  [SMALL_STATE(8)] = 46,
  [SMALL_STATE(9)] = 50,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(4),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(7),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(8),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(3),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(3),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape, 2),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captureLabel, 2),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captureLabel, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [54] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_codepatterns_external_scanner_create(void);
void tree_sitter_codepatterns_external_scanner_destroy(void *);
bool tree_sitter_codepatterns_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_codepatterns_external_scanner_serialize(void *, char *);
void tree_sitter_codepatterns_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_codepatterns(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_codepatterns_external_scanner_create,
      tree_sitter_codepatterns_external_scanner_destroy,
      tree_sitter_codepatterns_external_scanner_scan,
      tree_sitter_codepatterns_external_scanner_serialize,
      tree_sitter_codepatterns_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
