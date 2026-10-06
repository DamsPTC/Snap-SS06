// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBAllocationTrackerSummary
// Superclass: NSObject
// Address: 0xad94f0

@interface FBAllocationTrackerSummary

// Property: allocations; attributes: TQ,R,N,V_allocations
// Property: deallocations; attributes: TQ,R,N,V_deallocations
// Property: aliveObjects; attributes: Tq,R,N,V_aliveObjects
// Property: className; attributes: T@"NSString",R,C,N,V_className
// Property: instanceSize; attributes: TQ,R,N,V_instanceSize

// -[FBAllocationTrackerSummary initWithAllocations:deallocations:aliveObjects:className:instanceSize:]
// Type encoding: @56@0:8Q16Q24q32@40Q48
// Implementation: 0x4b478c

// -[FBAllocationTrackerSummary description]
// Type encoding: @16@0:8
// Implementation: 0x4b482c

// -[FBAllocationTrackerSummary allocations]
// Type encoding: Q16@0:8
// Implementation: 0x4b4948

// -[FBAllocationTrackerSummary deallocations]
// Type encoding: Q16@0:8
// Implementation: 0x4b4950

// -[FBAllocationTrackerSummary aliveObjects]
// Type encoding: q16@0:8
// Implementation: 0x4b4958

// -[FBAllocationTrackerSummary className]
// Type encoding: @16@0:8
// Implementation: 0x4b4960

// -[FBAllocationTrackerSummary instanceSize]
// Type encoding: Q16@0:8
// Implementation: 0x4b4968

// -[FBAllocationTrackerSummary .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x4b4970

@end
