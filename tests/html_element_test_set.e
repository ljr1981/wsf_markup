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

			new_br
			assert_strings_equal ("br", "<br></br>", last_br.html_out)

			new_style
			assert_strings_equal ("style", "<style></style>", last_style.html_out)

			new_h1
			assert_strings_equal ("h1", "<h1></h1>", last_h1.html_out)

			new_h2
			assert_strings_equal ("h2", "<h2></h2>", last_h2.html_out)

			new_input
			assert_strings_equal ("input", "<input></input>", last_input.html_out)

			new_form
			assert_strings_equal ("form", "<form></form>", last_form.html_out)

			new_h3
			assert_strings_equal ("h3", "<h3></h3>", last_h3.html_out)

			new_strong
			assert_strings_equal ("strong", "<strong></strong>", last_strong.html_out)

			new_table
			assert_strings_equal ("table", "<table></table>", last_table.html_out)

			new_tbody
			assert_strings_equal ("tbody", "<tbody></tbody>", last_tbody.html_out)
		end

	html_script_tests
			-- tests of {HTML_SCRIPT}
		local
			l_script: HTML_SCRIPT
		do
			create l_script
			l_script.set_type ("javascript")
			assert_strings_equal ("type_is_javascript", "<script type=%"javascript%"></script>", l_script.html_out)

			create l_script.make_with_type ("javascript")
			assert_strings_equal ("make_with_type_javascript", "<script type=%"javascript%"></script>", l_script.html_out)

			create l_script.make_with_type_javascript
			assert_strings_equal ("make_with_type_javascript", "<script type=%"javascript%"></script>", l_script.html_out)

		end

end


