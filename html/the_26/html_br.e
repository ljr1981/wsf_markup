note
	title: "Representation of an HTML <br> element."
	EIS: "name=specification", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#br"

class
	HTML_BR

inherit
	HTML_ELEMENT

feature -- Constants

	tag_name: STRING = "br"
			-- <Precursor>

note
	other: "[
		Additional constraints and admonitions
		The clear attribute on the br element is obsolete. Use CSS instead.
		
		Tag omission
		The br element is a void element. A br element must have a start tag but must not have an end tag.

		Permitted parent elements
		Any element that can contain phrasing elements
		]"

end
