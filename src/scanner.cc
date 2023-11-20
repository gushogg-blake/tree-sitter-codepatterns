#include <tree_sitter/parser.h>

#include <cstring>
#include <cwctype>
#include <string>
#include <vector>
#include <iostream>

namespace {
	using std::string;
	using std::vector;
	using std::cout;
	
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
		
		void advance(TSLexer *lexer) {
			cout << lexer->lookahead << '\n';
			lexer->advance(lexer, false);
			cout << lexer->lookahead << '\n';
		}
		
		void skipWhitespace(TSLexer *lexer) {
			while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
				advance(lexer);
			}
		}
		
		void consumeQueryQuantifier(TSLexer *lexer) {
			if (lexer->lookahead == '?' || lexer->lookahead == '*' || lexer->lookahead == '+') {
				advance(lexer);
			}
		}
		
		void consumeCaptureLabel(TSLexer *lexer) {
			if (lexer->lookahead == '@') {
				advance(lexer);
				
				if (lexer->lookahead == '-') {
					advance(lexer);
				}
				
				while (isalpha(lexer->lookahead)) {
					advance(lexer);
				}
			}
		}
		
		bool scanLiteral(TSLexer *lexer) {
			// if at start of line, check for line quantifier
			
			if (lexer->get_column(lexer) == 0) {
				skipWhitespace(lexer);
				
				if (lexer->lookahead == '*' || lexer->lookahead == '+') {
					return false;
				}
			}
			
			bool matched = false;
			
			for (;;) {
				if (lexer->lookahead == '\\') {
					matched = true;
					advance(lexer);
					if (lexer->eof(lexer)) {
						goto end;
					}
					advance(lexer);
				} else if (
					lexer->lookahead == '/'
					|| lexer->lookahead == '('
					|| lexer->lookahead == '['
					|| lexer->lookahead == ']'
					|| lexer->lookahead == '\r'
					|| lexer->lookahead == '\n'
					|| lexer->eof(lexer)
				) {
					goto end;
				} else {
					matched = true;
					advance(lexer);
				}
			}
			
			end: ;
			
			return matched;
		}
		
		bool scanQuery(TSLexer *lexer) {
			if (lexer->lookahead != '(') return false;
			
			advance(lexer);
			
			unsigned openBrackets = 1;
			
			for (;;) {
				if (lexer->eof(lexer)) goto end;
				cout << "query\n";
				
				if (lexer->lookahead == '(') {
					openBrackets++;
					advance(lexer);
				} else if (lexer->lookahead == ')') {
					openBrackets--;
					advance(lexer);
					
					if (openBrackets == 0) {
						//consumeQueryQuantifier(lexer);
						lexer->mark_end(lexer);
						//skipWhitespace(lexer);
						//consumeCaptureLabel(lexer);
					}
				} else if (lexer->lookahead == ';') {
					advance(lexer);
					while (!lexer->eof(lexer) && lexer->lookahead != '\r' && lexer->lookahead != '\n') advance(lexer);
				} else if (lexer->lookahead == '"') {
					advance(lexer);
					
					for (;;) {
						if (lexer->eof(lexer)) return false;
						
						if (lexer->lookahead == '\\') {
							advance(lexer);
							if (lexer->eof(lexer)) return false;
							advance(lexer);
						} else if (lexer->lookahead == '"' || lexer->lookahead == '\r' || lexer->lookahead == '\n') {
							advance(lexer);
							break;
						} else {
							advance(lexer);
						}
					}
				} else {
					advance(lexer);
				}
			}
			
			end: ;
			
			cout << "parsed query\n";
			
			return openBrackets == 0;
		}
		
		bool scan(TSLexer *lexer, const bool *valid_symbols) {
			if (valid_symbols[LITERAL] && scanLiteral(lexer)) {
				lexer->result_symbol = LITERAL;
				return true;
			} else if (valid_symbols[TSQ] && scanQuery(lexer)) {
				lexer->result_symbol = TSQ;
				return true;
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
