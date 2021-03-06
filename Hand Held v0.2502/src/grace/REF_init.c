/*
 *  This file is automatically generated and does not require a license
 *
 *  ==== WARNING: CHANGES TO THIS GENERATED FILE WILL BE OVERWRITTEN ====
 *
 *  To make changes to the generated code, use the space between existing
 *      "USER CODE START (section: <name>)"
 *  and
 *      "USER CODE END (section: <name>)"
 *  comments, where <name> is a single word identifying the section.
 *  Only these sections will be preserved.
 *
 *  Do not move these sections within this file or change the START and
 *  END comments in any way.
 *  ==== ALL OTHER CHANGES WILL BE OVERWRITTEN WHEN IT IS REGENERATED ====
 *
 *  This file was generated from
 *      C:/ti/grace_2_20_02_32/packages/ti/mcu/msp430/csl2/ref/REF_init.xdt
 */
#include <driverlib/MSP430FR57xx/inc/hw_memmap.h>
#include <driverlib/MSP430FR57xx/ref.h>

/* USER CODE START (section: REF_init_c_prologue) */
/* User defined includes, defines, global variables and functions */
/* USER CODE END (section: REF_init_c_prologue) */

/*
 *  ======== REF_graceInit ========
 *  Initialize Config for the MSP430 Reference Module (REF)
 */
void REF_graceInit(void)
{

    /* USER CODE START (section: REF_graceInit_prologue) */
    /* User initialization code */
    /* USER CODE END (section: REF_graceInit_prologue) */

    /* Sets the reference voltage for the voltage generator */
    REF_setReferenceVoltage(REF_BASE, REF_VREF1_5V);

    /* Enables the reference voltage to be used by peripherals */
    REF_enableReferenceVoltage(REF_BASE);

    /* Disables the internal temperature sensor to save power consumption */
    REF_disableTempSensor(REF_BASE);

    /* USER CODE START (section: REF_graceInit_epilogue) */
    /* User code */
    /* USER CODE END (section: REF_graceInit_epilogue) */

}
