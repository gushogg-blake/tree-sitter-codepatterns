+ @lines

module.exports = (object
	(method_definition
		(property_identifier) @p
		(statement_block "{" (_)+ @initBody "}")
	) @-init
	.
	"," @-c
	(#eq? @p "init")
) @obj/;?/@test
