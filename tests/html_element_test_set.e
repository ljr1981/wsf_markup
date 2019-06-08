note
	description: "[
		Eiffel tests that can be executed by testing tool.
	]"
	author: "EiffelStudio test wizard"
	date: "$Date$"
	revision: "$Revision$"
	testing: "type/manual"

class
	HTML_ELEMENT_TEST_SET

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

	HTML_FACTORY
		undefine
			default_create
		end

feature -- Test routines

	html_element_creation_test
			-- New test routine
		do
			new_html_with_head_and_body
			assert_strings_equal ("html_head_body", "<html><head></head><body></body></html>", last_html.html_out)

			new_title
			assert_strings_equal ("title", "<title></title>", last_title.html_out)

			new_meta
			assert_strings_equal ("meta", "<meta></meta>", last_meta.html_out)

			new_div
			assert_strings_equal ("div", "<div></div>", last_div.html_out)

			new_a
			assert_strings_equal ("a", "<a></a>", last_a.html_out)

			new_hyperlink -- Equiv of <a>
			assert_strings_equal ("a", "<a></a>", last_hyperlink.html_out)

			new_script
			assert_strings_equal ("script", "<script></script>", last_script.html_out)

			new_link
			assert_strings_equal ("link", "<link></link>", last_link.html_out)

			new_img
			assert_strings_equal ("img", "<img></img>", last_img.html_out)

			new_p
			assert_strings_equal ("p", "<p></p>", last_p.html_out)

			new_span
			assert_strings_equal ("span", "<span></span>", last_span.html_out)

			new_li
			assert_strings_equal ("li", "<li></li>", last_li.html_out)

			new_ul
			assert_strings_equal ("ul", "<ul></ul>", last_ul.html_out)
		end

end


