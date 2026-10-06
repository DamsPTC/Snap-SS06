// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCreateChatNewGroupStateManager
// Superclass: NSObject
// Address: 0x112a09938

@interface SCCreateChatNewGroupStateManager

// Property: state; attributes: T@"SCCreateChatScopeState",R,N,V_state

// -[SCCreateChatNewGroupStateManager initWithNewChatStatePublisher:selectionTracker:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104f31254

// -[SCCreateChatNewGroupStateManager _subscribeToSelectionUpdates:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f31344

// -[SCCreateChatNewGroupStateManager _subscribeToStateChanges]
// Type encoding: v16@0:8
// Implementation: 0x104f31494

// -[SCCreateChatNewGroupStateManager _handleNewState:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f315a8

// -[SCCreateChatNewGroupStateManager _handleSelectionChanges]
// Type encoding: v16@0:8
// Implementation: 0x104f31650

// -[SCCreateChatNewGroupStateManager advanceToNewGroupStatePermanently]
// Type encoding: v16@0:8
// Implementation: 0x104f316fc

// -[SCCreateChatNewGroupStateManager state]
// Type encoding: @16@0:8
// Implementation: 0x104f31740

// -[SCCreateChatNewGroupStateManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104f31748

@end
