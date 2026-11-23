// Source exposure: mixed (community headers; the pinned image listing).
// 0x2721b0 compared function
// 0x272130 compared function
// 0x272110 compared function
// Code origin: original; the listing and community declarations only
// SPDX-License-Identifier: CC0-1.0
// 0x272120 TESLevItem::Function272120
// Adapted bodies: SKELETON_TODO_ORIGIN (write "none" when attempt prints no "origin advice" line;
// otherwise name each adapted body, its upstream file, revision and licence).
// Source exposure: mixed (names and declarations from community headers; the listing of the pinned
// image).
// Adapted bodies: none
#include "TESLevItem.h"

// TODO body: RVA 0x272170, 43 bytes, TESLevItem::LoadGame.
void TESLevItem::LoadGame(BGSLoadFormBuffer* a_buf)
{
    TESForm::LoadGame(a_buf);
    return leveledList.LoadGame(a_buf);
}

// TESLevItem::Function272120: GUESS(low)
void TESLevItem::Function272120(std::uint8_t a_value)
{
    return ForwardLevItemByte(a_value);
}

std::uint32_t TESLevItem::Function272110()
{
    return g_levItemValue;
}
