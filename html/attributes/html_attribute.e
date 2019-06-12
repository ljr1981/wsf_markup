note
	title: "Attribute of an HTML_ELEMENT"
	description: "[
		All HTML Elements have at least global attributes (see EIS link below).
		This class describes the structure and output of a single attribute
		for the following purposes:
		
		1. Attachment to an HTML Element
		2. Naming the attributes
		3. Supplying values to the attribute
		4. Modifying values set on the attribute
		5. Outputting the attribute as it appears in well-formed HTML
		
		For example: <DIV contenteditable=true> ... </DIV>
		
		Where the "contenteditable" attribute is specified by an instance
		of this class and then output into the HTML output stream and
		then sent to the concuming client device on the network.
		]"
	EIS: "name=html_element_specification", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#global-attributes"

deferred class
	HTML_ATTRIBUTE [G]

inherit
	HTML_ELEMENT_FACTORY

feature {NONE} -- Initialization

	make (a_name: like name)
			-- Initialize Current with `a_name' only (no values (yet)).
		require
			has_name: not a_name.is_empty
		do
			name := a_name
		ensure
			name_set: name.same_string (a_name)
		end

	make_with_value (a_name: like name; a_value: G)
			-- Initialize Current with `a_name' and `a_value'.
		do
			make (a_name)
			values.force (a_value)
		ensure
			name_set: name.same_string (a_name)
			value_set: values.has (a_value)
		end

	make_with_values (a_name: like name; a_values: ARRAY [G])
			-- Initialize Current with `a_name' and items in `a_values'.
		do
			make (a_name)
			across
				a_values as ic
			loop
				values.force (ic.item)
			end
		ensure
			has_values: across
				a_values as ic
			all
				across
					values as ic_values
				some
					item_to_string_32 (ic.item).same_string (item_to_string_32 (ic_values.item))
				end
			end
		end

feature -- Access

	name: STRING
			-- Name of Current.

	values: ARRAYED_LIST [G]
			-- List of values of Current.
		attribute
			create Result.make (5)
		end

	quote: CHARACTER_32
			-- Quote character
		deferred
		end

feature -- Settings

	reset_values
			-- Remove all items from `values'
		do
			values.wipe_out
		end

	add_value (a_value: G)
			-- `add_value' in `a_value' to `values' list.
		do
			values.force (a_value)
		ensure
			set: values.has (a_value)
		end

	add_unique_value (a_value: G)
			-- Only `add_unique_value' of `a_value' to `values'.
			-- (non-unique `a_value' items are not added)
		do
			if across values as ic
				all
					attached ic.item as al_item and then
						not item_to_string_32 (al_item).same_string (item_to_string_32 (a_value))
				end
			then
				add_value (a_value)
			end
		end

	add_values (a_values: ARRAY [G])
			-- `add_values' in `a_values' to items already in `values'.
		do
			across
				a_values as ic_list
			loop
				add_value (ic_list.item)
			end
		ensure
			added: across a_values as ic all values.has (ic.item) end
		end

	add_values_with_reset (a_values: ARRAY [G])
			-- Do `reset_values' and then `add_values' in `a_values'.
		do
			reset_values
			add_values (a_values)
		end

feature -- Output

	attribute_out: STRING_32
			-- Output of Current
		do
			create Result.make_empty
			Result.append_string_general (name.to_string_32)
			Result.append_character ({CHARACTER_32} '=')
			if attached quote as al_quote and then al_quote /= '%U' then
				Result.append_character (al_quote)
				Result.append_string_general (value_out)
				Result.append_character (al_quote)
			else
				Result.append_string_general (value_out)
			end
		end

	value_out: STRING_32
			-- Output of `values' as STRING_32.
		do
			create Result.make_empty
			across
				values as ic_list
			loop
				Result.append_string_general (item_to_string_32 (ic_list.item))
				if not ic_list.is_last then
					Result.append_character (' ')
				end
			end
		end

	item_to_string_32 (a_item: G): STRING_32
			-- Convert `item_to_string_32'
		deferred
		end

invariant
	never_empty: not name.is_empty

end
