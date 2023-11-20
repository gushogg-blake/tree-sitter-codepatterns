#include <tree_sitter/parser.h>

#include <cstring>
#include <cwctype>
#include <string>
#include <vector>
//#include <iostream>

namespace {
	using std::string;
	using std::vector;
	//using std::cout;
	
	enum TokenType {
		LINE_QUANTIFIER,
		REGEX,
		TSQ,
		ERROR_SENTINEL,
	};
	
	struct Scanner {
		unsigned serialize(char *buffer) {
			return 0;
		}
	
		void deserialize(const char *buffer, unsigned length) {}
		
		void skip(TSLexer *lexer) {
			lexer->advance(lexer, true);
		}
		
		void advance(TSLexer *lexer) {
			lexer->advance(lexer, false);
		}
		
		void skipWhitespace(TSLexer *lexer) {
			while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
				skip(lexer);
			}
		}
		
		void consumeWhitespace(TSLexer *lexer) {
			while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
				advance(lexer);
			}
		}
		
		bool consumeQueryQuantifier(TSLexer *lexer) {
			if (lexer->lookahead == '?' || lexer->lookahead == '*' || lexer->lookahead == '+') {
				advance(lexer);
				
				return true;
			}
			
			return false;
		}
		
		bool eol(TSLexer *lexer) {
			return eof(lexer) || lexer->lookahead == '\r' || lexer->lookahead == '\n';
		}
		
		bool eof(TSLexer *lexer) {
			return lexer->eof(lexer);
		}
		
		void markEnd(TSLexer *lexer) {
			lexer->mark_end(lexer);
		}
		
		unsigned getColumn(TSLexer *lexer) {
			return lexer->get_column(lexer);
		}
		
		bool scanRegex(TSLexer *lexer) {
			if (lexer->lookahead != '/') {
				return false;
			}
			
			bool inClass = false;
			
			advance(lexer);
			
			for (;;) {
				if (eol(lexer)) return false;
				
				if (lexer->lookahead == '\\') {
					advance(lexer);
					if (eol(lexer)) return false;
					advance(lexer);
				} else if (lexer->lookahead == '[') {
					advance(lexer);
					inClass = true;
				} else if (lexer->lookahead == ']') {
					advance(lexer);
					inClass = false;
				} else if (!inClass && lexer->lookahead == '/') {
					advance(lexer);
					break;
				} else {
					advance(lexer);
				}
			}
			
			while (
				lexer->lookahead == 'i'
				|| lexer->lookahead == 'u'
				|| lexer->lookahead == 'v'
			) {
				advance(lexer);
			}
			
			return true;
		}
		
		bool scanQuery(TSLexer *lexer) {
			if (lexer->lookahead != '(') return false;
			
			advance(lexer);
			
			unsigned openBrackets = 1;
			
			//cout << "q\n";
			
			for (;;) {
				if (eof(lexer)) goto end;
				
				if (lexer->lookahead == '(') {
					openBrackets++;
					advance(lexer);
				} else if (lexer->lookahead == ')') {
					openBrackets--;
					advance(lexer);
					
					if (openBrackets == 0) {
						consumeQueryQuantifier(lexer);
						
						return true;
					}
				} else if (lexer->lookahead == ';') {
					advance(lexer);
					while (!eof(lexer) && lexer->lookahead != '\r' && lexer->lookahead != '\n') advance(lexer);
				} else if (lexer->lookahead == '"') {
					advance(lexer);
					
					for (;;) {
						if (eof(lexer)) return false;
						
						if (lexer->lookahead == '\\') {
							advance(lexer);
							if (eof(lexer)) return false;
							advance(lexer);
						} else if (lexer->lookahead == '"' || eol(lexer)) {
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
			
			return false;
		}
		
		bool scanLineQuantifier(TSLexer *lexer) {
			//cout << "start line?\n";
			if (getColumn(lexer) != 0) {
				return false;
			}
			
			skipWhitespace(lexer);
			
			if (lexer->lookahead == '*' || lexer->lookahead == '+') {
				advance(lexer);
				
				if (lexer->lookahead == '?') {
					advance(lexer);
				}
				
				return true;
			}
			
			return false;
		}
		
		bool scan(TSLexer *lexer, const bool *valid_symbols) {
			if (valid_symbols[LINE_QUANTIFIER] && scanLineQuantifier(lexer)) {
				lexer->result_symbol = LINE_QUANTIFIER;
				return true;
			} else if (valid_symbols[REGEX] && scanRegex(lexer)) {
				lexer->result_symbol = REGEX;
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
