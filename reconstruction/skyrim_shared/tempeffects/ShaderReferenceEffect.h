// Source exposure: mixed (local binary analysis and public names).
// 0x5e2440 compared function
// 0x5e2320 compared function
// Origin: {"generator_family":"const-return","generator_version":"2","name_source":{"confidence":"medium","kind":"public","repository":"meh321/AddressLibraryDatabase","revision":"0379cb6fdaa0d68e69ef9ad1a2d39caa6611ac91","source":"meh321"},"template_digest":"df32415c55896040a11705484c0f0da5801925ec042c4cc3a23c954179756459"}
// Adapted bodies: none. Body synthesized from the bounded leaf template.
// ShaderReferenceEffect: EXE_RTTI
// GetStackable: COMMUNITY(meh321/AddressLibraryDatabase@0379cb6, permission)
// member, padding: GUESS(low); storage names invented for the measured member offset
// Function5e2320: GUESS(low)
#pragma once
#include <cstdint>
#include <cstddef>
// GetStackable: COMMUNITY(meh321/AddressLibraryDatabase@0379cb6, permission)
class ShaderReferenceEffect
{
public:
    virtual std::uint8_t GetStackable() const;

    std::uint8_t Function5e2320();
    void Function5e2440(bool a_value);

    std::uint8_t padding[0x128];  // 08
    std::uint32_t flags;          // 130
};
static_assert(offsetof(ShaderReferenceEffect, flags) == 0x130, "flags offset");
