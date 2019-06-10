note
	title: "Representation of an HTML <td> element."
	EIS: "name=specification", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#td"

class
	HTML_TD

inherit
	HTML_ELEMENT

feature -- Constants

	tag_name: STRING = "td"
			-- <Precursor>

feature -- Attributes: colspan

	colspan: detachable HTML_NUMERIC_ATTRIBUTE
			-- colspan = positive integer
			--	Specifies the number of adjacent columns “spanned” by its td element.

	set_colspan (a_value: INTEGER)
			-- colspan = positive integer
			--	Specifies the number of adjacent columns “spanned” by its td element.
		require
			non_negative: a_value > 0
		do
			create colspan.make_with_value ("colspan", a_value)
			check attached colspan as al_attribute then attributes.force (al_attribute) end
		end

feature -- Attributes: rowspan


	rowspan: detachable HTML_NUMERIC_ATTRIBUTE
			-- rowspan = non-negative integer
			--	Specifies the number of following rows “spanned” by its td element.

	set_rowspan (a_value: INTEGER)
			-- rowspan = non-negative integer
			--	Specifies the number of following rows “spanned” by its td element.
		require
			non_negative: a_value > 0
		do
			create rowspan.make_with_value ("rowspan", a_value)
			check attached rowspan as al_attribute then attributes.force (al_attribute) end
		end

feature -- Attributes: headers

	headers: detachable HTML_STRING_ATTRIBUTE
			-- headers = list of ID references
			--	Identifies one or more th elements that apply to its td.
			--	An unordered set of unique space-separated tokens, each of which is an ID reference.

	set_headers (a_values: ARRAY [STRING_32])
			-- headers = list of ID references
			--	Identifies one or more th elements that apply to its td.
			--	An unordered set of unique space-separated tokens, each of which is an ID reference.
		require
			not_empty: not a_values.is_empty
		local
			l_value: STRING_32
		do
			create l_value.make_empty
			across
				a_values as ic
			loop
				l_value.append_string_general (ic.item)
				if not ic.is_last then
					l_value.append_character (' ')
				end
			end
			create headers.make_with_value ("headers", l_value)
			check attached headers as al_attribute then attributes.force (al_attribute) end
		end

end
