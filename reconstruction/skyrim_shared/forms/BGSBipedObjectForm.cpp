// Source exposure: mixed (community headers; the pinned image listing).
// 0x1d2170 compared function
// 0x1d20a0 compared function
// Code origin: original; the listing and community declarations only
// SPDX-License-Identifier: CC0-1.0
// 0x1d2160 BGSBipedObjectForm::Function1d2160
// Adapted bodies: none
#include "BGSBipedObjectForm.h"

#include <cstring>
#include <intrin.h>

// Not compared: defined so that the compiler emits the vftable and, beside it, the
// deleting destructor that is compared (cookbook rule 14).
BGSBipedObjectForm::BGSBipedObjectForm()
{
    _ReadWriteBarrier();
    unknown0C = 2;
    std::memset(&unk08, 0, sizeof(unk08));
}

// Compared function: RVA 0x1d20f0, 3 bytes, BGSBipedObjectForm::ClearDataComponent.
void BGSBipedObjectForm::ClearDataComponent()
{
}

// Compared function: RVA 0x1d20e0, 8 bytes, BGSBipedObjectForm::InitializeDataComponent.
void BGSBipedObjectForm::InitializeDataComponent()
{
    unk08 = 0;
}

// Compared as the scalar deleting destructor; the sized delete it calls is bound by RVA in
// bind-hints.json.
BGSBipedObjectForm::~BGSBipedObjectForm()
{
}

// Compared function: RVA 0x1d2160, 10 bytes, BGSBipedObjectForm::Function1d2160.
bool BGSBipedObjectForm::Function1d2160(const BGSBipedObjectForm* a_other) const
{
    return (a_other->unk08 & unk08) != 0;
}

bool BGSBipedObjectForm::Function1d2170(int a_index) const
{
    if (a_index >= 0x20)
        return false;
    return (unk08 & (1u << a_index)) != 0;
}
