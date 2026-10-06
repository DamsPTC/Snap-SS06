// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCameraPlaybackLogger
// Superclass: NSObject
// Address: 0x112be3d08

@interface SCCameraPlaybackLogger

// Property: shouldLogSnapItemSwitching; attributes: TB,N,V_shouldLogSnapItemSwitching
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCameraPlaybackLogger initWithPlaybackContext:userBlizzardLogger:grapheneLogger:stickyPlaybackMetricVersion:]
// Type encoding: @48@0:8q16@24@32Q40
// Implementation: 0x1090707dc

// -[SCCameraPlaybackLogger setCaptureSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090708cc

// -[SCCameraPlaybackLogger setVideoDuration:]
// Type encoding: v24@0:8d16
// Implementation: 0x1090708fc

// -[SCCameraPlaybackLogger setIsLaguna:]
// Type encoding: v20@0:8B16
// Implementation: 0x109070904

// -[SCCameraPlaybackLogger logVideoPlaybackStickyGapDuration:atSystemTime:]
// Type encoding: v32@0:8d16d24
// Implementation: 0x10907090c

// -[SCCameraPlaybackLogger stickyGapRatioForTotalPlayTime:]
// Type encoding: i24@0:8d16
// Implementation: 0x109070974

// -[SCCameraPlaybackLogger worstStickyScoreForPlaybackSession]
// Type encoding: i16@0:8
// Implementation: 0x109070990

// -[SCCameraPlaybackLogger logVideoPlaybackError:]
// Type encoding: v24@0:8q16
// Implementation: 0x10907099c

// -[SCCameraPlaybackLogger logVideoPlaybackSetup]
// Type encoding: v16@0:8
// Implementation: 0x1090709fc

// -[SCCameraPlaybackLogger logVideoPlaybackFirstFrame]
// Type encoding: v16@0:8
// Implementation: 0x109070aa4

// -[SCCameraPlaybackLogger shouldLogFirstFrameOnPreviewExit]
// Type encoding: B16@0:8
// Implementation: 0x109070bc4

// -[SCCameraPlaybackLogger playbackSessionId]
// Type encoding: @16@0:8
// Implementation: 0x109070c1c

// -[SCCameraPlaybackLogger setLoggingEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x109070c44

// -[SCCameraPlaybackLogger setIsBatchCaptureSnap:]
// Type encoding: v20@0:8B16
// Implementation: 0x109070c4c

// -[SCCameraPlaybackLogger setIsMusicSnap:]
// Type encoding: v20@0:8B16
// Implementation: 0x109070c54

// -[SCCameraPlaybackLogger setIsTimelineSnap:]
// Type encoding: v20@0:8B16
// Implementation: 0x109070c5c

// -[SCCameraPlaybackLogger setHasAudioMixing:]
// Type encoding: v20@0:8B16
// Implementation: 0x109070c64

// -[SCCameraPlaybackLogger setPostCaptureLensID:]
// Type encoding: v24@0:8@16
// Implementation: 0x109070c6c

// -[SCCameraPlaybackLogger setShouldLogSnapItemSwitching:]
// Type encoding: v20@0:8B16
// Implementation: 0x109070c9c

// -[SCCameraPlaybackLogger logCurrentSnapIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x109070cb0

// -[SCCameraPlaybackLogger setImagePlaybackGLESVersion:]
// Type encoding: v24@0:8q16
// Implementation: 0x109070d14

// -[SCCameraPlaybackLogger setScaledImageWidthInPixels:heightInPixels:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x109070d1c

// -[SCCameraPlaybackLogger setImageStatus:withErrorMessage:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x109070d78

// -[SCCameraPlaybackLogger logImageSetupBeginTimeInSeconds]
// Type encoding: v16@0:8
// Implementation: 0x109070dd4

// -[SCCameraPlaybackLogger logImageSetupCompletedTimeInSeconds]
// Type encoding: v16@0:8
// Implementation: 0x109070df8

// -[SCCameraPlaybackLogger logImageFirstFrameRenderedTimeInSeconds]
// Type encoding: v16@0:8
// Implementation: 0x109070e48

// -[SCCameraPlaybackLogger setImageCaptureSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x109070e98

// -[SCCameraPlaybackLogger logCameraVideoPlayerEvent]
// Type encoding: v16@0:8
// Implementation: 0x109070ec8

// -[SCCameraPlaybackLogger logCameraImagePlayerEvent]
// Type encoding: v16@0:8
// Implementation: 0x1090712ac

// -[SCCameraPlaybackLogger _newMediaPlayerEventWithError:]
// Type encoding: @24@0:8q16
// Implementation: 0x1090713b4

// -[SCCameraPlaybackLogger _configPlaybackEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x109071518

// -[SCCameraPlaybackLogger _playbackCallerFromContext:]
// Type encoding: @24@0:8q16
// Implementation: 0x1090715c8

// -[SCCameraPlaybackLogger _logPlayerItemSwitchingLatency:]
// Type encoding: v24@0:8d16
// Implementation: 0x1090715f0

// -[SCCameraPlaybackLogger shouldLogSnapItemSwitching]
// Type encoding: B16@0:8
// Implementation: 0x109071664

// -[SCCameraPlaybackLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10907166c

@end
