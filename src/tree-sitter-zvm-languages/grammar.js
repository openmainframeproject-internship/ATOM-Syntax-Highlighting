module.exports = grammar({
    name: 'zvm_languages',
    rules: {
        source_file: $ => repeat($._definition),

        _definition: $ => choice(
            $.line_too_long_rule
            // $.sequence_number_rule,
            // $.register_variable_rule,
            // $.register_equate_rule,
            // $.single_quoted_string_rule,
            // $.uncontinued_comment_rule
        ),

        line_too_long_rule: $ => seq(
            '.*(?<=.{72})(([^0-9 \\r\\n]+)|([0-9 \\r\\n]{8}.+))'
        )
    }
});
