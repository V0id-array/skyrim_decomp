// Source exposure: mixed (names and declarations from community headers; the listing of the pinned
// 0x329d38 compared function
// image).
// Adapted bodies: none
// 0x3298d0 BGSSoundCategory::SetCategoryVolume
#include "BGSSoundCategory.h"

// FindCategory: GUESS(low); callee of the compared body, bound by position
// Adjustor thunk: GUESS(low); a secondary base at 0x30 yields `sub rcx,0x30; jmp rel32`.
class ThunkImpl { public: virtual void* Virt(); };
class ThunkPad { public: virtual ~ThunkPad(); char pad[0x20]; };
class ThunkSecond { public: virtual void* Virt(); };
class ThunkHost : public ThunkImpl, public ThunkPad, public ThunkSecond {
public:
    ThunkHost();
    void* Virt() override;
};
ThunkHost::ThunkHost() {}
void* ThunkImpl::Virt() { return nullptr; }
void* ThunkHost::Virt() { return nullptr; }
void UseThunkHost(ThunkHost* h) { static_cast<ThunkSecond*>(h)->Virt(); }

// Local noinline stand-in so the optimizer can see the callee never touches XMM registers.
static __declspec(noinline) bool FindCategory(std::uint32_t a_id, void** a_out)
{
    *a_out = nullptr;
    return a_id != 0;
}

void BGSSoundCategory::SetCategoryAttenuation(std::uint16_t a_value)
{
    RawAt<std::uint16_t>(this, 0x1a) = a_value;
}

void BGSSoundCategory::SetCategoryFrequency(float a_value)
{
    RawAt<float>(this, 0x24) = a_value;
}

void BGSSoundCategory::InitializeData()
{
    RawAt<std::uint32_t>(this, 0x4c) = 0xffffffff;
    RawAt<std::uint32_t>(this, 0x38) = 0;
    RawAt<std::uint64_t>(this, 0x40) = 0;
}

bool BGSSoundCategory::Matches(const BSISoundCategory* a_category) const
{
    const std::uintptr_t primary = reinterpret_cast<std::uintptr_t>(this) - 0x30;
    const BSISoundCategory* self = primary == 0 ? nullptr : reinterpret_cast<const BSISoundCategory*>(this);
    if (self == a_category) {
        return true;
    }
    BGSSoundCategory* parent = RawAt<BGSSoundCategory*>(this, 0x10);
    if (parent == nullptr) {
        return false;
    }
    const BSISoundCategory* iface = reinterpret_cast<const BSISoundCategory*>(reinterpret_cast<const std::uint8_t*>(parent) + 0x30);
    if (iface->Matches(a_category)) {
        return true;
    }
    return false;
}

// BGSSoundCategory::SetCategoryVolume: CRASHLOGGER_PDB(59818@2026.10.24)
void BGSSoundCategory::SetCategoryVolume(float a_value)
{
    const unsigned raw = RawAt<std::uint32_t>(this, 0x8);
    RawAt<float>(this, 0x20) = a_value;
    void* found = nullptr;
    if ((static_cast<unsigned char>(raw >> 1) & 1) != 0) {
        if (FindCategory(RawAt<std::uint32_t>(this, -0x1c), &found)) {
            if (found) {
                RawAt<float>(found, 0x20) = a_value;
            }
        }
    }
}
