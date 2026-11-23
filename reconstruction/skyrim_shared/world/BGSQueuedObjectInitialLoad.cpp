// Source exposure: mixed (community headers; the pinned image listing).
// 0x51b430 compared function
// Code origin: original; decoded from the pinned image listing and community declarations
// SPDX-License-Identifier: CC0-1.0
// 0x51c550 BGSQueuedObjectInitialLoad::Function51c550
// Adapted bodies: none
// Source exposure: mixed (local binary analysis and public names).
// Origin: {"generator_family":"const-return","generator_version":"2","name_source":{"confidence":"low","kind":"guess","owner":"BGSQueuedObjectInitialLoad","rationale":"vtable owner and slot; method spelling invented","slot":5},"template_digest":"df32415c55896040a11705484c0f0da5801925ec042c4cc3a23c954179756459"}
// Adapted bodies: none. Body synthesized from the bounded leaf template.
// BGSQueuedObjectInitialLoad: EXE_RTTI
// Slot5: GUESS(low)
// member, padding: GUESS(low); storage names invented for the measured member offset
#include "BGSQueuedObjectInitialLoad.h"
// Slot5: GUESS(low); method name inferred from vtable owner and slot
std::uint32_t BGSQueuedObjectInitialLoad::Slot5() const
{
    return 0x5;
}

bool BGSQueuedObjectInitialLoad::Function51b430() const
{
    enum : std::uint32_t { kMask = 0x70000000u, kAdd = 0xD0000000u, kTest = 0xEFFFFFFFu };
    const auto* p = static_cast<const std::uint8_t*>(ptr18);
    if (p != nullptr) {
        const std::uint32_t masked = *reinterpret_cast<const std::uint32_t*>(p + 0xC) & kMask;
        __assume(masked <= 0x2FFFFFFFu);
        const std::uint32_t v = masked + kAdd;
        return (v & kTest) == 0;
    }
    return false;
}

extern void ReleaseFn(void*);

// Guess: clear the queued object and forward it to the release routine.
void BGSQueuedObjectInitialLoad::Function51c550()
{
    void* p = ptr18;
    if (p) {
        ptr18 = nullptr;
        return ReleaseFn(p);
    }
}
