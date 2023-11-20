module.exports = grammar({
	name: "codepatterns",
	
	extras: $ => [
		$._newlines,
		$._startLine,
	],
	
	rules: {
		query: $ => repeat($._token),
		
		_token: $ => choice(
			$.literal,
			$.regex,
			$.tsq,
			$.lines,
			$.replaceStart,
			$.replaceEnd,
		),
		
		regex: $ => seq($.regexLiteral, prec(1, optional($.captureLabel))),

		regexLiteral: $ => seq("/", $.regexPattern, "/", optional($.regexFlags)),
		
		regexPattern: $ => repeat1(choice(
			seq(
				"[",
				repeat(choice(
					seq("\\", /./), // escaped character
					/[^\]\n\\]/, // any character besides ']' or '\n'
				)),
				"]",
			), // square-bracket-delimited character class
			seq("\\", /./), // escaped character
			/[^/\\\[\n]/, // any character besides '[', '\', '/', '\n'
		)),
		
		regexFlags: $ => /[a-z]+/,
		
		lines: $ => seq(
			$._startLine,
			optional($._whitespace),
			seq(
				choice("*", "+"),
				optional("?"),
				optional($._whitespace),
				optional($.captureLabel),
			),
		),
		
		captureLabel: $ => seq("@", /[a-zA-Z]+/),
		
		replaceStart: $ => "[",
		replaceEnd: $ => "]",
		
		_whitespace: $ => /[ \t]+/,
		_newlines: $ => /[\r\n]+/,
	},
	
	externals: $ => [
		$.literal,
		$.tsq,
		$._startLine,
		$._errorSentinel,
	],
});
