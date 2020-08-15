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
static const char *ng0 = "D:/3D/IDM/Downloads/Documents/prog/Verilog/Computer_arc/fetch_cach.v";
static int ng1[] = {0, 0};
static const char *ng2 = "insMem.mem";
static int ng3[] = {255, 0};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {1, 0};
static int ng6[] = {2, 0};
static int ng7[] = {3, 0};
static unsigned int ng8[] = {4294967295U, 4294967295U};



static void Initial_34_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    xsi_set_current_line(35, ng0);

LAB2:    xsi_set_current_line(36, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 30);
    xsi_set_current_line(37, ng0);
    t1 = (t0 + 3208);
    t2 = ((char*)((ng1)));
    t3 = ((char*)((ng3)));
    xsi_vlogfile_readmemb(ng2, 0, t1, 1, *((unsigned int *)t2), 1, *((unsigned int *)t3));

LAB1:    return;
}

static void Cont_43_1(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 4376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 3048);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 2);
    *((unsigned int *)t4) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 2);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 268435455U);
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 268435455U);
    xsi_vlogtype_concat(t3, 32, 30, 2U, t4, 28, t2, 2);
    t16 = (t0 + 5832);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t3, 8);
    xsi_driver_vfirst_trans(t16, 0, 31);
    t21 = (t0 + 5688);
    *((int *)t21) = 1;

LAB1:    return;
}

static void Cont_44_2(char *t0)
{
    char t3[32];
    char t6[8];
    char t17[8];
    char t26[8];
    char t30[8];
    char t39[8];
    char t43[8];
    char t52[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;

LAB0:    t1 = (t0 + 4624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3208);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 3208);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 3208);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 2168U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t6, 32, t5, t9, t12, 2, 1, t14, 32, 2);
    t13 = (t0 + 3208);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    t18 = (t0 + 3208);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 3208);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = (t0 + 2168U);
    t25 = *((char **)t24);
    t24 = ((char*)((ng5)));
    memset(t26, 0, 8);
    xsi_vlog_unsigned_add(t26, 32, t25, 32, t24, 32);
    xsi_vlog_generic_get_array_select_value(t17, 32, t16, t20, t23, 2, 1, t26, 32, 2);
    t27 = (t0 + 3208);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t31 = (t0 + 3208);
    t32 = (t31 + 72U);
    t33 = *((char **)t32);
    t34 = (t0 + 3208);
    t35 = (t34 + 64U);
    t36 = *((char **)t35);
    t37 = (t0 + 2168U);
    t38 = *((char **)t37);
    t37 = ((char*)((ng6)));
    memset(t39, 0, 8);
    xsi_vlog_unsigned_add(t39, 32, t38, 32, t37, 32);
    xsi_vlog_generic_get_array_select_value(t30, 32, t29, t33, t36, 2, 1, t39, 32, 2);
    t40 = (t0 + 3208);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t44 = (t0 + 3208);
    t45 = (t44 + 72U);
    t46 = *((char **)t45);
    t47 = (t0 + 3208);
    t48 = (t47 + 64U);
    t49 = *((char **)t48);
    t50 = (t0 + 2168U);
    t51 = *((char **)t50);
    t50 = ((char*)((ng7)));
    memset(t52, 0, 8);
    xsi_vlog_unsigned_add(t52, 32, t51, 32, t50, 32);
    xsi_vlog_generic_get_array_select_value(t43, 32, t42, t46, t49, 2, 1, t52, 32, 2);
    xsi_vlogtype_concat(t3, 128, 128, 4U, t43, 32, t30, 32, t17, 32, t6, 32);
    t53 = (t0 + 5896);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    xsi_vlog_bit_copy(t57, 0, t3, 0, 128);
    xsi_driver_vfirst_trans(t53, 0, 127);
    t58 = (t0 + 5704);
    *((int *)t58) = 1;

LAB1:    return;
}

static void Always_54_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 5720);
    *((int *)t2) = 1;
    t3 = (t0 + 4904);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55, ng0);

LAB5:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 2488U);
    t5 = *((char **)t4);
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    goto LAB2;

}

static void Always_58_4(char *t0)
{
    char t6[8];
    char t19[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;

LAB0:    t1 = (t0 + 5120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 5736);
    *((int *)t2) = 1;
    t3 = (t0 + 5152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(59, ng0);

LAB5:    xsi_set_current_line(60, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB10;

LAB11:    memcpy(t26, t6, 8);

LAB12:    t58 = (t26 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t26);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(72, ng0);

LAB29:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB22:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t17 = (t0 + 1688U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t18 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t17) != 0)
        goto LAB15;

LAB16:    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t30 = (t6 + 4);
    t31 = (t19 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB13:    *((unsigned int *)t19) = 1;
    goto LAB16;

LAB15:    t25 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB16;

LAB17:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t6 + 4);
    t41 = (t19 + 4);
    t42 = *((unsigned int *)t6);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t52);
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB19;

LAB20:    xsi_set_current_line(61, ng0);

LAB23:    xsi_set_current_line(62, ng0);
    t64 = (t0 + 1208U);
    t65 = *((char **)t64);
    t64 = (t65 + 4);
    t66 = *((unsigned int *)t64);
    t67 = (~(t66));
    t68 = *((unsigned int *)t65);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(67, ng0);

LAB28:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 30);

LAB26:    goto LAB22;

LAB24:    xsi_set_current_line(63, ng0);

LAB27:    xsi_set_current_line(64, ng0);
    t71 = (t0 + 1368U);
    t72 = *((char **)t71);
    t71 = (t0 + 3048);
    xsi_vlogvar_assign_value(t71, t72, 0, 0, 30);
    goto LAB26;

}

static void Cont_76_5(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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

LAB0:    t1 = (t0 + 5368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 30, t5, 32);
    t7 = (t0 + 5960);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t11, 0, 8);
    t12 = 1073741823U;
    t13 = t12;
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t14);
    t13 = (t13 & t16);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 | t12);
    t19 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t19 | t13);
    xsi_driver_vfirst_trans(t7, 0, 29);
    t20 = (t0 + 5752);
    *((int *)t20) = 1;

LAB1:    return;
}


extern void work_m_00000000002641621759_2199487804_init()
{
	static char *pe[] = {(void *)Initial_34_0,(void *)Cont_43_1,(void *)Cont_44_2,(void *)Always_54_3,(void *)Always_58_4,(void *)Cont_76_5};
	xsi_register_didat("work_m_00000000002641621759_2199487804", "isim/MIPS_Test_isim_beh.exe.sim/work/m_00000000002641621759_2199487804.didat");
	xsi_register_executes(pe);
}
