/*
 * Copyright (C) 2019 Xinyu Ma
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v3.0. See the file LICENSE in the top level
 * directory for more details.
 */

#ifndef FORWARDER_MSG_QUEUE_H_
#define FORWARDER_MSG_QUEUE_H_

#include <inttypes.h>
#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

/**@defgroup NDNUtil
 */

/** @defgroup NDNUtilMsqQueue Message Queue
 * @ingroup NDNUtil
 * 
 * Message queue of the forwarder.
 * @{
 */

/** The size of message queue in bytes.
 */
#define NDN_MSGQUEUE_SIZE 4096

/** The callback function of message.
 * 
 * @param self Input. The object to receive this message.
 * @param param_length Input. The length of the @c param.
 * @param param Input. Point to a raw memory in size @c param_length.
 */
typedef void(*ndn_msg_callback)(void *self,
                                size_t param_length,
                                void *param);

/** Init the message queue.
 */
void
ndn_msgqueue_init(void);

/** Post a message to the queue.
 * @param target Input. The object to receive this message.
 * @param reason Input. The message callback function.
 * @param length Input. The length of parameters @c param.
 * @param param Input. The parameters of this message.
 *              Its context will be copied into the queue.
 * @retval true The operation succeeded.
 * @retval false The queue has insufficient memory.
 */
bool
ndn_msgqueue_post(void *target,
                  ndn_msg_callback reason,
                  size_t param_length,
                  void *param);

/** Dispatch a message on the top of the queue.
 *
 * Call the message by <tt> reason(target, param_length, param) </tt>.
 * @retval true One message dispatched.
 * @retval false The queue is empty. Do nothing.
 */
bool
ndn_msgqueue_dispatch(void);

/** Return if the messque queue is empty.
 * @retval true Empty.
 * @retval false Not empty.
 * @note This function will defragment the queue if it's empty.
 */
bool
ndn_msgqueue_empty(void);

/*@}*/

#ifdef __cplusplus
}
#endif

#endif // #define FORWARDER_MSG_QUEUE_H_
