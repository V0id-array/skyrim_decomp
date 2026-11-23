// Source exposure: mixed (community headers; the pinned image listing).
// 0x267460 compared function
// Code origin: original; the listing and community declarations only
// SPDX-License-Identifier: CC0-1.0
// 0x267450 BGSTalkingActivator::Function267450
// Adapted bodies: none
// Code origin: InitializeData, Get/SetObjectVoiceType bodies written from the local listings; declarations added to the existing unit header.
// Source exposure: mixed (names and declarations from community headers; the listing of the pinned
// image).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Adapted bodies: none
#include "BGSTalkingActivator.h"

const void* BGSTalkingActivator::Function267450() const
{
    return tempRef;
}
void BGSTalkingActivator::InitializeData() { voiceType = nullptr; TESObjectACTI::InitializeData(); }
void BGSTalkingActivator::SetObjectVoiceType(BGSVoiceType* a_voice) { voiceType = a_voice; }
BGSVoiceType* BGSTalkingActivator::GetObjectVoiceType() const { return voiceType; }

// Helper at the tail-call target; GUESS(low), no public name in the pinned image.
void Function638b00(BGSSaveFormBuffer*, const void*, void*);

void BGSTalkingActivator::SaveGame(BGSSaveFormBuffer* buffer)
{
    TESObjectACTI::SaveGame(buffer);
    const unsigned raw = buffer->flagsRaw;
    if ((static_cast<unsigned char>(raw >> 23) & 1) != 0) {
        Function638b00(buffer, tempRef, nullptr);
    }
}
