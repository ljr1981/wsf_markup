/*
 * Code for class ITP_SHARED_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F40_770(EIF_REFERENCE);
extern EIF_TYPED_VALUE F40_771(EIF_REFERENCE);
extern EIF_TYPED_VALUE F40_772(EIF_REFERENCE);
extern EIF_TYPED_VALUE F40_773(EIF_REFERENCE);
extern EIF_TYPED_VALUE F40_774(EIF_REFERENCE);
extern EIF_TYPED_VALUE F40_775(EIF_REFERENCE);
extern EIF_TYPED_VALUE F40_776(EIF_REFERENCE);
extern void EIF_Minit40(void);

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

/* {ITP_SHARED_CONSTANTS}.start_request_flag */
EIF_TYPED_VALUE F40_770 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 1U);
	return r;
}

/* {ITP_SHARED_CONSTANTS}.quit_request_flag */
EIF_TYPED_VALUE F40_771 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 2U);
	return r;
}

/* {ITP_SHARED_CONSTANTS}.execute_request_flag */
EIF_TYPED_VALUE F40_772 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 3U);
	return r;
}

/* {ITP_SHARED_CONSTANTS}.type_request_flag */
EIF_TYPED_VALUE F40_773 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 4U);
	return r;
}

/* {ITP_SHARED_CONSTANTS}.normal_response_flag */
EIF_TYPED_VALUE F40_774 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 1U);
	return r;
}

/* {ITP_SHARED_CONSTANTS}.invariant_violation_on_entry_response_flag */
EIF_TYPED_VALUE F40_775 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 2U);
	return r;
}

/* {ITP_SHARED_CONSTANTS}.internal_error_respones_flag */
EIF_TYPED_VALUE F40_776 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 3U);
	return r;
}

void EIF_Minit40 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
