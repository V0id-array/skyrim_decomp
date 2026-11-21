// Source exposure: mixed (binary-analysis, community-headers).
// Community source: CharmedBaryon/CommonLibSSE-NG@b93280e832f263dbef44e44cbe2936622a02f91a, MIT.
// Array storage, indexed search, append and removal reconstructed from the selected build.
// LockedSource_F063_63d8d0, Sink, Event, ArrayFunctor, ArrayStorage, ArrayBase, Lock, Guard: GUESS(low) STANDIN
// Add, Remove, Push, Find, At, Erase, EraseExternal, Reserve, Move, Allocate, Reallocate, Deallocate, Unlock: GUESS(low)
// data, capacity, size, array, owner, count, sinks, pendingRegisters, pendingUnregisters, lock, notifying, ProcessEvent: GUESS(low)
// GetCurrentThreadId: OBSERVED
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Code origin: original; reconstructed from the pinned image listing and community declarations
// Adapted bodies: none
// 0x63d8d0 p117_63d8d0::LockedSource_F063_63d8d0::Add
#include "LockedSource_F063_63d8d0.h"
namespace p117_63d8d0 {
void LockedSource_F063_63d8d0::Add(Sink* const sink) {
    if (!sink) return;
    Guard guard(lock);
    if (notifying) {
        if (pendingRegisters.Find(sink) == ~0u) pendingRegisters.Push(sink);
    } else {
        if (sinks.Find(sink) == ~0u) sinks.Push(sink);
    }
    unsigned index = pendingUnregisters.Find(sink);
    if (index != ~0u) pendingUnregisters.Erase(index);
}
}
