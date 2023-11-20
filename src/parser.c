#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 5
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 10
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 6
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  sym_literal = 1,
  sym_regex = 2,
  sym_tsq = 3,
  sym_replaceStart = 4,
  sym_replaceEnd = 5,
  sym_errorSentinel = 6,
  sym_query = 7,
  sym__token = 8,
  aux_sym_query_repeat1 = 9,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_literal] = "literal",
  [sym_regex] = "regex",
  [sym_tsq] = "tsq",
  [sym_replaceStart] = "replaceStart",
  [sym_replaceEnd] = "replaceEnd",
  [sym_errorSentinel] = "errorSentinel",
  [sym_query] = "query",
  [sym__token] = "_token",
  [aux_sym_query_repeat1] = "query_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_literal] = sym_literal,
  [sym_regex] = sym_regex,
  [sym_tsq] = sym_tsq,
  [sym_replaceStart] = sym_replaceStart,
  [sym_replaceEnd] = sym_replaceEnd,
  [sym_errorSentinel] = sym_errorSentinel,
  [sym_query] = sym_query,
  [sym__token] = sym__token,
  [aux_sym_query_repeat1] = aux_sym_query_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_literal] = {
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
  [sym_replaceStart] = {
    .visible = true,
    .named = true,
  },
  [sym_replaceEnd] = {
    .visible = true,
    .named = true,
  },
  [sym_errorSentinel] = {
    .visible = true,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      if (eof) ADVANCE(1);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 2},
  [3] = {.lex_state = 0, .external_lex_state = 2},
  [4] = {.lex_state = 0},
};

enum {
  ts_external_token_literal = 0,
  ts_external_token_regex = 1,
  ts_external_token_tsq = 2,
  ts_external_token_replaceStart = 3,
  ts_external_token_replaceEnd = 4,
  ts_external_token_errorSentinel = 5,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_literal] = sym_literal,
  [ts_external_token_regex] = sym_regex,
  [ts_external_token_tsq] = sym_tsq,
  [ts_external_token_replaceStart] = sym_replaceStart,
  [ts_external_token_replaceEnd] = sym_replaceEnd,
  [ts_external_token_errorSentinel] = sym_errorSentinel,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_literal] = true,
    [ts_external_token_regex] = true,
    [ts_external_token_tsq] = true,
    [ts_external_token_replaceStart] = true,
    [ts_external_token_replaceEnd] = true,
    [ts_external_token_errorSentinel] = true,
  },
  [2] = {
    [ts_external_token_literal] = true,
    [ts_external_token_regex] = true,
    [ts_external_token_tsq] = true,
    [ts_external_token_replaceStart] = true,
    [ts_external_token_replaceEnd] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_literal] = ACTIONS(1),
    [sym_regex] = ACTIONS(1),
    [sym_tsq] = ACTIONS(1),
    [sym_replaceStart] = ACTIONS(1),
    [sym_replaceEnd] = ACTIONS(1),
    [sym_errorSentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_query] = STATE(4),
    [sym__token] = STATE(2),
    [aux_sym_query_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_literal] = ACTIONS(5),
    [sym_regex] = ACTIONS(5),
    [sym_tsq] = ACTIONS(5),
    [sym_replaceStart] = ACTIONS(5),
    [sym_replaceEnd] = ACTIONS(5),
  },
  [2] = {
    [sym__token] = STATE(3),
    [aux_sym_query_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_literal] = ACTIONS(9),
    [sym_regex] = ACTIONS(9),
    [sym_tsq] = ACTIONS(9),
    [sym_replaceStart] = ACTIONS(9),
    [sym_replaceEnd] = ACTIONS(9),
  },
  [3] = {
    [sym__token] = STATE(3),
    [aux_sym_query_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_literal] = ACTIONS(13),
    [sym_regex] = ACTIONS(13),
    [sym_tsq] = ACTIONS(13),
    [sym_replaceStart] = ACTIONS(13),
    [sym_replaceEnd] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(16), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(3),
  [16] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
