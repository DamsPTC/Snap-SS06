// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCacheKeyKindEntry
// Superclass: NSObject
// Address: 0x112cd38a8

@interface SCCacheKeyKindEntry

// Property: key; attributes: T@"NSString",R,C,N,V_key
// Property: kind; attributes: T@"NSString",R,C,N,V_kind
// Property: expirationDate; attributes: T@"NSDate",R,C,N,V_expirationDate
// Property: referenceCount; attributes: T@"NSNumber",R,C,N,V_referenceCount
// Property: isUnwrappedData; attributes: TB,R,N,V_isUnwrappedData
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCacheKeyKindEntry isExpired]
// Type encoding: B16@0:8
// Implementation: 0x10b7d952c

// -[SCCacheKeyKindEntry adjustReferenceCount:expiration:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x10b7d9694

// -[SCCacheKeyKindEntry initWithKey:kind:expirationDate:referenceCount:isUnwrappedData:]
// Type encoding: @52@0:8@16@24@32@40B48
// Implementation: 0x10083ad58

// -[SCCacheKeyKindEntry copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b7d9054

// -[SCCacheKeyKindEntry initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10081aff0

// -[SCCacheKeyKindEntry encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7d9078

// -[SCCacheKeyKindEntry preferFasterCoding]
// Type encoding: B16@0:8
// Implementation: 0x10b7d911c

// -[SCCacheKeyKindEntry encodeWithFasterCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7d9124

// -[SCCacheKeyKindEntry decodeWithFasterDecoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7d91a0

// -[SCCacheKeyKindEntry setObject:forUInt64Key:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b7d926c

// -[SCCacheKeyKindEntry setBool:forUInt64Key:]
// Type encoding: v28@0:8B16Q20
// Implementation: 0x10b7d934c

// -[SCCacheKeyKindEntry isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b7d938c

// -[SCCacheKeyKindEntry hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b7d9410

// -[SCCacheKeyKindEntry key]
// Type encoding: @16@0:8
// Implementation: 0x10b7d94d4

// -[SCCacheKeyKindEntry kind]
// Type encoding: @16@0:8
// Implementation: 0x100822fbc

// -[SCCacheKeyKindEntry expirationDate]
// Type encoding: @16@0:8
// Implementation: 0x10083a45c

// -[SCCacheKeyKindEntry referenceCount]
// Type encoding: @16@0:8
// Implementation: 0x10b7d94dc

// -[SCCacheKeyKindEntry isUnwrappedData]
// Type encoding: B16@0:8
// Implementation: 0x100822b90

// -[SCCacheKeyKindEntry .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b7d94e4

// +[SCCacheKeyKindEntry fasterCodingVersion]
// Type encoding: Q16@0:8
// Implementation: 0x10b7d936c

// +[SCCacheKeyKindEntry fasterCodingKeys]
// Type encoding: ^Q16@0:8
// Implementation: 0x10b7d9380

@end
