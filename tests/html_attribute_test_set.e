note
	description: "[
		Eiffel tests that can be executed by testing tool.
	]"
	author: "EiffelStudio test wizard"
	date: "$Date$"
	revision: "$Revision$"
	testing: "type/manual"

class
	HTML_ATTRIBUTE_TEST_SET

inherit
	EQA_TEST_SET
		rename
			assert as assert_old
		end

	EQA_COMMONLY_USED_ASSERTIONS
		undefine
			default_create
		end

	TEST_SET_BRIDGE
		undefine
			default_create
		end

feature -- Test routines

	html_attribute_test
			-- New test routine
		local
			l_attribute: HTML_ATTRIBUTE [ANY]
		do
				-- Make with name only
			create {HTML_STRING_ATTRIBUTE} l_attribute.make ("attribute")
			assert_strings_equal ("make_string", {STRING_32} "attribute=%"%"", l_attribute.attribute_out)
			create {HTML_NUMERIC_ATTRIBUTE} l_attribute.make ("attribute")
			assert_strings_equal ("make_numeric", {STRING_32} "attribute=", l_attribute.attribute_out)
			create {HTML_BOOLEAN_ATTRIBUTE} l_attribute.make ("attribute")
			assert_strings_equal ("make_boolean", {STRING_32} "attribute=%"%"", l_attribute.attribute_out)

				-- Make with value(s)
			create {HTML_STRING_ATTRIBUTE} l_attribute.make_with_value ("attribute", "blah")
			assert_strings_equal ("make_with_text_value", {STRING_32} "attribute=%"blah%"", l_attribute.attribute_out)
			create {HTML_NUMERIC_ATTRIBUTE} l_attribute.make_with_value ("attribute", 100)
			assert_strings_equal ("make_with_integer_value", {STRING_32} "attribute=100", l_attribute.attribute_out)
			create {HTML_BOOLEAN_ATTRIBUTE} l_attribute.make_with_value ("attribute", True)
			assert_strings_equal ("make_with_boolean_value", {STRING_32} "attribute=%"true%"", l_attribute.attribute_out)

				-- Add values
			create {HTML_STRING_ATTRIBUTE} l_attribute.make_with_value ("attribute", "blah1")
			assert_strings_equal ("blah1", {STRING_32} "attribute=%"blah1%"", l_attribute.attribute_out)
			l_attribute.add_value ("blah2")
			assert_strings_equal ("blah2", {STRING_32} "attribute=%"blah1 blah2%"", l_attribute.attribute_out)

				-- Resets and adds
			l_attribute.reset_values
			assert_strings_equal ("reset_to_empty", {STRING_32} "attribute=%"%"", l_attribute.attribute_out)
			l_attribute.add_values (<<"blahx", "blahy">>)
			assert_strings_equal ("blahx_blahy", {STRING_32} "attribute=%"blahx blahy%"", l_attribute.attribute_out)
			l_attribute.add_values_with_reset (<<"blaha", "blahb">>)
			assert_strings_equal ("blaha_blahb", {STRING_32} "attribute=%"blaha blahb%"", l_attribute.attribute_out)

				-- Unique
			l_attribute.add_unique_value ("blaha")
			assert_strings_equal ("unique_blaha_blahb", {STRING_32} "attribute=%"blaha blahb%"", l_attribute.attribute_out)

				-- Creations with list of values
			create {HTML_STRING_ATTRIBUTE} l_attribute.make_with_values ("attribute", <<"blahx", "blahy">>)
			assert_strings_equal ("creation_from_list", {STRING_32} "attribute=%"blahx blahy%"", l_attribute.attribute_out)
		end

end


