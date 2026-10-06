// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensDataFetchingMediator
// Superclass: NSObject
// Address: 0x112c6da08

@interface SCLensDataFetchingMediator

// Property: delegate; attributes: T@"<SCLensDataFetchingMediatorDelegate>",W,N,V_delegate
// Property: updating; attributes: TB,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: lensUIStateListener; attributes: T@"<SCLensUIUpdateListener>",R,N

// -[SCLensDataFetchingMediator initWithLensDataFetcher:lensDataPrefetcher:lensThumbnailLogger:appLifecycleManager:downloadableLensesCached:lensDataFetchingNotifier:ignoreReachabilityStatus:delegate:]
// Type encoding: @72@0:8@16@24@32@40B48@52B60@64
// Implementation: 0x100ba08f8

// -[SCLensDataFetchingMediator dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10b0d8af8

// -[SCLensDataFetchingMediator fetchCachedDownloadableLensesWithFetchSourceType:performImmediately:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x10b0d8b3c

// -[SCLensDataFetchingMediator fetchDownloadableLensesWithFetchSourceType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b0d8de0

// -[SCLensDataFetchingMediator updateDownloadableLenses:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0d8efc

// -[SCLensDataFetchingMediator updateDownloadableLenses:partialDownloadableLenses:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b0d8f04

// -[SCLensDataFetchingMediator updating]
// Type encoding: B16@0:8
// Implementation: 0x100c400e4

// -[SCLensDataFetchingMediator addToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0d8f70

// -[SCLensDataFetchingMediator removeToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0d8f78

// -[SCLensDataFetchingMediator startUpdatingLensData]
// Type encoding: @16@0:8
// Implementation: 0x10b0d8f80

// -[SCLensDataFetchingMediator stopUpdatingLensDataWithToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0d9020

// -[SCLensDataFetchingMediator fetchLensesIfNeededWithFetchSourceType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b0d9080

// -[SCLensDataFetchingMediator prefetchLensesIfNeededWithFetchSourceType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b0d90bc

// -[SCLensDataFetchingMediator fetchLens:fetchSourceType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b0d9100

// -[SCLensDataFetchingMediator isFetchingLens:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b0d9210

// -[SCLensDataFetchingMediator lensUIStateListener]
// Type encoding: @16@0:8
// Implementation: 0x10b0d92f4

// -[SCLensDataFetchingMediator cancelDownloads]
// Type encoding: v16@0:8
// Implementation: 0x10b0d933c

// -[SCLensDataFetchingMediator pauseDownloads]
// Type encoding: v16@0:8
// Implementation: 0x10b0d9370

// -[SCLensDataFetchingMediator resumeDownloads]
// Type encoding: v16@0:8
// Implementation: 0x10b0d93a4

// -[SCLensDataFetchingMediator clearCacheWithCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b0d93d8

// -[SCLensDataFetchingMediator fetchAsset:lens:fetchSourceType:completionPerformer:completion:]
// Type encoding: v56@0:8@16@24q32@40@?48
// Implementation: 0x10b0d9428

// -[SCLensDataFetchingMediator fetchLenses:fetchSourceType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10b0d94d8

// -[SCLensDataFetchingMediator fetchLenses:requestTiming:fetchSourceType:]
// Type encoding: @40@0:8@16q24q32
// Implementation: 0x10b0d94e4

// -[SCLensDataFetchingMediator fetchCachedLenses:fetchSourceType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b0d9620

// -[SCLensDataFetchingMediator fetchIconsForLenses:requestTiming:fetchSourceType:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x10b0d9680

// -[SCLensDataFetchingMediator addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0d96e8

// -[SCLensDataFetchingMediator removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0d9738

// -[SCLensDataFetchingMediator addProgressListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0d9788

// -[SCLensDataFetchingMediator removeProgressListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0d97d8

// -[SCLensDataFetchingMediator addEventsListener:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b0d9828

// -[SCLensDataFetchingMediator removeEventsListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0d988c

// -[SCLensDataFetchingMediator reachabilityStatusChangedNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0d98dc

// -[SCLensDataFetchingMediator _getDownloadableLensesToFetch:]
// Type encoding: @20@0:8B16
// Implementation: 0x10b0d99d4

// -[SCLensDataFetchingMediator _getPartialDownloadableLensesToFetch:]
// Type encoding: @20@0:8B16
// Implementation: 0x10b0d9ae8

// -[SCLensDataFetchingMediator isLensWithInvalidContent:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b0d9bfc

// -[SCLensDataFetchingMediator didUpdateContentForLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0d9c54

// -[SCLensDataFetchingMediator didUpdateContentForLens:contentUpdateType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b0d9c5c

// -[SCLensDataFetchingMediator addFetcherListeners]
// Type encoding: v16@0:8
// Implementation: 0x10b0d9ccc

// -[SCLensDataFetchingMediator removeFetcherListeners]
// Type encoding: v16@0:8
// Implementation: 0x10b0d9d40

// -[SCLensDataFetchingMediator willStartLoadingLens:lensAssets:externalData:fromAsf:lensDataFetcher:]
// Type encoding: v48@0:8@16@24B32B36@40
// Implementation: 0x10b0d9db4

// -[SCLensDataFetchingMediator willStartLoadingImageForLens:fromCache:fromAsf:lensDataFetcher:]
// Type encoding: v40@0:8@16B24B28@32
// Implementation: 0x10b0d9db8

// -[SCLensDataFetchingMediator willStartLoadingContentForLens:fromCache:fromAsf:lensDataFetcher:]
// Type encoding: v40@0:8@16B24B28@32
// Implementation: 0x10b0d9edc

// -[SCLensDataFetchingMediator willStartLoadingAsset:lens:fromAsf:lensDataFetcher:]
// Type encoding: v44@0:8@16@24B32@36
// Implementation: 0x10b0da000

// -[SCLensDataFetchingMediator willStartLoadingExternalDataForLens:fromAsf:lensDataFetcher:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x10b0da004

// -[SCLensDataFetchingMediator didFinishLoadingImageForLens:image:error:fromCache:fromAsf:lensDataFetcher:]
// Type encoding: v56@0:8@16@24@32B40B44@48
// Implementation: 0x10b0da110

// -[SCLensDataFetchingMediator didFinishLoadingContentForLens:contentPath:error:fromCache:fromAsf:lensDataFetcher:]
// Type encoding: v56@0:8@16@24@32B40B44@48
// Implementation: 0x10b0da264

// -[SCLensDataFetchingMediator didFinishLoadingContentForAsset:lens:content:error:fromAsf:lensDataFetcher:]
// Type encoding: v60@0:8@16@24@32@40B48@52
// Implementation: 0x10b0da4a0

// -[SCLensDataFetchingMediator didFinishLoadingExternalDataForLens:error:fromAsf:lensDataFetcher:]
// Type encoding: v44@0:8@16@24B32@36
// Implementation: 0x10b0da63c

// -[SCLensDataFetchingMediator lensDataFetcher:didFinishLoadingContentForLens:successfully:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10b0da74c

// -[SCLensDataFetchingMediator didClearCacheForLensDataFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0da750

// -[SCLensDataFetchingMediator didClearIconsForLensDataFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0da7b0

// -[SCLensDataFetchingMediator didClearCacheFromTweaksForLensDataFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0da810

// -[SCLensDataFetchingMediator didCancelDownloadsAndClearInMemoryCacheForLensDataFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0da814

// -[SCLensDataFetchingMediator _subscribeOnNotifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x100bc5af4

// -[SCLensDataFetchingMediator _clearCache]
// Type encoding: v16@0:8
// Implementation: 0x10b0dacec

// -[SCLensDataFetchingMediator delegate]
// Type encoding: @16@0:8
// Implementation: 0x10b0dad14

// -[SCLensDataFetchingMediator setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0dad2c

// -[SCLensDataFetchingMediator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0dad38

// +[SCLensDataFetchingMediator _isIncompleteFutureError:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b0dac6c

@end
