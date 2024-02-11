#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

#include "pins_driver.h"

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif


/*! @brief Definitions/Declarations for BOARD_InitPins Functional Group */
/*! @brief User definition pins */
#define RELAY_13_PORT    PTE
#define RELAY_13_PIN     13U
#define RELAY_10_PORT    PTE
#define RELAY_10_PIN     10U
#define LS_MOS_E4_PORT    PTE
#define LS_MOS_E4_PIN     4U
#define LS_MOS_E5_PORT    PTE
#define LS_MOS_E5_PIN     5U
#define HS_MOS_E11_PORT    PTE
#define HS_MOS_E11_PIN     11U
#define HS_MOS_D0_PORT    PTD
#define HS_MOS_D0_PIN     0U

/*! @brief User number of configured pins */
#define NUM_OF_CONFIGURED_PINS0 9
/*! @brief User configuration structure */
extern pin_settings_config_t g_pin_mux_InitConfigArr0[NUM_OF_CONFIGURED_PINS0];


#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/

