// Source exposure: mixed (community headers; the pinned image listing).
// Code origin: original; the listing and community declarations only
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// 0x321c28 TESModel::~TESModel
// CI hash: 0x321c28 ??_ETESModel@@WCA@EAAPEAXI@Z
// Adapted bodies: none
// Source exposure: mixed (local binary analysis and public names).
// Origin: {"generator_family":"member-return","generator_version":"2","name_source":{"confidence":"medium","kind":"public","repository":"meh321/AddressLibraryDatabase","revision":"0379cb6fdaa0d68e69ef9ad1a2d39caa6611ac91","source":"meh321"},"template_digest":"1254832e5ca7cdca7f6330a2018dde32919625f6149744dd0138e59a943106d8"}
// Adapted bodies: none. Body synthesized from the bounded leaf template.
// TESModel: EXE_RTTI
// GetModel: COMMUNITY(meh321/AddressLibraryDatabase@0379cb6, permission)
// member, padding: GUESS(low); storage names invented for the measured member offset
#include "TESModel.h"

PrimaryBase::~PrimaryBase() {}
SecondaryBase::~SecondaryBase() {}

// Defined so the compiler emits the vftables and, beside them, the compared adjustor thunk.
TESModel::TESModel() {}
TESModel::~TESModel() {}

// GetModel: COMMUNITY(meh321/AddressLibraryDatabase@0379cb6, permission)
void* TESModel::GetModel() const
{
    return *reinterpret_cast<void* const*>(reinterpret_cast<const char*>(this) + 0x8);
}

TESModelTextureSwap* TESModel::GetAsModelTextureSwap()
{
    return nullptr;
}
