// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdsCameraLensDataProvider
// Superclass: NSObject
// Address: 0x112bf4518

@interface SCAdsCameraLensDataProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: showBirthdayReplyLens; attributes: TB,N,V_showBirthdayReplyLens
// Property: lensUIStateListener; attributes: T@"<SCLensUIUpdateListener>",R,N

// -[SCAdsCameraLensDataProvider initWithLensDataFetcher:lensDataPrefetcher:lensThumbnailLogger:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1091de3ac

// -[SCAdsCameraLensDataProvider warmUp]
// Type encoding: v16@0:8
// Implementation: 0x1091de4dc

// -[SCAdsCameraLensDataProvider lenses]
// Type encoding: @16@0:8
// Implementation: 0x1091de4e0

// -[SCAdsCameraLensDataProvider updateLenses:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091de508

// -[SCAdsCameraLensDataProvider clearLenses]
// Type encoding: v16@0:8
// Implementation: 0x1091de568

// -[SCAdsCameraLensDataProvider lensForId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091de580

// -[SCAdsCameraLensDataProvider updateDownloadableData]
// Type encoding: v16@0:8
// Implementation: 0x1091de630

// -[SCAdsCameraLensDataProvider setDevicePosition:]
// Type encoding: v24@0:8q16
// Implementation: 0x1091de640

// -[SCAdsCameraLensDataProvider applicableContext]
// Type encoding: @16@0:8
// Implementation: 0x1091de644

// -[SCAdsCameraLensDataProvider originalLens]
// Type encoding: @16@0:8
// Implementation: 0x1091de674

// -[SCAdsCameraLensDataProvider firstApplicableLens]
// Type encoding: @16@0:8
// Implementation: 0x1091de67c

// -[SCAdsCameraLensDataProvider addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091de684

// -[SCAdsCameraLensDataProvider removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091de68c

// -[SCAdsCameraLensDataProvider addProgressListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091de694

// -[SCAdsCameraLensDataProvider removeProgressListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091de69c

// -[SCAdsCameraLensDataProvider addEventsListener:]
// Type encoding: B24@0:8@16
// Implementation: 0x1091de6a4

// -[SCAdsCameraLensDataProvider removeEventsListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091de6ac

// -[SCAdsCameraLensDataProvider selectedLens]
// Type encoding: @16@0:8
// Implementation: 0x1091de6b4

// -[SCAdsCameraLensDataProvider setSelectedLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091de6dc

// -[SCAdsCameraLensDataProvider setStartVisibleIndex:endVisibleIndex:selectedIndex:]
// Type encoding: v40@0:8q16q24Q32
// Implementation: 0x1091de70c

// -[SCAdsCameraLensDataProvider fetchLens:fetchSourceType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1091de710

// -[SCAdsCameraLensDataProvider fetchLensesIfNeededWithFetchSourceType:]
// Type encoding: v24@0:8q16
// Implementation: 0x1091de718

// -[SCAdsCameraLensDataProvider prefetchLensesIfNeededWithFetchSourceType:]
// Type encoding: v24@0:8q16
// Implementation: 0x1091de720

// -[SCAdsCameraLensDataProvider lensUIStateListener]
// Type encoding: @16@0:8
// Implementation: 0x1091de728

// -[SCAdsCameraLensDataProvider cancelDownloads]
// Type encoding: v16@0:8
// Implementation: 0x1091de730

// -[SCAdsCameraLensDataProvider clearCacheWithCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1091de738

// -[SCAdsCameraLensDataProvider fetchAsset:lens:fetchSourceType:completionPerformer:completion:]
// Type encoding: v56@0:8@16@24q32@40@?48
// Implementation: 0x1091de740

// -[SCAdsCameraLensDataProvider fetchLenses:fetchSourceType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1091de748

// -[SCAdsCameraLensDataProvider fetchLenses:requestTiming:fetchSourceType:]
// Type encoding: @40@0:8@16q24q32
// Implementation: 0x1091de750

// -[SCAdsCameraLensDataProvider fetchCachedLenses:fetchSourceType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1091de758

// -[SCAdsCameraLensDataProvider fetchIconsForLenses:requestTiming:fetchSourceType:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x1091de760

// -[SCAdsCameraLensDataProvider pauseDownloads]
// Type encoding: v16@0:8
// Implementation: 0x1091de768

// -[SCAdsCameraLensDataProvider resumeDownloads]
// Type encoding: v16@0:8
// Implementation: 0x1091de770

// -[SCAdsCameraLensDataProvider isFetchingLens:]
// Type encoding: B24@0:8@16
// Implementation: 0x1091de778

// -[SCAdsCameraLensDataProvider startUpdatingLensData]
// Type encoding: @16@0:8
// Implementation: 0x1091de780

// -[SCAdsCameraLensDataProvider stopUpdatingLensDataWithToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091de788

// -[SCAdsCameraLensDataProvider fetchMoreLensesIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1091de790

// -[SCAdsCameraLensDataProvider suggestedLoadMoreTriggerDistance]
// Type encoding: Q16@0:8
// Implementation: 0x1091de794

// -[SCAdsCameraLensDataProvider lensDataFetchingMediator:didUpdateContentForLens:contentUpdateType:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x1091de79c

// -[SCAdsCameraLensDataProvider lensDataFetchingMediatorDidStartUpdatingLensData:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091de7b4

// -[SCAdsCameraLensDataProvider lensDataFetchingMediatorDidStopUpdatingLensData:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091de7b8

// -[SCAdsCameraLensDataProvider lensDataFetchingMediatorUpdateLenses:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091de7bc

// -[SCAdsCameraLensDataProvider setPrefetchMode:]
// Type encoding: v24@0:8q16
// Implementation: 0x1091de7c0

// -[SCAdsCameraLensDataProvider updateLenses]
// Type encoding: v16@0:8
// Implementation: 0x1091de7c4

// -[SCAdsCameraLensDataProvider showBirthdayReplyLens]
// Type encoding: B16@0:8
// Implementation: 0x1091de818

// -[SCAdsCameraLensDataProvider setShowBirthdayReplyLens:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091de820

// -[SCAdsCameraLensDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091de828

@end
