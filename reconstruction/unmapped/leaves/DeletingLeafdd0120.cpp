// Source exposure: mixed (binary-analysis of the pinned image; minimal stand-in).
// SPDX-License-Identifier: CC0-1.0
// Code origin: original stand-in from the pinned image listing; no external body reused.
// 0xdd0120 DeletingLeafdd0120::~DeletingLeafdd0120
// Adapted bodies: none
#include "DeletingLeafdd0120.h"

// Forces emission of the vftable and, beside it, the compared deleting destructor.
static DeletingLeafdd0120 object;
