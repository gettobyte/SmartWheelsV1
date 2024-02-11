/*!
** Copyright 2020 NXP
** @file main.c
** @brief
**         Main module.
**         This module contains user's application code.
*/
/*!
**  @addtogroup main_module main module documentation
**  @{
*/
/* MODULE main */


/* Including necessary configuration files. */
#include "sdk_project_config.h"

void delay(volatile int cycles)
{
    /* Delay function - do nothing for a number of cycles */
    while(cycles--);
}

/*!
  \brief The main function for the project.
  \details The startup initialization sequence is the following:
 * - startup asm routine
 * - main()
*/
int main(void)
{
    /* Write your code here */

	  status_t error;
	  /* Configure clocks for PORT */
	  error = CLOCK_DRV_Init(&clockMan1_InitConfig0);
	  DEV_ASSERT(error == STATUS_SUCCESS);
	  /* Set pins as GPIO */
	  error = PINS_DRV_Init(NUM_OF_CONFIGURED_PINS0, g_pin_mux_InitConfigArr0);
	  DEV_ASSERT(error == STATUS_SUCCESS);

	  /* Set Output value LED0 & LED1 */
	  PINS_DRV_SetPins(RELAY_13_PORT, 1 << RELAY_13_PIN);
	  PINS_DRV_SetPins(RELAY_10_PORT, 1 << RELAY_10_PIN);
	  PINS_DRV_SetPins(LS_MOS_E4_PORT, 1 << LS_MOS_E4_PIN);
	  PINS_DRV_SetPins(LS_MOS_E5_PORT, 1 << LS_MOS_E5_PIN);
	  PINS_DRV_SetPins(HS_MOS_E11_PORT, 1 << HS_MOS_E11_PIN);
	  PINS_DRV_SetPins(HS_MOS_D0_PORT, 1 << HS_MOS_D0_PIN);
	  PINS_DRV_SetPins(RED_LED_PORT, 1 << RED_LED_PIN);
	  PINS_DRV_SetPins(BLUE_LED_PORT, 1 << BLUE_LED_PIN);
	  PINS_DRV_SetPins(GREEN_LED_PORT, 1 << GREEN_LED_PIN);


    for(;;)
    {
    	 /* Insert a small delay to make the blinking visible */
    	      delay(720000);

    	      /* Toggle output value LED0 & LED1 */
    	      PINS_DRV_TogglePins(RELAY_13_PORT, 1 << RELAY_13_PIN);
    	      delay(720000);

    	      PINS_DRV_TogglePins(RELAY_10_PORT, 1 << RELAY_10_PIN);
    	      delay(720000);

    	      PINS_DRV_TogglePins(LS_MOS_E4_PORT, 1 << LS_MOS_E4_PIN);
    	      delay(720000);

    	      PINS_DRV_TogglePins(LS_MOS_E5_PORT, 1 << LS_MOS_E5_PIN);
    	      delay(720000);

    	      PINS_DRV_TogglePins(HS_MOS_E11_PORT, 1 << HS_MOS_E11_PIN);
    	      delay(720000);

    	      PINS_DRV_TogglePins(HS_MOS_D0_PORT, 1 << HS_MOS_D0_PIN);
    	      delay(720000);

    	      PINS_DRV_TogglePins(RED_LED_PORT, 1 << RED_LED_PIN);
    	      delay(720000);

    	      PINS_DRV_TogglePins(BLUE_LED_PORT, 1 << BLUE_LED_PIN);
    	      delay(720000);

    	      PINS_DRV_TogglePins(GREEN_LED_PORT, 1 << GREEN_LED_PIN);
    	      delay(720000);


    }
}

/* END main */
/*!
** @}
*/
