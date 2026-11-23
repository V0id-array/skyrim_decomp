// Source exposure: mixed
// 0x267460 compared function
// 0x267450 compared function
// BGSTalkingActivator, TESObjectACTI: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e832f263dbef44e44cbe2936622a02f91a, MIT); declarations adapted from include/RE/T/TESObjectACTI.h, include/RE/T/TESBoundObject.h, include/RE/T/TESForm.h and public component headers.
// Function267450: GUESS(low)
// names: GUESS(low); names and original signatures are tentative.
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
#pragma once
class BGSSaveFormBuffer;
class Component { public: virtual ~Component(); };
class TESForm : public Component { public: void* files; unsigned formFlags, id; unsigned short inGameFlags; unsigned char type, pad; unsigned pad2; void Revert(void*); };
struct ShortPoint { short x,y,z; };
class TESBoundObject : public TESForm { public: ShortPoint min, max; unsigned pad; };
class TESBoundAnimObject : public TESBoundObject {};
class TESFullName : public Component { public: const char* name; };
class TESModel : public Component { public: const char* model; void* textures; unsigned* addons; unsigned short numTextures, numAddons; unsigned pad; };
class TESModelTextureSwap : public TESModel { public: void* alternateTextures; unsigned count, pad; };
class TESMagicTargetForm {};
class BGSDestructibleObjectForm : public Component { public: void* data; };
class BGSOpenCloseForm { public: virtual ~BGSOpenCloseForm(); };
class BGSKeywordForm : public Component { public: void** keywords; unsigned count; };
class TESObjectACTI : public TESBoundAnimObject, public TESFullName, public TESModelTextureSwap, public TESMagicTargetForm, public BGSDestructibleObjectForm, public BGSOpenCloseForm, public BGSKeywordForm { public: void* soundLoop; void* soundActivate; void* waterForm; unsigned short flags, padc2; unsigned padc4; void ClearData(); virtual void InitializeData(); void SaveGame(BGSSaveFormBuffer*); };
template<class T> struct Array { T* data; unsigned capacity, allocatorPad, size, sizePad; void Deallocate(); void Clear() { if (data) Deallocate(); size = 0; } };
#pragma pack(push, 1)
class BGSSaveFormBuffer { public: virtual ~BGSSaveFormBuffer(); char padding[0x13]; unsigned flagsRaw; };
#pragma pack(pop)
class BGSLoadGameBuffer { public: virtual ~BGSLoadGameBuffer(); void* buffer; unsigned long long unknown10; unsigned unknown18, unknown1c, unknown20, bufferPosition; }; struct BGSLoadFormData { unsigned formID, size, uncompressedSize, pad; TESForm* form; unsigned changeFlags, oldChangeFlags, flags; unsigned char pad22, version; }; class BGSLoadFormBuffer : public BGSLoadGameBuffer, public BGSLoadFormData {};
// BGSTalkingActivator::GetObjectVoiceType: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e832f263dbef44e44cbe2936622a02f91a, MIT); signature as declared on TESBoundObject
// BGSTalkingActivator::InitializeData, TESObjectACTI::InitializeData: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e832f263dbef44e44cbe2936622a02f91a, MIT); target 0x279750 for the base call
// BGSTalkingActivator::SetObjectVoiceType: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e832f263dbef44e44cbe2936622a02f91a, MIT); signature as declared on TESBoundObject
// voiceType: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e832f263dbef44e44cbe2936622a02f91a, MIT); member read at offset 0xD0 in this unit's stand-in layout
class BGSVoiceType;
class BGSTalkingActivator : public TESObjectACTI { public: void InitializeData() override; virtual void SetObjectVoiceType(BGSVoiceType*); virtual BGSVoiceType* GetObjectVoiceType() const; void* tempRef; BGSVoiceType* voiceType; void Revert(BGSLoadFormBuffer*); const void* Function267450() const; void SaveGame(BGSSaveFormBuffer*); };
