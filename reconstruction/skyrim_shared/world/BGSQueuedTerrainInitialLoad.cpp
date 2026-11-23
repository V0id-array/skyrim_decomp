// Source exposure: mixed (community headers; the pinned image listing).
// 0x51ad70 compared function
// Code origin: original; decoded from the pinned image listing and community declarations
// SPDX-License-Identifier: CC0-1.0
// 0x51c570 BGSQueuedTerrainInitialLoad::Function51c570
// Adapted bodies: none
// Source exposure: mixed (local binary analysis and public names).
// Origin: {"generator_family":"const-return","generator_version":"2","name_source":{"confidence":"low","kind":"guess","owner":"BGSQueuedTerrainInitialLoad","rationale":"vtable owner and slot; method spelling invented","slot":5},"template_digest":"df32415c55896040a11705484c0f0da5801925ec042c4cc3a23c954179756459"}
// Adapted bodies: none. Body synthesized from the bounded leaf template.
// BGSQueuedTerrainInitialLoad: EXE_RTTI
// Slot5: GUESS(low)
// member, padding: GUESS(low); storage names invented for the measured member offset
#include "BGSQueuedTerrainInitialLoad.h"
// Slot5: GUESS(low); method name inferred from vtable owner and slot
std::uint32_t BGSQueuedTerrainInitialLoad::Slot5() const
{
    return 0x2;
}

// The main path first and the null-pointer return last give the observed two adjacent RETs;
// on the null path the pointer's low byte is already the returned bool.
bool BGSQueuedTerrainInitialLoad::Function51ad70() const
{
    QueuedData* data = ptr18;
    if (data) {
        const std::uint32_t value = data->flags & 0x70000000u;
        return value == 0x30000000u || value == 0x40000000u;
    }
    return (bool)data;
}

extern void ReleaseFn(void*);

// Guess: clear the queued object and forward it to the release routine.
void BGSQueuedTerrainInitialLoad::Function51c570()
{
    void* p = ptr18;
    if (p) {
        ptr18 = nullptr;
        return ReleaseFn(p);
    }
}
