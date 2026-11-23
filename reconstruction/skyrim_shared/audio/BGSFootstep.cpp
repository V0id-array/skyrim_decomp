// Source exposure: mixed. Drafted by claude-sonnet-5-5 from the local instruction listing of the
// 0x31c770 compared function
// pinned image, with the class layout from the header beside this file. Names are from CharmedBaryon/CommonLibSSE-NG b93280e (MIT) unless labelled in the header.
#include "BGSFootstep.h"
#include <new>

// The constructor is not compared: it is defined so that this unit emits the vftable and with it
// the deleting destructor.
BGSFootstep::BGSFootstep()
{
}

// TestBit: GUESS(low); a flag-word bit test by bit index, taking the word by value.
inline bool TestBit(std::uint32_t a_flags, std::uint32_t a_bit)
{
    return ((a_flags >> a_bit) & 1) != 0;
}

// RVA 0x31c770, 65 bytes
// GUESS(low): the body builds a temporary form and a value-initialized fixed string; neither is
// stored into this, so the listing fixes only the temporary's construction and destruction.
FootstepLocal::FootstepLocal()
{
    formType = 'n';
}

void BGSFootstep::InitializeData()
{
    // Placement construction fixes the two temporaries at rsp+0x20 (the local form) and
    // rsp+0x40 (the 16-byte string), matching the pinned allocation order.
    alignas(8) char storage[0x30];
    new (storage) FootstepLocal();
    auto* tempString = new (storage + 0x20) FootstepTempString();
    _mm_storeu_si128(reinterpret_cast<__m128i*>(tempString), _mm_setzero_si128());
    tempString->~FootstepTempString();
    reinterpret_cast<FootstepLocalBase*>(storage)->FootstepLocalBase::~FootstepLocalBase();
}

// RVA 0x31ca20, 93 bytes
void BGSFootstep::InitItemImpl()
{
    if (!TestBit(formFlags, 3)) {
        std::uint32_t id = static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(impactSet));
        if (id != 0) {
            AddCompileIndex(id, GetFile(-1));
            TESForm* found = LookupByID(id);
            if (found && static_cast<std::uint8_t>(found->formType) == 'e') {
                impactSet = reinterpret_cast<BGSImpactDataSet*>(found);
            }
        }
        SetFormFlag(true);
    }
}

