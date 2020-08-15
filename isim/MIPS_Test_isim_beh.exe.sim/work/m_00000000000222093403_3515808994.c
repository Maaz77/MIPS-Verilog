/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif



static void implSig1_execute(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 10528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3768U);
    t4 = *((char **)t2);
    t2 = (t0 + 3608U);
    t5 = *((char **)t2);
    xsi_vlogtype_concat(t3, 2, 2, 2U, t5, 1, t4, 1);
    t2 = (t0 + 11456);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 3U;
    t11 = t10;
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t2, 0, 1);
    t18 = (t0 + 11344);
    *((int *)t18) = 1;

LAB1:    return;
}

static void implSig2_execute(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 10776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4088U);
    t4 = *((char **)t2);
    t2 = (t0 + 3928U);
    t5 = *((char **)t2);
    t2 = (t0 + 4248U);
    t6 = *((char **)t2);
    xsi_vlogtype_concat(t3, 3, 3, 3U, t6, 1, t5, 1, t4, 1);
    t2 = (t0 + 11520);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t10, 0, 8);
    t11 = 7U;
    t12 = t11;
    t13 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t11 = (t11 & t14);
    t15 = *((unsigned int *)t13);
    t12 = (t12 & t15);
    t16 = (t10 + 4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 | t11);
    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 | t12);
    xsi_driver_vfirst_trans(t2, 0, 2);
    t19 = (t0 + 11360);
    *((int *)t19) = 1;

LAB1:    return;
}

static void implSig3_execute(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 11024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3448U);
    t4 = *((char **)t2);
    t2 = (t0 + 3288U);
    t5 = *((char **)t2);
    t2 = (t0 + 4568U);
    t6 = *((char **)t2);
    t2 = (t0 + 4408U);
    t7 = *((char **)t2);
    xsi_vlogtype_concat(t3, 4, 4, 4U, t7, 1, t6, 1, t5, 1, t4, 1);
    t2 = (t0 + 11584);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t11, 0, 8);
    t12 = 15U;
    t13 = t12;
    t14 = (t3 + 4);
    t15 = *((unsigned int *)t3);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t14);
    t13 = (t13 & t16);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 | t12);
    t19 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t19 | t13);
    xsi_driver_vfirst_trans(t2, 0, 3);
    t20 = (t0 + 11376);
    *((int *)t20) = 1;

LAB1:    return;
}


extern void work_m_00000000000222093403_3515808994_init()
{
	static char *pe[] = {(void *)implSig1_execute,(void *)implSig2_execute,(void *)implSig3_execute};
	xsi_register_didat("work_m_00000000000222093403_3515808994", "isim/MIPS_Test_isim_beh.exe.sim/work/m_00000000000222093403_3515808994.didat");
	xsi_register_executes(pe);
}
