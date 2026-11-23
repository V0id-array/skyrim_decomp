// Source exposure: mixed (community headers and pinned-image analysis).
// 0x261310 compared function
// 0x2612d0 compared function
// 0x261290 compared function
// Drafted by gpt-6.1-sol, Engineer p105 box3. Adapted bodies: none.
// Code origin: original; the listing and community declarations only
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// BGSExplosion: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT) EXE_RTTI
// BGSExplosion::UnClone3D, TESObject::UnClone3D: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT); bodies written from the listing
// TestBit: GUESS(low); a flag-word bit test by bit index, taking the word by value
// Explosion, Explosion::Flags, kNone, kIgnoreImageSpaceSwap, kInWater, unk98, startKeyTime, endKeyTime, hitKeyTime, radius, imodRadius, unkB4, unkB8, unkC0, unkC8, sound01, sound02, light, actorOwner, unkF4, unkF8, actorCause, magicCaster, weaponSource, unk118, unk11C, negativeVelocity, damage, unk138, flags: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT); NG lays the members out from 0x98 with flags at 0x13C, the pinned image has them 8 bytes higher with flags at 0x144
// TESObjectREFR: STANDIN COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT); no member of it is read here
// BSSoundHandle, soundID, assumeSuccess, state: STANDIN COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT); only the layout is declared
// NiPoint3, NiPointLight, bhkSimpleShapePhantom, ActorCause, NonActorMagicCaster, TESObjectWEAP: STANDIN COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT); only the layout of the members is declared
// unknown20 to unknown98, unknown05, unknown06, unknownFC: GUESS(low); unresolved words at their offsets
#pragma once
#include <cstdint>
#include <cstddef>
// Type declarations for the TESForm unit (build sse-steam-1-7-104).
//
// Labels: v2
// Source exposure: mixed (binary-analysis of the pinned image, community-headers).
// Names and member offsets follow CharmedBaryon/CommonLibSSE-NG
// b93280e832f263dbef44e44cbe2936622a02f91a (MIT) and meh321/AddressLibraryDatabase 0379cb6
// (used with the author's permission as reported by the maintainer).
// Adapted bodies: none declared; tools/check_origin.py reports none above its threshold (0.75)
// at CommonLibSSE-NG b93280e, powerof3/CommonLibSSE 654e55f and momusdigital/fnv_decomp 91e1b6e8.
// TESForm::ClearData's empty body necessarily coincides with the FNV decompilation's.
// Every class other than TESForm and
// BaseFormComponent is a minimal stand-in that declares only the members and virtual slots the
// compared code needs; the layouts of the stand-ins are not claimed to match the game.
// BaseFormComponent, TESForm, TESForm::ClearData, ::SaveGame, ::LoadGame, ::CopyComponent, ::GetGoldValue: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// TESForm::InitializeData, ::AsReference2, ::SetAltered: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT); the other slot names 04 to 3A follow the NG header too and only the slot order matters here
// TESForm::sourceFiles, ::formFlags, ::formID, ::inGameFormFlags, ::formType, ::pad1B, ::pad1C: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// TESForm::RecordFlags, ::ChangeFlags, kAltered, kPersistent, kTemporary, kFlags: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// TESForm::InGameFormFlag: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// TESForm::IsPersistent, ::IsTemporaryFormID, ::GetEnchantment: COMMUNITY(meh321/AddressLibraryDatabase@0379cb6, permission); NG declares IsPersistent only on TESObjectREFR
// TESForm::GetGoldValue: COMMUNITY(meh321/AddressLibraryDatabase@0379cb6, permission); id 14978 names this address; NG declares the name but implements it itself
// TESFileContainer, TESFileArray: STANDIN COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT); the array layout (data, size) is read from the listings
// TESFile: STANDIN COMMUNITY(meh321/AddressLibraryDatabase@0379cb6, permission)
// TESDataHandler, TESDataHandler::IsTemporaryFormID: STANDIN COMMUNITY(meh321/AddressLibraryDatabase@0379cb6, permission)
// TESDataHandler::singleton: GUESS(low); the global pointer (image offset 0x219ded8), which NG reads through GetSingleton
// ExtraDataList, ExtraDataList::GetEnchantment: STANDIN COMMUNITY(meh321/AddressLibraryDatabase@0379cb6, permission)
// EnchantmentItem, TESEnchantableForm, TESEnchantableForm::formEnchanting, TESValueForm, TESValueForm::value, MagicItem, MagicItem::CalculateCost, AlchemyItem: STANDIN COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// TESEnchantableForm, TESValueForm, MagicItem, AlchemyItem: EXE_RTTI; the names of the type descriptors the casts use, read from the image RTTI
// BGSSaveGameBuffer, BGSSaveFormBuffer, BGSSaveGameBuffer::SaveDataEndian, BGSSaveFormBuffer::unk18: STANDIN COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT) OBSERVED; SaveDataEndian takes more parameters than NG declares
// BGSSaveFormBuffer::unk1B: GUESS(low); a byte at offset 0x1B whose bit 0 SaveGame tests; NG declares the region only as unk18
// BGSLoadGameBuffer, BGSLoadFormBuffer, BGSLoadGameBuffer::LoadDataEndian, BGSLoadFormData::changeFlags: STANDIN COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
#pragma once

#include <cstdint>

enum class FormType : std::uint8_t {
    None = 0
};

using FormID = std::uint32_t;

class BSFixedString;
class TESObjectREFR;
class TESBoundObject;
class FORM;
class FORM_GROUP;
class BGSSaveFormBuffer;
class BGSLoadFormBuffer;
class EnchantmentItem;

inline bool TestBit(std::uint32_t a_flags, std::uint32_t a_bit) { return ((a_flags >> a_bit) & 1) != 0; }

class BaseFormComponent {
public:
    virtual ~BaseFormComponent();                            // 00
    virtual void InitializeDataComponent() = 0;              // 01
    virtual void ClearDataComponent() = 0;                   // 02
    virtual void CopyComponent(BaseFormComponent* a_rhs);    // 03
};


class Actor;
class TESFile;

struct TESFileArray {
    TESFile**     data;  // 00
    std::uint32_t size;  // 08
};

class TESFileContainer {
public:
    TESFileArray* array;  // 0
};

class ExtraDataList {
public:
    EnchantmentItem* GetEnchantment();
};

class TESForm : public BaseFormComponent {
public:
    struct ChangeFlags {
        enum ChangeFlag : std::uint32_t {
            kCreated = 0,
            kFlags   = 1 << 0
        };
    };

    struct RecordFlags {
        enum RecordFlag : std::uint32_t {
            kAltered    = 1 << 1,
            kPersistent = 1 << 10,
            kTemporary  = 1 << 14
        };
    };

    enum class InGameFormFlag : std::uint16_t {
        kNone = 0
    };

    ~TESForm() override;                                    // 00
    void InitializeDataComponent() override;                // 01
    void ClearDataComponent() override;                     // 02
    void CopyComponent(BaseFormComponent* a_rhs) override;  // 03

    virtual void                       InitializeData();                                       // 04
    virtual void                       ClearData();                                            // 05
    virtual bool                       Load(TESFile* a_mod);                                   // 06
    virtual bool                       LoadPartial(TESFile* a_mod);                            // 07
    virtual bool                       LoadEdit(TESFile* a_mod);                               // 08
    virtual TESForm*                   CreateDuplicateForm(bool a_createEditorID, void* a_arg2);  // 09
    virtual bool                       AddChange(std::uint32_t a_changeFlags);                 // 0A
    virtual void                       RemoveChange(std::uint32_t a_changeFlags);              // 0B
    virtual bool                       FindInFileFast(TESFile* a_mod);                         // 0C
    virtual bool                       CheckSaveGame(BGSSaveFormBuffer* a_buf);                // 0D
    virtual void                       SaveGame(BGSSaveFormBuffer* a_buf);                     // 0E
    virtual void                       LoadGame(BGSLoadFormBuffer* a_buf);                     // 0F
    virtual void                       InitLoadGame(BGSLoadFormBuffer* a_buf);                 // 10
    virtual void                       FinishLoadGame(BGSLoadFormBuffer* a_buf);               // 11
    virtual void                       Revert(BGSLoadFormBuffer* a_buf);                       // 12
    virtual void                       InitItemImpl();                                         // 13
    virtual TESFile*                   GetDescriptionOwnerFile() const;                        // 14
    virtual FormType                   GetSavedFormType() const;                               // 15
    virtual void                       GetFormDetailedString(char* a_buf, std::uint32_t a_bufLen);  // 16
    virtual bool                       GetKnown() const;                                       // 17
    virtual bool                       GetRandomAnim() const;                                  // 18
    virtual bool                       GetPlayable() const;                                    // 19
    virtual bool                       IsHeadingMarker() const;                                // 1A
    virtual bool                       GetDangerous() const;                                   // 1B
    virtual bool                       QHasCurrents() const;                                   // 1C
    virtual bool                       GetObstacle() const;                                    // 1D
    virtual bool                       QIsLODLandObject() const;                               // 1E
    virtual bool                       GetOnLocalMap() const;                                  // 1F
    virtual bool                       GetMustUpdate() const;                                  // 20
    virtual void                       SetOnLocalMap(bool a_set);                              // 21
    virtual bool                       GetIgnoredBySandbox() const;                            // 22
    virtual void                       SetDelete(bool a_set);                                  // 23
    virtual void                       SetAltered(bool a_set);                                 // 24
    virtual void                       SaveObjectBound();                                      // 25
    virtual void                       LoadObjectBound(TESFile* a_mod);                        // 26
    virtual bool                       IsBoundObject() const;                                  // 27
    virtual bool                       IsObject() const;                                       // 28
    virtual bool                       IsMagicItem() const;                                    // 29
    virtual bool                       IsWater() const;                                        // 2A
    virtual TESObjectREFR*             AsReference1();                                         // 2B
    virtual const TESObjectREFR*       AsReference2() const;                                   // 2C
    virtual std::uint32_t              GetRefCount() const;                                    // 2D
    virtual const char*                GetTextForParsedSubTag(const BSFixedString& a_tag) const;  // 2E
    virtual void                       Copy(TESForm* a_srcForm);                               // 2F
    virtual bool                       BelongsInGroup(FORM* a_form, bool a_allowParentGroups, bool a_currentOnly);  // 30
    virtual void                       CreateGroupData(FORM* a_form, FORM_GROUP* a_group);     // 31
    virtual const char*                GetFormEditorID() const;                                // 32
    virtual bool                       SetFormEditorID(const char* a_str);                     // 33
    virtual bool                       IsParentForm();                                         // 34
    virtual bool                       IsParentFormTree();                                     // 35
    virtual bool                       IsFormTypeChild(FormType a_type);                       // 36
    virtual bool                       Activate(TESObjectREFR* a_targetRef, TESObjectREFR* a_activatorRef, std::uint8_t a_arg3, TESBoundObject* a_object, std::int32_t a_targetCount);  // 37
    virtual void                       SetFormID(FormID a_id, bool a_updateFile);              // 38
    virtual const char*                GetObjectTypeName() const;                              // 39
    virtual bool                       QAvailableInGame() const;                               // 3A

    std::int32_t     GetGoldValue() const;
    EnchantmentItem* GetEnchantment(ExtraDataList* a_extraList);
    bool             IsPersistent() const;
    bool             IsTemporaryFormID() const;

    // members
    TESFileContainer sourceFiles;      // 08
    std::uint32_t    formFlags;        // 10
    FormID           formID;           // 14
    std::uint16_t    inGameFormFlags;  // 18
    FormType         formType;         // 1A
    std::uint8_t     pad1B;            // 1B
    std::uint32_t    pad1C;            // 1C
};
static_assert(sizeof(TESForm) == 0x20, "layout");



class MagicItem : public TESForm {
public:
    float CalculateCost(Actor* a_caster) const;
};

class AlchemyItem : public MagicItem {
};

class BGSSaveGameBuffer {
public:
    virtual ~BGSSaveGameBuffer();  // 00

    void SaveDataEndian(const void* a_data, std::uint32_t a_size, std::uint32_t a_count, std::uint32_t a_arg4);

    void*         buffer;          // 08
    std::uint32_t size;            // 10
    std::uint32_t bufferPosition;  // 14
};

class BGSSaveFormBuffer : public BGSSaveGameBuffer {
public:
    std::uint8_t  unk18[3];  // 18
    std::uint8_t  unk1B;     // 1B, bit 0 tested by SaveGame (seen in the listing)
    std::uint32_t unk1C;     // 1C
    std::uint64_t unk20;  // 20
    TESForm*      form;   // 28
};

class BGSLoadGameBuffer {
public:
    virtual ~BGSLoadGameBuffer();  // 00

    void LoadDataEndian(void* a_data, std::uint32_t a_offset, std::uint32_t a_size);

    void*         buffer;          // 08
    std::uint64_t unk10;           // 10
    std::uint32_t unk18;           // 18
    std::uint32_t unk1C;           // 1C
    std::uint32_t unk20;           // 20
    std::uint32_t bufferPosition;  // 24
};

class BGSLoadFormBuffer : public BGSLoadGameBuffer {
public:
    FormID        formID;            // 28
    std::uint32_t size;              // 2C
    std::uint32_t uncompressedSize;  // 30
    std::uint32_t pad34;             // 34
    TESForm*      form;              // 38
    std::uint32_t changeFlags;       // 40
    std::uint32_t oldChangeFlags;    // 44
};

class TESDataHandler {
public:
    bool IsTemporaryFormID(FormID a_formID);

    static TESDataHandler* singleton;
};

inline BaseFormComponent::~BaseFormComponent() {}
class BSFixedString { public: BSFixedString(); ~BSFixedString(); const char* value; };
class TESFullName : public BaseFormComponent { public: ~TESFullName() override {} void InitializeDataComponent() override; void ClearDataComponent() override; void CopyComponent(BaseFormComponent*) override; virtual std::uint32_t GetFullNameLength() const; virtual const char* GetFullName() const; BSFixedString fullName; };
class TESModel : public BaseFormComponent { public: ~TESModel() override; void InitializeDataComponent() override; void ClearDataComponent() override; void CopyComponent(BaseFormComponent*) override; virtual const char* GetModel() const; virtual void SetModel(const char*); virtual void* GetAsModelTextureSwap(); BSFixedString model; void* textures; std::uint32_t* addons; std::uint16_t numTextures,numAddons; };
class TESObject : public TESForm { public: virtual void UnClone3D(TESObjectREFR* a_ref); };

class TESObjectREFR : public TESForm {
public:
    std::uint64_t unknown20;  // 20
    std::uint64_t unknown28;  // 28
    std::uint64_t unknown30;  // 30
    std::uint64_t unknown38;  // 38
    std::uint64_t unknown40;  // 40
    std::uint64_t unknown48;  // 48
    std::uint64_t unknown50;  // 50
    std::uint64_t unknown58;  // 58
    std::uint64_t unknown60;  // 60
    std::uint64_t unknown68;  // 68
    std::uint64_t unknown70;  // 70
    std::uint64_t unknown78;  // 78
    std::uint64_t unknown80;  // 80
    std::uint64_t unknown88;  // 88
    std::uint64_t unknown90;  // 90
    std::uint64_t unknown98;  // 98
};
static_assert(sizeof(TESObjectREFR) == 0xA0, "TESObjectREFR stand-in size");

struct BSSoundHandle {
    std::uint32_t soundID;         // 00
    bool          assumeSuccess;   // 04
    std::uint8_t  unknown05;       // 05
    std::uint16_t unknown06;       // 06
    std::uint32_t state;           // 08
};
static_assert(sizeof(BSSoundHandle) == 0xC, "sound handle size");

struct NiPoint3 { float x, y, z; };

class NiPointLight;
class bhkSimpleShapePhantom;
class ActorCause;
class NonActorMagicCaster;
class TESObjectWEAP;

class Explosion : public TESObjectREFR {
public:
    enum class Flags : std::uint32_t {
        kNone = 0,
        kIgnoreImageSpaceSwap = 1 << 4,
        kInWater = 1 << 5
    };

    std::uint64_t          unk98;             // A0
    float                  startKeyTime;      // A8
    float                  endKeyTime;        // AC
    float                  hitKeyTime;        // B0
    float                  radius;            // B4
    float                  imodRadius;        // B8
    float                  unkB4;             // BC
    bhkSimpleShapePhantom* unkB8;             // C0
    std::uint64_t          unkC0;             // C8
    std::uint64_t          unkC8;             // D0
    BSSoundHandle          sound01;           // D8
    BSSoundHandle          sound02;           // E4
    NiPointLight*          light;             // F0
    std::uint32_t          actorOwner;        // F8
    std::uint32_t          unkF4;             // FC
    std::uint32_t          unkF8;             // 100
    std::uint32_t          unknownFC;         // 104
    ActorCause*            actorCause;        // 108
    NonActorMagicCaster*   magicCaster;       // 110
    TESObjectWEAP*         weaponSource;      // 118
    std::uint32_t          unk118;            // 120
    NiPoint3               unk11C;            // 124
    NiPoint3               negativeVelocity;  // 130
    float                  damage;            // 13C
    float                  unk138;            // 140
    Flags                  flags;             // 144
};
static_assert(offsetof(Explosion, flags) == 0x144, "Explosion::flags offset");
class TESBoundObject : public TESObject { public: virtual ~TESBoundObject(); std::int16_t boundMin[3],boundMax[3]; };
class BGSPreloadable : public BaseFormComponent { public:  void InitializeDataComponent() override; void ClearDataComponent() override; void CopyComponent(BaseFormComponent*) override; virtual void Preload(); };
class TESImageSpaceModifiableForm : public BaseFormComponent { public:  void InitializeDataComponent() override; void ClearDataComponent() override; void CopyComponent(BaseFormComponent*) override; void* imageSpaceModifier; };
class TESEnchantableForm : public BaseFormComponent { public:  void InitializeDataComponent() override; void ClearDataComponent() override; void CopyComponent(BaseFormComponent*) override; void* formEnchanting; std::uint16_t castingType,amountofEnchantment; };
struct BGSExplosionData { void* light; void* sound1; void* sound2; void* impactDataSet; void* impactPlacedObject; void* spawnProjectile; float force,damage,radius,imageSpaceRadius,verticalOffsetMult; std::uint32_t flags,soundLevel; };
// BGSExplosion::Function261310: GUESS(low); loads the sound level and tail-calls GetSoundLevelValue
class BGSExplosion : public TESBoundObject, public TESFullName, public TESModel, public TESEnchantableForm, public BGSPreloadable, public TESImageSpaceModifiableForm { public: BGSExplosion(); ~BGSExplosion() override; void InitializeData() override; void UnClone3D(TESObjectREFR* a_ref); int Function261310(); float Function261290() const; float Function2612d0() const; BGSExplosionData data; }; static_assert(sizeof(BGSExplosion)==0xE8,"explosion size");
// GetSoundLevelValue: GUESS(low); RVA 0x41d3f0, consumes the sound level dword.
int GetSoundLevelValue(std::uint32_t a_soundLevel);
// gExplosionScale: GUESS(low); a .rdata float the two radius getters multiply by.
extern const float gExplosionScale;

