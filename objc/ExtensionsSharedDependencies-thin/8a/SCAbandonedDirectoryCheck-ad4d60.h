// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAbandonedDirectoryCheck
// Superclass: NSObject
// Address: 0xad4d60

@interface SCAbandonedDirectoryCheck

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAbandonedDirectoryCheck initWithDirectory:]
// Type encoding: @24@0:8@16
// Implementation: 0x43ac28

// -[SCAbandonedDirectoryCheck _shouldIgnoreDirectory:toIgnore:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x43ad30

// -[SCAbandonedDirectoryCheck sweepDirectoriesWhileIgnoring:dispatchGroup:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x43adc0

// -[SCAbandonedDirectoryCheck kindName]
// Type encoding: @16@0:8
// Implementation: 0x43b278

// -[SCAbandonedDirectoryCheck removeExpiredContentAsyncForReason:dispatchGroup:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x43b30c

// -[SCAbandonedDirectoryCheck removeAllUserSessionDataAsync]
// Type encoding: v16@0:8
// Implementation: 0x43b37c

// -[SCAbandonedDirectoryCheck handleEmergencyDiskConditionWithDispatchGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x43b380

// -[SCAbandonedDirectoryCheck reportMetrics]
// Type encoding: @16@0:8
// Implementation: 0x43b384

// -[SCAbandonedDirectoryCheck .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x43b3ac

// +[SCAbandonedDirectoryCheck markDirectory:]
// Type encoding: B24@0:8@16
// Implementation: 0x43aca8

@end
