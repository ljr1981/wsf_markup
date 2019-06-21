note
	title: "HTML ARIA Attributes"
	description: "[
		Accessible Rich Internet Applications (ARIA) defines ways to make Web 
		content and Web applications (especially those developed with Ajax and 
		JavaScript) more accessible to people with disabilities.
		]"
	EIS: "src=https://www.w3.org/WAI/PF/aria/states_and_properties#state_prop_def"
	EIS: "src=https://developer.mozilla.org/en-US/docs/Web/Accessibility/ARIA"

class
	HTML_ARIA_ATTRIBUTES

note
	attributes: "[
6.6. Definitions of States and Properties (all aria-* attributes)

Below is an alphabetical list of WAI-ARIA states and properties to be used by rich internet 
application authors. A detailed definition of each WAI-ARIA state and property follows this 
compact list.

aria-activedescendant
	Identifies the currently active descendant of a composite widget.

aria-atomic
	Indicates whether assistive technologies will present all, or only parts of, the changed 
	region based on the change notifications defined by the aria-relevant attribute. 
	See related aria-relevant.

aria-autocomplete
	Indicates whether user input completion suggestions are provided.

aria-busy (state)
	Indicates whether an element, and its subtree, are currently being updated.

aria-checked (state)
	Indicates the current "checked" state of checkboxes, radio buttons, and other widgets. 
	See related aria-pressed and aria-selected.

aria-controls
	Identifies the element (or elements) whose contents or presence are controlled by the 
	current element. See related aria-owns.

aria-describedby
	Identifies the element (or elements) that describes the object. See related aria-labelledby.

aria-disabled (state)
	Indicates that the element is perceivable but disabled, so it is not editable or otherwise 
	operable. See related aria-hidden and aria-readonly.

aria-dropeffect
	Indicates what functions can be performed when the dragged object is released on the 
	drop target. This allows assistive technologies to convey the possible drag options 
	available to users, including whether a pop-up menu of choices is provided by the application. 
	Typically, drop effect functions can only be provided once an object has been grabbed for 
	a drag operation as the drop effect functions available are dependent on the object 
	being dragged.

aria-expanded (state)
	Indicates whether the element, or another grouping element it controls, is currently 
	expanded or collapsed.

aria-flowto
	Identifies the next element (or elements) in an alternate reading order of content which, 
	at the user's discretion, allows assistive technology to override the general default of reading in document source order.

aria-grabbed (state)
	Indicates an element's "grabbed" state in a drag-and-drop operation.

aria-haspopup
	Indicates that the element has a popup context menu or sub-level menu.

aria-hidden (state)
	Indicates that the element and all of its descendants are not visible or perceivable to 
	any user as implemented by the author. See related aria-disabled.

aria-invalid (state)
	Indicates the entered value does not conform to the format expected by the application.

aria-label
	Defines a string value that labels the current element. See related aria-labelledby.

aria-labelledby
	Identifies the element (or elements) that labels the current element. See related 
	aria-label and aria-describedby.

aria-level
	Defines the hierarchical level of an element within a structure.

aria-live
	Indicates that an element will be updated, and describes the types of updates the user 
	agents, assistive technologies, and user can expect from the live region.

aria-multiline
	Indicates whether a text box accepts multiple lines of input or only a single line.

aria-multiselectable
	Indicates that the user may select more than one item from the current selectable descendants.

aria-orientation
	Indicates whether the element and orientation is horizontal or vertical.

aria-owns
	Identifies an element (or elements) in order to define a visual, functional, or contextual 
	parent/child relationship between DOM elements where the DOM hierarchy cannot be used to 
	represent the relationship. See related aria-controls.

aria-posinset
	Defines an element's number or position in the current set of listitems or treeitems. 
	Not required if all elements in the set are present in the DOM. See related aria-setsize.

aria-pressed (state)
	Indicates the current "pressed" state of toggle buttons. See related aria-checked and aria-selected.

aria-readonly
	Indicates that the element is not editable, but is otherwise operable. See related aria-disabled.

aria-relevant
	Indicates what user agent change notifications (additions, removals, etc.) assistive 
	technologies will receive within a live region. See related aria-atomic.

aria-required
	Indicates that user input is required on the element before a form may be submitted.

aria-selected (state)
	Indicates the current "selected" state of various widgets. See related aria-checked and aria-pressed.

aria-setsize
	Defines the number of items in the current set of listitems or treeitems. Not required if 
	all elements in the set are present in the DOM. See related aria-posinset.

aria-sort
	Indicates if items in a table or grid are sorted in ascending or descending order.

aria-valuemax
	Defines the maximum allowed value for a range widget.

aria-valuemin
	Defines the minimum allowed value for a range widget.

aria-valuenow
	Defines the current value for a range widget. See related aria-valuetext.

aria-valuetext
	Defines the human readable text alternative of aria-valuenow for a range widget.
]"

end
