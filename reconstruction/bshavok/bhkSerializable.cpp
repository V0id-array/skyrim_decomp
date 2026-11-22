// Source exposure: mixed (community headers; the pinned image listing).
// Code origin: original; the four bodies are written from the pinned image listing
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// 0x10829c0 bhkSerializable::SetReferencedObject
// 0x1082b10 bhkSerializable::Unk_2D
// 0x1082b90 bhkSerializable::Unk_30
// 0x1082bd0 bhkSerializable::Unk_31
// Adapted bodies: none
#include "bhkSerializable.h"

void bhkSerializable::Unk_31()
{
    Virt158(true);
}

void bhkSerializable::Unk_30()
{
    if (referenced)
        Virt128(false);
    Virt158(true);
}

void bhkSerializable::SetReferencedObject(hkReferencedObject* a_ref)
{
    hkReferencedObject* old = referenced;
    if (a_ref == old)
        return;
    if (old) {
        SlotPayload* payload = Virt138();
        if (payload && payload->field430)
            Virt150();
    }
    Function10825d0(this, a_ref);
}

std::uint32_t bhkSerializable::Unk_2D(Unk2DArg* a_arg)
{
    void* local;
    void* value = Virt178(&local);
    std::uint32_t v = Virt160();
    SlotTable* table = a_arg->table;
    std::uint32_t added = table->Visit(table, value, v, 0, 0);
    table->count += added;
    return v;
}
