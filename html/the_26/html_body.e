note
	title: "Representation of an HTML <body> element."
	description: "[
		The body element represents the body of a document (as opposed to the document’s metadata).

		Permitted contents
		Flow content

		Permitted attributes
		global attributes & onafterprint & onbeforeprint & onbeforeunload & onblur & onerror & onfocus 
							& onhashchange & onload & onmessage & onoffline & ononline & onpopstate 
							& onresize & onstorage & onunload
		]"
	EIS: "name=specification", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#body"

class
	HTML_BODY

inherit
	HTML_ELEMENT

feature -- Constants

	tag_name: STRING = "body"
			-- <Precursor>

feature -- Attributes: onafterprint

	onafterprint: detachable HTML_STRING_ATTRIBUTE
			-- onafterprint = functionbody NEW
			--	User printed current document.

	set_onafterprint (a_value: STRING_32)
			--
		require
			not_empty: not a_value.is_empty
		do
			create onafterprint.make_with_value ("onafterprint", a_value)
			check attached onafterprint as al_attribute then attributes.force (al_attribute) end
		end

feature -- Attributes: onbeforeprint

	onbeforeprint: detachable HTML_STRING_ATTRIBUTE
			-- onbeforeprint = functionbody NEW
			--	User requested printing of current document.

	set_onbeforeprint (a_value: STRING_32)
			--
		require
			not_empty: not a_value.is_empty
		do
			create onbeforeprint.make_with_value ("onbeforeprint", a_value)
			check attached onbeforeprint as al_attribute then attributes.force (al_attribute) end
		end

feature -- Attributes: onbeforeunload

	onbeforeunload: detachable HTML_STRING_ATTRIBUTE
			-- onbeforeunload = functionbody NEW
			--	Document is about to be unloaded.

	set_onbeforeunload (a_value: STRING_32)
			--
		require
			not_empty: not a_value.is_empty
		do
			create onbeforeunload.make_with_value ("onbeforeunload", a_value)
			check attached onbeforeunload as al_attribute then attributes.force (al_attribute) end
		end

feature -- Attributes: onblur

	onblur: detachable HTML_STRING_ATTRIBUTE
			-- onblur = functionbody
			--	Document lost focus.

	set_onblur (a_value: STRING_32)
			--
		require
			not_empty: not a_value.is_empty
		do
			create onblur.make_with_value ("onblur", a_value)
			check attached onblur as al_attribute then attributes.force (al_attribute) end
		end

feature -- Attributes: onerror

	onerror: detachable HTML_STRING_ATTRIBUTE
			-- onerror = functionbody NEW
			--	Document failed to load properly.

	set_onerror (a_value: STRING_32)
			--
		require
			not_empty: not a_value.is_empty
		do
			create onerror.make_with_value ("onerror", a_value)
			check attached onerror as al_attribute then attributes.force (al_attribute) end
		end

feature -- Attributes: onfocus

	onfocus: detachable HTML_STRING_ATTRIBUTE
			-- onfocus = functionbody
			--	Document received focus.

	set_onfocus (a_value: STRING_32)
			--
		require
			not_empty: not a_value.is_empty
		do
			create onfocus.make_with_value ("onfocus", a_value)
			check attached onfocus as al_attribute then attributes.force (al_attribute) end
		end

feature -- Attributes: onhashchange

	onhashchange: detachable HTML_STRING_ATTRIBUTE
			-- onhashchange = functionbody NEW
			--	Fragment identifier part of the document’s current address changed.

	set_onhashchange (a_value: STRING_32)
			--
		require
			not_empty: not a_value.is_empty
		do
			create onhashchange.make_with_value ("onhashchange", a_value)
			check attached onhashchange as al_attribute then attributes.force (al_attribute) end
		end

feature -- Attributes: onload

	onload: detachable HTML_STRING_ATTRIBUTE
			-- onload = functionbody
			--	Document finished loading.

	set_onload (a_value: STRING_32)
			--
		require
			not_empty: not a_value.is_empty
		do
			create onload.make_with_value ("onload", a_value)
			check attached onload as al_attribute then attributes.force (al_attribute) end
		end

feature -- Attributes: onmessage

	onmessage: detachable HTML_STRING_ATTRIBUTE
			-- onmessage = functionbody NEW
			--	Document received a message.

	set_onmessage (a_value: STRING_32)
			--
		require
			not_empty: not a_value.is_empty
		do
			create onmessage.make_with_value ("onmessage", a_value)
			check attached onmessage as al_attribute then attributes.force (al_attribute) end
		end

feature -- Attributes: onoffline

	onoffline: detachable HTML_STRING_ATTRIBUTE
			-- onoffline = functionbody NEW
			--	Network connections failed.

	set_onoffline (a_value: STRING_32)
			--
		require
			not_empty: not a_value.is_empty
		do
			create onoffline.make_with_value ("onoffline", a_value)
			check attached onoffline as al_attribute then attributes.force (al_attribute) end
		end

feature -- Attributes: ononline

	ononline: detachable HTML_STRING_ATTRIBUTE
			-- ononline = functionbody NEW
			--	Network connections returned.

	set_ononline (a_value: STRING_32)
			--
		require
			not_empty: not a_value.is_empty
		do
			create ononline.make_with_value ("ononline", a_value)
			check attached ononline as al_attribute then attributes.force (al_attribute) end
		end

feature -- Attributes: onpopstate

	onpopstate: detachable HTML_STRING_ATTRIBUTE
			-- onpopstate = functionbody NEW
			--	User navigated session history.

	set_onpopstate (a_value: STRING_32)
			--
		require
			not_empty: not a_value.is_empty
		do
			create onpopstate.make_with_value ("onpopstate", a_value)
			check attached onpopstate as al_attribute then attributes.force (al_attribute) end
		end

feature -- Attributes: onresize

	onresize: detachable HTML_STRING_ATTRIBUTE
			-- onresize = functionbody NEW
			--	Document view was resized.

	set_onresize (a_value: STRING_32)
			--
		require
			not_empty: not a_value.is_empty
		do
			create onresize.make_with_value ("onresize", a_value)
			check attached onresize as al_attribute then attributes.force (al_attribute) end
		end

feature -- Attributes: onstorage

	onstorage: detachable HTML_STRING_ATTRIBUTE
			-- onstorage = functionbody NEW
			--	Storage area changed.

	set_onstorage (a_value: STRING_32)
			--
		require
			not_empty: not a_value.is_empty
		do
			create onstorage.make_with_value ("onstorage", a_value)
			check attached onstorage as al_attribute then attributes.force (al_attribute) end
		end

feature -- Attributes: onunload

	onunload: detachable HTML_STRING_ATTRIBUTE
			-- onunload = functionbody
			--	Document is going away.

	set_onunload (a_value: STRING_32)
			--
		require
			not_empty: not a_value.is_empty
		do
			create onunload.make_with_value ("onunload", a_value)
			check attached onunload as al_attribute then attributes.force (al_attribute) end
		end

end
