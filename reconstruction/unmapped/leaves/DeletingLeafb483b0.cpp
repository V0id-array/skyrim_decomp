// Code origin: original; reconstructed from the pinned image listing
// 0xb483b0 DeletingLeafb483b0::~DeletingLeafb483b0
// Adapted bodies: none
// Source exposure: mixed (community headers; the pinned image listing).
// SPDX-License-Identifier: CC0-1.0
#include "DeletingLeafb483b0.h"

void operator delete(void* a_p, std::size_t a_size);

// Not compared: defined so that the compiler emits the vftable and, beside it, the
// deleting destructor that is compared (cookbook rule 14).
DeletingLeafb483b0::DeletingLeafb483b0()
{
}

DeletingLeafb483b0::~DeletingLeafb483b0()
{
}
