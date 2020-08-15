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
static const char *ng0 = "D:/3D/IDM/Downloads/Documents/prog/Verilog/Computer_arc/memoryCache.v";
static const char *ng1 = "dataMem.mem";
static int ng2[] = {0, 0};
static int ng3[] = {63, 0};
static int ng4[] = {2, 0};
static unsigned int ng5[] = {0U, 0U};
static int ng6[] = {31, 0};
static unsigned int ng7[] = {1U, 0U};
static int ng8[] = {32, 0};
static unsigned int ng9[] = {2U, 0U};
static int ng10[] = {95, 0};
static int ng11[] = {64, 0};
static unsigned int ng12[] = {3U, 0U};
static int ng13[] = {127, 0};
static int ng14[] = {96, 0};



static void Initial_37_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    xsi_set_current_line(38, ng0);

LAB2:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 3368);
    t2 = ((char*)((ng2)));
    t3 = ((char*)((ng3)));
    xsi_vlogfile_readmemb(ng1, 0, t1, 1, *((unsigned int *)t2), 1, *((unsigned int *)t3));

LAB1:    return;
}

static void Cont_41_1(char *t0)
{
    char t4[8];
    char t17[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;

LAB0:    t1 = (t0 + 4536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t11 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t11);
    t14 = (t12 || t13);
    if (t14 > 0)
        goto LAB8;

LAB9:    memcpy(t24, t4, 8);

LAB10:    t56 = (t0 + 5728);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    memset(t60, 0, 8);
    t61 = 1U;
    t62 = t61;
    t63 = (t24 + 4);
    t64 = *((unsigned int *)t24);
    t61 = (t61 & t64);
    t65 = *((unsigned int *)t63);
    t62 = (t62 & t65);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t67 | t61);
    t68 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t68 | t62);
    xsi_driver_vfirst_trans(t56, 0, 0);
    t69 = (t0 + 5600);
    *((int *)t69) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t10 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB7;

LAB8:    t15 = (t0 + 1368U);
    t16 = *((char **)t15);
    memset(t17, 0, 8);
    t15 = (t16 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (~(t18));
    t20 = *((unsigned int *)t16);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t15) != 0)
        goto LAB13;

LAB14:    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t17);
    t27 = (t25 & t26);
    *((unsigned int *)t24) = t27;
    t28 = (t4 + 4);
    t29 = (t17 + 4);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t28);
    t32 = *((unsigned int *)t29);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t17) = 1;
    goto LAB14;

LAB13:    t23 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB14;

LAB15:    t36 = *((unsigned int *)t24);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t24) = (t36 | t37);
    t38 = (t4 + 4);
    t39 = (t17 + 4);
    t40 = *((unsigned int *)t4);
    t41 = (~(t40));
    t42 = *((unsigned int *)t38);
    t43 = (~(t42));
    t44 = *((unsigned int *)t17);
    t45 = (~(t44));
    t46 = *((unsigned int *)t39);
    t47 = (~(t46));
    t48 = (t41 & t43);
    t49 = (t45 & t47);
    t50 = (~(t48));
    t51 = (~(t49));
    t52 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t52 & t50);
    t53 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t53 & t51);
    t54 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t54 & t50);
    t55 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t55 & t51);
    goto LAB17;

}

static void Cont_42_2(char *t0)
{
    char t5[32];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 4784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3368);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3368);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1848U);
    t13 = *((char **)t12);
    t12 = ((char*)((ng4)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_rshift(t14, 32, t13, 32, t12, 32);
    xsi_vlog_generic_get_array_select_value(t5, 128, t4, t8, t11, 2, 1, t14, 32, 2);
    t15 = (t0 + 5792);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_bit_copy(t19, 0, t5, 0, 128);
    xsi_driver_vfirst_trans(t15, 0, 127);
    t20 = (t0 + 5616);
    *((int *)t20) = 1;

LAB1:    return;
}

static void Cont_43_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 5856);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 5632);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Always_53_4(char *t0)
{
    char t11[8];
    char t25[8];
    char t26[8];
    char t35[8];
    char t36[8];
    char t37[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    int t22;
    char *t23;
    char *t24;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    int t46;
    char *t47;
    unsigned int t48;
    int t49;
    int t50;
    char *t51;
    unsigned int t52;
    int t53;
    int t54;
    char *t55;
    unsigned int t56;
    int t57;
    int t58;
    char *t59;
    unsigned int t60;
    int t61;
    int t62;
    unsigned int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    int t70;
    int t71;

LAB0:    t1 = (t0 + 5280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 5648);
    *((int *)t2) = 1;
    t3 = (t0 + 5312);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);

LAB5:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(56, ng0);

LAB9:    xsi_set_current_line(57, ng0);
    t12 = (t0 + 1848U);
    t13 = *((char **)t12);
    memset(t11, 0, 8);
    t12 = (t11 + 4);
    t14 = (t13 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (t15 >> 0);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 0);
    *((unsigned int *)t12) = t18;
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t19 & 3U);
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 3U);

LAB10:    t21 = ((char*)((ng5)));
    t22 = xsi_vlog_unsigned_case_compare(t11, 2, t21, 2);
    if (t22 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t22 = xsi_vlog_unsigned_case_compare(t11, 2, t2, 2);
    if (t22 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t22 = xsi_vlog_unsigned_case_compare(t11, 2, t2, 2);
    if (t22 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng12)));
    t22 = xsi_vlog_unsigned_case_compare(t11, 2, t2, 2);
    if (t22 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB8;

LAB11:    xsi_set_current_line(58, ng0);
    t23 = (t0 + 2008U);
    t24 = *((char **)t23);
    t23 = (t0 + 3368);
    t27 = (t0 + 3368);
    t28 = (t27 + 72U);
    t29 = *((char **)t28);
    t30 = (t0 + 3368);
    t31 = (t30 + 64U);
    t32 = *((char **)t31);
    t33 = (t0 + 1848U);
    t34 = *((char **)t33);
    t33 = ((char*)((ng4)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_rshift(t35, 32, t34, 32, t33, 32);
    xsi_vlog_generic_convert_array_indices(t25, t26, t29, t32, 2, 1, t35, 32, 2);
    t39 = (t0 + 3368);
    t40 = (t39 + 72U);
    t41 = *((char **)t40);
    t42 = ((char*)((ng6)));
    t43 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t36, t37, t38, ((int*)(t41)), 2, t42, 32, 1, t43, 32, 1);
    t44 = (t25 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (!(t45));
    t47 = (t26 + 4);
    t48 = *((unsigned int *)t47);
    t49 = (!(t48));
    t50 = (t46 && t49);
    t51 = (t36 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (!(t52));
    t54 = (t50 && t53);
    t55 = (t37 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (!(t56));
    t58 = (t54 && t57);
    t59 = (t38 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (!(t60));
    t62 = (t58 && t61);
    if (t62 == 1)
        goto LAB20;

LAB21:    goto LAB19;

LAB13:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 2008U);
    t4 = *((char **)t3);
    t3 = (t0 + 3368);
    t5 = (t0 + 3368);
    t12 = (t5 + 72U);
    t13 = *((char **)t12);
    t14 = (t0 + 3368);
    t21 = (t14 + 64U);
    t23 = *((char **)t21);
    t24 = (t0 + 1848U);
    t27 = *((char **)t24);
    t24 = ((char*)((ng4)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_rshift(t35, 32, t27, 32, t24, 32);
    xsi_vlog_generic_convert_array_indices(t25, t26, t13, t23, 2, 1, t35, 32, 2);
    t28 = (t0 + 3368);
    t29 = (t28 + 72U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng3)));
    t32 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t36, t37, t38, ((int*)(t30)), 2, t31, 32, 1, t32, 32, 1);
    t33 = (t25 + 4);
    t6 = *((unsigned int *)t33);
    t46 = (!(t6));
    t34 = (t26 + 4);
    t7 = *((unsigned int *)t34);
    t49 = (!(t7));
    t50 = (t46 && t49);
    t39 = (t36 + 4);
    t8 = *((unsigned int *)t39);
    t53 = (!(t8));
    t54 = (t50 && t53);
    t40 = (t37 + 4);
    t9 = *((unsigned int *)t40);
    t57 = (!(t9));
    t58 = (t54 && t57);
    t41 = (t38 + 4);
    t10 = *((unsigned int *)t41);
    t61 = (!(t10));
    t62 = (t58 && t61);
    if (t62 == 1)
        goto LAB22;

LAB23:    goto LAB19;

LAB15:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 2008U);
    t4 = *((char **)t3);
    t3 = (t0 + 3368);
    t5 = (t0 + 3368);
    t12 = (t5 + 72U);
    t13 = *((char **)t12);
    t14 = (t0 + 3368);
    t21 = (t14 + 64U);
    t23 = *((char **)t21);
    t24 = (t0 + 1848U);
    t27 = *((char **)t24);
    t24 = ((char*)((ng4)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_rshift(t35, 32, t27, 32, t24, 32);
    xsi_vlog_generic_convert_array_indices(t25, t26, t13, t23, 2, 1, t35, 32, 2);
    t28 = (t0 + 3368);
    t29 = (t28 + 72U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng10)));
    t32 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t36, t37, t38, ((int*)(t30)), 2, t31, 32, 1, t32, 32, 1);
    t33 = (t25 + 4);
    t6 = *((unsigned int *)t33);
    t46 = (!(t6));
    t34 = (t26 + 4);
    t7 = *((unsigned int *)t34);
    t49 = (!(t7));
    t50 = (t46 && t49);
    t39 = (t36 + 4);
    t8 = *((unsigned int *)t39);
    t53 = (!(t8));
    t54 = (t50 && t53);
    t40 = (t37 + 4);
    t9 = *((unsigned int *)t40);
    t57 = (!(t9));
    t58 = (t54 && t57);
    t41 = (t38 + 4);
    t10 = *((unsigned int *)t41);
    t61 = (!(t10));
    t62 = (t58 && t61);
    if (t62 == 1)
        goto LAB24;

LAB25:    goto LAB19;

LAB17:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 2008U);
    t4 = *((char **)t3);
    t3 = (t0 + 3368);
    t5 = (t0 + 3368);
    t12 = (t5 + 72U);
    t13 = *((char **)t12);
    t14 = (t0 + 3368);
    t21 = (t14 + 64U);
    t23 = *((char **)t21);
    t24 = (t0 + 1848U);
    t27 = *((char **)t24);
    t24 = ((char*)((ng4)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_rshift(t35, 32, t27, 32, t24, 32);
    xsi_vlog_generic_convert_array_indices(t25, t26, t13, t23, 2, 1, t35, 32, 2);
    t28 = (t0 + 3368);
    t29 = (t28 + 72U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng13)));
    t32 = ((char*)((ng14)));
    xsi_vlog_convert_partindices(t36, t37, t38, ((int*)(t30)), 2, t31, 32, 1, t32, 32, 1);
    t33 = (t25 + 4);
    t6 = *((unsigned int *)t33);
    t46 = (!(t6));
    t34 = (t26 + 4);
    t7 = *((unsigned int *)t34);
    t49 = (!(t7));
    t50 = (t46 && t49);
    t39 = (t36 + 4);
    t8 = *((unsigned int *)t39);
    t53 = (!(t8));
    t54 = (t50 && t53);
    t40 = (t37 + 4);
    t9 = *((unsigned int *)t40);
    t57 = (!(t9));
    t58 = (t54 && t57);
    t41 = (t38 + 4);
    t10 = *((unsigned int *)t41);
    t61 = (!(t10));
    t62 = (t58 && t61);
    if (t62 == 1)
        goto LAB26;

LAB27:    goto LAB19;

LAB20:    t63 = *((unsigned int *)t38);
    t64 = (t63 + 0);
    t65 = *((unsigned int *)t26);
    t66 = *((unsigned int *)t37);
    t67 = (t65 + t66);
    t68 = *((unsigned int *)t36);
    t69 = *((unsigned int *)t37);
    t70 = (t68 - t69);
    t71 = (t70 + 1);
    xsi_vlogvar_assign_value(t23, t24, t64, t67, t71);
    goto LAB21;

LAB22:    t15 = *((unsigned int *)t38);
    t64 = (t15 + 0);
    t16 = *((unsigned int *)t26);
    t17 = *((unsigned int *)t37);
    t67 = (t16 + t17);
    t18 = *((unsigned int *)t36);
    t19 = *((unsigned int *)t37);
    t70 = (t18 - t19);
    t71 = (t70 + 1);
    xsi_vlogvar_assign_value(t3, t4, t64, t67, t71);
    goto LAB23;

LAB24:    t15 = *((unsigned int *)t38);
    t64 = (t15 + 0);
    t16 = *((unsigned int *)t26);
    t17 = *((unsigned int *)t37);
    t67 = (t16 + t17);
    t18 = *((unsigned int *)t36);
    t19 = *((unsigned int *)t37);
    t70 = (t18 - t19);
    t71 = (t70 + 1);
    xsi_vlogvar_assign_value(t3, t4, t64, t67, t71);
    goto LAB25;

LAB26:    t15 = *((unsigned int *)t38);
    t64 = (t15 + 0);
    t16 = *((unsigned int *)t26);
    t17 = *((unsigned int *)t37);
    t67 = (t16 + t17);
    t18 = *((unsigned int *)t36);
    t19 = *((unsigned int *)t37);
    t70 = (t18 - t19);
    t71 = (t70 + 1);
    xsi_vlogvar_assign_value(t3, t4, t64, t67, t71);
    goto LAB27;

}


extern void work_m_00000000003454211096_3104674256_init()
{
	static char *pe[] = {(void *)Initial_37_0,(void *)Cont_41_1,(void *)Cont_42_2,(void *)Cont_43_3,(void *)Always_53_4};
	xsi_register_didat("work_m_00000000003454211096_3104674256", "isim/MIPS_Test_isim_beh.exe.sim/work/m_00000000003454211096_3104674256.didat");
	xsi_register_executes(pe);
}
