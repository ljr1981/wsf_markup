/*
 * Code for class HTML_ATTRIBUTE_TEST_SET
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F141_1635(EIF_REFERENCE);
extern void EIF_Minit141(void);

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

/* {HTML_ATTRIBUTE_TEST_SET}.html_attribute_test */
void F141_1635 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "html_attribute_test";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(12);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLR(5,tr3);
	RTLR(6,ur3);
	RTLR(7,Current);
	RTLR(8,tr4);
	RTLR(9,tr5);
	RTLR(10,tr6);
	RTLR(11,tr7);
	RTLIU(12);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 140, Current, 1, 0, 1641);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(140, Current, 1641);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000156, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(142, 0x01).id);
	tr2 = RTMS_EX_H("attribute",9,1585140837);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1452, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("make_string",11,1284615783);
	ur1 = tr1;
	tr2 = RTMS32_EX_H("a\000\000\000t\000\000\000t\000\000\000r\000\000\000i\000\000\000b\000\000\000u\000\000\000t\000\000\000e\000\000\000=\000\000\000\"\000\000\000\"\000\000\000",12,2008171554);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1463, "attribute_out", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(713, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(3);
	RTDBGAL(1, 0xF8000156, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(143, 0x01).id);
	tr2 = RTMS_EX_H("attribute",9,1585140837);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1452, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tr1 = RTMS_EX_H("make_numeric",12,2010688611);
	ur1 = tr1;
	tr2 = RTMS32_EX_H("a\000\000\000t\000\000\000t\000\000\000r\000\000\000i\000\000\000b\000\000\000u\000\000\000t\000\000\000e\000\000\000=\000\000\000",10,2069850429);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1463, "attribute_out", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(713, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(5);
	RTDBGAL(1, 0xF8000156, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(144, 0x01).id);
	tr2 = RTMS_EX_H("attribute",9,1585140837);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1452, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(5,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	tr1 = RTMS_EX_H("make_boolean",12,370655854);
	ur1 = tr1;
	tr2 = RTMS32_EX_H("a\000\000\000t\000\000\000t\000\000\000r\000\000\000i\000\000\000b\000\000\000u\000\000\000t\000\000\000e\000\000\000=\000\000\000\"\000\000\000\"\000\000\000",12,2008171554);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1463, "attribute_out", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(713, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(7);
	RTDBGAL(1, 0xF8000156, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(142, 0x01).id);
	tr2 = RTMS_EX_H("attribute",9,1585140837);
	ur1 = tr2;
	tr3 = RTMS_EX_H("blah",4,1651269992);
	tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4473, "as_string_32", tr3))(tr3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(1453, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(7,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(8);
	tr1 = RTMS_EX_H("make_with_text_value",20,1252349285);
	ur1 = tr1;
	tr2 = RTMS32_EX_H("a\000\000\000t\000\000\000t\000\000\000r\000\000\000i\000\000\000b\000\000\000u\000\000\000t\000\000\000e\000\000\000=\000\000\000\"\000\000\000b\000\000\000l\000\000\000a\000\000\000h\000\000\000\"\000\000\000",16,1376368162);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1463, "attribute_out", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(713, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(9);
	RTDBGAL(1, 0xF8000156, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(143, 0x01).id);
	tr2 = RTMS_EX_H("attribute",9,1585140837);
	ur1 = tr2;
	ur2 = RTLN(eif_new_type(254, 0x00).id);
	*(EIF_INTEGER_32 *)ur2 = ((EIF_INTEGER_32) 100L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(1453, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(9,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(10);
	tr1 = RTMS_EX_H("make_with_integer_value",23,137396581);
	ur1 = tr1;
	tr2 = RTMS32_EX_H("a\000\000\000t\000\000\000t\000\000\000r\000\000\000i\000\000\000b\000\000\000u\000\000\000t\000\000\000e\000\000\000=\000\000\0001\000\000\0000\000\000\0000\000\000\000",13,845230384);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1463, "attribute_out", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(713, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(11);
	RTDBGAL(1, 0xF8000156, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(144, 0x01).id);
	tr2 = RTMS_EX_H("attribute",9,1585140837);
	ur1 = tr2;
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(1453, Dtype(tr1)))(tr1, ur1x, ub1x);
	RTNHOOK(11,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(12);
	tr1 = RTMS_EX_H("make_with_boolean_value",23,1143958885);
	ur1 = tr1;
	tr2 = RTMS32_EX_H("a\000\000\000t\000\000\000t\000\000\000r\000\000\000i\000\000\000b\000\000\000u\000\000\000t\000\000\000e\000\000\000=\000\000\000\"\000\000\000t\000\000\000r\000\000\000u\000\000\000e\000\000\000\"\000\000\000",16,1478479650);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1463, "attribute_out", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(713, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(13);
	RTDBGAL(1, 0xF8000156, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(142, 0x01).id);
	tr2 = RTMS_EX_H("attribute",9,1585140837);
	ur1 = tr2;
	tr3 = RTMS_EX_H("blah1",5,1819075633);
	tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4473, "as_string_32", tr3))(tr3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(1453, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(13,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(14);
	tr1 = RTMS_EX_H("blah1",5,1819075633);
	ur1 = tr1;
	tr2 = RTMS32_EX_H("a\000\000\000t\000\000\000t\000\000\000r\000\000\000i\000\000\000b\000\000\000u\000\000\000t\000\000\000e\000\000\000=\000\000\000\"\000\000\000b\000\000\000l\000\000\000a\000\000\000h\000\000\0001\000\000\000\"\000\000\000",17,163564834);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1463, "attribute_out", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(713, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(15);
	tr1 = RTMS_EX_H("blah2",5,1819075634);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1459, "add_value", loc1))(loc1, ur1x);
	RTHOOK(16);
	tr1 = RTMS_EX_H("blah2",5,1819075634);
	ur1 = tr1;
	tr2 = RTMS32_EX_H("a\000\000\000t\000\000\000t\000\000\000r\000\000\000i\000\000\000b\000\000\000u\000\000\000t\000\000\000e\000\000\000=\000\000\000\"\000\000\000b\000\000\000l\000\000\000a\000\000\000h\000\000\0001\000\000\000 \000\000\000b\000\000\000l\000\000\000a\000\000\000h\000\000\0002\000\000\000\"\000\000\000",23,1933705762);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1463, "attribute_out", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(713, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(17);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1458, "reset_values", loc1))(loc1);
	RTHOOK(18);
	tr1 = RTMS_EX_H("reset_to_empty",14,47030905);
	ur1 = tr1;
	tr2 = RTMS32_EX_H("a\000\000\000t\000\000\000t\000\000\000r\000\000\000i\000\000\000b\000\000\000u\000\000\000t\000\000\000e\000\000\000=\000\000\000\"\000\000\000\"\000\000\000",12,2008171554);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1463, "attribute_out", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(713, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(19);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	{
		static EIF_TYPE_INDEX typarr0[] = {292,0xFF01,270,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr2) = 2L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	tr3 = RTMS_EX_H("blahx",5,1819075704);
	*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("blahy",5,1819075705);
	*((EIF_REFERENCE *)tr2+1) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(3318, Dtype(tr2)))(tr2).it_r;
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1461, "add_values", loc1))(loc1, ur1x);
	RTHOOK(20);
	tr1 = RTMS_EX_H("blahx_blahy",11,915328377);
	ur1 = tr1;
	tr2 = RTMS32_EX_H("a\000\000\000t\000\000\000t\000\000\000r\000\000\000i\000\000\000b\000\000\000u\000\000\000t\000\000\000e\000\000\000=\000\000\000\"\000\000\000b\000\000\000l\000\000\000a\000\000\000h\000\000\000x\000\000\000 \000\000\000b\000\000\000l\000\000\000a\000\000\000h\000\000\000y\000\000\000\"\000\000\000",23,1950082338);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1463, "attribute_out", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(713, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(21);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	{
		static EIF_TYPE_INDEX typarr0[] = {292,0xFF01,270,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr2) = 2L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	tr3 = RTMS_EX_H("blaha",5,1819075681);
	*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("blahb",5,1819075682);
	*((EIF_REFERENCE *)tr2+1) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(3318, Dtype(tr2)))(tr2).it_r;
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1462, "add_values_with_reset", loc1))(loc1, ur1x);
	RTHOOK(22);
	tr1 = RTMS_EX_H("blaha_blahb",11,76448354);
	ur1 = tr1;
	tr2 = RTMS32_EX_H("a\000\000\000t\000\000\000t\000\000\000r\000\000\000i\000\000\000b\000\000\000u\000\000\000t\000\000\000e\000\000\000=\000\000\000\"\000\000\000b\000\000\000l\000\000\000a\000\000\000h\000\000\000a\000\000\000 \000\000\000b\000\000\000l\000\000\000a\000\000\000h\000\000\000b\000\000\000\"\000\000\000",23,1944777250);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1463, "attribute_out", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(713, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(23);
	tr1 = RTMS_EX_H("blaha",5,1819075681);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1460, "add_unique_value", loc1))(loc1, ur1x);
	RTHOOK(24);
	tr1 = RTMS_EX_H("unique_blaha_blahb",18,551859554);
	ur1 = tr1;
	tr2 = RTMS32_EX_H("a\000\000\000t\000\000\000t\000\000\000r\000\000\000i\000\000\000b\000\000\000u\000\000\000t\000\000\000e\000\000\000=\000\000\000\"\000\000\000b\000\000\000l\000\000\000a\000\000\000h\000\000\000a\000\000\000 \000\000\000b\000\000\000l\000\000\000a\000\000\000h\000\000\000b\000\000\000\"\000\000\000",23,1944777250);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1463, "attribute_out", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(713, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(25);
	RTDBGAL(1, 0xF8000156, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(142, 0x01).id);
	tr2 = RTMS_EX_H("attribute",9,1585140837);
	ur1 = tr2;
	ui4_1 = ((EIF_INTEGER_32) 2L);
	{
		static EIF_TYPE_INDEX typarr0[] = {292,0xFF01,267,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr4) = 2L;
		memset(tr4, 0, RT_SPECIAL_VISIBLE_SIZE(tr4));
	}
	tr6 = RTMS_EX_H("blahx",5,1819075704);
	tr7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4473, "as_string_32", tr6))(tr6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr5 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr4+0) = (EIF_REFERENCE) tr5;
	RTAR(tr4,tr5);
	tr6 = RTMS_EX_H("blahy",5,1819075705);
	tr7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4473, "as_string_32", tr6))(tr6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr5 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr4+1) = (EIF_REFERENCE) tr5;
	RTAR(tr4,tr5);
	tr3 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(3318, Dtype(tr4)))(tr4).it_r;
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(1454, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(25,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(26);
	tr1 = RTMS_EX_H("creation_from_list",18,604103284);
	ur1 = tr1;
	tr2 = RTMS32_EX_H("a\000\000\000t\000\000\000t\000\000\000r\000\000\000i\000\000\000b\000\000\000u\000\000\000t\000\000\000e\000\000\000=\000\000\000\"\000\000\000b\000\000\000l\000\000\000a\000\000\000h\000\000\000x\000\000\000 \000\000\000b\000\000\000l\000\000\000a\000\000\000h\000\000\000y\000\000\000\"\000\000\000",23,1950082338);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1463, "attribute_out", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(713, dtype))(Current, ur1x, ur2x, ur3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ub1
}

void EIF_Minit141 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
