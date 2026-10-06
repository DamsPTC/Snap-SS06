// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSingleLensCameraLensDataProvider
// Superclass: NSObject
// Address: 0x112bf47e8

@interface SCSingleLensCameraLensDataProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: showBirthdayReplyLens; attributes: TB,N,VshowBirthdayReplyLens
// Property: lensUIStateListener; attributes: T@"<SCLensUIUpdateListener>",R,N

// -[SCSingleLensCameraLensDataProvider initWithLens:dataFetcher:applicableContext:lensDataConfig:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1091e28fc

// -[SCSingleLensCameraLensDataProvider initWithLensFuture:placeholderLens:dataFetcher:applicableContext:lensDataConfig:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1091e29f4

// -[SCSingleLensCameraLensDataProvider addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091e2a74

// -[SCSingleLensCameraLensDataProvider removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091e2a7c

// -[SCSingleLensCameraLensDataProvider addProgressListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091e2a84

// -[SCSingleLensCameraLensDataProvider removeProgressListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091e2a8c

// -[SCSingleLensCameraLensDataProvider addEventsListener:]
// Type encoding: B24@0:8@16
// Implementation: 0x1091e2a94

// -[SCSingleLensCameraLensDataProvider removeEventsListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091e2a9c

// -[SCSingleLensCameraLensDataProvider fetchLens:fetchSourceType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1091e2aa4

// -[SCSingleLensCameraLensDataProvider fetchLensesIfNeededWithFetchSourceType:]
// Type encoding: v24@0:8q16
// Implementation: 0x1091e2b64

// -[SCSingleLensCameraLensDataProvider prefetchLensesIfNeededWithFetchSourceType:]
// Type encoding: v24@0:8q16
// Implementation: 0x1091e2b68

// -[SCSingleLensCameraLensDataProvider isFetchingLens:]
// Type encoding: B24@0:8@16
// Implementation: 0x1091e2b6c

// -[SCSingleLensCameraLensDataProvider clearCacheWithCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1091e2b88

// -[SCSingleLensCameraLensDataProvider fetchAsset:lens:fetchSourceType:completionPerformer:completion:]
// Type encoding: v56@0:8@16@24q32@40@?48
// Implementation: 0x1091e2b90

// -[SCSingleLensCameraLensDataProvider fetchLenses:fetchSourceType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1091e2b98

// -[SCSingleLensCameraLensDataProvider fetchLenses:requestTiming:fetchSourceType:]
// Type encoding: @40@0:8@16q24q32
// Implementation: 0x1091e2ba0

// -[SCSingleLensCameraLensDataProvider fetchCachedLenses:fetchSourceType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1091e2ba8

// -[SCSingleLensCameraLensDataProvider fetchIconsForLenses:requestTiming:fetchSourceType:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x1091e2bb0

// -[SCSingleLensCameraLensDataProvider cancelDownloads]
// Type encoding: v16@0:8
// Implementation: 0x1091e2bb8

// -[SCSingleLensCameraLensDataProvider pauseDownloads]
// Type encoding: v16@0:8
// Implementation: 0x1091e2bc0

// -[SCSingleLensCameraLensDataProvider resumeDownloads]
// Type encoding: v16@0:8
// Implementation: 0x1091e2bc8

// -[SCSingleLensCameraLensDataProvider fetchMoreLensesIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1091e2bd0

// -[SCSingleLensCameraLensDataProvider suggestedLoadMoreTriggerDistance]
// Type encoding: Q16@0:8
// Implementation: 0x1091e2bd4

// -[SCSingleLensCameraLensDataProvider warmUp]
// Type encoding: v16@0:8
// Implementation: 0x1091e2bdc

// -[SCSingleLensCameraLensDataProvider startUpdatingLensData]
// Type encoding: @16@0:8
// Implementation: 0x1091e2be0

// -[SCSingleLensCameraLensDataProvider stopUpdatingLensDataWithToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091e2c34

// -[SCSingleLensCameraLensDataProvider lenses]
// Type encoding: @16@0:8
// Implementation: 0x1091e2c38

// -[SCSingleLensCameraLensDataProvider lensForId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091e2cb0

// -[SCSingleLensCameraLensDataProvider applicableContext]
// Type encoding: @16@0:8
// Implementation: 0x1091e2d34

// -[SCSingleLensCameraLensDataProvider selectedLens]
// Type encoding: @16@0:8
// Implementation: 0x1091e2d5c

// -[SCSingleLensCameraLensDataProvider originalLens]
// Type encoding: @16@0:8
// Implementation: 0x1091e2d64

// -[SCSingleLensCameraLensDataProvider firstApplicableLens]
// Type encoding: @16@0:8
// Implementation: 0x1091e2d8c

// -[SCSingleLensCameraLensDataProvider setSelectedLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091e2d90

// -[SCSingleLensCameraLensDataProvider setDevicePosition:]
// Type encoding: v24@0:8q16
// Implementation: 0x1091e2d94

// -[SCSingleLensCameraLensDataProvider setStartVisibleIndex:endVisibleIndex:selectedIndex:]
// Type encoding: v40@0:8q16q24Q32
// Implementation: 0x1091e2d98

// -[SCSingleLensCameraLensDataProvider lensUIStateListener]
// Type encoding: @16@0:8
// Implementation: 0x1091e2d9c

// -[SCSingleLensCameraLensDataProvider willStartLoadingLens:lensAssets:externalData:fromAsf:lensDataFetcher:]
// Type encoding: v48@0:8@16@24B32B36@40
// Implementation: 0x1091e2da4

// -[SCSingleLensCameraLensDataProvider willStartLoadingContentForLens:fromCache:fromAsf:lensDataFetcher:]
// Type encoding: v40@0:8@16B24B28@32
// Implementation: 0x1091e2da8

// -[SCSingleLensCameraLensDataProvider didFinishLoadingContentForLens:contentPath:error:fromCache:fromAsf:lensDataFetcher:]
// Type encoding: v56@0:8@16@24@32B40B44@48
// Implementation: 0x1091e2edc

// -[SCSingleLensCameraLensDataProvider willStartLoadingImageForLens:fromCache:fromAsf:lensDataFetcher:]
// Type encoding: v40@0:8@16B24B28@32
// Implementation: 0x1091e3038

// -[SCSingleLensCameraLensDataProvider didFinishLoadingImageForLens:image:error:fromCache:fromAsf:lensDataFetcher:]
// Type encoding: v56@0:8@16@24@32B40B44@48
// Implementation: 0x1091e316c

// -[SCSingleLensCameraLensDataProvider willStartLoadingAsset:lens:fromAsf:lensDataFetcher:]
// Type encoding: v44@0:8@16@24B32@36
// Implementation: 0x1091e32c8

// -[SCSingleLensCameraLensDataProvider didFinishLoadingContentForAsset:lens:content:error:fromAsf:lensDataFetcher:]
// Type encoding: v60@0:8@16@24@32@40B48@52
// Implementation: 0x1091e32cc

// -[SCSingleLensCameraLensDataProvider didFinishLoadingExternalDataForLens:error:fromAsf:lensDataFetcher:]
// Type encoding: v44@0:8@16@24B32@36
// Implementation: 0x1091e32d0

// -[SCSingleLensCameraLensDataProvider willStartLoadingExternalDataForLens:fromAsf:lensDataFetcher:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x1091e32d4

// -[SCSingleLensCameraLensDataProvider setPrefetchMode:]
// Type encoding: v24@0:8q16
// Implementation: 0x1091e32d8

// -[SCSingleLensCameraLensDataProvider updateLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091e32dc

// -[SCSingleLensCameraLensDataProvider _observeLensFuture:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091e33bc

// -[SCSingleLensCameraLensDataProvider showBirthdayReplyLens]
// Type encoding: B16@0:8
// Implementation: 0x1091e34f8

// -[SCSingleLensCameraLensDataProvider setShowBirthdayReplyLens:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091e3500

// -[SCSingleLensCameraLensDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091e3508

@end
