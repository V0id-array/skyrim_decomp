// Source exposure: mixed (local binary analysis and public names).
// 0x51c550 compared function
// 0x51b430 compared function
// Origin: {"generator_family":"const-return","generator_version":"2","name_source":{"confidence":"low","kind":"guess","owner":"BGSQueuedObjectInitialLoad","rationale":"vtable owner and slot; method spelling invented","slot":5},"template_digest":"df32415c55896040a11705484c0f0da5801925ec042c4cc3a23c954179756459"}
// Adapted bodies: none. Body synthesized from the bounded leaf template.
// BGSQueuedObjectInitialLoad: EXE_RTTI
// Slot5: GUESS(low)
// member, padding: GUESS(low); storage names invented for the measured member offset
#pragma once
#include <cstdint>
// Slot5: GUESS(low); method name inferred from vtable owner and slot
// Function51c550, unk08, ptr18, ReleaseFn: GUESS(low) STANDIN
class BGSQueuedObjectInitialLoad
{
public:
    virtual std::uint32_t Slot5() const;
    void Function51c550();
    bool Function51b430() const;

    std::uint8_t unk08[0x10];
    void* ptr18;
};
