/*
 * Class ITERATION_CURSOR [NATURAL_8]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_625 [] = {0xFF01,270,0xFFFF};
static const EIF_TYPE_INDEX egt_1_625 [] = {0xFF01,283,624,239,0xFFFF};
static const EIF_TYPE_INDEX egt_2_625 [] = {0xFF01,624,239,0xFFFF};
static const EIF_TYPE_INDEX egt_3_625 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_625 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_625 [] = {0xFF01,624,239,0xFFFF};
static const EIF_TYPE_INDEX egt_6_625 [] = {0xFF01,624,239,0xFFFF};
static const EIF_TYPE_INDEX egt_7_625 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_625 [] = {0xFF01,20,0xFFFF};
static const EIF_TYPE_INDEX egt_9_625 [] = {0xFF01,270,0xFFFF};
static const EIF_TYPE_INDEX egt_10_625 [] = {0xFF01,270,0xFFFF};
static const EIF_TYPE_INDEX egt_11_625 [] = {0xFF01,21,0xFFFF};
static const EIF_TYPE_INDEX egt_12_625 [] = {624,239,0xFFFF};
static const EIF_TYPE_INDEX egt_13_625 [] = {0xFF01,624,239,0xFFFF};
static const EIF_TYPE_INDEX egt_14_625 [] = {0xFFF8,1,0xFFFF};
static const EIF_TYPE_INDEX egt_15_625 [] = {0xFFF8,1,0xFFFF};


static const struct desc_info desc_625[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_625), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_625), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0203 /*257*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0203 /*257*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0203 /*257*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0203 /*257*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0203 /*257*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0203 /*257*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0203 /*257*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0203 /*257*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_625), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_625), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_625), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_625), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_625), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_625), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_625), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_625), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_625), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_625), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_625), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_625), 30, 0xFFFFFFFF},
	{EIF_GENERIC(egt_14_625), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0203 /*257*/), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(egt_15_625), 0x00, 0xFFFFFFFF},
};
void Init625(void)
{
	IDSC(desc_625, 0, 624);
	IDSC(desc_625 + 1, 1, 624);
	IDSC(desc_625 + 32, 65, 624);
}


#ifdef __cplusplus
}
#endif
