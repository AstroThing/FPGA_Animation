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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/nimer/Documents/Verilog Projects/Animation/FSM.v";
static unsigned int ng1[] = {16U, 0U};
static unsigned int ng2[] = {32U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {48U, 0U};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {208U, 0U};
static unsigned int ng8[] = {80U, 0U};
static unsigned int ng9[] = {112U, 0U};
static unsigned int ng10[] = {144U, 0U};
static unsigned int ng11[] = {2U, 0U};
static unsigned int ng12[] = {176U, 0U};
static unsigned int ng13[] = {8U, 0U};
static unsigned int ng14[] = {3U, 0U};
static unsigned int ng15[] = {7U, 0U};
static unsigned int ng16[] = {256U, 0U};
static unsigned int ng17[] = {255U, 0U};
static int ng18[] = {1818584179, 0, 1852404831, 0, 105, 0, 0, 0, 0, 0};
static int ng19[] = {1970168947, 0, 1801413231, 0, 1667786083, 0, 0, 0, 0, 0};
static int ng20[] = {1702061428, 0, 1701994354, 0, 1869966964, 0, 99, 0, 0, 0};
static int ng21[] = {6518132, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng22[] = {1869966948, 0, 1769234274, 0, 26990, 0, 0, 0, 0, 0};
static int ng23[] = {1853121906, 0, 1600352117, 0, 1768843636, 0, 0, 0, 0, 0};
static int ng24[] = {1835103083, 0, 1852404831, 0, 105, 0, 0, 0, 0, 0};
static int ng25[] = {1718838644, 0, 1952411494, 0, 1936222566, 0, 1852404831, 0, 105, 0};
static int ng26[] = {1751737972, 0, 1718902643, 0, 27749, 0, 0, 0, 0, 0};
static int ng27[] = {1952543845, 0, 29295, 0, 0, 0, 0, 0, 0, 0};
static int ng28[] = {1853121906, 0, 1600352117, 0, 7562612, 0, 0, 0, 0, 0};
static int ng29[] = {1818584179, 0, 1936028767, 0, 0, 0, 0, 0, 0, 0};
static int ng30[] = {1853121906, 0, 1600352117, 0, 2002872692, 0, 0, 0, 0, 0};
static int ng31[] = {1482184792, 0, 1482184792, 0, 1482184792, 0, 1482184792, 0, 88, 0};



static void Always_42_0(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
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
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 3864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 5212);
    *((int *)t2) = 1;
    t3 = (t0 + 3892);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 3156);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t0 + 3248);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 3156);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t5, 8);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB2;

LAB7:    xsi_set_current_line(46, ng0);

LAB34:    xsi_set_current_line(47, ng0);

LAB35:    xsi_set_current_line(48, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t0 + 3248);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    goto LAB33;

LAB9:    xsi_set_current_line(51, ng0);

LAB36:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 2284U);
    t5 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t5 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB40;

LAB38:    if (*((unsigned int *)t3) == 0)
        goto LAB37;

LAB39:    t6 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t6) = 1;

LAB40:    t7 = (t9 + 4);
    t15 = *((unsigned int *)t7);
    t16 = (~(t15));
    t17 = *((unsigned int *)t9);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2284U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t10 = *((unsigned int *)t2);
    t11 = (~(t10));
    t12 = *((unsigned int *)t3);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB45;

LAB46:
LAB47:
LAB43:    goto LAB33;

LAB11:    xsi_set_current_line(60, ng0);

LAB49:    xsi_set_current_line(61, ng0);

LAB50:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 3248);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB33;

LAB13:    xsi_set_current_line(65, ng0);

LAB51:    xsi_set_current_line(66, ng0);

LAB52:    xsi_set_current_line(67, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 3248);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB33;

LAB15:    xsi_set_current_line(70, ng0);

LAB53:    xsi_set_current_line(71, ng0);

LAB54:    xsi_set_current_line(72, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 3248);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB33;

LAB17:    xsi_set_current_line(75, ng0);

LAB55:    xsi_set_current_line(76, ng0);

LAB56:    xsi_set_current_line(77, ng0);
    t3 = ((char*)((ng9)));
    t5 = (t0 + 3248);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB33;

LAB19:    xsi_set_current_line(80, ng0);

LAB57:    xsi_set_current_line(81, ng0);

LAB58:    xsi_set_current_line(82, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 3248);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB33;

LAB21:    xsi_set_current_line(85, ng0);

LAB59:    xsi_set_current_line(86, ng0);

LAB60:    xsi_set_current_line(87, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 3248);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB33;

LAB23:    xsi_set_current_line(90, ng0);

LAB61:    xsi_set_current_line(91, ng0);

LAB62:    xsi_set_current_line(92, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 3248);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB33;

LAB25:    xsi_set_current_line(95, ng0);

LAB63:    xsi_set_current_line(96, ng0);

LAB64:    xsi_set_current_line(97, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 3248);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB33;

LAB27:    xsi_set_current_line(100, ng0);

LAB65:    xsi_set_current_line(101, ng0);

LAB66:    xsi_set_current_line(102, ng0);
    t3 = ((char*)((ng13)));
    t5 = (t0 + 3248);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB33;

LAB29:    xsi_set_current_line(105, ng0);

LAB67:    xsi_set_current_line(106, ng0);

LAB68:    xsi_set_current_line(107, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 3248);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB33;

LAB31:    xsi_set_current_line(110, ng0);

LAB69:    xsi_set_current_line(112, ng0);
    t3 = (t0 + 2376U);
    t5 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t5 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB73;

LAB71:    if (*((unsigned int *)t3) == 0)
        goto LAB70;

LAB72:    t6 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t6) = 1;

LAB73:    t7 = (t9 + 4);
    t15 = *((unsigned int *)t7);
    t16 = (~(t15));
    t17 = *((unsigned int *)t9);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB74;

LAB75:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 2376U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t10 = *((unsigned int *)t2);
    t11 = (~(t10));
    t12 = *((unsigned int *)t3);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB78;

LAB79:
LAB80:
LAB76:    goto LAB33;

LAB37:    *((unsigned int *)t9) = 1;
    goto LAB40;

LAB41:    xsi_set_current_line(53, ng0);

LAB44:    xsi_set_current_line(54, ng0);
    t20 = ((char*)((ng4)));
    t21 = (t0 + 3248);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 8);
    goto LAB43;

LAB45:    xsi_set_current_line(56, ng0);

LAB48:    xsi_set_current_line(57, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 3248);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    goto LAB47;

LAB70:    *((unsigned int *)t9) = 1;
    goto LAB73;

LAB74:    xsi_set_current_line(112, ng0);

LAB77:    xsi_set_current_line(113, ng0);
    t20 = ((char*)((ng6)));
    t21 = (t0 + 3248);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 8);
    goto LAB76;

LAB78:    xsi_set_current_line(115, ng0);

LAB81:    xsi_set_current_line(116, ng0);
    t5 = ((char*)((ng13)));
    t6 = (t0 + 3248);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    goto LAB80;

}

static void Cont_123_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 4008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 3156);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 5320);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 5220);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_124_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 4152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 3156);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 5356);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 5228);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_125_3(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 4296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 3156);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 2);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 5392);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 5236);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_126_4(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 4440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 3156);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 5428);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 5244);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_127_5(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 4584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 3156);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 4);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 4);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 5464);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 5252);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_130_6(char *t0)
{
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
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 4728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 5260);
    *((int *)t2) = 1;
    t3 = (t0 + 4756);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(130, ng0);

LAB5:    xsi_set_current_line(131, ng0);
    t4 = (t0 + 1732U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 3248);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3156);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(132, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3156);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 8, 0LL);
    goto LAB8;

}

static void Always_138_7(char *t0)
{
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
    char *t11;
    char *t12;
    int t13;

LAB0:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 5268);
    *((int *)t2) = 1;
    t3 = (t0 + 4900);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(138, ng0);

LAB5:    xsi_set_current_line(139, ng0);
    t4 = (t0 + 1732U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(153, ng0);

LAB10:    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2604);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2696);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2788);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2972);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 3248);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t5, 8);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t13 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t13 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t13 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng10)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t13 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng12)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t13 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t13 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t13 == 1)
        goto LAB30;

LAB31:
LAB32:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(139, ng0);

LAB9:    xsi_set_current_line(141, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2604);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2696);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2788);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2972);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(161, ng0);

LAB33:    xsi_set_current_line(162, ng0);
    t11 = ((char*)((ng6)));
    t12 = (t0 + 2972);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    goto LAB32;

LAB14:    xsi_set_current_line(164, ng0);

LAB34:    xsi_set_current_line(165, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2696);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB32;

LAB16:    xsi_set_current_line(168, ng0);

LAB35:    xsi_set_current_line(169, ng0);
    t3 = ((char*)((ng15)));
    t5 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 2696);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2972);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB32;

LAB18:    xsi_set_current_line(173, ng0);

LAB36:    xsi_set_current_line(174, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 2880);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(175, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2788);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB32;

LAB20:    xsi_set_current_line(177, ng0);

LAB37:    xsi_set_current_line(178, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 2880);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2788);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB32;

LAB22:    xsi_set_current_line(181, ng0);

LAB38:    xsi_set_current_line(182, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 2880);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 2788);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB32;

LAB24:    xsi_set_current_line(185, ng0);

LAB39:    xsi_set_current_line(186, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 2880);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(187, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2788);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB32;

LAB26:    xsi_set_current_line(189, ng0);

LAB40:    xsi_set_current_line(190, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2696);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2972);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB32;

LAB28:    xsi_set_current_line(194, ng0);

LAB41:    xsi_set_current_line(195, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 2696);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(196, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2972);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB32;

LAB30:    xsi_set_current_line(198, ng0);

LAB42:    xsi_set_current_line(199, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 2604);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 0LL);
    goto LAB32;

}

static void Always_208_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 5016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(208, ng0);
    t2 = (t0 + 5276);
    *((int *)t2) = 1;
    t3 = (t0 + 5044);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(208, ng0);

LAB5:    xsi_set_current_line(209, ng0);
    t4 = (t0 + 3156);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t7, 8);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB31;

LAB32:
LAB34:
LAB33:    xsi_set_current_line(237, ng0);
    t2 = ((char*)((ng31)));
    t3 = (t0 + 3340);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 136);

LAB35:    goto LAB2;

LAB7:    xsi_set_current_line(211, ng0);
    t9 = ((char*)((ng18)));
    t10 = (t0 + 3340);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 136);
    goto LAB35;

LAB9:    xsi_set_current_line(213, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 3340);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 136);
    goto LAB35;

LAB11:    xsi_set_current_line(215, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 3340);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 136);
    goto LAB35;

LAB13:    xsi_set_current_line(217, ng0);
    t3 = ((char*)((ng21)));
    t4 = (t0 + 3340);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 136);
    goto LAB35;

LAB15:    xsi_set_current_line(219, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t0 + 3340);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 136);
    goto LAB35;

LAB17:    xsi_set_current_line(221, ng0);
    t3 = ((char*)((ng23)));
    t4 = (t0 + 3340);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 136);
    goto LAB35;

LAB19:    xsi_set_current_line(223, ng0);
    t3 = ((char*)((ng24)));
    t4 = (t0 + 3340);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 136);
    goto LAB35;

LAB21:    xsi_set_current_line(225, ng0);
    t3 = ((char*)((ng25)));
    t4 = (t0 + 3340);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 136);
    goto LAB35;

LAB23:    xsi_set_current_line(227, ng0);
    t3 = ((char*)((ng26)));
    t4 = (t0 + 3340);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 136);
    goto LAB35;

LAB25:    xsi_set_current_line(229, ng0);
    t3 = ((char*)((ng27)));
    t4 = (t0 + 3340);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 136);
    goto LAB35;

LAB27:    xsi_set_current_line(231, ng0);
    t3 = ((char*)((ng28)));
    t4 = (t0 + 3340);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 136);
    goto LAB35;

LAB29:    xsi_set_current_line(233, ng0);
    t3 = ((char*)((ng29)));
    t4 = (t0 + 3340);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 136);
    goto LAB35;

LAB31:    xsi_set_current_line(235, ng0);
    t3 = ((char*)((ng30)));
    t4 = (t0 + 3340);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 136);
    goto LAB35;

}


extern void work_m_00000000003400272335_4020927633_init()
{
	static char *pe[] = {(void *)Always_42_0,(void *)Cont_123_1,(void *)Cont_124_2,(void *)Cont_125_3,(void *)Cont_126_4,(void *)Cont_127_5,(void *)Always_130_6,(void *)Always_138_7,(void *)Always_208_8};
	xsi_register_didat("work_m_00000000003400272335_4020927633", "isim/FSM_isim_beh.exe.sim/work/m_00000000003400272335_4020927633.didat");
	xsi_register_executes(pe);
}
