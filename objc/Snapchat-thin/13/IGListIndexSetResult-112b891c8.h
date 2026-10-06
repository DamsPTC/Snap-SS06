// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: IGListIndexSetResult
// Superclass: NSObject
// Address: 0x112b891c8

@interface IGListIndexSetResult

// Property: changeCount; attributes: Tq,R,N
// Property: inserts; attributes: T@"NSIndexSet",R,N,V_inserts
// Property: deletes; attributes: T@"NSIndexSet",R,N,V_deletes
// Property: updates; attributes: T@"NSIndexSet",R,N,V_updates
// Property: moves; attributes: T@"NSArray",R,C,N,V_moves
// Property: hasChanges; attributes: TB,R,N

// -[IGListIndexSetResult initWithInserts:deletes:updates:moves:oldIndexMap:newIndexMap:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x107e91538

// -[IGListIndexSetResult hasChanges]
// Type encoding: B16@0:8
// Implementation: 0x107e9168c

// -[IGListIndexSetResult changeCount]
// Type encoding: q16@0:8
// Implementation: 0x107e916a8

// -[IGListIndexSetResult resultForBatchUpdates]
// Type encoding: @16@0:8
// Implementation: 0x107e91764

// -[IGListIndexSetResult oldIndexForIdentifier:]
// Type encoding: q24@0:8@16
// Implementation: 0x107e91a84

// -[IGListIndexSetResult newIndexForIdentifier:]
// Type encoding: q24@0:8@16
// Implementation: 0x107e91ad4

// -[IGListIndexSetResult description]
// Type encoding: @16@0:8
// Implementation: 0x107e91b24

// -[IGListIndexSetResult inserts]
// Type encoding: @16@0:8
// Implementation: 0x107e91c44

// -[IGListIndexSetResult deletes]
// Type encoding: @16@0:8
// Implementation: 0x107e91c4c

// -[IGListIndexSetResult updates]
// Type encoding: @16@0:8
// Implementation: 0x107e91c54

// -[IGListIndexSetResult moves]
// Type encoding: @16@0:8
// Implementation: 0x107e91c5c

// -[IGListIndexSetResult .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107e91c64

@end
