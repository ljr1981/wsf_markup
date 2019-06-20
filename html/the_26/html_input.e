note
	title: "Representation of an HTML <input> element."
	EIS: "name=specification", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#input"

class
	HTML_INPUT

inherit
	HTML_ELEMENT

feature -- Constants

	tag_name: STRING = "input"
			-- <Precursor>

feature -- Attributes: type

	type: detachable HTML_STRING_ATTRIBUTE
			-- The input element is a multipurpose element for representing input controls.
			--	The details of the input element are described in the following sections:

	set_type (a_value: STRING_32)
			-- The input element is a multipurpose element for representing input controls.
			--	The details of the input element are described in the following sections:
		require
			not_empty: not a_value.is_empty
			valid_value: across <<text_default, text_const, password, checkbox, radio, button, submit, reset, file,
									hidden_const, image, datetime, datetime_local, date, month, time,
									week, number, range, email, url, search, tel, color>> as ic some ic.item.out.same_string (a_value) end
		do
			if a_value.is_empty then
				create type.make_with_value ("type", {STRING_32} "text")
			else
				create type.make_with_value ("type", a_value)
			end
			check attached type as al_attribute then attributes.force (al_attribute, "type") end
		end

feature -- Attributes: type-constants

	text_default: STRING_32 = ""
			-- Empty string = `text'
	text_const: STRING_32 = "text"
			-- text
	password: STRING_32 = "password"
			-- password
	checkbox: STRING_32 = "checkbox"
			-- checkbox
	radio: STRING_32 = "radio"
			-- radio
	button: STRING_32 = "button"
			-- button
	submit: STRING_32 = "submit"
			-- submit
	reset: STRING_32 = "reset"
			-- reset
	file: STRING_32 = "file"
			-- file
	hidden_const: STRING_32 = "hidden"
			-- hidden
	image: STRING_32 = "image"
			-- image
	datetime: STRING_32 = "datetime"
			-- datetime
	datetime_local: STRING_32 = "datetime-local"
			-- datetime-local
	date: STRING_32 = "date"
			-- date
	month: STRING_32 = "month"
			-- month
	time: STRING_32 = "time"
			-- time
	week: STRING_32 = "week"
			-- week
	number: STRING_32 = "number"
			-- number
	range: STRING_32 = "range"
			-- range
	email: STRING_32 = "email"
			-- email
	url: STRING_32 = "url"
			-- url
	search: STRING_32 = "search"
			-- search
	tel: STRING_32 = "tel"
			-- tel
	color: STRING_32 = "color"
			-- color

end
