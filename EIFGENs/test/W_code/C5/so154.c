/*
 * Code for class SOCKET_RESOURCES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F154_1762(EIF_REFERENCE);
extern EIF_TYPED_VALUE F154_1763(EIF_REFERENCE);
extern EIF_TYPED_VALUE F154_1764(EIF_REFERENCE);
extern EIF_TYPED_VALUE F154_1765(EIF_REFERENCE);
extern EIF_TYPED_VALUE F154_1766(EIF_REFERENCE);
extern EIF_TYPED_VALUE F154_1767(EIF_REFERENCE);
extern EIF_TYPED_VALUE F154_1768(EIF_REFERENCE);
extern EIF_TYPED_VALUE F154_1769(EIF_REFERENCE);
extern EIF_TYPED_VALUE F154_1770(EIF_REFERENCE);
extern EIF_TYPED_VALUE F154_1771(EIF_REFERENCE);
extern EIF_TYPED_VALUE F154_1772(EIF_REFERENCE);
extern EIF_TYPED_VALUE F154_1773(EIF_REFERENCE);
extern EIF_TYPED_VALUE F154_1774(EIF_REFERENCE);
extern EIF_TYPED_VALUE F154_1775(EIF_REFERENCE);
extern EIF_TYPED_VALUE F154_1776(EIF_REFERENCE);
extern EIF_TYPED_VALUE F154_1777(EIF_REFERENCE);
extern EIF_TYPED_VALUE F154_1778(EIF_REFERENCE);
extern EIF_TYPED_VALUE F154_1779(EIF_REFERENCE);
extern EIF_TYPED_VALUE F154_1780(EIF_REFERENCE);
extern EIF_TYPED_VALUE F154_1781(EIF_REFERENCE);
extern EIF_TYPED_VALUE F154_1782(EIF_REFERENCE);
extern EIF_TYPED_VALUE F154_1783(EIF_REFERENCE);
extern EIF_TYPED_VALUE F154_1784(EIF_REFERENCE);
extern EIF_TYPED_VALUE F154_1785(EIF_REFERENCE);extern EIF_INTEGER_32 c_oobmsg();

extern EIF_TYPED_VALUE F154_1786(EIF_REFERENCE);extern EIF_INTEGER_32 c_peekmsg();

extern EIF_TYPED_VALUE F154_1787(EIF_REFERENCE);extern EIF_INTEGER_32 c_msgdontroute();

extern EIF_TYPED_VALUE F154_1788(EIF_REFERENCE);extern EIF_INTEGER_32 level_sol_socket();

extern EIF_TYPED_VALUE F154_1789(EIF_REFERENCE);extern EIF_INTEGER_32 level_nsproto_raw();

extern EIF_TYPED_VALUE F154_1790(EIF_REFERENCE);extern EIF_INTEGER_32 level_nsproto_pe();

extern EIF_TYPED_VALUE F154_1791(EIF_REFERENCE);extern EIF_INTEGER_32 level_nsproto_spp();

extern EIF_TYPED_VALUE F154_1792(EIF_REFERENCE);extern EIF_INTEGER_32 level_iproto_tcp();

extern EIF_TYPED_VALUE F154_1793(EIF_REFERENCE);extern EIF_INTEGER_32 level_iproto_ip();

extern EIF_TYPED_VALUE F154_1794(EIF_REFERENCE);extern EIF_INTEGER_32 ipoptions();

extern EIF_TYPED_VALUE F154_1795(EIF_REFERENCE);extern EIF_INTEGER_32 tcpmax_seg();

extern EIF_TYPED_VALUE F154_1796(EIF_REFERENCE);extern EIF_INTEGER_32 tcpno_delay();

extern EIF_TYPED_VALUE F154_1797(EIF_REFERENCE);extern EIF_INTEGER_32 so_headerson_input();

extern EIF_TYPED_VALUE F154_1798(EIF_REFERENCE);extern EIF_INTEGER_32 so_headerson_output();

extern EIF_TYPED_VALUE F154_1799(EIF_REFERENCE);extern EIF_INTEGER_32 so_defaultheaders();

extern EIF_TYPED_VALUE F154_1800(EIF_REFERENCE);extern EIF_INTEGER_32 so_lastheader();

extern EIF_TYPED_VALUE F154_1801(EIF_REFERENCE);extern EIF_INTEGER_32 somtu();

extern EIF_TYPED_VALUE F154_1802(EIF_REFERENCE);extern EIF_INTEGER_32 soseqno();

extern EIF_TYPED_VALUE F154_1803(EIF_REFERENCE);extern EIF_INTEGER_32 so_allpackets();

extern EIF_TYPED_VALUE F154_1804(EIF_REFERENCE);extern EIF_INTEGER_32 so_nsiproute();

extern EIF_TYPED_VALUE F154_1805(EIF_REFERENCE);extern EIF_INTEGER_32 sobroadcast();

extern EIF_TYPED_VALUE F154_1806(EIF_REFERENCE);extern EIF_INTEGER_32 sodebug();

extern EIF_TYPED_VALUE F154_1807(EIF_REFERENCE);extern EIF_INTEGER_32 so_dont_route();

extern EIF_TYPED_VALUE F154_1808(EIF_REFERENCE);extern EIF_INTEGER_32 soerror();

extern EIF_TYPED_VALUE F154_1809(EIF_REFERENCE);extern EIF_INTEGER_32 so_keep_alive();

extern EIF_TYPED_VALUE F154_1810(EIF_REFERENCE);extern EIF_INTEGER_32 solinger();

extern EIF_TYPED_VALUE F154_1811(EIF_REFERENCE);extern EIF_INTEGER_32 so_oob_inline();

extern EIF_TYPED_VALUE F154_1812(EIF_REFERENCE);extern EIF_INTEGER_32 so_rcv_buf();

extern EIF_TYPED_VALUE F154_1813(EIF_REFERENCE);extern EIF_INTEGER_32 so_snd_buf();

extern EIF_TYPED_VALUE F154_1814(EIF_REFERENCE);extern EIF_INTEGER_32 so_rcv_lowat();

extern EIF_TYPED_VALUE F154_1815(EIF_REFERENCE);extern EIF_INTEGER_32 so_snd_lowat();

extern EIF_TYPED_VALUE F154_1816(EIF_REFERENCE);extern EIF_INTEGER_32 so_rcv_timeo();

extern EIF_TYPED_VALUE F154_1817(EIF_REFERENCE);extern EIF_INTEGER_32 so_snd_timeo();

extern EIF_TYPED_VALUE F154_1818(EIF_REFERENCE);extern EIF_INTEGER_32 so_reuse_addr();

extern EIF_TYPED_VALUE F154_1819(EIF_REFERENCE);extern EIF_INTEGER_32 sotype();

extern EIF_TYPED_VALUE F154_1820(EIF_REFERENCE);extern EIF_INTEGER_32 so_use_loopback();

extern EIF_TYPED_VALUE F154_1821(EIF_REFERENCE);extern EIF_INTEGER_32 c_errorno();

extern void F154_1822(EIF_REFERENCE);extern void c_reset_error();

extern EIF_TYPED_VALUE F154_1823(EIF_REFERENCE);extern EIF_INTEGER_32 family_no_support();

extern EIF_TYPED_VALUE F154_1824(EIF_REFERENCE);extern EIF_INTEGER_32 proto_no_support();

extern EIF_TYPED_VALUE F154_1825(EIF_REFERENCE);extern EIF_INTEGER_32 table_full();

extern EIF_TYPED_VALUE F154_1826(EIF_REFERENCE);extern EIF_INTEGER_32 no_buffs();

extern EIF_TYPED_VALUE F154_1827(EIF_REFERENCE);extern EIF_INTEGER_32 c_permission();

extern EIF_TYPED_VALUE F154_1828(EIF_REFERENCE);extern EIF_INTEGER_32 bad_socket();

extern EIF_TYPED_VALUE F154_1829(EIF_REFERENCE);extern EIF_INTEGER_32 no_socket();

extern EIF_TYPED_VALUE F154_1830(EIF_REFERENCE);extern EIF_INTEGER_32 error_address();

extern EIF_TYPED_VALUE F154_1831(EIF_REFERENCE);extern EIF_INTEGER_32 busy_address();

extern EIF_TYPED_VALUE F154_1832(EIF_REFERENCE);extern EIF_INTEGER_32 bound_address();

extern EIF_TYPED_VALUE F154_1833(EIF_REFERENCE);extern EIF_INTEGER_32 no_access();

extern EIF_TYPED_VALUE F154_1834(EIF_REFERENCE);extern EIF_INTEGER_32 unreadable();

extern EIF_TYPED_VALUE F154_1835(EIF_REFERENCE);extern EIF_INTEGER_32 no_connect();

extern EIF_TYPED_VALUE F154_1836(EIF_REFERENCE);extern EIF_INTEGER_32 would_block();

extern EIF_TYPED_VALUE F154_1837(EIF_REFERENCE);extern EIF_INTEGER_32 in_use();

extern EIF_TYPED_VALUE F154_1838(EIF_REFERENCE);extern EIF_INTEGER_32 socket_expire();

extern EIF_TYPED_VALUE F154_1839(EIF_REFERENCE);extern EIF_INTEGER_32 connect_refused();

extern EIF_TYPED_VALUE F154_1840(EIF_REFERENCE);extern EIF_INTEGER_32 no_network();

extern EIF_TYPED_VALUE F154_1841(EIF_REFERENCE);extern EIF_INTEGER_32 no_option();

extern EIF_TYPED_VALUE F154_1842(EIF_REFERENCE);extern EIF_INTEGER_32 c_einprogress();

extern EIF_TYPED_VALUE F154_1843(EIF_REFERENCE);extern EIF_INTEGER_32 sock_raw();

extern EIF_TYPED_VALUE F154_1844(EIF_REFERENCE);extern EIF_INTEGER_32 sock_dgrm();

extern EIF_TYPED_VALUE F154_1845(EIF_REFERENCE);extern EIF_INTEGER_32 sock_stream();

extern EIF_TYPED_VALUE F154_1846(EIF_REFERENCE);extern EIF_INTEGER_32 af_ns();

extern EIF_TYPED_VALUE F154_1847(EIF_REFERENCE);extern EIF_INTEGER_32 af_inet();

extern EIF_TYPED_VALUE F154_1848(EIF_REFERENCE);extern EIF_INTEGER_32 af_inet6();

extern EIF_TYPED_VALUE F154_1849(EIF_REFERENCE);extern EIF_INTEGER_32 af_unix();

extern EIF_TYPED_VALUE F154_1850(EIF_REFERENCE);extern EIF_INTEGER_32 c_fgetown();

extern EIF_TYPED_VALUE F154_1851(EIF_REFERENCE);extern EIF_INTEGER_32 c_fsetown();

extern EIF_TYPED_VALUE F154_1852(EIF_REFERENCE);extern EIF_INTEGER_32 c_fsetfl();

extern EIF_TYPED_VALUE F154_1853(EIF_REFERENCE);extern EIF_INTEGER_32 c_fgetfl();

extern EIF_TYPED_VALUE F154_1854(EIF_REFERENCE);extern EIF_INTEGER_32 c_fndelay();

extern EIF_TYPED_VALUE F154_1855(EIF_REFERENCE);extern EIF_INTEGER_32 c_fasync();

extern void EIF_Minit154(void);

#ifdef __cplusplus
}
#endif

#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SOCKET_RESOURCES}.error */
EIF_TYPED_VALUE F154_1762 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "error";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1851);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(153, Current, 1851);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1575, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(0, 0xF800010E, 0,0); /* Result */
		tr1 = RTMS_EX_H("Address not readable",20,873162085);
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(3);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1573, dtype))(Current)).it_b);
		if (tb1) {
			RTHOOK(4);
			RTDBGAL(0, 0xF800010E, 0,0); /* Result */
			tr1 = RTMS_EX_H("Socket Ok",9,1074390891);
			Result = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(5);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1576, dtype))(Current)).it_b);
			if (tb1) {
				RTHOOK(6);
				RTDBGAL(0, 0xF800010E, 0,0); /* Result */
				tr1 = RTMS_EX_H("Address protected",17,1503340644);
				Result = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(7);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1577, dtype))(Current)).it_b);
				if (tb1) {
					RTHOOK(8);
					RTDBGAL(0, 0xF800010E, 0,0); /* Result */
					tr1 = RTMS_EX_H("Address already bound",21,1660292964);
					Result = (EIF_REFERENCE) tr1;
				} else {
					RTHOOK(9);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1578, dtype))(Current)).it_b);
					if (tb1) {
						RTHOOK(10);
						RTDBGAL(0, 0xF800010E, 0,0); /* Result */
						tr1 = RTMS_EX_H("Address in use",14,15438693);
						Result = (EIF_REFERENCE) tr1;
					} else {
						RTHOOK(11);
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1579, dtype))(Current)).it_b);
						if (tb1) {
							RTHOOK(12);
							RTDBGAL(0, 0xF800010E, 0,0); /* Result */
							tr1 = RTMS_EX_H("Address not available",21,1332773733);
							Result = (EIF_REFERENCE) tr1;
						} else {
							RTHOOK(13);
							tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1580, dtype))(Current)).it_b);
							if (tb1) {
								RTHOOK(14);
								RTDBGAL(0, 0xF800010E, 0,0); /* Result */
								tr1 = RTMS_EX_H("Address is a file",17,2142535781);
								Result = (EIF_REFERENCE) tr1;
							} else {
								RTHOOK(15);
								tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1581, dtype))(Current)).it_b);
								if (tb1) {
									RTHOOK(16);
									RTDBGAL(0, 0xF800010E, 0,0); /* Result */
									tr1 = RTMS_EX_H("Socket invalid",14,1837204324);
									Result = (EIF_REFERENCE) tr1;
								} else {
									RTHOOK(17);
									tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1574, dtype))(Current)).it_b);
									if (tb1) {
										RTHOOK(18);
										RTDBGAL(0, 0xF800010E, 0,0); /* Result */
										tr1 = RTMS_EX_H("family not supported",20,731000676);
										Result = (EIF_REFERENCE) tr1;
									} else {
										RTHOOK(19);
										tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1582, dtype))(Current)).it_b);
										if (tb1) {
											RTHOOK(20);
											RTDBGAL(0, 0xF800010E, 0,0); /* Result */
											tr1 = RTMS_EX_H("No permission",13,1184493678);
											Result = (EIF_REFERENCE) tr1;
										} else {
											RTHOOK(21);
											tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1583, dtype))(Current)).it_b);
											if (tb1) {
												RTHOOK(22);
												RTDBGAL(0, 0xF800010E, 0,0); /* Result */
												tr1 = RTMS_EX_H("No buffers",10,787847027);
												Result = (EIF_REFERENCE) tr1;
											} else {
												RTHOOK(23);
												tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1584, dtype))(Current)).it_b);
												if (tb1) {
													RTHOOK(24);
													RTDBGAL(0, 0xF800010E, 0,0); /* Result */
													tr1 = RTMS_EX_H("Descriptor table full",21,1884265580);
													Result = (EIF_REFERENCE) tr1;
												} else {
													RTHOOK(25);
													tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1586, dtype))(Current)).it_b);
													if (tb1) {
														RTHOOK(26);
														RTDBGAL(0, 0xF800010E, 0,0); /* Result */
														tr1 = RTMS_EX_H("Not connected",13,815868004);
														Result = (EIF_REFERENCE) tr1;
													} else {
														RTHOOK(27);
														tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1585, dtype))(Current)).it_b);
														if (tb1) {
															RTHOOK(28);
															RTDBGAL(0, 0xF800010E, 0,0); /* Result */
															tr1 = RTMS_EX_H("Protocol not supported",22,243713380);
															Result = (EIF_REFERENCE) tr1;
														} else {
															RTHOOK(29);
															tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1587, dtype))(Current)).it_b);
															if (tb1) {
																RTHOOK(30);
																RTDBGAL(0, 0xF800010E, 0,0); /* Result */
																tr1 = RTMS_EX_H("Socket would block",18,690973547);
																Result = (EIF_REFERENCE) tr1;
															} else {
																RTHOOK(31);
																tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1589, dtype))(Current)).it_b);
																if (tb1) {
																	RTHOOK(32);
																	RTDBGAL(0, 0xF800010E, 0,0); /* Result */
																	tr1 = RTMS_EX_H("Socket in use",13,1300329829);
																	Result = (EIF_REFERENCE) tr1;
																} else {
																	RTHOOK(33);
																	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1590, dtype))(Current)).it_b);
																	if (tb1) {
																		RTHOOK(34);
																		RTDBGAL(0, 0xF800010E, 0,0); /* Result */
																		tr1 = RTMS_EX_H("Socket expired",14,2125642852);
																		Result = (EIF_REFERENCE) tr1;
																	} else {
																		RTHOOK(35);
																		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1591, dtype))(Current)).it_b);
																		if (tb1) {
																			RTHOOK(36);
																			RTDBGAL(0, 0xF800010E, 0,0); /* Result */
																			tr1 = RTMS_EX_H("Connection refused",18,349967460);
																			Result = (EIF_REFERENCE) tr1;
																		} else {
																			RTHOOK(37);
																			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1592, dtype))(Current)).it_b);
																			if (tb1) {
																				RTHOOK(38);
																				RTDBGAL(0, 0xF800010E, 0,0); /* Result */
																				tr1 = RTMS_EX_H("No network",10,639723627);
																				Result = (EIF_REFERENCE) tr1;
																			} else {
																				RTHOOK(39);
																				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1593, dtype))(Current)).it_b);
																				if (tb1) {
																					RTHOOK(40);
																					RTDBGAL(0, 0xF800010E, 0,0); /* Result */
																					tr1 = RTMS_EX_H("Not an option",13,380168814);
																					Result = (EIF_REFERENCE) tr1;
																				} else {
																					RTHOOK(41);
																					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1588, dtype))(Current)).it_b);
																					if (tb1) {
																						RTHOOK(42);
																						RTDBGAL(0, 0xF800010E, 0,0); /* Result */
																						tr1 = RTMS_EX_H("Connection in progress",22,1248045171);
																						Result = (EIF_REFERENCE) tr1;
																					} else {
																						RTHOOK(43);
																						RTDBGAL(0, 0xF800010E, 0,0); /* Result */
																						tr1 = RTMS_EX_H("Unknown error : ",16,202816032);
																						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1630, dtype))(Current)).it_i4);
																						RTNHOOK(43,1);
																						tr2 = c_outi(ti4_1);
																						ur1 = RTCCL(tr2);
																						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4493, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																						Result = (EIF_REFERENCE) RTCCL(tr2);
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(44);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
}

/* {SOCKET_RESOURCES}.error_number */
EIF_TYPED_VALUE F154_1763 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "error_number";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1852);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(153, Current, 1852);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1630, dtype))(Current)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.socket_ok */
EIF_TYPED_VALUE F154_1764 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "socket_ok";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1853);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(153, Current, 1853);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1572, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.socket_family_not_supported */
EIF_TYPED_VALUE F154_1765 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "socket_family_not_supported";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1854);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(153, Current, 1854);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1572, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1632, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.address_not_readable */
EIF_TYPED_VALUE F154_1766 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "address_not_readable";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1855);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(153, Current, 1855);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1572, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1643, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.protected_address */
EIF_TYPED_VALUE F154_1767 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "protected_address";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1856);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(153, Current, 1856);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1572, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1642, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.already_bound */
EIF_TYPED_VALUE F154_1768 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "already_bound";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1857);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(153, Current, 1857);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1572, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1641, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.address_in_use */
EIF_TYPED_VALUE F154_1769 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "address_in_use";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1858);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(153, Current, 1858);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1572, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1640, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.invalid_address */
EIF_TYPED_VALUE F154_1770 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "invalid_address";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1859);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(153, Current, 1859);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1572, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1639, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.invalid_socket_handle */
EIF_TYPED_VALUE F154_1771 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "invalid_socket_handle";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1860);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(153, Current, 1860);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1572, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1638, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.bad_socket_handle */
EIF_TYPED_VALUE F154_1772 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "bad_socket_handle";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1861);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(153, Current, 1861);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1572, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1637, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.no_permission */
EIF_TYPED_VALUE F154_1773 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "no_permission";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1862);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(153, Current, 1862);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1572, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1636, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.no_buffers */
EIF_TYPED_VALUE F154_1774 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "no_buffers";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1863);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(153, Current, 1863);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1572, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1635, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.dtable_full */
EIF_TYPED_VALUE F154_1775 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "dtable_full";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1864);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(153, Current, 1864);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1572, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1634, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.protocol_not_supported */
EIF_TYPED_VALUE F154_1776 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "protocol_not_supported";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1865);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(153, Current, 1865);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1572, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1633, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.not_connected */
EIF_TYPED_VALUE F154_1777 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "not_connected";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1866);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(153, Current, 1866);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1572, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1644, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.socket_would_block */
EIF_TYPED_VALUE F154_1778 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "socket_would_block";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1867);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(153, Current, 1867);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1572, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1645, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.connect_in_progress */
EIF_TYPED_VALUE F154_1779 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "connect_in_progress";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1868);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(153, Current, 1868);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1572, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1651, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.socket_in_use */
EIF_TYPED_VALUE F154_1780 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "socket_in_use";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1869);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(153, Current, 1869);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1572, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1646, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.expired_socket */
EIF_TYPED_VALUE F154_1781 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "expired_socket";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1870);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(153, Current, 1870);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1572, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1647, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.connection_refused */
EIF_TYPED_VALUE F154_1782 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "connection_refused";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1871);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(153, Current, 1871);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1572, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1648, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.network */
EIF_TYPED_VALUE F154_1783 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "network";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1872);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(153, Current, 1872);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1572, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1649, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.zero_option */
EIF_TYPED_VALUE F154_1784 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "zero_option";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1873);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(153, Current, 1873);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1572, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1650, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.c_oobmsg */
EIF_TYPED_VALUE F154_1785 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_oobmsg";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1874);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1874);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_oobmsg();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.c_peekmsg */
EIF_TYPED_VALUE F154_1786 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_peekmsg";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1875);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1875);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_peekmsg();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.c_msgdontroute */
EIF_TYPED_VALUE F154_1787 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_msgdontroute";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1876);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1876);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_msgdontroute();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.level_sol_socket */
EIF_TYPED_VALUE F154_1788 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "level_sol_socket";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1877);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1877);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) level_sol_socket();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.level_nsproto_raw */
EIF_TYPED_VALUE F154_1789 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "level_nsproto_raw";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1878);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1878);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) level_nsproto_raw();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.level_nsproto_pe */
EIF_TYPED_VALUE F154_1790 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "level_nsproto_pe";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1879);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1879);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) level_nsproto_pe();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.level_nsproto_spp */
EIF_TYPED_VALUE F154_1791 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "level_nsproto_spp";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1880);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1880);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) level_nsproto_spp();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.level_iproto_tcp */
EIF_TYPED_VALUE F154_1792 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "level_iproto_tcp";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1881);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1881);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) level_iproto_tcp();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.level_iproto_ip */
EIF_TYPED_VALUE F154_1793 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "level_iproto_ip";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1788);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1788);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) level_iproto_ip();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.ipoptions */
EIF_TYPED_VALUE F154_1794 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "ipoptions";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1789);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1789);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) ipoptions();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.tcpmax_seg */
EIF_TYPED_VALUE F154_1795 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tcpmax_seg";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1790);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1790);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) tcpmax_seg();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.tcpno_delay */
EIF_TYPED_VALUE F154_1796 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tcpno_delay";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1791);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1791);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) tcpno_delay();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.so_headerson_input */
EIF_TYPED_VALUE F154_1797 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_headerson_input";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1792);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1792);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_headerson_input();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.so_headerson_output */
EIF_TYPED_VALUE F154_1798 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_headerson_output";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1793);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1793);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_headerson_output();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.so_defaultheaders */
EIF_TYPED_VALUE F154_1799 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_defaultheaders";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1794);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1794);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_defaultheaders();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.so_lastheader */
EIF_TYPED_VALUE F154_1800 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_lastheader";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1795);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1795);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_lastheader();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.somtu */
EIF_TYPED_VALUE F154_1801 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "somtu";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1796);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1796);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) somtu();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.soseqno */
EIF_TYPED_VALUE F154_1802 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "soseqno";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1797);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1797);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) soseqno();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.so_allpackets */
EIF_TYPED_VALUE F154_1803 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_allpackets";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1798);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1798);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_allpackets();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.so_nsiproute */
EIF_TYPED_VALUE F154_1804 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_nsiproute";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1799);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1799);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_nsiproute();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.sobroadcast */
EIF_TYPED_VALUE F154_1805 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sobroadcast";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1800);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1800);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) sobroadcast();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.sodebug */
EIF_TYPED_VALUE F154_1806 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sodebug";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1801);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1801);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) sodebug();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.so_dont_route */
EIF_TYPED_VALUE F154_1807 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_dont_route";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1802);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1802);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_dont_route();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.soerror */
EIF_TYPED_VALUE F154_1808 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "soerror";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1803);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1803);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) soerror();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.so_keep_alive */
EIF_TYPED_VALUE F154_1809 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_keep_alive";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1804);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1804);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_keep_alive();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.solinger */
EIF_TYPED_VALUE F154_1810 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "solinger";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1805);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1805);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) solinger();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.so_oob_inline */
EIF_TYPED_VALUE F154_1811 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_oob_inline";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1806);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1806);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_oob_inline();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.so_rcv_buf */
EIF_TYPED_VALUE F154_1812 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_rcv_buf";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1807);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1807);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_rcv_buf();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.so_snd_buf */
EIF_TYPED_VALUE F154_1813 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_snd_buf";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1808);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1808);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_snd_buf();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.so_rcv_lowat */
EIF_TYPED_VALUE F154_1814 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_rcv_lowat";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1809);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1809);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_rcv_lowat();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.so_snd_lowat */
EIF_TYPED_VALUE F154_1815 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_snd_lowat";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1810);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1810);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_snd_lowat();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.so_rcv_timeo */
EIF_TYPED_VALUE F154_1816 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_rcv_timeo";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1811);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1811);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_rcv_timeo();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.so_snd_timeo */
EIF_TYPED_VALUE F154_1817 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_snd_timeo";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1812);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1812);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_snd_timeo();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.so_reuse_addr */
EIF_TYPED_VALUE F154_1818 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_reuse_addr";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1813);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1813);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_reuse_addr();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.sotype */
EIF_TYPED_VALUE F154_1819 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sotype";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1814);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1814);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) sotype();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.so_use_loopback */
EIF_TYPED_VALUE F154_1820 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_use_loopback";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1815);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1815);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_use_loopback();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.c_errorno */
EIF_TYPED_VALUE F154_1821 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_errorno";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1816);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1816);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_errorno();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.c_reset_error */
void F154_1822 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_reset_error";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1817);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1817);
	RTIV(Current, RTAL);c_reset_error();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {SOCKET_RESOURCES}.family_no_support */
EIF_TYPED_VALUE F154_1823 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "family_no_support";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1818);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1818);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) family_no_support();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.proto_no_support */
EIF_TYPED_VALUE F154_1824 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "proto_no_support";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1819);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1819);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) proto_no_support();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.table_full */
EIF_TYPED_VALUE F154_1825 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "table_full";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1820);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1820);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) table_full();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.no_buffs */
EIF_TYPED_VALUE F154_1826 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "no_buffs";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1821);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1821);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) no_buffs();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.c_permission */
EIF_TYPED_VALUE F154_1827 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_permission";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1822);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1822);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_permission();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.bad_socket */
EIF_TYPED_VALUE F154_1828 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "bad_socket";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1823);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1823);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) bad_socket();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.no_socket */
EIF_TYPED_VALUE F154_1829 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "no_socket";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1824);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1824);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) no_socket();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.error_address */
EIF_TYPED_VALUE F154_1830 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "error_address";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1825);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1825);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) error_address();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.busy_address */
EIF_TYPED_VALUE F154_1831 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "busy_address";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1826);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1826);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) busy_address();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.bound_address */
EIF_TYPED_VALUE F154_1832 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "bound_address";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1827);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1827);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) bound_address();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.no_access */
EIF_TYPED_VALUE F154_1833 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "no_access";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1828);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1828);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) no_access();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.unreadable */
EIF_TYPED_VALUE F154_1834 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "unreadable";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1829);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1829);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) unreadable();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.no_connect */
EIF_TYPED_VALUE F154_1835 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "no_connect";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1830);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1830);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) no_connect();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.would_block */
EIF_TYPED_VALUE F154_1836 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "would_block";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1831);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1831);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) would_block();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.in_use */
EIF_TYPED_VALUE F154_1837 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "in_use";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1832);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1832);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) in_use();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.socket_expire */
EIF_TYPED_VALUE F154_1838 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "socket_expire";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1833);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1833);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) socket_expire();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.connect_refused */
EIF_TYPED_VALUE F154_1839 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "connect_refused";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1834);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1834);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) connect_refused();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.no_network */
EIF_TYPED_VALUE F154_1840 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "no_network";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1835);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1835);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) no_network();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.no_option */
EIF_TYPED_VALUE F154_1841 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "no_option";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1836);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1836);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) no_option();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.c_einprogress */
EIF_TYPED_VALUE F154_1842 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_einprogress";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1837);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1837);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_einprogress();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.sock_raw */
EIF_TYPED_VALUE F154_1843 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sock_raw";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1838);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1838);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) sock_raw();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.sock_dgrm */
EIF_TYPED_VALUE F154_1844 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sock_dgrm";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1839);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1839);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) sock_dgrm();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.sock_stream */
EIF_TYPED_VALUE F154_1845 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sock_stream";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1840);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1840);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) sock_stream();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.af_ns */
EIF_TYPED_VALUE F154_1846 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "af_ns";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1841);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1841);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) af_ns();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.af_inet */
EIF_TYPED_VALUE F154_1847 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "af_inet";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1842);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1842);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) af_inet();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.af_inet6 */
EIF_TYPED_VALUE F154_1848 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "af_inet6";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1843);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1843);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) af_inet6();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.af_unix */
EIF_TYPED_VALUE F154_1849 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "af_unix";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1844);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1844);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) af_unix();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.c_fgetown */
EIF_TYPED_VALUE F154_1850 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_fgetown";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1845);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1845);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_fgetown();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.c_fsetown */
EIF_TYPED_VALUE F154_1851 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_fsetown";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1846);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1846);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_fsetown();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.c_fsetfl */
EIF_TYPED_VALUE F154_1852 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_fsetfl";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1847);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1847);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_fsetfl();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.c_fgetfl */
EIF_TYPED_VALUE F154_1853 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_fgetfl";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1848);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1848);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_fgetfl();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.c_fndelay */
EIF_TYPED_VALUE F154_1854 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_fndelay";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1849);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1849);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_fndelay();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.c_fasync */
EIF_TYPED_VALUE F154_1855 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_fasync";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 153, Current, 0, 0, 1850);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(153, Current, 1850);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_fasync();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

void EIF_Minit154 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
