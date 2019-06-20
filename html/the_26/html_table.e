note
	title: "Representation of an HTML <table> element."
	EIS: "name=specification", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#table"

class
	HTML_TABLE

inherit
	HTML_ELEMENT

feature -- Constants

	tag_name: STRING = "table"
			-- <Precursor>

feature -- Attributes: border

	border: detachable HTML_STRING_ATTRIBUTE
			-- border = string
			--	Indicates that its table element is not being used for layout purposes.

	set_border (a_value: STRING_32)
			-- border = string
			--	Indicates that its table element is not being used for layout purposes.
		require
			not_empty: not a_value.is_empty
		do
			create border.make_with_value ("border", a_value)
			check attached border as al_attribute then attributes.force (al_attribute, "border") end
		end

end
