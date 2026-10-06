// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAppTerminationShim
// Superclass: NSObject
// Address: 0x112a28d38

@interface SCAppTerminationShim

// Property: forceTerminationObservable; attributes: T@"SCObservable",R,N

// -[SCAppTerminationShim initWithApplicationPreferences:storageDirectory:dataWriter:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1001d2010

// -[SCAppTerminationShim dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1052f8b0c

// -[SCAppTerminationShim setUpTerminationStateMappingRestoringExists:]
// Type encoding: q24@0:8^B16
// Implementation: 0x1001d21dc

// -[SCAppTerminationShim lastAppTerminationType]
// Type encoding: @16@0:8
// Implementation: 0x1001d5684

// -[SCAppTerminationShim setNextAppTerminationType:]
// Type encoding: v24@0:8@16
// Implementation: 0x1001d5430

// -[SCAppTerminationShim persistTerminationState:]
// Type encoding: v24@0:8q16
// Implementation: 0x1001d5588

// -[SCAppTerminationShim forceTerminationObservable]
// Type encoding: @16@0:8
// Implementation: 0x1052f8b60

// -[SCAppTerminationShim forceAppTermination]
// Type encoding: v16@0:8
// Implementation: 0x1052f8b88

// -[SCAppTerminationShim .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1052f8bf0

@end
