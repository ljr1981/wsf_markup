note
	title: "Representation of an HTML <form> element."
	EIS: "name=specification", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#form"

class
	HTML_FORM

inherit
	HTML_ELEMENT

feature -- Constants

	tag_name: STRING = "h1"
			-- <Precursor>

feature -- Attributes: action

	action: detachable HTML_STRING_ATTRIBUTE
			-- action = non-empty URL potentially surrounded by spaces
			--	The submission action for the form.

	set_action (a_value: STRING_32)
			-- action = non-empty URL potentially surrounded by spaces
			--	The submission action for the form.
		require
			not_empty: not a_value.is_empty
		do
			create action.make_with_value ("action", a_value)
			check attached action as al_attribute then attributes.force (al_attribute) end
		end


feature -- Attributes: method

	method: detachable HTML_STRING_ATTRIBUTE
			-- method = "get" or "post"
			--	The HTTP method with which a UA is meant to associate this element for form submission.

	set_method (a_value: STRING_32)
			-- method = "get" or "post"
			--	The HTTP method with which a UA is meant to associate this element for form submission.
		require
			not_empty: not a_value.is_empty
			get_or_post: a_value.same_string ("get") xor a_value.same_string ("post")
		do
			create method.make_with_value ("method", a_value)
			check attached method as al_attribute then attributes.force (al_attribute) end
		end


feature -- Attributes: enctype

	enctype: detachable HTML_STRING_ATTRIBUTE
			-- enctype = "application/x-www-form-urlencoded" or "multipart/form-data" or "text/plain"
			--	A MIME type with which a UA is meant to associate the form contents for form submission.

	set_enctype (a_value: STRING_32)
			-- enctype = "application/x-www-form-urlencoded" or "multipart/form-data" or "text/plain"
			--	A MIME type with which a UA is meant to associate the form contents for form submission.
		require
			not_empty: not a_value.is_empty
			app_mult_or_plain: a_value.same_string ("application/x-www-form-urlencoded") xor
								a_value.same_string_general ("multipart/form-data") xor
								a_value.same_string_general ("text/plain")
		do
			create enctype.make_with_value ("enctype", a_value)
			check attached enctype as al_attribute then attributes.force (al_attribute) end
		end


feature -- Attributes: name

	name: detachable HTML_STRING_ATTRIBUTE
			-- name = non-empty string
			--	The name of the form.
			--	Any string that is not empty.

	set_name (a_value: STRING_32)
			-- name = non-empty string
			--	The name of the form.
			--	Any string that is not empty.
		require
			not_empty: not a_value.is_empty
		do
			create name.make_with_value ("name", a_value)
			check attached name as al_attribute then attributes.force (al_attribute) end
		end


feature -- Attributes: accept-charset

	accept_charset: detachable HTML_STRING_ATTRIBUTE
			-- accept-charset = list of character-encoding names
			--	Specifies the character encodings used for form submission.
			--	An ordered set of unique space-separated tokens, each of which must
			--	be a valid character encoding name that specifies an ASCII-compatible
			--	character encoding.

	set_accept_charset (a_value: STRING_32)
			-- accept-charset = list of character-encoding names
			--	Specifies the character encodings used for form submission.
			--	An ordered set of unique space-separated tokens, each of which must
			--	be a valid character encoding name that specifies an ASCII-compatible
			--	character encoding.
		require
			not_empty: not a_value.is_empty
		do
			create accept_charset.make_with_value ("accept-charset", a_value)
			check attached accept_charset as al_attribute then attributes.force (al_attribute) end
		end


feature -- Attributes: novalidate

	novalidate: detachable HTML_STRING_ATTRIBUTE
			-- novalidate = "novalidate" or "" (empty string) or empty NEW
			--	Specifies that the element represents a form that is not meant to be
			--	validated during form submission.

	set_novalidate (a_value: STRING_32)
			-- novalidate = "novalidate" or "" (empty string) or empty NEW
			--	Specifies that the element represents a form that is not meant to be
			--	validated during form submission.
		require
			not_empty: not a_value.is_empty
		do
			create novalidate.make_with_value ("novalidate", a_value)
			check attached novalidate as al_attribute then attributes.force (al_attribute) end
		end


feature -- Attributes: target

	target: detachable HTML_STRING_ATTRIBUTE
			-- target = browsing-context name or keyword
			--	A browsing context or keyword that represents the target of the form.
			--	Any string that is either of the following:
			--	a browsing-context name
			--	any case-insensitive match for one of the following literal strings:
			--	"_blank", "_self", "_parent", or "_top".

	set_target (a_value: STRING_32)
			-- target = browsing-context name or keyword
			--	A browsing context or keyword that represents the target of the form.
			--	Any string that is either of the following:
			--	a browsing-context name
			--	any case-insensitive match for one of the following literal strings:
			--	"_blank", "_self", "_parent", or "_top".
		require
			not_empty: not a_value.is_empty
		do
			create target.make_with_value ("target", a_value)
			check attached target as al_attribute then attributes.force (al_attribute) end
		end

feature -- Attributes: autocomplete

	autocomplete: detachable HTML_STRING_ATTRIBUTE
			-- autocomplete = "on" or "off" NEW
			--	Specifies whether the element represents a form for which by default a UA
			--	is meant to store the values entered into its input elements by the user
			--	(so that the UA can pre-fill the form later).

	set_autocomplete (a_value: STRING_32)
			-- autocomplete = "on" or "off" NEW
			--	Specifies whether the element represents a form for which by default a UA
			--	is meant to store the values entered into its input elements by the user
			--	(so that the UA can pre-fill the form later).
		require
			not_empty: not a_value.is_empty
		do
			create autocomplete.make_with_value ("autocomplete", a_value)
			check attached autocomplete as al_attribute then attributes.force (al_attribute) end
		end


end
