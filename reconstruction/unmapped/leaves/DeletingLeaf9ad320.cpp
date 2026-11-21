// Source exposure: mixed (binary-analysis of the pinned image; minimal stand-in).
// SPDX-License-Identifier: CC0-1.0
// Code origin: original stand-in from the pinned image listing; no external body reused.
// 0x9ad320 DeletingLeaf9ad320::~DeletingLeaf9ad320
// Adapted bodies: none
#include "DeletingLeaf9ad320.h"

// Forces emission of the vftable and, beside it, the compared deleting destructor.
static DeletingLeaf9ad320 object;
