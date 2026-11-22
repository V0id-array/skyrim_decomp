// Source exposure: mixed (community headers; the pinned image listing).
// Code origin: names from the inventory and the pinned image listing; the destructor body is written from the listing
// SPDX-License-Identifier: CC0-1.0
// 0x98d8d0 DeletingLeaf98d8d0::~DeletingLeaf98d8d0
// CI hash: 0x98d8d0 ??_GDeletingLeaf98d8d0@@UEAAPEAXI@Z
// Adapted bodies: none
#include "DeletingLeaf98d8d0.h"

// Not compared: defined so that the compiler emits the vftable and, beside it, the
// deleting destructor that is compared (cookbook rule 14).
DeletingLeaf98d8d0::DeletingLeaf98d8d0()
{
}

// The complete destructor is inline so the emitted deleting destructor stores the vptr
// before the conditional sized delete, as the listing shows.
DeletingLeaf98d8d0::~DeletingLeaf98d8d0()
{
}
