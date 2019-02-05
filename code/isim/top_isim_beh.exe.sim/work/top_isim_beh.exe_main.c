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
    work_m_00000000001612568474_3527808377_init();
    work_m_00000000000359773539_3673085417_init();
    work_m_00000000000624848084_2725559894_init();
    xilinxcorelib_ver_m_00000000001358910285_1942005516_init();
    xilinxcorelib_ver_m_00000000001687936702_3218604958_init();
    xilinxcorelib_ver_m_00000000000277421008_1283164558_init();
    xilinxcorelib_ver_m_00000000001603977570_1296455738_init();
    work_m_00000000000403262735_0984947828_init();
    work_m_00000000002425608000_1298333783_init();
    work_m_00000000000893366721_3037777339_init();
    work_m_00000000003401444341_2777648334_init();
    work_m_00000000000952517501_1621107508_init();
    work_m_00000000004228645595_3842173357_init();
    work_m_00000000003160943131_2364370701_init();
    work_m_00000000000359773539_0911582670_init();
    work_m_00000000000359773539_1379492042_init();
    work_m_00000000000359773539_2031366921_init();
    work_m_00000000000413962603_4132685690_init();
    work_m_00000000003666279348_3210399350_init();
    work_m_00000000003401444341_1323274903_init();
    work_m_00000000002286204844_2875975674_init();
    xilinxcorelib_ver_m_00000000001358910285_3131131465_init();
    xilinxcorelib_ver_m_00000000001687936702_4016793922_init();
    xilinxcorelib_ver_m_00000000000277421008_1300708092_init();
    xilinxcorelib_ver_m_00000000001603977570_0683344801_init();
    work_m_00000000000403262735_3370108073_init();
    work_m_00000000002951609859_3508751931_init();
    work_m_00000000002128821197_3823007873_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002128821197_3823007873");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
