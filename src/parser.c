#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SLASH = 1,
  anon_sym_LBRACK = 2,
  anon_sym_BSLASH = 3,
  aux_sym__regexPattern_token1 = 4,
  aux_sym__regexPattern_token2 = 5,
  anon_sym_RBRACK = 6,
  aux_sym__regexPattern_token3 = 7,
  sym__regexFlags = 8,
  anon_sym_STAR = 9,
  anon_sym_PLUS = 10,
  anon_sym_QMARK = 11,
  anon_sym_AT = 12,
  aux_sym_captureLabel_token1 = 13,
  sym__whitespace = 14,
  sym__newlines = 15,
  sym_literal = 16,
  sym_tsq = 17,
  sym__startLine = 18,
  sym__errorSentinel = 19,
  sym_query = 20,
  sym__token = 21,
  sym_regex = 22,
  sym__regexLiteral = 23,
  aux_sym__regexPattern = 24,
  sym_lines = 25,
  sym_captureLabel = 26,
  sym_replaceStart = 27,
  sym_replaceEnd = 28,
  aux_sym_query_repeat1 = 29,
  aux_sym__regexPattern_repeat1 = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SLASH] = "/",
  [anon_sym_LBRACK] = "[",
  [anon_sym_BSLASH] = "\\",
  [aux_sym__regexPattern_token1] = "_regexPattern_token1",
  [aux_sym__regexPattern_token2] = "_regexPattern_token2",
  [anon_sym_RBRACK] = "]",
  [aux_sym__regexPattern_token3] = "_regexPattern_token3",
  [sym__regexFlags] = "_regexFlags",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_QMARK] = "\?",
  [anon_sym_AT] = "@",
  [aux_sym_captureLabel_token1] = "captureLabel_token1",
  [sym__whitespace] = "_whitespace",
  [sym__newlines] = "_newlines",
  [sym_literal] = "literal",
  [sym_tsq] = "tsq",
  [sym__startLine] = "_startLine",
  [sym__errorSentinel] = "_errorSentinel",
  [sym_query] = "query",
  [sym__token] = "_token",
  [sym_regex] = "regex",
  [sym__regexLiteral] = "_regexLiteral",
  [aux_sym__regexPattern] = "_regexPattern",
  [sym_lines] = "lines",
  [sym_captureLabel] = "captureLabel",
  [sym_replaceStart] = "replaceStart",
  [sym_replaceEnd] = "replaceEnd",
  [aux_sym_query_repeat1] = "query_repeat1",
  [aux_sym__regexPattern_repeat1] = "_regexPattern_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym__regexPattern_token1] = aux_sym__regexPattern_token1,
  [aux_sym__regexPattern_token2] = aux_sym__regexPattern_token2,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym__regexPattern_token3] = aux_sym__regexPattern_token3,
  [sym__regexFlags] = sym__regexFlags,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_captureLabel_token1] = aux_sym_captureLabel_token1,
  [sym__whitespace] = sym__whitespace,
  [sym__newlines] = sym__newlines,
  [sym_literal] = sym_literal,
  [sym_tsq] = sym_tsq,
  [sym__startLine] = sym__startLine,
  [sym__errorSentinel] = sym__errorSentinel,
  [sym_query] = sym_query,
  [sym__token] = sym__token,
  [sym_regex] = sym_regex,
  [sym__regexLiteral] = sym__regexLiteral,
  [aux_sym__regexPattern] = aux_sym__regexPattern,
  [sym_lines] = sym_lines,
  [sym_captureLabel] = sym_captureLabel,
  [sym_replaceStart] = sym_replaceStart,
  [sym_replaceEnd] = sym_replaceEnd,
  [aux_sym_query_repeat1] = aux_sym_query_repeat1,
  [aux_sym__regexPattern_repeat1] = aux_sym__regexPattern_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__regexPattern_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__regexPattern_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__regexPattern_token3] = {
    .visible = false,
    .named = false,
  },
  [sym__regexFlags] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
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
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__newlines] = {
    .visible = false,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_tsq] = {
    .visible = true,
    .named = true,
  },
  [sym__startLine] = {
    .visible = false,
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
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym__regexLiteral] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__regexPattern] = {
    .visible = false,
    .named = false,
  },
  [sym_lines] = {
    .visible = true,
    .named = true,
  },
  [sym_captureLabel] = {
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
  [aux_sym_query_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__regexPattern_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '+') ADVANCE(19);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '?') ADVANCE(20);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '[') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == ']') ADVANCE(14);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '[') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == ']') ADVANCE(14);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '+') ADVANCE(19);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '?') ADVANCE(20);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '[') ADVANCE(8);
      if (lookahead == ']') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym__regexPattern_token1);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym__regexPattern_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(24);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym__regexPattern_token2);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym__regexPattern_token2);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(24);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym__regexPattern_token3);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym__regexPattern_token3);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(24);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__regexFlags);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_captureLabel_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__newlines);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(24);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 5, .external_lex_state = 2},
  [2] = {.lex_state = 5, .external_lex_state = 2},
  [3] = {.lex_state = 5, .external_lex_state = 2},
  [4] = {.lex_state = 5, .external_lex_state = 2},
  [5] = {.lex_state = 5, .external_lex_state = 2},
  [6] = {.lex_state = 5, .external_lex_state = 2},
  [7] = {.lex_state = 5, .external_lex_state = 2},
  [8] = {.lex_state = 5, .external_lex_state = 2},
  [9] = {.lex_state = 5, .external_lex_state = 2},
  [10] = {.lex_state = 5, .external_lex_state = 2},
  [11] = {.lex_state = 5, .external_lex_state = 2},
  [12] = {.lex_state = 5, .external_lex_state = 2},
  [13] = {.lex_state = 5, .external_lex_state = 2},
  [14] = {.lex_state = 5, .external_lex_state = 2},
  [15] = {.lex_state = 5, .external_lex_state = 2},
  [16] = {.lex_state = 5, .external_lex_state = 2},
  [17] = {.lex_state = 5, .external_lex_state = 2},
  [18] = {.lex_state = 5, .external_lex_state = 2},
  [19] = {.lex_state = 5, .external_lex_state = 2},
  [20] = {.lex_state = 5, .external_lex_state = 2},
  [21] = {.lex_state = 5, .external_lex_state = 2},
  [22] = {.lex_state = 2, .external_lex_state = 3},
  [23] = {.lex_state = 2, .external_lex_state = 3},
  [24] = {.lex_state = 2, .external_lex_state = 3},
  [25] = {.lex_state = 3, .external_lex_state = 3},
  [26] = {.lex_state = 2, .external_lex_state = 3},
  [27] = {.lex_state = 3, .external_lex_state = 3},
  [28] = {.lex_state = 3, .external_lex_state = 3},
  [29] = {.lex_state = 2, .external_lex_state = 3},
  [30] = {.lex_state = 5, .external_lex_state = 3},
  [31] = {.lex_state = 3, .external_lex_state = 3},
  [32] = {.lex_state = 5, .external_lex_state = 3},
  [33] = {.lex_state = 1, .external_lex_state = 3},
  [34] = {.lex_state = 5, .external_lex_state = 3},
  [35] = {.lex_state = 4, .external_lex_state = 3},
  [36] = {.lex_state = 1, .external_lex_state = 3},
};

enum {
  ts_external_token_literal = 0,
  ts_external_token_tsq = 1,
  ts_external_token__startLine = 2,
  ts_external_token__errorSentinel = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_literal] = sym_literal,
  [ts_external_token_tsq] = sym_tsq,
  [ts_external_token__startLine] = sym__startLine,
  [ts_external_token__errorSentinel] = sym__errorSentinel,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_literal] = true,
    [ts_external_token_tsq] = true,
    [ts_external_token__startLine] = true,
    [ts_external_token__errorSentinel] = true,
  },
  [2] = {
    [ts_external_token_literal] = true,
    [ts_external_token_tsq] = true,
    [ts_external_token__startLine] = true,
  },
  [3] = {
    [ts_external_token__startLine] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym__regexPattern_token1] = ACTIONS(1),
    [aux_sym__regexPattern_token2] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym__regexPattern_token3] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym__newlines] = ACTIONS(3),
    [sym_literal] = ACTIONS(1),
    [sym_tsq] = ACTIONS(1),
    [sym__startLine] = ACTIONS(5),
    [sym__errorSentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_query] = STATE(34),
    [sym__token] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__regexLiteral] = STATE(9),
    [sym_lines] = STATE(2),
    [sym_replaceStart] = STATE(2),
    [sym_replaceEnd] = STATE(2),
    [aux_sym_query_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_SLASH] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(13),
    [sym__newlines] = ACTIONS(5),
    [sym_literal] = ACTIONS(15),
    [sym_tsq] = ACTIONS(15),
    [sym__startLine] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(5), 1,
      sym__newlines,
    ACTIONS(9), 1,
      anon_sym_SLASH,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_RBRACK,
    ACTIONS(17), 1,
      sym__startLine,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym__regexLiteral,
    ACTIONS(21), 2,
      sym_literal,
      sym_tsq,
    STATE(3), 6,
      sym__token,
      sym_regex,
      sym_lines,
      sym_replaceStart,
      sym_replaceEnd,
      aux_sym_query_repeat1,
  [34] = 9,
    ACTIONS(5), 1,
      sym__newlines,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_SLASH,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_RBRACK,
    ACTIONS(37), 1,
      sym__startLine,
    STATE(9), 1,
      sym__regexLiteral,
    ACTIONS(34), 2,
      sym_literal,
      sym_tsq,
    STATE(3), 6,
      sym__token,
      sym_regex,
      sym_lines,
      sym_replaceStart,
      sym_replaceEnd,
      aux_sym_query_repeat1,
  [68] = 6,
    ACTIONS(5), 1,
      sym__newlines,
    ACTIONS(42), 1,
      anon_sym_QMARK,
    ACTIONS(44), 1,
      anon_sym_AT,
    ACTIONS(46), 1,
      sym__whitespace,
    STATE(21), 1,
      sym_captureLabel,
    ACTIONS(40), 7,
      sym_literal,
      sym_tsq,
      sym__startLine,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [93] = 6,
    ACTIONS(5), 1,
      sym__newlines,
    ACTIONS(44), 1,
      anon_sym_AT,
    ACTIONS(50), 1,
      anon_sym_QMARK,
    ACTIONS(52), 1,
      sym__whitespace,
    STATE(17), 1,
      sym_captureLabel,
    ACTIONS(48), 7,
      sym_literal,
      sym_tsq,
      sym__startLine,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [118] = 5,
    ACTIONS(5), 1,
      sym__newlines,
    ACTIONS(44), 1,
      anon_sym_AT,
    ACTIONS(56), 1,
      sym__whitespace,
    STATE(14), 1,
      sym_captureLabel,
    ACTIONS(54), 7,
      sym_literal,
      sym_tsq,
      sym__startLine,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [140] = 5,
    ACTIONS(5), 1,
      sym__newlines,
    ACTIONS(44), 1,
      anon_sym_AT,
    ACTIONS(46), 1,
      sym__whitespace,
    STATE(21), 1,
      sym_captureLabel,
    ACTIONS(40), 7,
      sym_literal,
      sym_tsq,
      sym__startLine,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [162] = 4,
    ACTIONS(5), 1,
      sym__newlines,
    ACTIONS(44), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym_captureLabel,
    ACTIONS(40), 7,
      sym_literal,
      sym_tsq,
      sym__startLine,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [181] = 4,
    ACTIONS(5), 1,
      sym__newlines,
    ACTIONS(44), 1,
      anon_sym_AT,
    STATE(15), 1,
      sym_captureLabel,
    ACTIONS(58), 7,
      sym_literal,
      sym_tsq,
      sym__startLine,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [200] = 4,
    ACTIONS(5), 1,
      sym__newlines,
    ACTIONS(44), 1,
      anon_sym_AT,
    STATE(14), 1,
      sym_captureLabel,
    ACTIONS(54), 7,
      sym_literal,
      sym_tsq,
      sym__startLine,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [219] = 3,
    ACTIONS(5), 1,
      sym__newlines,
    ACTIONS(62), 1,
      sym__regexFlags,
    ACTIONS(60), 8,
      sym_literal,
      sym_tsq,
      sym__startLine,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT,
  [236] = 4,
    ACTIONS(5), 1,
      sym__newlines,
    ACTIONS(44), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym_captureLabel,
    ACTIONS(64), 7,
      sym_literal,
      sym_tsq,
      sym__startLine,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [255] = 2,
    ACTIONS(5), 1,
      sym__newlines,
    ACTIONS(66), 8,
      sym_literal,
      sym_tsq,
      sym__startLine,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT,
  [269] = 2,
    ACTIONS(5), 1,
      sym__newlines,
    ACTIONS(64), 7,
      sym_literal,
      sym_tsq,
      sym__startLine,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [282] = 2,
    ACTIONS(5), 1,
      sym__newlines,
    ACTIONS(68), 7,
      sym_literal,
      sym_tsq,
      sym__startLine,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [295] = 2,
    ACTIONS(5), 1,
      sym__newlines,
    ACTIONS(70), 7,
      sym_literal,
      sym_tsq,
      sym__startLine,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [308] = 2,
    ACTIONS(5), 1,
      sym__newlines,
    ACTIONS(40), 7,
      sym_literal,
      sym_tsq,
      sym__startLine,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [321] = 2,
    ACTIONS(5), 1,
      sym__newlines,
    ACTIONS(72), 7,
      sym_literal,
      sym_tsq,
      sym__startLine,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [334] = 2,
    ACTIONS(5), 1,
      sym__newlines,
    ACTIONS(74), 7,
      sym_literal,
      sym_tsq,
      sym__startLine,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [347] = 2,
    ACTIONS(5), 1,
      sym__newlines,
    ACTIONS(76), 7,
      sym_literal,
      sym_tsq,
      sym__startLine,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [360] = 2,
    ACTIONS(5), 1,
      sym__newlines,
    ACTIONS(54), 7,
      sym_literal,
      sym_tsq,
      sym__startLine,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [373] = 7,
    ACTIONS(3), 1,
      sym__newlines,
    ACTIONS(5), 1,
      sym__startLine,
    ACTIONS(78), 1,
      anon_sym_SLASH,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    ACTIONS(82), 1,
      anon_sym_BSLASH,
    ACTIONS(84), 1,
      aux_sym__regexPattern_token3,
    STATE(23), 1,
      aux_sym__regexPattern,
  [395] = 7,
    ACTIONS(3), 1,
      sym__newlines,
    ACTIONS(5), 1,
      sym__startLine,
    ACTIONS(86), 1,
      anon_sym_SLASH,
    ACTIONS(88), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      anon_sym_BSLASH,
    ACTIONS(94), 1,
      aux_sym__regexPattern_token3,
    STATE(23), 1,
      aux_sym__regexPattern,
  [417] = 4,
    ACTIONS(3), 1,
      sym__newlines,
    ACTIONS(5), 1,
      sym__startLine,
    ACTIONS(99), 1,
      aux_sym__regexPattern_token3,
    ACTIONS(97), 3,
      anon_sym_SLASH,
      anon_sym_LBRACK,
      anon_sym_BSLASH,
  [432] = 6,
    ACTIONS(3), 1,
      sym__newlines,
    ACTIONS(5), 1,
      sym__startLine,
    ACTIONS(101), 1,
      anon_sym_BSLASH,
    ACTIONS(104), 1,
      aux_sym__regexPattern_token2,
    ACTIONS(107), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      aux_sym__regexPattern_repeat1,
  [451] = 4,
    ACTIONS(3), 1,
      sym__newlines,
    ACTIONS(5), 1,
      sym__startLine,
    ACTIONS(109), 1,
      aux_sym__regexPattern_token3,
    ACTIONS(86), 3,
      anon_sym_SLASH,
      anon_sym_LBRACK,
      anon_sym_BSLASH,
  [466] = 6,
    ACTIONS(3), 1,
      sym__newlines,
    ACTIONS(5), 1,
      sym__startLine,
    ACTIONS(111), 1,
      anon_sym_BSLASH,
    ACTIONS(113), 1,
      aux_sym__regexPattern_token2,
    ACTIONS(115), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      aux_sym__regexPattern_repeat1,
  [485] = 6,
    ACTIONS(3), 1,
      sym__newlines,
    ACTIONS(5), 1,
      sym__startLine,
    ACTIONS(111), 1,
      anon_sym_BSLASH,
    ACTIONS(117), 1,
      aux_sym__regexPattern_token2,
    ACTIONS(119), 1,
      anon_sym_RBRACK,
    STATE(27), 1,
      aux_sym__regexPattern_repeat1,
  [504] = 6,
    ACTIONS(3), 1,
      sym__newlines,
    ACTIONS(5), 1,
      sym__startLine,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    ACTIONS(82), 1,
      anon_sym_BSLASH,
    ACTIONS(121), 1,
      aux_sym__regexPattern_token3,
    STATE(22), 1,
      aux_sym__regexPattern,
  [523] = 3,
    ACTIONS(125), 1,
      sym__whitespace,
    ACTIONS(5), 2,
      sym__startLine,
      sym__newlines,
    ACTIONS(123), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [535] = 4,
    ACTIONS(3), 1,
      sym__newlines,
    ACTIONS(5), 1,
      sym__startLine,
    ACTIONS(127), 1,
      aux_sym__regexPattern_token2,
    ACTIONS(107), 2,
      anon_sym_BSLASH,
      anon_sym_RBRACK,
  [549] = 2,
    ACTIONS(5), 2,
      sym__startLine,
      sym__newlines,
    ACTIONS(129), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [558] = 3,
    ACTIONS(3), 1,
      sym__newlines,
    ACTIONS(5), 1,
      sym__startLine,
    ACTIONS(131), 1,
      aux_sym__regexPattern_token1,
  [568] = 2,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym__startLine,
      sym__newlines,
  [576] = 2,
    ACTIONS(135), 1,
      aux_sym_captureLabel_token1,
    ACTIONS(5), 2,
      sym__startLine,
      sym__newlines,
  [584] = 3,
    ACTIONS(3), 1,
      sym__newlines,
    ACTIONS(5), 1,
      sym__startLine,
    ACTIONS(137), 1,
      aux_sym__regexPattern_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 93,
  [SMALL_STATE(6)] = 118,
  [SMALL_STATE(7)] = 140,
  [SMALL_STATE(8)] = 162,
  [SMALL_STATE(9)] = 181,
  [SMALL_STATE(10)] = 200,
  [SMALL_STATE(11)] = 219,
  [SMALL_STATE(12)] = 236,
  [SMALL_STATE(13)] = 255,
  [SMALL_STATE(14)] = 269,
  [SMALL_STATE(15)] = 282,
  [SMALL_STATE(16)] = 295,
  [SMALL_STATE(17)] = 308,
  [SMALL_STATE(18)] = 321,
  [SMALL_STATE(19)] = 334,
  [SMALL_STATE(20)] = 347,
  [SMALL_STATE(21)] = 360,
  [SMALL_STATE(22)] = 373,
  [SMALL_STATE(23)] = 395,
  [SMALL_STATE(24)] = 417,
  [SMALL_STATE(25)] = 432,
  [SMALL_STATE(26)] = 451,
  [SMALL_STATE(27)] = 466,
  [SMALL_STATE(28)] = 485,
  [SMALL_STATE(29)] = 504,
  [SMALL_STATE(30)] = 523,
  [SMALL_STATE(31)] = 535,
  [SMALL_STATE(32)] = 549,
  [SMALL_STATE(33)] = 558,
  [SMALL_STATE(34)] = 568,
  [SMALL_STATE(35)] = 576,
  [SMALL_STATE(36)] = 584,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(29),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(18),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(16),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(3),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(30),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lines, 3),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lines, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lines, 4),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__regexLiteral, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lines, 5),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__regexLiteral, 4),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replaceEnd, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replaceStart, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lines, 6),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captureLabel, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__regexPattern, 2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__regexPattern, 2), SHIFT_REPEAT(28),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__regexPattern, 2), SHIFT_REPEAT(36),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__regexPattern, 2), SHIFT_REPEAT(23),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__regexPattern, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__regexPattern, 3),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__regexPattern_repeat1, 2), SHIFT_REPEAT(33),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__regexPattern_repeat1, 2), SHIFT_REPEAT(25),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__regexPattern_repeat1, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__regexPattern, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__regexPattern_repeat1, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [133] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
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
