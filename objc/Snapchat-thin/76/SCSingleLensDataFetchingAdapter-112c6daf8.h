// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSingleLensDataFetchingAdapter
// Superclass: NSObject
// Address: 0x112c6daf8

@interface SCSingleLensDataFetchingAdapter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSingleLensDataFetchingAdapter initWithLens:lensDataFetcherFactory:strategyFactory:successCondition:]
// Type encoding: @48@0:8@16@24@32Q40
// Implementation: 0x10b0dba90

// -[SCSingleLensDataFetchingAdapter performLensFetchingWithCompletion:completionPerformer:fetchSourceType:]
// Type encoding: v40@0:8@?16@24q32
// Implementation: 0x10b0dbbec

// -[SCSingleLensDataFetchingAdapter performLensFetchingWithCompletion:completionPerformer:requestTiming:fetchSourceType:]
// Type encoding: v48@0:8@?16@24q32q40
// Implementation: 0x10b0dbbf8

// -[SCSingleLensDataFetchingAdapter performIconFetchingWithCompletion:completionPerformer:fetchSourceType:]
// Type encoding: v40@0:8@?16@24q32
// Implementation: 0x10b0dbdb4

// -[SCSingleLensDataFetchingAdapter _isResourcePresentForCondition:]
// Type encoding: B24@0:8Q16
// Implementation: 0x10b0dbf50

// -[SCSingleLensDataFetchingAdapter _enterDispatchGroupIfNeededForCondition:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b0dc008

// -[SCSingleLensDataFetchingAdapter _leaveDispatchGroupIfNeededForCondition:collectError:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x10b0dc048

// -[SCSingleLensDataFetchingAdapter _callCompletion:completionPerformer:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x10b0dc0b0

// -[SCSingleLensDataFetchingAdapter _appendError:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0dc1dc

// -[SCSingleLensDataFetchingAdapter willStartLoadingLens:lensAssets:externalData:fromAsf:lensDataFetcher:]
// Type encoding: v48@0:8@16@24B32B36@40
// Implementation: 0x10b0dc348

// -[SCSingleLensDataFetchingAdapter willStartLoadingContentForLens:fromCache:fromAsf:lensDataFetcher:]
// Type encoding: v40@0:8@16B24B28@32
// Implementation: 0x10b0dc34c

// -[SCSingleLensDataFetchingAdapter didFinishLoadingContentForLens:contentPath:error:fromCache:fromAsf:lensDataFetcher:]
// Type encoding: v56@0:8@16@24@32B40B44@48
// Implementation: 0x10b0dc350

// -[SCSingleLensDataFetchingAdapter willStartLoadingAsset:lens:fromAsf:lensDataFetcher:]
// Type encoding: v44@0:8@16@24B32@36
// Implementation: 0x10b0dc3f4

// -[SCSingleLensDataFetchingAdapter didFinishLoadingContentForAsset:lens:content:error:fromAsf:lensDataFetcher:]
// Type encoding: v60@0:8@16@24@32@40B48@52
// Implementation: 0x10b0dc3f8

// -[SCSingleLensDataFetchingAdapter willStartLoadingImageForLens:fromCache:fromAsf:lensDataFetcher:]
// Type encoding: v40@0:8@16B24B28@32
// Implementation: 0x10b0dc3fc

// -[SCSingleLensDataFetchingAdapter didFinishLoadingImageForLens:image:error:fromCache:fromAsf:lensDataFetcher:]
// Type encoding: v56@0:8@16@24@32B40B44@48
// Implementation: 0x10b0dc400

// -[SCSingleLensDataFetchingAdapter didFinishLoadingExternalDataForLens:error:fromAsf:lensDataFetcher:]
// Type encoding: v44@0:8@16@24B32@36
// Implementation: 0x10b0dc458

// -[SCSingleLensDataFetchingAdapter willStartLoadingExternalDataForLens:fromAsf:lensDataFetcher:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x10b0dc45c

// -[SCSingleLensDataFetchingAdapter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0dc540

// +[SCSingleLensDataFetchingAdapter _unableToGetLensContentError]
// Type encoding: @16@0:8
// Implementation: 0x10b0dc460

@end
