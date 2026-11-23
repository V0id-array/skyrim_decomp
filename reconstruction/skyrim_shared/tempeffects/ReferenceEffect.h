// Source exposure: mixed (local binary analysis and public names).
// 0x5db6e0 compared function
// 0x5d88e0 compared function
// 0x5d88c0 compared function
// Origin: {"generator_family":"const-return","generator_version":"2","name_source":{"confidence":"medium","kind":"public","repository":"CharmedBaryon/CommonLibSSE-NG","revision":"b93280e832f263dbef44e44cbe2936622a02f91a","source":"ng-slot"},"template_digest":"df32415c55896040a11705484c0f0da5801925ec042c4cc3a23c954179756459"}
// Adapted bodies: none. Body synthesized from the bounded leaf template.
// ReferenceEffect: EXE_RTTI
// GetAttached: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// member, padding: GUESS(low); storage names invented for the measured member offset
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
#pragma once
#include <cstdint>
// GetAttached: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// EffectTarget: GUESS(low) STANDIN; virtual slot holder for the compared tail call.
class EffectTarget
{
public:
    virtual void PadSlot00();
    virtual void PadSlot01();
    virtual void PadSlot02();
    virtual void PadSlot03();
    virtual void PadSlot04();
    virtual void PadSlot05();
    virtual void PadSlot06();
    virtual void PadSlot07();
    virtual void PadSlot08();
    virtual void PadSlot09();
    virtual void PadSlot10();
    virtual void PadSlot11();
    virtual void PadSlot12();
    virtual void PadSlot13();
    virtual bool PadSlot14();
    virtual void PadSlot15();
    virtual void PadSlot16();
    virtual void PadSlot17();
    virtual void PadSlot18();
    virtual void PadSlot19();
    virtual void PadSlot20();
    virtual void PadSlot21();
    virtual bool TargetMethod();
};

class ReferenceEffect
{
public:
    virtual std::uint8_t GetAttached() const;
    // ReferenceEffect::Function5d88c0: GUESS(low); compared at RVA 0x5d88c0
    bool Function5d88c0();
    bool Function5d88e0();
    bool Function5db6e0() const;

    std::uint8_t pad08[0x8];   // 08
    float        value10;      // 10
    std::uint8_t pad14[0xC];   // 14
    float        value20;      // 20
    std::uint8_t pad24[0xC];   // 24
    EffectTarget* target;      // 30
    std::uint8_t pad38[0x8];   // 38
    std::uint8_t flag40;       // 40
};
