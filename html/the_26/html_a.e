note
	title: "Representation of an HTML <a> element."
	EIS: "name=specification", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#a"

class
	HTML_A

inherit
	HTML_ELEMENT

feature -- Constants

	tag_name: STRING = "a"
			-- <Precursor>

feature -- Attributes: href

	href: detachable HTML_STRING_ATTRIBUTE
			-- href = URL potentially surrounded by spaces
			--	A URL that provides the destination of the hyperlink. If the href
			--	attribute is not specified, the element represents a placeholder hyperlink.

	set_href (a_value: STRING_32)
			-- href = URL potentially surrounded by spaces
			--	A URL that provides the destination of the hyperlink. If the href
			--	attribute is not specified, the element represents a placeholder hyperlink.
		note
			EIS: "name=non_empty_url", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#common.data.uri.non-empty"
		require
			not_empty: not a_value.is_empty
		do
			create href.make_with_value ("href", a_value)
			check attached href as al_attribute then attributes.force (al_attribute, "href") end
		end

	set_hyperlink_reference (a_value: STRING_32)
			-- See `set_href' above.
		do
			set_href (a_value)
		end

feature -- Attributes: target

	target: detachable HTML_STRING_ATTRIBUTE
			-- target = browsing-context name or keyword CHANGED
			--	A name or keyword giving a browsing context for UAs to use when following the hyperlink.
			--	The target attribute on the a element was deprecated in a previous version
			--	of HTML, but is no longer deprecated, as it useful in Web applications,
			--	particularly in combination with the iframe element.
			--	Any string that is either of the following:
			--	a browsing-context name
			--	any case-insensitive match for one of the following literal strings:
			--	"_blank", "_self", "_parent", or "_top".

	set_target (a_value: STRING_32)
			-- target = browsing-context name or keyword CHANGED
			--	A name or keyword giving a browsing context for UAs to use when following the hyperlink.
			--	The target attribute on the a element was deprecated in a previous version
			--	of HTML, but is no longer deprecated, as it useful in Web applications,
			--	particularly in combination with the iframe element.
			--	Any string that is either of the following:
			--	a browsing-context name
			--	any case-insensitive match for one of the following literal strings:
			--	"_blank", "_self", "_parent", or "_top".
		require
			not_empty: not a_value.is_empty
		do
			create target.make_with_value ("target", a_value)
			check attached target as al_attribute then attributes.force (al_attribute, "target") end
		end

feature -- Attributes: rel

	rel: detachable HTML_STRING_ATTRIBUTE
			-- rel = set of space-separated tokens
			--	A list of tokens that specify the relationship between the document
			--	containing the hyperlink and the destination indicated by the hyperlink.

	set_rel (a_values: ARRAY [STRING_32])
			-- rel = set of space-separated tokens
			--	A list of tokens that specify the relationship between the document
			--	containing the hyperlink and the destination indicated by the hyperlink.
		note
			EIS: "name=set_of_space_related_tokens", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#common.data.tokens"
			EIS: "name=link_type_defined_in_HTML5_spec", "src=http://dev.w3.org/html5/spec/links.html#linkTypes"
			EIS: "name=extension_to_the_predefined_set_of_link_types", "src=http://dev.w3.org/html5/spec/links.html#concept-rel-extensions"
			EIS: "name=HTML5_spec", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#refsHTML5"
		require
			has_items: not a_values.is_empty
			not_empty_items: across a_values as ic all not ic.item.is_empty end
		do
			create rel.make_with_values ("rel", a_values)
			check attached rel as al_attribute then attributes.force (al_attribute, "rel") end
		end

	set_link_relationships (a_values: ARRAY [STRING_32])
			-- See `set_rel' above
		do
			set_rel (a_values)
		end

feature -- Attributes: hreflang

	hreflang: detachable HTML_STRING_ATTRIBUTE
			-- hreflang = language tag
			--	The language of the destination of the hyperlink.
			--	A valid language tag as defined in [BCP 47].

	set_hreflang (a_value: STRING_32)
			-- hreflang = language tag
			--	The language of the destination of the hyperlink.
			--	A valid language tag as defined in [BCP 47].
		note
			EIS: "name=language_tag", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#common.data.langcode"
			EIS: "name=BCP_47", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#refsBCP47"
		require
			not_empty: not a_value.is_empty
		do
			create hreflang.make_with_value ("hreflang", a_value)
			check attached hreflang as al_attribute then attributes.force (al_attribute, "hreflang") end
		end

feature -- Attributes: media

	media: detachable HTML_STRING_ATTRIBUTE
			-- media = media-query list NEW
			--	The media for which the destination of the hyperlink was designed.
			--	A valid media query list as defined in [Media Queries].

	set_media (a_value: STRING_32)
			-- media = media-query list NEW
			--	The media for which the destination of the hyperlink was designed.
			--	A valid media query list as defined in [Media Queries].
		require
			not_empty: not a_value.is_empty
		do
			create media.make_with_value ("media", a_value)
			check attached media as al_attribute then attributes.force (al_attribute, "media") end
		end

feature -- Attributes: type

	type: detachable HTML_STRING_ATTRIBUTE
			-- type = MIME type
			--	The MIME type of the destination of the hyperlink.
			--	A string that identifies a valid MIME media type as defined in [RFC 2046].

	set_type (a_value: STRING_32)
			-- type = MIME type
			--	The MIME type of the destination of the hyperlink.
			--	A string that identifies a valid MIME media type as defined in [RFC 2046].
		note
			EIS: "name=mime_type", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#common.data.mimetype"
			EIS: "name=RFC_2046", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#refsRFC2046"
		require
			not_empty: not a_value.is_empty
		do
			create type.make_with_value ("type", a_value)
			check attached type as al_attribute then attributes.force (al_attribute, "type") end
		end

	set_mime_type (a_value: STRING_32)
			-- See `set_type' above.
		do
			set_type (a_value)
		end

end
