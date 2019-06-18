note
	description: "[
		Eiffel tests that can be executed by testing tool.
	]"
	author: "EiffelStudio test wizard"
	date: "$Date$"
	revision: "$Revision$"
	testing: "type/manual"
	ca_ignore: "CA032", "CA032: very long routine"

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

	HTML_ELEMENT_FACTORY
		undefine
			default_create
		end

feature -- Test routines

	html_element_creation_test
			-- New test routine
		do
			new_html_with_head_and_body
			assert_strings_equal ("html_head_body", "<html><head/><body/></html>", last_html.html_out)

			new_title
			assert_strings_equal ("title", "<title/>", last_title.html_out)

			new_meta
			assert_strings_equal ("meta", "<meta/>", last_meta.html_out)

			new_div
			assert_strings_equal ("div", "<div/>", last_div.html_out)

			new_a
			assert_strings_equal ("a", "<a/>", last_a.html_out)

			new_hyperlink -- Equiv of <a>
			assert_strings_equal ("a", "<a/>", last_hyperlink.html_out)

			new_script
			assert_strings_equal ("script", "<script/>", last_script.html_out)

			new_link
			assert_strings_equal ("link", "<link/>", last_link.html_out)

			new_img
			assert_strings_equal ("img", "<img/>", last_img.html_out)

			new_p
			assert_strings_equal ("p", "<p/>", last_p.html_out)

			new_span
			assert_strings_equal ("span", "<span/>", last_span.html_out)

			new_li
			assert_strings_equal ("li", "<li/>", last_li.html_out)

			new_ul
			assert_strings_equal ("ul", "<ul/>", last_ul.html_out)

			new_br
			assert_strings_equal ("br", "<br/>", last_br.html_out)

			new_style
			assert_strings_equal ("style", "<style/>", last_style.html_out)

			new_h1
			assert_strings_equal ("h1", "<h1/>", last_h1.html_out)

			new_h2
			assert_strings_equal ("h2", "<h2/>", last_h2.html_out)

			new_input
			assert_strings_equal ("input", "<input/>", last_input.html_out)

			new_form
			assert_strings_equal ("form", "<form/>", last_form.html_out)

			new_h3
			assert_strings_equal ("h3", "<h3/>", last_h3.html_out)

			new_strong
			assert_strings_equal ("strong", "<strong/>", last_strong.html_out)

			new_table
			assert_strings_equal ("table", "<table/>", last_table.html_out)

			new_tbody
			assert_strings_equal ("tbody", "<tbody/>", last_tbody.html_out)

			new_tr
			assert_strings_equal ("tr", "<tr/>", last_tr.html_out)

			new_td
			assert_strings_equal ("td", "<td/>", last_td.html_out)
				-- The next are equivs of each other
			new_td_with_colspan (2)
			assert_strings_equal ("new_td_with_colspan", "<td colspan=2/>", last_td.html_out)
			td_with_colspan (2)
			assert_strings_equal ("td_with_colspan", "<td colspan=2/>", last_td.html_out)
			td.set_colspan (2)
			assert_strings_equal ("td_set_colspan", "<td colspan=2/>", last_td.html_out)

			new_main
			assert_strings_equal ("main", "<main/>", last_main.html_out)

			new_section
			assert_strings_equal ("section", "<section/>", last_section.html_out)

			new_header
			assert_strings_equal ("header", "<header/>", last_header.html_out)

			new_figure
			assert_strings_equal ("figure", "<figure/>", last_figure.html_out)

			new_figcaption
			assert_strings_equal ("figcaption", "<figcaption/>", last_figcaption.html_out)

			new_aside
			assert_strings_equal ("aside", "<aside/>", last_aside.html_out)

			new_article
			assert_strings_equal ("article", "<article/>", last_article.html_out)

			new_b
			assert_strings_equal ("b", "<b/>", last_b.html_out)

			new_del
			assert_strings_equal ("del", "<del/>", last_del.html_out)

			new_em
			assert_strings_equal ("em", "<em/>", last_em.html_out)

			new_i
			assert_strings_equal ("i", "<i/>", last_i.html_out)

			new_ins
			assert_strings_equal ("ins", "<ins/>", last_ins.html_out)

			new_mark
			assert_strings_equal ("mark", "<mark/>", last_mark.html_out)

			new_small
			assert_strings_equal ("small", "<small/>", last_small.html_out)

			new_sub
			assert_strings_equal ("sub", "<sub/>", last_sub.html_out)

			new_sup
			assert_strings_equal ("sup", "<sup/>", last_sup.html_out)

			new_raw_text
			assert_strings_equal ("raw_text", "", last_raw_text.html_out)
			last_raw_text.set_text ("hello_world")
			assert_strings_equal ("raw_text_hello_world", "hello_world", last_raw_text.html_out)
		end

	html_usage_tests
			-- Testing the experience of using this new HTML library.
		do
			new_html_with_head_and_body
			last_html.body.add_subelem (div)
			last_div.add_subelem (span)
			assert_strings_equal ("version_1", equiv_html_versions, last_html.html_out)
				-- Another take on the same thing
			new_html_with_head_and_body
			last_body.add_subelem (div)
			last_div.add_subelem (span)
			assert_strings_equal ("version_1", equiv_html_versions, last_html.html_out)
			assert_strings_equal ("prettified", equiv_html_prettified, last_html.prettified_html (0))
		end

	equiv_html_versions: STRING_32 = "[
<html><head/><body><div><span/></div></body></html>
]"

	equiv_html_prettified: STRING_32 = "[

<html>
	<head/>
	<body>
		<div>
			<span/>
		</div>
	</body>
</html>
]"

	html_script_tests
			-- tests of {HTML_SCRIPT}
		local
			l_script: HTML_SCRIPT
		do
			create l_script
			l_script.set_type ("javascript")
			assert_strings_equal ("type_is_javascript", "<script type=%"javascript%"/>", l_script.html_out)

			create l_script.make_with_type ("javascript")
			assert_strings_equal ("make_with_type_javascript", "<script type=%"javascript%"/>", l_script.html_out)

			create l_script.make_with_type_javascript
			assert_strings_equal ("make_with_type_javascript", "<script type=%"javascript%"/>", l_script.html_out)

		end

	text_with_inline_tag_embeds_test
			--
		do
				-- method 1 short
			new_div
			last_div.set_text (raw_text ("start text ") +
								em_text ("emphasized") +
								raw_text (" middle text ") +
								strong_text ("strong") +
								raw_text (" end text.")
								)
			assert_strings_equal ("embed_test_1", "<div>start text <em>emphasized</em> middle text <strong>strong</strong> end text.</div>", last_div.html_out)

				-- method 2 long
			new_div
			new_raw_text
			last_div.add_subelem (last_raw_text)
				last_raw_text.set_text ("start text ")
			new_em
			last_div.add_subelem (last_em)
				last_em.set_text ("emphasized")
			new_raw_text
			last_div.add_subelem (last_raw_text)
				last_raw_text.set_text (" middle text ")
			new_strong
			last_div.add_subelem (last_strong)
				last_strong.set_text ("strong")
			new_raw_text
			last_div.add_subelem (last_raw_text)
				last_raw_text.set_text (" end text.")
			assert_strings_equal ("embed_test_2", "<div>start text <em>emphasized</em> middle text <strong>strong</strong> end text.</div>", last_div.html_out)
		end

end


