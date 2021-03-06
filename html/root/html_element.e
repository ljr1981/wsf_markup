﻿note
	description: "Representation of an HTML Tag"

	html_stats: "[
		NOTE: The following EIS-link takes you to a page with interesting statistics
		gathered from 8 million web sites. This information is useful to the development
		of this library. Specifically, the list of 28-most-used-elements is guiding while
		HTML_ELEMENT items to construct first.
		]"
	EIS: "name=html_stats", "src=https://css-tricks.com/average-web-page-data-analyzing-8-million-websites/"
	EIS: "name=detailed_html_stats", "src=https://www.advancedwebranking.com/html/"

	do_not_use_these_elements: "[
		These are old HTML elements which are deprecated and should not be used. 
		You should never use them in new projects, and should replace them in old 
		projects as soon as you can. They are listed here for informational 
		purposes only.
		]"
	EIS: "name=do_not_use_list", "https://www.advancedwebranking.com/html/#deprecated-elements"

deferred class
	HTML_ELEMENT

inherit
	MU_ITEM

	HTML_ELEMENT_FACTORY
		rename
			title as title_new
		end

feature -- Text

	text: detachable STRING_32

	set_text (a_text: like text)
			-- `set_text' of `a_text' into `text'
		do
			text := a_text
		end

feature -- HTML-embedded Text

	text_embedded: ARRAYED_LIST [HTML_TEXT_FORMATTING_ELEMENT]
			--
		attribute
			create Result.make (10)
		end

	set_text_embeds (a_list: ARRAY [HTML_TEXT_FORMATTING_ELEMENT])
			--
		do
			across
				a_list as ic
			loop
				text_embedded.force (ic.item)
			end
		end

feature -- Sub-Elements

	sub_elements: ARRAYED_LIST [HTML_ELEMENT]
			-- Contents of Current as `sub_elements' (with possible sub-`sub_elements').
		attribute
			create Result.make (28)
		end

	add_subelem (a_sub_element: HTML_ELEMENT)
			-- `add_subelem' `a_sub_element' to `sub_elements'
		do
			sub_elements.force (a_sub_element)
		end

feature -- Attributes

	attributes: HASH_TABLE [HTML_ATTRIBUTE [ANY], STRING]
			--
		note
			EIS: "name=global_attributes", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#global-attributes"
		attribute
			create Result.make (0)
		end

feature -- Attributes: Style

	style_attributes: HASH_TABLE [HTML_STYLE_ATTRIBUTE, STRING]
			-- The inline style attribute applied directly to HTML elements.
			-- See also <style> and CSS for more.
		note
			EIS: "src=https://www.w3schools.com/tags/att_style.asp"
			EIS: "src=https://www.w3schools.com/css/css_howto.asp"
		attribute
			create Result.make (0)
		end

feature -- Temp Attributes

	set_temp_attribute (a_name, a_value: STRING_32)
			-- Set a temporary string attribute into `attributes'.
		do
			attributes.force (create {HTML_STRING_ATTRIBUTE}.make_with_value (a_name, a_value), a_name)
		end

	set_temp_attributes (a_key_values: ARRAY [TUPLE [ti_name, ti_value: STRING]])
			-- Set a temporary string attribute into `attributes'.
		do
			across
				a_key_values as ic
			loop
				attributes.force (create {HTML_STRING_ATTRIBUTE}.make_with_value (ic.item.ti_name, ic.item.ti_value), ic.item.ti_name)
			end
		end

	set_temp_attributes_32 (a_key_values: ARRAY [TUPLE [ti_name, ti_value: STRING_32]])
			-- Set a temporary string attribute into `attributes'.
		do
			across
				a_key_values as ic
			loop
				attributes.force (create {HTML_STRING_ATTRIBUTE}.make_with_value (ic.item.ti_name, ic.item.ti_value), ic.item.ti_name)
			end
		end

feature -- Global Attributes

	accesskey: detachable HTML_STRING_ATTRIBUTE
			-- A key label or list of key labels with which to associate the element; each key
			--	label represents a keyboard shortcut which UAs can use to activate the element
			--	or give focus to the element.

	set_accesskeys (a_values: ARRAY [STRING_32])
			-- A key label or list of key labels with which to associate the element; each key
			--	label represents a keyboard shortcut which UAs can use to activate the element
			--	or give focus to the element.
		note
			EIS: "name=specification", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#common.attrs.core"
		do
			create accesskey.make_with_values ("accesskey", a_values)
			check attached accesskey as al_attribute then attributes.force (al_attribute, "accesskey") end
		end

	classification: detachable HTML_STRING_ATTRIBUTE
			-- A name of a classification, or list of names of classifications, to which the element belongs.

	set_classifications (a_values: ARRAY [STRING_32])
			-- A name of a classification, or list of names of classifications, to which the element belongs.
		note
			EIS: "name=specification", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#common.attrs.core"
		do
			create classification.make_with_values ("class", a_values)
			check attached classification as al_attribute then attributes.force (al_attribute, "class") end
		end

	add_class (a_value: STRING_32)
			--
		do
			check attached classification as al_class then al_class.values.force (a_value) end
		end

	contenteditable: detachable HTML_BOOLEAN_ATTRIBUTE
			-- Specifies whether the contents of the element are editable.

	set_contenteditable (a_value: BOOLEAN)
			-- Specifies whether the contents of the element are editable.
		note
			EIS: "name=specification", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#common.attrs.core"
		do
			create contenteditable.make_with_value ("contenteditable", a_value)
			check attached contenteditable as al_attribute then attributes.force (al_attribute, "contenteditable") end
		end

	contextmenu: detachable HTML_STRING_ATTRIBUTE
			-- The value of the id attribute on the menu with which to associate the element as a context menu.

	set_contextmenu (a_value: STRING_32)
			-- The value of the id attribute on the menu with which to associate the element as a context menu.
		note
			EIS: "name=specification", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#common.attrs.core"
		do
			create contextmenu.make_with_value ("contextmenu", a_value)
			check attached contextmenu as al_attribute then attributes.force (al_attribute, "contextmenu") end
		end

	dir: detachable HTML_STRING_ATTRIBUTE
			-- Specifies the element’s text directionality.
			-- "ltr" or left-to-right, "rtl" or right-to-left, "auto" (undefined)

	set_dir (a_value: STRING_32)
			-- Specifies the element’s text directionality.
			-- "ltr" or left-to-right, "rtl" or right-to-left, "auto" (undefined)
		note
			EIS: "name=specification", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#common.attrs.core"
		require
			in_list: (<<"ltr", "rtl", "auto">>).has (a_value.out)
		do
			create dir.make_with_value ("dir", a_value)
			check attached dir as al_attribute then attributes.force (al_attribute, "dir") end
		end

	draggable: detachable HTML_BOOLEAN_ATTRIBUTE
			-- Specifies whether the element is draggable.

	set_draggable (a_value: BOOLEAN)
			-- Specifies whether the element is draggable.
		note
			EIS: "name=specification", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#common.attrs.core"
		do
			create draggable.make_with_value ("draggable", a_value)
			check attached draggable as al_attribute then attributes.force (al_attribute, "draggable") end
		end

	dropzone: detachable HTML_STRING_ATTRIBUTE
			-- Specifies what types of content can be dropped on the element, and instructs
			--	the UA about which actions to take with content when it is dropped on the element.

	set_dropzone (a_value: STRING_32)
			-- Specifies what types of content can be dropped on the element, and instructs
			--	the UA about which actions to take with content when it is dropped on the element.
		note
			EIS: "name=specification", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#common.attrs.core"
		require
			in_list_or_starts_with: (<<"copy", "move", "link">>).has (a_value) xor
				(a_value.has_substring ({STRING_32} "string:") or a_value.has_substring ( {STRING_32} "file:"))
		do
			create dropzone.make_with_value ("dropzone", a_value)
			check attached dropzone as al_attribute then attributes.force (al_attribute, "dropzone") end
		end

	hidden: detachable HTML_STRING_ATTRIBUTE
			-- Specifies that the element represents an element that is not yet, or is no longer, relevant.

	set_hidden (a_value: STRING_32)
			-- Specifies that the element represents an element that is not yet, or is no longer, relevant.
		note
			EIS: "name=specification", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#common.attrs.core"
		require
			in_list: (<<"hidden", "">>).has (a_value)
		do
			create hidden.make_with_value ("hidden", a_value)
			check attached hidden as al_attribute then attributes.force (al_attribute, "hidden") end
		end

	id: detachable HTML_STRING_ATTRIBUTE
			-- A unique identifier for the element.
			-- There must not be multiple elements in a document that have the same id value.
			-- Any string, with the following restrictions:
			-- must be at least one character long
			-- must not contain any space characters

	set_id (a_value: STRING_32)
			-- A unique identifier for the element.
			-- There must not be multiple elements in a document that have the same id value.
			-- Any string, with the following restrictions:
			-- must be at least one character long
			-- must not contain any space characters
		note
			EIS: "name=specification", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#common.attrs.core"
		require
			not_empty: not a_value.is_empty
			no_spaces: not a_value.has (' ')
		do
			create id.make_with_value ("id", a_value)
			check attached id as al_attribute then attributes.force (al_attribute, "id") end
		end

	lang: detachable HTML_STRING_ATTRIBUTE
			-- Specifies the primary language for the contents of the element and for any of the element’s attributes that contain text.
			-- A valid language tag as defined in [BCP 47].

	set_lang (a_value: STRING_32)
			-- Specifies the primary language for the contents of the element and for any of the element’s attributes that contain text.
			-- A valid language tag as defined in [BCP 47].
		note
			EIS: "name=specification", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#common.attrs.core"
			EIS: "name=specification", "src=https://tools.ietf.org/html/bcp47"
		do
			create lang.make_with_value ("lang", a_value)
			check attached lang as al_attribute then attributes.force (al_attribute, "lang") end
		end

	spellcheck: detachable HTML_BOOLEAN_ATTRIBUTE
			-- Specifies whether the element represents an element whose contents are subject to spell checking and grammar checking.

	set_spellcheck (a_value: BOOLEAN)
			-- Specifies whether the element represents an element whose contents are subject to spell checking and grammar checking.
		note
			EIS: "name=specification", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#common.attrs.core"
		do
			create spellcheck.make_with_value ("spellcheck", a_value)
			check attached spellcheck as al_attribute then attributes.force (al_attribute, "spellcheck") end
		end

	style: detachable HTML_STRING_ATTRIBUTE
			-- Specifies zero or more CSS declarations that apply to the element [CSS].

	set_style (a_value: STRING_32)
			-- Specifies zero or more CSS declarations that apply to the element [CSS].
		note
			EIS: "name=specification", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#common.attrs.core"
		require
			not_empty: not a_value.is_empty
		do
			create style.make_with_value ("style", a_value)
			check attached style as al_attribute then attributes.force (al_attribute, "style") end
		end

	tabindex: detachable HTML_STRING_ATTRIBUTE
			-- Specifies whether the element represents an element that is is focusable
			--	(that is, an element which is part of the sequence of focusable elements
			--	in the document), and the relative order of the element in the sequence
			--	of focusable elements in the document.

	set_tabindex (a_value: STRING_32)
			-- Specifies whether the element represents an element that is is focusable
			--	(that is, an element which is part of the sequence of focusable elements
			--	in the document), and the relative order of the element in the sequence
			--	of focusable elements in the document.
		note
			EIS: "name=specification", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#common.attrs.core"
		do
			create tabindex.make_with_value ("tabindex", a_value)
			check attached tabindex as al_attribute then attributes.force (al_attribute, "tabindex") end
		end

	title: detachable HTML_STRING_ATTRIBUTE
			-- Advisory information associated with the element.

	set_title (a_value: STRING_32)
			-- Advisory information associated with the element.
		note
			EIS: "name=specification", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#common.attrs.core"
		do
			create title.make_with_value ("title", a_value)
			check attached title as al_attribute then attributes.force (al_attribute, "title") end
		end

feature -- Output

	html_out: STRING_32
			-- Output of Current in HTML
		do
			create Result.make_empty
			Result.append_string_general (start_tag_out)
			if attached text as al_text and then text_embedded.is_empty then
				Result.append_string_general (al_text)
			elseif not attached text and not text_embedded.is_empty then
				across
					text_embedded as ic_text
				loop
					Result.append_string_general (ic_text.item.html_out)
				end
			end
			if
				sub_elements.is_empty and not attached text and text_embedded.is_empty and not end_tag_out.is_empty and not force_full_end_tag
			then
				Result.insert_character ('/', Result.count)
			else
				across
					sub_elements as ic
				loop
					Result.append_string_general (ic.item.html_out)
				end
				Result.append_string_general (end_tag_out)
			end
		end

	prettified_html (a_level: INTEGER): STRING_32
			-- Prettified HTML in the sense of tabbed indenting.
		note
			example: "[
				<html><body>...</body></html>
				
				The above is "prettified" to:
				
				<html>
					<body>
						...
					</body>
				</html>
				]"
		do
			create Result.make_filled ('%T', a_level)
			Result.prepend_character ('%N')

			Result.append_string_general (start_tag_out)
			if attached text as al_text and then text_embedded.is_empty then
				Result.append_string_general (al_text)
			elseif not attached text and not text_embedded.is_empty then
				across
					text_embedded as ic_text
				loop
					Result.append_string_general (ic_text.item.html_out)
				end
			end
			if
				sub_elements.is_empty and not attached text and text_embedded.is_empty and not force_full_end_tag
			then
				Result.insert_character ('/', Result.count)
			else
				across
					sub_elements as ic
				loop
					Result.append_string_general (ic.item.prettified_html (a_level + 1))
				end
				Result.append_character ('%N')
				Result.append_string_general (create {STRING}.make_filled ('%T', a_level))
				Result.append_string_general (end_tag_out)
			end
		end

	start_tag_out: STRING_32
			-- <Precursor>
		local
			l_style_attr: STRING_32
		do
			create Result.make_empty
			if not tag_name.is_empty then
				Result.append_character (Left_enclosing_character)
				Result.append_string_general (tag_name)
					-- set style attribute(s) (if any)
				if not style_attributes.is_empty and then not attributes.has_key ("style") then
					create l_style_attr.make_empty
					across
						style_attributes as ic
					loop
						l_style_attr.append_string_general (ic.item.attribute_out)
						l_style_attr.append_character (';')
					end
					set_style (l_style_attr)
				end
					-- All attributes
				across
					attributes as ic
				loop
					Result.append_character (' ')
					Result.append_string_general (ic.item.attribute_out)
				end
				Result.append_character (Right_enclosing_character)
			end
		end

	end_tag_out: STRING_32
			-- <Precursor>
		do
			create Result.make_empty
			if not tag_name.is_empty then
				Result.append_character (Left_enclosing_character)
				Result.append_character ('/')
				Result.append_string_general (tag_name)
				Result.append_character (Right_enclosing_character)
			end
		end

feature -- Constants

	tag_name: STRING
			-- Name of tag
		deferred
		end

	force_full_end_tag: BOOLEAN
			-- Force use of full end-tag vs. "/>"

	left_enclosing_character: CHARACTER = '<'
			-- <Precursor>
			-- Left angle bracket.

	right_enclosing_character: CHARACTER = '>'
			-- <Precursor>
			-- Right angle bracket.

end
