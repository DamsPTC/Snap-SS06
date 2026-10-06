// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDelayedEntryPointHandler
// Superclass: NSObject
// Address: 0x112a25cc8

@interface SCDelayedEntryPointHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDelayedEntryPointHandler initWithContextStream:operationQueue:graphene:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100078c30

// -[SCDelayedEntryPointHandler initWithContextStream:operationQueue:graphene:idleMonitor:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x100078ff0

// -[SCDelayedEntryPointHandler dealloc]
// Type encoding: v16@0:8
// Implementation: 0x105265c4c

// -[SCDelayedEntryPointHandler delayEntryPointName:context:callback:]
// Type encoding: v40@0:8@16q24@?32
// Implementation: 0x100a1beec

// -[SCDelayedEntryPointHandler shouldDelay:context:]
// Type encoding: B32@0:8@16q24
// Implementation: 0x100a1bce0

// -[SCDelayedEntryPointHandler _isContextForTargetScreen:]
// Type encoding: B24@0:8q16
// Implementation: 0x100a1bdd4

// -[SCDelayedEntryPointHandler _shouldDelayForColdStartup:context:]
// Type encoding: B32@0:8@16q24
// Implementation: 0x100a1bd50

// -[SCDelayedEntryPointHandler _updateStartupContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x10008a4d4

// -[SCDelayedEntryPointHandler _runDelayCallbacks]
// Type encoding: v16@0:8
// Implementation: 0x105265c94

// -[SCDelayedEntryPointHandler _runDelayCallbacksOperation]
// Type encoding: v16@0:8
// Implementation: 0x105265d54

// -[SCDelayedEntryPointHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105265ed4

@end
