note
	title: "Representation of an HTML <li> element."
	EIS: "name=specification", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#li"

class
	HTML_LI

inherit
	HTML_ELEMENT

feature -- Constants

	tag_name: STRING = "li"
			-- <Precursor>

feature -- Attribute: value

	value: detachable HTML_NUMERIC_ATTRIBUTE
			-- value = integer
			-- The ordinal value of the list item. Permitted only if the li
			--	element is a child of an ol element.
			-- The value attribute on the li element was deprecated in a previous
			--	version of HTML, but is no longer deprecated, as it has meaning
			--	and is not simply presentational.

	set_value (a_value: INTEGER)
			-- value = integer
			-- The ordinal value of the list item. Permitted only if the li
			--	element is a child of an ol element.
			-- The value attribute on the li element was deprecated in a previous
			--	version of HTML, but is no longer deprecated, as it has meaning
			--	and is not simply presentational.
		do
			create value.make_with_value ("value", a_value)
			check attached value as al_attribute then attributes.force (al_attribute) end
		end

end
