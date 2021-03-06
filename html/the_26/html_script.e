﻿note
	title: "Representation of an HTML <script> element."
	EIS: "name=specification", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#script"

	see_also: "end of class note clause for additional constraints and admonitions"

class
	HTML_SCRIPT

inherit
	HTML_ELEMENT
		redefine
			default_create
		end

create
	default_create,
	make_with_type,
	make_with_type_javascript,
	make_with_integrity_and_CORS

feature {NONE} -- Initialize

	default_create
			--<Precursor>
		do
			Precursor
			force_full_end_tag := True
		end

	make_with_integrity_and_CORS (a_src, a_integrity_SHA, a_CORS: STRING_32)
			--
		do
			default_create
			set_src (a_src)
			set_integrity (a_integrity_SHA)
			set_crossorigin (a_CORS)
		end

	make_with_type (a_type: STRING_32)
			--
		do
			default_create
			set_type (a_type)
		end

	make_with_type_javascript
			--
		do
			default_create
			set_type ("javascript")
		end

feature -- Constants

	tag_name: STRING = "script"
			-- <Precursor>

feature -- Attributes: integrity

	integrity: detachable HTML_STRING_ATTRIBUTE

	set_integrity (a_value: STRING_32)
			-- This specification defines a mechanism by which user agents
			--	may verify that a fetched resource has been delivered without
			--	unexpected manipulation.
		note
			purpose: "Both attributes have been added to Bootstrap CDN to implement Subresource Integrity. See SRI EIS below."
			EIS: "src=https://www.w3.org/TR/SRI/"
			EIS: "src=https://stackoverflow.com/questions/32039568/what-are-the-integrity-and-crossorigin-attributes"
		require
			not_empty: not a_value.is_empty
		do
			create integrity.make_with_value ("integrity", a_value)
			check attached integrity as al_attribute then attributes.force (al_attribute, "integrity") end
		end

feature -- Attributes: crossorigin

	crossorigin: detachable HTML_STRING_ATTRIBUTE

	set_crossorigin (a_value: STRING_32)
			-- When the request doesn't match Same Origin Policy, the crossorigin
			--	attribute MUST be present for the integrity of the file to be checked.
			--	With an integrity set on an external origin and a missing crossorigin
			--	the browser will choose to 'fail-open' which means it will load the
			--	resource as if the integrity attribute was not set.
		note
			purpose: "Both attributes have been added to Bootstrap CDN to implement Subresource Integrity. See SRI EIS below."
			EIS: "src=https://www.w3.org/TR/SRI/"
			EIS: "src=https://www.npmjs.com/package/ember-cli-sri#crossorigin-attribute"
			EIS: "src=https://developer.mozilla.org/en-US/docs/Web/HTML/Element/img#attr-crossorigin"
			EIS: "src=https://stackoverflow.com/questions/32039568/what-are-the-integrity-and-crossorigin-attributes"
		require
			not_empty: not a_value.is_empty
		do
			create crossorigin.make_with_value ("crossorigin", a_value)
			check attached crossorigin as al_attribute then attributes.force (al_attribute, "crossorigin") end
		end

feature -- Attributes: type

	type: detachable HTML_STRING_ATTRIBUTE
			-- The language of the script or format of the data.
			--	A string that identifies a valid MIME media type as
			--	defined in [RFC 2046].

	set_type (a_value: STRING_32)
			-- The language of the script or format of the data.
			--	A string that identifies a valid MIME media type as
			--	defined in [RFC 2046].
		note
			EIS: "name=mime_type", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#common.data.mimetype"
			EIS: "name=RFC_2046", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#refsRFC2046"
		require
			not_empty: not a_value.is_empty
		do
			create type.make_with_value ("type", a_value)
			check attached type as al_attribute then attributes.force (al_attribute, "type") end
		end

feature -- Attributes: src

	src: detachable HTML_STRING_ATTRIBUTE
			--  non-empty URL potentially surrounded by spaces
			--	The address of the external script to use.

	set_src (a_value: STRING_32)
			--  non-empty URL potentially surrounded by spaces
			--	The address of the external script to use.
		require
			not_empty: not a_value.is_empty
		do
			create src.make_with_value ("src", a_value)
			check attached src as al_attribute then attributes.force (al_attribute, "src") end
		end

feature -- Attributes: defer

	defer: detachable HTML_STRING_ATTRIBUTE
			--  = "defer" or "" (empty string) or empty
			--	Specifies that script should be executed
			--	after the document has been parsed.

	set_defer (a_value: STRING_32)
			--  = "defer" or "" (empty string) or empty
			--	Specifies that script should be executed
			--	after the document has been parsed.
		require
			defer_or_empty: a_value.same_string ("defer") xor a_value.is_empty
		do
			create defer.make_with_value ("defer", a_value)
			check attached defer as al_attribute then attributes.force (al_attribute, "defer") end
		end

feature -- Attributes: async

	async: detachable HTML_STRING_ATTRIBUTE
			--  = "async" or "" (empty string) or empty
			--	Specifies that the script should be executed
			--	asynchronously, as soon as it becomes available.

	set_async (a_value: STRING_32)
			--  = "async" or "" (empty string) or empty
			--	Specifies that the script should be executed
			--	asynchronously, as soon as it becomes available.
		require
			defer_or_empty: a_value.same_string ("async") xor a_value.is_empty
		do
			create async.make_with_value ("async", a_value)
			check attached async as al_attribute then attributes.force (al_attribute, "async") end
		end

feature -- Attributes: charset

	charset: detachable HTML_STRING_ATTRIBUTE
			--  The character encoding of the external script.
			--	A case-insensitive match for any character set name for
			--	which the IANA [Character Sets] registry has a Name or
			--	Alias field labeled as “preferred MIME name”; or, if none
			--	of the Alias fields are so labeled, a case-insensitive
			--	match for a Name field in the registry.

	set_charset (a_value: STRING_32)
			--  The character encoding of the external script.
			--	A case-insensitive match for any character set name for
			--	which the IANA [Character Sets] registry has a Name or
			--	Alias field labeled as “preferred MIME name”; or, if none
			--	of the Alias fields are so labeled, a case-insensitive
			--	match for a Name field in the registry.
		note
			EIS: "name=character_encoding_name", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#common.data.charset"
			EIS: "name=character_sets", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#refsCharacterSets"
		do
			create charset.make_with_value ("charset", a_value)
			check attached charset as al_attribute then attributes.force (al_attribute, "charset") end
		end

note
	additional_constraints_and_admonitions: "[
		- A script element must not contain an occurrence of the character
			sequence "<!--" without a matching later occurrence of the character sequence "-->".

		- A script element with a src attribute must contain only:
			lines that consist solely of a newline, optionally preceded by one or
			 more space (U+0020) characters or tab (U+0009) characters
			single-line comments, which are lines beginning with the character
			sequence "//", optionally preceded by one more more space (U+0020)
			characters or tab (U+0009) characters, followed by any number of
			characters that are not a newline, and ending with a newline
			multi-lines comments, which begin with the character sequence "/*",
			optionally preceded by one more more space (U+0020) characters or
			tab (U+0009) characters, and that end with the character sequence "*/"

		- Element script with attribute language whose value is “JavaScript” must not
			have attribute type whose value is not “text/javascript”.

		- Element script must not have attribute charset unless attribute src is also specified.
		- Element script must not have attribute defer unless attribute src is also specified.
		- Element script must not have attribute async unless attribute src is also specified.
		- The language attribute on the script element is obsolete. Use the type attribute instead.
		- The language attribute on the script element is obsolete. You can safely omit it.
		]"

end
