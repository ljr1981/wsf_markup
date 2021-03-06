note
	title: "Representation of an HTML <link> element."
	EIS: "name=specification", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#link"

class
	HTML_LINK

inherit
	HTML_ELEMENT

create
	default_create,
	make_with_integrity_and_CORS

feature {NONE} -- Initialize

	make_with_integrity_and_CORS (a_rel,a_href, a_integrity_SHA, a_CORS: STRING_32)
			--
		do
			set_rels (<<a_rel>>)
			set_href (a_href)
			set_integrity (a_integrity_SHA)
			set_crossorigin (a_CORS)
		end

feature -- Constants

	tag_name: STRING = "link"
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

feature -- Attributes: href

	href: detachable HTML_STRING_ATTRIBUTE
			--href = non-empty URL potentially surrounded by spaces
			--	A URL that provides the destination of the link.

	set_href (a_value: STRING_32)
			--href = non-empty URL potentially surrounded by spaces
			--	A URL that provides the destination of the link.
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

feature -- Attributes: rel

	rel: detachable HTML_STRING_ATTRIBUTE
			--rel = set of space-separated tokens
			--	A set of tokens that specify the relationship between the document
			--	containing the link and the destination indicated by the link.
			--	Each token must be either a link type defined in the HTML5 specification
			--	or a registered extension to the predefined set of link types [HTML5].

	set_rels (a_values: ARRAY [STRING_32])
			--rel = set of space-separated tokens
			--	A set of tokens that specify the relationship between the document
			--	containing the link and the destination indicated by the link.
			--	Each token must be either a link type defined in the HTML5 specification
			--	or a registered extension to the predefined set of link types [HTML5].
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
			-- See `set_rels' above
		do
			set_rels (a_values)
		end

feature -- Attributes: hreflang

	hreflang: detachable HTML_STRING_ATTRIBUTE
			--hreflang = language tag
			--	The language of the destination of the link.
			--	A valid language tag as defined in [BCP 47].

	set_hreflang (a_value: STRING_32)
			--hreflang = language tag
			--	The language of the destination of the link.
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
			--media = media-query list
			--	The media for which the destination of the link was designed.
			--	A valid media query list as defined in [Media Queries].

	set_media (a_value: STRING_32)
			--media = media-query list
			--	The media for which the destination of the link was designed.
			--	A valid media query list as defined in [Media Queries].
		require
			not_empty: not a_value.is_empty
		do
			create media.make_with_value ("media", a_value)
			check attached media as al_attribute then attributes.force (al_attribute, "media") end
		end

feature -- Attributes: type

	type: detachable HTML_STRING_ATTRIBUTE
			--type = MIME type
			--	The MIME type of the destination of the link.
			--	A string that identifies a valid MIME media type as defined in [RFC 2046].

	set_type (a_value: STRING_32)
			--type = MIME type
			--	The MIME type of the destination of the link.
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

feature -- Attributes: sizes

	sizes: detachable HTML_STRING_ATTRIBUTE
			--sizes = "any" or sizes
			--	The sizes of icons for visual media.
			--	An unordered set of unique space-separated tokens, each of which
			--	must be one of the following:
			--	the literal string "any"
			--	two valid non-negative integers that do not have a leading "0"
			--	character and that are separated by a single "x" character.

	set_sizes (a_values: ARRAY [STRING_32])
			--sizes = "any" or sizes
			--	The sizes of icons for visual media.
			--	An unordered set of unique space-separated tokens, each of which
			--	must be one of the following:
			--	the literal string "any"
			--	two valid non-negative integers that do not have a leading "0"
			--	character and that are separated by a single "x" character.
		require
			has_items: not a_values.is_empty
			any_or_sizes: (a_values.count = 1 and then attached a_values [1] as al_any and then al_any.same_string ("any")) xor
							(a_values.count = 2 and then across a_values as ic all not ic.item.is_empty and ic.item.is_number_sequence end)
		do
			if a_values.count = 1 then
				create sizes.make_with_value ("sizes", a_values [1])
			else
				create sizes.make_with_values ("sizes", <<a_values [1], "x", a_values [2]>>)
			end
			check attached sizes as al_attribute then attributes.force (al_attribute, "sizes") end
		end

end
