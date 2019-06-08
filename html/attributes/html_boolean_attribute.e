note
	description: "Representation of a BOOLEAN-based HTML_ATTRIBUTE"

class
	HTML_BOOLEAN_ATTRIBUTE

inherit
	HTML_ATTRIBUTE [BOOLEAN]

create
	make,
	make_with_value,
	make_with_values

feature -- Access

	quote: CHARACTER_32 = '"'
			-- <Precursor>

feature -- Output

	item_to_string_32 (a_item: BOOLEAN): STRING_32
			-- <Precursor>
		do
			Result := a_item.out.to_string_32
			Result.to_lower
		end

end
