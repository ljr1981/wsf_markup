note
	title: "Representation of a <head> element"
	purpose: "[
		The head element collects the document’s metadata.

		Permitted contents
		One title element, intermixed with an optional base element, intermixed with metadata elements

		Permitted attributes
		ⓘ global attributes
		
		Any attributes permitted globally.
		
		Additional constraints and admonitions
		The profile attribute on the head element is obsolete. To declare which meta element terms are 
		used in the document, instead register the names as meta extensions. To trigger specific UA 
		behaviors, use a link element instead.
		
		Tag omission
		A head element’s start tag may be omitted if the first thing inside the head element is an element.

		A head element’s end tag may be omitted if the head element is not immediately followed by a
		space character or a comment.

		Permitted parent elements
		html
		]"
	EIS: "name=specification", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#head"
	EIS: "name=schools", "src=https://www.w3schools.com/html/html_head.asp"

class
	HTML_HEAD

inherit
	HTML_ELEMENT

feature -- Constants

	tag_name: STRING = "head"
			-- <Precursor>

end
