note
	title: "Representation of an HTML <main> element."
	EIS: "name=specification", "src=https://www.w3.org/TR/2012/WD-html-markup-20120320/spec.html#main" -- not working
	EIS: "name=w3schools_main", "src=https://www.w3schools.com/tags/tag_main.asp"

class
	HTML_MAIN

inherit
	HTML_ELEMENT

feature -- Constants

	tag_name: STRING = "main"
			-- <Precursor>

feature -- Event Attributes

-- Window Event Attributes
-- Events triggered for the window object (applies to the <body> tag):

-- Attribute		Value	Description
-- onafterprint		script	Script to be run after the document is printed
-- onbeforeprint	script	Script to be run before the document is printed
-- onbeforeunload	script	Script to be run when the document is about to be unloaded
-- onerror			script	Script to be run when an error occurs
-- onhashchange		script	Script to be run when there has been changes to the anchor part of the a URL
-- onload			script	Fires after the page is finished loading
-- onmessage		script	Script to be run when the message is triggered
-- onoffline		script	Script to be run when the browser starts to work offline
-- ononline			script	Script to be run when the browser starts to work online
-- onpagehide		script	Script to be run when a user navigates away from a page
-- onpageshow		script	Script to be run when a user navigates to a page
-- onpopstate		script	Script to be run when the window's history changes
-- onresize			script	Fires when the browser window is resized
-- onstorage		script	Script to be run when a Web Storage area is updated
-- onunload			script	Fires once a page has unloaded (or the browser window has been closed)

end
