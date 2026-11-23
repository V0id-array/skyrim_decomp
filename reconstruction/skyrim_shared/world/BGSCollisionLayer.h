// Source exposure: mixed
// 0x31aa50 compared function
// Origin: independently decoded target, anonymous sibling and public declarations.
// BGSCollisionLayer::ClearData: SIBLING(fo4-private@1b765c70, author-permission); adapted to target observations.
// Sibling source: fo4-private@1b765c70 src/Shared/TESForms/Gameplay/BGSCollisionLayer.cpp:143
// BGSCollisionLayer: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e832f263dbef44e44cbe2936622a02f91a, MIT); declarations adapted from include/RE/B/BGSCollisionLayer.h, include/RE/T/TESForm.h, include/RE/T/TESDescription.h and include/RE/B/BSTArray.h.
// names: GUESS(low); names and original signatures are tentative.
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
#pragma once
#include <cstdint>
class Component { public: virtual ~Component(); };
class TESForm : public Component { public: void* files; unsigned formFlags, id; unsigned short inGameFlags; unsigned char type, pad; unsigned pad2; };
class TESDescription : public Component { public: unsigned fileOffset, localizedText; };
template<class T> struct Array { T* data; unsigned capacity, allocatorPad, size, sizePad; void Deallocate(); void Clear() { if (data) { Deallocate(); size = 0; } } };
class BGSCollisionLayer : public TESForm, public TESDescription { public: unsigned collisionIdx, debugColor, flags, pad; const char* name; Array<BGSCollisionLayer*> collidesWith; void ClearData(); std::uint64_t GetCollidesWithMask(); };
