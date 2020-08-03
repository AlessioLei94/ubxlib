/*
 * Copyright 2020 u-blox Ltd
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _U_CFG_OS_PLATFORM_SPECIFIC_H_
#define _U_CFG_OS_PLATFORM_SPECIFIC_H_

/* No #includes allowed here */

/** @file
 * @brief  This header file contains OS configuration information for
 * an ESP32 platform.
 */

/* ----------------------------------------------------------------
 * COMPILE-TIME MACROS FOR ESP32: OS GENERIC
 * -------------------------------------------------------------- */

#ifndef U_CFG_OS_PRIORITY_MIN
/** The minimum task priority.
 * In FreeRTOS, as used on this platform, low numbers indicate
 * lower priority.
 */
# define U_CFG_OS_PRIORITY_MIN 0
#endif

#ifndef U_CFG_OS_PRIORITY_MAX
/** The maximum task priority, should be less than or
 * equal to configMAX_PRIORITIES defined in FreeRTOSConfig.h,
 * which is usually set to 25.
 */
# define U_CFG_OS_PRIORITY_MAX 25
#endif

#ifndef U_CFG_OS_YIELD_MS
/** The amount of time to block for to ensure that a yield
 * occurs. This set to 10 ms as the ESP32 platform has a
 * 10 ms tick.
 */
# define U_CFG_OS_YIELD_MS 10
#endif

/* ----------------------------------------------------------------
 * COMPILE-TIME MACROS FOR ESP32: PRIORITIES
 * -------------------------------------------------------------- */

/** How much stack the task running all the examples and tests needs
 * in bytes.
 */
#define U_CFG_OS_APP_TASK_STACK_SIZE_BYTES CONFIG_MAIN_TASK_STACK_SIZE

/** The priority of the task running the examples and tests: should
 * be low.
 */
#define U_CFG_OS_APP_TASK_PRIORITY CONFIG_ESP32_PTHREAD_TASK_PRIO_DEFAULT

#endif // _U_CFG_OS_PLATFORM_SPECIFIC_H_

// End of file
