module.exports = grammar({
	name: "codepatterns",
	
	rules: {
		query: $ => repeat($._token),
		
		_token: $ => choice(
			$.literal,
			$.captureLabel,
			$.regex,
			$.tsq,
			$.lineQuantifier,
			$.replaceStart,
			$.replaceEnd,
		),
		
		literal: $ => choice($._escape, $._emptyRegex, /[^\\\/\[\]@\(]+/),
		
		_escape: $ => seq("\\", /./),
		
		captureLabel: $ => seq("@", /[a-zA-Z]+/),
		
		replaceStart: $ => "[",
		replaceEnd: $ => "]",
		
		_whitespace: $ => /[ \t]+/,
		_newlines: $ => /[\r\n]+/,
	},
	
	externals: $ => [
		$.lineQuantifier,
		$.regex,
		$._emptyRegex,
		$.tsq,
		$._errorSentinel,
	],
});
