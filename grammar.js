module.exports = grammar({
	name: "codepatterns",
	
	extras: $ => [],
	
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
		
		regex: $ => seq($.regexLiteral, optional($.captureLabel)),

		regexLiteral: $ => seq(
			"/",
			field("pattern", $.regexPattern),
			token.immediate("/"),
			optional(field("flags", $.regexFlags)),
		),
		
		regexPattern: $ => token.immediate(prec(
			-1,
			repeat1(choice(
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
		)),
		
		regexFlags: $ => token.immediate(/[a-z]+/),
		
		lines: $ => choice(
			$.captureLabel,
			seq(
				choice("*", "+"),
				optional("?"),
				optional($._whitespace),
				optional($.captureLabel),
			),
		),
		
		captureLabel: $ => seq("@", token.immediate(/[a-zA-Z]+/)),
		
		replaceStart: $ => "[",
		replaceEnd: $ => "]",
	},
	
	externals: $ => [
		$.literal,
		$.tsq,
		$.errorSentinel,
	],
});
