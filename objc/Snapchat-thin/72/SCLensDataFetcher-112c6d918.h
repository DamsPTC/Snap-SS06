// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensDataFetcher
// Superclass: NSObject
// Address: 0x112c6d918

@interface SCLensDataFetcher

// Property: operationsFactory; attributes: T@"SCLensDownloadOperationFactory",&,N,V_operationsFactory
// Property: announcer; attributes: T@"SCLensDataFetcherListenerAnnouncer",&,N,V_announcer
// Property: progressAnnouncer; attributes: T@"SCLensDataFetcherProgressListenerAnnouncer",&,N,V_progressAnnouncer
// Property: contentQueue; attributes: T@"<SCLensLoadingQueueProtocol>",&,N,V_contentQueue
// Property: imageQueue; attributes: T@"<SCLensLoadingQueueProtocol>",&,N,V_imageQueue
// Property: assetsQueue; attributes: T@"<SCLensLoadingQueueProtocol>",&,N,V_assetsQueue
// Property: externalDataLoadingQueue; attributes: T@"<SCLensLoadingQueueProtocol>",&,N,V_externalDataLoadingQueue
// Property: warmupQueue; attributes: T@"<SCLensLoadingQueueProtocol>",&,N,V_warmupQueue
// Property: allQueues; attributes: T@"NSArray",&,N,V_allQueues
// Property: requestManager; attributes: T@"SCRequestManager",&,N,V_requestManager
// Property: urlDataFetcher; attributes: T@"SCLazy",&,N,V_urlDataFetcher
// Property: throttler; attributes: T@"SCLensFetchingThrottler",&,N,V_throttler
// Property: ranker; attributes: T@"SCLensFetchingRanker",&,N,V_ranker
// Property: performer; attributes: T@"<SCPerforming>",R,N,V_performer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: lensUIStateListener; attributes: T@"<SCLensUIUpdateListener>",R,N

// -[SCLensDataFetcher initWithUrlDataFetcher:operationsFactory:lensDataFetcherUIState:performer:visibleLensesPerformer:lensDataFetcherLoadingQueueFactory:lensIconRepository:fetchTypeProvider:lensDataConfig:acfEnabled:]
// Type encoding: @92@0:8@16@24@32@40@48@56@64@72@80B88
// Implementation: 0x100bade28

// -[SCLensDataFetcher _subscribeToWillStartOperationsObservable]
// Type encoding: v16@0:8
// Implementation: 0x100bbab94

// -[SCLensDataFetcher subscribeOnAdaptiveFetchingNotifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x100bc0c04

// -[SCLensDataFetcher addEventsListener:]
// Type encoding: B24@0:8@16
// Implementation: 0x100bbb02c

// -[SCLensDataFetcher removeEventsListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0d37e0

// -[SCLensDataFetcher fetchLenses:requestTiming:fetchSourceType:]
// Type encoding: @40@0:8@16q24q32
// Implementation: 0x10b0d37e8

// -[SCLensDataFetcher fetchCachedLenses:fetchSourceType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b0d37f4

// -[SCLensDataFetcher _fetchLenses:requestTiming:fetchSourceType:cacheOnly:performer:]
// Type encoding: @52@0:8@16q24q32B40@44
// Implementation: 0x10b0d3820

// -[SCLensDataFetcher fetchContentForLens:requestTiming:fetchSourceType:]
// Type encoding: @40@0:8@16q24q32
// Implementation: 0x10b0d433c

// -[SCLensDataFetcher fetchAsset:lens:fetchSourceType:completionPerformer:completion:]
// Type encoding: v56@0:8@16@24q32@40@?48
// Implementation: 0x10b0d45f4

// -[SCLensDataFetcher _fetchAsset:lens:fetchSourceType:cacheOnly:performer:completionPerformer:completion:]
// Type encoding: v68@0:8@16@24q32B40@44@52@?60
// Implementation: 0x10b0d4624

// -[SCLensDataFetcher fetchLenses:fetchSourceType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10b0d4ed0

// -[SCLensDataFetcher fetchIconsForLenses:requestTiming:fetchSourceType:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x10b0d4edc

// -[SCLensDataFetcher _fetchIconsForLenses:requestTiming:fetchSourceType:cacheOnly:performer:]
// Type encoding: v52@0:8@16q24q32B40@44
// Implementation: 0x10b0d4ee8

// -[SCLensDataFetcher cancelDownloads]
// Type encoding: v16@0:8
// Implementation: 0x10b0d536c

// -[SCLensDataFetcher pauseDownloads]
// Type encoding: v16@0:8
// Implementation: 0x10b0d53a4

// -[SCLensDataFetcher resumeDownloads]
// Type encoding: v16@0:8
// Implementation: 0x10b0d53dc

// -[SCLensDataFetcher removeExpiredData:completion:]
// Type encoding: v32@0:8q16@?24
// Implementation: 0x10b0d5414

// -[SCLensDataFetcher clearInMemoryCache]
// Type encoding: v16@0:8
// Implementation: 0x10b0d56c0

// -[SCLensDataFetcher clearCacheFromTweaks]
// Type encoding: v16@0:8
// Implementation: 0x10b0d570c

// -[SCLensDataFetcher clearCacheWithCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b0d5888

// -[SCLensDataFetcher lensUIStateListener]
// Type encoding: @16@0:8
// Implementation: 0x10b0d5b54

// -[SCLensDataFetcher addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x100bbcef4

// -[SCLensDataFetcher removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0d5b7c

// -[SCLensDataFetcher addProgressListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0d5bcc

// -[SCLensDataFetcher removeProgressListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0d5c1c

// -[SCLensDataFetcher applicationDidEnterBackground:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0d5c6c

// -[SCLensDataFetcher applicationDidReceiveMemoryWarning:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0d5c70

// -[SCLensDataFetcher willDisplayLens:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b0d5cfc

// -[SCLensDataFetcher didUpdateDisplayedLens:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b0d5d00

// -[SCLensDataFetcher didEndDisplayingLens:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b0d5d04

// -[SCLensDataFetcher didDrawIcon:forLens:atIndex:withContext:]
// Type encoding: v48@0:8@16@24q32Q40
// Implementation: 0x10b0d5d08

// -[SCLensDataFetcher didActivateLens:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b0d5d0c

// -[SCLensDataFetcher didHideLensesWithContext:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b0d6114

// -[SCLensDataFetcher didUpdateActiveLensOrder:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b0d6160

// -[SCLensDataFetcher _notifyVisibleLensUpdatedEventWithDebounce]
// Type encoding: v16@0:8
// Implementation: 0x10b0d6164

// -[SCLensDataFetcher _didFinishUpdatingVisibleLens]
// Type encoding: v16@0:8
// Implementation: 0x10b0d61b0

// -[SCLensDataFetcher cancelDownloadsAndClearInMemoryCacheWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b0d6210

// -[SCLensDataFetcher kindName]
// Type encoding: @16@0:8
// Implementation: 0x100bdff88

// -[SCLensDataFetcher handleEmergencyDiskConditionWithDispatchGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0d62f0

// -[SCLensDataFetcher removeExpiredContentAsyncForReason:dispatchGroup:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x10b0d6388

// -[SCLensDataFetcher removeAllUserSessionDataAsync]
// Type encoding: v16@0:8
// Implementation: 0x10b0d6420

// -[SCLensDataFetcher reportMetrics]
// Type encoding: @16@0:8
// Implementation: 0x10b0d643c

// -[SCLensDataFetcher _handleLensVisibilityChanged]
// Type encoding: v16@0:8
// Implementation: 0x10b0d6444

// -[SCLensDataFetcher _scheduleOperation:cacheOnly:scheduleQueue:]
// Type encoding: @36@0:8@?16B24@28
// Implementation: 0x10b0d64ac

// -[SCLensDataFetcher _checkCacheAndScheduleOperationIfNeeded:cacheOnly:scheduleQueue:]
// Type encoding: @36@0:8@?16B24@28
// Implementation: 0x10b0d64b0

// -[SCLensDataFetcher _fetchVisibleLensesIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10b0d68e0

// -[SCLensDataFetcher _scheduleContentDownloadingForLens:requestTiming:fetchSourceType:cacheOnly:]
// Type encoding: @44@0:8@16q24q32B40
// Implementation: 0x10b0d6a64

// -[SCLensDataFetcher _scheduleIconDownloadingForLens:requestTiming:cacheOnly:]
// Type encoding: @36@0:8@16q24B32
// Implementation: 0x10b0d6ea8

// -[SCLensDataFetcher _scheduleExternalDataDownloadingForLens:requestTiming:fetchSourceType:cacheOnly:]
// Type encoding: @44@0:8@16q24q32B40
// Implementation: 0x10b0d70b4

// -[SCLensDataFetcher _determineCurrentFetchTypeWithFetchSourceType:]
// Type encoding: q24@0:8q16
// Implementation: 0x10b0d73b0

// -[SCLensDataFetcher performer]
// Type encoding: @16@0:8
// Implementation: 0x10b0d7424

// -[SCLensDataFetcher operationsFactory]
// Type encoding: @16@0:8
// Implementation: 0x10b0d742c

// -[SCLensDataFetcher setOperationsFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0d7434

// -[SCLensDataFetcher announcer]
// Type encoding: @16@0:8
// Implementation: 0x100bbcf44

// -[SCLensDataFetcher setAnnouncer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0d7464

// -[SCLensDataFetcher progressAnnouncer]
// Type encoding: @16@0:8
// Implementation: 0x10b0d7494

// -[SCLensDataFetcher setProgressAnnouncer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0d749c

// -[SCLensDataFetcher contentQueue]
// Type encoding: @16@0:8
// Implementation: 0x10b0d74cc

// -[SCLensDataFetcher setContentQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0d74d4

// -[SCLensDataFetcher imageQueue]
// Type encoding: @16@0:8
// Implementation: 0x10b0d7504

// -[SCLensDataFetcher setImageQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0d750c

// -[SCLensDataFetcher assetsQueue]
// Type encoding: @16@0:8
// Implementation: 0x10b0d753c

// -[SCLensDataFetcher setAssetsQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0d7544

// -[SCLensDataFetcher externalDataLoadingQueue]
// Type encoding: @16@0:8
// Implementation: 0x10b0d7574

// -[SCLensDataFetcher setExternalDataLoadingQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0d757c

// -[SCLensDataFetcher warmupQueue]
// Type encoding: @16@0:8
// Implementation: 0x10b0d75ac

// -[SCLensDataFetcher setWarmupQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0d75b4

// -[SCLensDataFetcher allQueues]
// Type encoding: @16@0:8
// Implementation: 0x10b0d75e4

// -[SCLensDataFetcher setAllQueues:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0d75ec

// -[SCLensDataFetcher requestManager]
// Type encoding: @16@0:8
// Implementation: 0x10b0d761c

// -[SCLensDataFetcher setRequestManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0d7624

// -[SCLensDataFetcher urlDataFetcher]
// Type encoding: @16@0:8
// Implementation: 0x10b0d7654

// -[SCLensDataFetcher setUrlDataFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0d765c

// -[SCLensDataFetcher throttler]
// Type encoding: @16@0:8
// Implementation: 0x10b0d768c

// -[SCLensDataFetcher setThrottler:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0d7694

// -[SCLensDataFetcher ranker]
// Type encoding: @16@0:8
// Implementation: 0x10b0d76c4

// -[SCLensDataFetcher setRanker:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0d76cc

// -[SCLensDataFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0d76fc

// +[SCLensDataFetcher _unableToCreateOperationError]
// Type encoding: @16@0:8
// Implementation: 0x10b0d72d0

// +[SCLensDataFetcher _rankingContextFromUIUpdateContext:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x10b0d7408

// +[SCLensDataFetcher _lensFetchTypeFromLensFetchSourceType:]
// Type encoding: q24@0:8q16
// Implementation: 0x10b0d7414

@end
