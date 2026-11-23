// Source exposure: mixed (names and declarations from community headers; base classes, sizes and
// 0x271830 compared function
// 0x271820 compared function
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// TESLevCharacter: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT) EXE_RTTI
// TESObject, TESBoundObject, TESBoundAnimObject: STANDIN EXE_RTTI
// TESLevCharacter::InitItemImpl: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// TestBit: GUESS(low)
// unknown20, unknown30, unknown58: GUESS(low); NG models the two sub-objects at 0x30 and 0x58 as bases, here they are byte regions passed by address
// InitLeveledListState, InitModelTextureSwapState, ResetOwnerState: GUESS(low); callees at 0x1e9d60, 0x1ed110 and 0x1e60b0, declared and bound by hint
#pragma once

#include <cstdint>
#include "TESForm.h"

class TESLevCharacter;
extern std::uint32_t g_levCharValue;

// Callees of InitItemImpl; declared, not defined here.
void InitLeveledListState(void* a_list, TESLevCharacter* a_owner);
void InitModelTextureSwapState(void* a_swap, TESLevCharacter* a_owner);
void ResetOwnerState(TESLevCharacter* a_owner, bool a_flag);

// TestBit: GUESS(low); flag bit tested as a load, read through a by-value helper.
inline bool TestBit(std::uint32_t a_flags, std::uint32_t a_bit)
{
    return ((a_flags >> a_bit) & 1) != 0;
}

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

class TESLevCharacter : public TESBoundAnimObject
{
public:
    virtual void InitItemImpl();  // compared: 0x2717b0
    // TESLevCharacter::Function271830: GUESS(low); tests one byte value against two consecutive codes
    std::uint32_t Function271820() const;  // compared: 0x271820
    bool Function271830(std::uint8_t a_value) const;

    std::uint8_t unknown20[0x10];  // 20
    std::uint8_t unknown30[0x28];  // 30
    std::uint8_t unknown58[0x18];  // 58
};
