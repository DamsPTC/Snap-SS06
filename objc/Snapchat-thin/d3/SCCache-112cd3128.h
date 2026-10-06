// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCache
// Superclass: NSObject
// Address: 0x112cd3128

@interface SCCache

// Property: memoryCache; attributes: T@"PINMemoryCache",&,N,V_memoryCache
// Property: diskCache; attributes: T@"PINDiskCache",&,N,V_diskCache
// Property: cacheManager; attributes: T@"SCCacheManager",&,N,V_cacheManager
// Property: metricsName; attributes: T@"NSString",R,C,N,V_metricsName
// Property: workQueuePerformer; attributes: T@"<SCPerforming>",&,N,V_workQueuePerformer
// Property: diskCacheQueuePerformer; attributes: T@"<SCPerforming>",&,N,V_diskCacheQueuePerformer
// Property: completionQueuePerformer; attributes: T@"<SCPerforming>",&,N,V_completionQueuePerformer
// Property: isInvalidated; attributes: TB,N,V_isInvalidated
// Property: didRemoveObjectFromDiskBlock; attributes: T@?,C,N,V_didRemoveObjectFromDiskBlock
// Property: kindName; attributes: T@"NSString",R,C,N,V_kindName
// Property: underExperiment; attributes: TB,N,V_underExperiment
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCache initWithName:diskSizeLimitConfig:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1006e10f4

// -[SCCache initWithScopedDirectory:name:metricsName:diskSizeLimitConfig:useMemoryCache:]
// Type encoding: @52@0:8@16@24@32@40B48
// Implementation: 0x10b7bd0f0

// -[SCCache initWithScopedDirectory:name:metricsName:diskSizeLimitConfig:useMemoryCache:skipEviction:]
// Type encoding: @56@0:8@16@24@32@40B48B52
// Implementation: 0x1004484a4

// -[SCCache initWithName:metricsName:cacheManager:diskSizeLimitConfig:cacheDirectory:useMemoryCache:skipEviction:]
// Type encoding: @64@0:8@16@24@32@40@48B56B60
// Implementation: 0x100448eac

// -[SCCache setObject:dataEncoding:forKey:expiration:block:]
// Type encoding: v56@0:8@16@?24@32@40@?48
// Implementation: 0x10b7bd1d0

// -[SCCache objectForKey:dataDecoding:block:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x10081bf5c

// -[SCCache objectForKey:dataDecoding:resetExpiration:whenLessThanDelta:block:]
// Type encoding: v56@0:8@16@?24@32d40@?48
// Implementation: 0x10081bf6c

// -[SCCache objectForKey:dataDecoding:resetExpiration:whenLessThanDelta:block:returnExpired:]
// Type encoding: v60@0:8@16@?24@32d40@?48B56
// Implementation: 0x10081bf74

// -[SCCache decreaseExpirationTo:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b7bd648

// -[SCCache increaseExpirationTo:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b7bd820

// -[SCCache validate]
// Type encoding: v16@0:8
// Implementation: 0x1006e1318

// -[SCCache invalidate]
// Type encoding: v16@0:8
// Implementation: 0x10b7bd9f8

// -[SCCache memoryCacheUsageInBytes]
// Type encoding: Q16@0:8
// Implementation: 0x10b7bdb0c

// -[SCCache count]
// Type encoding: Q16@0:8
// Implementation: 0x10b7bdb54

// -[SCCache sizeInBytes]
// Type encoding: Q16@0:8
// Implementation: 0x10b7bdb5c

// -[SCCache quotaInBytes]
// Type encoding: Q16@0:8
// Implementation: 0x10b7bdc30

// -[SCCache trimDiskCacheToQuota]
// Type encoding: v16@0:8
// Implementation: 0x10b7bdc38

// -[SCCache removeObjectForKey:block:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b7bdc74

// -[SCCache removeAllObjectsExceptKeys:block:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b7bddec

// -[SCCache removeExpiredContentWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7bddfc

// -[SCCache _removeAllObjectsCompletelyFromStorage:block:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x10b7be278

// -[SCCache _removeAllObjectsWithEnumerationFromStorage:exceptKeys:block:]
// Type encoding: v40@0:8Q16@24@?32
// Implementation: 0x10b7be5ec

// -[SCCache removeAllObjectsFromMemoryWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7beb3c

// -[SCCache removeAllObjectsWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7beb48

// -[SCCache removeObjectsForKeys:block:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b7beb54

// -[SCCache removeContentManagerObjectsForKeys:block:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b7bee4c

// -[SCCache contains:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b7bf248

// -[SCCache contains:block:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b7bf390

// -[SCCache setDidRemoveObjectFromDiskBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1006e1448

// -[SCCache _generateDiskRemovalBlock]
// Type encoding: @?16@0:8
// Implementation: 0x10044a844

// -[SCCache _executeCompletionBlock:withKey:object:]
// Type encoding: v40@0:8@?16@24@32
// Implementation: 0x10083a780

// -[SCCache _readObjectFromDiskCache:originalKey:dataDecoding:resetExpiration:whenLessThanDelta:block:returnExpired:]
// Type encoding: v68@0:8@16@24@?32@40d48@?56B64
// Implementation: 0x10081d2b0

// -[SCCache _configureDiskQuota]
// Type encoding: v16@0:8
// Implementation: 0x10044b3a0

// -[SCCache _updateExpiration:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b7bf9dc

// -[SCCache _writeToCacheType:cacheObject:encodedData:dataEncoding:forKey:expiration:dispatchGroup:finishBlock:failBlock:]
// Type encoding: v88@0:8Q16@24@32@?40@48@56@64@?72@?80
// Implementation: 0x10083a464

// -[SCCache _removeFromCacheType:transformedKeys:dispatchGroup:finishBlock:]
// Type encoding: v48@0:8Q16@24@32@?40
// Implementation: 0x10b7bfb7c

// -[SCCache handleEmergencyDiskConditionWithDispatchGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7bfec8

// -[SCCache removeExpiredContentAsyncForReason:dispatchGroup:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x10b7bff0c

// -[SCCache removeAllUserSessionDataAsync]
// Type encoding: v16@0:8
// Implementation: 0x10b7bffcc

// -[SCCache reportMetrics]
// Type encoding: @16@0:8
// Implementation: 0x10b7bffe0

// -[SCCache cacheKeyMetadataList]
// Type encoding: @16@0:8
// Implementation: 0x10b7c00a0

// -[SCCache kindName]
// Type encoding: @16@0:8
// Implementation: 0x10044c7a8

// -[SCCache metricsName]
// Type encoding: @16@0:8
// Implementation: 0x10b7c00a8

// -[SCCache underExperiment]
// Type encoding: B16@0:8
// Implementation: 0x10b7c00b0

// -[SCCache setUnderExperiment:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b7c00b8

// -[SCCache didRemoveObjectFromDiskBlock]
// Type encoding: @?16@0:8
// Implementation: 0x10b7c00c0

// -[SCCache memoryCache]
// Type encoding: @16@0:8
// Implementation: 0x10b7c00c8

// -[SCCache setMemoryCache:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7c00d0

// -[SCCache diskCache]
// Type encoding: @16@0:8
// Implementation: 0x10b7c0100

// -[SCCache setDiskCache:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7c0108

// -[SCCache cacheManager]
// Type encoding: @16@0:8
// Implementation: 0x10b7c0138

// -[SCCache setCacheManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7c0140

// -[SCCache workQueuePerformer]
// Type encoding: @16@0:8
// Implementation: 0x10b7c0170

// -[SCCache setWorkQueuePerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7c0178

// -[SCCache diskCacheQueuePerformer]
// Type encoding: @16@0:8
// Implementation: 0x10b7c01a8

// -[SCCache setDiskCacheQueuePerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7c01b0

// -[SCCache completionQueuePerformer]
// Type encoding: @16@0:8
// Implementation: 0x10b7c01e0

// -[SCCache setCompletionQueuePerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7c01e8

// -[SCCache isInvalidated]
// Type encoding: B16@0:8
// Implementation: 0x10b7c0218

// -[SCCache setIsInvalidated:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b7c0220

// -[SCCache .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b7c0228

// +[SCCache _cacheForName:defaultSizeMB:]
// Type encoding: @32@0:8Q16Q24
// Implementation: 0x1006e0f80

// +[SCCache allStaticCacheNames]
// Type encoding: @16@0:8
// Implementation: 0x10b7bcfe8

// +[SCCache _stringForCacheName:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1006e10d4

// +[SCCache publisherIconsImageCache]
// Type encoding: @16@0:8
// Implementation: 0x10b7bd078

// +[SCCache lensBitmojiListCache]
// Type encoding: @16@0:8
// Implementation: 0x10b7bd084

// +[SCCache lensesFaceImageProviderCache]
// Type encoding: @16@0:8
// Implementation: 0x10b7bd090

// +[SCCache mapImageDataCache]
// Type encoding: @16@0:8
// Implementation: 0x10b7bd09c

// +[SCCache searchImageDataCache]
// Type encoding: @16@0:8
// Implementation: 0x10b7bd0a8

// +[SCCache storiesMediaCache]
// Type encoding: @16@0:8
// Implementation: 0x1006e0f74

// +[SCCache liveStoriesIconCache]
// Type encoding: @16@0:8
// Implementation: 0x10b7bd0b4

// +[SCCache cognacMediaCache]
// Type encoding: @16@0:8
// Implementation: 0x10b7bd0c0

// +[SCCache snapcodeDataCache]
// Type encoding: @16@0:8
// Implementation: 0x10b7bd0cc

// +[SCCache cheetahStoriesFeedCache]
// Type encoding: @16@0:8
// Implementation: 0x10b7bd0d8

// +[SCCache discoverFeedResponseCacheV2]
// Type encoding: @16@0:8
// Implementation: 0x10b7bd0e4

// +[SCCache setSharedMemoryByteLimit:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b7bdacc

@end
