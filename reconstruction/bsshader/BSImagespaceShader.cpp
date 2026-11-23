// Source exposure: mixed (community headers; the pinned image listing).
// 0x1541210 compared function
// 0x15411e0 compared function
// 0x15410e0 compared function
// 0x15410b0 compared function
// 0x1540fa0 compared function
// 0x150ac20 compared function
// Code origin: original; the listing and community declarations only
// SPDX-License-Identifier: CC0-1.0
// 0x1541630 BSImagespaceShader::Function1541630
// Adapted bodies: none
// Source exposure: mixed (names and declarations from community headers; the listing of the pinned
// image).
// Code origin: bodies written from the local listings; names and declarations follow CommonLibSSE-NG.
// Declarations derived from powerof3/CommonLibSSE are GPL-3.0 (its licence).
// Adapted bodies: none
#include "BSImagespaceShader.h"

// Compared leaves: GUESS(low); the bodies populate a stand-in holder and return it.
void* Function1540fa0(void* a_dst, void* a_value)
{
    ImagespaceHolder* h = reinterpret_cast<ImagespaceHolder*>(a_dst);
    h->pointer = a_value;
    void* result = a_dst;
    h->byte = 0;
    return result;
}

void Function15410b0(ImagespaceHolder* a_holder)
{
    ImagespaceHolder* inner = reinterpret_cast<ImagespaceHolder*>(a_holder->pointer);
    void** vtable = *reinterpret_cast<void***>(inner);
    auto fn = reinterpret_cast<void(__fastcall*)(ImagespaceHolder*, void*)>(vtable[9]);
    fn(inner, nullptr);
}

void* Function15410e0(void* a_dst, void* a_value)
{
    ImagespaceHolder* h = reinterpret_cast<ImagespaceHolder*>(a_dst);
    h->pointer = a_value;
    void* result = a_dst;
    h->byte = 1;
    *reinterpret_cast<std::uint64_t*>(reinterpret_cast<char*>(a_dst) + 0xC) = static_cast<std::uint64_t>(-1);
    return result;
}

void Function15411e0(ImagespaceHolder* a_holder)
{
    Function15410b0(a_holder);
}

void* Function1541210(void* a_dst, void* a_a, void* a_b, void* a_c)
{
    ImagespaceHolderWide* h = reinterpret_cast<ImagespaceHolderWide*>(a_dst);
    h->pointer = a_a;
    void* result = a_dst;
    h->pointer8 = a_b;
    h->pointer10 = a_c;
    h->dword18 = 0;
    return result;
}

BSImagespaceShader* Function1541630Impl(void* a_dst, void* a_a, void* a_b)
{
    ImagespaceHolderFlag* h = reinterpret_cast<ImagespaceHolderFlag*>(a_dst);
    h->pointer = a_a;
    BSImagespaceShader* result = reinterpret_cast<BSImagespaceShader*>(a_dst);
    h->pointer8 = a_b;
    h->flag10 = 1;
    return result;
}

// RVA 0x150b490, 3 bytes: an empty slot body.
void BSImagespaceShader::Unk_0B()
{
}

// RVA 0x150b510, 3 bytes: an empty slot body.
void BSImagespaceShader::Unk_0A()
{
}

// RVA 0x15651e0, 13 bytes: the out-pointer is zeroed in place and returned unchanged.
std::uint64_t* BSImagespaceShader::Unk_0D(std::uint64_t* a_out)
{
    *a_out = 0;
    a_out[1] = 0;
    return a_out;
}

// RVA 0x1564df0, 46 bytes: the reset result stays in AL on the early return.
bool BSImagespaceShader::RestoreRenderStates(ImageSpaceEffectParam* a_param)
{
    bool result = ResetRenderStates();
    if (!m_statesDirty) {
        return result;
    }
    return ApplyRenderStates(m_renderState);
}

// RVA 0x1564d90, 79 bytes: no result is returned, so the index stays in the register the call needs.
void BSImagespaceShader::UpdateParams(ImageSpaceEffectParam* a_param)
{
    for (std::uint32_t i = 0; i < m_slotCount; ++i) {
        ImageSpaceSlot* slot = m_slots[i + 1];
        if (slot) {
            SetSlotIndex(slot, i);
        }
    }
}

// RVA 0x1565170, 100 bytes: the last call is a tail jump with a constant true.
void BSImagespaceShader::Unk_0C(std::uint32_t a_x, std::uint32_t a_y, std::uint32_t a_z)
{
    Unk_0A();
    m_renderState->Apply(0, a_x, a_y, a_z);
    Unk_0B();
    FinalizeCommit(true);
}

// RVA 0x1564a00, 117 bytes: shadow-state globals, then a tail call on each path.
void BSImagespaceShader::ShutDown()
{
    if (g_shadowDirtyB) {
        g_shadowFlags |= 0x100;
        g_shadowDirtyB = false;
    }
    if (g_shadowSlotB != 1) {
        g_shadowFlags |= 0x80;
        g_shadowSlotB = 1;
    }
    if (g_shadowModeA != 3) {
        g_shadowModeA = 3;
        if (g_shadowModeB != 3) {
            g_shadowFlags |= 4;
            ApplyShadowState();
            return;
        }
        g_shadowFlags &= ~0x4u;
    }
    ApplyShadowState();
}

// RVA 0x1540db0, 259 bytes: the first qword of the request is the target object.
std::uint32_t BSImagespaceShader::DispatchCopySubRegion(CopySubRegionRequest* a_request)
{
    if (a_request->mode == 0) {
        g_renderer.SetFlagA(0, a_request->value18);
        g_renderer.SetFlagB(0, a_request->value10);
    } else if (a_request->mode == 1) {
        g_renderer.SetFlagC(0, a_request->value3C);
        g_renderer.SetFlagD(0, a_request->value38);
    } else if (a_request->mode == 2) {
        g_renderer.SetFlagE(0, a_request->value34);
        g_renderer.SetFlagF(0, a_request->value30);
    }
    g_renderer.CopyBytes(&a_request->rect, 0x20);
    CopySubRegionToTarget(a_request->target, &a_request->rect);
    a_request->target->Dispatch((a_request->rect.width + 7) >> 3, (a_request->rect.height + 7) >> 3, 1);
    g_renderer.SetFlagA(0, 0);
    g_renderer.SetFlagB(0, 0);
    return 0;
}

bool BSImagespaceShader::Setup(ImageSpaceManager*, ImageSpaceEffectParam*)
{
    bool ready = IsReady(0, 0, 0);
    if (ready) {
        std::uint32_t pending = g_pendingShadowSlot;
        if (g_shadowSlotB != pending) {
            g_shadowSlotB = pending;
            g_shadowFlags |= 0x80;
        }
        if (g_shadowDirtyB) {
            g_shadowFlags |= 0x100;
            g_shadowDirtyB = false;
        }
        if (g_shadowModeA != 0) {
            bool modeBSet = g_shadowModeB != 0;
            g_shadowModeA = 0;
            if (modeBSet) {
                g_shadowFlags |= 4;
            } else {
                g_shadowFlags &= ~0x4u;
            }
        }
    }
    return ready;
}

// BSImagespaceShader::Function1541630: GUESS(low)
BSImagespaceShader* BSImagespaceShader::Function1541630(void* a_arg1, void* a_arg2)
{
    *reinterpret_cast<void**>(this) = a_arg1;
    *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 8) = a_arg2;
    *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + 0x10) = true;
    return this;
}
