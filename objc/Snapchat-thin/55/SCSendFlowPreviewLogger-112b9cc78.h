// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSendFlowPreviewLogger
// Superclass: NSObject
// Address: 0x112b9cc78

@interface SCSendFlowPreviewLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSendFlowPreviewLogger initWithPreviewConfiguration:previewScopeServices:commonLoggingParamsBuilder:videoPlaybackLogger:filterLogger:cameraSnapCreationLogger:commerceLogger:previewScreenshotLogger:galleryLogger:previewLoggingServices:lensLoggerServices:sendingFeature:loggingFeature:commerceAttachment:lensCarouselStudySettingsServices:memoriesStorageQuotaManager:]
// Type encoding: @144@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136
// Implementation: 0x108421178

// -[SCSendFlowPreviewLogger logDirectSnapPreviewExitWithSenderData:isCrossPostingToSpotlight:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x108421550

// -[SCSendFlowPreviewLogger logDirectSnapPreviewOnPossibleExitWithIsTriggeredBySend:isSentToSnapMap:isSentToSpotlight:isSentAsCustomStory:isSentAsMyStory:isSentAsPublicStory:privateStoryCount:nonPrivateStoryCount:friendStory:publicStory:destinationInfo:]
// Type encoding: v72@0:8B16B20B24B28B32B36Q40Q48B56B60@64
// Implementation: 0x108421958

// -[SCSendFlowPreviewLogger reportPreviewToolReadyLatency]
// Type encoding: v16@0:8
// Implementation: 0x108422218

// -[SCSendFlowPreviewLogger logPreviewCarouselUpdate]
// Type encoding: v16@0:8
// Implementation: 0x108422294

// -[SCSendFlowPreviewLogger logSnapCreateStepPreviewWillExit]
// Type encoding: v16@0:8
// Implementation: 0x108422368

// -[SCSendFlowPreviewLogger logSnapCreateStepPreviewWillExitWithApplicationWillTerminate:]
// Type encoding: v20@0:8B16
// Implementation: 0x108422370

// -[SCSendFlowPreviewLogger logSnapCreateStepPreviewDidAppear]
// Type encoding: v16@0:8
// Implementation: 0x1084223f8

// -[SCSendFlowPreviewLogger logSnapCreateStepUserStartExitPreview]
// Type encoding: v16@0:8
// Implementation: 0x10842243c

// -[SCSendFlowPreviewLogger logSnapCreateStepUserExitPreview]
// Type encoding: v16@0:8
// Implementation: 0x108422480

// -[SCSendFlowPreviewLogger logSnapCreateStepEnterSendTo]
// Type encoding: v16@0:8
// Implementation: 0x1084224c4

// -[SCSendFlowPreviewLogger logSnapCreateStepFirstFrameRendered]
// Type encoding: v16@0:8
// Implementation: 0x108422508

// -[SCSendFlowPreviewLogger logSnapCreateWithStepName:]
// Type encoding: v24@0:8@16
// Implementation: 0x10842254c

// -[SCSendFlowPreviewLogger getSnapCommonLoggingParams]
// Type encoding: @16@0:8
// Implementation: 0x1084227b0

// -[SCSendFlowPreviewLogger _updateScreenOverlayDataSizeForMultipleVideos:]
// Type encoding: v24@0:8@16
// Implementation: 0x1084228c4

// -[SCSendFlowPreviewLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108422a90

@end
