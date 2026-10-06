// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlusSyncCacheEntry
// Superclass: NSObject
// Address: 0x1128e99e8

@interface SCPlusSyncCacheEntry

// Property: key; attributes: T@"NSString",N,R
// Property: syncTimestamp; attributes: Td,N,R,VsyncTimestamp
// Property: productRefreshTimestamp; attributes: Td,N,R,VproductRefreshTimestamp
// Property: responseData; attributes: T@"NSData",N,R
// Property: products; attributes: T@"NSArray",N,R
// Property: productValidationIncomplete; attributes: TB,N,R,VproductValidationIncomplete
// Property: description; attributes: T@"NSString",N,R

// -[SCPlusSyncCacheEntry key]
// Type encoding: @16@0:8
// Implementation: 0x10375cb74

// -[SCPlusSyncCacheEntry syncTimestamp]
// Type encoding: d16@0:8
// Implementation: 0x10375cbc0

// -[SCPlusSyncCacheEntry productRefreshTimestamp]
// Type encoding: d16@0:8
// Implementation: 0x10375cbd0

// -[SCPlusSyncCacheEntry responseData]
// Type encoding: @16@0:8
// Implementation: 0x10375cbe0

// -[SCPlusSyncCacheEntry products]
// Type encoding: @16@0:8
// Implementation: 0x10375cc3c

// -[SCPlusSyncCacheEntry productValidationIncomplete]
// Type encoding: B16@0:8
// Implementation: 0x10375cc8c

// -[SCPlusSyncCacheEntry initWithKey:syncTimestamp:productRefreshTimestamp:responseData:products:productValidationIncomplete:]
// Type encoding: @60@0:8@16d24d32@40@48B56
// Implementation: 0x10375cd68

// -[SCPlusSyncCacheEntry copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x10375ce98

// -[SCPlusSyncCacheEntry encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10375d0b0

// -[SCPlusSyncCacheEntry initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10375d534

// -[SCPlusSyncCacheEntry description]
// Type encoding: @16@0:8
// Implementation: 0x10375d55c

// -[SCPlusSyncCacheEntry init]
// Type encoding: @16@0:8
// Implementation: 0x10375d5a8

// -[SCPlusSyncCacheEntry .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10375d624

@end
