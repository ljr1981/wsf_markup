note
	title: "Representation of an HTML_ELEMENT Factory"
	purpose: "[
		This factory class facilitates features in an effort to
		speed or ease the create of elements and sub-elements.
		]"

class
	HTML_FACTORY

feature -- <html>

	new_html do create last_html end
	new_html_with_head do create last_html.make_with_head end
	new_html_with_body do create last_html.make_with_body end
	new_html_with_head_and_body do create last_html.make_with_head_and_body end
	last_html: HTML_HTML attribute create Result end

feature -- <head>

	new_head do create last_head end
	last_head: HTML_HEAD attribute create Result end

feature -- <body>

	new_body do create last_body end
	last_body: HTML_BODY attribute create Result end

feature -- <title>

	new_title do create last_title end
	last_title: HTML_TITLE attribute create Result end

feature -- <meta>

	new_meta do create last_meta end
	last_meta: HTML_META attribute create Result end

feature -- <div>

	new_div do create last_div end
	last_div: HTML_DIV attribute create Result end

feature -- <a>

	new_a do create last_a end
	new_hyperlink do create last_hyperlink end
	last_a: HTML_A attribute create Result end
	last_hyperlink: like last_a attribute Result := last_a end

end
