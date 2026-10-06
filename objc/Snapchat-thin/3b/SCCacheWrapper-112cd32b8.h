// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCacheWrapper
// Superclass: NSObject
// Address: 0x112cd32b8

@interface SCCacheWrapper

// Property: cache; attributes: T@"<SCCache>",&,N,V_cache
// Property: kindName; attributes: T@"NSString",R,C,N,V_kindName
// Property: underExperiment; attributes: TB,N,V_underExperiment
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCacheWrapper initWithSCCache:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b7c2c8c

// -[SCCacheWrapper invalidate]
// Type encoding: v16@0:8
// Implementation: 0x10b7c2d38

// -[SCCacheWrapper setObject:dataEncoding:forKey:expiration:block:]
// Type encoding: v56@0:8@16@?24@32@40@?48
// Implementation: 0x10b7c2d40

// -[SCCacheWrapper objectForKey:dataDecoding:block:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x10b7c2e04

// -[SCCacheWrapper objectForKey:dataDecoding:resetExpiration:whenLessThanDelta:block:]
// Type encoding: v56@0:8@16@?24@32d40@?48
// Implementation: 0x10b7c2e14

// -[SCCacheWrapper objectForKey:dataDecoding:resetExpiration:whenLessThanDelta:block:returnExpired:]
// Type encoding: v60@0:8@16@?24@32d40@?48B56
// Implementation: 0x10b7c2e1c

// -[SCCacheWrapper removeExpiredContentWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7c2ee0

// -[SCCacheWrapper removeAllObjectsWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7c2f1c

// -[SCCacheWrapper removeAllObjectsFromMemoryWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7c2f58

// -[SCCacheWrapper removeAllObjectsExceptKeys:block:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b7c2f94

// -[SCCacheWrapper removeObjectsForKeys:block:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b7c3000

// -[SCCacheWrapper removeObjectForKey:block:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b7c306c

// -[SCCacheWrapper decreaseExpirationTo:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b7c30d8

// -[SCCacheWrapper increaseExpirationTo:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b7c30e0

// -[SCCacheWrapper contains:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b7c30e8

// -[SCCacheWrapper contains:block:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b7c30f0

// -[SCCacheWrapper _chainedCacheBlockWithSelf:]
// Type encoding: @?24@0:8@?16
// Implementation: 0x10b7c30f8

// -[SCCacheWrapper _chainedCacheObjectBlockWithSelf:]
// Type encoding: @?24@0:8@?16
// Implementation: 0x10b7c3200

// -[SCCacheWrapper kindName]
// Type encoding: @16@0:8
// Implementation: 0x10b7c3340

// -[SCCacheWrapper underExperiment]
// Type encoding: B16@0:8
// Implementation: 0x10b7c3348

// -[SCCacheWrapper setUnderExperiment:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b7c3350

// -[SCCacheWrapper cache]
// Type encoding: @16@0:8
// Implementation: 0x10b7c3358

// -[SCCacheWrapper setCache:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7c3360

// -[SCCacheWrapper .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b7c3390

@end
