// Source exposure: mixed (names and declarations from community headers; base classes, sizes and
// 0x155c410 compared function
// the compared functions from the pinned image).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// BSFogProperty: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT) EXE_RTTI
// NiProperty, NiFogProperty: STANDIN EXE_RTTI
// BSFogProperty::~BSFogProperty: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// NiFogProperty::~NiFogProperty: GUESS(low)
// unknown30, unknown50: GUESS(low)
#pragma once

#include <cstdint>
#include "NiObjectNET.h"

class NiProperty : public NiObjectNET
{
public:
};
static_assert(sizeof(NiProperty) == 0x30, "NiProperty size");

class NiFogProperty : public NiProperty
{
public:
    virtual ~NiFogProperty();

    std::uint8_t unknown30[0x20];  // 30
};
static_assert(sizeof(NiFogProperty) == 0x50, "NiFogProperty size");

// gFogScale, gFogBase: GUESS(low); globals read by Function155c410.
extern float gFogScale;
extern float gFogBase;

class BSFogProperty : public NiFogProperty
{
public:
    BSFogProperty();
    virtual ~BSFogProperty() {}  // compared: 0x155c460 (scalar deleting destructor)
    // BSFogProperty::Function155c410: GUESS(low); compared at RVA 0x155c410
    void Function155c410(float a_arg0, float a_arg1);

    float fogNear;  // 50
    float fogFar;   // 54
    std::uint8_t unknown58[0x38];  // 58
};
static_assert(sizeof(BSFogProperty) == 0x90, "BSFogProperty size");
