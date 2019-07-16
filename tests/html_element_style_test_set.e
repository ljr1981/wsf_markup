note
	description: "[
		Eiffel tests that can be executed by testing tool.
	]"
	author: "EiffelStudio test wizard"
	date: "$Date$"
	revision: "$Revision$"
	testing: "type/manual"

class
	HTML_ELEMENT_STYLE_TEST_SET

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

	HTML_ELEMENT_FACTORY
		undefine
			default_create
		end

feature -- Test routines

	html_element_style_test
			-- New test routine
		note
			testing:  "execution/isolated"
		do
			new_div
			last_div.style_attributes.force (create {HTML_STYLE_ATTRIBUTE}.make_with_value ("key-name", "value-value"), "key-name")
			assert_strings_equal ("style_key_value", style_key_value_string, last_div.html_out)
		end

feature -- Test routines: Support

	style_key_value_string: STRING_32 = "[
<div style="key-name:value-value;"/>
]"

end


