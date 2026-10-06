// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesCachingMediaManager
// Superclass: SCCachingMediaManager
// Address: 0x112a75db8

@interface SCMemoriesCachingMediaManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesCachingMediaManager initWithCacheURL:galleryLogger:streamingEntityProviderPlugInScopeExposer:coreConfigProvider:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1058d1804

// -[SCMemoriesCachingMediaManager _exposeStreamingEntityProviderScope]
// Type encoding: v16@0:8
// Implementation: 0x1058d1a38

// -[SCMemoriesCachingMediaManager requestCachingMediaForSnap:targetSize:orientation:scaleMalibu:deliveryMode:shouldCacheMediaInMemory:queue:cacheMissHandler:resultHandler:]
// Type encoding: @84@0:8@16{CGSize=dd}24B40B44Q48B56@60@?68@?76
// Implementation: 0x1058d1cbc

// -[SCMemoriesCachingMediaManager requestCachingMediaForSnap:snapDetail:targetSize:orientation:scaleMalibu:deliveryMode:shouldCacheMediaInMemory:queue:cacheMissHandler:resultHandler:]
// Type encoding: @92@0:8@16@24{CGSize=dd}32B48B52Q56B64@68@?76@?84
// Implementation: 0x1058d1cfc

// -[SCMemoriesCachingMediaManager _requestSnap:cancelableGroup:gallerySnap:handler:queue:requestOptions:snapDetail:targetSize:]
// Type encoding: v80@0:8@?16@24@32@?40@48@56@64r^{CGSize=dd}72
// Implementation: 0x1058d1e2c

// -[SCMemoriesCachingMediaManager requestCachingMediaForSnap:snapDetail:targetSize:orientation:scaleMalibu:requestOptions:queue:cacheMissHandler:resultHandler:]
// Type encoding: @88@0:8@16@24{CGSize=dd}32B48B52@56@64@?72@?80
// Implementation: 0x1058d1f38

// -[SCMemoriesCachingMediaManager requestCachingMediaForSnap:targetSize:orientation:scaleMalibu:deliveryMode:shouldCacheMediaInMemory:queue:cacheMissHandler:finalResultHandler:]
// Type encoding: @84@0:8@16{CGSize=dd}24B40B44Q48B56@60@?68@?76
// Implementation: 0x1058d2044

// -[SCMemoriesCachingMediaManager _requestCachingMediaForSnap:snapDetail:targetSize:orientation:scaleMalibu:requestOptions:queue:cacheMissHandler:finalResultHandler:]
// Type encoding: @88@0:8@16@24{CGSize=dd}32B48B52@56@64@?72@?80
// Implementation: 0x1058d2160

// -[SCMemoriesCachingMediaManager isLiveRenderSnap:]
// Type encoding: B24@0:8@16
// Implementation: 0x1058d2958

// -[SCMemoriesCachingMediaManager _cachingMediaGallerySnapForGallerySnap:snapDetail:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1058d2a04

// -[SCMemoriesCachingMediaManager cleanUpCacheWithQueue:block:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1058d2b5c

// -[SCMemoriesCachingMediaManager totalSizeOfCacheFilesWithQueue:handler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1058d2b90

// -[SCMemoriesCachingMediaManager handleEmergencyDiskConditionWithDispatchGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058d2bc4

// -[SCMemoriesCachingMediaManager kindName]
// Type encoding: @16@0:8
// Implementation: 0x1058d2bf8

// -[SCMemoriesCachingMediaManager removeAllUserSessionDataAsync]
// Type encoding: v16@0:8
// Implementation: 0x1058d2c34

// -[SCMemoriesCachingMediaManager removeExpiredContentAsyncForReason:dispatchGroup:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x1058d2c68

// -[SCMemoriesCachingMediaManager reportMetrics]
// Type encoding: @16@0:8
// Implementation: 0x1058d2c9c

// -[SCMemoriesCachingMediaManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1058d2cd8

@end
