// Source exposure: mixed (names and declarations from community headers; base classes, sizes and
// 0x329d38 compared function
// 0x3298d0 compared function
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// offset 0x30 of a parent), so they use RawAt; header-gap TESForm for these fields.
// BGSSoundCategory: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT) EXE_RTTI
// BGSSoundCategory::SetCategoryAttenuation, BGSSoundCategory::SetCategoryFrequency, BGSSoundCategory::Matches: COMMUNITY(meh321/AddressLibraryDatabase@0379cb6, permission)
// BGSSoundCategory::InitializeData: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// BSISoundCategory: STANDIN COMMUNITY(meh321/AddressLibraryDatabase@0379cb6, permission)
// BSISoundCategory::unk02, BSISoundCategory::unk03: GUESS(low)
// RawAt: GUESS(low)
#pragma once

#include <cstddef>
#include <cstdint>
#include "../forms/TESForm.h"

class BGSSoundCategory;

class BSISoundCategory
{
public:
    virtual ~BSISoundCategory();
    virtual bool Matches(const BSISoundCategory* a_category) const;  // slot 01
    virtual void unk02();  // slot 02
    virtual void unk03();  // slot 03
    virtual float GetCategoryFrequency() const;  // slot 04
};

template <class T>
T& RawAt(const void* a_base, std::ptrdiff_t a_offset)
{
    return *reinterpret_cast<T*>(const_cast<std::uint8_t*>(reinterpret_cast<const std::uint8_t*>(a_base)) + a_offset);
}

class BGSSoundCategory : public TESForm
{
public:
    virtual void SetCategoryAttenuation(std::uint16_t a_value);  // compared: 0x3299e0
    virtual void SetCategoryFrequency(float a_value);  // compared: 0x329970
    virtual void InitializeData();  // compared: 0x329790
    virtual bool Matches(const BSISoundCategory* a_category) const;  // compared: 0x329820
    // BGSSoundCategory::SetCategoryVolume: CRASHLOGGER_PDB(59818@2026.10.24)
    virtual void SetCategoryVolume(float a_value);
};
