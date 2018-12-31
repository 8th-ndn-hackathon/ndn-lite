/*
 * Copyright (C) Edward Lu
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 *
 * See AUTHORS.md for complete list of NDN IOT PKG authors and contributors.
 */

#ifndef RNG_NRF_CRYPTO_IMPL_H
#define RNG_NRF_CRYPTO_IMPL_H

#include <stdint.h>

int nrf_random();

int RNG(uint8_t *dest, unsigned size);

#endif // RNG_NRF_CRYPTO_IMPL_H