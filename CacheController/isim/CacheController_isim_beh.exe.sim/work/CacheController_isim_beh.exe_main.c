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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_3499444699;
char *IEEE_P_1242562249;
char *IEEE_P_2592010699;
char *STD_STANDARD;
char *IEEE_P_3620187407;
char *VL_P_2533777724;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_16541823861846354283_2073120511_init();
    xilinxcorelib_ver_m_04284627112054182733_1824307596_init();
    xilinxcorelib_ver_m_18166792875774041790_2414632789_init();
    xilinxcorelib_ver_m_17738287534884592592_1441693521_init();
    xilinxcorelib_ver_m_06058912016591365051_3495305026_init();
    work_m_14056882636803624207_3639447212_init();
    work_m_11359501693864693368_3417465232_init();
    work_m_04875509396479244216_3065854867_init();
    ieee_p_2592010699_init();
    ieee_p_1242562249_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    vl_p_2533777724_init();
    work_a_0740589018_3212880686_init();
    work_a_2696732300_3212880686_init();
    work_a_0092609192_3212880686_init();


    xsi_register_tops("work_a_0092609192_3212880686");
    xsi_register_tops("work_m_16541823861846354283_2073120511");

    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    VL_P_2533777724 = xsi_get_engine_memory("vl_p_2533777724");

    return xsi_run_simulation(argc, argv);

}
