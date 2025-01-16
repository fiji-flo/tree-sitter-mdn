#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 59
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  sym_ident = 1,
  anon_sym_LBRACE_LBRACE = 2,
  anon_sym_RBRACE_RBRACE = 3,
  sym_text = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_COMMA = 7,
  anon_sym_true = 8,
  anon_sym_false = 9,
  sym_int = 10,
  sym_float = 11,
  anon_sym_DQUOTE = 12,
  anon_sym_SQUOTE = 13,
  anon_sym_BQUOTE = 14,
  sym__dq_char = 15,
  sym__sq_char = 16,
  sym__bq_char = 17,
  sym_doc = 18,
  sym_macro_tag = 19,
  sym_args = 20,
  sym__arg = 21,
  sym_boolean = 22,
  sym_none = 23,
  sym_string = 24,
  sym_double_quoted_string = 25,
  sym_single_quoted_string = 26,
  sym_backquoted_quoted_string = 27,
  aux_sym_doc_repeat1 = 28,
  aux_sym_args_repeat1 = 29,
  aux_sym_double_quoted_string_repeat1 = 30,
  aux_sym_single_quoted_string_repeat1 = 31,
  aux_sym_backquoted_quoted_string_repeat1 = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_ident] = "ident",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [sym_text] = "text",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_int] = "int",
  [sym_float] = "float",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE] = "`",
  [sym__dq_char] = "_dq_char",
  [sym__sq_char] = "_sq_char",
  [sym__bq_char] = "_bq_char",
  [sym_doc] = "doc",
  [sym_macro_tag] = "macro_tag",
  [sym_args] = "args",
  [sym__arg] = "_arg",
  [sym_boolean] = "boolean",
  [sym_none] = "none",
  [sym_string] = "string",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_single_quoted_string] = "single_quoted_string",
  [sym_backquoted_quoted_string] = "backquoted_quoted_string",
  [aux_sym_doc_repeat1] = "doc_repeat1",
  [aux_sym_args_repeat1] = "args_repeat1",
  [aux_sym_double_quoted_string_repeat1] = "double_quoted_string_repeat1",
  [aux_sym_single_quoted_string_repeat1] = "single_quoted_string_repeat1",
  [aux_sym_backquoted_quoted_string_repeat1] = "backquoted_quoted_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_ident] = sym_ident,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [sym_text] = sym_text,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_int] = sym_int,
  [sym_float] = sym_float,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [sym__dq_char] = sym__dq_char,
  [sym__sq_char] = sym__sq_char,
  [sym__bq_char] = sym__bq_char,
  [sym_doc] = sym_doc,
  [sym_macro_tag] = sym_macro_tag,
  [sym_args] = sym_args,
  [sym__arg] = sym__arg,
  [sym_boolean] = sym_boolean,
  [sym_none] = sym_none,
  [sym_string] = sym_string,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_single_quoted_string] = sym_single_quoted_string,
  [sym_backquoted_quoted_string] = sym_backquoted_quoted_string,
  [aux_sym_doc_repeat1] = aux_sym_doc_repeat1,
  [aux_sym_args_repeat1] = aux_sym_args_repeat1,
  [aux_sym_double_quoted_string_repeat1] = aux_sym_double_quoted_string_repeat1,
  [aux_sym_single_quoted_string_repeat1] = aux_sym_single_quoted_string_repeat1,
  [aux_sym_backquoted_quoted_string_repeat1] = aux_sym_backquoted_quoted_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__dq_char] = {
    .visible = false,
    .named = true,
  },
  [sym__sq_char] = {
    .visible = false,
    .named = true,
  },
  [sym__bq_char] = {
    .visible = false,
    .named = true,
  },
  [sym_doc] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_args] = {
    .visible = true,
    .named = true,
  },
  [sym__arg] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_none] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_backquoted_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_doc_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_single_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_backquoted_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [4] = sym_none,
  },
  [2] = {
    [5] = sym_none,
  },
  [3] = {
    [6] = sym_none,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(27);
      ADVANCE_MAP(
        '"', 40,
        '\'', 41,
        '(', 33,
        ')', 34,
        ',', 35,
        '-', 3,
        '0', 37,
        '`', 42,
        '{', 8,
        '}', 10,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 3:
      if (lookahead == '0') ADVANCE(37);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 4:
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '`') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        'u', 21,
        '"', 43,
        '/', 43,
        '\\', 43,
        'b', 43,
        'f', 43,
        'n', 43,
        'r', 43,
        't', 43,
      );
      END_STATE();
    case 6:
      ADVANCE_MAP(
        'u', 22,
        '\'', 44,
        '/', 44,
        '\\', 44,
        'b', 44,
        'f', 44,
        'n', 44,
        'r', 44,
        't', 44,
      );
      END_STATE();
    case 7:
      ADVANCE_MAP(
        'u', 23,
        '/', 45,
        '\\', 45,
        '`', 45,
        'b', 45,
        'f', 45,
        'n', 45,
        'r', 45,
        't', 45,
      );
      END_STATE();
    case 8:
      if (lookahead == '{') ADVANCE(28);
      END_STATE();
    case 9:
      if (lookahead == '{') ADVANCE(28);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == '}') ADVANCE(29);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(31);
      END_STATE();
    case 25:
      if (eof) ADVANCE(27);
      ADVANCE_MAP(
        '"', 40,
        '\'', 41,
        '(', 33,
        ')', 34,
        ',', 35,
        '-', 3,
        '0', 37,
        '`', 42,
        '}', 10,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 26:
      if (eof) ADVANCE(27);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '{') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '{') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(11);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__dq_char);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__sq_char);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__bq_char);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'f') ADVANCE(1);
      if (lookahead == 't') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 26},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 26},
  [15] = {.lex_state = 26},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 26},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 26},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_ident] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_doc] = STATE(44),
    [sym_macro_tag] = STATE(14),
    [aux_sym_doc_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(5),
    [sym_text] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(9), 1,
      anon_sym_RPAREN,
    ACTIONS(11), 1,
      anon_sym_COMMA,
    ACTIONS(15), 1,
      sym_int,
    ACTIONS(17), 1,
      sym_float,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    STATE(3), 1,
      sym_none,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(33), 3,
      sym__arg,
      sym_boolean,
      sym_string,
    STATE(34), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_backquoted_quoted_string,
  [39] = 11,
    ACTIONS(11), 1,
      anon_sym_COMMA,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      sym_int,
    ACTIONS(27), 1,
      sym_float,
    STATE(5), 1,
      aux_sym_args_repeat1,
    STATE(11), 1,
      sym_none,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym__arg,
      sym_boolean,
      sym_string,
    STATE(34), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_backquoted_quoted_string,
  [78] = 11,
    ACTIONS(11), 1,
      anon_sym_COMMA,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      sym_int,
    ACTIONS(31), 1,
      sym_float,
    STATE(6), 1,
      aux_sym_args_repeat1,
    STATE(10), 1,
      sym_none,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 3,
      sym__arg,
      sym_boolean,
      sym_string,
    STATE(34), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_backquoted_quoted_string,
  [117] = 11,
    ACTIONS(11), 1,
      anon_sym_COMMA,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      sym_int,
    ACTIONS(31), 1,
      sym_float,
    STATE(7), 1,
      aux_sym_args_repeat1,
    STATE(10), 1,
      sym_none,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 3,
      sym__arg,
      sym_boolean,
      sym_string,
    STATE(34), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_backquoted_quoted_string,
  [156] = 11,
    ACTIONS(11), 1,
      anon_sym_COMMA,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym_int,
    ACTIONS(35), 1,
      sym_float,
    STATE(7), 1,
      aux_sym_args_repeat1,
    STATE(8), 1,
      sym_none,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(30), 3,
      sym__arg,
      sym_boolean,
      sym_string,
    STATE(34), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_backquoted_quoted_string,
  [195] = 10,
    ACTIONS(37), 1,
      anon_sym_COMMA,
    ACTIONS(43), 1,
      sym_int,
    ACTIONS(46), 1,
      sym_float,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 2,
      sym_none,
      aux_sym_args_repeat1,
    STATE(34), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_backquoted_quoted_string,
    STATE(40), 3,
      sym__arg,
      sym_boolean,
      sym_string,
  [232] = 3,
    ACTIONS(58), 1,
      anon_sym_RPAREN,
    ACTIONS(62), 1,
      sym_int,
    ACTIONS(60), 7,
      anon_sym_COMMA,
      anon_sym_true,
      anon_sym_false,
      sym_float,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [248] = 2,
    ACTIONS(66), 1,
      sym_int,
    ACTIONS(64), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_true,
      anon_sym_false,
      sym_float,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [262] = 3,
    ACTIONS(62), 1,
      sym_int,
    ACTIONS(68), 1,
      anon_sym_RPAREN,
    ACTIONS(60), 7,
      anon_sym_COMMA,
      anon_sym_true,
      anon_sym_false,
      sym_float,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [278] = 3,
    ACTIONS(62), 1,
      sym_int,
    ACTIONS(70), 1,
      anon_sym_RPAREN,
    ACTIONS(60), 7,
      anon_sym_COMMA,
      anon_sym_true,
      anon_sym_false,
      sym_float,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [294] = 3,
    ACTIONS(64), 1,
      anon_sym_RPAREN,
    ACTIONS(74), 1,
      sym_int,
    ACTIONS(72), 7,
      anon_sym_COMMA,
      anon_sym_true,
      anon_sym_false,
      sym_float,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [310] = 2,
    ACTIONS(74), 1,
      sym_int,
    ACTIONS(72), 7,
      anon_sym_COMMA,
      anon_sym_true,
      anon_sym_false,
      sym_float,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [323] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 1,
      sym_text,
    STATE(15), 2,
      sym_macro_tag,
      aux_sym_doc_repeat1,
  [337] = 4,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(85), 1,
      sym_text,
    STATE(15), 2,
      sym_macro_tag,
      aux_sym_doc_repeat1,
  [351] = 3,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      sym__dq_char,
    STATE(21), 1,
      aux_sym_double_quoted_string_repeat1,
  [361] = 1,
    ACTIONS(92), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      sym_text,
  [367] = 3,
    ACTIONS(94), 1,
      anon_sym_SQUOTE,
    ACTIONS(96), 1,
      sym__sq_char,
    STATE(20), 1,
      aux_sym_single_quoted_string_repeat1,
  [377] = 3,
    ACTIONS(98), 1,
      anon_sym_BQUOTE,
    ACTIONS(100), 1,
      sym__bq_char,
    STATE(22), 1,
      aux_sym_backquoted_quoted_string_repeat1,
  [387] = 3,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    ACTIONS(104), 1,
      sym__sq_char,
    STATE(26), 1,
      aux_sym_single_quoted_string_repeat1,
  [397] = 3,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      sym__dq_char,
    STATE(23), 1,
      aux_sym_double_quoted_string_repeat1,
  [407] = 3,
    ACTIONS(110), 1,
      anon_sym_BQUOTE,
    ACTIONS(112), 1,
      sym__bq_char,
    STATE(28), 1,
      aux_sym_backquoted_quoted_string_repeat1,
  [417] = 3,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      sym__dq_char,
    STATE(23), 1,
      aux_sym_double_quoted_string_repeat1,
  [427] = 3,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      sym_none,
  [437] = 3,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      sym_none,
  [447] = 3,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    ACTIONS(127), 1,
      sym__sq_char,
    STATE(26), 1,
      aux_sym_single_quoted_string_repeat1,
  [457] = 3,
    ACTIONS(130), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    STATE(51), 1,
      sym_args,
  [467] = 3,
    ACTIONS(134), 1,
      anon_sym_BQUOTE,
    ACTIONS(136), 1,
      sym__bq_char,
    STATE(28), 1,
      aux_sym_backquoted_quoted_string_repeat1,
  [477] = 1,
    ACTIONS(139), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      sym_text,
  [483] = 3,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      sym_none,
  [493] = 1,
    ACTIONS(143), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [498] = 1,
    ACTIONS(145), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [503] = 2,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    ACTIONS(149), 1,
      anon_sym_COMMA,
  [510] = 1,
    ACTIONS(151), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [515] = 1,
    ACTIONS(153), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [520] = 1,
    ACTIONS(155), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [525] = 1,
    ACTIONS(157), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [530] = 1,
    ACTIONS(159), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [535] = 1,
    ACTIONS(161), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [540] = 1,
    ACTIONS(163), 1,
      anon_sym_COMMA,
  [544] = 1,
    ACTIONS(165), 1,
      anon_sym_RBRACE_RBRACE,
  [548] = 1,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
  [552] = 1,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
  [556] = 1,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
  [560] = 1,
    ACTIONS(171), 1,
      anon_sym_RBRACE_RBRACE,
  [564] = 1,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
  [568] = 1,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
  [572] = 1,
    ACTIONS(175), 1,
      anon_sym_RBRACE_RBRACE,
  [576] = 1,
    ACTIONS(177), 1,
      sym_ident,
  [580] = 1,
    ACTIONS(179), 1,
      anon_sym_RBRACE_RBRACE,
  [584] = 1,
    ACTIONS(181), 1,
      anon_sym_RBRACE_RBRACE,
  [588] = 1,
    ACTIONS(183), 1,
      anon_sym_RBRACE_RBRACE,
  [592] = 1,
    ACTIONS(185), 1,
      anon_sym_RBRACE_RBRACE,
  [596] = 1,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
  [600] = 1,
    ACTIONS(189), 1,
      anon_sym_RPAREN,
  [604] = 1,
    ACTIONS(191), 1,
      anon_sym_RBRACE_RBRACE,
  [608] = 1,
    ACTIONS(193), 1,
      anon_sym_RBRACE_RBRACE,
  [612] = 1,
    ACTIONS(195), 1,
      anon_sym_RBRACE_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 117,
  [SMALL_STATE(6)] = 156,
  [SMALL_STATE(7)] = 195,
  [SMALL_STATE(8)] = 232,
  [SMALL_STATE(9)] = 248,
  [SMALL_STATE(10)] = 262,
  [SMALL_STATE(11)] = 278,
  [SMALL_STATE(12)] = 294,
  [SMALL_STATE(13)] = 310,
  [SMALL_STATE(14)] = 323,
  [SMALL_STATE(15)] = 337,
  [SMALL_STATE(16)] = 351,
  [SMALL_STATE(17)] = 361,
  [SMALL_STATE(18)] = 367,
  [SMALL_STATE(19)] = 377,
  [SMALL_STATE(20)] = 387,
  [SMALL_STATE(21)] = 397,
  [SMALL_STATE(22)] = 407,
  [SMALL_STATE(23)] = 417,
  [SMALL_STATE(24)] = 427,
  [SMALL_STATE(25)] = 437,
  [SMALL_STATE(26)] = 447,
  [SMALL_STATE(27)] = 457,
  [SMALL_STATE(28)] = 467,
  [SMALL_STATE(29)] = 477,
  [SMALL_STATE(30)] = 483,
  [SMALL_STATE(31)] = 493,
  [SMALL_STATE(32)] = 498,
  [SMALL_STATE(33)] = 503,
  [SMALL_STATE(34)] = 510,
  [SMALL_STATE(35)] = 515,
  [SMALL_STATE(36)] = 520,
  [SMALL_STATE(37)] = 525,
  [SMALL_STATE(38)] = 530,
  [SMALL_STATE(39)] = 535,
  [SMALL_STATE(40)] = 540,
  [SMALL_STATE(41)] = 544,
  [SMALL_STATE(42)] = 548,
  [SMALL_STATE(43)] = 552,
  [SMALL_STATE(44)] = 556,
  [SMALL_STATE(45)] = 560,
  [SMALL_STATE(46)] = 564,
  [SMALL_STATE(47)] = 568,
  [SMALL_STATE(48)] = 572,
  [SMALL_STATE(49)] = 576,
  [SMALL_STATE(50)] = 580,
  [SMALL_STATE(51)] = 584,
  [SMALL_STATE(52)] = 588,
  [SMALL_STATE(53)] = 592,
  [SMALL_STATE(54)] = 596,
  [SMALL_STATE(55)] = 600,
  [SMALL_STATE(56)] = 604,
  [SMALL_STATE(57)] = 608,
  [SMALL_STATE(58)] = 612,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_args_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_args_repeat1, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_none, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_none, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_args_repeat1, 2, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2, 0, 0),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_tag, 4, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2, 0, 0),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_backquoted_quoted_string_repeat1, 2, 0, 0),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_backquoted_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_tag, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backquoted_quoted_string, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backquoted_quoted_string, 3, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [169] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 5, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 4, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 5, 0, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 6, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 6, 0, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 3, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 7, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 7, 0, 3),
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

TS_PUBLIC const TSLanguage *tree_sitter_mdn(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_ident,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
