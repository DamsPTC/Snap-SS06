// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdResponsePersistentCache
// Superclass: NSObject
// Address: 0x112a60d78

@interface SCAdResponsePersistentCache

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdResponsePersistentCache initWithDocObjectContext:graphene:performer:adConfigProvider:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10574ffc8

// -[SCAdResponsePersistentCache cacheAdResponses:cacheURL:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10575015c

// -[SCAdResponsePersistentCache getAdResponse:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057509a0

// -[SCAdResponsePersistentCache getAdResponse:brandSafetyType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1057509c0

// -[SCAdResponsePersistentCache peekAdResponse:brandSafetyType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1057509e4

// -[SCAdResponsePersistentCache peekAdResponse:]
// Type encoding: @24@0:8@16
// Implementation: 0x105750a08

// -[SCAdResponsePersistentCache clearExpiredCache:]
// Type encoding: @24@0:8@16
// Implementation: 0x105750a78

// -[SCAdResponsePersistentCache clearExpiredCacheForAllURLs]
// Type encoding: v16@0:8
// Implementation: 0x10575125c

// -[SCAdResponsePersistentCache clearExpiredCacheForAllURLsAsync]
// Type encoding: v16@0:8
// Implementation: 0x105751bcc

// -[SCAdResponsePersistentCache clearExpiredCacheAsync:]
// Type encoding: v24@0:8@16
// Implementation: 0x105751c30

// -[SCAdResponsePersistentCache timeSinceLastExpirationInMSAsync:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105751d08

// -[SCAdResponsePersistentCache allUnexpiredAdResponsesByCacheURL]
// Type encoding: @16@0:8
// Implementation: 0x105751e54

// -[SCAdResponsePersistentCache clearCache:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057524e0

// -[SCAdResponsePersistentCache clearAllCache]
// Type encoding: v16@0:8
// Implementation: 0x105752800

// -[SCAdResponsePersistentCache timeSinceLastExpirationInMS:]
// Type encoding: @24@0:8@16
// Implementation: 0x10575296c

// -[SCAdResponsePersistentCache deleteAdResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x105752f3c

// -[SCAdResponsePersistentCache _getAdResponse:removeAdResponseOnHit:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x105753070

// -[SCAdResponsePersistentCache _safeQueryCacheItems:]
// Type encoding: @24@0:8r^v16
// Implementation: 0x105753844

// -[SCAdResponsePersistentCache _safeQueryCacheItems:orderBy:limit:]
// Type encoding: @40@0:8r^v16r^v24r^{Limit=i}32
// Implementation: 0x1057538b8

// -[SCAdResponsePersistentCache _safeQueryCacheItems:excludingIds:orderBy:limit:]
// Type encoding: @48@0:8r^v16@24r^v32r^{Limit=i}40
// Implementation: 0x1057538cc

// -[SCAdResponsePersistentCache _safeDeleteCacheItems:]
// Type encoding: v24@0:8@16
// Implementation: 0x105753cf8

// -[SCAdResponsePersistentCache _safeDeleteCacheItemsSync:]
// Type encoding: B24@0:8@16
// Implementation: 0x105753d6c

// -[SCAdResponsePersistentCache _safeDeleteAdRequestClientIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x105754238

// -[SCAdResponsePersistentCache _docObjectContext]
// Type encoding: @16@0:8
// Implementation: 0x105754778

// -[SCAdResponsePersistentCache _logCacheItemMemory:]
// Type encoding: v24@0:8@16
// Implementation: 0x105754780

// -[SCAdResponsePersistentCache _logCacheLatency:success:accessType:]
// Type encoding: v36@0:8d16B24Q28
// Implementation: 0x105754900

// -[SCAdResponsePersistentCache .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105754a98

@end
