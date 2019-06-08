note
	title: "Representation of an HTML <body> element."
	description: "[
		The body element represents the body of a document (as opposed to the document’s metadata).

		Permitted contents
		Flow content

		Permitted attributes
		global attributes & onafterprint & onbeforeprint & onbeforeunload & onblur & onerror & onfocus 
							& onhashchange & onload & onmessage & onoffline & ononline & onpopstate 
							& onresize & onstorage & onunload
		]"
	EIS: "name=specification", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#body"

class
	HTML_BODY

inherit
	HTML_ELEMENT

feature -- Constants

	tag_name: STRING = "body"
			-- <Precursor>

end
