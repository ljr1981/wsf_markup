note
	description: "[
		This class changes nothing from STRING_32
		It is here just to make things easier to type
		and shorter to read and more compact in code.
		
		Other versions might be:
		S8 = STRING, STRING_8
		RSG = READABLE_STRING_GENERAL
		RFG32 = READABLE_STRING_GENERAL_32
		]"

class
	S32

inherit
	STRING_32

create
	make,
	make_empty,
	make_filled,
	make_from_string,
	make_from_string_general,
	make_from_c,
	make_from_c_pointer,
	make_from_cil,
	make_from_separate

end
