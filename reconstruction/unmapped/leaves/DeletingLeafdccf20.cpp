// Source exposure: mixed (binary-analysis of the pinned image; minimal stand-in).
// SPDX-License-Identifier: CC0-1.0
// Code origin: original stand-in from the pinned image listing; no external body reused.
// 0xdccf20 DeletingLeafdccf20::~DeletingLeafdccf20
// Adapted bodies: none
#include "DeletingLeafdccf20.h"

// Forces emission of the vftable and, beside it, the compared deleting destructor.
static DeletingLeafdccf20 object;
