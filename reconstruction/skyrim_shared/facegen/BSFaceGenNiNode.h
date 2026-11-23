// Source exposure: mixed
// 0x43d080 compared function
// 0x43a4c0 compared function
// Origin: independently decoded target and anonymous sibling; declarations adapted from community headers.
// Declarations: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e832f263dbef44e44cbe2936622a02f91a, MIT); adapted from include/RE/B/BSFaceGenNiNode.h, include/RE/N/NiNode.h, include/RE/N/NiAVObject.h, include/RE/N/NiObjectNET.h, include/RE/N/NiRefObject.h, include/RE/N/NiTArray.h, include/RE/N/NiTransform.h and include/RE/N/NiBound.h.
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// names: GUESS(low); signatures and helper identities require review.
#pragma once
struct NiPoint3 { float x,y,z; }; struct NiMatrix3 { float entry[3][3]; }; struct NiTransform { NiMatrix3 rotate; NiPoint3 translate; float scale; }; struct NiBound { NiPoint3 center; float radius; };
class NiTimeController; class NiExtraData; class NiCollisionObject; class TESObjectREFR; class NiUpdateData; class NiNode;
class NiRefObject { public: virtual ~NiRefObject(); unsigned refCount; };
class NiObject : public NiRefObject {};
class NiObjectNET : public NiObject { public: const char* name; NiTimeController* controllers; NiExtraData** extra; unsigned short extraDataSize, maxSize; unsigned pad; };
class NiAVObject : public NiObjectNET { public: NiNode* parent; unsigned parentIndex, unknown; NiCollisionObject* collision; NiTransform local, world, previousWorld; NiBound worldBound; unsigned flags; TESObjectREFR* userData; float fadeAmount; unsigned lastUpdatedFrameCounter; unsigned char unknown108, flags02; unsigned short unknown10A; unsigned pad10C; };
template<class T> class NiTObjectArray { public: virtual ~NiTObjectArray(); T* data; unsigned short capacity, freeIndex, size, growthSize; };
class NiNode : public NiAVObject { public: void UpdateDownwardPass(NiUpdateData&, unsigned); NiTObjectArray<NiAVObject*> children; };
class BSFaceGenNiNode : public NiNode { public: void UpdateMorphing(NiUpdateData&); void UpdateDownwardPass(NiUpdateData&, unsigned); void Function43d080(); void Function43a4c0(); void FaceGenStateHelper(bool* a_state); void FaceGenStateHelperA(bool* a_state); };
