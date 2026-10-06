// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLazy
// Superclass: NSObject
// Address: 0x1000303f8

@interface SCLazy

// Property: isCreated; attributes: TB,R,N

// -[SCLazy isCreated]
// Type encoding: B16@0:8
// Implementation: 0x10001b5ac

// -[SCLazy target]
// Type encoding: @16@0:8
// Implementation: 0x10001b5e8

// -[SCLazy asyncTarget:triggerCreateNowOnQueue:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x10001b7ac

// -[SCLazy onCreated:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10001b878

// -[SCLazy ifCreated]
// Type encoding: @16@0:8
// Implementation: 0x10001b97c

// -[SCLazy ifCreatedNonBlocking]
// Type encoding: @16@0:8
// Implementation: 0x10001b9cc

// -[SCLazy createNow]
// Type encoding: @16@0:8
// Implementation: 0x10001ba28

// -[SCLazy immediateMap:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10001bbb4

// -[SCLazy map:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10001bf5c

// -[SCLazy immediateFlatMap:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10001c07c

// -[SCLazy flatMap:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10001c688

// -[SCLazy initWithInitializationBlock:isAutoCreation:]
// Type encoding: @28@0:8@?16B24
// Implementation: 0x10001c7c8

// -[SCLazy copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10001c854

// -[SCLazy .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10001c878

// +[SCLazy automaticCreationWithInitializationBlock:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10001b514

// +[SCLazy manualCreationWithInitializationBlock:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10001b560

@end
