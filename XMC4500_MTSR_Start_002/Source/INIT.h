/*
 * INIT.h
 *
 *  Created on: Jan 4, 2018
 *      Author: haselb
 */

#ifndef INIT_H_
#define INIT_H_

#include <DAVE.h>
#include <stdio.h>
//#include "Misc.h"


/*!
 * @brief Macro for SEGGER_RTT Error Message.
 * @param[in]  String of max 64 Characters
 * @param[out] Error Message String is piped through SEGGER_RTT_WriteString Function
 * @retval     void
 * @pre        requires SEGGER_RTT APP
 * @post       Nones
 * @attention  None
 * @note       In a header file the different Error Messages are redirected by e.g.
 * 				#define printf    RTT_PRINTF
 */
#define RTT_PRINTF(...) \
do { \
 	char str[64];\
 	sprintf(str, __VA_ARGS__);\
 	SEGGER_RTT_WriteString(0, str);\
 } while(0)

/*
 * redefine printf to Segger RTT Viewer
 */
#define printf    RTT_PRINTF


extern volatile uint32_t timer_1_of_16;

extern void init(void);

#endif /* INIT_H_ */
