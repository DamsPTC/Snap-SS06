// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCShortcutsInteractionMutatorImpl
// Superclass: NSObject
// Address: 0x112afff18

@interface SCShortcutsInteractionMutatorImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCShortcutsInteractionMutatorImpl initWithUserPreferences:sendToListsDataTracker:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1067f7c24

// -[SCShortcutsInteractionMutatorImpl updateShortcutsInteractionTimestamps:source:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1067f7d08

// -[SCShortcutsInteractionMutatorImpl shortcutInteractionTimestampDidUpdateObservable:]
// Type encoding: @24@0:8q16
// Implementation: 0x1067f7fe4

// -[SCShortcutsInteractionMutatorImpl updateShortcutCreationTimestamp:timestamp:source:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x1067f8030

// -[SCShortcutsInteractionMutatorImpl _subscribeToNewCustomShortcutsObservable]
// Type encoding: v16@0:8
// Implementation: 0x1067f8234

// -[SCShortcutsInteractionMutatorImpl _persistNewShortcutCreationTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x1067f8380

// -[SCShortcutsInteractionMutatorImpl _shortcutInteractionTimestampObservable:]
// Type encoding: @24@0:8q16
// Implementation: 0x1067f844c

// -[SCShortcutsInteractionMutatorImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1067f854c

@end
