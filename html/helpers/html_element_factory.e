note
	title: "Representation of an HTML_ELEMENT Factory"
	purpose: "[
		This factory class facilitates features in an effort to
		speed or ease the create of elements and sub-elements.
		]"
	EIS: "name=html_stats", "src=https://css-tricks.com/average-web-page-data-analyzing-8-million-websites/"
	EIS: "name=detailed_html_stats", "src=https://www.advancedwebranking.com/html/"

class
	HTML_ELEMENT_FACTORY

feature -- Temporary HTML builder

	temp_element (a_tag_name: STRING; a_attributes: ARRAY [HTML_ATTRIBUTE [ANY]]): HTML_TEMP_ELEMENT
			-- A convenience function for creating HTML elements, which do not
			--	yet exists in the library.
		do
			create Result.make (a_tag_name)
			across
				a_attributes as ic
			loop
				Result.attributes.force (ic.item)
			end
		end
	last_temp: HTML_TEMP_ELEMENT attribute create Result end

feature -- <html>

	new_html do create last_html end
	new_html_with_head do create last_html.make_with_head end
	new_html_with_body do create last_html.make_with_body end
	new_html_with_head_and_body do create last_html.make_with_head_and_body; last_head := last_html.head; last_body := last_html.body end
	last_html: HTML_HTML attribute create Result end
	html: HTML_HTML do new_html; Result := last_html end

feature -- <head>

	new_head do create last_head end
	last_head: HTML_HEAD attribute create Result end
	head: HTML_HEAD do new_head; Result := last_head end

feature -- <body>

	new_body do create last_body end
	last_body: HTML_BODY attribute create Result end
	body: HTML_BODY do new_body; Result := last_body end

feature -- <title>

	new_title do create last_title end
	last_title: HTML_TITLE attribute create Result end
	title: HTML_TITLE do new_title; Result := last_title end

feature -- <meta>

	new_meta do create last_meta end
	last_meta: HTML_META attribute create Result end
	meta: HTML_META do new_meta; Result := last_meta end

feature -- <div>

	new_div do create last_div end
	last_div: HTML_DIV attribute create Result end
	div: HTML_DIV do new_div; Result := last_div end

feature -- <a>

	new_a do create last_a end
	new_hyperlink do create last_hyperlink end
	last_a: HTML_A attribute create Result end
	last_hyperlink: like last_a attribute Result := last_a end
	a: HTML_A do new_a; Result := last_a end
	hyperlink: HTML_A do new_a; Result := last_a end

feature -- <script>

	new_script do create last_script end
	last_script: HTML_SCRIPT attribute create Result end
	script: HTML_SCRIPT do new_script; Result := last_script end

feature -- <link>

	new_link do create last_link end
	last_link: HTML_LINK attribute create Result end
	link: HTML_LINK do new_link; Result := last_link end

feature -- <img>

	new_img do create last_img end
	last_img: HTML_IMG attribute create Result end
	img: HTML_IMG do new_img; Result := last_img end

feature -- <p>

	new_p do create last_p end
	last_p: HTML_P attribute create Result end
	p: HTML_P do new_p; Result := last_p end

feature -- <span>

	new_span do create last_span end
	last_span: HTML_SPAN attribute create Result end
	span: HTML_SPAN do new_span; Result := last_span end

feature -- <li>

	new_li do create last_li end
	last_li: HTML_LI attribute create Result end
	li: HTML_LI do new_li; Result := last_li end

feature -- <ul>

	new_ul do create last_ul end
	last_ul: HTML_UL attribute create Result end
	new_unordered_list do create last_ul end
	last_unordered_list: HTML_UL attribute Result := last_ul end
	ul: HTML_UL do new_ul; Result := last_ul end

feature -- <br>

	new_br do create last_br end
	last_br: HTML_BR attribute create Result end
	br: HTML_BR do new_br; Result := last_br end

feature -- <style>

	new_style do create last_style end
	last_style: HTML_STYLE attribute create Result end
	--style: HTML_STYLE do new_style; Result := last_style end

feature -- <h1>

	new_h1 do create last_h1 end
	last_h1: HTML_H1 attribute create Result end
	h1: HTML_H1 do new_h1; Result := last_h1 end

feature -- <h2>

	new_h2 do create last_h2 end
	last_h2: HTML_H2 attribute create Result end
	h2: HTML_H2 do new_h2; Result := last_h2 end

feature -- <input>

	new_input do create last_input end
	last_input: HTML_INPUT attribute create Result end
	input: HTML_INPUT do new_input; Result := last_input end

feature -- <form>

	new_form do create last_form end
	last_form: HTML_FORM attribute create Result end
	form: HTML_FORM do new_form; Result := last_form end

feature -- <h3>

	new_h3 do create last_h3 end
	last_h3: HTML_H3 attribute create Result end
	h3: HTML_H3 do new_h3; Result := last_h3 end

feature -- <strong>

	new_strong do create last_strong end
	last_strong: HTML_STRONG attribute create Result end
	strong: HTML_STRONG do new_strong; Result := last_strong end

feature -- <table>

	new_table do create last_table end
	last_table: HTML_TABLE attribute create Result end
	table: HTML_TABLE do new_table; Result := last_table end

feature -- <tbody>

	new_tbody do create last_tbody end
	last_tbody: HTML_TBODY attribute create Result end
	tbody: HTML_TBODY do new_tbody; Result := last_tbody end

feature -- <tr>

	new_tr do create last_tr end
	last_tr: HTML_TR attribute create Result end
	tr: HTML_TR do new_tr; Result := last_tr end

feature -- <td>

	new_td do create last_td end
	new_td_with_colspan (a_value: INTEGER) do create last_td.make_with_colspan (a_value) end
	new_td_with_rowspan (a_value: INTEGER) do create last_td.make_with_rowspan (a_value) end
	new_td_with_col_row_spans (a_colspan, a_rowspan: INTEGER) do create last_td.make_with_col_row_spans (a_colspan, a_rowspan) end
	last_td: HTML_TD attribute create Result end
	td: HTML_TD do new_td; Result := last_td end
	td_with_colspan (a_value: INTEGER) do create last_td.make_with_colspan (a_value) end
	td_with_rowspan (a_value: INTEGER) do create last_td.make_with_rowspan (a_value) end
	td_with_col_row_spans (a_colspan, a_rowspan: INTEGER) do create last_td.make_with_col_row_spans (a_colspan, a_rowspan) end

feature -- <main>

	new_main do create last_main end
	last_main: HTML_MAIN attribute create Result end
	main: HTML_MAIN do new_main; Result := last_main end

feature -- <section>

	new_section do create last_section end
	last_section: HTML_SECTION attribute create Result end
	section: HTML_SECTION do new_section; Result := last_section end

end
