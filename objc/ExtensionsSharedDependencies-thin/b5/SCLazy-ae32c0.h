// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLazy
// Superclass: NSObject
// Address: 0xae32c0

@interface SCLazy

// Property: isCreated; attributes: TB,R,N

// -[SCLazy isCreated]
// Type encoding: B16@0:8
// Implementation: 0x72a5d0

// -[SCLazy target]
// Type encoding: @16@0:8
// Implementation: 0x72a60c

// -[SCLazy asyncTarget:triggerCreateNowOnQueue:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x72a7d0

// -[SCLazy onCreated:]
// Type encoding: v24@0:8@?16
// Implementation: 0x72a89c

// -[SCLazy ifCreated]
// Type encoding: @16@0:8
// Implementation: 0x72a9a0

// -[SCLazy ifCreatedNonBlocking]
// Type encoding: @16@0:8
// Implementation: 0x72a9f0

// -[SCLazy createNow]
// Type encoding: @16@0:8
// Implementation: 0x72aa4c

// -[SCLazy immediateMap:]
// Type encoding: @24@0:8@?16
// Implementation: 0x72abd8

// -[SCLazy map:]
// Type encoding: @24@0:8@?16
// Implementation: 0x72af4c

// -[SCLazy immediateFlatMap:]
// Type encoding: @24@0:8@?16
// Implementation: 0x72b06c

// -[SCLazy flatMap:]
// Type encoding: @24@0:8@?16
// Implementation: 0x72b5ec

// -[SCLazy initWithInitializationBlock:isAutoCreation:]
// Type encoding: @28@0:8@?16B24
// Implementation: 0x72b72c

// -[SCLazy copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x72b7b8

// -[SCLazy .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x72b7dc

// +[SCLazy automaticCreationWithInitializationBlock:]
// Type encoding: @24@0:8@?16
// Implementation: 0x72a538

// +[SCLazy manualCreationWithInitializationBlock:]
// Type encoding: @24@0:8@?16
// Implementation: 0x72a584

@end
