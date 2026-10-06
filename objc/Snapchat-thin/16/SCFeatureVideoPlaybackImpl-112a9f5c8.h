// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureVideoPlaybackImpl
// Superclass: NSObject
// Address: 0x112a9f5c8

@interface SCFeatureVideoPlaybackImpl

// Property: videoPlaybackProvider; attributes: T@"SCLazy",&,N,V_videoPlaybackProvider
// Property: coreCameraLogger; attributes: T@"SCLazy",W,N,V_coreCameraLogger
// Property: multiSnapV2PlayerHandler; attributes: T@"<SCMultiSnapV2PlayerHandler>",R,N
// Property: currentViewportTransform; attributes: T{CGAffineTransform=dddddd},N
// Property: lastFrameTime; attributes: T{?=qiIq},R,N
// Property: batchCapturePlayerHandler; attributes: T@"<SCBatchCapturePlayerHandler>",R,N
// Property: timelineVideoPlayerHandler; attributes: T@"<SCTimelineVideoPlayerHandler>",R,N
// Property: playbackMode; attributes: TQ,N
// Property: imageProcessCommandsObservable; attributes: T@"SCObservable",R,N
// Property: multiSnapTimeRanges; attributes: T@"NSArray",R,N
// Property: NGSMESnap; attributes: T@"SCNGSMESnap",&,N
// Property: useBatchCapturePlayback; attributes: TB,N
// Property: isAudioMixed; attributes: TB,N
// Property: isTranscoding; attributes: TB,N
// Property: isPlaybackVisible; attributes: TB,N
// Property: didRenderFirstFrame; attributes: TB,R,N
// Property: playbackEventsObservable; attributes: T@"SCObservable",R,N
// Property: mixedAudioTracks; attributes: T@"NSDictionary",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFeatureVideoPlaybackImpl initWithVideoPlaybackProvider:coreCameraLogger:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105dd9570

// -[SCFeatureVideoPlaybackImpl _videoPlayback]
// Type encoding: @16@0:8
// Implementation: 0x105dd960c

// -[SCFeatureVideoPlaybackImpl setIsTranscoding:]
// Type encoding: v20@0:8B16
// Implementation: 0x105dd9654

// -[SCFeatureVideoPlaybackImpl isTranscoding]
// Type encoding: B16@0:8
// Implementation: 0x105dd968c

// -[SCFeatureVideoPlaybackImpl setIsPlaybackVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x105dd96c8

// -[SCFeatureVideoPlaybackImpl isPlaybackVisible]
// Type encoding: B16@0:8
// Implementation: 0x105dd9700

// -[SCFeatureVideoPlaybackImpl didRenderFirstFrame]
// Type encoding: B16@0:8
// Implementation: 0x105dd973c

// -[SCFeatureVideoPlaybackImpl playbackEventsObservable]
// Type encoding: @16@0:8
// Implementation: 0x105dd9778

// -[SCFeatureVideoPlaybackImpl responderChainPriority]
// Type encoding: q16@0:8
// Implementation: 0x105dd97bc

// -[SCFeatureVideoPlaybackImpl setUseBatchCapturePlayback:]
// Type encoding: v20@0:8B16
// Implementation: 0x105dd97c4

// -[SCFeatureVideoPlaybackImpl useBatchCapturePlayback]
// Type encoding: B16@0:8
// Implementation: 0x105dd97fc

// -[SCFeatureVideoPlaybackImpl multiSnapV2PlayerHandler]
// Type encoding: @16@0:8
// Implementation: 0x105dd9838

// -[SCFeatureVideoPlaybackImpl currentViewportTransform]
// Type encoding: {CGAffineTransform=dddddd}16@0:8
// Implementation: 0x105dd987c

// -[SCFeatureVideoPlaybackImpl setCurrentViewportTransform:]
// Type encoding: v64@0:8{CGAffineTransform=dddddd}16
// Implementation: 0x105dd98cc

// -[SCFeatureVideoPlaybackImpl lastFrameTime]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x105dd991c

// -[SCFeatureVideoPlaybackImpl currentPlayingFrameSourceIndex]
// Type encoding: q16@0:8
// Implementation: 0x105dd9968

// -[SCFeatureVideoPlaybackImpl currentPlayingVideoIndex]
// Type encoding: q16@0:8
// Implementation: 0x105dd99a4

// -[SCFeatureVideoPlaybackImpl currentEditingVideoSegmentIndex]
// Type encoding: q16@0:8
// Implementation: 0x105dd99e0

// -[SCFeatureVideoPlaybackImpl pauseVideo]
// Type encoding: v16@0:8
// Implementation: 0x105dd9a1c

// -[SCFeatureVideoPlaybackImpl pauseVideoAndRendering]
// Type encoding: v16@0:8
// Implementation: 0x105dd9a4c

// -[SCFeatureVideoPlaybackImpl resumeVideo]
// Type encoding: v16@0:8
// Implementation: 0x105dd9a7c

// -[SCFeatureVideoPlaybackImpl stopVideo]
// Type encoding: v16@0:8
// Implementation: 0x105dd9aac

// -[SCFeatureVideoPlaybackImpl stopPlayingAndSeekSmoothlyToSeconds:]
// Type encoding: v24@0:8d16
// Implementation: 0x105dd9adc

// -[SCFeatureVideoPlaybackImpl rewindToBeginningAndResume:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105dd9b1c

// -[SCFeatureVideoPlaybackImpl cancelRewinding]
// Type encoding: v16@0:8
// Implementation: 0x105dd9b6c

// -[SCFeatureVideoPlaybackImpl fastForwardToEndAndResume:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105dd9b9c

// -[SCFeatureVideoPlaybackImpl resetOverlayAndPlaybackSessionSpeed]
// Type encoding: v16@0:8
// Implementation: 0x105dd9bec

// -[SCFeatureVideoPlaybackImpl currentVideoPlaybackRate]
// Type encoding: d16@0:8
// Implementation: 0x105dd9c1c

// -[SCFeatureVideoPlaybackImpl playbackDurationWithPlaybackRatesApplied]
// Type encoding: d16@0:8
// Implementation: 0x105dd9c60

// -[SCFeatureVideoPlaybackImpl playbackDuration]
// Type encoding: d16@0:8
// Implementation: 0x105dd9ca4

// -[SCFeatureVideoPlaybackImpl totalContentDuration]
// Type encoding: d16@0:8
// Implementation: 0x105dd9ce8

// -[SCFeatureVideoPlaybackImpl videoAssetNominalFrameRate]
// Type encoding: f16@0:8
// Implementation: 0x105dd9d2c

// -[SCFeatureVideoPlaybackImpl setVideoProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dd9d70

// -[SCFeatureVideoPlaybackImpl hasVideoAsset]
// Type encoding: B16@0:8
// Implementation: 0x105dd9e44

// -[SCFeatureVideoPlaybackImpl videoAsset]
// Type encoding: @16@0:8
// Implementation: 0x105dd9e80

// -[SCFeatureVideoPlaybackImpl showVideo]
// Type encoding: v16@0:8
// Implementation: 0x105dd9ec4

// -[SCFeatureVideoPlaybackImpl setVolume:]
// Type encoding: v24@0:8d16
// Implementation: 0x105dd9f78

// -[SCFeatureVideoPlaybackImpl volumeProportionForAudioTrackWithKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x105dd9fb8

// -[SCFeatureVideoPlaybackImpl updateVolumeProportion:forAudioTrackWithKey:]
// Type encoding: v28@0:8f16@20
// Implementation: 0x105dda024

// -[SCFeatureVideoPlaybackImpl isAudioMixed]
// Type encoding: B16@0:8
// Implementation: 0x105dda084

// -[SCFeatureVideoPlaybackImpl setIsAudioMixed:]
// Type encoding: v20@0:8B16
// Implementation: 0x105dda0c0

// -[SCFeatureVideoPlaybackImpl mixedAudioTracks]
// Type encoding: @16@0:8
// Implementation: 0x105dda0f8

// -[SCFeatureVideoPlaybackImpl setAudioTrack:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105dda13c

// -[SCFeatureVideoPlaybackImpl selectedSnaps]
// Type encoding: @16@0:8
// Implementation: 0x105dda1ac

// -[SCFeatureVideoPlaybackImpl addVideoPlaybackSessionListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dda1f0

// -[SCFeatureVideoPlaybackImpl removeVideoPlaybackSessionListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dda240

// -[SCFeatureVideoPlaybackImpl setSnapAtIndex:enabled:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x105dda290

// -[SCFeatureVideoPlaybackImpl seekToStartOfSnapAtIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x105dda2d8

// -[SCFeatureVideoPlaybackImpl seekToBeginning]
// Type encoding: v16@0:8
// Implementation: 0x105dda310

// -[SCFeatureVideoPlaybackImpl enableMultiSnapWithTimeRanges:shouldScaleThumbnails:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105dda340

// -[SCFeatureVideoPlaybackImpl enableTrimmingWithTimeRange:shouldScaleThumbnails:]
// Type encoding: v68@0:8{?={?=qiIq}{?=qiIq}}16B64
// Implementation: 0x105dda3a0

// -[SCFeatureVideoPlaybackImpl disableTrimming]
// Type encoding: v16@0:8
// Implementation: 0x105dda404

// -[SCFeatureVideoPlaybackImpl updateTrimTimeRange:]
// Type encoding: v64@0:8{?={?=qiIq}{?=qiIq}}16
// Implementation: 0x105dda434

// -[SCFeatureVideoPlaybackImpl setViewportTransform:]
// Type encoding: v64@0:8{CGAffineTransform=dddddd}16
// Implementation: 0x105dda488

// -[SCFeatureVideoPlaybackImpl startRunningFromBeginning:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105dda4dc

// -[SCFeatureVideoPlaybackImpl setFrameSources:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dda52c

// -[SCFeatureVideoPlaybackImpl currentVideoFrameSource]
// Type encoding: @16@0:8
// Implementation: 0x105dda57c

// -[SCFeatureVideoPlaybackImpl setNGSMESnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dda5c0

// -[SCFeatureVideoPlaybackImpl NGSMESnap]
// Type encoding: @16@0:8
// Implementation: 0x105dda610

// -[SCFeatureVideoPlaybackImpl batchCapturePlayerHandler]
// Type encoding: @16@0:8
// Implementation: 0x105dda654

// -[SCFeatureVideoPlaybackImpl timelineVideoPlayerHandler]
// Type encoding: @16@0:8
// Implementation: 0x105dda698

// -[SCFeatureVideoPlaybackImpl playbackMode]
// Type encoding: Q16@0:8
// Implementation: 0x105dda6dc

// -[SCFeatureVideoPlaybackImpl setPlaybackMode:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105dda718

// -[SCFeatureVideoPlaybackImpl imageProcessCommandsObservable]
// Type encoding: @16@0:8
// Implementation: 0x105dda750

// -[SCFeatureVideoPlaybackImpl multiSnapTimeRanges]
// Type encoding: @16@0:8
// Implementation: 0x105dda794

// -[SCFeatureVideoPlaybackImpl videoPlaybackProvider]
// Type encoding: @16@0:8
// Implementation: 0x105dda7d8

// -[SCFeatureVideoPlaybackImpl setVideoPlaybackProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dda7e0

// -[SCFeatureVideoPlaybackImpl coreCameraLogger]
// Type encoding: @16@0:8
// Implementation: 0x105dda810

// -[SCFeatureVideoPlaybackImpl setCoreCameraLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dda828

// -[SCFeatureVideoPlaybackImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105dda834

@end
