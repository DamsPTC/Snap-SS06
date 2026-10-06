// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensContentFetcherAdapter
// Superclass: NSObject
// Address: 0x112c6d8c8

@interface SCLensContentFetcherAdapter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: assetFetchingObservable; attributes: T@"SCObservable",R,N
// Property: contentFetchingObservable; attributes: T@"SCObservable",R,N
// Property: externalDataFetchingObservable; attributes: T@"SCObservable",R,N
// Property: imageFetchingObservable; attributes: T@"SCObservable",R,N
// Property: progressObservable; attributes: T@"SCObservable",R,N

// -[SCLensContentFetcherAdapter initWithLegacyLensDataFetcher:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b0d21f0

// -[SCLensContentFetcherAdapter _initializeSubjects]
// Type encoding: v16@0:8
// Implementation: 0x10b0d226c

// -[SCLensContentFetcherAdapter _fetcherEventsSubject]
// Type encoding: @16@0:8
// Implementation: 0x10b0d2420

// -[SCLensContentFetcherAdapter assetFetchingObservable]
// Type encoding: @16@0:8
// Implementation: 0x10b0d2548

// -[SCLensContentFetcherAdapter contentFetchingObservable]
// Type encoding: @16@0:8
// Implementation: 0x10b0d2550

// -[SCLensContentFetcherAdapter externalDataFetchingObservable]
// Type encoding: @16@0:8
// Implementation: 0x10b0d2558

// -[SCLensContentFetcherAdapter imageFetchingObservable]
// Type encoding: @16@0:8
// Implementation: 0x10b0d2560

// -[SCLensContentFetcherAdapter progressObservable]
// Type encoding: @16@0:8
// Implementation: 0x10b0d2568

// -[SCLensContentFetcherAdapter fetchLenses:fetchSourceType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10b0d2570

// -[SCLensContentFetcherAdapter fetchLenses:requestTiming:fetchSourceType:]
// Type encoding: @40@0:8@16q24q32
// Implementation: 0x10b0d25e4

// -[SCLensContentFetcherAdapter fetchAsset:lens:fetchSourceType:completionPerformer:completion:]
// Type encoding: v56@0:8@16@24q32@40@?48
// Implementation: 0x10b0d2660

// -[SCLensContentFetcherAdapter fetchCachedLenses:fetchSourceType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b0d2710

// -[SCLensContentFetcherAdapter fetchIconsForLenses:requestTiming:fetchSourceType:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x10b0d2770

// -[SCLensContentFetcherAdapter cancelDownloads]
// Type encoding: v16@0:8
// Implementation: 0x10b0d27d8

// -[SCLensContentFetcherAdapter pauseDownloads]
// Type encoding: v16@0:8
// Implementation: 0x10b0d280c

// -[SCLensContentFetcherAdapter resumeDownloads]
// Type encoding: v16@0:8
// Implementation: 0x10b0d2840

// -[SCLensContentFetcherAdapter clearCacheWithCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b0d2874

// -[SCLensContentFetcherAdapter didFinishLoadingContentForAsset:lens:content:error:fromAsf:lensDataFetcher:]
// Type encoding: v60@0:8@16@24@32@40B48@52
// Implementation: 0x10b0d28c4

// -[SCLensContentFetcherAdapter didFinishLoadingContentForLens:contentPath:error:fromCache:fromAsf:lensDataFetcher:]
// Type encoding: v56@0:8@16@24@32B40B44@48
// Implementation: 0x10b0d29dc

// -[SCLensContentFetcherAdapter didFinishLoadingExternalDataForLens:error:fromAsf:lensDataFetcher:]
// Type encoding: v44@0:8@16@24B32@36
// Implementation: 0x10b0d2ad4

// -[SCLensContentFetcherAdapter didFinishLoadingImageForLens:image:error:fromCache:fromAsf:lensDataFetcher:]
// Type encoding: v56@0:8@16@24@32B40B44@48
// Implementation: 0x10b0d2b74

// -[SCLensContentFetcherAdapter willStartLoadingAsset:lens:fromAsf:lensDataFetcher:]
// Type encoding: v44@0:8@16@24B32@36
// Implementation: 0x10b0d2c6c

// -[SCLensContentFetcherAdapter willStartLoadingContentForLens:fromCache:fromAsf:lensDataFetcher:]
// Type encoding: v40@0:8@16B24B28@32
// Implementation: 0x10b0d2d0c

// -[SCLensContentFetcherAdapter willStartLoadingExternalDataForLens:fromAsf:lensDataFetcher:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x10b0d2d94

// -[SCLensContentFetcherAdapter willStartLoadingImageForLens:fromCache:fromAsf:lensDataFetcher:]
// Type encoding: v40@0:8@16B24B28@32
// Implementation: 0x10b0d2e1c

// -[SCLensContentFetcherAdapter willStartLoadingLens:lensAssets:externalData:fromAsf:lensDataFetcher:]
// Type encoding: v48@0:8@16@24B32B36@40
// Implementation: 0x10b0d2ea4

// -[SCLensContentFetcherAdapter asset:forLens:didUpdateProgress:lensDataFetcher:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10b0d2f4c

// -[SCLensContentFetcherAdapter contentForLens:didUpdateProgress:lensDataFetcher:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10b0d2fa8

// -[SCLensContentFetcherAdapter externalDataForLens:didUpdateProgress:lensDataFetcher:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10b0d3004

// -[SCLensContentFetcherAdapter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0d3060

@end
