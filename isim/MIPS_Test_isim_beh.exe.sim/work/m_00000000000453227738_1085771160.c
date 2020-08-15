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
static int ng2[] = {8, 0};
static int ng3[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng4[] = {1, 0};
static int ng5[] = {153, 0};
static unsigned int ng6[] = {1U, 1U};
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {0U, 0U};
static unsigned int ng9[] = {2U, 0U};
static unsigned int ng10[] = {3U, 0U};
static int ng11[] = {3, 0};
static int ng12[] = {127, 0};
static int ng13[] = {152, 0};
static int ng14[] = {128, 0};



static void Initial_92_0(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(92, ng0);

LAB2:    xsi_set_current_line(93, ng0);
    xsi_set_current_line(93, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2408);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(94, ng0);

LAB6:    xsi_set_current_line(95, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 2248);
    t16 = (t0 + 2248);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2248);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 2408);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 2408);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2408);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB8;

}

static void Always_100_1(char *t0)
{
    char t6[8];
    char t30[8];
    char t31[8];
    char t38[8];
    char t52[40];
    char t65[40];
    char t72[8];
    char t82[8];
    char t92[8];
    char t102[8];
    char t118[8];
    char t126[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    int t44;
    char *t45;
    int t46;
    int t47;
    char *t48;
    int t49;
    int t50;
    int t51;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t93;
    char *t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    char *t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    char *t162;
    char *t163;
    int t164;
    int t165;
    int t166;
    int t167;
    int t168;
    int t169;
    int t170;

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 4056);
    *((int *)t2) = 1;
    t3 = (t0 + 3768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(101, ng0);

LAB5:    xsi_set_current_line(102, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t3);
    t10 = (t10 & 1);
    if (*((unsigned int *)t2) != 0)
        goto LAB20;

LAB21:    t11 = 1;

LAB23:    t12 = (t11 <= 29);
    if (t12 == 1)
        goto LAB24;

LAB25:    *((unsigned int *)t6) = t10;

LAB22:    t5 = ((char*)((ng6)));
    memset(t30, 0, 8);
    if (*((unsigned int *)t6) != *((unsigned int *)t5))
        goto LAB29;

LAB27:    t7 = (t6 + 4);
    t8 = (t5 + 4);
    if (*((unsigned int *)t7) != *((unsigned int *)t8))
        goto LAB29;

LAB28:    *((unsigned int *)t30) = 1;

LAB29:    t21 = (t30 + 4);
    t14 = *((unsigned int *)t21);
    t15 = (~(t14));
    t16 = *((unsigned int *)t30);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2248);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 2248);
    t22 = (t21 + 64U);
    t28 = *((char **)t22);
    t29 = (t0 + 1048U);
    t32 = *((char **)t29);
    memset(t6, 0, 8);
    t29 = (t6 + 4);
    t33 = (t32 + 4);
    t9 = *((unsigned int *)t32);
    t10 = (t9 >> 2);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t33);
    t12 = (t11 >> 2);
    *((unsigned int *)t29) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 7U);
    t14 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t14 & 7U);
    xsi_vlog_generic_get_array_select_value(t52, 154, t4, t8, t28, 2, 1, t6, 3, 2);
    t34 = (t0 + 2248);
    t35 = (t34 + 72U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t30, 1, t52, t36, 2, t37, 32, 1);
    t39 = ((char*)((ng7)));
    memset(t31, 0, 8);
    t40 = (t30 + 4);
    t41 = (t39 + 4);
    t15 = *((unsigned int *)t30);
    t16 = *((unsigned int *)t39);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t40);
    t19 = *((unsigned int *)t41);
    t20 = (t18 ^ t19);
    t23 = (t17 | t20);
    t24 = *((unsigned int *)t40);
    t25 = *((unsigned int *)t41);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t53 = (t23 & t27);
    if (t53 != 0)
        goto LAB37;

LAB34:    if (t26 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t31) = 1;

LAB37:    memset(t38, 0, 8);
    t43 = (t31 + 4);
    t54 = *((unsigned int *)t43);
    t55 = (~(t54));
    t56 = *((unsigned int *)t31);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t43) != 0)
        goto LAB40;

LAB41:    t48 = (t38 + 4);
    t59 = *((unsigned int *)t38);
    t60 = *((unsigned int *)t48);
    t61 = (t59 || t60);
    if (t61 > 0)
        goto LAB42;

LAB43:    memcpy(t126, t38, 8);

LAB44:    t156 = (t126 + 4);
    t157 = *((unsigned int *)t156);
    t158 = (~(t157));
    t159 = *((unsigned int *)t126);
    t160 = (t159 & t158);
    t161 = (t160 != 0);
    if (t161 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(127, ng0);

LAB70:    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t2, 32, t5, 5);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t30, 0, 0, 5);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng11)));
    memset(t30, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB74;

LAB71:    if (t18 != 0)
        goto LAB73;

LAB72:    *((unsigned int *)t30) = 1;

LAB74:    t22 = (t30 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t30);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB75;

LAB76:
LAB77:
LAB58:
LAB32:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(103, ng0);

LAB13:    xsi_set_current_line(104, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 1928);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(106, ng0);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB14:    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB15;

LAB16:    goto LAB12;

LAB15:    xsi_set_current_line(107, ng0);

LAB17:    xsi_set_current_line(108, ng0);
    t8 = ((char*)((ng1)));
    t21 = (t0 + 2248);
    t22 = (t0 + 2248);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t32 = (t0 + 2248);
    t33 = (t32 + 64U);
    t34 = *((char **)t33);
    t35 = (t0 + 2408);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    xsi_vlog_generic_convert_array_indices(t30, t31, t29, t34, 2, 1, t37, 32, 1);
    t39 = (t0 + 2248);
    t40 = (t39 + 72U);
    t41 = *((char **)t40);
    t42 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t38, t41, 2, t42, 32, 1);
    t43 = (t30 + 4);
    t14 = *((unsigned int *)t43);
    t44 = (!(t14));
    t45 = (t31 + 4);
    t15 = *((unsigned int *)t45);
    t46 = (!(t15));
    t47 = (t44 && t46);
    t48 = (t38 + 4);
    t16 = *((unsigned int *)t48);
    t49 = (!(t16));
    t50 = (t47 && t49);
    if (t50 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB14;

LAB18:    t17 = *((unsigned int *)t31);
    t18 = *((unsigned int *)t38);
    t51 = (t17 + t18);
    xsi_vlogvar_assign_value(t21, t8, 0, t51, 1);
    goto LAB19;

LAB20:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB22;

LAB24:    t9 = (t9 >> 1);
    t13 = (t9 & 1);
    t10 = (t10 ^ t13);

LAB26:    t11 = (t11 + 1);
    goto LAB23;

LAB30:    xsi_set_current_line(112, ng0);

LAB33:    xsi_set_current_line(113, ng0);
    t22 = ((char*)((ng4)));
    t28 = (t0 + 1928);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 1);
    goto LAB32;

LAB36:    t42 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB37;

LAB38:    *((unsigned int *)t38) = 1;
    goto LAB41;

LAB40:    t45 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB41;

LAB42:    t62 = (t0 + 2248);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    t66 = (t0 + 2248);
    t67 = (t66 + 72U);
    t68 = *((char **)t67);
    t69 = (t0 + 2248);
    t70 = (t69 + 64U);
    t71 = *((char **)t70);
    t73 = (t0 + 1048U);
    t74 = *((char **)t73);
    memset(t72, 0, 8);
    t73 = (t72 + 4);
    t75 = (t74 + 4);
    t76 = *((unsigned int *)t74);
    t77 = (t76 >> 2);
    *((unsigned int *)t72) = t77;
    t78 = *((unsigned int *)t75);
    t79 = (t78 >> 2);
    *((unsigned int *)t73) = t79;
    t80 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t80 & 7U);
    t81 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t81 & 7U);
    xsi_vlog_generic_get_array_select_value(t65, 154, t64, t68, t71, 2, 1, t72, 3, 2);
    memset(t82, 0, 8);
    t83 = (t82 + 4);
    t84 = (t65 + 32);
    t85 = (t65 + 36);
    t86 = *((unsigned int *)t84);
    t87 = (t86 >> 0);
    *((unsigned int *)t82) = t87;
    t88 = *((unsigned int *)t85);
    t89 = (t88 >> 0);
    *((unsigned int *)t83) = t89;
    t90 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t90 & 33554431U);
    t91 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t91 & 33554431U);
    t93 = (t0 + 1048U);
    t94 = *((char **)t93);
    memset(t92, 0, 8);
    t93 = (t92 + 4);
    t95 = (t94 + 4);
    t96 = *((unsigned int *)t94);
    t97 = (t96 >> 5);
    *((unsigned int *)t92) = t97;
    t98 = *((unsigned int *)t95);
    t99 = (t98 >> 5);
    *((unsigned int *)t93) = t99;
    t100 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t100 & 33554431U);
    t101 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t101 & 33554431U);
    memset(t102, 0, 8);
    t103 = (t82 + 4);
    t104 = (t92 + 4);
    t105 = *((unsigned int *)t82);
    t106 = *((unsigned int *)t92);
    t107 = (t105 ^ t106);
    t108 = *((unsigned int *)t103);
    t109 = *((unsigned int *)t104);
    t110 = (t108 ^ t109);
    t111 = (t107 | t110);
    t112 = *((unsigned int *)t103);
    t113 = *((unsigned int *)t104);
    t114 = (t112 | t113);
    t115 = (~(t114));
    t116 = (t111 & t115);
    if (t116 != 0)
        goto LAB48;

LAB45:    if (t114 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t102) = 1;

LAB48:    memset(t118, 0, 8);
    t119 = (t102 + 4);
    t120 = *((unsigned int *)t119);
    t121 = (~(t120));
    t122 = *((unsigned int *)t102);
    t123 = (t122 & t121);
    t124 = (t123 & 1U);
    if (t124 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t119) != 0)
        goto LAB51;

LAB52:    t127 = *((unsigned int *)t38);
    t128 = *((unsigned int *)t118);
    t129 = (t127 & t128);
    *((unsigned int *)t126) = t129;
    t130 = (t38 + 4);
    t131 = (t118 + 4);
    t132 = (t126 + 4);
    t133 = *((unsigned int *)t130);
    t134 = *((unsigned int *)t131);
    t135 = (t133 | t134);
    *((unsigned int *)t132) = t135;
    t136 = *((unsigned int *)t132);
    t137 = (t136 != 0);
    if (t137 == 1)
        goto LAB53;

LAB54:
LAB55:    goto LAB44;

LAB47:    t117 = (t102 + 4);
    *((unsigned int *)t102) = 1;
    *((unsigned int *)t117) = 1;
    goto LAB48;

LAB49:    *((unsigned int *)t118) = 1;
    goto LAB52;

LAB51:    t125 = (t118 + 4);
    *((unsigned int *)t118) = 1;
    *((unsigned int *)t125) = 1;
    goto LAB52;

LAB53:    t138 = *((unsigned int *)t126);
    t139 = *((unsigned int *)t132);
    *((unsigned int *)t126) = (t138 | t139);
    t140 = (t38 + 4);
    t141 = (t118 + 4);
    t142 = *((unsigned int *)t38);
    t143 = (~(t142));
    t144 = *((unsigned int *)t140);
    t145 = (~(t144));
    t146 = *((unsigned int *)t118);
    t147 = (~(t146));
    t148 = *((unsigned int *)t141);
    t149 = (~(t148));
    t44 = (t143 & t145);
    t46 = (t147 & t149);
    t150 = (~(t44));
    t151 = (~(t46));
    t152 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t152 & t150);
    t153 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t153 & t151);
    t154 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t154 & t150);
    t155 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t155 & t151);
    goto LAB55;

LAB56:    xsi_set_current_line(116, ng0);

LAB59:    xsi_set_current_line(117, ng0);
    t162 = ((char*)((ng4)));
    t163 = (t0 + 1928);
    xsi_vlogvar_assign_value(t163, t162, 0, 0, 1);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 3U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 3U);

LAB60:    t5 = ((char*)((ng8)));
    t44 = xsi_vlog_unsigned_case_compare(t6, 2, t5, 2);
    if (t44 == 1)
        goto LAB61;

LAB62:    t2 = ((char*)((ng7)));
    t44 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t44 == 1)
        goto LAB63;

LAB64:    t2 = ((char*)((ng9)));
    t44 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t44 == 1)
        goto LAB65;

LAB66:    t2 = ((char*)((ng10)));
    t44 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t44 == 1)
        goto LAB67;

LAB68:
LAB69:    goto LAB58;

LAB61:    xsi_set_current_line(120, ng0);
    t7 = (t0 + 2248);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    t22 = (t0 + 2248);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t32 = (t0 + 2248);
    t33 = (t32 + 64U);
    t34 = *((char **)t33);
    t35 = (t0 + 1048U);
    t36 = *((char **)t35);
    memset(t30, 0, 8);
    t35 = (t30 + 4);
    t37 = (t36 + 4);
    t15 = *((unsigned int *)t36);
    t16 = (t15 >> 2);
    *((unsigned int *)t30) = t16;
    t17 = *((unsigned int *)t37);
    t18 = (t17 >> 2);
    *((unsigned int *)t35) = t18;
    t19 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t19 & 7U);
    t20 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t20 & 7U);
    xsi_vlog_generic_get_array_select_value(t52, 154, t21, t29, t34, 2, 1, t30, 3, 2);
    memset(t31, 0, 8);
    t39 = (t31 + 4);
    t40 = (t52 + 4);
    t23 = *((unsigned int *)t52);
    t24 = (t23 >> 0);
    *((unsigned int *)t31) = t24;
    t25 = *((unsigned int *)t40);
    t26 = (t25 >> 0);
    *((unsigned int *)t39) = t26;
    t27 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t27 & 4294967295U);
    t53 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t53 & 4294967295U);
    t41 = (t0 + 2088);
    xsi_vlogvar_assign_value(t41, t31, 0, 0, 32);
    goto LAB69;

LAB63:    xsi_set_current_line(121, ng0);
    t3 = (t0 + 2248);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2248);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = (t0 + 2248);
    t28 = (t22 + 64U);
    t29 = *((char **)t28);
    t32 = (t0 + 1048U);
    t33 = *((char **)t32);
    memset(t30, 0, 8);
    t32 = (t30 + 4);
    t34 = (t33 + 4);
    t9 = *((unsigned int *)t33);
    t10 = (t9 >> 2);
    *((unsigned int *)t30) = t10;
    t11 = *((unsigned int *)t34);
    t12 = (t11 >> 2);
    *((unsigned int *)t32) = t12;
    t13 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t13 & 7U);
    t14 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t14 & 7U);
    xsi_vlog_generic_get_array_select_value(t52, 154, t5, t21, t29, 2, 1, t30, 3, 2);
    memset(t31, 0, 8);
    t35 = (t31 + 4);
    t36 = (t52 + 8);
    t37 = (t52 + 12);
    t15 = *((unsigned int *)t36);
    t16 = (t15 >> 0);
    *((unsigned int *)t31) = t16;
    t17 = *((unsigned int *)t37);
    t18 = (t17 >> 0);
    *((unsigned int *)t35) = t18;
    t19 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t19 & 4294967295U);
    t20 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t20 & 4294967295U);
    t39 = (t0 + 2088);
    xsi_vlogvar_assign_value(t39, t31, 0, 0, 32);
    goto LAB69;

LAB65:    xsi_set_current_line(122, ng0);
    t3 = (t0 + 2248);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2248);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = (t0 + 2248);
    t28 = (t22 + 64U);
    t29 = *((char **)t28);
    t32 = (t0 + 1048U);
    t33 = *((char **)t32);
    memset(t30, 0, 8);
    t32 = (t30 + 4);
    t34 = (t33 + 4);
    t9 = *((unsigned int *)t33);
    t10 = (t9 >> 2);
    *((unsigned int *)t30) = t10;
    t11 = *((unsigned int *)t34);
    t12 = (t11 >> 2);
    *((unsigned int *)t32) = t12;
    t13 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t13 & 7U);
    t14 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t14 & 7U);
    xsi_vlog_generic_get_array_select_value(t52, 154, t5, t21, t29, 2, 1, t30, 3, 2);
    memset(t31, 0, 8);
    t35 = (t31 + 4);
    t36 = (t52 + 16);
    t37 = (t52 + 20);
    t15 = *((unsigned int *)t36);
    t16 = (t15 >> 0);
    *((unsigned int *)t31) = t16;
    t17 = *((unsigned int *)t37);
    t18 = (t17 >> 0);
    *((unsigned int *)t35) = t18;
    t19 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t19 & 4294967295U);
    t20 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t20 & 4294967295U);
    t39 = (t0 + 2088);
    xsi_vlogvar_assign_value(t39, t31, 0, 0, 32);
    goto LAB69;

LAB67:    xsi_set_current_line(123, ng0);
    t3 = (t0 + 2248);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2248);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = (t0 + 2248);
    t28 = (t22 + 64U);
    t29 = *((char **)t28);
    t32 = (t0 + 1048U);
    t33 = *((char **)t32);
    memset(t30, 0, 8);
    t32 = (t30 + 4);
    t34 = (t33 + 4);
    t9 = *((unsigned int *)t33);
    t10 = (t9 >> 2);
    *((unsigned int *)t30) = t10;
    t11 = *((unsigned int *)t34);
    t12 = (t11 >> 2);
    *((unsigned int *)t32) = t12;
    t13 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t13 & 7U);
    t14 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t14 & 7U);
    xsi_vlog_generic_get_array_select_value(t52, 154, t5, t21, t29, 2, 1, t30, 3, 2);
    memset(t31, 0, 8);
    t35 = (t31 + 4);
    t36 = (t52 + 24);
    t37 = (t52 + 28);
    t15 = *((unsigned int *)t36);
    t16 = (t15 >> 0);
    *((unsigned int *)t31) = t16;
    t17 = *((unsigned int *)t37);
    t18 = (t17 >> 0);
    *((unsigned int *)t35) = t18;
    t19 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t19 & 4294967295U);
    t20 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t20 & 4294967295U);
    t39 = (t0 + 2088);
    xsi_vlogvar_assign_value(t39, t31, 0, 0, 32);
    goto LAB69;

LAB73:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB74;

LAB75:    xsi_set_current_line(131, ng0);

LAB78:    xsi_set_current_line(132, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 2568);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 5);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    t4 = (t0 + 2248);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = (t0 + 2248);
    t21 = (t8 + 64U);
    t22 = *((char **)t21);
    t28 = (t0 + 1048U);
    t29 = *((char **)t28);
    memset(t38, 0, 8);
    t28 = (t38 + 4);
    t32 = (t29 + 4);
    t9 = *((unsigned int *)t29);
    t10 = (t9 >> 2);
    *((unsigned int *)t38) = t10;
    t11 = *((unsigned int *)t32);
    t12 = (t11 >> 2);
    *((unsigned int *)t28) = t12;
    t13 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t13 & 7U);
    t14 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t14 & 7U);
    xsi_vlog_generic_convert_array_indices(t30, t31, t7, t22, 2, 1, t38, 3, 2);
    t33 = (t0 + 2248);
    t34 = (t33 + 72U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng12)));
    t37 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t72, t82, t92, ((int*)(t35)), 2, t36, 32, 1, t37, 32, 1);
    t39 = (t30 + 4);
    t15 = *((unsigned int *)t39);
    t44 = (!(t15));
    t40 = (t31 + 4);
    t16 = *((unsigned int *)t40);
    t46 = (!(t16));
    t47 = (t44 && t46);
    t41 = (t72 + 4);
    t17 = *((unsigned int *)t41);
    t49 = (!(t17));
    t50 = (t47 && t49);
    t42 = (t82 + 4);
    t18 = *((unsigned int *)t42);
    t51 = (!(t18));
    t164 = (t50 && t51);
    t43 = (t92 + 4);
    t19 = *((unsigned int *)t43);
    t165 = (!(t19));
    t166 = (t164 && t165);
    if (t166 == 1)
        goto LAB79;

LAB80:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t30, 0, 8);
    t2 = (t30 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 5);
    *((unsigned int *)t30) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 5);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t13 & 33554431U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 33554431U);
    t5 = (t0 + 2248);
    t7 = (t0 + 2248);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = (t0 + 2248);
    t28 = (t22 + 64U);
    t29 = *((char **)t28);
    t32 = (t0 + 1048U);
    t33 = *((char **)t32);
    memset(t72, 0, 8);
    t32 = (t72 + 4);
    t34 = (t33 + 4);
    t15 = *((unsigned int *)t33);
    t16 = (t15 >> 2);
    *((unsigned int *)t72) = t16;
    t17 = *((unsigned int *)t34);
    t18 = (t17 >> 2);
    *((unsigned int *)t32) = t18;
    t19 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t19 & 7U);
    t20 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t20 & 7U);
    xsi_vlog_generic_convert_array_indices(t31, t38, t21, t29, 2, 1, t72, 3, 2);
    t35 = (t0 + 2248);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t39 = ((char*)((ng13)));
    t40 = ((char*)((ng14)));
    xsi_vlog_convert_partindices(t82, t92, t102, ((int*)(t37)), 2, t39, 32, 1, t40, 32, 1);
    t41 = (t31 + 4);
    t23 = *((unsigned int *)t41);
    t44 = (!(t23));
    t42 = (t38 + 4);
    t24 = *((unsigned int *)t42);
    t46 = (!(t24));
    t47 = (t44 && t46);
    t43 = (t82 + 4);
    t25 = *((unsigned int *)t43);
    t49 = (!(t25));
    t50 = (t47 && t49);
    t45 = (t92 + 4);
    t26 = *((unsigned int *)t45);
    t51 = (!(t26));
    t164 = (t50 && t51);
    t48 = (t102 + 4);
    t27 = *((unsigned int *)t48);
    t165 = (!(t27));
    t166 = (t164 && t165);
    if (t166 == 1)
        goto LAB81;

LAB82:    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2248);
    t4 = (t0 + 2248);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = (t0 + 2248);
    t21 = (t8 + 64U);
    t22 = *((char **)t21);
    t28 = (t0 + 1048U);
    t29 = *((char **)t28);
    memset(t38, 0, 8);
    t28 = (t38 + 4);
    t32 = (t29 + 4);
    t9 = *((unsigned int *)t29);
    t10 = (t9 >> 2);
    *((unsigned int *)t38) = t10;
    t11 = *((unsigned int *)t32);
    t12 = (t11 >> 2);
    *((unsigned int *)t28) = t12;
    t13 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t13 & 7U);
    t14 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t14 & 7U);
    xsi_vlog_generic_convert_array_indices(t30, t31, t7, t22, 2, 1, t38, 3, 2);
    t33 = (t0 + 2248);
    t34 = (t33 + 72U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t72, t35, 2, t36, 32, 1);
    t37 = (t30 + 4);
    t15 = *((unsigned int *)t37);
    t44 = (!(t15));
    t39 = (t31 + 4);
    t16 = *((unsigned int *)t39);
    t46 = (!(t16));
    t47 = (t44 && t46);
    t40 = (t72 + 4);
    t17 = *((unsigned int *)t40);
    t49 = (!(t17));
    t50 = (t47 && t49);
    if (t50 == 1)
        goto LAB83;

LAB84:    goto LAB77;

LAB79:    t20 = *((unsigned int *)t92);
    t167 = (t20 + 0);
    t23 = *((unsigned int *)t31);
    t24 = *((unsigned int *)t82);
    t168 = (t23 + t24);
    t25 = *((unsigned int *)t72);
    t26 = *((unsigned int *)t82);
    t169 = (t25 - t26);
    t170 = (t169 + 1);
    xsi_vlogvar_assign_value(t2, t3, t167, t168, t170);
    goto LAB80;

LAB81:    t53 = *((unsigned int *)t102);
    t167 = (t53 + 0);
    t54 = *((unsigned int *)t38);
    t55 = *((unsigned int *)t92);
    t168 = (t54 + t55);
    t56 = *((unsigned int *)t82);
    t57 = *((unsigned int *)t92);
    t169 = (t56 - t57);
    t170 = (t169 + 1);
    xsi_vlogvar_assign_value(t5, t30, t167, t168, t170);
    goto LAB82;

LAB83:    t18 = *((unsigned int *)t31);
    t19 = *((unsigned int *)t72);
    t51 = (t18 + t19);
    xsi_vlogvar_assign_value(t3, t2, 0, t51, 1);
    goto LAB84;

}


extern void work_m_00000000000453227738_1085771160_init()
{
	static char *pe[] = {(void *)Initial_92_0,(void *)Always_100_1};
	xsi_register_didat("work_m_00000000000453227738_1085771160", "isim/MIPS_Test_isim_beh.exe.sim/work/m_00000000000453227738_1085771160.didat");
	xsi_register_executes(pe);
}
