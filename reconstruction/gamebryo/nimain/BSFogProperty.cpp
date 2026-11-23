// Source exposure: mixed (community headers; the pinned image listing).
// Code origin: original; the listing and community declarations only
// SPDX-License-Identifier: CC0-1.0
// 0x155c410 BSFogProperty::Function155c410
// Adapted bodies: none
// Source exposure: mixed (names and declarations from community headers; the listing of the pinned
// image).
// Adapted bodies: none
#include "BSFogProperty.h"

void BSFogProperty::Function155c410(float a_arg0, float a_arg1)
{
    a_arg0 *= gFogScale;
    fogFar = 163840.0f;
    fogNear = gFogBase - a_arg0;
}

// Not compared on its own: the compiler emits the vftable here, and with it the deleting
// destructor that is compared.
BSFogProperty::BSFogProperty()
{
}
