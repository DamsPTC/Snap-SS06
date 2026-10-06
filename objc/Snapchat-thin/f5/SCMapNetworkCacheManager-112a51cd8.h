// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapNetworkCacheManager
// Superclass: NSObject
// Address: 0x112a51cd8

@interface SCMapNetworkCacheManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapNetworkCacheManager initWithDocObjectContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055f606c

// -[SCMapNetworkCacheManager cacheJSONResponse:forUrl:identifier:ttl:]
// Type encoding: v48@0:8@16@24@32d40
// Implementation: 0x1055f6114

// -[SCMapNetworkCacheManager cachedJSONResponseForURL:identifier:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1055f6484

// -[SCMapNetworkCacheManager cacheMessage:forUrl:identifier:ttl:]
// Type encoding: v48@0:8@16@24@32d40
// Implementation: 0x1055f6a58

// -[SCMapNetworkCacheManager cachedResponseForURL:identifier:responseClass:]
// Type encoding: @40@0:8@16@24#32
// Implementation: 0x1055f6ce0

// -[SCMapNetworkCacheManager removeCachedResponseForURL:identifier:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1055f72b0

// -[SCMapNetworkCacheManager batchCachedEntitiesForIds:url:prefix:entityClass:]
// Type encoding: @48@0:8@16@24@32#40
// Implementation: 0x1055f78e8

// -[SCMapNetworkCacheManager batchCacheEntities:url:prefix:ttl:]
// Type encoding: v48@0:8@16@24@32d40
// Implementation: 0x1055f81f4

// -[SCMapNetworkCacheManager _clearExpiredItems]
// Type encoding: v16@0:8
// Implementation: 0x1055f85fc

// -[SCMapNetworkCacheManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1055f89c8

@end
