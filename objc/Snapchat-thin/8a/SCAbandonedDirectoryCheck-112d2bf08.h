// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAbandonedDirectoryCheck
// Superclass: NSObject
// Address: 0x112d2bf08

@interface SCAbandonedDirectoryCheck

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAbandonedDirectoryCheck initWithDirectory:]
// Type encoding: @24@0:8@16
// Implementation: 0x1002b1410

// -[SCAbandonedDirectoryCheck _shouldIgnoreDirectory:toIgnore:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10bc76238

// -[SCAbandonedDirectoryCheck sweepDirectoriesWhileIgnoring:dispatchGroup:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10bc762c8

// -[SCAbandonedDirectoryCheck kindName]
// Type encoding: @16@0:8
// Implementation: 0x1002b2844

// -[SCAbandonedDirectoryCheck removeExpiredContentAsyncForReason:dispatchGroup:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x10bc766f0

// -[SCAbandonedDirectoryCheck removeAllUserSessionDataAsync]
// Type encoding: v16@0:8
// Implementation: 0x10bc76760

// -[SCAbandonedDirectoryCheck handleEmergencyDiskConditionWithDispatchGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x10bc76764

// -[SCAbandonedDirectoryCheck reportMetrics]
// Type encoding: @16@0:8
// Implementation: 0x10bc76768

// -[SCAbandonedDirectoryCheck .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10bc76790

// +[SCAbandonedDirectoryCheck markDirectory:]
// Type encoding: B24@0:8@16
// Implementation: 0x1000bc5f4

@end
