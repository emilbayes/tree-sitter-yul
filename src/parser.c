#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 118
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  anon_sym_object = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_code = 4,
  anon_sym_data = 5,
  anon_sym_function = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_DASH_GT = 9,
  anon_sym_let = 10,
  anon_sym_COLON_EQ = 11,
  anon_sym_if = 12,
  anon_sym_switch = 13,
  anon_sym_default = 14,
  anon_sym_for = 15,
  anon_sym_break = 16,
  anon_sym_continue = 17,
  sym_leave = 18,
  anon_sym_COMMA = 19,
  sym_identifier = 20,
  anon_sym_COLON = 21,
  sym_hexLiteral = 22,
  sym_stringLiteral = 23,
  sym_trueLiteral = 24,
  sym_falseLiteral = 25,
  sym_hexNumber = 26,
  sym_decimalNumber = 27,
  sym_comment = 28,
  sym_source_file = 29,
  sym_object = 30,
  sym_code = 31,
  sym_data = 32,
  sym_block = 33,
  sym_statement = 34,
  sym_functionDefinition = 35,
  sym_variableDeclaration = 36,
  sym_assignment = 37,
  sym_expression = 38,
  sym_if = 39,
  sym_switch = 40,
  sym_case = 41,
  sym_default = 42,
  sym_forLoop = 43,
  sym_breakContinue = 44,
  sym_functionCall = 45,
  sym_identifierList = 46,
  sym_typeName = 47,
  sym_typedIdentifierList = 48,
  sym_literal = 49,
  sym_numberLiteral = 50,
  aux_sym_source_file_repeat1 = 51,
  aux_sym_object_repeat1 = 52,
  aux_sym_block_repeat1 = 53,
  aux_sym_switch_repeat1 = 54,
  aux_sym_functionCall_repeat1 = 55,
  aux_sym_identifierList_repeat1 = 56,
  aux_sym_typedIdentifierList_repeat1 = 57,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_object] = "object",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_code] = "code",
  [anon_sym_data] = "data",
  [anon_sym_function] = "function",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_let] = "let",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_if] = "if",
  [anon_sym_switch] = "switch",
  [anon_sym_default] = "default",
  [anon_sym_for] = "for",
  [anon_sym_break] = "break",
  [anon_sym_continue] = "continue",
  [sym_leave] = "leave",
  [anon_sym_COMMA] = ",",
  [sym_identifier] = "identifier",
  [anon_sym_COLON] = ":",
  [sym_hexLiteral] = "hexLiteral",
  [sym_stringLiteral] = "stringLiteral",
  [sym_trueLiteral] = "trueLiteral",
  [sym_falseLiteral] = "falseLiteral",
  [sym_hexNumber] = "hexNumber",
  [sym_decimalNumber] = "decimalNumber",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_object] = "object",
  [sym_code] = "code",
  [sym_data] = "data",
  [sym_block] = "block",
  [sym_statement] = "statement",
  [sym_functionDefinition] = "functionDefinition",
  [sym_variableDeclaration] = "variableDeclaration",
  [sym_assignment] = "assignment",
  [sym_expression] = "expression",
  [sym_if] = "if",
  [sym_switch] = "switch",
  [sym_case] = "case",
  [sym_default] = "default",
  [sym_forLoop] = "forLoop",
  [sym_breakContinue] = "breakContinue",
  [sym_functionCall] = "functionCall",
  [sym_identifierList] = "identifierList",
  [sym_typeName] = "typeName",
  [sym_typedIdentifierList] = "typedIdentifierList",
  [sym_literal] = "literal",
  [sym_numberLiteral] = "numberLiteral",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_switch_repeat1] = "switch_repeat1",
  [aux_sym_functionCall_repeat1] = "functionCall_repeat1",
  [aux_sym_identifierList_repeat1] = "identifierList_repeat1",
  [aux_sym_typedIdentifierList_repeat1] = "typedIdentifierList_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_object] = anon_sym_object,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_code] = anon_sym_code,
  [anon_sym_data] = anon_sym_data,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_switch] = anon_sym_switch,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_continue] = anon_sym_continue,
  [sym_leave] = sym_leave,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_identifier] = sym_identifier,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_hexLiteral] = sym_hexLiteral,
  [sym_stringLiteral] = sym_stringLiteral,
  [sym_trueLiteral] = sym_trueLiteral,
  [sym_falseLiteral] = sym_falseLiteral,
  [sym_hexNumber] = sym_hexNumber,
  [sym_decimalNumber] = sym_decimalNumber,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_object] = sym_object,
  [sym_code] = sym_code,
  [sym_data] = sym_data,
  [sym_block] = sym_block,
  [sym_statement] = sym_statement,
  [sym_functionDefinition] = sym_functionDefinition,
  [sym_variableDeclaration] = sym_variableDeclaration,
  [sym_assignment] = sym_assignment,
  [sym_expression] = sym_expression,
  [sym_if] = sym_if,
  [sym_switch] = sym_switch,
  [sym_case] = sym_case,
  [sym_default] = sym_default,
  [sym_forLoop] = sym_forLoop,
  [sym_breakContinue] = sym_breakContinue,
  [sym_functionCall] = sym_functionCall,
  [sym_identifierList] = sym_identifierList,
  [sym_typeName] = sym_typeName,
  [sym_typedIdentifierList] = sym_typedIdentifierList,
  [sym_literal] = sym_literal,
  [sym_numberLiteral] = sym_numberLiteral,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_switch_repeat1] = aux_sym_switch_repeat1,
  [aux_sym_functionCall_repeat1] = aux_sym_functionCall_repeat1,
  [aux_sym_identifierList_repeat1] = aux_sym_identifierList_repeat1,
  [aux_sym_typedIdentifierList_repeat1] = aux_sym_typedIdentifierList_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_object] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_code] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
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
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_switch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [sym_leave] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_hexLiteral] = {
    .visible = true,
    .named = true,
  },
  [sym_stringLiteral] = {
    .visible = true,
    .named = true,
  },
  [sym_trueLiteral] = {
    .visible = true,
    .named = true,
  },
  [sym_falseLiteral] = {
    .visible = true,
    .named = true,
  },
  [sym_hexNumber] = {
    .visible = true,
    .named = true,
  },
  [sym_decimalNumber] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_data] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_functionDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_variableDeclaration] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_switch] = {
    .visible = true,
    .named = true,
  },
  [sym_case] = {
    .visible = true,
    .named = true,
  },
  [sym_default] = {
    .visible = true,
    .named = true,
  },
  [sym_forLoop] = {
    .visible = true,
    .named = true,
  },
  [sym_breakContinue] = {
    .visible = true,
    .named = true,
  },
  [sym_functionCall] = {
    .visible = true,
    .named = true,
  },
  [sym_identifierList] = {
    .visible = true,
    .named = true,
  },
  [sym_typeName] = {
    .visible = true,
    .named = true,
  },
  [sym_typedIdentifierList] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_numberLiteral] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_switch_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_functionCall_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifierList_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_typedIdentifierList_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_body = 1,
  field_key = 2,
  field_left = 3,
  field_name = 4,
  field_parameters = 5,
  field_returns = 6,
  field_right = 7,
  field_value = 8,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_key] = "key",
  [field_left] = "left",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_returns] = "returns",
  [field_right] = "right",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[16] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 4},
  [3] = {.index = 5, .length = 5},
  [4] = {.index = 10, .length = 1},
  [5] = {.index = 11, .length = 2},
  [6] = {.index = 13, .length = 2},
  [7] = {.index = 15, .length = 1},
  [8] = {.index = 16, .length = 2},
  [9] = {.index = 18, .length = 1},
  [10] = {.index = 19, .length = 2},
  [11] = {.index = 21, .length = 3},
  [12] = {.index = 24, .length = 2},
  [13] = {.index = 26, .length = 1},
  [14] = {.index = 27, .length = 2},
  [15] = {.index = 29, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 1},
  [1] =
    {field_body, 2},
    {field_body, 3},
    {field_body, 4},
    {field_name, 1},
  [5] =
    {field_body, 2},
    {field_body, 3},
    {field_body, 4},
    {field_body, 5},
    {field_name, 1},
  [10] =
    {field_left, 1},
  [11] =
    {field_key, 1},
    {field_value, 2},
  [13] =
    {field_body, 2},
    {field_value, 1},
  [15] =
    {field_name, 0},
  [16] =
    {field_left, 0},
    {field_right, 2},
  [18] =
    {field_name, 1},
  [19] =
    {field_left, 1},
    {field_right, 3},
  [21] =
    {field_body, 2},
    {field_body, 3},
    {field_value, 1},
  [24] =
    {field_name, 1},
    {field_parameters, 3},
  [26] =
    {field_value, 1},
  [27] =
    {field_name, 1},
    {field_returns, 5},
  [29] =
    {field_name, 1},
    {field_parameters, 3},
    {field_returns, 6},
};

static TSSymbol ts_alias_sequences[16][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(43);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(133);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == 'b') ADVANCE(109);
      if (lookahead == 'c') ADVANCE(104);
      if (lookahead == 'd') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == 'h') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(75);
      if (lookahead == 's') ADVANCE(121);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '}') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(133);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == 'b') ADVANCE(109);
      if (lookahead == 'c') ADVANCE(106);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == 'h') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead == 's') ADVANCE(121);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '}') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(133);
      if (lookahead == 'f') ADVANCE(70);
      if (lookahead == 'h') ADVANCE(80);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(133);
      if (lookahead == 'b') ADVANCE(109);
      if (lookahead == 'c') ADVANCE(106);
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == 'h') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead == 's') ADVANCE(121);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '}') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 8:
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(8)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(136);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(55);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(16);
      END_STATE();
    case 26:
      if (lookahead == 'j') ADVANCE(22);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 37:
      if (lookahead == 'x') ADVANCE(5);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 41:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 42:
      if (eof) ADVANCE(43);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(133);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'h') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(17);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '}') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(42)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_object);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_code);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_code);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_switch);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_break);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_continue);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_leave);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(100);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(120);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(96);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(74);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(59);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'j') ADVANCE(89);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(63);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(79);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(101);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(102);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(118);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(99);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(84);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(87);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(86);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(95);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(67);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_hexLiteral);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_stringLiteral);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_trueLiteral);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_trueLiteral);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_falseLiteral);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_falseLiteral);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_hexNumber);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_decimalNumber);
      if (lookahead == 'x') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_decimalNumber);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 42},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 42},
  [58] = {.lex_state = 42},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 42},
  [62] = {.lex_state = 42},
  [63] = {.lex_state = 42},
  [64] = {.lex_state = 42},
  [65] = {.lex_state = 42},
  [66] = {.lex_state = 42},
  [67] = {.lex_state = 42},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 42},
  [70] = {.lex_state = 42},
  [71] = {.lex_state = 42},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 42},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 42},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 8},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 42},
  [94] = {.lex_state = 42},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 42},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 42},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 42},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 42},
  [107] = {.lex_state = 42},
  [108] = {.lex_state = 42},
  [109] = {.lex_state = 42},
  [110] = {.lex_state = 42},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 8},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_object] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_code] = ACTIONS(1),
    [anon_sym_data] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [sym_leave] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_hexLiteral] = ACTIONS(1),
    [sym_stringLiteral] = ACTIONS(1),
    [sym_trueLiteral] = ACTIONS(1),
    [sym_falseLiteral] = ACTIONS(1),
    [sym_hexNumber] = ACTIONS(1),
    [sym_decimalNumber] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(116),
    [sym_object] = STATE(71),
    [aux_sym_source_file_repeat1] = STATE(71),
    [anon_sym_object] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_block] = STATE(44),
    [sym_statement] = STATE(10),
    [sym_functionDefinition] = STATE(44),
    [sym_variableDeclaration] = STATE(44),
    [sym_assignment] = STATE(44),
    [sym_expression] = STATE(44),
    [sym_if] = STATE(44),
    [sym_switch] = STATE(44),
    [sym_forLoop] = STATE(44),
    [sym_breakContinue] = STATE(44),
    [sym_functionCall] = STATE(27),
    [sym_identifierList] = STATE(112),
    [sym_literal] = STATE(27),
    [sym_numberLiteral] = STATE(21),
    [aux_sym_block_repeat1] = STATE(10),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(9),
    [anon_sym_function] = ACTIONS(11),
    [anon_sym_let] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_switch] = ACTIONS(17),
    [anon_sym_for] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(21),
    [anon_sym_continue] = ACTIONS(21),
    [sym_leave] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_hexLiteral] = ACTIONS(27),
    [sym_stringLiteral] = ACTIONS(27),
    [sym_trueLiteral] = ACTIONS(29),
    [sym_falseLiteral] = ACTIONS(29),
    [sym_hexNumber] = ACTIONS(31),
    [sym_decimalNumber] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_block] = STATE(44),
    [sym_statement] = STATE(2),
    [sym_functionDefinition] = STATE(44),
    [sym_variableDeclaration] = STATE(44),
    [sym_assignment] = STATE(44),
    [sym_expression] = STATE(44),
    [sym_if] = STATE(44),
    [sym_switch] = STATE(44),
    [sym_forLoop] = STATE(44),
    [sym_breakContinue] = STATE(44),
    [sym_functionCall] = STATE(27),
    [sym_identifierList] = STATE(112),
    [sym_literal] = STATE(27),
    [sym_numberLiteral] = STATE(21),
    [aux_sym_block_repeat1] = STATE(2),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(35),
    [anon_sym_function] = ACTIONS(11),
    [anon_sym_let] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_switch] = ACTIONS(17),
    [anon_sym_for] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(21),
    [anon_sym_continue] = ACTIONS(21),
    [sym_leave] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_hexLiteral] = ACTIONS(27),
    [sym_stringLiteral] = ACTIONS(27),
    [sym_trueLiteral] = ACTIONS(29),
    [sym_falseLiteral] = ACTIONS(29),
    [sym_hexNumber] = ACTIONS(31),
    [sym_decimalNumber] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_block] = STATE(44),
    [sym_statement] = STATE(10),
    [sym_functionDefinition] = STATE(44),
    [sym_variableDeclaration] = STATE(44),
    [sym_assignment] = STATE(44),
    [sym_expression] = STATE(44),
    [sym_if] = STATE(44),
    [sym_switch] = STATE(44),
    [sym_forLoop] = STATE(44),
    [sym_breakContinue] = STATE(44),
    [sym_functionCall] = STATE(27),
    [sym_identifierList] = STATE(112),
    [sym_literal] = STATE(27),
    [sym_numberLiteral] = STATE(21),
    [aux_sym_block_repeat1] = STATE(10),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(11),
    [anon_sym_let] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_switch] = ACTIONS(17),
    [anon_sym_for] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(21),
    [anon_sym_continue] = ACTIONS(21),
    [sym_leave] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_hexLiteral] = ACTIONS(27),
    [sym_stringLiteral] = ACTIONS(27),
    [sym_trueLiteral] = ACTIONS(29),
    [sym_falseLiteral] = ACTIONS(29),
    [sym_hexNumber] = ACTIONS(31),
    [sym_decimalNumber] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_block] = STATE(44),
    [sym_statement] = STATE(4),
    [sym_functionDefinition] = STATE(44),
    [sym_variableDeclaration] = STATE(44),
    [sym_assignment] = STATE(44),
    [sym_expression] = STATE(44),
    [sym_if] = STATE(44),
    [sym_switch] = STATE(44),
    [sym_forLoop] = STATE(44),
    [sym_breakContinue] = STATE(44),
    [sym_functionCall] = STATE(27),
    [sym_identifierList] = STATE(112),
    [sym_literal] = STATE(27),
    [sym_numberLiteral] = STATE(21),
    [aux_sym_block_repeat1] = STATE(4),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(39),
    [anon_sym_function] = ACTIONS(11),
    [anon_sym_let] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_switch] = ACTIONS(17),
    [anon_sym_for] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(21),
    [anon_sym_continue] = ACTIONS(21),
    [sym_leave] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_hexLiteral] = ACTIONS(27),
    [sym_stringLiteral] = ACTIONS(27),
    [sym_trueLiteral] = ACTIONS(29),
    [sym_falseLiteral] = ACTIONS(29),
    [sym_hexNumber] = ACTIONS(31),
    [sym_decimalNumber] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_block] = STATE(44),
    [sym_statement] = STATE(10),
    [sym_functionDefinition] = STATE(44),
    [sym_variableDeclaration] = STATE(44),
    [sym_assignment] = STATE(44),
    [sym_expression] = STATE(44),
    [sym_if] = STATE(44),
    [sym_switch] = STATE(44),
    [sym_forLoop] = STATE(44),
    [sym_breakContinue] = STATE(44),
    [sym_functionCall] = STATE(27),
    [sym_identifierList] = STATE(112),
    [sym_literal] = STATE(27),
    [sym_numberLiteral] = STATE(21),
    [aux_sym_block_repeat1] = STATE(10),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(41),
    [anon_sym_function] = ACTIONS(11),
    [anon_sym_let] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_switch] = ACTIONS(17),
    [anon_sym_for] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(21),
    [anon_sym_continue] = ACTIONS(21),
    [sym_leave] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_hexLiteral] = ACTIONS(27),
    [sym_stringLiteral] = ACTIONS(27),
    [sym_trueLiteral] = ACTIONS(29),
    [sym_falseLiteral] = ACTIONS(29),
    [sym_hexNumber] = ACTIONS(31),
    [sym_decimalNumber] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_block] = STATE(44),
    [sym_statement] = STATE(6),
    [sym_functionDefinition] = STATE(44),
    [sym_variableDeclaration] = STATE(44),
    [sym_assignment] = STATE(44),
    [sym_expression] = STATE(44),
    [sym_if] = STATE(44),
    [sym_switch] = STATE(44),
    [sym_forLoop] = STATE(44),
    [sym_breakContinue] = STATE(44),
    [sym_functionCall] = STATE(27),
    [sym_identifierList] = STATE(112),
    [sym_literal] = STATE(27),
    [sym_numberLiteral] = STATE(21),
    [aux_sym_block_repeat1] = STATE(6),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_function] = ACTIONS(11),
    [anon_sym_let] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_switch] = ACTIONS(17),
    [anon_sym_for] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(21),
    [anon_sym_continue] = ACTIONS(21),
    [sym_leave] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_hexLiteral] = ACTIONS(27),
    [sym_stringLiteral] = ACTIONS(27),
    [sym_trueLiteral] = ACTIONS(29),
    [sym_falseLiteral] = ACTIONS(29),
    [sym_hexNumber] = ACTIONS(31),
    [sym_decimalNumber] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_block] = STATE(44),
    [sym_statement] = STATE(10),
    [sym_functionDefinition] = STATE(44),
    [sym_variableDeclaration] = STATE(44),
    [sym_assignment] = STATE(44),
    [sym_expression] = STATE(44),
    [sym_if] = STATE(44),
    [sym_switch] = STATE(44),
    [sym_forLoop] = STATE(44),
    [sym_breakContinue] = STATE(44),
    [sym_functionCall] = STATE(27),
    [sym_identifierList] = STATE(112),
    [sym_literal] = STATE(27),
    [sym_numberLiteral] = STATE(21),
    [aux_sym_block_repeat1] = STATE(10),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_function] = ACTIONS(11),
    [anon_sym_let] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_switch] = ACTIONS(17),
    [anon_sym_for] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(21),
    [anon_sym_continue] = ACTIONS(21),
    [sym_leave] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_hexLiteral] = ACTIONS(27),
    [sym_stringLiteral] = ACTIONS(27),
    [sym_trueLiteral] = ACTIONS(29),
    [sym_falseLiteral] = ACTIONS(29),
    [sym_hexNumber] = ACTIONS(31),
    [sym_decimalNumber] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_block] = STATE(44),
    [sym_statement] = STATE(8),
    [sym_functionDefinition] = STATE(44),
    [sym_variableDeclaration] = STATE(44),
    [sym_assignment] = STATE(44),
    [sym_expression] = STATE(44),
    [sym_if] = STATE(44),
    [sym_switch] = STATE(44),
    [sym_forLoop] = STATE(44),
    [sym_breakContinue] = STATE(44),
    [sym_functionCall] = STATE(27),
    [sym_identifierList] = STATE(112),
    [sym_literal] = STATE(27),
    [sym_numberLiteral] = STATE(21),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_function] = ACTIONS(11),
    [anon_sym_let] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_switch] = ACTIONS(17),
    [anon_sym_for] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(21),
    [anon_sym_continue] = ACTIONS(21),
    [sym_leave] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_hexLiteral] = ACTIONS(27),
    [sym_stringLiteral] = ACTIONS(27),
    [sym_trueLiteral] = ACTIONS(29),
    [sym_falseLiteral] = ACTIONS(29),
    [sym_hexNumber] = ACTIONS(31),
    [sym_decimalNumber] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_block] = STATE(44),
    [sym_statement] = STATE(10),
    [sym_functionDefinition] = STATE(44),
    [sym_variableDeclaration] = STATE(44),
    [sym_assignment] = STATE(44),
    [sym_expression] = STATE(44),
    [sym_if] = STATE(44),
    [sym_switch] = STATE(44),
    [sym_forLoop] = STATE(44),
    [sym_breakContinue] = STATE(44),
    [sym_functionCall] = STATE(27),
    [sym_identifierList] = STATE(112),
    [sym_literal] = STATE(27),
    [sym_numberLiteral] = STATE(21),
    [aux_sym_block_repeat1] = STATE(10),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(52),
    [anon_sym_function] = ACTIONS(54),
    [anon_sym_let] = ACTIONS(57),
    [anon_sym_if] = ACTIONS(60),
    [anon_sym_switch] = ACTIONS(63),
    [anon_sym_for] = ACTIONS(66),
    [anon_sym_break] = ACTIONS(69),
    [anon_sym_continue] = ACTIONS(69),
    [sym_leave] = ACTIONS(72),
    [sym_identifier] = ACTIONS(75),
    [sym_hexLiteral] = ACTIONS(78),
    [sym_stringLiteral] = ACTIONS(78),
    [sym_trueLiteral] = ACTIONS(81),
    [sym_falseLiteral] = ACTIONS(81),
    [sym_hexNumber] = ACTIONS(84),
    [sym_decimalNumber] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    ACTIONS(96), 1,
      anon_sym_COLON,
    STATE(12), 1,
      aux_sym_typedIdentifierList_repeat1,
    ACTIONS(90), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(92), 12,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [36] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    STATE(16), 1,
      aux_sym_typedIdentifierList_repeat1,
    ACTIONS(98), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(100), 12,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [69] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_COLON,
    ACTIONS(102), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(104), 12,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [100] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym_typedIdentifierList_repeat1,
    ACTIONS(108), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(110), 12,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [133] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_LPAREN,
    ACTIONS(118), 1,
      anon_sym_COLON_EQ,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    STATE(73), 1,
      aux_sym_identifierList_repeat1,
    ACTIONS(112), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(114), 12,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [170] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_COMMA,
    STATE(16), 1,
      aux_sym_typedIdentifierList_repeat1,
    ACTIONS(102), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(104), 12,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [203] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    STATE(16), 1,
      aux_sym_typedIdentifierList_repeat1,
    ACTIONS(125), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(127), 12,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [236] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_default,
    STATE(46), 1,
      sym_default,
    STATE(20), 2,
      sym_case,
      aux_sym_switch_repeat1,
    ACTIONS(129), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(131), 12,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [271] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(137), 12,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [299] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_default,
    STATE(20), 2,
      sym_case,
      aux_sym_switch_repeat1,
    ACTIONS(139), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(141), 12,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [331] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_COLON,
    ACTIONS(146), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(148), 12,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(154), 12,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(158), 12,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(162), 12,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(166), 12,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(170), 12,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(114), 12,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [525] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(174), 12,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [552] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_DASH_GT,
    ACTIONS(176), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(178), 12,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [580] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_DASH_GT,
    ACTIONS(182), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(184), 12,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(190), 13,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_default,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [634] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(114), 12,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(194), 13,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_default,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [688] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_COLON_EQ,
    ACTIONS(196), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(198), 12,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(204), 13,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_default,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(208), 12,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [767] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(212), 12,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(216), 12,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [817] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(220), 12,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(204), 12,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(224), 12,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(131), 12,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(228), 12,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(232), 12,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [967] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(236), 12,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(240), 12,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [1017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(244), 12,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [1042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(194), 12,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [1067] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_hexNumber,
    ACTIONS(33), 1,
      sym_decimalNumber,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    ACTIONS(248), 1,
      sym_identifier,
    STATE(21), 1,
      sym_numberLiteral,
    STATE(80), 1,
      sym_expression,
    ACTIONS(27), 2,
      sym_hexLiteral,
      sym_stringLiteral,
    ACTIONS(29), 2,
      sym_trueLiteral,
      sym_falseLiteral,
    STATE(27), 2,
      sym_functionCall,
      sym_literal,
  [1101] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_hexNumber,
    ACTIONS(33), 1,
      sym_decimalNumber,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_numberLiteral,
    STATE(72), 1,
      sym_expression,
    ACTIONS(27), 2,
      sym_hexLiteral,
      sym_stringLiteral,
    ACTIONS(29), 2,
      sym_trueLiteral,
      sym_falseLiteral,
    STATE(27), 2,
      sym_functionCall,
      sym_literal,
  [1135] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_hexNumber,
    ACTIONS(33), 1,
      sym_decimalNumber,
    ACTIONS(252), 1,
      sym_identifier,
    STATE(21), 1,
      sym_numberLiteral,
    STATE(38), 1,
      sym_expression,
    ACTIONS(27), 2,
      sym_hexLiteral,
      sym_stringLiteral,
    ACTIONS(29), 2,
      sym_trueLiteral,
      sym_falseLiteral,
    STATE(27), 2,
      sym_functionCall,
      sym_literal,
  [1166] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_hexNumber,
    ACTIONS(33), 1,
      sym_decimalNumber,
    ACTIONS(252), 1,
      sym_identifier,
    STATE(21), 1,
      sym_numberLiteral,
    STATE(41), 1,
      sym_expression,
    ACTIONS(27), 2,
      sym_hexLiteral,
      sym_stringLiteral,
    ACTIONS(29), 2,
      sym_trueLiteral,
      sym_falseLiteral,
    STATE(27), 2,
      sym_functionCall,
      sym_literal,
  [1197] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_hexNumber,
    ACTIONS(33), 1,
      sym_decimalNumber,
    ACTIONS(248), 1,
      sym_identifier,
    STATE(21), 1,
      sym_numberLiteral,
    STATE(84), 1,
      sym_expression,
    ACTIONS(27), 2,
      sym_hexLiteral,
      sym_stringLiteral,
    ACTIONS(29), 2,
      sym_trueLiteral,
      sym_falseLiteral,
    STATE(27), 2,
      sym_functionCall,
      sym_literal,
  [1228] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      sym_identifier,
    ACTIONS(260), 1,
      sym_hexNumber,
    ACTIONS(262), 1,
      sym_decimalNumber,
    STATE(69), 1,
      sym_expression,
    STATE(93), 1,
      sym_numberLiteral,
    ACTIONS(256), 2,
      sym_hexLiteral,
      sym_stringLiteral,
    ACTIONS(258), 2,
      sym_trueLiteral,
      sym_falseLiteral,
    STATE(104), 2,
      sym_functionCall,
      sym_literal,
  [1259] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_hexNumber,
    ACTIONS(33), 1,
      sym_decimalNumber,
    ACTIONS(248), 1,
      sym_identifier,
    STATE(21), 1,
      sym_numberLiteral,
    STATE(85), 1,
      sym_expression,
    ACTIONS(27), 2,
      sym_hexLiteral,
      sym_stringLiteral,
    ACTIONS(29), 2,
      sym_trueLiteral,
      sym_falseLiteral,
    STATE(27), 2,
      sym_functionCall,
      sym_literal,
  [1290] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_hexNumber,
    ACTIONS(33), 1,
      sym_decimalNumber,
    ACTIONS(248), 1,
      sym_identifier,
    STATE(21), 1,
      sym_numberLiteral,
    STATE(86), 1,
      sym_expression,
    ACTIONS(27), 2,
      sym_hexLiteral,
      sym_stringLiteral,
    ACTIONS(29), 2,
      sym_trueLiteral,
      sym_falseLiteral,
    STATE(27), 2,
      sym_functionCall,
      sym_literal,
  [1321] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_hexNumber,
    ACTIONS(33), 1,
      sym_decimalNumber,
    STATE(21), 1,
      sym_numberLiteral,
    STATE(47), 1,
      sym_block,
    STATE(90), 1,
      sym_literal,
    ACTIONS(27), 4,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_trueLiteral,
      sym_falseLiteral,
  [1349] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_hexNumber,
    ACTIONS(33), 1,
      sym_decimalNumber,
    STATE(21), 1,
      sym_numberLiteral,
    STATE(90), 1,
      sym_literal,
    ACTIONS(27), 4,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_trueLiteral,
      sym_falseLiteral,
  [1371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 3,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(194), 4,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [1386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 3,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(204), 4,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [1401] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_object,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    ACTIONS(266), 1,
      anon_sym_data,
    STATE(62), 3,
      sym_object,
      sym_data,
      aux_sym_object_repeat1,
  [1419] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_object,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    ACTIONS(273), 1,
      anon_sym_data,
    STATE(62), 3,
      sym_object,
      sym_data,
      aux_sym_object_repeat1,
  [1437] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_object,
    ACTIONS(266), 1,
      anon_sym_data,
    ACTIONS(276), 1,
      anon_sym_RBRACE,
    STATE(61), 3,
      sym_object,
      sym_data,
      aux_sym_object_repeat1,
  [1455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 4,
      ts_builtin_sym_end,
      anon_sym_object,
      anon_sym_RBRACE,
      anon_sym_data,
  [1465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 4,
      anon_sym_object,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_data,
  [1475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 4,
      ts_builtin_sym_end,
      anon_sym_object,
      anon_sym_RBRACE,
      anon_sym_data,
  [1485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 4,
      anon_sym_object,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_data,
  [1495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 3,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1507] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_default,
    STATE(42), 1,
      sym_default,
    STATE(18), 2,
      sym_case,
      aux_sym_switch_repeat1,
  [1521] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
    ACTIONS(286), 1,
      anon_sym_object,
    STATE(70), 2,
      sym_object,
      aux_sym_source_file_repeat1,
  [1535] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_object,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
    STATE(70), 2,
      sym_object,
      aux_sym_source_file_repeat1,
  [1549] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      aux_sym_functionCall_repeat1,
  [1562] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    ACTIONS(295), 1,
      anon_sym_COLON_EQ,
    STATE(75), 1,
      aux_sym_identifierList_repeat1,
  [1575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 3,
      anon_sym_object,
      anon_sym_RBRACE,
      anon_sym_data,
  [1584] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_COLON_EQ,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    STATE(75), 1,
      aux_sym_identifierList_repeat1,
  [1597] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_RPAREN,
    ACTIONS(306), 1,
      sym_identifier,
    STATE(113), 1,
      sym_typedIdentifierList,
  [1610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 3,
      anon_sym_object,
      anon_sym_RBRACE,
      anon_sym_data,
  [1619] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_functionCall_repeat1,
  [1632] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_functionCall_repeat1,
  [1645] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_functionCall_repeat1,
  [1658] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_RPAREN,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_functionCall_repeat1,
  [1671] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym_identifier,
    STATE(23), 1,
      sym_typeName,
  [1681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 2,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
  [1689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_LBRACE,
    STATE(99), 1,
      sym_block,
  [1699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_block,
  [1717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym_identifier,
    STATE(14), 1,
      sym_typeName,
  [1727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym_identifier,
    STATE(28), 1,
      sym_typeName,
  [1737] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym_identifier,
    STATE(43), 1,
      sym_typedIdentifierList,
  [1747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_block,
  [1757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 2,
      sym_hexLiteral,
      sym_stringLiteral,
  [1765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      sym_identifier,
    STATE(108), 1,
      sym_typeName,
  [1775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_default,
    ACTIONS(331), 1,
      anon_sym_COLON,
  [1785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 2,
      anon_sym_default,
      anon_sym_COLON,
  [1793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_block,
  [1803] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym_identifier,
    STATE(34), 1,
      sym_typedIdentifierList,
  [1813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_default,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
  [1823] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym_identifier,
    STATE(36), 1,
      sym_typedIdentifierList,
  [1833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_block,
  [1843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_block,
  [1853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_code,
    STATE(63), 1,
      sym_code,
  [1863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
  [1870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym_identifier,
  [1877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_default,
  [1884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym_stringLiteral,
  [1891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_default,
  [1898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_default,
  [1905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_default,
  [1912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_default,
  [1919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_default,
  [1926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      sym_stringLiteral,
  [1933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_COLON_EQ,
  [1940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_RPAREN,
  [1947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
  [1954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      sym_identifier,
  [1961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      ts_builtin_sym_end,
  [1968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_identifier,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 36,
  [SMALL_STATE(13)] = 69,
  [SMALL_STATE(14)] = 100,
  [SMALL_STATE(15)] = 133,
  [SMALL_STATE(16)] = 170,
  [SMALL_STATE(17)] = 203,
  [SMALL_STATE(18)] = 236,
  [SMALL_STATE(19)] = 271,
  [SMALL_STATE(20)] = 299,
  [SMALL_STATE(21)] = 331,
  [SMALL_STATE(22)] = 361,
  [SMALL_STATE(23)] = 389,
  [SMALL_STATE(24)] = 417,
  [SMALL_STATE(25)] = 444,
  [SMALL_STATE(26)] = 471,
  [SMALL_STATE(27)] = 498,
  [SMALL_STATE(28)] = 525,
  [SMALL_STATE(29)] = 552,
  [SMALL_STATE(30)] = 580,
  [SMALL_STATE(31)] = 608,
  [SMALL_STATE(32)] = 634,
  [SMALL_STATE(33)] = 662,
  [SMALL_STATE(34)] = 688,
  [SMALL_STATE(35)] = 716,
  [SMALL_STATE(36)] = 742,
  [SMALL_STATE(37)] = 767,
  [SMALL_STATE(38)] = 792,
  [SMALL_STATE(39)] = 817,
  [SMALL_STATE(40)] = 842,
  [SMALL_STATE(41)] = 867,
  [SMALL_STATE(42)] = 892,
  [SMALL_STATE(43)] = 917,
  [SMALL_STATE(44)] = 942,
  [SMALL_STATE(45)] = 967,
  [SMALL_STATE(46)] = 992,
  [SMALL_STATE(47)] = 1017,
  [SMALL_STATE(48)] = 1042,
  [SMALL_STATE(49)] = 1067,
  [SMALL_STATE(50)] = 1101,
  [SMALL_STATE(51)] = 1135,
  [SMALL_STATE(52)] = 1166,
  [SMALL_STATE(53)] = 1197,
  [SMALL_STATE(54)] = 1228,
  [SMALL_STATE(55)] = 1259,
  [SMALL_STATE(56)] = 1290,
  [SMALL_STATE(57)] = 1321,
  [SMALL_STATE(58)] = 1349,
  [SMALL_STATE(59)] = 1371,
  [SMALL_STATE(60)] = 1386,
  [SMALL_STATE(61)] = 1401,
  [SMALL_STATE(62)] = 1419,
  [SMALL_STATE(63)] = 1437,
  [SMALL_STATE(64)] = 1455,
  [SMALL_STATE(65)] = 1465,
  [SMALL_STATE(66)] = 1475,
  [SMALL_STATE(67)] = 1485,
  [SMALL_STATE(68)] = 1495,
  [SMALL_STATE(69)] = 1507,
  [SMALL_STATE(70)] = 1521,
  [SMALL_STATE(71)] = 1535,
  [SMALL_STATE(72)] = 1549,
  [SMALL_STATE(73)] = 1562,
  [SMALL_STATE(74)] = 1575,
  [SMALL_STATE(75)] = 1584,
  [SMALL_STATE(76)] = 1597,
  [SMALL_STATE(77)] = 1610,
  [SMALL_STATE(78)] = 1619,
  [SMALL_STATE(79)] = 1632,
  [SMALL_STATE(80)] = 1645,
  [SMALL_STATE(81)] = 1658,
  [SMALL_STATE(82)] = 1671,
  [SMALL_STATE(83)] = 1681,
  [SMALL_STATE(84)] = 1689,
  [SMALL_STATE(85)] = 1699,
  [SMALL_STATE(86)] = 1707,
  [SMALL_STATE(87)] = 1717,
  [SMALL_STATE(88)] = 1727,
  [SMALL_STATE(89)] = 1737,
  [SMALL_STATE(90)] = 1747,
  [SMALL_STATE(91)] = 1757,
  [SMALL_STATE(92)] = 1765,
  [SMALL_STATE(93)] = 1775,
  [SMALL_STATE(94)] = 1785,
  [SMALL_STATE(95)] = 1793,
  [SMALL_STATE(96)] = 1803,
  [SMALL_STATE(97)] = 1813,
  [SMALL_STATE(98)] = 1823,
  [SMALL_STATE(99)] = 1833,
  [SMALL_STATE(100)] = 1843,
  [SMALL_STATE(101)] = 1853,
  [SMALL_STATE(102)] = 1863,
  [SMALL_STATE(103)] = 1870,
  [SMALL_STATE(104)] = 1877,
  [SMALL_STATE(105)] = 1884,
  [SMALL_STATE(106)] = 1891,
  [SMALL_STATE(107)] = 1898,
  [SMALL_STATE(108)] = 1905,
  [SMALL_STATE(109)] = 1912,
  [SMALL_STATE(110)] = 1919,
  [SMALL_STATE(111)] = 1926,
  [SMALL_STATE(112)] = 1933,
  [SMALL_STATE(113)] = 1940,
  [SMALL_STATE(114)] = 1947,
  [SMALL_STATE(115)] = 1954,
  [SMALL_STATE(116)] = 1961,
  [SMALL_STATE(117)] = 1968,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(103),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(96),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(56),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(54),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(95),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(45),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(44),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(21),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(21),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(22),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(22),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedIdentifierList, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedIdentifierList, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedIdentifierList, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedIdentifierList, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typedIdentifierList_repeat1, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_typedIdentifierList_repeat1, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedIdentifierList, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedIdentifierList, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifierList, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typedIdentifierList_repeat1, 2), SHIFT_REPEAT(117),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedIdentifierList, 4),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedIdentifierList, 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 3, .production_id = 6),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch, 3, .production_id = 6),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeName, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typeName, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(58),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberLiteral, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberLiteral, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typedIdentifierList_repeat1, 4),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_typedIdentifierList_repeat1, 4),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionCall, 4, .production_id = 7),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functionCall, 4, .production_id = 7),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionCall, 5, .production_id = 7),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functionCall, 5, .production_id = 7),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionCall, 3, .production_id = 7),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functionCall, 3, .production_id = 7),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionDefinition, 4, .production_id = 9),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functionDefinition, 4, .production_id = 9),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionDefinition, 5, .production_id = 12),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functionDefinition, 5, .production_id = 12),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 3, .production_id = 13),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 3, .production_id = 13),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variableDeclaration, 2, .production_id = 4),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variableDeclaration, 2, .production_id = 4),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionDefinition, 6, .production_id = 14),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functionDefinition, 6, .production_id = 14),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 8),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 8),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forLoop, 5),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forLoop, 5),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variableDeclaration, 4, .production_id = 10),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variableDeclaration, 4, .production_id = 10),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionDefinition, 7, .production_id = 15),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functionDefinition, 7, .production_id = 15),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_breakContinue, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_breakContinue, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 4, .production_id = 11),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch, 4, .production_id = 11),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default, 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(111),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(105),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 6, .production_id = 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5, .production_id = 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(111),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifierList, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 2, .production_id = 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifierList_repeat1, 2),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifierList_repeat1, 2), SHIFT_REPEAT(115),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data, 3, .production_id = 5),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functionCall_repeat1, 2),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functionCall_repeat1, 2), SHIFT_REPEAT(55),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [355] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_yul(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
