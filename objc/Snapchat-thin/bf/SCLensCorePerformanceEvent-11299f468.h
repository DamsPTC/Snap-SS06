// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensCorePerformanceEvent
// Superclass: NSObject
// Address: 0x11299f468

@interface SCLensCorePerformanceEvent

// Property: lensCoreId; attributes: T@"NSString",N,R
// Property: contextId; attributes: T@"NSString",N,R
// Property: requestedTime; attributes: Td,N,R,VrequestedTime
// Property: executedTime; attributes: Td,N,R,VexecutedTime

// -[SCLensCorePerformanceEvent lensCoreId]
// Type encoding: @16@0:8
// Implementation: 0x10433fafc

// -[SCLensCorePerformanceEvent contextId]
// Type encoding: @16@0:8
// Implementation: 0x10433fb08

// -[SCLensCorePerformanceEvent requestedTime]
// Type encoding: d16@0:8
// Implementation: 0x10433fb14

// -[SCLensCorePerformanceEvent executedTime]
// Type encoding: d16@0:8
// Implementation: 0x10433fb24

// -[SCLensCorePerformanceEvent initWithLensCoreId:contextId:requestedTime:executedTime:]
// Type encoding: @48@0:8@16@24d32d40
// Implementation: 0x10433fc40

// -[SCLensCorePerformanceEvent init]
// Type encoding: @16@0:8
// Implementation: 0x10433fce8

// -[SCLensCorePerformanceEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10433fd20

@end
