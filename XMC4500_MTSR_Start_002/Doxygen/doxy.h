/*! *****************************************************************************
 * @file     	doxy.h
 * @brief    	Main file for Doxygen
 * @version 	V1.0
 * @date     	2018-Dec-11
 *
 * @note		(C) GNU GPL
 *
 * @profile     Main page file for any project
 * @description If Doxygen is used, this file provides content of Main Page
 *
 * @par
 * CUAS is supplying this software for use with
 * Infineons microcontrollers. This file can be freely distributed within
 * development tools that are supporting such microcontrollers.
 *
 * @par
 * THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 * OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 * INFINEON SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL,
 * OR CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 *
 * @originator	Matthias Haselberger
 * @author		Matthias Haselberger
 * @bug			none
 * @attention	none
 * @warning		none
 * @todo		-
 ******************************************************************************/

#ifndef _DOXY_H_
#define _DOXY_H_

/*! \mainpage
 *
 * \brief <b>MTSR_2</b>\n
 * Template for starting in project MTSR-2.\n
 * Prerequisites: Lesson in 4th semester with Mr. Grabner Peter.\n
 * \par Project description:
 * A LCD shows DateTime, Temperature.
 * Mainloop with >= 1 second.
 * Different timers are asserted.
 *
 * \par Compiler and Switches, Dependencies, Tools
 *
 * Tools for edit, compilation, linking and programming of the sources
 * <ul>
 * <li>DAVE Version 4.4.2</li>
 * <li>Segger Debugger and Programmer</li>
 * <li>Doxygen 1.8.8 and higher</li>
 * <li>Terminal Program PuTTY (is more stable than J-Link RTT Viewer) to watch Segger RTT messaging.</li>
 *
 * </ul>
 *
 * \par Versioning
 *
 * <table>
 * <caption id="multi_row"> Version, History </caption>
 * <tr><th>Nr.   <th> Date		  <th> Comment		</td>
 * <tr><td>0.1.0 <td> 2018-Nov-23 <td> Derived from exercise in 4th semester
 * <tr><td>0.1.1 <td> 2018-Dec-05 <td> Modified for LwIP stack
 * <tr><td>0.2.1 <td> 2018-Dec-10 <td> added init.h
 * <tr><td>0.2.2 <td> 2019-May-07 <td> hosted at github
 * </table>
 *
 */

#define MAJOR_VERSION 0U
#define MINOR_VERSION 2U
#define PATCH_VERSION 2U

 /*!
 * \defgroup Hardware Hardware
 * @{
 * <b> Microcontroller XMC4500 on Relaxkit</b>
 * <ul>
 * <li>256kB Flash;
 * <li>16kB RAM;
 * <li>PQFP100;
 * <li>XMC_EP_CCS811
 * <li>CCS811 Breakout Board, Sparkfun
 * </ul>
 * @}
 */

/*!
 * \defgroup License License
 * @{
 * <b>(C) Copyright</b>
 * The Property Rights are taken from GNU GPL
 *
 * The source code could be used and/or modified and labelled by own author.
 *
 * DISCLAIMER OF WARRANTY/LIMITATION OF REMEDIES: The Author
 * has no obligation to support this Software. He is
 * providing the Software "AS IS", with no express or implied warranties of any
 * kind, including, but not limited to, any implied warranties of merchantability
 * or fitness for any particular purpose or warranties against infringement of
 * any proprietary rights of a third party.
 *
 * The Author will not be liable for any consequential,
 * incidental, or special damages, or any other relief, or for any claim by
 * any third party, arising from your use of this Software.
 * @}
 */

#endif /* _DOXY_H_ */

