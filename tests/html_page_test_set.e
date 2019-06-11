note
	description: "[
		Eiffel tests that can be executed by testing tool.
	]"
	author: "EiffelStudio test wizard"
	date: "$Date$"
	revision: "$Revision$"
	testing: "type/manual"

class
	HTML_PAGE_TEST_SET

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

	html_page_test_1
			-- New test routine
		note
			testing:  "execution/isolated"
		local
			l_file: PLAIN_TEXT_FILE
		do
			new_html_with_head_and_body
			last_head.add_subelem (meta)
				last_meta.set_lang ("eng")
			last_body.add_subelem (div)
				last_div.set_text ("Hello World!")

			create l_file.make_open_write ("test_page_1.html")
			l_file.put_string (last_html.html_out)
			l_file.close
		end

end
