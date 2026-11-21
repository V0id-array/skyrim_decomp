// Source exposure: binary-analysis (the shape of the compared function in the pinned image).
// Code origin: original stand-in; no external declaration or body reused
// SPDX-License-Identifier: CC0-1.0
// BSSystemFileAsyncFunctor::dtor: CRASHLOGGER_PDB(59818@2026.10.24)
// 0xec0160 DeletingLeafec0160::~DeletingLeafec0160
// Adapted bodies: none
#include "DeletingLeafec0160.h"

// Not compared: defined so that the compiler emits the vftable and, beside it, the
// deleting destructor that is compared (cookbook rule 14).
DeletingLeafec0160::DeletingLeafec0160()
{
}

DeletingLeafec0160::~DeletingLeafec0160()
{
}
