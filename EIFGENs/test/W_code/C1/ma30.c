/*
 * Code for class MATH_CONST
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F30_602(EIF_REFERENCE);
extern EIF_TYPED_VALUE F30_603(EIF_REFERENCE);
extern EIF_TYPED_VALUE F30_604(EIF_REFERENCE);
extern EIF_TYPED_VALUE F30_605(EIF_REFERENCE);
extern EIF_TYPED_VALUE F30_606(EIF_REFERENCE);
extern void EIF_Minit30(void);

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

/* {MATH_CONST}.pi */
EIF_TYPED_VALUE F30_602 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = (EIF_REAL_64) 3.1415926535897931;
	return r;
}

/* {MATH_CONST}.pi_2 */
EIF_TYPED_VALUE F30_603 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = (EIF_REAL_64) 1.5707963267948966;
	return r;
}

/* {MATH_CONST}.pi_4 */
EIF_TYPED_VALUE F30_604 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = (EIF_REAL_64) 0.7853981633974485;
	return r;
}

/* {MATH_CONST}.sqrt2 */
EIF_TYPED_VALUE F30_605 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = (EIF_REAL_64) 1.4142135623730951;
	return r;
}

/* {MATH_CONST}.euler */
EIF_TYPED_VALUE F30_606 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = (EIF_REAL_64) 2.7182818284590451;
	return r;
}

void EIF_Minit30 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
