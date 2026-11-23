// Source exposure: mixed (names and declarations from community headers; base classes, sizes and
// 0xcfc150 compared function
// 0xcfbd80 compared function
// the compared functions from the pinned image).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// BSGamepadDevice: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT) EXE_RTTI
// BSIInputDevice, BSInputDevice: STANDIN EXE_RTTI
// BSGamepadDevice::Unk_0E, BSGamepadDevice::Unk_0C, BSGamepadDevice::ResetLEDColor: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// BSIInputDevice::~BSIInputDevice, unknown08, unknown70: GUESS(low)
#pragma once

#include <cstdint>
#include <cstddef>

class BSIInputDevice
{
public:
    virtual ~BSIInputDevice() = default;
};
static_assert(sizeof(BSIInputDevice) == 0x8, "BSIInputDevice size");

class BSInputDevice : public BSIInputDevice
{
public:
    std::uint8_t unknown08[0x68];  // 08
};
static_assert(sizeof(BSInputDevice) == 0x70, "BSInputDevice size");

class BSGamepadDevice : public BSInputDevice
{
public:
    virtual void Unk_0E();  // compared: 0xcfbde0
    virtual bool Unk_0C();  // compared: 0xcfc180
    virtual void ResetLEDColor();  // compared: 0xcfc1a0
    // BSGamepadDevice::Functioncfbd80: GUESS(low); compared at RVA 0xcfbd80
    static float Functioncfbd80(float a_a, float a_b, float a_c, float a_d, float a_e);
    // BSGamepadDevice::IsEnabled: compared at 0xcfc150; GUESS(low)
    bool IsEnabled() const;

    // TODO members: replace part of the padding with the members the bodies read,
    // keeping every offset and the size check true.
    std::uint8_t unknown70[0x60];  // 70
};
static_assert(sizeof(BSGamepadDevice) == 0xD0, "BSGamepadDevice size");
