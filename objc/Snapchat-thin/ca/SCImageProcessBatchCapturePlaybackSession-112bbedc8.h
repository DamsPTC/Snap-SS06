// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessBatchCapturePlaybackSession
// Superclass: SCImageProcessVideoPlaybackSessionImpl
// Address: 0x112bbedc8

@interface SCImageProcessBatchCapturePlaybackSession

// Property: frameSourcesBatch; attributes: T@"SCFrameSourcesBatch",R,N,V_frameSourcesBatch
// Property: layer; attributes: T@"CAEAGLLayer",&,N,V_layer
// Property: isIndividualLooping; attributes: TB,N,V_isIndividualLooping
// Property: frameSourcePlayDelegate; attributes: T@"<SCImageProcessFrameSourcePlaybackSessionDelegate>",W,N,V_frameSourcePlayDelegate

// -[SCImageProcessBatchCapturePlaybackSession initWithQueue:player:frameSourcesBatch:layer:videoPlaybackLogger:commandManager:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x108ce4f40

// -[SCImageProcessBatchCapturePlaybackSession initEmptyPlaybackSessionWithQueue:frameSourcesBatch:commandManager:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108ce4ffc

// -[SCImageProcessBatchCapturePlaybackSession setupInitializationWithPlayer:layer:videoPlaybackLogger:commandManager:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x108ce525c

// -[SCImageProcessBatchCapturePlaybackSession dealloc]
// Type encoding: v16@0:8
// Implementation: 0x108ce5474

// -[SCImageProcessBatchCapturePlaybackSession prepareToPlay]
// Type encoding: v16@0:8
// Implementation: 0x108ce552c

// -[SCImageProcessBatchCapturePlaybackSession _setupCurrentFrameSource:]
// Type encoding: B24@0:8@16
// Implementation: 0x108ce5644

// -[SCImageProcessBatchCapturePlaybackSession isPlaying]
// Type encoding: B16@0:8
// Implementation: 0x108ce5834

// -[SCImageProcessBatchCapturePlaybackSession currentTime]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x108ce5844

// -[SCImageProcessBatchCapturePlaybackSession beginConfiguration]
// Type encoding: v16@0:8
// Implementation: 0x108ce5864

// -[SCImageProcessBatchCapturePlaybackSession commitConfigurationWithSeekToBeginning:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ce5874

// -[SCImageProcessBatchCapturePlaybackSession volume]
// Type encoding: f16@0:8
// Implementation: 0x108ce5884

// -[SCImageProcessBatchCapturePlaybackSession setVolume:]
// Type encoding: v20@0:8f16
// Implementation: 0x108ce58a8

// -[SCImageProcessBatchCapturePlaybackSession shouldLoop]
// Type encoding: B16@0:8
// Implementation: 0x108ce58bc

// -[SCImageProcessBatchCapturePlaybackSession setShouldLoop:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ce58c4

// -[SCImageProcessBatchCapturePlaybackSession isReversePlaying]
// Type encoding: B16@0:8
// Implementation: 0x108ce58ec

// -[SCImageProcessBatchCapturePlaybackSession setAudioProcessorMix:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ce58fc

// -[SCImageProcessBatchCapturePlaybackSession setPlayerRate:]
// Type encoding: v24@0:8d16
// Implementation: 0x108ce5900

// -[SCImageProcessBatchCapturePlaybackSession pauseRunningAndContinueRendering:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ce5910

// -[SCImageProcessBatchCapturePlaybackSession resumeRunning]
// Type encoding: v16@0:8
// Implementation: 0x108ce5984

// -[SCImageProcessBatchCapturePlaybackSession stopRunning]
// Type encoding: v16@0:8
// Implementation: 0x108ce5a0c

// -[SCImageProcessBatchCapturePlaybackSession _stopRunningWithoutAnnounce]
// Type encoding: v16@0:8
// Implementation: 0x108ce5a34

// -[SCImageProcessBatchCapturePlaybackSession cleanupCommandsAndRenderer]
// Type encoding: v16@0:8
// Implementation: 0x108ce5ae8

// -[SCImageProcessBatchCapturePlaybackSession setReversePlaybackEnabled:reverseAudioPlayer:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x108ce5b64

// -[SCImageProcessBatchCapturePlaybackSession setPlayerItemTimeScale:]
// Type encoding: v24@0:8d16
// Implementation: 0x108ce5bd4

// -[SCImageProcessBatchCapturePlaybackSession seekVideoAndAudioToBeginning]
// Type encoding: v16@0:8
// Implementation: 0x108ce5be4

// -[SCImageProcessBatchCapturePlaybackSession seekToTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x108ce5bf4

// -[SCImageProcessBatchCapturePlaybackSession stopPlayingAndSeekSmoothlyToTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x108ce5c30

// -[SCImageProcessBatchCapturePlaybackSession setPreciseSeeking:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ce5c6c

// -[SCImageProcessBatchCapturePlaybackSession setStartTimestamp:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x108ce5cc4

// -[SCImageProcessBatchCapturePlaybackSession seekToCurrentSegmentBeginning]
// Type encoding: v16@0:8
// Implementation: 0x108ce5d40

// -[SCImageProcessBatchCapturePlaybackSession seekToSourceAt:snapIndex:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x108ce5e44

// -[SCImageProcessBatchCapturePlaybackSession seekToSourceAt:snapIndex:shouldSeekToStart:]
// Type encoding: v36@0:8q16q24B32
// Implementation: 0x108ce5e4c

// -[SCImageProcessBatchCapturePlaybackSession setIsIndividualLooping:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ce5f90

// -[SCImageProcessBatchCapturePlaybackSession currentItemStartTimeOffset]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x108ce601c

// -[SCImageProcessBatchCapturePlaybackSession setMixedAudioAssetTrack:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108ce604c

// -[SCImageProcessBatchCapturePlaybackSession updateVolumeProportion:forAudioTrackWithKey:]
// Type encoding: v28@0:8f16@20
// Implementation: 0x108ce61e4

// -[SCImageProcessBatchCapturePlaybackSession setAudioOverrideAsset:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ce63ac

// -[SCImageProcessBatchCapturePlaybackSession setContinuousAudioPlay:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ce6530

// -[SCImageProcessBatchCapturePlaybackSession resetCurrentPlayingSource]
// Type encoding: v16@0:8
// Implementation: 0x108ce658c

// -[SCImageProcessBatchCapturePlaybackSession resetCurrentPlayingSourceWithDeletingSnapAtIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x108ce6594

// -[SCImageProcessBatchCapturePlaybackSession beginEditingMode]
// Type encoding: v16@0:8
// Implementation: 0x108ce66fc

// -[SCImageProcessBatchCapturePlaybackSession endEditingMode]
// Type encoding: v16@0:8
// Implementation: 0x108ce683c

// -[SCImageProcessBatchCapturePlaybackSession playbackTimeForFrameTime:]
// Type encoding: {?=qiIq}40@0:8{?=qiIq}16
// Implementation: 0x108ce697c

// -[SCImageProcessBatchCapturePlaybackSession _prepareDisplayLinkIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x108ce6a78

// -[SCImageProcessBatchCapturePlaybackSession _setupFrameSource:playbackBufferMonitoringEnabled:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x108ce6b24

// -[SCImageProcessBatchCapturePlaybackSession _keepUpWithMovieSequencer:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ce6cc8

// -[SCImageProcessBatchCapturePlaybackSession _cleanUpDisplayLink]
// Type encoding: v16@0:8
// Implementation: 0x108ce6ff8

// -[SCImageProcessBatchCapturePlaybackSession _applicationWillResignActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ce7030

// -[SCImageProcessBatchCapturePlaybackSession _applicationDidBecomeActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ce7074

// -[SCImageProcessBatchCapturePlaybackSession setShouldAnimateBackgroundCommand:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ce7184

// -[SCImageProcessBatchCapturePlaybackSession _displayLinkCallback:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ce7194

// -[SCImageProcessBatchCapturePlaybackSession _acquirePixelBufferFromVideoSourceForHostTime:itemTimeForDisplay:]
// Type encoding: ^{__CVBuffer=}32@0:8d16^{?=qiIq}24
// Implementation: 0x108ce773c

// -[SCImageProcessBatchCapturePlaybackSession _acquirePixelBufferFromImageSourceForHostTime:itemTimeForDisplay:]
// Type encoding: ^{__CVBuffer=}32@0:8d16^{?=qiIq}24
// Implementation: 0x108ce7b84

// -[SCImageProcessBatchCapturePlaybackSession _updatePlayerRateWithReversePlayback]
// Type encoding: v16@0:8
// Implementation: 0x108ce7bf8

// -[SCImageProcessBatchCapturePlaybackSession _startRunningShouldSeekToStart:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ce7c08

// -[SCImageProcessBatchCapturePlaybackSession _isPlayingVideoFrameSource]
// Type encoding: B16@0:8
// Implementation: 0x108ce7c78

// -[SCImageProcessBatchCapturePlaybackSession _isPlayingImageFrameSource]
// Type encoding: B16@0:8
// Implementation: 0x108ce7cd8

// -[SCImageProcessBatchCapturePlaybackSession _warmupCommandsIfNeededForOutputSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x108ce7d38

// -[SCImageProcessBatchCapturePlaybackSession _updatePlayerStartTimeWhenLoopVideoSourceAtIndex:snapIndex:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x108ce7d40

// -[SCImageProcessBatchCapturePlaybackSession audioSessionDidBeginInterruption:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ce7e78

// -[SCImageProcessBatchCapturePlaybackSession audioSession:didEndInterruption:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x108ce7e7c

// -[SCImageProcessBatchCapturePlaybackSession audioSessionRouteDidChangeReasonNewDeviceAvailable:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ce7e80

// -[SCImageProcessBatchCapturePlaybackSession audioSessionRouteDidChangeReasonOldDeviceUnavailable:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ce7e84

// -[SCImageProcessBatchCapturePlaybackSession _onReceiveStopNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ce7f60

// -[SCImageProcessBatchCapturePlaybackSession videoFrameSource:sourceLoaded:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x108ce7f64

// -[SCImageProcessBatchCapturePlaybackSession videoFrameSourceDidPlayToEnd:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ce7fe8

// -[SCImageProcessBatchCapturePlaybackSession videoFrameSourcePlaybackBufferEmpty:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ce80c0

// -[SCImageProcessBatchCapturePlaybackSession videoFrameSourcePlaybackLikelyToKeepUp:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ce80cc

// -[SCImageProcessBatchCapturePlaybackSession imageFrameSourceDidPlayToEnd:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ce80d8

// -[SCImageProcessBatchCapturePlaybackSession frameSourceSequencer:didChangeFromSource:snapIndex:toSource:snapIndex:]
// Type encoding: v56@0:8@16@24q32@40q48
// Implementation: 0x108ce80e8

// -[SCImageProcessBatchCapturePlaybackSession frameSourceSequencerWillLoopCurrentSegment:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ce8310

// -[SCImageProcessBatchCapturePlaybackSession videoFramePlayerAudioFrameTimeAtVideoFrameTime:]
// Type encoding: {?=qiIq}40@0:8{?=qiIq}16
// Implementation: 0x108ce8364

// -[SCImageProcessBatchCapturePlaybackSession videoFramePlayerEnablesContinuousAudio]
// Type encoding: B16@0:8
// Implementation: 0x108ce843c

// -[SCImageProcessBatchCapturePlaybackSession isIndividualLooping]
// Type encoding: B16@0:8
// Implementation: 0x108ce84ec

// -[SCImageProcessBatchCapturePlaybackSession frameSourcePlayDelegate]
// Type encoding: @16@0:8
// Implementation: 0x108ce84fc

// -[SCImageProcessBatchCapturePlaybackSession setFrameSourcePlayDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ce851c

// -[SCImageProcessBatchCapturePlaybackSession frameSourcesBatch]
// Type encoding: @16@0:8
// Implementation: 0x108ce8530

// -[SCImageProcessBatchCapturePlaybackSession layer]
// Type encoding: @16@0:8
// Implementation: 0x108ce8540

// -[SCImageProcessBatchCapturePlaybackSession setLayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ce8550

// -[SCImageProcessBatchCapturePlaybackSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108ce8590

@end
