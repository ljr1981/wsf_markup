note
	title: "Representation of an HTML <button> element."
	EIS: "name=specification", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#button"

class
	HTML_BUTTON

inherit
	HTML_ELEMENT

feature -- Constants

	tag_name: STRING = "button"
			-- <Precursor>

feature -- Attributes: name

	name: detachable HTML_STRING_ATTRIBUTE
			-- name = string
			--	The name part of the name/value pair associated with this element for the purposes of form submission.

	set_name (a_value: STRING_32)
			-- name = string
			--	The name part of the name/value pair associated with this element for the purposes of form submission.
		require
			not_empty: not a_value.is_empty
		do
			create name.make_with_value ("name", a_value)
			check attached name as al_attribute then attributes.force (al_attribute) end
		end

feature -- Attributes: disabled

	disabled: detachable HTML_STRING_ATTRIBUTE
			-- disabled = "disabled" or "" (empty string) or empty
			--	Specifies that the element represents a disabled control.

	set_disabled (a_value: STRING_32)
			-- disabled = "disabled" or "" (empty string) or empty
			--	Specifies that the element represents a disabled control.
		require
			scoped_or_empty: a_value.same_string ("disabled") xor a_value.is_empty
		do
			create disabled.make_with_value ("disabled", a_value)
			check attached disabled as al_attribute then attributes.force (al_attribute) end
		end

feature -- Attributes: form_id

	form_id: detachable HTML_STRING_ATTRIBUTE
			-- form = ID reference NEW
			--	The value of the id attribute on the form with which to associate the element.

	set_form_id (a_value: STRING_32)
			-- form = ID reference NEW
			--	The value of the id attribute on the form with which to associate the element.
		require
			not_empty: not a_value.is_empty
		do
			create form_id.make_with_value ("form", a_value)
			check attached form_id as al_attribute then attributes.force (al_attribute) end
		end

	set_with_form (a_form: HTML_FORM)
			-- form = ID reference NEW
			--	The value of the id attribute on the form with which to associate the element.
		require
			has_id: attached a_form.id
		do
			if attached a_form.id as al_form_id then
				set_form_id (al_form_id.value_out)
			end
		end

feature -- Attributes: type

	type: detachable HTML_STRING_ATTRIBUTE
			-- type = "submit"
			--	Specifies that its button element is a button for submitting a form.

	set_type (a_value: STRING_32)
			-- type = "submit"
			--	Specifies that its button element is a button for submitting a form.
		require
			not_empty: a_value.same_string ("submit")
		do
			create type.make_with_value ("type", a_value)
			check attached type as al_attribute then attributes.force (al_attribute) end
		end

feature -- Attributes: value

	value: detachable HTML_STRING_ATTRIBUTE
			-- value = string
			--	The value part of the name/value pair associated with this button for the purposes of form submission.

	set_value (a_value: STRING_32)
			-- value = string
			--	The value part of the name/value pair associated with this button for the purposes of form submission.
		require
			not_empty: not a_value.is_empty
		do
			create value.make_with_value ("value", a_value)
			check attached value as al_attribute then attributes.force (al_attribute) end
		end

feature -- Attributes: formaction

	formaction: detachable HTML_STRING_ATTRIBUTE
			-- formaction = non-empty URL potentially surrounded by spaces NEW
			--	The form-submission action for the element.

	set_formaction (a_value: STRING_32)
			-- formaction = non-empty URL potentially surrounded by spaces NEW
			--	The form-submission action for the element.
		require
			not_empty: not a_value.is_empty
		do
			create formaction.make_with_value ("formaction", a_value)
			check attached formaction as al_attribute then attributes.force (al_attribute) end
		end

feature -- Attributes: autofocus

	autofocus: detachable HTML_STRING_ATTRIBUTE
			-- autofocus = "autofocus" or "" (empty string) or empty NEW
			--	Specifies that the element represents a control to which a UA is meant to give focus as soon as the document is loaded.

	set_autofocus (a_value: STRING_32)
			-- autofocus = "autofocus" or "" (empty string) or empty NEW
			--	Specifies that the element represents a control to which a UA is meant to give focus as soon as the document is loaded.
		require
			autofocus: a_value.same_string ("autofocus") xor a_value.is_empty
		do
			create autofocus.make_with_value ("autofocus", a_value)
			check attached autofocus as al_attribute then attributes.force (al_attribute) end
		end

feature -- Attributes: formenctype

	formenctype: detachable HTML_STRING_ATTRIBUTE
			-- formenctype = "application/x-www-form-urlencoded" or "multipart/form-data" or "text/plain" NEW
			--	A MIME type with which a UA is meant to associate this element for form submission.

	set_formenctype (a_value: STRING_32)
			-- formenctype = "application/x-www-form-urlencoded" or "multipart/form-data" or "text/plain" NEW
			--	A MIME type with which a UA is meant to associate this element for form submission.
		require
			not_empty: not a_value.is_empty
			mime_type: a_value.same_string ("application/x-www-form-urlencoded") xor
						a_value.same_string ("multipart/form-data") xor
						a_value.same_string ("text/plain")
		do
			create formenctype.make_with_value ("formenctype", a_value)
			check attached formenctype as al_attribute then attributes.force (al_attribute) end
		end

feature -- Attributes: formmethod

	formmethod: detachable HTML_STRING_ATTRIBUTE
			-- formmethod = "get" or "post" NEW
			--	The HTTP method with which a UA is meant to associate this element for form submission.

	set_formmethod (a_value: STRING_32)
			-- formmethod = "get" or "post" NEW
			--	The HTTP method with which a UA is meant to associate this element for form submission.
		require
			get_or_post: a_value.same_string ("get") xor a_value.same_string ("post")
		do
			create formmethod.make_with_value ("formmethod", a_value)
			check attached formmethod as al_attribute then attributes.force (al_attribute) end
		end

feature -- Attributes: formtarget

	formtarget: detachable HTML_STRING_ATTRIBUTE
			-- formtarget = browsing-context name or keyword NEW
			--	A browsing context name or keyword that represents the target of the control.
			--	Any string that is either of the following:
			--	a browsing-context name
			--	any case-insensitive match for one of the following literal strings: "_blank", "_self", "_parent", or "_top".

	set_formtarget (a_value: STRING_32)
			-- formtarget = browsing-context name or keyword NEW
			--	A browsing context name or keyword that represents the target of the control.
			--	Any string that is either of the following:
			--	a browsing-context name
			--	any case-insensitive match for one of the following literal strings: "_blank", "_self", "_parent", or "_top".
		require
			not_empty: not a_value.is_empty
		do
			create formtarget.make_with_value ("formtarget", a_value)
			check attached formtarget as al_attribute then attributes.force (al_attribute) end
		end

feature -- Attributes: formnovalidate

	formnovalidate: detachable HTML_STRING_ATTRIBUTE
			-- formnovalidate = "formnovalidate" or "" (empty string) or empty NEW
			--	Specifies that the element represents a control whose value is not meant to be validated during form submission.

	set_formnovalidate (a_value: STRING_32)
			-- formnovalidate = "formnovalidate" or "" (empty string) or empty NEW
			--	Specifies that the element represents a control whose value is not meant to be validated during form submission.
		require
			valid: a_value.same_string ("formnovalidate") xor a_value.is_empty
		do
			create formnovalidate.make_with_value ("formnovalidate", a_value)
			check attached formnovalidate as al_attribute then attributes.force (al_attribute) end
		end

end
