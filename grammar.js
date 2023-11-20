module.exports = grammar({
	name: "codepatterns",
	
	//extras: $ => [
	//	$._newlines,
	//],
	
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
		
		literal: $ => choice($._escape, /[^\\\/\[\]@\(]+/),
		
		_escape: $ => seq("\\", /./),
		
		//_lineQuantifier: $ => seq(
		//	$.lineQuantifier,
		//	optional($._whitespace),
		//	optional($.captureLabel),
		//),
		
		captureLabel: $ => seq("@", /[a-zA-Z]+/),
		
		replaceStart: $ => "[",
		replaceEnd: $ => "]",
		
		_whitespace: $ => /[ \t]+/,
		_newlines: $ => /[\r\n]+/,
	},
	
	externals: $ => [
		//$.literal,
		$.tsq,
		$.lineQuantifier,
		$.regex,
		$._errorSentinel,
	],
});
