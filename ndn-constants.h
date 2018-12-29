/*
 * Copyright (C) 2018 Zhiyi Zhang, Tianyuan Yu, Xinyu Ma
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

#ifndef NDN_CONSTANTS_H
#define NDN_CONSTANTS_H

// name and name component
#define NDN_NAME_COMPONENT_BUFFER_SIZE 36
#define NDN_NAME_COMPONENT_BLOCK_SIZE 38
#define NDN_NAME_COMPONENTS_SIZE 10
#define NDN_NAME_MAX_BLOCK_SIZE 384
#define NDN_FWD_INVALID_NAME_SIZE ((uint32_t)(-1))
#define NDN_FWD_INVALID_NAME_COMPONENT_SIZE ((uint32_t)(-1))

// interest
#define NDN_INTEREST_PARAMS_BUFFER_SIZE 248
#define NDN_SIGNED_INTEREST_PARAMS_MAX_SIZE 680
#define NDN_DEFAULT_INTEREST_LIFETIME 4000

// data
#define NDN_CONTENT_BUFFER_SIZE 256

// signature
#define NDN_SIGNATURE_BUFFER_SIZE 128

// forwarder
#define NDN_FIB_MAX_SIZE 20
#define NDN_PIT_MAX_SIZE 32
#define NDN_CS_MAX_SIZE 10
#define NDN_FACE_TABLE_MAX_SIZE 10
#define NDN_FACE_DEFUALT_COST 1
#define NDN_AES_BLOCK_SIZE 16

// fragmentation support
#define NDN_FRAG_HDR_LEN 3 // Size of the NDN L2 fragmentation header
#define NDN_FRAG_HB_MASK 0x80 // 1000 0000
#define NDN_FRAG_MF_MASK 0x20 // 0010 0000
#define NDN_FRAG_SEQ_MASK 0x1F // 0001 1111
#define NDN_FRAG_MAX_SEQ_NUM 30
#define NDN_FRAG_BUFFER_MAX 512

// access control
#define NDN_APPSUPPORT_AC_EDK_SIZE 16
#define NDN_APPSUPPORT_AC_SALT_SIZE 16
#define NDN_APPSUPPORT_AC_KEY_LIST_SIZE 5

// service discovery
#define NDN_APPSUPPORT_NEIGHBORS_SIZE 10
#define NDN_APPSUPPORT_PREFIXES_SIZE 10
#define NDN_APPSUPPORT_SERVICES_SIZE 10
#define NDN_APPSUPPORT_SERVICE_ID_SIZE 20
#define NDN_APPSUPPORT_INVALID_SERVICE_ID_SIZE ((uint32_t)(-1))
#define NDN_APPSUPPORT_SERVICE_UNDEFINED ((uint8_t)(-1))
#define NDN_APPSUPPORT_SERVICE_UNAVIALABLE 0
#define NDN_APPSUPPORT_SERVICE_AVIALABLE 1
#define NDN_APPSUPPORT_SERVICE_BUSY 2
#define NDN_APPSUPPORT_SERVICE_PERMISSION_DENIED 3

// security
#define NDN_SEC_SIGNING_KEYS_SIZE 10
#define NDN_SEC_ENCRYPTION_KEYS_SIZE 5
#define NDN_SEC_INVALID_KEY_SIZE ((uint32_t)(-1))

#endif // NDN_CONSTANTS_H
