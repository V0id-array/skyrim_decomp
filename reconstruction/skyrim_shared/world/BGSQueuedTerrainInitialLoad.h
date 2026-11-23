// Source exposure: mixed (local binary analysis and public names).
// 0x51c570 compared function
// 0x51ad70 compared function
// Origin: {"generator_family":"const-return","generator_version":"2","name_source":{"confidence":"low","kind":"guess","owner":"BGSQueuedTerrainInitialLoad","rationale":"vtable owner and slot; method spelling invented","slot":5},"template_digest":"df32415c55896040a11705484c0f0da5801925ec042c4cc3a23c954179756459"}
// Adapted bodies: none. Body synthesized from the bounded leaf template.
// BGSQueuedTerrainInitialLoad: EXE_RTTI
// Slot5: GUESS(low)
// member, padding: GUESS(low); storage names invented for the measured member offset
#pragma once
#include <cstdint>
// Slot5: GUESS(low); method name inferred from vtable owner and slot
// Function51c570, Function51ad70, unk08, ptr18, ReleaseFn: GUESS(low) STANDIN
// QueuedData/flags: GUESS(low); stand-in for the object reached through ptr18
struct QueuedData
{
    std::uint8_t pad[0xc];
    std::uint32_t flags;
};

class BGSQueuedTerrainInitialLoad
{
public:
    virtual std::uint32_t Slot5() const;
    void Function51c570();
    bool Function51ad70() const;

    std::uint8_t unk08[0x10];
    QueuedData* ptr18;
};
