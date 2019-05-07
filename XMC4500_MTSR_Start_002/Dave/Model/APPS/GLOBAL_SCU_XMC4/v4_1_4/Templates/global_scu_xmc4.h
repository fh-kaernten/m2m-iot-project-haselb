/**
 * @file global_scu_xmc4.h
 * @date 2015-06-26
 *
 * NOTE:
 * This file is generated by DAVE. Any manual modification done to this file will be lost when the code is
 * regenerated.
 */
/**
 * @cond
 ***********************************************************************************************************************
 * GLOBAL_SCU_XMC4 v4.1.2 - Registers the callback for SCU Interrupt
 *
 * Copyright (c) 2015, Infineon Technologies AG
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,are permitted provided that the
 * following conditions are met:
 *
 *   Redistributions of source code must retain the above copyright notice, this list of conditions and the  following
 *   disclaimer.
 *
 *   Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the
 *   following disclaimer in the documentation and/or other materials provided with the distribution.
 *
 *   Neither the name of the copyright holders nor the names of its contributors may be used to endorse or promote
 *   products derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE  FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY,OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT  OF THE
 * USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * To improve the quality of the software, users are encouraged to share modifications, enhancements or bug fixes
 * with Infineon Technologies AG (dave@infineon.com).
 ***********************************************************************************************************************
 *
 * Change History
 * --------------
 *
 * 2015-02-16:
 *     - Initial version<br>
 *
 * 2015-06-26:
 *     - Added new static inline APIs
 *        GLOBAL_SCU_XMC4_EnableIRQ,GLOBAL_SCU_XMC4_DisableIRQ
 *        GLOBAL_SCU_XMC4_EnableEvent,GLOBAL_SCU_XMC4_DisableEvent
 *     - Removed GLOBAL_SCU_XMC4_INTERRUPT_EVENT enum
 *     - Equivalent macros are defined
 * @endcond
 *
 */

#ifndef GLOBAL_SCU_XMC4_H
#define GLOBAL_SCU_XMC4_H

/***********************************************************************************************************************
 * HEADER FILES
 **********************************************************************************************************************/
#include <xmc_scu.h>
#include <DAVE_Common.h>
#include "CPU_CTRL_XMC4\cpu_ctrl_xmc4.h"

#include "global_scu_xmc4_conf.h"

/**
 * @addtogroup GLOBAL_SCU_XMC4
 * @{
 */

/***********************************************************************************************************************
 * MACROS
 ***********************************************************************************************************************/
#define GLOBAL_SCU_XMC4_EVENT_WDT_WARNING        XMC_SCU_INTERRUPT_EVENT_WDT_WARN      /**< Watchdog prewarning event. */
#define GLOBAL_SCU_XMC4_EVENT_RTC_PERIODIC       XMC_SCU_INTERRUPT_EVENT_RTC_PERIODIC  /**< RTC periodic interrupt. */
#define GLOBAL_SCU_XMC4_EVENT_RTC_ALARM          XMC_SCU_INTERRUPT_EVENT_RTC_ALARM     /**< RTC alarm event. */
#define GLOBAL_SCU_XMC4_EVENT_DLR_OVERRUN        XMC_SCU_INTERRUPT_EVENT_DLR_OVERRUN   /**< DLR overrun event. */
#if defined(SCU_INTERRUPT_SRSTAT_LPACCR_Msk)
#define GLOBAL_SCU_XMC4_EVENT_LPACCR_UPDATED     XMC_SCU_INTERRUPT_EVENT_LPACCR_UPDATED   /**< LPAC Control register update event. */
#endif
#if defined(SCU_INTERRUPT_SRSTAT_LPACTH0_Msk)
#define GLOBAL_SCU_XMC4_EVENT_LPACTH0_UPDATED    XMC_SCU_INTERRUPT_EVENT_LPACTH0_UPDATED  /**< LPAC Threshold-0 register update event. */
#endif
#if defined(SCU_INTERRUPT_SRSTAT_LPACTH1_Msk)
#define GLOBAL_SCU_XMC4_EVENT_LPACTH1_UPDATED    XMC_SCU_INTERRUPT_EVENT_LPACTH1_UPDATED  /**< LPAC Threshold-1 register update event. */
#endif
#if defined(SCU_INTERRUPT_SRSTAT_LPACST_Msk)
#define GLOBAL_SCU_XMC4_EVENT_LPACST_UPDATED     XMC_SCU_INTERRUPT_EVENT_LPACST_UPDATED   /**< LPAC Status register update event. */
#endif
#if defined(SCU_INTERRUPT_SRSTAT_LPACCLR_Msk)
#define GLOBAL_SCU_XMC4_EVENT_LPACCLR_UPDATED    XMC_SCU_INTERRUPT_EVENT_LPACCLR_UPDATED /**< LPAC event clear register update event. */
#endif
#if defined(SCU_INTERRUPT_SRSTAT_LPACSET_Msk)
#define GLOBAL_SCU_XMC4_EVENT_LPACSET_UPDATED    XMC_SCU_INTERRUPT_EVENT_LPACSET_UPDATED  /**< LPAC event set register update event. */
#endif
#if defined(SCU_INTERRUPT_SRSTAT_HINTST_Msk)
#define GLOBAL_SCU_XMC4_EVENT_HINTST_UPDATED     XMC_SCU_INTERRUPT_EVENT_HINTST_UPDATED   /**< HIB HINTST register update event. */
#endif
#if defined(SCU_INTERRUPT_SRSTAT_HINTCLR_Msk)
#define GLOBAL_SCU_XMC4_EVENT_HINTCLR_UPDATED    XMC_SCU_INTERRUPT_EVENT_HINTCLR_UPDATED  /**< HIB HINTCLR register update event. */
#endif
#if defined(SCU_INTERRUPT_SRSTAT_HINTSET_Msk)
#define GLOBAL_SCU_XMC4_EVENT_HINTSET_UPDATED    XMC_SCU_INTERRUPT_EVENT_HINTSET_UPDATED /**< HIB HINTSET register update event. */
#endif
#define GLOBAL_SCU_XMC4_EVENT_HDSTAT_UPDATED     XMC_SCU_INTERRUPT_EVENT_HDSTAT_UPDATED /**< HIB HDSTAT register update event. */
#define GLOBAL_SCU_XMC4_EVENT_HDCLR_UPDATED      XMC_SCU_INTERRUPT_EVENT_HDCLR_UPDATED /**< HIB HDCLR register update event. */
#define GLOBAL_SCU_XMC4_EVENT_HDSET_UPDATED      XMC_SCU_INTERRUPT_EVENT_HDSET_UPDATED /**< HIB HDSET register update event. */
#define GLOBAL_SCU_XMC4_EVENT_HDCR_UPDATED       XMC_SCU_INTERRUPT_EVENT_HDCR_UPDATED   /**< HIB HDCR register update event. */
#define GLOBAL_SCU_XMC4_EVENT_OSCSICTRL_UPDATED  XMC_SCU_INTERRUPT_EVENT_OSCSICTRL_UPDATED /**< HIB OSCSICTRL register update event. */
#define GLOBAL_SCU_XMC4_EVENT_OSCULSTAT_UPDATED  XMC_SCU_INTERRUPT_EVENT_OSCULSTAT_UPDATED /**< HIB OSCULSTAT register update event. */
#define GLOBAL_SCU_XMC4_EVENT_OSCULCTRL_UPDATED  XMC_SCU_INTERRUPT_EVENT_OSCULCTRL_UPDATED /**< HIB OSCULCTRL register update event. */
#define GLOBAL_SCU_XMC4_EVENT_RTCCTR_UPDATED     XMC_SCU_INTERRUPT_EVENT_RTCCTR_UPDATED /**< HIB RTCCTR register update event. */
#define GLOBAL_SCU_XMC4_EVENT_RTCATIM0_UPDATED   XMC_SCU_INTERRUPT_EVENT_RTCATIM0_UPDATED /**< HIB RTCATIM0 register update event. */
#define GLOBAL_SCU_XMC4_EVENT_RTCATIM1_UPDATED   XMC_SCU_INTERRUPT_EVENT_RTCATIM1_UPDATED /**< HIB RTCATIM1 register update event. */
#define GLOBAL_SCU_XMC4_EVENT_RTCTIM0_UPDATED    XMC_SCU_INTERRUPT_EVENT_RTCTIM0_UPDATED /**< HIB RTCTIM0 register update event. */
#define GLOBAL_SCU_XMC4_EVENT_RTCTIM1_UPDATED    XMC_SCU_INTERRUPT_EVENT_RTCTIM1_UPDATED /**< HIB RTCTIM1 register update event. */
#define GLOBAL_SCU_XMC4_EVENT_RMX_UPDATED        XMC_SCU_INTERRUPT_EVENT_RMX_UPDATED  /**< HIB RMX register update event. */
/***********************************************************************************************************************
 * ENUMS
 ***********************************************************************************************************************/
/**
 * @ingroup GLOBAL_SCU_XMC4_enumerations
 * @{
 */

/**
 * APP status
 */
typedef enum GLOBAL_SCU_XMC4_STATUS
{
  GLOBAL_SCU_XMC4_STATUS_SUCCESS = 0U,  /**< Initialization status success */
  GLOBAL_SCU_XMC4_STATUS_FAILURE = 1U	/**< Initialization status failure */
} GLOBAL_SCU_XMC4_STATUS_t;

/**
 *@}
 */

/**
 * @ingroup GLOBAL_SCU_XMC4_datastructures
 * @{
 */
/**********************************************************************************************************************
* DATA STRUCTURES
**********************************************************************************************************************/
/**
 * Event handler type
 */
typedef XMC_SCU_INTERRUPT_EVENT_HANDLER_t GLOBAL_SCU_XMC4_EVENT_HANDLER_t;

/** Event type
 *
 */
typedef XMC_SCU_INTERRUPT_EVENT_t GLOBAL_SCU_XMC4_EVENT_t;

/**
 * Configuration parameters
 */
typedef struct GLOBAL_SCU_XMC4_CONFIG
{
  uint8_t priority;    /**<  Node Interrupt Priority    */    
  uint8_t subpriority; /**<  Node Interrupt Subpriority */
  bool enable_at_init; /**<  Interrupt enable for Node  */
} GLOBAL_SCU_XMC4_CONFIG_t;

/**
 * Runtime handler
 */
typedef struct GLOBAL_SCU_XMC4
{
  const GLOBAL_SCU_XMC4_CONFIG_t * config; /**< Instance configuration options */
  bool initialized;                        /**< Initialization status */
} GLOBAL_SCU_XMC4_t;

/**
 *@}
 */

/**
 * @ingroup GLOBAL_SCU_XMC4_apidoc
 * @{
 */
/**********************************************************************************************************************
 * API PROTOTYPES
***********************************************************************************************************************/
/**
 * @brief Get GLOBAL_SCU_XMC4 APP version
 * @return DAVE_APP_VERSION_t APP version details (major, minor and patch number)
 *
 * \par<b>Description: </b><br>
 * The function can be used to check application software compatibility with a
 * specific version of the APP.
 *
 * Example Usage:
 *
 * @code
 * #include <DAVE.h>
 *
 * int main(void)
 * {
 *   DAVE_APP_VERSION_t version;
 *
 *   // Initialize GLOBAL_SCU_XMC4 APP.
 *   DAVE_Init();
 *
 *   version = GLOBAL_SCU_XMC4_GetAppVersion();
 *   if (version.major != 4U)
 *   {
 *     // Probably, not the right version.
 *   }
 *
 *   // More code here
 *   while(1)
 *   {
 *   }
 *   return (0);
 * }
 * @endcode<BR> </p>
 */
DAVE_APP_VERSION_t GLOBAL_SCU_XMC4_GetAppVersion(void);

/**
 * @brief  Initialize the GLOBAL_SCU_XMC4 APP
 *
 * This function initializes the required CPU_XMC4 APP if not yet done,
 * sets the priority and subpriority of the SCU_0 IRQ, and enables
 * the IRQ if the user has selected so.
 * This function is called from DAVE_Init() or top level APP requiring the
 * GLOBAL_SCU_XMC4 APP.
 *
 * @param  handle Runtime handler
 *
 * @return GLOBAL_SCU_XMC4_STATUS_t Indicates initialization status
 *
 */
GLOBAL_SCU_XMC4_STATUS_t GLOBAL_SCU_XMC4_Init(GLOBAL_SCU_XMC4_t *const handle);

/**
 * @brief Register an event callback routine
 * This function registers an event callback routine for a specific event.
 * Note: User needs to enable the event generation separately.
 *       See GLOBAL_SCU_XMC4_EnableEvent and GLOBAL_SCU_XMC4_DisableEvent.
 *
 * @param  event    Event for which the callback is register
 * @param  callback Routine to handle occurrence of event
 *
 * @return GLOBAL_SCU_XMC4_STATUS_t Indicates registration status
 *
 * @code
 * #include <DAVE.h>
 *
 * void CbListener(void)
 * {
 *   // Callback function implementation
 * };
 *
 * int main(void)
 * {
 *   DAVE_Init();
 *
 *   GLOBAL_SCU_XMC4_RegisterCallback(GLOBAL_SCU_XMC4_EVENT_RTC_ALARM, CbListener);
 *   GLOBAL_SCU_XMC4_EnableEvent(GLOBAL_SCU_XMC4_EVENT_RTC_ALARM);
 *
 *   while(1);
 * }
 *
 * @endcode<BR> </p>
 */
GLOBAL_SCU_XMC4_STATUS_t GLOBAL_SCU_XMC4_RegisterCallback(const GLOBAL_SCU_XMC4_EVENT_t event,
                                                          const GLOBAL_SCU_XMC4_EVENT_HANDLER_t callback);

/**
 * @brief Enable the handling of events
 *
 * @param  void
 */
__STATIC_INLINE void GLOBAL_SCU_XMC4_EnableIRQ(void)
{
  NVIC_EnableIRQ((IRQn_Type)0);
}

/**
 * @brief Disable the handling of events
 *
 * @param  void
 */
__STATIC_INLINE void GLOBAL_SCU_XMC4_DisableIRQ(void)
{
  NVIC_DisableIRQ((IRQn_Type)0);
}
/**
 * @brief Enable a specific event
 *
 * @param event Events to be enabled. See GLOBAL_SCU_XMC4_EVENT_t.
 */
__STATIC_INLINE void GLOBAL_SCU_XMC4_EnableEvent(const GLOBAL_SCU_XMC4_EVENT_t event)
{
  XMC_SCU_INTERRUPT_EnableEvent(event);
}
/**
 * @brief Disable a specific event
 *
 * @param  event    Events to be disabled. See GLOBAL_SCU_XMC4_EVENT_t.
 */
__STATIC_INLINE void GLOBAL_SCU_XMC4_DisableEvent(const GLOBAL_SCU_XMC4_EVENT_t event)
{
  XMC_SCU_INTERRUPT_DisableEvent(event);
}

/**
 *@}
 */
/**
 * @}
 */
#ifdef __cplusplus
}
#endif

#include "global_scu_xmc4_extern.h"

#endif 
