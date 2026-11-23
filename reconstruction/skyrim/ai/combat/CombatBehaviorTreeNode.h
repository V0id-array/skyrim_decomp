// Source exposure: mixed (target listing, anonymous sibling and unverified names).
// 0x875380 compared function
// 0x8752f0 compared function
// Origin: SIBLING(fo4-private@1b765c70, author-permission)
// Sibling source: fo4-private@1b765c70 src/Game/AI/Combat/CombatBehaviorTreeNode.cpp:61 (CombatBehaviorTreeNode::Update)
// Sibling source: fo4-private@1b765c70 src/Game/AI/Combat/CombatBehaviorTreeNode.cpp:67 (CombatBehaviorTreeNode::Abort)
// CombatBehaviorTreeNode, Update, Abort: GUESS(low)
#pragma once
#include <cstdint>

// CombatBehaviorThread, Ascend, thread: GUESS(low)
class CombatBehaviorThread { public: void Ascend(); };
// NodeRaw, its constructor and members: GUESS(low); stand-in matching the compared layout.
struct NodeRaw;
class CombatBehaviorTreeNode {
public:
    void Update(CombatBehaviorThread* thread) const;
    void Abort(CombatBehaviorThread* thread) const;
    static NodeRaw* Function8752f0(NodeRaw* a_target);  // compared: 0x8752f0
    void* Function875380() const;  // compared: 0x875380
private:
    std::uint8_t pad00[0x8];  // 00
    void*         field08;    // 08
};
