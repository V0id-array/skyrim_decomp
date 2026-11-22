// Source exposure: mixed (community headers; the pinned image listing).
// 0xf14db0 compared function
// 0xf14d10 compared function
// 0xf14c70 compared function
// 0xf14c40 compared function
// Code origin: original; the four bodies are written from the pinned image listing
// SPDX-License-Identifier: CC0-1.0
// NiPSysData and its four Function<rva> methods: GUESS(low)
// Functioneaca30: GUESS(low); the release helper called with the old pointer.
#pragma once
#include <cstdint>

void Functioneaca30(void* a_old);

class NiPSysData
{
public:
    void Functionf14c40(void* a_value);
    void Functionf14c70(void* a_value);
    void Functionf14d10(void* a_value);
    void Functionf14db0(void* a_value);

    std::uint8_t pad00[0x40];  // 00
    void*        field40;  // 40
    void*        field48;  // 48
    void*        field50;  // 50
    std::uint8_t pad58[0x28];  // 58
    void*        field80;  // 80
};
