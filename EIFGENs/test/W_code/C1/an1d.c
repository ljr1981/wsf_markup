/*
 * Class ANY
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_1 [] = {0xFF01,270,0xFFFF};
static const EIF_TYPE_INDEX egt_1_1 [] = {0xFF01,283,0,0xFFFF};
static const EIF_TYPE_INDEX egt_2_1 [] = {0xFF01,0,0xFFFF};
static const EIF_TYPE_INDEX egt_3_1 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_1 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_1 [] = {0xFF01,0,0xFFFF};
static const EIF_TYPE_INDEX egt_6_1 [] = {0xFF01,0,0xFFFF};
static const EIF_TYPE_INDEX egt_7_1 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_1 [] = {0xFF01,20,0xFFFF};
static const EIF_TYPE_INDEX egt_9_1 [] = {0xFF01,270,0xFFFF};
static const EIF_TYPE_INDEX egt_10_1 [] = {0xFF01,270,0xFFFF};
static const EIF_TYPE_INDEX egt_11_1 [] = {0xFF01,21,0xFFFF};
static const EIF_TYPE_INDEX egt_12_1 [] = {0xFF01,0,0xFFFF};


static const struct desc_info desc_1[] = {
	{EIF_GENERIC(NULL), 31, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_1), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_1), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0203 /*257*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0203 /*257*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0203 /*257*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0203 /*257*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0203 /*257*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0203 /*257*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0203 /*257*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0203 /*257*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_1), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_1), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_1), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_1), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_1), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_1), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_1), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_1), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_1), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_1), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01 /*0*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_1), 30, 0xFFFFFFFF},
};
void Init1(void)
{
	IDSC(desc_1, 0, 0);
	IDSC(desc_1 + 1, 1, 0);
}


#ifdef __cplusplus
}
#endif
