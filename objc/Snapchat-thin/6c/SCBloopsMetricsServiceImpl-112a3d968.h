// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBloopsMetricsServiceImpl
// Superclass: NSObject
// Address: 0x112a3d968

@interface SCBloopsMetricsServiceImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBloopsMetricsServiceImpl initWithGrapheneServices:]
// Type encoding: @24@0:8@16
// Implementation: 0x1054b957c

// -[SCBloopsMetricsServiceImpl reportBloopsExport:success:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1054b95f0

// -[SCBloopsMetricsServiceImpl reportOnboardingFinishWithSuccess:resultType:errorType:]
// Type encoding: v36@0:8B16q20@28
// Implementation: 0x1054b9730

// -[SCBloopsMetricsServiceImpl reportChatStickerPickerCloseWithBloopsStatus:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054b98a4

// -[SCBloopsMetricsServiceImpl reportBloopsStickerViewWithSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x1054b9974

// -[SCBloopsMetricsServiceImpl reportBloopsStickerPickWithSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x1054b9a74

// -[SCBloopsMetricsServiceImpl reportDiscoverTileView]
// Type encoding: v16@0:8
// Implementation: 0x1054b9b74

// -[SCBloopsMetricsServiceImpl reportDiscoverTileDisplayDelay:]
// Type encoding: v24@0:8q16
// Implementation: 0x1054b9c30

// -[SCBloopsMetricsServiceImpl reportDiscoverTileReenactmentStatus:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054b9cd4

// -[SCBloopsMetricsServiceImpl reportDiscoverSnapFreezeCount:sourceTab:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1054b9da4

// -[SCBloopsMetricsServiceImpl reportDiscoverSnapDisplayDelay:sourceTab:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1054b9e8c

// -[SCBloopsMetricsServiceImpl reportDiscoverSnapGenerationLatency:sourceTab:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1054b9f74

// -[SCBloopsMetricsServiceImpl reportDiscoverSnapReenactmentStatus:sourceTab:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1054ba05c

// -[SCBloopsMetricsServiceImpl reportDiscoverSnapView:viewSource:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x1054ba178

// -[SCBloopsMetricsServiceImpl reportDiscoverShare:]
// Type encoding: v24@0:8q16
// Implementation: 0x1054ba2c4

// -[SCBloopsMetricsServiceImpl reportDiscoverPostToStory]
// Type encoding: v16@0:8
// Implementation: 0x1054ba3c8

// -[SCBloopsMetricsServiceImpl reportDiscoverShareStatus:preparingTime:source:]
// Type encoding: v40@0:8Q16d24Q32
// Implementation: 0x1054ba45c

// -[SCBloopsMetricsServiceImpl reportRequestNonAcceptableWithRequestSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x1054ba5f4

// -[SCBloopsMetricsServiceImpl reportNeutralizationWithStatus:sentImageWasCalled:sendImageResultNonNil:sendLandmarksWasCalled:isLandmarksNonNil:]
// Type encoding: v40@0:8Q16B24B28B32B36
// Implementation: 0x1054ba6d4

// -[SCBloopsMetricsServiceImpl reportSegmentationWithStatus:sendTargetWasCalled:isTargetNonNil:]
// Type encoding: v32@0:8Q16B24B28
// Implementation: 0x1054ba950

// -[SCBloopsMetricsServiceImpl reportStaticEmotionLensApplyingWithStatus:lensId:segmentationPatchWasCalled:error:timeSec:]
// Type encoding: v52@0:8Q16@24B32@36@44
// Implementation: 0x1054baafc

// -[SCBloopsMetricsServiceImpl reportLensObtainingWithStatus:errorType:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x1054badd8

// -[SCBloopsMetricsServiceImpl reportBloopsHometabStickersCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1054baee8

// -[SCBloopsMetricsServiceImpl reportLensId:status:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1054baf8c

// -[SCBloopsMetricsServiceImpl reportSingleImageLensApplying:totalTime:status:]
// Type encoding: v40@0:8@16d24Q32
// Implementation: 0x1054bb0b8

// -[SCBloopsMetricsServiceImpl reportLensId:initialisationTime:status:]
// Type encoding: v40@0:8@16d24Q32
// Implementation: 0x1054bb2f0

// -[SCBloopsMetricsServiceImpl reportLensId:setupEffectTime:status:]
// Type encoding: v40@0:8@16d24Q32
// Implementation: 0x1054bb488

// -[SCBloopsMetricsServiceImpl reportLensId:setupProcessingModeTime:status:]
// Type encoding: v40@0:8@16d24Q32
// Implementation: 0x1054bb620

// -[SCBloopsMetricsServiceImpl reportLensId:obtainingTime:cacheStatus:status:]
// Type encoding: v48@0:8@16d24Q32Q40
// Implementation: 0x1054bb7b8

// -[SCBloopsMetricsServiceImpl reportLensId:imageProcessingTime:status:]
// Type encoding: v40@0:8@16d24Q32
// Implementation: 0x1054bb994

// -[SCBloopsMetricsServiceImpl reportLensId:remoteAssetsLoadingTime:status:]
// Type encoding: v40@0:8@16d24Q32
// Implementation: 0x1054bbb2c

// -[SCBloopsMetricsServiceImpl reportFriendsIdsObtainingStart:]
// Type encoding: v24@0:8q16
// Implementation: 0x1054bbcc4

// -[SCBloopsMetricsServiceImpl reportFriendsIdsObtainingCompletion:success:idsCount:latencySec:]
// Type encoding: v44@0:8q16B24Q28d36
// Implementation: 0x1054bbda8

// -[SCBloopsMetricsServiceImpl reportDiscoverFriendTargetFetchingTime:isSendToProvider:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x1054bc044

// -[SCBloopsMetricsServiceImpl reportFriendSelfieStatus:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1054bc110

// -[SCBloopsMetricsServiceImpl reportReenactmentRequestWithType:groupID:viewLocation:deviceCluster:pendingRequestCount:]
// Type encoding: v56@0:8Q16q24@32@40@48
// Implementation: 0x1054bc1e4

// -[SCBloopsMetricsServiceImpl reportReenactmentRequestCacheHit:viewLocation:deviceCluster:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x1054bc43c

// -[SCBloopsMetricsServiceImpl _onboardingTextResultFromResultType:errorType:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x1054bc5e8

// -[SCBloopsMetricsServiceImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054bc65c

@end
