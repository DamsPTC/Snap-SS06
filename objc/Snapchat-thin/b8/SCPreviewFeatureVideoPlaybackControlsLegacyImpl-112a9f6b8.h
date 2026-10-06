// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewFeatureVideoPlaybackControlsLegacyImpl
// Superclass: NSObject
// Address: 0x112a9f6b8

@interface SCPreviewFeatureVideoPlaybackControlsLegacyImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: playbackControlsOpenCount; attributes: Tq,R,N,V_playbackControlsOpenCount

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl initWithVideoPlayback:previewConfiguration:timer:bounce:timeline:userInteractionStateLogger:creativeToolsABProvider:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x105ddad1c

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x105ddaeb8

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl isTrimmableSnap]
// Type encoding: B16@0:8
// Implementation: 0x105ddaf1c

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl handleTimerToolBarButtonTap]
// Type encoding: v16@0:8
// Implementation: 0x105ddb024

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl playbackTimeRanges]
// Type encoding: @16@0:8
// Implementation: 0x105ddb0a4

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl isMediaTrimmed]
// Type encoding: B16@0:8
// Implementation: 0x105ddb0e8

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl hidePlaybackControls]
// Type encoding: v16@0:8
// Implementation: 0x105ddb410

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ddb4a8

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl responderChainPriority]
// Type encoding: q16@0:8
// Implementation: 0x105ddb4e8

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl snapEditor:updateLoggingWithBuilder:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105ddb4f0

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl playbackTimeRangesForToolsDurationController:]
// Type encoding: @24@0:8@16
// Implementation: 0x105ddb57c

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl toolsDurationController:didUpdateTrimmedTimeRange:]
// Type encoding: v72@0:8@16{?={?=qiIq}{?=qiIq}}24
// Implementation: 0x105ddb5a4

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl toolsDurationController:didSeekToTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x105ddb6d4

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl toolsDurationControllerFinishedSeeking:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ddb734

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl toolsDurationControllerCompleteButtonTapped:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ddb768

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl toolsDurationController:didChangeSelectedTimeSlice:]
// Type encoding: v72@0:8@16{?={?=qiIq}{?=qiIq}}24
// Implementation: 0x105ddb76c

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl toolsDurationController:didSelectTimeSlice:]
// Type encoding: v72@0:8@16{?={?=qiIq}{?=qiIq}}24
// Implementation: 0x105ddb7a0

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl didTapPreviewContainerView:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105ddb7d4

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl finishTouchControl:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ddb80c

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl finishRewindingWithTrackableView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ddb810

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl snapEditStateChangeShouldUpdateThumbnails:]
// Type encoding: v20@0:8B16
// Implementation: 0x105ddb814

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl previewThumbnailsController]
// Type encoding: @16@0:8
// Implementation: 0x105ddb818

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl preparePreviewEphemeralMediaList:destinationInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105ddb840

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl previewFeatureTimer:didUpdateVideoMode:fromPreviousVideoMode:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x105ddb844

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl _canPresentPlaybackControls]
// Type encoding: B16@0:8
// Implementation: 0x105ddb9fc

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl _isPresentingPlaybackControls]
// Type encoding: B16@0:8
// Implementation: 0x105ddbaa4

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl _presentPlaybackControlsForTimerMode:]
// Type encoding: v24@0:8q16
// Implementation: 0x105ddbaf0

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl _presentPlaybackControlsForTrimming]
// Type encoding: v16@0:8
// Implementation: 0x105ddbb70

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl _presentPlaybackControlsForBounce]
// Type encoding: v16@0:8
// Implementation: 0x105ddbc18

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl _updateBounceWithTimeSlice:isTracking:]
// Type encoding: v68@0:8{?={?=qiIq}{?=qiIq}}16B64
// Implementation: 0x105ddbdf8

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl _setupForFirstAppearance]
// Type encoding: v16@0:8
// Implementation: 0x105ddbf18

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl _setupPlaybackControls]
// Type encoding: v16@0:8
// Implementation: 0x105ddc13c

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl _setAddSnapThumbnailsHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x105ddc37c

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl _videoSource]
// Type encoding: @16@0:8
// Implementation: 0x105ddc3f4

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl thumbnailFuturesForVideoAsset:thumbnailCount:mediaTimeRange:]
// Type encoding: @80@0:8@16q24{?={?=qiIq}{?=qiIq}}32
// Implementation: 0x105ddc43c

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl _updateVideoTimeRanges:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ddc594

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl playbackControlsOpenCount]
// Type encoding: q16@0:8
// Implementation: 0x105ddc638

// -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105ddc640

@end
