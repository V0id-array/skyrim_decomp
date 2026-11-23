// Code origin: declarations written for this unit from CommonLibSSE-NG names and layouts; the
// stand-ins declare only what the compared code needs.
// Source exposure: mixed (community declarations and the contributor-owned pack;
// 0xf99ba0 compared function
// 0xf99500 compared function
// 0xf99390 compared function
// 0xf992c0 compared function
// 0xf99260 compared function
// 0xf98f50 compared function
// bases, sizes and slots are community hypotheses).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// NiParticleSystem, NiParticleSystem::LoadBinary, NiParticleSystem::RegisterStreamables, NiParticleSystem::SaveBinary, NiParticleSystem::IsEqual, NiParticleSystem::UpdateDownwardPass, NiParticleSystem::UpdateSelectedDownwardPass, NiParticleSystem::SetSelectiveUpdateFlags, NiParticleSystem::~NiParticleSystem (implicit here), NiParticles::LoadBinary, NiParticles::RegisterStreamables, NiParticles::SaveBinary, NiParticles::IsEqual, NiParticles::~NiParticles, BSGeometry::SetSelectiveUpdateFlags, BSGeometry::UpdateDownwardPass, BSGeometry::UpdateSelectedDownwardPass: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
#pragma once

#include <cstdint>
#include <cstddef>

class NiObject;
class NiTimeController;
class NiExtraData;
class NiNode;
class NiCollisionObject;
class TESObjectREFR;
class NiProperty;
class NiSkinInstance;
class NiParticlesData;

// NiBinaryStream: STANDIN COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT); only the members the compared code reads
class NiBinaryStream
{
public:
    // ReadFn, WriteFn: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
    using ReadFn = std::uint32_t(NiBinaryStream* a_this, void* a_buffer, std::uint32_t a_bytes, std::uint32_t* a_componentSizes, std::uint32_t a_numComponents);
    using WriteFn = std::uint32_t(NiBinaryStream* a_this, const void* a_buffer, std::uint32_t a_bytes, std::uint32_t* a_componentSizes, std::uint32_t a_numComponents);

    virtual ~NiBinaryStream();  // 00

    // _absoluteCurrentPos, _readFn, _writeFn: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
    std::uint32_t _absoluteCurrentPos;  // 08
    // pad0C: GUESS(low)
    std::uint32_t pad0C;  // 0C
    ReadFn* _readFn;  // 10
    WriteFn* _writeFn;  // 18
};
static_assert(sizeof(NiBinaryStream) == 0x20, "NiBinaryStream size");

// BSStreamHeader: STANDIN COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
struct BSStreamHeader
{
    // version, author, processScript, exportScript, padC4: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
    std::uint32_t version;  // 00
    char author[64];  // 04
    char processScript[64];  // 44
    char exportScript[64];  // 84
    std::uint32_t padC4;  // C4
};
static_assert(sizeof(BSStreamHeader) == 0xC8, "BSStreamHeader size");

// NiStream: STANDIN COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT); the virtual slots up to SaveLinkID and a prefix view up to the two stream pointers, with the members before them at their community offsets
class NiStream
{
public:
    // ~NiStream, Load1, Load2, Load3, Save1, Save2, Save3, Unk_07, RegisterFixedString, RegisterSaveObject, ChangeObject, GetLinkIDFromObject, SaveLinkID: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT); declared only, parameters not modelled except SaveLinkID's
    virtual ~NiStream();  // 00
    virtual void Load1();  // 01
    virtual void Load2();  // 02
    virtual void Load3();  // 03
    virtual void Save1();  // 04
    virtual void Save2();  // 05
    virtual void Save3();  // 06
    virtual void Unk_07();  // 07
    virtual void RegisterFixedString();  // 08
    virtual void RegisterSaveObject();  // 09
    virtual void ChangeObject();  // 0A
    virtual void GetLinkIDFromObject();  // 0B
    virtual void SaveLinkID(const NiObject* a_object);  // 0C

    // SkipLinkIDs: GUESS(low); the stream helper the load path calls, declared only, bound by its public name
    void SkipLinkIDs();

    // header, nifMaxVersion, nifMaxUserDefinedVersion, inputFilePath, unk20C, unk20E, unk210: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT); sizes and offsets as declared there
    BSStreamHeader header;  // 008
    // unk0D0 to unk0F8, unk218 to unk290: GUESS(low); the community types these as containers, kept as plain words here
    std::uint64_t unk0D0;  // 0D0
    std::uint64_t unk0D8;  // 0D8
    std::uint64_t unk0E0;  // 0E0
    std::uint64_t unk0E8;  // 0E8
    std::uint64_t unk0F0;  // 0F0
    std::uint64_t unk0F8;  // 0F8
    std::uint32_t nifMaxVersion;  // 100
    std::uint32_t nifMaxUserDefinedVersion;  // 104
    char inputFilePath[260];  // 108
    std::uint16_t unk20C;  // 20C
    std::uint16_t unk20E;  // 20E
    std::uint64_t unk210;  // 210
    std::uint64_t unk218;  // 218
    std::uint64_t unk220;  // 220
    std::uint64_t unk228;  // 228
    std::uint64_t unk230;  // 230
    std::uint64_t unk238;  // 238
    std::uint64_t unk240;  // 240
    std::uint64_t unk248;  // 248
    std::uint64_t unk250;  // 250
    std::uint64_t unk258;  // 258
    std::uint64_t unk260;  // 260
    std::uint64_t unk268;  // 268
    std::uint64_t unk270;  // 270
    std::uint64_t unk278;  // 278
    std::uint64_t unk280;  // 280
    std::uint64_t unk288;  // 288
    std::uint64_t unk290;  // 290
    // iStr, oStr: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
    NiBinaryStream* iStr;  // 298
    NiBinaryStream* oStr;  // 2A0
};

// BSFixedString: STANDIN COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT); compared by its data pointer
class BSFixedString
{
public:
    // _data: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
    const char* _data;  // 0

    bool operator==(const BSFixedString& a_rhs) const { return _data == a_rhs._data; }
};

// NiObject: STANDIN COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT); the virtual slots up to IsEqual
class NiObject
{
public:
    virtual ~NiObject();  // 00
    // Unk_01..Unk_17: GUESS(low); slot placeholders, not used here
    virtual void Unk_01();
    virtual void Unk_02();
    virtual void Unk_03();
    virtual void Unk_04();
    virtual void Unk_05();
    virtual void Unk_06();
    virtual void Unk_07();
    virtual void Unk_08();
    virtual void Unk_09();
    virtual void Unk_0A();
    virtual void Unk_0B();
    virtual void Unk_0C();
    virtual void Unk_0D();
    virtual void Unk_0E();
    virtual void Unk_0F();
    virtual void Unk_10();
    virtual void Unk_11();
    virtual void Unk_12();
    virtual void Unk_13();
    virtual void Unk_14();
    virtual void Unk_15();
    virtual void Unk_16();
    virtual void Unk_17();
    // LoadBinary, LinkObject, RegisterStreamables, SaveBinary, IsEqual: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
    virtual void LoadBinary(NiStream& a_stream);  // 18
    virtual void LinkObject(NiStream& a_stream);  // 19
    virtual bool RegisterStreamables(NiStream& a_stream);  // 1A
    virtual void SaveBinary(NiStream& a_stream);  // 1B
    virtual bool IsEqual(NiObject* a_object);  // 1C

    // unk08: GUESS(low); the reference count, not used here
    std::uint32_t unk08;  // 08
    std::uint32_t pad0C;  // 0C
};
static_assert(sizeof(NiObject) == 0x10, "NiObject size");

// NiPSysModifier: STANDIN COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT); only the name the compared code reads
class NiPSysModifier : public NiObject
{
public:
    // name: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
    BSFixedString name;  // 10
};

// NiPointer: STANDIN COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT); the raw pointer only
template <class T>
class NiPointer
{
public:
    // _ptr: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
    T* _ptr;  // 0

    T* get() const { return _ptr; }
};

// NiTListItem: STANDIN COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
template <class T>
class NiTListItem
{
public:
    // next, prev, element: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
    NiTListItem* next;  // 00
    NiTListItem* prev;  // 08
    T element;  // 10
};

// NiTPointerList: STANDIN COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT); not a template here: the NiTPointerList<NiPointer<NiPSysModifier>> instance, with the NiTListBase members
class NiTPointerList
{
public:
    // NiTPointerList::~NiTPointerList: GUESS(low); the list destructor the compared destructor calls, declared only, bound by address
    ~NiTPointerList();

    // AntiBloatAllocator, size: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
    struct AntiBloatAllocator
    {
        std::uint32_t size;  // 0
    };

    // head, tail, allocator: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
    NiTListItem<NiPointer<NiPSysModifier>>* head;  // 00
    NiTListItem<NiPointer<NiPSysModifier>>* tail;  // 08
    AntiBloatAllocator allocator;  // 10
};
static_assert(sizeof(NiTPointerList) == 0x18, "NiTPointerList size");

// NiPoint3, NiMatrix3, NiBound: STANDIN COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT); x, y, z, entry, center, radius as declared there
class NiPoint3
{
public:
    float x;  // 0
    float y;  // 4
    float z;  // 8
};

class NiMatrix3
{
public:
    float entry[3][3];  // 00
};

class NiBound
{
public:
    NiPoint3 center;  // 00
    float radius;  // 0C
};
static_assert(sizeof(NiBound) == 0x10, "NiBound size");

// NiTransform: STANDIN COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
class NiTransform
{
public:
    // NiTransformHelper: GUESS(low); the member function the load path calls on the world transform, declared only, bound by address
    void NiTransformHelper();

    // rotate, translate, scale: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
    NiMatrix3 rotate;  // 00
    NiPoint3 translate;  // 24
    float scale;  // 30
};
static_assert(sizeof(NiTransform) == 0x34, "NiTransform size");

// NiUpdateData: STANDIN COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
class NiUpdateData
{
public:
    // time, flags: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT); flags is a plain word here
    float time;  // 0
    std::uint32_t flags;  // 4
};
static_assert(sizeof(NiUpdateData) == 0x8, "NiUpdateData size");

// BSGeometry: STANDIN COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT); the community 0x158 size, with the NiAVObject members the compared code reads
class BSGeometry : public NiObject
{
public:
    // SetSelectiveUpdateFlags, UpdateDownwardPass, UpdateSelectedDownwardPass: declared only; the compared passes tail-call the last two, bound by address
    virtual void SetSelectiveUpdateFlags(bool& a_selectiveUpdate, bool a_selectiveUpdateTransforms, bool& a_rigid);
    virtual void UpdateDownwardPass(NiUpdateData& a_data, std::uint32_t a_arg2);
    virtual void UpdateSelectedDownwardPass(NiUpdateData& a_data, std::uint32_t a_arg2);

    // name, controllers, extra, extraDataSize, maxSize, pad2C: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT); NiObjectNET members flattened into this class
    BSFixedString name;  // 010
    NiTimeController* controllers;  // 018
    NiExtraData** extra;  // 020
    std::uint16_t extraDataSize;  // 028
    std::uint16_t maxSize;  // 02A
    std::uint32_t pad2C;  // 02C
    // parent, parentIndex, unk03C, collisionObject, local, world, previousWorld, worldBound, flags,
    // userData, fadeAmount, lastUpdatedFrameCounter, unk108, flags02, unk10A, pad10C: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT); NiAVObject members flattened into this class
    NiNode* parent;  // 030
    std::uint32_t parentIndex;  // 038
    std::uint32_t unk03C;  // 03C
    NiCollisionObject* collisionObject;  // 040
    NiTransform local;  // 048
    NiTransform world;  // 07C
    NiTransform previousWorld;  // 0B0
    NiBound worldBound;  // 0E4
    std::uint32_t flags;  // 0F4
    TESObjectREFR* userData;  // 0F8
    float fadeAmount;  // 100
    std::uint32_t lastUpdatedFrameCounter;  // 104
    std::uint8_t unk108;  // 108
    std::uint8_t flags02;  // 109
    std::uint16_t unk10A;  // 10A
    std::uint32_t pad10C;  // 10C
    // modelBound, properties, skinInstance, rendererData, unk20, vertexDesc (a plain word here), type, pad31, pad32, pad34: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
    NiBound modelBound;  // 110
    NiProperty* properties[2];  // 120
    NiSkinInstance* skinInstance;  // 130
    void* rendererData;  // 138
    void* unk20;  // 140
    std::uint64_t vertexDesc;  // 148
    std::uint8_t type;  // 150
    std::uint8_t pad31;  // 151
    std::uint16_t pad32;  // 152
    std::uint32_t pad34;  // 154
};
static_assert(sizeof(BSGeometry) == 0x158, "BSGeometry size");

// NiParticles: STANDIN COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT); the community 0x168 size
class NiParticles : public BSGeometry
{
public:
    // Declared only; the emission constructor of NiParticleSystem calls it.
    NiParticles();
    // NiParticles::~NiParticles: declared only; the compared destructor calls it, bound by address
    ~NiParticles() override;
    // LoadBinary, RegisterStreamables, SaveBinary, IsEqual: declared only; the compared overrides call them directly, bound by address
    void LoadBinary(NiStream& a_stream) override;
    bool RegisterStreamables(NiStream& a_stream) override;
    void SaveBinary(NiStream& a_stream) override;
    bool IsEqual(NiObject* a_object) override;

    // particleData, unk160: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
    NiParticlesData* particleData;  // 158
    std::uint64_t unk160;  // 160
};
static_assert(sizeof(NiParticles) == 0x168, "NiParticles size");

class NiParticleSystem : public NiParticles
{
public:
    // Defined empty only to emit the vftable, not compared. The destructor is implicit; its scalar
    // deleting destructor is compared: 0xf9a140
    NiParticleSystem();
    void LoadBinary(NiStream& a_stream) override;  // compared: 0xf98f50
    bool RegisterStreamables(NiStream& a_stream) override;  // compared: 0xf99260
    void SaveBinary(NiStream& a_stream) override;  // compared: 0xf992c0
    bool IsEqual(NiObject* a_object) override;  // compared: 0xf99390
    void SetSelectiveUpdateFlags(bool& a_selectiveUpdate, bool a_selectiveUpdateTransforms, bool& a_rigid) override;  // compared: 0xf99ba0
    void UpdateDownwardPass(NiUpdateData& a_data, std::uint32_t a_arg2) override;  // compared: 0xf99a30
    void UpdateSelectedDownwardPass(NiUpdateData& a_data, std::uint32_t a_arg2) override;  // compared: 0xf99aa0

    // Unk_20..Unk_38, DispatchSlot39: GUESS(low); virtual slot placeholders up to the image's slot 0x39,
    // which the forwarding method dispatches through.
    virtual void Unk_20();
    virtual void Unk_21();
    virtual void Unk_22();
    virtual void Unk_23();
    virtual void Unk_24();
    virtual void Unk_25();
    virtual void Unk_26();
    virtual void Unk_27();
    virtual void Unk_28();
    virtual void Unk_29();
    virtual void Unk_2A();
    virtual void Unk_2B();
    virtual void Unk_2C();
    virtual void Unk_2D();
    virtual void Unk_2E();
    virtual void Unk_2F();
    virtual void Unk_30();
    virtual void Unk_31();
    virtual void Unk_32();
    virtual void Unk_33();
    virtual void Unk_34();
    virtual void Unk_35();
    virtual void Unk_36();
    virtual void Unk_37();
    virtual void Unk_38();
    virtual void DispatchSlot39();
    // Functionf99500: GUESS(low); forwards through virtual slot 0x39.
    void Functionf99500();

    // UpdateSystemForPass: GUESS(low); the helper both update passes call, declared only, bound by address
    void UpdateSystemForPass(NiUpdateData& a_data);
    // GetModifierByName: GUESS(low); the lookup IsEqual makes in the other system
    NiPSysModifier* GetModifierByName(const BSFixedString& a_name);

    // modifierList, unk180, unk184, unk188, lastUpdate, resetSystem, dynamicBounds, isWorldspace: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
    NiTPointerList modifierList;  // 168
    float unk180;  // 180
    float unk184;  // 184
    float unk188;  // 188
    float lastUpdate;  // 18C
    bool resetSystem;  // 190
    bool dynamicBounds;  // 191
    bool isWorldspace;  // 192
    // pad193, pad194: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
    std::uint8_t pad193;  // 193
    std::uint32_t pad194;  // 194
};
static_assert(sizeof(NiParticleSystem) == 0x198, "NiParticleSystem size");
