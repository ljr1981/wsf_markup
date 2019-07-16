note
	title: "HTML_ELEMENT items responsible for text formatting"
	EIS: "src=https://www.w3schools.com/html/html_formatting.asp"

deferred class
	HTML_TEXT_FORMATTING_ELEMENT

inherit
	HTML_ELEMENT

feature {NONE} -- Initialization

	make_with_text (a_text: STRING_32)
			-- Initialize with `a_text'.
		do
			set_text (a_text)
		end

end
