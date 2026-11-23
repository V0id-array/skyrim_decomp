// Source exposure: mixed (names and declarations from community headers; base classes, sizes and
// 0x1d2170 compared function
// 0x1d2160 compared function
// 0x1d20a0 compared function
// the compared functions from the pinned image).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// BGSBipedObjectForm: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT) EXE_RTTI
// BaseFormComponent: STANDIN EXE_RTTI
// BGSBipedObjectForm::ClearDataComponent, BGSBipedObjectForm::InitializeDataComponent, BGSBipedObjectForm::~BGSBipedObjectForm: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// BaseFormComponent::~BaseFormComponent: GUESS(low)
// unk08, unknown0C: GUESS(low); unk08 is the dword the initialiser stores zero into
// BGSBipedObjectForm::Function1d2160: GUESS(low)
#pragma once

#include <cstdint>
#include <cstddef>

class BaseFormComponent
{
public:
    virtual ~BaseFormComponent() = default;
};
static_assert(sizeof(BaseFormComponent) == 0x8, "BaseFormComponent size");

class BGSBipedObjectForm : public BaseFormComponent
{
public:
    BGSBipedObjectForm();
    virtual void ClearDataComponent();  // compared: 0x1d20f0
    virtual void InitializeDataComponent();  // compared: 0x1d20e0
    virtual ~BGSBipedObjectForm();  // compared: 0x1d21f0 (scalar deleting destructor)

    bool Function1d2160(const BGSBipedObjectForm* a_other) const;
    bool Function1d2170(int a_index) const;  // compared: 0x1d2170

    std::uint32_t unk08;  // 08
    std::uint32_t unknown0C;  // 0C
};
static_assert(sizeof(BGSBipedObjectForm) == 0x10, "BGSBipedObjectForm size");
