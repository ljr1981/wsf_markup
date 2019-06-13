note
	title: "Representation of an HTML <style> element."
	EIS: "name=specification", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#style"

class
	HTML_STYLE

inherit
	HTML_ELEMENT

feature -- Constants

	tag_name: STRING = "style"
			-- <Precursor>

feature -- Attributes: type

	type: detachable HTML_STRING_ATTRIBUTE
			-- type = MIME type
			--	A valid MIME type that designates a styling language.
			--	A string that identifies a valid MIME media type as defined in [RFC 2046].

	set_type (a_value: STRING_32)
			-- type = MIME type
			--	A valid MIME type that designates a styling language.
			--	A string that identifies a valid MIME media type as defined in [RFC 2046].
		note
			EIS: "name=mime_type", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#common.data.mimetype"
			EIS: "name=RFC_2046", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#refsRFC2046"
		require
			not_empty: not a_value.is_empty
		do
			create type.make_with_value ("type", a_value)
			check attached type as al_attribute then attributes.force (al_attribute) end
		end

feature -- Attributes: media

	media: detachable HTML_STRING_ATTRIBUTE
			-- media = media-query list
			--	Specifies which media the styles apply to.
			--	A valid media query list as defined in [Media Queries].

	set_media (a_value: STRING_32)
			-- media = media-query list
			--	Specifies which media the styles apply to.
			--	A valid media query list as defined in [Media Queries].
		require
			not_empty: not a_value.is_empty
		do
			create media.make_with_value ("media", a_value)
			check attached media as al_attribute then attributes.force (al_attribute) end
		end

feature -- Attributes: scoped

	scoped: detachable HTML_STRING_ATTRIBUTE
			-- scoped = "scoped" or "" (empty string) or empty NEW
			--	Indicates that the specified style information is meant to apply only to
			--	the style element’s parent element, and that element’s child nodes. Otherwise,
			--	the specified styles are meant to apply to the entire document.

	set_scoped (a_value: STRING_32)
			-- scoped = "scoped" or "" (empty string) or empty NEW
			--	Indicates that the specified style information is meant to apply only to
			--	the style element’s parent element, and that element’s child nodes. Otherwise,
			--	the specified styles are meant to apply to the entire document.
		require
			scoped_or_empty: a_value.same_string ("scoped") xor a_value.is_empty
		do
			create scoped.make_with_value ("scoped", a_value)
			check attached scoped as al_attribute then attributes.force (al_attribute) end
		end

end
