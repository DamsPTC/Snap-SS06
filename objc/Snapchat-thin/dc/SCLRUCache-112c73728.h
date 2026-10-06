// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLRUCache
// Superclass: NSObject
// Address: 0x112c73728

@interface SCLRUCache

// Property: totalCost; attributes: TQ,N,V_totalCost
// Property: count; attributes: TQ,N,V_count
// Property: totalCostLimit; attributes: TQ,N,V_totalCostLimit
// Property: countLimit; attributes: TQ,N,V_countLimit
// Property: delegate; attributes: T@"<SCLRUCacheDelegate>",W,N,V_delegate
// Property: name; attributes: T@"NSString",C,N,V_name

// -[SCLRUCache init]
// Type encoding: @16@0:8
// Implementation: 0x1000b5738

// -[SCLRUCache objectForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x1001072c0

// -[SCLRUCache setObject:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1001886b0

// -[SCLRUCache removeObjectForKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b29ad64

// -[SCLRUCache removeAllObjects]
// Type encoding: v16@0:8
// Implementation: 0x10b29ae08

// -[SCLRUCache allValues]
// Type encoding: @16@0:8
// Implementation: 0x10b29ae58

// -[SCLRUCache allKeys]
// Type encoding: @16@0:8
// Implementation: 0x10b29aed0

// -[SCLRUCache objectForKey:markRecentlyUsed:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x1001072c8

// -[SCLRUCache setObject:forKey:cost:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x100188720

// -[SCLRUCache setTotalCostLimit:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b29af48

// -[SCLRUCache setCountLimit:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1000b57b4

// -[SCLRUCache _moveNodeToHead:]
// Type encoding: v24@0:8@16
// Implementation: 0x10018a094

// -[SCLRUCache _removeNodeFromLinkedList:]
// Type encoding: v24@0:8@16
// Implementation: 0x100189598

// -[SCLRUCache _evictObjectsForCostChange:countChange:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x1000b57c4

// -[SCLRUCache totalCostLimit]
// Type encoding: Q16@0:8
// Implementation: 0x10018a144

// -[SCLRUCache countLimit]
// Type encoding: Q16@0:8
// Implementation: 0x10018a14c

// -[SCLRUCache totalCost]
// Type encoding: Q16@0:8
// Implementation: 0x10018a134

// -[SCLRUCache setTotalCost:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10018a13c

// -[SCLRUCache count]
// Type encoding: Q16@0:8
// Implementation: 0x10018a124

// -[SCLRUCache setCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10018a12c

// -[SCLRUCache delegate]
// Type encoding: @16@0:8
// Implementation: 0x10b29af58

// -[SCLRUCache setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b29af70

// -[SCLRUCache name]
// Type encoding: @16@0:8
// Implementation: 0x10b29af7c

// -[SCLRUCache setName:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b29af84

// -[SCLRUCache .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1000fb510

@end
