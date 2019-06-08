note
	description: "Abstract notion of a Markup Item"

deferred class
	MU_ITEM

inherit
	MU_ANY

feature -- Constants

	left_enclosing_character: CHARACTER
			-- Character enclosing the left side of Current item.
		deferred
		end

	right_enclosing_character: CHARACTER
			-- Character enclosing the right side of Current item.
		deferred
		end

end
