note
	title: "Representation of an HTML <tbody> element."
	EIS: "name=specification", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#tbody"
	admonitions: "[
		Additional constraints and admonitions
		The align attribute on the tbody element is obsolete. Use CSS instead.
		The char attribute on the tbody element is obsolete. Use CSS instead.
		The charoff attribute on the tbody element is obsolete. Use CSS instead.
		The valign attribute on the tbody element is obsolete. Use CSS instead.
		]"

class
	HTML_TBODY

inherit
	HTML_ELEMENT

feature -- Constants

	tag_name: STRING = "tbody"
			-- <Precursor>

end
