// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdResponseCacheMediator
// Superclass: NSObject
// Address: 0x112a60d28

@interface SCAdResponseCacheMediator

// Property: lastEvictionReason; attributes: T@"NSMutableDictionary",R,N,V_lastEvictionReason

// -[SCAdResponseCacheMediator initWithPrimaryCache:secondaryCache:expirationTimeProvider:graphene:lifecycleTracker:adConfigProvider:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10574e654

// -[SCAdResponseCacheMediator initInHybridMode:persistentCache:graphene:lifecycleTracker:adConfigProvider:performer:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10574e7c4

// -[SCAdResponseCacheMediator cacheAdResponses:targetingParameters:cacheReason:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x10574e9ac

// -[SCAdResponseCacheMediator getAdResponse:brandSafetyType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10574ec54

// -[SCAdResponseCacheMediator peekAdResponse:brandSafetyType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10574ec58

// -[SCAdResponseCacheMediator getAdResponse:adProductType:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x10574ec5c

// -[SCAdResponseCacheMediator peekAdResponse:]
// Type encoding: @24@0:8@16
// Implementation: 0x10574ee8c

// -[SCAdResponseCacheMediator _handleCacheHit:adResponse:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10574f030

// -[SCAdResponseCacheMediator clearExpiredCache:]
// Type encoding: v24@0:8@16
// Implementation: 0x10574f130

// -[SCAdResponseCacheMediator clearCache:reason:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x10574f314

// -[SCAdResponseCacheMediator clearAllCache]
// Type encoding: v16@0:8
// Implementation: 0x10574f3d4

// -[SCAdResponseCacheMediator _getAdResponse:brandSafetyType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10574f404

// -[SCAdResponseCacheMediator _peekAdResponse:brandSafetyType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10574f6b8

// -[SCAdResponseCacheMediator _syncHybridCache]
// Type encoding: v16@0:8
// Implementation: 0x10574f864

// -[SCAdResponseCacheMediator _logCacheMiss:adProductType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10574fbcc

// -[SCAdResponseCacheMediator _handleExpiryPeriodOptional:adProductType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10574fe0c

// -[SCAdResponseCacheMediator lastEvictionReason]
// Type encoding: @16@0:8
// Implementation: 0x10574ff54

// -[SCAdResponseCacheMediator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10574ff5c

@end
