// Source exposure: mixed (binary-analysis of the pinned image; minimal stand-in).
// SPDX-License-Identifier: CC0-1.0
// Code origin: original stand-in from the pinned image listing; no external body reused.
// 0xfc4810 DeletingLeaffc4810::~DeletingLeaffc4810
// Adapted bodies: none
#include "DeletingLeaffc4810.h"

// Forces emission of the vftable and, beside it, the compared deleting destructor.
static DeletingLeaffc4810 object;
