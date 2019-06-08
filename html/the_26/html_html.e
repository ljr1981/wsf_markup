note
	title: "Representation of an HTML element"
	description: "[
		The html element represents the root of a document.

		Permitted contents
		One head element, followed by one body element

		Permitted attributes
		global attributes & manifest
		]"
	EIS: "name=html", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#html"

class
	HTML_HTML

inherit
	HTML_ELEMENT
		export {NONE}
			add_subelem -- hide because we have adders for sub-elements by specification.
		end

create
	default_create,
	make_with_head,
	make_with_body,
	make_with_head_and_body

feature {NONE} -- Initialization

	make_with_head
			--
		do
			add_head
		end

	make_with_body
			--
		do
			add_body
		end

	make_with_head_and_body
			--
		do
			add_head_and_body
		end

feature -- Constants

	tag_name: STRING = "html"
			-- <Precursor>

feature -- Access

	head: HTML_HEAD
		do
			check attached internal_head as al_result then Result := al_result end
		end

	body: HTML_BODY
		do
			check attached internal_body as al_result then Result := al_result end
		end

feature {NONE} -- Implementation: Access

	internal_head: detachable like head

	internal_body: detachable like body

feature -- Operations

	add_head_and_body
			-- Add <head> and <body> elements to Current.
		do
			add_head
			add_body
		end

	add_head
			-- Add <head> element to Current.
		require
			no_head: across sub_elements as ic all not attached {HTML_HEAD} ic.item end
		do
			add_subelem (last_head)
			internal_head := last_head
		ensure
			has_head: attached head
		end

	add_body
			-- Add <body> element to Current.
		require
			no_head: across sub_elements as ic all not attached {HTML_BODY} ic.item end
		do
			add_subelem (last_body)
			internal_body := last_body
		ensure
			has_head: attached body
		end

end
