// Source exposure: mixed (names and declarations from community headers; base classes, sizes and
// 0x3887e0 compared function
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// TESSound: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT) EXE_RTTI
// TESObject, TESBoundObject, TESBoundAnimObject: STANDIN EXE_RTTI
// TESSound::Clone3D, TESSound::InitializeData, TESSound::SetFormEditorID, TESSound::~TESSound: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// TESSound::InitItemImpl: CRASHLOGGER_PDB(59818@2026.10.24)
// BGSSoundDescriptorForm: CRASHLOGGER_PDB(59818@2026.10.24); the type the PDB gives for the pointer at 0x30
// unknown30: GUESS(low); the member name is a guess, its type is the PDB's descriptor
// AddCompileIndex, GetFile, LookupByID: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// SetFormFlag: GUESS(low); a non-virtual helper at 0x1e60b0 taking this and a bool
// NiAVObject: STANDIN COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
#pragma once

#include <cstdint>
#include "../forms/TESForm.h"

class NiAVObject;
class TESFile;

class BGSSoundDescriptorForm : public TESForm
{
};

class TESObject : public TESForm
{
public:
};

class TESBoundObject : public TESObject
{
public:
};

class TESBoundAnimObject : public TESBoundObject
{
public:
};

class TESSound : public TESBoundAnimObject
{
public:
    TESSound();
    void InitItemImpl() override;  // compared: 0x3887e0
    virtual NiAVObject* Clone3D(TESObjectREFR* a_ref);  // compared: 0x388860
    virtual void InitializeData();  // compared: 0x388880
    virtual bool SetFormEditorID(const char* a_str);  // compared: 0x388620
    virtual ~TESSound();  // compared: 0x3888d0 (scalar deleting destructor)

    static void     AddCompileIndex(std::uint32_t& a_id, TESFile* a_file);
    TESFile*        GetFile(std::int32_t a_idx = -1) const;
    static TESForm* LookupByID(std::uint32_t a_formID);
    void            SetFormFlag(bool a_set);

    std::uint8_t unknown20[0x10];       // 20
    BGSSoundDescriptorForm* unknown30;  // 30
};
