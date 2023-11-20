#include <tree_sitter/parser.h>

#include <cstring>
#include <cwctype>
#include <string>
#include <vector>

namespace {
	using std::string;
	using std::vector;
	
	enum TokenType {
		LITERAL,
		TSQ,
		ERROR_SENTINEL,
	};
	
	struct Scanner {
		unsigned serialize(char *buffer) {
			return 0;
		}
	
		void deserialize(const char *buffer, unsigned length) {}
		
		bool scan_literal(TSLexer *lexer) {
			bool matched = false;
			
			for (;;) {
				if (lexer->eof(lexer)) return matched;
				
				switch (lexer->lookahead) {
				case '\\':
					lexer->advance(false);
					if (lexer->eof(lexer)) {
						advance(lexer); // TODO not sure if/why we need to do this
						lexer->mark_end();
						return true;
					}
					
					advance(lexer);
					if (lexer->eof(lexer)) {
						advance(lexer); // TODO not sure if/why we need to do this
						lexer->mark_end();
						return true;
					}
				
				case '/':
				case '(':
				case '[':
				case ']':
					advance(lexer);
					if (lexer->lookahead == '@')
						advance(lexer);
					return true;
				
				// ..
				case '.':
					advance(lexer);
					if (lexer->lookahead == '.') {
						advance(lexer);
						return true;
					}
					return false;
				
				default:
					return false;
			}
			
			
			}
		}
		
		bool scan(TSLexer *lexer, const bool *valid_symbols) {
			
			if (valid_symbols[LITERAL] && scanLiteral(lexer)) {
				lexer->result_symbol = LITERAL;
				return true;
			} else if (valid_symbols[REGEX_LITERAL] && scanRegexLiteral(lexer)) {
				lexer->result_symbol = LITERAL;
				return true;
			} else if (valid_symbols[TSQ] && scanQuery(lexer)) {
				lexer->result_symbol = TSQ;
				return true;
			}
			
			// Contents of literals, which match any character except for some close delimiter
			if (!valid_symbols[STRING_START]) {
				if (
						(valid_symbols[STRING_CONTENT] || valid_symbols[STRING_END]) &&
						!literal_stack.empty())
					return scan_literal_content(lexer);
				if (
						(valid_symbols[HEREDOC_CONTENT] || valid_symbols[HEREDOC_BODY_END]) &&
						!open_heredocs.empty())
					return scan_heredoc_content(lexer);
			}
	
			// Whitespace
			lexer->result_symbol = NONE;
			if (!scan_whitespace(lexer, valid_symbols))
				return false;
			if (lexer->result_symbol != NONE)
				return true;
	
			switch (lexer->lookahead) {
				case '&':
					if (valid_symbols[BLOCK_AMPERSAND]) {
						advance(lexer);
						if (lexer->lookahead != '&' &&
								lexer->lookahead != '.' &&
								lexer->lookahead != '=' &&
								!iswspace(lexer->lookahead)) {
							lexer->result_symbol = BLOCK_AMPERSAND;
							return true;
						} else {
							return false;
						}
					}
					break;
	
				case '<':
					if (valid_symbols[SINGLETON_CLASS_LEFT_ANGLE_LEFT_ANGLE]) {
						advance(lexer);
						if (lexer->lookahead == '<') {
							advance(lexer);
							lexer->result_symbol = SINGLETON_CLASS_LEFT_ANGLE_LEFT_ANGLE;
							return true;
						} else {
							return false;
						}
					}
					break;
	
				case '*':
					if (valid_symbols[SPLAT_STAR] || valid_symbols[BINARY_STAR] ||
							valid_symbols[HASH_SPLAT_STAR_STAR] || valid_symbols[BINARY_STAR_STAR]) {
						advance(lexer);
						if (lexer->lookahead == '=')
							return false;
						if (lexer->lookahead == '*') {
							if (valid_symbols[HASH_SPLAT_STAR_STAR] || valid_symbols[BINARY_STAR_STAR]) {
								advance(lexer);
								if (lexer->lookahead == '=')
									return false;
								if (valid_symbols[BINARY_STAR_STAR] && !has_leading_whitespace) {
									lexer->result_symbol = BINARY_STAR_STAR;
									return true;
								} else if (valid_symbols[HASH_SPLAT_STAR_STAR] && !iswspace(lexer->lookahead)) {
									lexer->result_symbol = HASH_SPLAT_STAR_STAR;
									return true;
								} else if (valid_symbols[BINARY_STAR_STAR]) {
									lexer->result_symbol = BINARY_STAR_STAR;
									return true;
								} else if (valid_symbols[HASH_SPLAT_STAR_STAR]) {
									lexer->result_symbol = HASH_SPLAT_STAR_STAR;
									return true;
								} else {
									return false;
								}
							} else {
								return false;
							}
						} else {
							if (valid_symbols[BINARY_STAR] && !has_leading_whitespace) {
								lexer->result_symbol = BINARY_STAR;
								return true;
							} else if (valid_symbols[SPLAT_STAR] && !iswspace(lexer->lookahead)) {
								lexer->result_symbol = SPLAT_STAR;
								return true;
							} else if (valid_symbols[BINARY_STAR]) {
								lexer->result_symbol = BINARY_STAR;
								return true;
							} else if (valid_symbols[SPLAT_STAR]) {
								lexer->result_symbol = SPLAT_STAR;
								return true;
							} else {
								return false;
							}
						}
					}
					break;
	
				case '-':
					if (valid_symbols[UNARY_MINUS] || valid_symbols[UNARY_MINUS_NUM] || valid_symbols[BINARY_MINUS]) {
						advance(lexer);
						if (lexer->lookahead != '=' && lexer->lookahead != '>') {
							if (valid_symbols[UNARY_MINUS_NUM] && (!valid_symbols[BINARY_STAR] || has_leading_whitespace) && iswdigit(lexer->lookahead)) {
								lexer->result_symbol = UNARY_MINUS_NUM;
								return true;
							} else if (valid_symbols[UNARY_MINUS] && has_leading_whitespace && !iswspace(lexer->lookahead)) {
								lexer->result_symbol = UNARY_MINUS;
							} else if (valid_symbols[BINARY_MINUS]) {
								lexer->result_symbol = BINARY_MINUS;
							} else {
								lexer->result_symbol = UNARY_MINUS;
							}
							return true;
						} else {
							return false;
						}
					}
					break;
	
				case ':':
					if (valid_symbols[SYMBOL_START]) {
						Literal literal;
						literal.type = SYMBOL_START;
						literal.nesting_depth = 1;
						advance(lexer);
	
						switch (lexer->lookahead) {
							case '"':
								advance(lexer);
								literal.open_delimiter = '"';
								literal.close_delimiter = '"';
								literal.allows_interpolation = true;
								literal_stack.push_back(literal);
								lexer->result_symbol = SYMBOL_START;
								return true;
	
							case '\'':
								advance(lexer);
								literal.open_delimiter = '\'';
								literal.close_delimiter = '\'';
								literal.allows_interpolation = false;
								literal_stack.push_back(literal);
								lexer->result_symbol = SYMBOL_START;
								return true;
	
							default:
								if (scan_symbol_identifier(lexer)) {
									lexer->result_symbol = SIMPLE_SYMBOL;
									return true;
								}
						}
	
						return false;
					}
					break;
	
				case '[':
					// Treat a square bracket as an element reference if either:
					// * the bracket is not preceded by any whitespace
					// * an arbitrary expression is not valid at the current position.
					if (valid_symbols[ELEMENT_REFERENCE_BRACKET] && (!has_leading_whitespace ||
																													 !valid_symbols[STRING_START])) {
						advance(lexer);
						lexer->result_symbol = ELEMENT_REFERENCE_BRACKET;
						return true;
					}
					break;
	
				default:
					break;
			}
	
			// Open delimiters for literals
			if ((valid_symbols[HASH_KEY_SYMBOL] || valid_symbols[IDENTIFIER_SUFFIX]) && (iswalpha(lexer->lookahead) || lexer->lookahead == '_') ||
					valid_symbols[CONSTANT_SUFFIX] && iswupper(lexer->lookahead)) {
				TokenType validIdentifierSymbol = iswupper(lexer->lookahead) ? CONSTANT_SUFFIX : IDENTIFIER_SUFFIX;
				char word[8];
				int index = 0;
				while (iswalnum(lexer->lookahead) || lexer->lookahead == '_') {
					if (index < 8) {
						word[index] = lexer->lookahead;
					}
					index++;
					advance(lexer);
				}
	
				if (valid_symbols[HASH_KEY_SYMBOL] && lexer->lookahead == ':') {
					lexer->mark_end(lexer);
					advance(lexer);
					if (lexer->lookahead != ':') {
						lexer->result_symbol = HASH_KEY_SYMBOL;
						return true;
					}
				} else if (valid_symbols[validIdentifierSymbol] && lexer->lookahead == '!') {
					advance(lexer);
					if (lexer->lookahead != '=') {
						lexer->result_symbol = validIdentifierSymbol;
						return true;
					}
				}
	
				return false;
			}
	
			// Open delimiters for literals
			if (valid_symbols[STRING_START]) {
				Literal literal;
				literal.nesting_depth = 1;
	
				if (lexer->lookahead == '<') {
					advance(lexer);
					if (lexer->lookahead != '<')
						return false;
					advance(lexer);
	
					Heredoc heredoc;
					if (lexer->lookahead == '-' || lexer->lookahead == '~') {
						advance(lexer);
						heredoc.end_word_indentation_allowed = true;
					}
	
					scan_heredoc_word(lexer, &heredoc);
					if (heredoc.word.empty())
						return false;
					open_heredocs.push_back(heredoc);
					lexer->result_symbol = HEREDOC_START;
					return true;
				}
	
				if (scan_open_delimiter(lexer, literal, valid_symbols)) {
					literal_stack.push_back(literal);
					lexer->result_symbol = literal.type;
					return true;
				} else {
					return false;
				}
			}
	
			return false;
		}
	};
}

extern "C" {
	void *tree_sitter_codepatterns_external_scanner_create() {
		return new Scanner();
	}
	
	bool tree_sitter_codepatterns_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
		Scanner *scanner = static_cast<Scanner *>(payload);
		return scanner->scan(lexer, valid_symbols);
	}
	
	unsigned tree_sitter_codepatterns_external_scanner_serialize(void *payload, char *buffer) {
		Scanner *scanner = static_cast<Scanner *>(payload);
		return scanner->serialize(buffer);
	}
	
	void tree_sitter_codepatterns_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
		Scanner *scanner = static_cast<Scanner *>(payload);
		scanner->deserialize(buffer, length);
	}
	
	void tree_sitter_codepatterns_external_scanner_destroy(void *payload) {
		Scanner *scanner = static_cast<Scanner *>(payload);
		delete scanner;
	}
}
