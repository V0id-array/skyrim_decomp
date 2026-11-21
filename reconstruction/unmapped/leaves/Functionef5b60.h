// Source exposure: mixed (community PDB layout; the pinned image listing).
// SPDX-License-Identifier: CC0-1.0
// Code origin: original; drafted from the pinned image listing
// Functionef5b60, Fn, kZero0, kZero1, kZero2: GUESS(low) STANDIN
// NiTransform layout: CRASHLOGGER_PDB(59818@2026.10.24)
#pragma once

struct Functionef5b60 {
    float rotate[3][3];
    float translate[3];
    float scale;

    void Fn();
};
static_assert(sizeof(Functionef5b60) == 0x34, "identity transform size");

extern float kZero0;
extern float kZero1;
extern float kZero2;
