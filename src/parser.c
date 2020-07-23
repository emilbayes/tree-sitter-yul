#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 118
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
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
  anon_sym_case = 14,
  anon_sym_default = 15,
  anon_sym_for = 16,
  anon_sym_break = 17,
  anon_sym_continue = 18,
  sym_leave = 19,
  anon_sym_COMMA = 20,
  sym_identifier = 21,
  anon_sym_COLON = 22,
  sym_hexLiteral = 23,
  sym_stringLiteral = 24,
  sym_trueLiteral = 25,
  sym_falseLiteral = 26,
  sym_hexNumber = 27,
  sym_decimalNumber = 28,
  sym_comment = 29,
  sym_source_file = 30,
  sym_object = 31,
  sym_code = 32,
  sym_data = 33,
  sym_block = 34,
  sym_statement = 35,
  sym_functionDefinition = 36,
  sym_variableDeclaration = 37,
  sym_assignment = 38,
  sym_expression = 39,
  sym_if = 40,
  sym_switch = 41,
  sym_case = 42,
  sym_default = 43,
  sym_forLoop = 44,
  sym_breakContinue = 45,
  sym_functionCall = 46,
  sym_identifierList = 47,
  sym_typeName = 48,
  sym_typedIdentifierList = 49,
  sym_literal = 50,
  sym_numberLiteral = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym_object_repeat1 = 53,
  aux_sym_block_repeat1 = 54,
  aux_sym_switch_repeat1 = 55,
  aux_sym_functionCall_repeat1 = 56,
  aux_sym_identifierList_repeat1 = 57,
  aux_sym_typedIdentifierList_repeat1 = 58,
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
  [anon_sym_case] = "case",
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
  [anon_sym_case] = anon_sym_case,
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
  [anon_sym_case] = {
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
      if (eof) ADVANCE(45);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(140);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == 'b') ADVANCE(115);
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 'd') ADVANCE(74);
      if (lookahead == 'f') ADVANCE(75);
      if (lookahead == 'h') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(140);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == 'b') ADVANCE(115);
      if (lookahead == 'c') ADVANCE(112);
      if (lookahead == 'f') ADVANCE(75);
      if (lookahead == 'h') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(140);
      if (lookahead == 'f') ADVANCE(76);
      if (lookahead == 'h') ADVANCE(86);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(140);
      if (lookahead == 'b') ADVANCE(115);
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(95);
      if (lookahead == 'f') ADVANCE(75);
      if (lookahead == 'h') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 8:
      if (lookahead == ')') ADVANCE(56);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(143);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(142);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(57);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 18:
      if (lookahead == 'b') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(17);
      END_STATE();
    case 28:
      if (lookahead == 'j') ADVANCE(24);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 39:
      if (lookahead == 'x') ADVANCE(5);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 43:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 44:
      if (eof) ADVANCE(45);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(140);
      if (lookahead == ':') ADVANCE(131);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'h') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(18);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(44)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_object);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_code);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_code);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_switch);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_break);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_continue);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_leave);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead == 'o') ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead == 'o') ADVANCE(109);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead == 'u') ADVANCE(107);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(103);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(118);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(61);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'j') ADVANCE(96);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(67);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(119);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(117);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(108);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(109);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(88);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(82);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(105);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(91);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(93);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(102);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(71);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_hexLiteral);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_stringLiteral);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_trueLiteral);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_trueLiteral);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_falseLiteral);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_falseLiteral);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_hexNumber);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_decimalNumber);
      if (lookahead == 'x') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_decimalNumber);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 44},
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
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
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
  [57] = {.lex_state = 44},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 44},
  [61] = {.lex_state = 44},
  [62] = {.lex_state = 44},
  [63] = {.lex_state = 44},
  [64] = {.lex_state = 44},
  [65] = {.lex_state = 44},
  [66] = {.lex_state = 44},
  [67] = {.lex_state = 44},
  [68] = {.lex_state = 44},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 44},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 44},
  [73] = {.lex_state = 44},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 44},
  [76] = {.lex_state = 44},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 44},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 44},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 44},
  [98] = {.lex_state = 44},
  [99] = {.lex_state = 44},
  [100] = {.lex_state = 44},
  [101] = {.lex_state = 44},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 44},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
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
    [anon_sym_case] = ACTIONS(1),
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
    [sym_object] = STATE(65),
    [aux_sym_source_file_repeat1] = STATE(65),
    [anon_sym_object] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_block] = STATE(46),
    [sym_statement] = STATE(10),
    [sym_functionDefinition] = STATE(46),
    [sym_variableDeclaration] = STATE(46),
    [sym_assignment] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_if] = STATE(46),
    [sym_switch] = STATE(46),
    [sym_forLoop] = STATE(46),
    [sym_breakContinue] = STATE(46),
    [sym_functionCall] = STATE(29),
    [sym_identifierList] = STATE(110),
    [sym_literal] = STATE(29),
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
    [sym_block] = STATE(46),
    [sym_statement] = STATE(2),
    [sym_functionDefinition] = STATE(46),
    [sym_variableDeclaration] = STATE(46),
    [sym_assignment] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_if] = STATE(46),
    [sym_switch] = STATE(46),
    [sym_forLoop] = STATE(46),
    [sym_breakContinue] = STATE(46),
    [sym_functionCall] = STATE(29),
    [sym_identifierList] = STATE(110),
    [sym_literal] = STATE(29),
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
    [sym_block] = STATE(46),
    [sym_statement] = STATE(10),
    [sym_functionDefinition] = STATE(46),
    [sym_variableDeclaration] = STATE(46),
    [sym_assignment] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_if] = STATE(46),
    [sym_switch] = STATE(46),
    [sym_forLoop] = STATE(46),
    [sym_breakContinue] = STATE(46),
    [sym_functionCall] = STATE(29),
    [sym_identifierList] = STATE(110),
    [sym_literal] = STATE(29),
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
    [sym_block] = STATE(46),
    [sym_statement] = STATE(4),
    [sym_functionDefinition] = STATE(46),
    [sym_variableDeclaration] = STATE(46),
    [sym_assignment] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_if] = STATE(46),
    [sym_switch] = STATE(46),
    [sym_forLoop] = STATE(46),
    [sym_breakContinue] = STATE(46),
    [sym_functionCall] = STATE(29),
    [sym_identifierList] = STATE(110),
    [sym_literal] = STATE(29),
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
    [sym_block] = STATE(46),
    [sym_statement] = STATE(10),
    [sym_functionDefinition] = STATE(46),
    [sym_variableDeclaration] = STATE(46),
    [sym_assignment] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_if] = STATE(46),
    [sym_switch] = STATE(46),
    [sym_forLoop] = STATE(46),
    [sym_breakContinue] = STATE(46),
    [sym_functionCall] = STATE(29),
    [sym_identifierList] = STATE(110),
    [sym_literal] = STATE(29),
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
    [sym_block] = STATE(46),
    [sym_statement] = STATE(6),
    [sym_functionDefinition] = STATE(46),
    [sym_variableDeclaration] = STATE(46),
    [sym_assignment] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_if] = STATE(46),
    [sym_switch] = STATE(46),
    [sym_forLoop] = STATE(46),
    [sym_breakContinue] = STATE(46),
    [sym_functionCall] = STATE(29),
    [sym_identifierList] = STATE(110),
    [sym_literal] = STATE(29),
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
    [sym_block] = STATE(46),
    [sym_statement] = STATE(10),
    [sym_functionDefinition] = STATE(46),
    [sym_variableDeclaration] = STATE(46),
    [sym_assignment] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_if] = STATE(46),
    [sym_switch] = STATE(46),
    [sym_forLoop] = STATE(46),
    [sym_breakContinue] = STATE(46),
    [sym_functionCall] = STATE(29),
    [sym_identifierList] = STATE(110),
    [sym_literal] = STATE(29),
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
    [sym_block] = STATE(46),
    [sym_statement] = STATE(8),
    [sym_functionDefinition] = STATE(46),
    [sym_variableDeclaration] = STATE(46),
    [sym_assignment] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_if] = STATE(46),
    [sym_switch] = STATE(46),
    [sym_forLoop] = STATE(46),
    [sym_breakContinue] = STATE(46),
    [sym_functionCall] = STATE(29),
    [sym_identifierList] = STATE(110),
    [sym_literal] = STATE(29),
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
    [sym_block] = STATE(46),
    [sym_statement] = STATE(10),
    [sym_functionDefinition] = STATE(46),
    [sym_variableDeclaration] = STATE(46),
    [sym_assignment] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_if] = STATE(46),
    [sym_switch] = STATE(46),
    [sym_forLoop] = STATE(46),
    [sym_breakContinue] = STATE(46),
    [sym_functionCall] = STATE(29),
    [sym_identifierList] = STATE(110),
    [sym_literal] = STATE(29),
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
    STATE(15), 1,
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
  [36] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_case,
    ACTIONS(104), 1,
      anon_sym_default,
    STATE(48), 1,
      sym_default,
    STATE(16), 2,
      sym_case,
      aux_sym_switch_repeat1,
    ACTIONS(98), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [74] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym_typedIdentifierList_repeat1,
    ACTIONS(106), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(108), 12,
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
  [107] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_COLON,
    ACTIONS(106), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(108), 12,
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
  [138] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym_typedIdentifierList_repeat1,
    ACTIONS(115), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(117), 12,
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
  [171] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_case,
    STATE(16), 2,
      sym_case,
      aux_sym_switch_repeat1,
    ACTIONS(119), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(121), 13,
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
  [204] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_COLON_EQ,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      aux_sym_identifierList_repeat1,
    ACTIONS(126), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(128), 12,
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
  [241] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym_typedIdentifierList_repeat1,
    ACTIONS(136), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(138), 12,
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
  [274] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_typedIdentifierList_repeat1,
    ACTIONS(140), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(142), 12,
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
  [307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(146), 12,
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
  [335] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_COLON,
    ACTIONS(148), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(150), 12,
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
  [365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(156), 12,
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
  [393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(160), 12,
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
  [421] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(164), 12,
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
  [448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(168), 12,
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
  [475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(172), 12,
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
  [502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(176), 12,
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
  [529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(180), 14,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(128), 12,
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
  [583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(184), 14,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [610] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(188), 14,
      anon_sym_function,
      anon_sym_let,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_for,
      anon_sym_break,
      anon_sym_continue,
      sym_leave,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [637] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_DASH_GT,
    ACTIONS(190), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(192), 12,
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
  [665] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_DASH_GT,
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
  [693] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_COLON_EQ,
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
  [721] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(128), 12,
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
  [749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(210), 12,
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
  [774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [799] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(214), 12,
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
  [824] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(218), 12,
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
  [874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(222), 12,
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
  [899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(226), 12,
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
  [924] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(180), 12,
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
  [949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(230), 12,
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
  [974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(234), 12,
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
  [999] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(238), 12,
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
  [1024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(242), 12,
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
  [1049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(246), 12,
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
  [1074] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_hexNumber,
    ACTIONS(33), 1,
      sym_decimalNumber,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
    ACTIONS(250), 1,
      sym_identifier,
    STATE(21), 1,
      sym_numberLiteral,
    STATE(82), 1,
      sym_expression,
    ACTIONS(27), 2,
      sym_hexLiteral,
      sym_stringLiteral,
    ACTIONS(29), 2,
      sym_trueLiteral,
      sym_falseLiteral,
    STATE(29), 2,
      sym_functionCall,
      sym_literal,
  [1108] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_hexNumber,
    ACTIONS(33), 1,
      sym_decimalNumber,
    ACTIONS(250), 1,
      sym_identifier,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_numberLiteral,
    STATE(77), 1,
      sym_expression,
    ACTIONS(27), 2,
      sym_hexLiteral,
      sym_stringLiteral,
    ACTIONS(29), 2,
      sym_trueLiteral,
      sym_falseLiteral,
    STATE(29), 2,
      sym_functionCall,
      sym_literal,
  [1142] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_hexNumber,
    ACTIONS(33), 1,
      sym_decimalNumber,
    ACTIONS(250), 1,
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
    STATE(29), 2,
      sym_functionCall,
      sym_literal,
  [1173] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_hexNumber,
    ACTIONS(33), 1,
      sym_decimalNumber,
    ACTIONS(254), 1,
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
    STATE(29), 2,
      sym_functionCall,
      sym_literal,
  [1204] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_hexNumber,
    ACTIONS(33), 1,
      sym_decimalNumber,
    ACTIONS(254), 1,
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
    STATE(29), 2,
      sym_functionCall,
      sym_literal,
  [1235] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_identifier,
    ACTIONS(262), 1,
      sym_hexNumber,
    ACTIONS(264), 1,
      sym_decimalNumber,
    STATE(63), 1,
      sym_expression,
    STATE(76), 1,
      sym_numberLiteral,
    ACTIONS(258), 2,
      sym_hexLiteral,
      sym_stringLiteral,
    ACTIONS(260), 2,
      sym_trueLiteral,
      sym_falseLiteral,
    STATE(94), 2,
      sym_functionCall,
      sym_literal,
  [1266] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_hexNumber,
    ACTIONS(33), 1,
      sym_decimalNumber,
    ACTIONS(250), 1,
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
    STATE(29), 2,
      sym_functionCall,
      sym_literal,
  [1297] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_hexNumber,
    ACTIONS(33), 1,
      sym_decimalNumber,
    ACTIONS(250), 1,
      sym_identifier,
    STATE(21), 1,
      sym_numberLiteral,
    STATE(104), 1,
      sym_expression,
    ACTIONS(27), 2,
      sym_hexLiteral,
      sym_stringLiteral,
    ACTIONS(29), 2,
      sym_trueLiteral,
      sym_falseLiteral,
    STATE(29), 2,
      sym_functionCall,
      sym_literal,
  [1328] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_hexNumber,
    ACTIONS(33), 1,
      sym_decimalNumber,
    STATE(21), 1,
      sym_numberLiteral,
    STATE(103), 1,
      sym_literal,
    ACTIONS(27), 4,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_trueLiteral,
      sym_falseLiteral,
  [1350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 3,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(180), 4,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [1365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 3,
      sym_hexLiteral,
      sym_stringLiteral,
      sym_hexNumber,
    ACTIONS(184), 4,
      sym_identifier,
      sym_trueLiteral,
      sym_falseLiteral,
      sym_decimalNumber,
  [1380] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_object,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
    ACTIONS(271), 1,
      anon_sym_data,
    STATE(60), 3,
      sym_object,
      sym_data,
      aux_sym_object_repeat1,
  [1398] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_object,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    ACTIONS(276), 1,
      anon_sym_data,
    STATE(60), 3,
      sym_object,
      sym_data,
      aux_sym_object_repeat1,
  [1416] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_object,
    ACTIONS(276), 1,
      anon_sym_data,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    STATE(61), 3,
      sym_object,
      sym_data,
      aux_sym_object_repeat1,
  [1434] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_case,
    ACTIONS(282), 1,
      anon_sym_default,
    STATE(37), 1,
      sym_default,
    STATE(12), 2,
      sym_case,
      aux_sym_switch_repeat1,
  [1451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 4,
      ts_builtin_sym_end,
      anon_sym_object,
      anon_sym_RBRACE,
      anon_sym_data,
  [1461] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_object,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
    STATE(68), 2,
      sym_object,
      aux_sym_source_file_repeat1,
  [1475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 4,
      ts_builtin_sym_end,
      anon_sym_object,
      anon_sym_RBRACE,
      anon_sym_data,
  [1485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 4,
      anon_sym_object,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_data,
  [1495] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    ACTIONS(292), 1,
      anon_sym_object,
    STATE(68), 2,
      sym_object,
      aux_sym_source_file_repeat1,
  [1509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 3,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 4,
      anon_sym_object,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_data,
  [1531] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_functionCall_repeat1,
  [1544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 2,
      anon_sym_case,
      anon_sym_default,
  [1555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 3,
      anon_sym_object,
      anon_sym_RBRACE,
      anon_sym_data,
  [1564] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_COLON_EQ,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      aux_sym_identifierList_repeat1,
  [1577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 3,
      anon_sym_case,
      anon_sym_default,
      anon_sym_COLON,
  [1586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_COLON,
    ACTIONS(148), 2,
      anon_sym_case,
      anon_sym_default,
  [1597] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      aux_sym_functionCall_repeat1,
  [1610] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
    ACTIONS(314), 1,
      sym_identifier,
    STATE(112), 1,
      sym_typedIdentifierList,
  [1623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 3,
      anon_sym_object,
      anon_sym_RBRACE,
      anon_sym_data,
  [1632] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_functionCall_repeat1,
  [1645] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_functionCall_repeat1,
  [1658] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      aux_sym_functionCall_repeat1,
  [1671] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_COLON_EQ,
    STATE(74), 1,
      aux_sym_identifierList_repeat1,
  [1684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_block,
  [1702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_block,
  [1712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 2,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
  [1720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym_identifier,
    STATE(23), 1,
      sym_typeName,
  [1730] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_identifier,
    STATE(45), 1,
      sym_typedIdentifierList,
  [1740] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_identifier,
    STATE(36), 1,
      sym_typedIdentifierList,
  [1750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 2,
      sym_hexLiteral,
      sym_stringLiteral,
  [1758] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym_block,
  [1768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym_identifier,
    STATE(19), 1,
      sym_typeName,
  [1778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 2,
      anon_sym_case,
      anon_sym_default,
  [1786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym_identifier,
    STATE(24), 1,
      sym_typeName,
  [1796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_identifier,
    STATE(34), 1,
      sym_typedIdentifierList,
  [1806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 2,
      anon_sym_case,
      anon_sym_default,
  [1814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 2,
      anon_sym_case,
      anon_sym_default,
  [1822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 2,
      anon_sym_case,
      anon_sym_default,
  [1830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 2,
      anon_sym_case,
      anon_sym_default,
  [1838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 2,
      anon_sym_case,
      anon_sym_default,
  [1846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_block,
  [1856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_block,
  [1866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_LBRACE,
    STATE(92), 1,
      sym_block,
  [1876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_block,
  [1886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_code,
    STATE(62), 1,
      sym_code,
  [1896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym_identifier,
    STATE(99), 1,
      sym_typeName,
  [1906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
  [1913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      sym_identifier,
  [1920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_COLON_EQ,
  [1927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym_stringLiteral,
  [1934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
  [1941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      sym_identifier,
  [1948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_LBRACE,
  [1955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_identifier,
  [1962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      ts_builtin_sym_end,
  [1969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym_stringLiteral,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 36,
  [SMALL_STATE(13)] = 74,
  [SMALL_STATE(14)] = 107,
  [SMALL_STATE(15)] = 138,
  [SMALL_STATE(16)] = 171,
  [SMALL_STATE(17)] = 204,
  [SMALL_STATE(18)] = 241,
  [SMALL_STATE(19)] = 274,
  [SMALL_STATE(20)] = 307,
  [SMALL_STATE(21)] = 335,
  [SMALL_STATE(22)] = 365,
  [SMALL_STATE(23)] = 393,
  [SMALL_STATE(24)] = 421,
  [SMALL_STATE(25)] = 448,
  [SMALL_STATE(26)] = 475,
  [SMALL_STATE(27)] = 502,
  [SMALL_STATE(28)] = 529,
  [SMALL_STATE(29)] = 556,
  [SMALL_STATE(30)] = 583,
  [SMALL_STATE(31)] = 610,
  [SMALL_STATE(32)] = 637,
  [SMALL_STATE(33)] = 665,
  [SMALL_STATE(34)] = 693,
  [SMALL_STATE(35)] = 721,
  [SMALL_STATE(36)] = 749,
  [SMALL_STATE(37)] = 774,
  [SMALL_STATE(38)] = 799,
  [SMALL_STATE(39)] = 824,
  [SMALL_STATE(40)] = 849,
  [SMALL_STATE(41)] = 874,
  [SMALL_STATE(42)] = 899,
  [SMALL_STATE(43)] = 924,
  [SMALL_STATE(44)] = 949,
  [SMALL_STATE(45)] = 974,
  [SMALL_STATE(46)] = 999,
  [SMALL_STATE(47)] = 1024,
  [SMALL_STATE(48)] = 1049,
  [SMALL_STATE(49)] = 1074,
  [SMALL_STATE(50)] = 1108,
  [SMALL_STATE(51)] = 1142,
  [SMALL_STATE(52)] = 1173,
  [SMALL_STATE(53)] = 1204,
  [SMALL_STATE(54)] = 1235,
  [SMALL_STATE(55)] = 1266,
  [SMALL_STATE(56)] = 1297,
  [SMALL_STATE(57)] = 1328,
  [SMALL_STATE(58)] = 1350,
  [SMALL_STATE(59)] = 1365,
  [SMALL_STATE(60)] = 1380,
  [SMALL_STATE(61)] = 1398,
  [SMALL_STATE(62)] = 1416,
  [SMALL_STATE(63)] = 1434,
  [SMALL_STATE(64)] = 1451,
  [SMALL_STATE(65)] = 1461,
  [SMALL_STATE(66)] = 1475,
  [SMALL_STATE(67)] = 1485,
  [SMALL_STATE(68)] = 1495,
  [SMALL_STATE(69)] = 1509,
  [SMALL_STATE(70)] = 1521,
  [SMALL_STATE(71)] = 1531,
  [SMALL_STATE(72)] = 1544,
  [SMALL_STATE(73)] = 1555,
  [SMALL_STATE(74)] = 1564,
  [SMALL_STATE(75)] = 1577,
  [SMALL_STATE(76)] = 1586,
  [SMALL_STATE(77)] = 1597,
  [SMALL_STATE(78)] = 1610,
  [SMALL_STATE(79)] = 1623,
  [SMALL_STATE(80)] = 1632,
  [SMALL_STATE(81)] = 1645,
  [SMALL_STATE(82)] = 1658,
  [SMALL_STATE(83)] = 1671,
  [SMALL_STATE(84)] = 1684,
  [SMALL_STATE(85)] = 1692,
  [SMALL_STATE(86)] = 1702,
  [SMALL_STATE(87)] = 1712,
  [SMALL_STATE(88)] = 1720,
  [SMALL_STATE(89)] = 1730,
  [SMALL_STATE(90)] = 1740,
  [SMALL_STATE(91)] = 1750,
  [SMALL_STATE(92)] = 1758,
  [SMALL_STATE(93)] = 1768,
  [SMALL_STATE(94)] = 1778,
  [SMALL_STATE(95)] = 1786,
  [SMALL_STATE(96)] = 1796,
  [SMALL_STATE(97)] = 1806,
  [SMALL_STATE(98)] = 1814,
  [SMALL_STATE(99)] = 1822,
  [SMALL_STATE(100)] = 1830,
  [SMALL_STATE(101)] = 1838,
  [SMALL_STATE(102)] = 1846,
  [SMALL_STATE(103)] = 1856,
  [SMALL_STATE(104)] = 1866,
  [SMALL_STATE(105)] = 1876,
  [SMALL_STATE(106)] = 1886,
  [SMALL_STATE(107)] = 1896,
  [SMALL_STATE(108)] = 1906,
  [SMALL_STATE(109)] = 1913,
  [SMALL_STATE(110)] = 1920,
  [SMALL_STATE(111)] = 1927,
  [SMALL_STATE(112)] = 1934,
  [SMALL_STATE(113)] = 1941,
  [SMALL_STATE(114)] = 1948,
  [SMALL_STATE(115)] = 1955,
  [SMALL_STATE(116)] = 1962,
  [SMALL_STATE(117)] = 1969,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(109),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(96),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(55),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(54),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(85),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(47),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(46),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(17),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(21),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(21),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(22),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(22),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedIdentifierList, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedIdentifierList, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 3, .production_id = 6),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch, 3, .production_id = 6),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typedIdentifierList_repeat1, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_typedIdentifierList_repeat1, 2),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typedIdentifierList_repeat1, 2), SHIFT_REPEAT(115),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedIdentifierList, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedIdentifierList, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(57),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifierList, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedIdentifierList, 4),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedIdentifierList, 4),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedIdentifierList, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedIdentifierList, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeName, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typeName, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberLiteral, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberLiteral, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typedIdentifierList_repeat1, 4),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_typedIdentifierList_repeat1, 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionCall, 3, .production_id = 7),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functionCall, 3, .production_id = 7),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionCall, 5, .production_id = 7),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functionCall, 5, .production_id = 7),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionCall, 4, .production_id = 7),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functionCall, 4, .production_id = 7),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 3, .production_id = 13),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 3, .production_id = 13),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionDefinition, 4, .production_id = 9),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functionDefinition, 4, .production_id = 9),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionDefinition, 5, .production_id = 12),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functionDefinition, 5, .production_id = 12),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variableDeclaration, 2, .production_id = 4),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variableDeclaration, 2, .production_id = 4),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionDefinition, 6, .production_id = 14),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functionDefinition, 6, .production_id = 14),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 8),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 8),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forLoop, 5),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forLoop, 5),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variableDeclaration, 4, .production_id = 10),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variableDeclaration, 4, .production_id = 10),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default, 2),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionDefinition, 7, .production_id = 15),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functionDefinition, 7, .production_id = 15),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_breakContinue, 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_breakContinue, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 4, .production_id = 11),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch, 4, .production_id = 11),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(117),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(111),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 6, .production_id = 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5, .production_id = 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(117),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 2, .production_id = 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifierList_repeat1, 2),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifierList_repeat1, 2), SHIFT_REPEAT(113),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data, 3, .production_id = 5),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functionCall_repeat1, 2),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functionCall_repeat1, 2), SHIFT_REPEAT(51),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifierList, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [359] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
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
