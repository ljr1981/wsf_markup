note
	title: "Representation of an HTML <tr> element."
	EIS: "name=specification", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#tr"
	admonitions: "[
		Additional constraints and admonitions
		The align attribute on the tr element is obsolete. Use CSS instead.
		The char attribute on the tr element is obsolete. Use CSS instead.
		The charoff attribute on the tr element is obsolete. Use CSS instead.
		The valign attribute on the tr element is obsolete. Use CSS instead.
		The bgcolor attribute on the tr element is obsolete. Use CSS instead.
		]"

class
	HTML_TR

inherit
	HTML_ELEMENT

feature -- Constants

	tag_name: STRING = "tr"
			-- <Precursor>

end
