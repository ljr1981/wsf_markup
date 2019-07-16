note
	title: "HTML style attribute"
	EIS: "src=https://www.w3schools.com/tags/att_style.asp"

class
	HTML_STYLE_ATTRIBUTE

inherit
	HTML_ATTRIBUTE [STRING_32]
		redefine
			key_value_separator
		end

create
	make,
	make_with_value,
	make_with_values

feature -- Constants

	quote: CHARACTER_32 = '%U'

	key_value_separator: CHARACTER_32
		do
			Result := ':'
		end

feature -- Output

	item_to_string_32 (a_item: STRING_32): STRING_32
			-- <Precursor>
		do
			Result := a_item
		end

end
