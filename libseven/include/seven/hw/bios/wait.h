/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/.
 */

#pragma once

#include <seven/base.h>

_LIBSEVEN_EXTERN_C

extern void biosHalt(void);
extern void biosStop(void);

extern void biosIntrWait(bool wait_next, uint16_t intr_flags);
extern void biosVBlankIntrWait(void);

_LIBSEVEN_EXTERN_C_END
