// Source exposure: mixed (local binary analysis and public names).
// 0x321c28 compared function
// Origin: {"generator_family":"member-return","generator_version":"2","name_source":{"confidence":"medium","kind":"public","repository":"meh321/AddressLibraryDatabase","revision":"0379cb6fdaa0d68e69ef9ad1a2d39caa6611ac91","source":"meh321"},"template_digest":"1254832e5ca7cdca7f6330a2018dde32919625f6149744dd0138e59a943106d8"}
// Adapted bodies: none. Body synthesized from the bounded leaf template.
// TESModel: EXE_RTTI
// GetModel: COMMUNITY(meh321/AddressLibraryDatabase@0379cb6, permission)
// member, padding: GUESS(low); storage names invented for the measured member offset
#pragma once
#include <cstdint>
// GetModel: COMMUNITY(meh321/AddressLibraryDatabase@0379cb6, permission)
class TESModelTextureSwap;

// TESModel::GetAsModelTextureSwap: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT); compared at RVA 0x1dfd80
// PrimaryBase, SecondaryBase: GUESS(low) STANDIN; base set that puts the secondary base at offset 0x20.
class PrimaryBase
{
public:
    virtual ~PrimaryBase();
    std::uint8_t pad[0x18];  // 08
};
static_assert(sizeof(PrimaryBase) == 0x20, "primary base size");

class SecondaryBase
{
public:
    virtual ~SecondaryBase();
};

class TESModel : public PrimaryBase, public SecondaryBase
{
public:
    TESModel();
    ~TESModel() override;  // 00, compared: 0x321c28 (secondary-base deleting destructor thunk)
    virtual void* GetModel() const;
    virtual TESModelTextureSwap* GetAsModelTextureSwap();  // compared: 0x1dfd80
    void* member;
};
