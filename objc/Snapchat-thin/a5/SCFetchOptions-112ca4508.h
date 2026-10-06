// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFetchOptions
// Superclass: NSObject
// Address: 0x112ca4508

@interface SCFetchOptions

// Property: predicate; attributes: T@"NSPredicate",R,C,N,V_predicate
// Property: sortDescriptors; attributes: T@"NSArray",R,C,N,V_sortDescriptors
// Property: fetchOffset; attributes: TQ,R,N,V_fetchOffset
// Property: fetchLimit; attributes: TQ,R,N,V_fetchLimit
// Property: propertiesToFetch; attributes: T@"NSArray",R,C,N,V_propertiesToFetch
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFetchOptions initWithPredicate:sortDescriptors:fetchOffset:fetchLimit:propertiesToFetch:]
// Type encoding: @56@0:8@16@24Q32Q40@48
// Implementation: 0x10b6e4fb4

// -[SCFetchOptions copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b6e50a0

// -[SCFetchOptions initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b6e50c4

// -[SCFetchOptions encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6e51fc

// -[SCFetchOptions preferFasterCoding]
// Type encoding: B16@0:8
// Implementation: 0x10b6e52dc

// -[SCFetchOptions encodeWithFasterCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6e52e4

// -[SCFetchOptions decodeWithFasterDecoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6e5358

// -[SCFetchOptions setObject:forUInt64Key:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b6e5404

// -[SCFetchOptions setUInt64:forUInt64Key:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x10b6e54ac

// -[SCFetchOptions isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b6e5510

// -[SCFetchOptions hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b6e5590

// -[SCFetchOptions predicate]
// Type encoding: @16@0:8
// Implementation: 0x10b6e564c

// -[SCFetchOptions sortDescriptors]
// Type encoding: @16@0:8
// Implementation: 0x10b6e5654

// -[SCFetchOptions fetchOffset]
// Type encoding: Q16@0:8
// Implementation: 0x10b6e565c

// -[SCFetchOptions fetchLimit]
// Type encoding: Q16@0:8
// Implementation: 0x10b6e5664

// -[SCFetchOptions propertiesToFetch]
// Type encoding: @16@0:8
// Implementation: 0x10b6e566c

// -[SCFetchOptions .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b6e5674

// +[SCFetchOptions fasterCodingVersion]
// Type encoding: Q16@0:8
// Implementation: 0x10b6e54f0

// +[SCFetchOptions fasterCodingKeys]
// Type encoding: ^Q16@0:8
// Implementation: 0x10b6e5504

@end
