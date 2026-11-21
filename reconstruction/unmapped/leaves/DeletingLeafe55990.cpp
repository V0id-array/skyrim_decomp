// Source exposure: mixed (binary-analysis of the pinned image; minimal stand-in).
// SPDX-License-Identifier: CC0-1.0
// Code origin: original stand-in from the pinned image listing; no external body reused.
// 0xe55990 DeletingLeafe55990::~DeletingLeafe55990
// Adapted bodies: none
#include "DeletingLeafe55990.h"

// Forces emission of the vftable and, beside it, the compared deleting destructor.
static DeletingLeafe55990 object;
