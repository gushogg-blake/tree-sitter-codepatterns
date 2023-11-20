#include <tree_sitter/parser.h>

enum TokenType {
	LITERAL,
	REGEX,
	TSQ,
	REPLACE_START,
	REPLACE_END
}
