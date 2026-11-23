// Source exposure: mixed (community headers and the pinned image).
// 0x3cd860 compared function
// 0x3cc700 compared function
// 0x3cc640 compared function
// 0x3b03a0 compared function
// 0x3afef0 compared function
// 0x3afed0 compared function
// Code origin: project stand-ins and the community declarations labelled below.
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// TESActorBase: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT) EXE_RTTI
// TESObject, TESBoundObject, TESBoundAnimObject: STANDIN EXE_RTTI
// TESActorBase::GetIsPlayerOwner: COMMUNITY(meh321/AddressLibraryDatabase@0379cb6, permission)
// TESActorBase::IsAutoCalc, TESActorBase::SetAutoCalc, TESActorBase::~TESActorBase: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// TESActorBaseData::SetFlagBit: COMMUNITY(powerof3/CommonLibSSE@654e55f, GPL-3.0)
// Function3cc640: GUESS(low); the tail call of the compared body
#pragma once

#include <cstdint>
#include "TESForm.h"

class TESObject : public TESForm
{
public:
};

class TESBoundObject : public TESObject
{
public:
};

class TESBoundAnimObject : public TESBoundObject
{
public:
};

class TESActorBaseData
{
public:
    void SetFlagBit(std::uint32_t a_bit, bool a_value, bool a_unknown);
};

class TESCombatStyle;

class TESActorBase : public TESBoundAnimObject
{
public:
    TESActorBase();
    virtual bool GetIsPlayerOwner() const;  // compared: 0x3b03a0
    virtual bool IsAutoCalc() const;  // compared: 0x3afed0
    virtual void SetAutoCalc(bool a_autoCalc);  // compared: 0x3afef0
    // GetCombatStyle, GetHasPLSpecTex: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
    // RestoreActorValue argument types: GUESS(low)
    virtual TESCombatStyle* GetCombatStyle();
    virtual bool GetHasPLSpecTex() const;
    virtual void RestoreActorValue(std::uint32_t a_modifier, std::uint32_t a_akValue, float a_value);
    virtual ~TESActorBase();  // compared: 0x3cbc60 (scalar deleting destructor)
    void Function3cc640();  // 0x3cc640
    void Function3cc700();  // 0x3cc700
    void Function3cd860();  // 0x3cd860

    std::uint8_t padding[0x130];
};
