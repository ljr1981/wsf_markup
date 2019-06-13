note
	title: "Representation of an HTML <img> element."
	EIS: "name=specification", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#img"

class
	HTML_IMG

inherit
	HTML_ELEMENT

feature -- Constants

	tag_name: STRING = "img"
			-- <Precursor>

feature -- Settings

	set_class_src_alt (a_class, a_src, a_alt: STRING_32)
			--
		do
			set_classifications (<<a_class>>)
			set_src (a_src)
			set_alt (a_alt)
		end

	set_src_alt (a_src, a_alt: STRING_32)
			--
		do
			set_src (a_src)
			set_alt (a_alt)
		end

feature -- Attributes: src

	src: detachable HTML_STRING_ATTRIBUTE
			-- src = non-empty URL potentially surrounded by spaces
			--	A URL referencing a non-interactive, optionally animated,
			--	image that is neither paged nor scripted.

	set_src (a_value: STRING_32)
			-- src = non-empty URL potentially surrounded by spaces
			--	A URL referencing a non-interactive, optionally animated,
			--	image that is neither paged nor scripted.
		require
			not_empty: not a_value.is_empty
		do
			create src.make_with_value ("src", a_value)
			check attached src as al_attribute then attributes.force (al_attribute) end
		end

feature -- Attributes: alt

	alt: detachable HTML_STRING_ATTRIBUTE
			-- alt = any value
			--	The fallback content for the image.

	set_alt (a_value: STRING_32)
			-- alt = any value
			--	The fallback content for the image.
		require
			not_empty: not a_value.is_empty
		do
			create alt.make_with_value ("alt", a_value)
			check attached alt as al_attribute then attributes.force (al_attribute) end
		end

feature -- Attributes: height

	height: detachable HTML_NUMERIC_ATTRIBUTE
			-- height = non-negative integer
			--	The height of the image, in CSS pixels.

	set_height (a_value: INTEGER)
			-- height = non-negative integer
			--	The height of the image, in CSS pixels.
		require
			non_negative: a_value >= 0
		do
			create height.make_with_value ("height", a_value)
			check attached height as al_attribute then attributes.force (al_attribute) end
		end

feature -- Attributes: width

	width: detachable HTML_NUMERIC_ATTRIBUTE
			-- width = non-negative integer
			--	The width of the image, in CSS pixels.

	set_width (a_value: INTEGER)
			-- width = non-negative integer
			--	The width of the image, in CSS pixels.
		require
			non_negative: a_value >= 0
		do
			create width.make_with_value ("width", a_value)
			check attached width as al_attribute then attributes.force (al_attribute) end
		end

feature -- Attributes: usemap

	usemap: detachable HTML_STRING_ATTRIBUTE
			-- usemap = hash-name reference
			--	A hash-name reference to a map element with which to associate the image.

	set_usemap (a_value: STRING_32)
			-- usemap = hash-name reference
			--	A hash-name reference to a map element with which to associate the image.
		require
			not_empty: not a_value.is_empty
		do
			create usemap.make_with_value ("usemap", a_value)
			check attached usemap as al_attribute then attributes.force (al_attribute) end
		end

feature -- Attributes: ismap

	ismap: detachable HTML_STRING_ATTRIBUTE
			-- ismap = "ismap" or "" (empty string) or empty #
			--	Specifies that its img element provides access to a server-side image map.

	set_ismap (a_value: STRING_32)
			-- ismap = "ismap" or "" (empty string) or empty #
			--	Specifies that its img element provides access to a server-side image map.
		require
			ismap_or_empty: a_value.same_string ("ismap") xor a_value.is_empty
		do
			create ismap.make_with_value ("ismap", a_value)
			check attached ismap as al_attribute then attributes.force (al_attribute) end
		end

feature -- Attributes: border

			-- border = zero OBSOLETE
			--	Specifies that its img element represents a borderless image.
			--	The literal string "0".

end
