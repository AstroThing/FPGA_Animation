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



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000004146318515_3866583278_init();
    work_m_00000000001178320842_0886308060_init();
    work_m_00000000003442168902_2582214024_init();
    work_m_00000000003400272335_4020927633_init();
    work_m_00000000003863948299_4258596141_init();
    work_m_00000000003026193526_3462089752_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003026193526_3462089752");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
