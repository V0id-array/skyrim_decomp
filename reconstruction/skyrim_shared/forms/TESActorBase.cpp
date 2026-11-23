// Source exposure: mixed (community headers; the pinned image listing).
// 0x3cd860 compared function
// 0x3cc700 compared function
// Code origin: original; the listing and community declarations only
// SPDX-License-Identifier: CC0-1.0
// 0x3cc640 TESActorBase::Function3cc640
// Adapted bodies: none
// Source exposure: mixed (community headers; the pinned image listing).
// Code origin: GetHasPLSpecTex uses the existing project body from d7bcc19aa9.
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Adapted bodies: none
// 0x3b03a0 TESActorBase::GetIsPlayerOwner
// 0x3afed0 TESActorBase::IsAutoCalc
// 0x3afef0 TESActorBase::SetAutoCalc
#include "TESActorBase.h"

// TestBit: GUESS(low)
inline bool TestBit(std::uint32_t a_flags, std::uint32_t a_bit)
{
    return ((a_flags >> a_bit) & 1) != 0;
}

// Not compared: defined so that the compiler emits the vftable and, beside it, the
// deleting destructor that is compared (cookbook rule 14).
TESActorBase::TESActorBase()
{
}

// TODO body: RVA 0x3b03a0, 11 bytes, TESActorBase::GetIsPlayerOwner.
bool TESActorBase::GetIsPlayerOwner() const
{
    return *reinterpret_cast<const std::int32_t*>(reinterpret_cast<const char*>(this) - 0xd4) == 7;
}

// TODO body: RVA 0x3afed0, 22 bytes, TESActorBase::IsAutoCalc.
bool TESActorBase::IsAutoCalc() const
{
    if (*reinterpret_cast<const std::uint8_t*>(reinterpret_cast<const char*>(this) + 0x1a) == '+' &&
        TestBit(*reinterpret_cast<const std::uint32_t*>(reinterpret_cast<const char*>(this) + 0x38), 4)) {
        return true;
    }
    return false;
}

// TODO body: RVA 0x3afef0, 28 bytes, TESActorBase::SetAutoCalc.
void TESActorBase::SetAutoCalc(bool a_autoCalc)
{
    if (*reinterpret_cast<const std::uint8_t*>(reinterpret_cast<const char*>(this) + 0x1a) == '+') {
        reinterpret_cast<TESActorBaseData*>(reinterpret_cast<char*>(this) + 0x30)->SetFlagBit(0x10, a_autoCalc, true);
    }
}

// TODO body: RVA 0x3cbc60, 52 bytes, TESActorBase::~TESActorBase; compared as the scalar deleting
// destructor. If the target calls a separate destructor, keep only the declaration and delete this
// definition (cookbook rule 18).

// TESActorBase::GetCombatStyle: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
TESCombatStyle* TESActorBase::GetCombatStyle()
{
    return nullptr;
}

// TESActorBase::GetHasPLSpecTex: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
bool TESActorBase::GetHasPLSpecTex() const
{
    return false;
}

// TESActorBase::RestoreActorValue: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
void TESActorBase::RestoreActorValue(std::uint32_t a_modifier, std::uint32_t a_akValue, float a_value)
{
}

void TESActorBase::Function3cc640()
{
    InitializeDataComponent();
}

void TESActorBase::Function3cc700()
{
    // Slot 1 of the primary vtable, reached through the first base.
    using Fn = void (*)(void*);
    Fn fn = reinterpret_cast<Fn>((*reinterpret_cast<void***>(this))[1]);
    fn(this);
}

void TESActorBase::Function3cd860()
{
    // Slot 4 of the primary vtable.
    using Fn = void (*)(void*);
    Fn fn = reinterpret_cast<Fn>((*reinterpret_cast<void***>(this))[4]);
    fn(this);
}
