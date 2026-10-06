// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLazy
// Superclass: NSObject
// Address: 0x112d32e48

@interface SCLazy

// Property: isCreated; attributes: TB,R,N

// -[SCLazy isCreated]
// Type encoding: B16@0:8
// Implementation: 0x10085be08

// -[SCLazy target]
// Type encoding: @16@0:8
// Implementation: 0x1000b222c

// -[SCLazy asyncTarget:triggerCreateNowOnQueue:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x10bd4d508

// -[SCLazy onCreated:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1006be4f4

// -[SCLazy ifCreated]
// Type encoding: @16@0:8
// Implementation: 0x10052958c

// -[SCLazy ifCreatedNonBlocking]
// Type encoding: @16@0:8
// Implementation: 0x10bd4d5d4

// -[SCLazy createNow]
// Type encoding: @16@0:8
// Implementation: 0x10014fde0

// -[SCLazy immediateMap:]
// Type encoding: @24@0:8@?16
// Implementation: 0x1006be25c

// -[SCLazy map:]
// Type encoding: @24@0:8@?16
// Implementation: 0x1003d73e4

// -[SCLazy immediateFlatMap:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10bd4d6ec

// -[SCLazy flatMap:]
// Type encoding: @24@0:8@?16
// Implementation: 0x1003d8dc0

// -[SCLazy initWithInitializationBlock:isAutoCreation:]
// Type encoding: @28@0:8@?16B24
// Implementation: 0x100069f78

// -[SCLazy copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10bd4db50

// -[SCLazy .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1000b3d74

// +[SCLazy notMainThreadDuringColdStartup:]
// Type encoding: @24@0:8@?16
// Implementation: 0x100414c68

// +[SCLazy automaticLazyPreloadedOnBackgroundThread:qualityOfService:]
// Type encoding: @28@0:8@?16I24
// Implementation: 0x100424a00

// +[SCLazy automaticCreationWithInitializationBlock:]
// Type encoding: @24@0:8@?16
// Implementation: 0x100069f2c

// +[SCLazy manualCreationWithInitializationBlock:]
// Type encoding: @24@0:8@?16
// Implementation: 0x1004f2864

@end
