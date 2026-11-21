// Source exposure: binary-analysis (the shape of the compared function in the pinned image).
// Code origin: original stand-in; no external declaration or body reused
// SPDX-License-Identifier: CC0-1.0
// NiSearchPath::dtor: CRASHLOGGER_PDB(59818@2026.10.24)
// 0xeaf260 DeletingLeafeaf260::~DeletingLeafeaf260
// Adapted bodies: none
#include "DeletingLeafeaf260.h"

// Not compared: defined so that the compiler emits the vftable and, beside it, the
// deleting destructor that is compared (cookbook rule 14).
DeletingLeafeaf260::DeletingLeafeaf260()
{
}

DeletingLeafeaf260::~DeletingLeafeaf260()
{
}
