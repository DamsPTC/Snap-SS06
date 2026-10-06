// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: IGListIndexPathResult
// Superclass: NSObject
// Address: 0x112b89178

@interface IGListIndexPathResult

// Property: changeCount; attributes: Tq,R,N
// Property: inserts; attributes: T@"NSArray",R,C,N,V_inserts
// Property: deletes; attributes: T@"NSArray",R,C,N,V_deletes
// Property: updates; attributes: T@"NSArray",R,C,N,V_updates
// Property: moves; attributes: T@"NSArray",R,C,N,V_moves
// Property: hasChanges; attributes: TB,R,N

// -[IGListIndexPathResult initWithInserts:deletes:updates:moves:oldIndexPathMap:newIndexPathMap:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x107e90b7c

// -[IGListIndexPathResult hasChanges]
// Type encoding: B16@0:8
// Implementation: 0x107e90cd0

// -[IGListIndexPathResult changeCount]
// Type encoding: q16@0:8
// Implementation: 0x107e90cec

// -[IGListIndexPathResult resultForBatchUpdates]
// Type encoding: @16@0:8
// Implementation: 0x107e90da8

// -[IGListIndexPathResult oldIndexPathForIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x107e91180

// -[IGListIndexPathResult newIndexPathForIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x107e91188

// -[IGListIndexPathResult description]
// Type encoding: @16@0:8
// Implementation: 0x107e911a8

// -[IGListIndexPathResult resultWithoutUpdates:]
// Type encoding: @24@0:8@16
// Implementation: 0x107e912c8

// -[IGListIndexPathResult inserts]
// Type encoding: @16@0:8
// Implementation: 0x107e914b8

// -[IGListIndexPathResult deletes]
// Type encoding: @16@0:8
// Implementation: 0x107e914c0

// -[IGListIndexPathResult updates]
// Type encoding: @16@0:8
// Implementation: 0x107e914c8

// -[IGListIndexPathResult moves]
// Type encoding: @16@0:8
// Implementation: 0x107e914d0

// -[IGListIndexPathResult .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107e914d8

@end
