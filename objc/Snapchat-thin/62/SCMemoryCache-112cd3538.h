// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoryCache
// Superclass: NSObject
// Address: 0x112cd3538

@interface SCMemoryCache

// Property: kindName; attributes: T@"NSString",R,C,N,V_kindName
// Property: underExperiment; attributes: TB,N,V_underExperiment
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoryCache initWithName:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b7c4f14

// -[SCMemoryCache initWithName:cacheManager:memoryCache:workQueuePerformer:completionQueuePerformer:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10b7c5028

// -[SCMemoryCache setObject:dataEncoding:forKey:expiration:block:]
// Type encoding: v56@0:8@16@?24@32@40@?48
// Implementation: 0x10b7c5170

// -[SCMemoryCache setObject:dataCost:forKey:expiration:block:]
// Type encoding: v56@0:8@16@?24@32@40@?48
// Implementation: 0x10b7c5218

// -[SCMemoryCache objectForKey:dataDecoding:block:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x10b7c52c0

// -[SCMemoryCache objectForKey:dataDecoding:resetExpiration:whenLessThanDelta:block:]
// Type encoding: v56@0:8@16@?24@32d40@?48
// Implementation: 0x10b7c52d4

// -[SCMemoryCache objectForKey:dataDecoding:resetExpiration:whenLessThanDelta:block:returnExpired:]
// Type encoding: v60@0:8@16@?24@32d40@?48B56
// Implementation: 0x10b7c52dc

// -[SCMemoryCache decreaseExpirationTo:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b7c54d4

// -[SCMemoryCache increaseExpirationTo:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b7c56d0

// -[SCMemoryCache validate]
// Type encoding: v16@0:8
// Implementation: 0x10b7c58cc

// -[SCMemoryCache invalidate]
// Type encoding: v16@0:8
// Implementation: 0x10b7c58d0

// -[SCMemoryCache removeExpiredContentWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7c58d4

// -[SCMemoryCache removeAllObjectsWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7c5b68

// -[SCMemoryCache removeAllObjectsFromMemoryWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7c5bbc

// -[SCMemoryCache removeAllObjectsExceptKeys:block:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b7c5bc0

// -[SCMemoryCache removeObjectsForKeys:block:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b7c5e90

// -[SCMemoryCache removeObjectForKey:block:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b7c5efc

// -[SCMemoryCache contains:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b7c5f94

// -[SCMemoryCache contains:block:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b7c5fe0

// -[SCMemoryCache syncSetObject:dataEncoding:forKey:expiration:]
// Type encoding: B48@0:8@16@?24@32@40
// Implementation: 0x10b7c60c0

// -[SCMemoryCache syncGetObjectForKey:dataDecoding:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x10b7c615c

// -[SCMemoryCache syncGetObjectForKey:dataDecoding:resetExpiration:whenLessThanDelta:]
// Type encoding: @48@0:8@16@?24@32d40
// Implementation: 0x10b7c616c

// -[SCMemoryCache syncGetObjectForKey:dataDecoding:resetExpiration:whenLessThanDelta:returnExpired:]
// Type encoding: @52@0:8@16@?24@32d40B48
// Implementation: 0x10b7c6174

// -[SCMemoryCache costForObject:dataEncoding:]
// Type encoding: Q32@0:8@16@?24
// Implementation: 0x10b7c635c

// -[SCMemoryCache costForObject:dataCost:]
// Type encoding: Q32@0:8@16@?24
// Implementation: 0x10b7c6418

// -[SCMemoryCache _executeCompletionBlock:withKey:object:]
// Type encoding: v40@0:8@?16@24@32
// Implementation: 0x10b7c648c

// -[SCMemoryCache _executeCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7c6604

// -[SCMemoryCache _updateExpiration:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b7c6720

// -[SCMemoryCache _removeObjectsForCombinedKeys:block:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b7c6814

// -[SCMemoryCache _setObject:cost:forKey:expiration:block:]
// Type encoding: v56@0:8@16q24@32@40@?48
// Implementation: 0x10b7c6940

// -[SCMemoryCache _syncSetObject:cost:forKey:expiration:]
// Type encoding: B48@0:8@16q24@32@40
// Implementation: 0x10b7c6b34

// -[SCMemoryCache _locked_setObject:cost:forKey:expiration:]
// Type encoding: B48@0:8@16q24@32@40
// Implementation: 0x10b7c6cc0

// -[SCMemoryCache _locked_objectForKey:dataDecoding:resetExpiration:whenLessThanDelta:returnExpired:]
// Type encoding: @52@0:8@16@?24@32d40B48
// Implementation: 0x10b7c6e5c

// -[SCMemoryCache kindName]
// Type encoding: @16@0:8
// Implementation: 0x10b7c6fb4

// -[SCMemoryCache underExperiment]
// Type encoding: B16@0:8
// Implementation: 0x10b7c6fbc

// -[SCMemoryCache setUnderExperiment:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b7c6fc4

// -[SCMemoryCache .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b7c6fcc

@end
