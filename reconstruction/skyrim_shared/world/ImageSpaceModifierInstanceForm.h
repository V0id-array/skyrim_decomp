// Source exposure: mixed (community declarations and the contributor-owned pack).
// Code origin: original; the listing and community declarations only
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// ImageSpaceModifierInstanceForm, ImageSpaceModifierInstanceForm::Unk_25, ImageSpaceModifierInstanceForm::~ImageSpaceModifierInstanceForm, ImageSpaceModifierInstanceForm::Apply, ImageSpaceModifierInstanceForm::IsForm, ImageSpaceModifierInstanceForm::PrintInfo: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// base, age, targetInstance, pad: GUESS(low); flattened stand-in at the offsets the compared body reads
#pragma once

#include <cstdint>
#include <cstddef>

class ImageSpaceModifierInstanceForm
{
public:
    virtual ~ImageSpaceModifierInstanceForm();  // 00
    virtual bool Unk_25();  // compared: 0x2a3650  // slot 25
    virtual void Apply();  // 26
    virtual ImageSpaceModifierInstanceForm* IsForm();  // 27
    virtual void PrintInfo(char* a_dstBuf);  // 28

    std::uint8_t  pad08[0x18];  // 08
    float         age;          // 20
    void*         targetInstance;  // 28
    std::uint8_t  pad30[0x20];  // 30
};
static_assert(sizeof(ImageSpaceModifierInstanceForm) == 0x50, "ImageSpaceModifierInstanceForm size");
