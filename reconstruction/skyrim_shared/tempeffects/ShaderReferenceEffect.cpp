// Source exposure: mixed (community headers; the pinned image listing).
// 0x5e2440 compared function
// Code origin: original; the listing and community declarations only
// SPDX-License-Identifier: CC0-1.0
// 0x5e2320 ShaderReferenceEffect::Function5e2320
// Adapted bodies: none
// Source exposure: mixed (local binary analysis and public names).
// Origin: {"generator_family":"const-return","generator_version":"2","name_source":{"confidence":"medium","kind":"public","repository":"meh321/AddressLibraryDatabase","revision":"0379cb6fdaa0d68e69ef9ad1a2d39caa6611ac91","source":"meh321"},"template_digest":"df32415c55896040a11705484c0f0da5801925ec042c4cc3a23c954179756459"}
// Adapted bodies: none. Body synthesized from the bounded leaf template.
// ShaderReferenceEffect: EXE_RTTI
// GetStackable: COMMUNITY(meh321/AddressLibraryDatabase@0379cb6, permission)
// member, padding: GUESS(low); storage names invented for the measured member offset
#include "ShaderReferenceEffect.h"
// GetStackable: COMMUNITY(meh321/AddressLibraryDatabase@0379cb6, permission)
std::uint8_t ShaderReferenceEffect::GetStackable() const
{
    return 0x1;
}

std::uint8_t ShaderReferenceEffect::Function5e2320()
{
    return (flags >> 1) & 1;
}

void ShaderReferenceEffect::Function5e2440(bool a_value)
{
    flags = a_value ? (flags | 2u) : (flags & ~2u);
}
