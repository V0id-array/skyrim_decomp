// Source exposure: mixed (binary-analysis of the pinned image; minimal stand-in).
// SPDX-License-Identifier: CC0-1.0
// Code origin: original stand-in from the pinned image listing; no external body reused.
// 0xe9e320 DeletingLeafe9e320::~DeletingLeafe9e320
// Adapted bodies: none
#include "DeletingLeafe9e320.h"

// Forces emission of the vftable and, beside it, the compared deleting destructor.
static DeletingLeafe9e320 object;
