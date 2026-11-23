// Source exposure: mixed (community headers; the pinned image listing).
// 0x5db6e0 compared function
// 0x5d88e0 compared function
// Code origin: original; the listing and community declarations only
// SPDX-License-Identifier: CC0-1.0
// 0x5d88c0 ReferenceEffect::Function5d88c0
// Adapted bodies: none
// Source exposure: mixed (local binary analysis and public names).
// Origin: {"generator_family":"const-return","generator_version":"2","name_source":{"confidence":"medium","kind":"public","repository":"CharmedBaryon/CommonLibSSE-NG","revision":"b93280e832f263dbef44e44cbe2936622a02f91a","source":"ng-slot"},"template_digest":"df32415c55896040a11705484c0f0da5801925ec042c4cc3a23c954179756459"}
// Adapted bodies: none. Body synthesized from the bounded leaf template.
// ReferenceEffect: EXE_RTTI
// GetAttached: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// member, padding: GUESS(low); storage names invented for the measured member offset
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
#include "ReferenceEffect.h"
// GetAttached: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
std::uint8_t ReferenceEffect::GetAttached() const
{
    return 0x1;
}

bool ReferenceEffect::Function5d88c0()
{
    if (target != nullptr) {
        return target->TargetMethod();
    }
    return true;
}

bool ReferenceEffect::Function5d88e0()
{
    if (target != nullptr) {
        return target->PadSlot14();
    }
    return true;
}

bool ReferenceEffect::Function5db6e0() const
{
    if (flag40 != 0) {
        return true;
    }
    const float current = value10;
    if (!(current >= 0.0f)) {
        return false;
    }
    if (!(current >= value20)) {
        return true;
    }
    return false;
}
