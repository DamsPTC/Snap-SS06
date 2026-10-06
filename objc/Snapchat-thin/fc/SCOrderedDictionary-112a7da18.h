// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOrderedDictionary
// Superclass: NSObject
// Address: 0x112a7da18

@interface SCOrderedDictionary

// Property: dict; attributes: T@"NSMutableDictionary",&,N,V_dict
// Property: keys; attributes: T@"NSMutableOrderedSet",&,N,V_keys
// Property: maxSize; attributes: Tq,N,V_maxSize
// Property: shouldPrune; attributes: TB,N,V_shouldPrune

// -[SCOrderedDictionary init]
// Type encoding: @16@0:8
// Implementation: 0x10594c9ec

// -[SCOrderedDictionary initWithMaxSize:]
// Type encoding: @24@0:8q16
// Implementation: 0x10594ca84

// -[SCOrderedDictionary objectForKeyedSubscript:]
// Type encoding: @24@0:8@16
// Implementation: 0x10594cac8

// -[SCOrderedDictionary setObject:forKeyedSubscript:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10594cb68

// -[SCOrderedDictionary onAdd:countBefore:]
// Type encoding: v28@0:8B16Q20
// Implementation: 0x10594ce10

// -[SCOrderedDictionary onPurge:]
// Type encoding: v24@0:8@16
// Implementation: 0x10594ce14

// -[SCOrderedDictionary removeObjectForKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10594ce18

// -[SCOrderedDictionary allKeys]
// Type encoding: @16@0:8
// Implementation: 0x100798920

// -[SCOrderedDictionary allOrderedValues]
// Type encoding: @16@0:8
// Implementation: 0x10594cec8

// -[SCOrderedDictionary count]
// Type encoding: q16@0:8
// Implementation: 0x100798474

// -[SCOrderedDictionary encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10594d0d0

// -[SCOrderedDictionary initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x100421138

// -[SCOrderedDictionary validate]
// Type encoding: B16@0:8
// Implementation: 0x100423564

// -[SCOrderedDictionary dict]
// Type encoding: @16@0:8
// Implementation: 0x1004235f0

// -[SCOrderedDictionary setDict:]
// Type encoding: v24@0:8@16
// Implementation: 0x100421214

// -[SCOrderedDictionary keys]
// Type encoding: @16@0:8
// Implementation: 0x1004235e8

// -[SCOrderedDictionary setKeys:]
// Type encoding: v24@0:8@16
// Implementation: 0x100421244

// -[SCOrderedDictionary maxSize]
// Type encoding: q16@0:8
// Implementation: 0x1004235f8

// -[SCOrderedDictionary setMaxSize:]
// Type encoding: v24@0:8q16
// Implementation: 0x100421274

// -[SCOrderedDictionary shouldPrune]
// Type encoding: B16@0:8
// Implementation: 0x10594d1d0

// -[SCOrderedDictionary setShouldPrune:]
// Type encoding: v20@0:8B16
// Implementation: 0x10042127c

// -[SCOrderedDictionary .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10594d1d8

@end
