// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensDataProviderV2
// Superclass: NSObject
// Address: 0x112bf4748

@interface SCLensDataProviderV2

// Property: metadataProviderSettings; attributes: T@"SCLensMetadataProviderSettings",&,N,V_metadataProviderSettings
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: showBirthdayReplyLens; attributes: TB,N,V_showBirthdayReplyLens
// Property: lensUIStateListener; attributes: T@"<SCLensUIUpdateListener>",R,N

// -[SCLensDataProviderV2 initWithLensDataFetcher:adaptiveLensFetcher:metadataStore:sortStrategy:lensRemovalManager:prefetchFiltersFactory:configuration:lensDataConfigProvider:lensUserProvider:lensCarouselStudySettings:lensContentCacheProvider:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x1091e0838

// -[SCLensDataProviderV2 initWithLensDataFetcher:lensDataPrefetcher:adaptiveLensFetcher:metadataStore:sortStrategy:lensThumbnailLogger:lensRemovalManager:prefetchFiltersFactory:configuration:lensDataConfigProvider:lensUserProvider:lensCarouselStudySettings:lensContentCacheProvider:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112
// Implementation: 0x100b9ef90

// -[SCLensDataProviderV2 warmUp]
// Type encoding: v16@0:8
// Implementation: 0x100bcb0e4

// -[SCLensDataProviderV2 startUpdatingLensData]
// Type encoding: @16@0:8
// Implementation: 0x1091e08e4

// -[SCLensDataProviderV2 stopUpdatingLensDataWithToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091e0938

// -[SCLensDataProviderV2 _currentFetchType]
// Type encoding: q16@0:8
// Implementation: 0x1091e0990

// -[SCLensDataProviderV2 didUpdateLenses:lensMetadataStore:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091e09bc

// -[SCLensDataProviderV2 didUpdateLensesToPrefetch:lensMetadataStore:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091e0a84

// -[SCLensDataProviderV2 _forceUpdateSelectedStudioLensIfNeededWithUpdatedLenses:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091e0ae4

// -[SCLensDataProviderV2 lenses]
// Type encoding: @16@0:8
// Implementation: 0x1091e0cd4

// -[SCLensDataProviderV2 lensesToPresent]
// Type encoding: @16@0:8
// Implementation: 0x1091e0d88

// -[SCLensDataProviderV2 _sortStrategyParameters]
// Type encoding: @16@0:8
// Implementation: 0x1091e0fc0

// -[SCLensDataProviderV2 _prefetchSortStrategyParameters]
// Type encoding: @16@0:8
// Implementation: 0x1091e10b0

// -[SCLensDataProviderV2 lensForId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091e1134

// -[SCLensDataProviderV2 syncDownloadableData]
// Type encoding: v16@0:8
// Implementation: 0x1091e11a0

// -[SCLensDataProviderV2 setDevicePosition:]
// Type encoding: v24@0:8q16
// Implementation: 0x100c3df88

// -[SCLensDataProviderV2 applicableContext]
// Type encoding: @16@0:8
// Implementation: 0x1091e11a8

// -[SCLensDataProviderV2 filterRemovedLensIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c705c8

// -[SCLensDataProviderV2 applyMetadataProviderSettings:]
// Type encoding: B24@0:8@16
// Implementation: 0x100c3e320

// -[SCLensDataProviderV2 metadataProviderSettings]
// Type encoding: @16@0:8
// Implementation: 0x100c3e054

// -[SCLensDataProviderV2 ensureNonNilSettings]
// Type encoding: v16@0:8
// Implementation: 0x100c3e084

// -[SCLensDataProviderV2 _shouldTriggerFetchingForCurrentCameraPosition]
// Type encoding: B16@0:8
// Implementation: 0x1091e12fc

// -[SCLensDataProviderV2 cameraPosition]
// Type encoding: q16@0:8
// Implementation: 0x1091e1348

// -[SCLensDataProviderV2 originalLens]
// Type encoding: @16@0:8
// Implementation: 0x1091e1384

// -[SCLensDataProviderV2 addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091e138c

// -[SCLensDataProviderV2 removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091e1394

// -[SCLensDataProviderV2 addProgressListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091e139c

// -[SCLensDataProviderV2 removeProgressListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091e13a4

// -[SCLensDataProviderV2 addEventsListener:]
// Type encoding: B24@0:8@16
// Implementation: 0x1091e13ac

// -[SCLensDataProviderV2 removeEventsListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091e13b4

// -[SCLensDataProviderV2 lensUIStateListener]
// Type encoding: @16@0:8
// Implementation: 0x1091e13bc

// -[SCLensDataProviderV2 cancelDownloads]
// Type encoding: v16@0:8
// Implementation: 0x1091e13c0

// -[SCLensDataProviderV2 clearCacheWithCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1091e13c8

// -[SCLensDataProviderV2 fetchAsset:lens:fetchSourceType:completionPerformer:completion:]
// Type encoding: v56@0:8@16@24q32@40@?48
// Implementation: 0x1091e13d0

// -[SCLensDataProviderV2 fetchLenses:fetchSourceType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1091e13d8

// -[SCLensDataProviderV2 fetchLenses:requestTiming:fetchSourceType:]
// Type encoding: @40@0:8@16q24q32
// Implementation: 0x1091e13e0

// -[SCLensDataProviderV2 fetchCachedLenses:fetchSourceType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1091e13e8

// -[SCLensDataProviderV2 fetchIconsForLenses:requestTiming:fetchSourceType:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x1091e13f0

// -[SCLensDataProviderV2 pauseDownloads]
// Type encoding: v16@0:8
// Implementation: 0x1091e13f8

// -[SCLensDataProviderV2 resumeDownloads]
// Type encoding: v16@0:8
// Implementation: 0x1091e1400

// -[SCLensDataProviderV2 fetchLens:fetchSourceType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1091e1408

// -[SCLensDataProviderV2 fetchLensesIfNeededWithFetchSourceType:]
// Type encoding: v24@0:8q16
// Implementation: 0x1091e1410

// -[SCLensDataProviderV2 prefetchLensesIfNeededWithFetchSourceType:]
// Type encoding: v24@0:8q16
// Implementation: 0x1091e1418

// -[SCLensDataProviderV2 isFetchingLens:]
// Type encoding: B24@0:8@16
// Implementation: 0x1091e1420

// -[SCLensDataProviderV2 fetchMoreLensesIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1091e1428

// -[SCLensDataProviderV2 suggestedLoadMoreTriggerDistance]
// Type encoding: Q16@0:8
// Implementation: 0x1091e1434

// -[SCLensDataProviderV2 selectedLens]
// Type encoding: @16@0:8
// Implementation: 0x100c7078c

// -[SCLensDataProviderV2 setSelectedLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091e143c

// -[SCLensDataProviderV2 setStartVisibleIndex:endVisibleIndex:selectedIndex:]
// Type encoding: v40@0:8q16q24Q32
// Implementation: 0x1091e146c

// -[SCLensDataProviderV2 firstApplicableLens]
// Type encoding: @16@0:8
// Implementation: 0x1091e1474

// -[SCLensDataProviderV2 _sortAndPrefetchLenses]
// Type encoding: v16@0:8
// Implementation: 0x1091e1580

// -[SCLensDataProviderV2 _schedulePrefetchWithFilter:sortStrategyParameters:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091e1820

// -[SCLensDataProviderV2 _currentPrecachedLenses]
// Type encoding: @16@0:8
// Implementation: 0x1091e1970

// -[SCLensDataProviderV2 _precachedLensIds]
// Type encoding: @16@0:8
// Implementation: 0x1091e19b0

// -[SCLensDataProviderV2 setShowBirthdayReplyLens:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091e1a0c

// -[SCLensDataProviderV2 updateLenses]
// Type encoding: v16@0:8
// Implementation: 0x1091e1a54

// -[SCLensDataProviderV2 updateLensesWithFetching:requiresAnimation:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x1091e1a64

// -[SCLensDataProviderV2 _updateLensesWithFetching:requiresAnimation:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x1091e1aa4

// -[SCLensDataProviderV2 _setupLensUserStatusSubscription]
// Type encoding: v16@0:8
// Implementation: 0x100bc87f0

// -[SCLensDataProviderV2 lensDataFetchingMediator:didUpdateContentForLens:contentUpdateType:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x1091e1d88

// -[SCLensDataProviderV2 lensDataFetchingMediatorDidStartUpdatingLensData:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091e1da0

// -[SCLensDataProviderV2 lensDataFetchingMediatorDidStopUpdatingLensData:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091e1da4

// -[SCLensDataProviderV2 lensDataFetchingMediatorUpdateLenses:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091e1dac

// -[SCLensDataProviderV2 lensDataProviderConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x1091e1db0

// -[SCLensDataProviderV2 setPrefetchMode:]
// Type encoding: v24@0:8q16
// Implementation: 0x1091e1dd8

// -[SCLensDataProviderV2 _setPrefetchMode:]
// Type encoding: v24@0:8q16
// Implementation: 0x1091e1ddc

// -[SCLensDataProviderV2 _prefetchMode]
// Type encoding: q16@0:8
// Implementation: 0x1091e1eb8

// -[SCLensDataProviderV2 didEndDisplayingLens:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1091e1eec

// -[SCLensDataProviderV2 didDrawIcon:forLens:atIndex:withContext:]
// Type encoding: v48@0:8@16@24q32Q40
// Implementation: 0x1091e1f4c

// -[SCLensDataProviderV2 didHideLensesWithContext:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1091e1fd4

// -[SCLensDataProviderV2 didActivateLens:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1091e2010

// -[SCLensDataProviderV2 didSelectLens:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1091e20b8

// -[SCLensDataProviderV2 didUpdateActiveLensOrder:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1091e2118

// -[SCLensDataProviderV2 willDisplayLens:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1091e2178

// -[SCLensDataProviderV2 didUpdateDisplayedLens:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1091e21d8

// -[SCLensDataProviderV2 willShowLensesWithContext:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1091e2238

// -[SCLensDataProviderV2 showBirthdayReplyLens]
// Type encoding: B16@0:8
// Implementation: 0x1091e2274

// -[SCLensDataProviderV2 setMetadataProviderSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091e227c

// -[SCLensDataProviderV2 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091e22ac

@end
