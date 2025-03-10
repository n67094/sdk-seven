/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/.
 */

#pragma once

#include <seven/base.h>

_LIBSEVEN_EXTERN_C

enum BiosChecksum
{
    BIOS_CHECKSUM_GBA = 0xBAAE187F,
    BIOS_CHECKSUM_NDS = 0xBAAE1880,
};

extern uint32_t biosBiosChecksum(void);

_LIBSEVEN_EXTERN_C_END

