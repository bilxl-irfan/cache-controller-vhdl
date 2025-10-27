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

/* This file is designed for use with ISim build 0x8ddf5b5d */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/student1/mwhassan/COE758 Lab/Project1/CacheController/SDRAMController.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2696732300_3212880686_p_0(char *t0)
{
    char t14[16];
    char t45[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    int t5;
    unsigned char t6;
    char *t7;
    int t8;
    int t9;
    char *t10;
    char *t11;
    int t12;
    int t13;
    char *t15;
    int t16;
    int t17;
    char *t18;
    int t19;
    int t20;
    int t21;
    char *t22;
    char *t23;
    int t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned char t40;
    unsigned char t41;
    unsigned char t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;

LAB0:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4264);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 2152U);
    t4 = *((char **)t3);
    t5 = *((int *)t4);
    t6 = (t5 == 0);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t6 = (t2 == (unsigned char)3);
    if (t6 != 0)
        goto LAB18;

LAB20:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 4536);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB19:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t6 = *((unsigned char *)t3);
    t40 = (t6 == (unsigned char)3);
    if (t40 == 1)
        goto LAB24;

LAB25:    t2 = (unsigned char)0;

LAB26:    if (t2 != 0)
        goto LAB21;

LAB23:
LAB22:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t6 = *((unsigned char *)t3);
    t40 = (t6 == (unsigned char)3);
    if (t40 == 1)
        goto LAB30;

LAB31:    t2 = (unsigned char)0;

LAB32:    if (t2 != 0)
        goto LAB27;

LAB29:
LAB28:    goto LAB3;

LAB5:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 9900);
    *((int *)t3) = 0;
    t7 = (t0 + 9904);
    *((int *)t7) = 7;
    t8 = 0;
    t9 = 7;

LAB8:    if (t8 <= t9)
        goto LAB9;

LAB11:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 4408);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    *((int *)t10) = 1;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB9:    xsi_set_current_line(43, ng0);
    t10 = (t0 + 9908);
    *((int *)t10) = 0;
    t11 = (t0 + 9912);
    *((int *)t11) = 31;
    t12 = 0;
    t13 = 31;

LAB12:    if (t12 <= t13)
        goto LAB13;

LAB15:
LAB10:    t1 = (t0 + 9900);
    t8 = *((int *)t1);
    t3 = (t0 + 9904);
    t9 = *((int *)t3);
    if (t8 == t9)
        goto LAB11;

LAB17:    t5 = (t8 + 1);
    t8 = t5;
    t4 = (t0 + 9900);
    *((int *)t4) = t8;
    goto LAB8;

LAB13:    xsi_set_current_line(45, ng0);
    t15 = (t0 + 9900);
    t16 = *((int *)t15);
    t17 = (t16 * 16);
    t18 = (t0 + 9908);
    t19 = *((int *)t18);
    t20 = (t17 + t19);
    t21 = xsi_vhdl_mod(t20, 256);
    t22 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t14, t21, 8);
    t23 = (t0 + 9900);
    t24 = *((int *)t23);
    t25 = (t24 - 7);
    t26 = (t25 * -1);
    t27 = (t26 * 32U);
    t28 = (t0 + 9908);
    t29 = *((int *)t28);
    t30 = (t29 - 31);
    t31 = (t30 * -1);
    t32 = (t27 + t31);
    t33 = (8U * t32);
    t34 = (0U + t33);
    t35 = (t0 + 4344);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    memcpy(t39, t22, 8U);
    xsi_driver_first_trans_delta(t35, t34, 8U, 0LL);

LAB14:    t1 = (t0 + 9908);
    t12 = *((int *)t1);
    t3 = (t0 + 9912);
    t13 = *((int *)t3);
    if (t12 == t13)
        goto LAB15;

LAB16:    t5 = (t12 + 1);
    t12 = t5;
    t4 = (t0 + 9908);
    *((int *)t4) = t12;
    goto LAB12;

LAB18:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1192U);
    t4 = *((char **)t1);
    t1 = (t0 + 4472);
    t7 = (t1 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    memcpy(t15, t4, 16U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 4536);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB21:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1672U);
    t7 = *((char **)t1);
    t1 = (t0 + 1192U);
    t10 = *((char **)t1);
    t26 = (15 - 7);
    t27 = (t26 * 1U);
    t31 = (0 + t27);
    t1 = (t10 + t31);
    t11 = (t14 + 0U);
    t15 = (t11 + 0U);
    *((int *)t15) = 7;
    t15 = (t11 + 4U);
    *((int *)t15) = 5;
    t15 = (t11 + 8U);
    *((int *)t15) = -1;
    t5 = (5 - 7);
    t32 = (t5 * -1);
    t32 = (t32 + 1);
    t15 = (t11 + 12U);
    *((unsigned int *)t15) = t32;
    t8 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t1, t14);
    t9 = (t8 - 7);
    t32 = (t9 * -1);
    t33 = (t32 * 32U);
    t15 = (t0 + 1192U);
    t18 = *((char **)t15);
    t34 = (15 - 4);
    t43 = (t34 * 1U);
    t44 = (0 + t43);
    t15 = (t18 + t44);
    t22 = (t45 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 4;
    t23 = (t22 + 4U);
    *((int *)t23) = 0;
    t23 = (t22 + 8U);
    *((int *)t23) = -1;
    t12 = (0 - 4);
    t46 = (t12 * -1);
    t46 = (t46 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t46;
    t13 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t15, t45);
    t16 = (t13 - 31);
    t46 = (t16 * -1);
    t47 = (t33 + t46);
    t48 = (8U * t47);
    t49 = (0U + t48);
    t23 = (t0 + 4344);
    t28 = (t23 + 56U);
    t35 = *((char **)t28);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t37, t7, 8U);
    xsi_driver_first_trans_delta(t23, t49, 8U, 0LL);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 2792U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t8 = (t5 + 1);
    t1 = (t0 + 4600);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((int *)t11) = t8;
    xsi_driver_first_trans_fast(t1);
    goto LAB22;

LAB24:    t1 = (t0 + 1352U);
    t4 = *((char **)t1);
    t41 = *((unsigned char *)t4);
    t42 = (t41 == (unsigned char)3);
    t2 = t42;
    goto LAB26;

LAB27:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 1992U);
    t7 = *((char **)t1);
    t1 = (t0 + 2472U);
    t10 = *((char **)t1);
    t26 = (15 - 7);
    t27 = (t26 * 1U);
    t31 = (0 + t27);
    t1 = (t10 + t31);
    t11 = (t14 + 0U);
    t15 = (t11 + 0U);
    *((int *)t15) = 7;
    t15 = (t11 + 4U);
    *((int *)t15) = 5;
    t15 = (t11 + 8U);
    *((int *)t15) = -1;
    t5 = (5 - 7);
    t32 = (t5 * -1);
    t32 = (t32 + 1);
    t15 = (t11 + 12U);
    *((unsigned int *)t15) = t32;
    t8 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t1, t14);
    t9 = (t8 - 7);
    t32 = (t9 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, t8);
    t33 = (t32 * 32U);
    t15 = (t0 + 2472U);
    t18 = *((char **)t15);
    t34 = (15 - 4);
    t43 = (t34 * 1U);
    t44 = (0 + t43);
    t15 = (t18 + t44);
    t22 = (t45 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 4;
    t23 = (t22 + 4U);
    *((int *)t23) = 0;
    t23 = (t22 + 8U);
    *((int *)t23) = -1;
    t12 = (0 - 4);
    t46 = (t12 * -1);
    t46 = (t46 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t46;
    t13 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t15, t45);
    t16 = (t13 - 31);
    t46 = (t16 * -1);
    xsi_vhdl_check_range_of_index(31, 0, -1, t13);
    t47 = (t33 + t46);
    t48 = (8U * t47);
    t49 = (0 + t48);
    t23 = (t7 + t49);
    t28 = (t0 + 4664);
    t35 = (t28 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memcpy(t38, t23, 8U);
    xsi_driver_first_trans_fast_port(t28);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t8 = (t5 + 1);
    t1 = (t0 + 4728);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((int *)t11) = t8;
    xsi_driver_first_trans_fast(t1);
    goto LAB28;

LAB30:    t1 = (t0 + 1352U);
    t4 = *((char **)t1);
    t41 = *((unsigned char *)t4);
    t42 = (t41 == (unsigned char)2);
    t2 = t42;
    goto LAB32;

}


extern void work_a_2696732300_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2696732300_3212880686_p_0};
	xsi_register_didat("work_a_2696732300_3212880686", "isim/CacheController_isim_beh.exe.sim/work/a_2696732300_3212880686.didat");
	xsi_register_executes(pe);
}
