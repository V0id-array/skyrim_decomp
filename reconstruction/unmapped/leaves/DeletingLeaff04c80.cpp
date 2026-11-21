// Source exposure: binary-analysis (the shape of the compared function in the pinned image).
// Code origin: original stand-in; no external declaration or body reused
// SPDX-License-Identifier: CC0-1.0
// 0xf04c80 DeletingLeaff04c80::~DeletingLeaff04c80
// Adapted bodies: none
#include "DeletingLeaff04c80.h"

// Not compared: defined so that the compiler emits the vftable and, beside it, the
// deleting destructor that is compared (cookbook rule 14).
DeletingLeaff04c80::DeletingLeaff04c80()
{
}

DeletingLeaff04c80::~DeletingLeaff04c80()
{
}
