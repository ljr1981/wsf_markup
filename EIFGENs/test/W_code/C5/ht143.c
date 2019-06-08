/*
 * Code for class HTML_STRING_ATTRIBUTE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F143_1651(EIF_REFERENCE);
extern EIF_TYPED_VALUE F143_1652(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit143(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {HTML_STRING_ATTRIBUTE}.quote */
EIF_TYPED_VALUE F143_1651 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR32;
	r.it_c4 = (EIF_CHARACTER_32) (EIF_CHARACTER_32) 34U;
	return r;
}

/* {HTML_STRING_ATTRIBUTE}.item_to_string_32 */
EIF_TYPED_VALUE F143_1652 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "item_to_string_32";
	RTEX;
#define arg1 arg1x.it_r
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 142, Current, 0, 1, 1670);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(142, Current, 1670);
	RTCC(arg1, 142, l_feature_name, 1, eif_new_type(267, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF800010B, 0,0); /* Result */
	Result = (EIF_REFERENCE) RTCCL(arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef arg1
}

void EIF_Minit143 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
