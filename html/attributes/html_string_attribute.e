note
	description: "Representation of a STRING-based HTML_ATTRIBUTE"

class
	HTML_STRING_ATTRIBUTE

inherit
	HTML_ATTRIBUTE [STRING_32]

create
	make,
	make_with_value,
	make_with_values

feature -- Access

	quote: CHARACTER_32 = '"'
			-- <Precursor>

feature -- Output

	item_to_string_32 (a_item: STRING_32): STRING_32
			-- <Precursor>
		do
			Result := a_item
		end

end
