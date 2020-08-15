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
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {8, 0};
static int ng4[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng5[] = {4294967295U, 4294967295U};
static unsigned int ng6[] = {1U, 1U};
static int ng7[] = {155, 0};
static unsigned int ng8[] = {1U, 0U};
static unsigned int ng9[] = {0U, 0U};
static unsigned int ng10[] = {2U, 0U};
static unsigned int ng11[] = {3U, 0U};
static int ng12[] = {3, 0};
static int ng13[] = {127, 0};
static int ng14[] = {154, 0};
static int ng15[] = {128, 0};



static void Initial_81_0(char *t0)
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

LAB0:    xsi_set_current_line(82, ng0);

LAB2:    xsi_set_current_line(83, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    xsi_set_current_line(84, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2568);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
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

LAB5:    xsi_set_current_line(88, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
LAB4:    xsi_set_current_line(85, ng0);

LAB6:    xsi_set_current_line(86, ng0);
    t12 = ((char*)((ng4)));
    t13 = (t0 + 2248);
    t16 = (t0 + 2248);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2248);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 2568);
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

LAB8:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 2568);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng1)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2568);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB8;

}

static void Always_91_1(char *t0)
{
    char t4[8];
    char t14[8];
    char t25[40];
    char t35[8];
    char t51[8];
    char t66[40];
    char t73[8];
    char t83[8];
    char t93[8];
    char t103[8];
    char t119[8];
    char t127[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t65;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t84;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t104;
    char *t105;
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
    unsigned int t117;
    char *t118;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    char *t132;
    char *t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    char *t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    int t151;
    int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    char *t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    char *t166;
    int t167;
    int t168;
    int t169;
    int t170;
    int t171;
    int t172;
    int t173;
    int t174;
    int t175;
    int t176;
    int t177;

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 4056);
    *((int *)t2) = 1;
    t3 = (t0 + 3768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(92, ng0);

LAB5:    xsi_set_current_line(93, ng0);
    t5 = (t0 + 1528U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = *((unsigned int *)t6);
    t8 = (t8 & 1);
    if (*((unsigned int *)t5) != 0)
        goto LAB6;

LAB7:    t10 = 1;

LAB9:    t11 = (t10 <= 31);
    if (t11 == 1)
        goto LAB10;

LAB11:    *((unsigned int *)t4) = t8;

LAB8:    t13 = ((char*)((ng6)));
    memset(t14, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t13))
        goto LAB15;

LAB13:    t15 = (t4 + 4);
    t16 = (t13 + 4);
    if (*((unsigned int *)t15) != *((unsigned int *)t16))
        goto LAB15;

LAB14:    *((unsigned int *)t14) = 1;

LAB15:    t17 = (t14 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (~(t18));
    t20 = *((unsigned int *)t14);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t8);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB20;

LAB21:
LAB22:
LAB18:    goto LAB2;

LAB6:    t9 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB8;

LAB10:    t7 = (t7 >> 1);
    t12 = (t7 & 1);
    t8 = (t8 ^ t12);

LAB12:    t10 = (t10 + 1);
    goto LAB9;

LAB16:    xsi_set_current_line(94, ng0);

LAB19:    xsi_set_current_line(95, ng0);
    t23 = ((char*)((ng1)));
    t24 = (t0 + 1928);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 1);
    goto LAB18;

LAB20:    xsi_set_current_line(98, ng0);

LAB23:    xsi_set_current_line(99, ng0);
    t5 = (t0 + 2248);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    t13 = (t0 + 2248);
    t15 = (t13 + 72U);
    t16 = *((char **)t15);
    t17 = (t0 + 2248);
    t23 = (t17 + 64U);
    t24 = *((char **)t23);
    t26 = (t0 + 1528U);
    t27 = *((char **)t26);
    memset(t4, 0, 8);
    t26 = (t4 + 4);
    t28 = (t27 + 4);
    t18 = *((unsigned int *)t27);
    t19 = (t18 >> 2);
    *((unsigned int *)t4) = t19;
    t20 = *((unsigned int *)t28);
    t21 = (t20 >> 2);
    *((unsigned int *)t26) = t21;
    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 7U);
    t29 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t29 & 7U);
    xsi_vlog_generic_get_array_select_value(t25, 156, t9, t16, t24, 2, 1, t4, 3, 2);
    t30 = (t0 + 2248);
    t31 = (t30 + 72U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng7)));
    xsi_vlog_generic_get_index_select_value(t14, 1, t25, t32, 2, t33, 32, 1);
    t34 = ((char*)((ng8)));
    memset(t35, 0, 8);
    t36 = (t14 + 4);
    t37 = (t34 + 4);
    t38 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t34);
    t40 = (t38 ^ t39);
    t41 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t37);
    t43 = (t41 ^ t42);
    t44 = (t40 | t43);
    t45 = *((unsigned int *)t36);
    t46 = *((unsigned int *)t37);
    t47 = (t45 | t46);
    t48 = (~(t47));
    t49 = (t44 & t48);
    if (t49 != 0)
        goto LAB27;

LAB24:    if (t47 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t35) = 1;

LAB27:    memset(t51, 0, 8);
    t52 = (t35 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t35);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t52) != 0)
        goto LAB30;

LAB31:    t59 = (t51 + 4);
    t60 = *((unsigned int *)t51);
    t61 = *((unsigned int *)t59);
    t62 = (t60 || t61);
    if (t62 > 0)
        goto LAB32;

LAB33:    memcpy(t127, t51, 8);

LAB34:    t159 = (t127 + 4);
    t160 = *((unsigned int *)t159);
    t161 = (~(t160));
    t162 = *((unsigned int *)t127);
    t163 = (t162 & t161);
    t164 = (t163 != 0);
    if (t164 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(111, ng0);

LAB60:    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t2, 32, t6, 5);
    t9 = (t0 + 2408);
    xsi_vlogvar_assign_value(t9, t14, 0, 0, 5);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng12)));
    memset(t14, 0, 8);
    t9 = (t5 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t10 = (t7 ^ t8);
    t11 = *((unsigned int *)t9);
    t12 = *((unsigned int *)t13);
    t18 = (t11 ^ t12);
    t19 = (t10 | t18);
    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t13);
    t22 = (t20 | t21);
    t29 = (~(t22));
    t38 = (t19 & t29);
    if (t38 != 0)
        goto LAB64;

LAB61:    if (t22 != 0)
        goto LAB63;

LAB62:    *((unsigned int *)t14) = 1;

LAB64:    t16 = (t14 + 4);
    t39 = *((unsigned int *)t16);
    t40 = (~(t39));
    t41 = *((unsigned int *)t14);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB65;

LAB66:
LAB67:
LAB48:    goto LAB22;

LAB26:    t50 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB27;

LAB28:    *((unsigned int *)t51) = 1;
    goto LAB31;

LAB30:    t58 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB31;

LAB32:    t63 = (t0 + 2248);
    t64 = (t63 + 56U);
    t65 = *((char **)t64);
    t67 = (t0 + 2248);
    t68 = (t67 + 72U);
    t69 = *((char **)t68);
    t70 = (t0 + 2248);
    t71 = (t70 + 64U);
    t72 = *((char **)t71);
    t74 = (t0 + 1528U);
    t75 = *((char **)t74);
    memset(t73, 0, 8);
    t74 = (t73 + 4);
    t76 = (t75 + 4);
    t77 = *((unsigned int *)t75);
    t78 = (t77 >> 2);
    *((unsigned int *)t73) = t78;
    t79 = *((unsigned int *)t76);
    t80 = (t79 >> 2);
    *((unsigned int *)t74) = t80;
    t81 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t81 & 7U);
    t82 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t82 & 7U);
    xsi_vlog_generic_get_array_select_value(t66, 156, t65, t69, t72, 2, 1, t73, 3, 2);
    memset(t83, 0, 8);
    t84 = (t83 + 4);
    t85 = (t66 + 32);
    t86 = (t66 + 36);
    t87 = *((unsigned int *)t85);
    t88 = (t87 >> 0);
    *((unsigned int *)t83) = t88;
    t89 = *((unsigned int *)t86);
    t90 = (t89 >> 0);
    *((unsigned int *)t84) = t90;
    t91 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t91 & 134217727U);
    t92 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t92 & 134217727U);
    t94 = (t0 + 1528U);
    t95 = *((char **)t94);
    memset(t93, 0, 8);
    t94 = (t93 + 4);
    t96 = (t95 + 4);
    t97 = *((unsigned int *)t95);
    t98 = (t97 >> 5);
    *((unsigned int *)t93) = t98;
    t99 = *((unsigned int *)t96);
    t100 = (t99 >> 5);
    *((unsigned int *)t94) = t100;
    t101 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t101 & 134217727U);
    t102 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t102 & 134217727U);
    memset(t103, 0, 8);
    t104 = (t83 + 4);
    t105 = (t93 + 4);
    t106 = *((unsigned int *)t83);
    t107 = *((unsigned int *)t93);
    t108 = (t106 ^ t107);
    t109 = *((unsigned int *)t104);
    t110 = *((unsigned int *)t105);
    t111 = (t109 ^ t110);
    t112 = (t108 | t111);
    t113 = *((unsigned int *)t104);
    t114 = *((unsigned int *)t105);
    t115 = (t113 | t114);
    t116 = (~(t115));
    t117 = (t112 & t116);
    if (t117 != 0)
        goto LAB38;

LAB35:    if (t115 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t103) = 1;

LAB38:    memset(t119, 0, 8);
    t120 = (t103 + 4);
    t121 = *((unsigned int *)t120);
    t122 = (~(t121));
    t123 = *((unsigned int *)t103);
    t124 = (t123 & t122);
    t125 = (t124 & 1U);
    if (t125 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t120) != 0)
        goto LAB41;

LAB42:    t128 = *((unsigned int *)t51);
    t129 = *((unsigned int *)t119);
    t130 = (t128 & t129);
    *((unsigned int *)t127) = t130;
    t131 = (t51 + 4);
    t132 = (t119 + 4);
    t133 = (t127 + 4);
    t134 = *((unsigned int *)t131);
    t135 = *((unsigned int *)t132);
    t136 = (t134 | t135);
    *((unsigned int *)t133) = t136;
    t137 = *((unsigned int *)t133);
    t138 = (t137 != 0);
    if (t138 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB34;

LAB37:    t118 = (t103 + 4);
    *((unsigned int *)t103) = 1;
    *((unsigned int *)t118) = 1;
    goto LAB38;

LAB39:    *((unsigned int *)t119) = 1;
    goto LAB42;

LAB41:    t126 = (t119 + 4);
    *((unsigned int *)t119) = 1;
    *((unsigned int *)t126) = 1;
    goto LAB42;

LAB43:    t139 = *((unsigned int *)t127);
    t140 = *((unsigned int *)t133);
    *((unsigned int *)t127) = (t139 | t140);
    t141 = (t51 + 4);
    t142 = (t119 + 4);
    t143 = *((unsigned int *)t51);
    t144 = (~(t143));
    t145 = *((unsigned int *)t141);
    t146 = (~(t145));
    t147 = *((unsigned int *)t119);
    t148 = (~(t147));
    t149 = *((unsigned int *)t142);
    t150 = (~(t149));
    t151 = (t144 & t146);
    t152 = (t148 & t150);
    t153 = (~(t151));
    t154 = (~(t152));
    t155 = *((unsigned int *)t133);
    *((unsigned int *)t133) = (t155 & t153);
    t156 = *((unsigned int *)t133);
    *((unsigned int *)t133) = (t156 & t154);
    t157 = *((unsigned int *)t127);
    *((unsigned int *)t127) = (t157 & t153);
    t158 = *((unsigned int *)t127);
    *((unsigned int *)t127) = (t158 & t154);
    goto LAB45;

LAB46:    xsi_set_current_line(100, ng0);

LAB49:    xsi_set_current_line(101, ng0);
    t165 = ((char*)((ng1)));
    t166 = (t0 + 1928);
    xsi_vlogvar_assign_value(t166, t165, 0, 0, 1);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 3U);
    t18 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t18 & 3U);

LAB50:    t6 = ((char*)((ng9)));
    t151 = xsi_vlog_unsigned_case_compare(t4, 2, t6, 2);
    if (t151 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng8)));
    t151 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t151 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng10)));
    t151 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t151 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng11)));
    t151 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t151 == 1)
        goto LAB57;

LAB58:
LAB59:    goto LAB48;

LAB51:    xsi_set_current_line(104, ng0);
    t9 = (t0 + 2248);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    t16 = (t0 + 2248);
    t17 = (t16 + 72U);
    t23 = *((char **)t17);
    t24 = (t0 + 2248);
    t26 = (t24 + 64U);
    t27 = *((char **)t26);
    t28 = (t0 + 1528U);
    t30 = *((char **)t28);
    memset(t14, 0, 8);
    t28 = (t14 + 4);
    t31 = (t30 + 4);
    t19 = *((unsigned int *)t30);
    t20 = (t19 >> 2);
    *((unsigned int *)t14) = t20;
    t21 = *((unsigned int *)t31);
    t22 = (t21 >> 2);
    *((unsigned int *)t28) = t22;
    t29 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t29 & 7U);
    t38 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t38 & 7U);
    xsi_vlog_generic_get_array_select_value(t25, 156, t15, t23, t27, 2, 1, t14, 3, 2);
    memset(t35, 0, 8);
    t32 = (t35 + 4);
    t33 = (t25 + 4);
    t39 = *((unsigned int *)t25);
    t40 = (t39 >> 0);
    *((unsigned int *)t35) = t40;
    t41 = *((unsigned int *)t33);
    t42 = (t41 >> 0);
    *((unsigned int *)t32) = t42;
    t43 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t43 & 4294967295U);
    t44 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t44 & 4294967295U);
    t34 = (t0 + 2088);
    xsi_vlogvar_assign_value(t34, t35, 0, 0, 32);
    goto LAB59;

LAB53:    xsi_set_current_line(105, ng0);
    t3 = (t0 + 2248);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t9 = (t0 + 2248);
    t13 = (t9 + 72U);
    t15 = *((char **)t13);
    t16 = (t0 + 2248);
    t17 = (t16 + 64U);
    t23 = *((char **)t17);
    t24 = (t0 + 1528U);
    t26 = *((char **)t24);
    memset(t14, 0, 8);
    t24 = (t14 + 4);
    t27 = (t26 + 4);
    t7 = *((unsigned int *)t26);
    t8 = (t7 >> 2);
    *((unsigned int *)t14) = t8;
    t10 = *((unsigned int *)t27);
    t11 = (t10 >> 2);
    *((unsigned int *)t24) = t11;
    t12 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t12 & 7U);
    t18 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t18 & 7U);
    xsi_vlog_generic_get_array_select_value(t25, 156, t6, t15, t23, 2, 1, t14, 3, 2);
    memset(t35, 0, 8);
    t28 = (t35 + 4);
    t30 = (t25 + 8);
    t31 = (t25 + 12);
    t19 = *((unsigned int *)t30);
    t20 = (t19 >> 0);
    *((unsigned int *)t35) = t20;
    t21 = *((unsigned int *)t31);
    t22 = (t21 >> 0);
    *((unsigned int *)t28) = t22;
    t29 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t29 & 4294967295U);
    t38 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t38 & 4294967295U);
    t32 = (t0 + 2088);
    xsi_vlogvar_assign_value(t32, t35, 0, 0, 32);
    goto LAB59;

LAB55:    xsi_set_current_line(106, ng0);
    t3 = (t0 + 2248);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t9 = (t0 + 2248);
    t13 = (t9 + 72U);
    t15 = *((char **)t13);
    t16 = (t0 + 2248);
    t17 = (t16 + 64U);
    t23 = *((char **)t17);
    t24 = (t0 + 1528U);
    t26 = *((char **)t24);
    memset(t14, 0, 8);
    t24 = (t14 + 4);
    t27 = (t26 + 4);
    t7 = *((unsigned int *)t26);
    t8 = (t7 >> 2);
    *((unsigned int *)t14) = t8;
    t10 = *((unsigned int *)t27);
    t11 = (t10 >> 2);
    *((unsigned int *)t24) = t11;
    t12 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t12 & 7U);
    t18 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t18 & 7U);
    xsi_vlog_generic_get_array_select_value(t25, 156, t6, t15, t23, 2, 1, t14, 3, 2);
    memset(t35, 0, 8);
    t28 = (t35 + 4);
    t30 = (t25 + 16);
    t31 = (t25 + 20);
    t19 = *((unsigned int *)t30);
    t20 = (t19 >> 0);
    *((unsigned int *)t35) = t20;
    t21 = *((unsigned int *)t31);
    t22 = (t21 >> 0);
    *((unsigned int *)t28) = t22;
    t29 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t29 & 4294967295U);
    t38 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t38 & 4294967295U);
    t32 = (t0 + 2088);
    xsi_vlogvar_assign_value(t32, t35, 0, 0, 32);
    goto LAB59;

LAB57:    xsi_set_current_line(107, ng0);
    t3 = (t0 + 2248);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t9 = (t0 + 2248);
    t13 = (t9 + 72U);
    t15 = *((char **)t13);
    t16 = (t0 + 2248);
    t17 = (t16 + 64U);
    t23 = *((char **)t17);
    t24 = (t0 + 1528U);
    t26 = *((char **)t24);
    memset(t14, 0, 8);
    t24 = (t14 + 4);
    t27 = (t26 + 4);
    t7 = *((unsigned int *)t26);
    t8 = (t7 >> 2);
    *((unsigned int *)t14) = t8;
    t10 = *((unsigned int *)t27);
    t11 = (t10 >> 2);
    *((unsigned int *)t24) = t11;
    t12 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t12 & 7U);
    t18 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t18 & 7U);
    xsi_vlog_generic_get_array_select_value(t25, 156, t6, t15, t23, 2, 1, t14, 3, 2);
    memset(t35, 0, 8);
    t28 = (t35 + 4);
    t30 = (t25 + 24);
    t31 = (t25 + 28);
    t19 = *((unsigned int *)t30);
    t20 = (t19 >> 0);
    *((unsigned int *)t35) = t20;
    t21 = *((unsigned int *)t31);
    t22 = (t21 >> 0);
    *((unsigned int *)t28) = t22;
    t29 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t29 & 4294967295U);
    t38 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t38 & 4294967295U);
    t32 = (t0 + 2088);
    xsi_vlogvar_assign_value(t32, t35, 0, 0, 32);
    goto LAB59;

LAB63:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB64;

LAB65:    xsi_set_current_line(115, ng0);

LAB68:    xsi_set_current_line(116, ng0);
    t17 = ((char*)((ng5)));
    t23 = (t0 + 2088);
    xsi_vlogvar_assign_value(t23, t17, 0, 0, 32);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    t5 = (t0 + 2248);
    t6 = (t5 + 72U);
    t9 = *((char **)t6);
    t13 = (t0 + 2248);
    t15 = (t13 + 64U);
    t16 = *((char **)t15);
    t17 = (t0 + 1528U);
    t23 = *((char **)t17);
    memset(t51, 0, 8);
    t17 = (t51 + 4);
    t24 = (t23 + 4);
    t7 = *((unsigned int *)t23);
    t8 = (t7 >> 2);
    *((unsigned int *)t51) = t8;
    t10 = *((unsigned int *)t24);
    t11 = (t10 >> 2);
    *((unsigned int *)t17) = t11;
    t12 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t12 & 7U);
    t18 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t18 & 7U);
    xsi_vlog_generic_convert_array_indices(t14, t35, t9, t16, 2, 1, t51, 3, 2);
    t26 = (t0 + 2248);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t30 = ((char*)((ng13)));
    t31 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t73, t83, t93, ((int*)(t28)), 2, t30, 32, 1, t31, 32, 1);
    t32 = (t14 + 4);
    t19 = *((unsigned int *)t32);
    t151 = (!(t19));
    t33 = (t35 + 4);
    t20 = *((unsigned int *)t33);
    t152 = (!(t20));
    t167 = (t151 && t152);
    t34 = (t73 + 4);
    t21 = *((unsigned int *)t34);
    t168 = (!(t21));
    t169 = (t167 && t168);
    t36 = (t83 + 4);
    t22 = *((unsigned int *)t36);
    t170 = (!(t22));
    t171 = (t169 && t170);
    t37 = (t93 + 4);
    t29 = *((unsigned int *)t37);
    t172 = (!(t29));
    t173 = (t171 && t172);
    if (t173 == 1)
        goto LAB69;

LAB70:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 5);
    *((unsigned int *)t14) = t8;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 5);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t12 & 33554431U);
    t18 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t18 & 33554431U);
    t6 = (t0 + 2248);
    t9 = (t0 + 2248);
    t13 = (t9 + 72U);
    t15 = *((char **)t13);
    t16 = (t0 + 2248);
    t17 = (t16 + 64U);
    t23 = *((char **)t17);
    t24 = (t0 + 1528U);
    t26 = *((char **)t24);
    memset(t73, 0, 8);
    t24 = (t73 + 4);
    t27 = (t26 + 4);
    t19 = *((unsigned int *)t26);
    t20 = (t19 >> 2);
    *((unsigned int *)t73) = t20;
    t21 = *((unsigned int *)t27);
    t22 = (t21 >> 2);
    *((unsigned int *)t24) = t22;
    t29 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t29 & 7U);
    t38 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t38 & 7U);
    xsi_vlog_generic_convert_array_indices(t35, t51, t15, t23, 2, 1, t73, 3, 2);
    t28 = (t0 + 2248);
    t30 = (t28 + 72U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng14)));
    t33 = ((char*)((ng15)));
    xsi_vlog_convert_partindices(t83, t93, t103, ((int*)(t31)), 2, t32, 32, 1, t33, 32, 1);
    t34 = (t35 + 4);
    t39 = *((unsigned int *)t34);
    t151 = (!(t39));
    t36 = (t51 + 4);
    t40 = *((unsigned int *)t36);
    t152 = (!(t40));
    t167 = (t151 && t152);
    t37 = (t83 + 4);
    t41 = *((unsigned int *)t37);
    t168 = (!(t41));
    t169 = (t167 && t168);
    t50 = (t93 + 4);
    t42 = *((unsigned int *)t50);
    t170 = (!(t42));
    t171 = (t169 && t170);
    t52 = (t103 + 4);
    t43 = *((unsigned int *)t52);
    t172 = (!(t43));
    t173 = (t171 && t172);
    if (t173 == 1)
        goto LAB71;

LAB72:    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2248);
    t5 = (t0 + 2248);
    t6 = (t5 + 72U);
    t9 = *((char **)t6);
    t13 = (t0 + 2248);
    t15 = (t13 + 64U);
    t16 = *((char **)t15);
    t17 = (t0 + 1528U);
    t23 = *((char **)t17);
    memset(t51, 0, 8);
    t17 = (t51 + 4);
    t24 = (t23 + 4);
    t7 = *((unsigned int *)t23);
    t8 = (t7 >> 2);
    *((unsigned int *)t51) = t8;
    t10 = *((unsigned int *)t24);
    t11 = (t10 >> 2);
    *((unsigned int *)t17) = t11;
    t12 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t12 & 7U);
    t18 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t18 & 7U);
    xsi_vlog_generic_convert_array_indices(t14, t35, t9, t16, 2, 1, t51, 3, 2);
    t26 = (t0 + 2248);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t30 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t73, t28, 2, t30, 32, 1);
    t31 = (t14 + 4);
    t19 = *((unsigned int *)t31);
    t151 = (!(t19));
    t32 = (t35 + 4);
    t20 = *((unsigned int *)t32);
    t152 = (!(t20));
    t167 = (t151 && t152);
    t33 = (t73 + 4);
    t21 = *((unsigned int *)t33);
    t168 = (!(t21));
    t169 = (t167 && t168);
    if (t169 == 1)
        goto LAB73;

LAB74:    goto LAB67;

LAB69:    t38 = *((unsigned int *)t93);
    t174 = (t38 + 0);
    t39 = *((unsigned int *)t35);
    t40 = *((unsigned int *)t83);
    t175 = (t39 + t40);
    t41 = *((unsigned int *)t73);
    t42 = *((unsigned int *)t83);
    t176 = (t41 - t42);
    t177 = (t176 + 1);
    xsi_vlogvar_assign_value(t2, t3, t174, t175, t177);
    goto LAB70;

LAB71:    t44 = *((unsigned int *)t103);
    t174 = (t44 + 0);
    t45 = *((unsigned int *)t51);
    t46 = *((unsigned int *)t93);
    t175 = (t45 + t46);
    t47 = *((unsigned int *)t83);
    t48 = *((unsigned int *)t93);
    t176 = (t47 - t48);
    t177 = (t176 + 1);
    xsi_vlogvar_assign_value(t6, t14, t174, t175, t177);
    goto LAB72;

LAB73:    t22 = *((unsigned int *)t35);
    t29 = *((unsigned int *)t73);
    t170 = (t22 + t29);
    xsi_vlogvar_assign_value(t3, t2, 0, t170, 1);
    goto LAB74;

}


extern void work_m_00000000003194255546_2456221711_init()
{
	static char *pe[] = {(void *)Initial_81_0,(void *)Always_91_1};
	xsi_register_didat("work_m_00000000003194255546_2456221711", "isim/MIPS_Test_isim_beh.exe.sim/work/m_00000000003194255546_2456221711.didat");
	xsi_register_executes(pe);
}
