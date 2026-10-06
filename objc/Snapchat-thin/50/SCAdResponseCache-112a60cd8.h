// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdResponseCache
// Superclass: NSObject
// Address: 0x112a60cd8

@interface SCAdResponseCache

// Property: cache; attributes: T@"NSMutableDictionary",&,N,V_cache
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdResponseCache initWithGraphene:adConfigProvider:lifecycleTracker:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10574c9e8

// -[SCAdResponseCache cacheAdResponses:cacheURL:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10574cb50

// -[SCAdResponseCache getAdResponse:brandSafetyType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10574ce14

// -[SCAdResponseCache getAdResponse:]
// Type encoding: @24@0:8@16
// Implementation: 0x10574ce44

// -[SCAdResponseCache peekAdResponse:brandSafetyType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10574ce70

// -[SCAdResponseCache peekAdResponse:]
// Type encoding: @24@0:8@16
// Implementation: 0x10574cea0

// -[SCAdResponseCache clearExpiredCache:]
// Type encoding: @24@0:8@16
// Implementation: 0x10574cecc

// -[SCAdResponseCache clearCache:]
// Type encoding: @24@0:8@16
// Implementation: 0x10574cfc0

// -[SCAdResponseCache clearAllCache]
// Type encoding: v16@0:8
// Implementation: 0x10574d0b4

// -[SCAdResponseCache _firstAdResponseWithBrandSafetyType:fromCachedAdResponse:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x10574d0bc

// -[SCAdResponseCache _getAdResponse:removeAdResponseOnHit:brandSafetyType:]
// Type encoding: @36@0:8@16B24q28
// Implementation: 0x10574d20c

// -[SCAdResponseCache _getAdResponse:removeAdResponseOnHit:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x10574d4e0

// -[SCAdResponseCache _cacheAdResponses:cacheURL:adResponseType:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x10574d78c

// -[SCAdResponseCache _clearExpiredCache:adResponseType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10574dc58

// -[SCAdResponseCache _clearCache:adResponseType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10574e1bc

// -[SCAdResponseCache _removeCachedObjectOnHit:adResponseType:brandSafetyType:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x10574e424

// -[SCAdResponseCache _removeCachedObjectOnHit:adResponseType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10574e520

// -[SCAdResponseCache cache]
// Type encoding: @16@0:8
// Implementation: 0x10574e5d4

// -[SCAdResponseCache setCache:]
// Type encoding: v24@0:8@16
// Implementation: 0x10574e5dc

// -[SCAdResponseCache .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10574e60c

@end
