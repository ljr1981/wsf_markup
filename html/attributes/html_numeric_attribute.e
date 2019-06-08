note
	description: "Representation of an NUMERIC-based HTML_ATTRIBUTE"

class
	HTML_NUMERIC_ATTRIBUTE

inherit
	HTML_ATTRIBUTE [NUMERIC]

create
	make,
	make_with_value,
	make_with_values

feature -- Access

	quote: CHARACTER_32 = '%U'
			-- <Precursor>

feature -- Output

	item_to_string_32 (a_item: NUMERIC): STRING_32
			-- <Precursor>
		do
			Result := a_item.out.to_string_32
		end

end
