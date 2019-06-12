note
	title: "Representation of an HTML <TEMP> element."
	EIS: "name=specification", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#temp"

class
	HTML_TEMP_ELEMENT

inherit
	HTML_ELEMENT

create
	default_create,
	make

feature {NONE} -- Initialization

	make (a_tag_name: STRING)
			--
		do
			tag_name := a_tag_name
		end

feature -- Constants

	tag_name: STRING
			-- <Precursor>
		attribute
			Result := "temp"
		end

end
