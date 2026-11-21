// Source exposure: mixed (binary-analysis of the pinned image; minimal stand-in).
// SPDX-License-Identifier: CC0-1.0
// Code origin: original stand-in from the pinned image listing; no external body reused.
// 0xb48380 DeletingLeafb48380::~DeletingLeafb48380
// Adapted bodies: none
#include "DeletingLeafb48380.h"

// Forces emission of the vftable and, beside it, the compared deleting destructor.
static DeletingLeafb48380 object;
