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
static const char *ng0 = "C:/Users/AJAY KUMAR/Desktop/vlsi/FIRfilter/FIRfilter.v";
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {2U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {3U, 0U};
static int ng6[] = {2, 0};
static unsigned int ng7[] = {4U, 0U};
static int ng8[] = {3, 0};



static void Initial_32_0(char *t0)
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
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    int t14;
    char *t15;
    unsigned int t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    int t21;
    int t22;

LAB0:    xsi_set_current_line(32, ng0);

LAB2:    xsi_set_current_line(33, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2200);
    t5 = (t0 + 2200);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2200);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 1, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB3;

LAB4:    xsi_set_current_line(34, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 2200);
    t5 = (t0 + 2200);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2200);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 1, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB5;

LAB6:    xsi_set_current_line(35, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 2200);
    t5 = (t0 + 2200);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2200);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 1, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(36, ng0);
    t1 = ((char*)((ng7)));
    t2 = (t0 + 2200);
    t5 = (t0 + 2200);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2200);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng8)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 1, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB9;

LAB10:
LAB1:    return;
LAB3:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB4;

LAB5:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB6;

LAB7:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB8;

LAB9:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB10;

}

static void Always_43_1(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
    char t38[8];
    char t39[8];
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
    char *t14;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    char *t37;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;

LAB0:    t1 = (t0 + 3688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 4008);
    *((int *)t2) = 1;
    t3 = (t0 + 3720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 1480U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(49, ng0);

LAB16:    xsi_set_current_line(51, ng0);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_signed_minus(t13, 32, t3, 32, t2, 32);
    t4 = (t0 + 2520);
    xsi_vlogvar_assign_value(t4, t13, 0, 0, 32);

LAB17:    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_greater(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    t2 = (t0 + 2360);
    t4 = (t0 + 2360);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2360);
    t14 = (t12 + 64U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t13, t15, t11, t17, 1, 1, t18, 32, 1);
    t19 = (t13 + 4);
    t6 = *((unsigned int *)t19);
    t28 = (!(t6));
    t20 = (t15 + 4);
    t7 = *((unsigned int *)t20);
    t31 = (!(t7));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(58, ng0);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB25:    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t11, 32);
    t5 = (t13 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB26;

LAB27:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(44, ng0);

LAB9:    xsi_set_current_line(45, ng0);
    xsi_set_current_line(45, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 2520);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);

LAB10:    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t11, 32);
    t5 = (t13 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(45, ng0);

LAB13:    xsi_set_current_line(46, ng0);
    t12 = ((char*)((ng2)));
    t14 = (t0 + 2360);
    t17 = (t0 + 2360);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2360);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 2520);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 1, 1, t25, 32, 1);
    t26 = (t15 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 2520);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB10;

LAB14:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t14, t12, 0, *((unsigned int *)t16), t36, 0LL);
    goto LAB15;

LAB18:    xsi_set_current_line(51, ng0);

LAB20:    xsi_set_current_line(52, ng0);
    t12 = (t0 + 2360);
    t14 = (t12 + 56U);
    t17 = *((char **)t14);
    t18 = (t0 + 2360);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2360);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = (t0 + 2520);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t29 = ((char*)((ng4)));
    memset(t16, 0, 8);
    xsi_vlog_signed_minus(t16, 32, t26, 32, t29, 32);
    xsi_vlog_generic_get_array_select_value(t15, 8, t17, t20, t23, 1, 1, t16, 32, 1);
    t37 = (t0 + 2360);
    t40 = (t0 + 2360);
    t41 = (t40 + 72U);
    t42 = *((char **)t41);
    t43 = (t0 + 2360);
    t44 = (t43 + 64U);
    t45 = *((char **)t44);
    t46 = (t0 + 2520);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    xsi_vlog_generic_convert_array_indices(t38, t39, t42, t45, 1, 1, t48, 32, 1);
    t49 = (t38 + 4);
    t27 = *((unsigned int *)t49);
    t28 = (!(t27));
    t50 = (t39 + 4);
    t30 = *((unsigned int *)t50);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_signed_minus(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 2520);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB17;

LAB21:    t33 = *((unsigned int *)t38);
    t34 = *((unsigned int *)t39);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t37, t15, 0, *((unsigned int *)t39), t36, 0LL);
    goto LAB22;

LAB23:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t15);
    t35 = (t8 - t9);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t15), t36, 0LL);
    goto LAB24;

LAB26:    xsi_set_current_line(58, ng0);

LAB28:    xsi_set_current_line(59, ng0);
    t12 = (t0 + 2040);
    t14 = (t12 + 56U);
    t17 = *((char **)t14);
    t18 = (t0 + 2360);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t0 + 2360);
    t22 = (t21 + 72U);
    t23 = *((char **)t22);
    t24 = (t0 + 2360);
    t25 = (t24 + 64U);
    t26 = *((char **)t25);
    t29 = (t0 + 2520);
    t37 = (t29 + 56U);
    t40 = *((char **)t37);
    xsi_vlog_generic_get_array_select_value(t15, 16, t20, t23, t26, 1, 1, t40, 32, 1);
    t41 = (t0 + 2200);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t0 + 2200);
    t45 = (t44 + 72U);
    t46 = *((char **)t45);
    t47 = (t0 + 2200);
    t48 = (t47 + 64U);
    t49 = *((char **)t48);
    t50 = (t0 + 2520);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    xsi_vlog_generic_get_array_select_value(t16, 16, t43, t46, t49, 1, 1, t52, 32, 1);
    memset(t38, 0, 8);
    xsi_vlog_signed_multiply(t38, 16, t15, 16, t16, 16);
    memset(t39, 0, 8);
    xsi_vlog_signed_add(t39, 16, t17, 16, t38, 16);
    t53 = (t0 + 2040);
    xsi_vlogvar_wait_assign_value(t53, t39, 0, 0, 16, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 2520);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB25;

}


extern void work_m_00000000003188020641_1303712560_init()
{
	static char *pe[] = {(void *)Initial_32_0,(void *)Always_43_1};
	xsi_register_didat("work_m_00000000003188020641_1303712560", "isim/FIRfilter_tb_isim_beh.exe.sim/work/m_00000000003188020641_1303712560.didat");
	xsi_register_executes(pe);
}
