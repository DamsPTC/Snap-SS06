// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessVideoPlaybackSessionImpl
// Superclass: NSObject
// Address: 0x112be3c68

@interface SCImageProcessVideoPlaybackSessionImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: disableAudioPlayback; attributes: TB,N,V_disableAudioPlayback
// Property: volume; attributes: Tf,N
// Property: shouldLoop; attributes: TB,N
// Property: isReversePlaying; attributes: TB,R,N
// Property: startTimestamp; attributes: T{?=qiIq},N,V_startTimestamp
// Property: endTimestamp; attributes: T{?=qiIq},N,V_endTimestamp
// Property: preciseSeeking; attributes: TB,N,V_preciseSeeking
// Property: audioProcessorMix; attributes: T@"AVAudioMix",&,N,V_audioProcessorMix
// Property: audioOverrideAsset; attributes: T@"AVAsset",&,N
// Property: isRewindingToBeginning; attributes: TB,R,N,V_isRewindingToBeginning
// Property: isFastForwardingToEnd; attributes: TB,R,N,V_isFastForwardingToEnd
// Property: continuousAudioPlay; attributes: TB,N,V_continuousAudioPlay
// Property: timeToPrepareSec; attributes: Td,R,N,V_timeToPrepareSec
// Property: startPreparingTimeSec; attributes: Td,R,N,V_startPreparingTimeSec

// -[SCImageProcessVideoPlaybackSessionImpl initWithQueue:audioSession:player:asset:layer:orientation:useHighFrameRate:isPlaybackBufferMonitoringEnabled:videoPlaybackLogger:commandManager:isSpectaclesMedia:isOpera:]
// Type encoding: @96@0:8@16@24@32@40@48q56B64B68@72@80B88B92
// Implementation: 0x10906c300

// -[SCImageProcessVideoPlaybackSessionImpl initWithQueue:player:asset:layer:orientation:useHighFrameRate:isPlaybackBufferMonitoringEnabled:videoPlaybackLogger:commandManager:isSpectaclesMedia:isOpera:]
// Type encoding: @88@0:8@16@24@32@40q48B56B60@64@72B80B84
// Implementation: 0x10906c644

// -[SCImageProcessVideoPlaybackSessionImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10906c67c

// -[SCImageProcessVideoPlaybackSessionImpl cleanupCommandsAndRenderer]
// Type encoding: v16@0:8
// Implementation: 0x10906c6f0

// -[SCImageProcessVideoPlaybackSessionImpl prepareToPlay]
// Type encoding: v16@0:8
// Implementation: 0x10906c814

// -[SCImageProcessVideoPlaybackSessionImpl isPlaying]
// Type encoding: B16@0:8
// Implementation: 0x10906ca30

// -[SCImageProcessVideoPlaybackSessionImpl currentTime]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x10906ca38

// -[SCImageProcessVideoPlaybackSessionImpl beginConfiguration]
// Type encoding: v16@0:8
// Implementation: 0x10906ca50

// -[SCImageProcessVideoPlaybackSessionImpl commitConfigurationWithSeekToBeginning:]
// Type encoding: v20@0:8B16
// Implementation: 0x10906ca5c

// -[SCImageProcessVideoPlaybackSessionImpl volume]
// Type encoding: f16@0:8
// Implementation: 0x10906cb60

// -[SCImageProcessVideoPlaybackSessionImpl setVolume:]
// Type encoding: v20@0:8f16
// Implementation: 0x10906cb68

// -[SCImageProcessVideoPlaybackSessionImpl shouldLoop]
// Type encoding: B16@0:8
// Implementation: 0x10906cbb4

// -[SCImageProcessVideoPlaybackSessionImpl setShouldLoop:]
// Type encoding: v20@0:8B16
// Implementation: 0x10906cbbc

// -[SCImageProcessVideoPlaybackSessionImpl isReversePlaying]
// Type encoding: B16@0:8
// Implementation: 0x10906cbe4

// -[SCImageProcessVideoPlaybackSessionImpl setAudioProcessorMix:]
// Type encoding: v24@0:8@16
// Implementation: 0x10906cbec

// -[SCImageProcessVideoPlaybackSessionImpl setAudioOverrideAsset:]
// Type encoding: v24@0:8@16
// Implementation: 0x10906cc24

// -[SCImageProcessVideoPlaybackSessionImpl setMixedAudioAssetTrack:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10906ce24

// -[SCImageProcessVideoPlaybackSessionImpl updateVolumeProportion:forAudioTrackWithKey:]
// Type encoding: v28@0:8f16@20
// Implementation: 0x10906ce28

// -[SCImageProcessVideoPlaybackSessionImpl audioOverrideAsset]
// Type encoding: @16@0:8
// Implementation: 0x10906ce2c

// -[SCImageProcessVideoPlaybackSessionImpl setBackgroundAnimationCommand:]
// Type encoding: v24@0:8@16
// Implementation: 0x10906ce54

// -[SCImageProcessVideoPlaybackSessionImpl setSwipeOffset:]
// Type encoding: v20@0:8f16
// Implementation: 0x10906cfac

// -[SCImageProcessVideoPlaybackSessionImpl setPlayerRate:]
// Type encoding: v24@0:8d16
// Implementation: 0x10906cfcc

// -[SCImageProcessVideoPlaybackSessionImpl addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10906d03c

// -[SCImageProcessVideoPlaybackSessionImpl removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10906d044

// -[SCImageProcessVideoPlaybackSessionImpl startRunning]
// Type encoding: v16@0:8
// Implementation: 0x10906d04c

// -[SCImageProcessVideoPlaybackSessionImpl pauseRunningAndContinueRendering:]
// Type encoding: v20@0:8B16
// Implementation: 0x10906d2bc

// -[SCImageProcessVideoPlaybackSessionImpl resumeRunning]
// Type encoding: v16@0:8
// Implementation: 0x10906d308

// -[SCImageProcessVideoPlaybackSessionImpl stopRunning]
// Type encoding: v16@0:8
// Implementation: 0x10906d37c

// -[SCImageProcessVideoPlaybackSessionImpl setReversePlaybackEnabled:reverseAudioPlayer:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x10906d4d0

// -[SCImageProcessVideoPlaybackSessionImpl setPlayerItemTimeScale:]
// Type encoding: v24@0:8d16
// Implementation: 0x10906d5a0

// -[SCImageProcessVideoPlaybackSessionImpl setViewportTransform:]
// Type encoding: v64@0:8{CGAffineTransform=dddddd}16
// Implementation: 0x10906d6cc

// -[SCImageProcessVideoPlaybackSessionImpl seekVideoAndAudioToBeginning]
// Type encoding: v16@0:8
// Implementation: 0x10906d6e8

// -[SCImageProcessVideoPlaybackSessionImpl seekToTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x10906d758

// -[SCImageProcessVideoPlaybackSessionImpl _seekVideoAndAudioToTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x10906d830

// -[SCImageProcessVideoPlaybackSessionImpl rewindToBeginningWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10906dbd4

// -[SCImageProcessVideoPlaybackSessionImpl fastFowardToEndWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10906dc14

// -[SCImageProcessVideoPlaybackSessionImpl finishRewindingToBeginning]
// Type encoding: v16@0:8
// Implementation: 0x10906dc54

// -[SCImageProcessVideoPlaybackSessionImpl finishFastForwardingToEnd]
// Type encoding: v16@0:8
// Implementation: 0x10906dca4

// -[SCImageProcessVideoPlaybackSessionImpl stopPlayingAndSeekSmoothlyToTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x10906dcf4

// -[SCImageProcessVideoPlaybackSessionImpl _smoothSeekToTime]
// Type encoding: v16@0:8
// Implementation: 0x10906ddd0

// -[SCImageProcessVideoPlaybackSessionImpl currentItemStartTimeOffset]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x10906df58

// -[SCImageProcessVideoPlaybackSessionImpl playbackTimeForFrameTime:]
// Type encoding: {?=qiIq}40@0:8{?=qiIq}16
// Implementation: 0x10906df74

// -[SCImageProcessVideoPlaybackSessionImpl _isPlayerPaused]
// Type encoding: B16@0:8
// Implementation: 0x10906df88

// -[SCImageProcessVideoPlaybackSessionImpl _cleanUpDisplayLink]
// Type encoding: v16@0:8
// Implementation: 0x10906dfa8

// -[SCImageProcessVideoPlaybackSessionImpl _applicationWillResignActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x10906dfe0

// -[SCImageProcessVideoPlaybackSessionImpl _applicationDidBecomeActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x10906e018

// -[SCImageProcessVideoPlaybackSessionImpl _playerItemDidPlayToEndTime:]
// Type encoding: v24@0:8@16
// Implementation: 0x10906e080

// -[SCImageProcessVideoPlaybackSessionImpl setShouldAnimateBackgroundCommand:]
// Type encoding: v20@0:8B16
// Implementation: 0x10906e150

// -[SCImageProcessVideoPlaybackSessionImpl _tryRemakeOutput]
// Type encoding: v16@0:8
// Implementation: 0x10906e158

// -[SCImageProcessVideoPlaybackSessionImpl _displayLinkCallback:]
// Type encoding: v24@0:8@16
// Implementation: 0x10906e1bc

// -[SCImageProcessVideoPlaybackSessionImpl _playerItemBufferDidBecomeEmpty:]
// Type encoding: v24@0:8@16
// Implementation: 0x10906e978

// -[SCImageProcessVideoPlaybackSessionImpl _playerItemLikelyToKeepUp:]
// Type encoding: v24@0:8@16
// Implementation: 0x10906ea3c

// -[SCImageProcessVideoPlaybackSessionImpl _playerItemStatusDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x10906eb00

// -[SCImageProcessVideoPlaybackSessionImpl _rescaleAssetComposition:]
// Type encoding: v20@0:8f16
// Implementation: 0x10906ebe8

// -[SCImageProcessVideoPlaybackSessionImpl _setupAssetCompositionAndPlayerItem]
// Type encoding: B16@0:8
// Implementation: 0x10906ed18

// -[SCImageProcessVideoPlaybackSessionImpl _unobservePlayerItem]
// Type encoding: v16@0:8
// Implementation: 0x10906f110

// -[SCImageProcessVideoPlaybackSessionImpl _observePlayerItem]
// Type encoding: v16@0:8
// Implementation: 0x10906f180

// -[SCImageProcessVideoPlaybackSessionImpl _updatePlayerRateWithReversePlayback]
// Type encoding: v16@0:8
// Implementation: 0x10906f2fc

// -[SCImageProcessVideoPlaybackSessionImpl _setAVPlayerVolumes:]
// Type encoding: v20@0:8f16
// Implementation: 0x10906f38c

// -[SCImageProcessVideoPlaybackSessionImpl _playShouldSeek:toTime:]
// Type encoding: v44@0:8B16{?=qiIq}20
// Implementation: 0x10906f410

// -[SCImageProcessVideoPlaybackSessionImpl _pause]
// Type encoding: v16@0:8
// Implementation: 0x10906f4d4

// -[SCImageProcessVideoPlaybackSessionImpl _startRunningShouldSeek:toTime:]
// Type encoding: v44@0:8B16{?=qiIq}20
// Implementation: 0x10906f534

// -[SCImageProcessVideoPlaybackSessionImpl _remakeVideoOutput]
// Type encoding: v16@0:8
// Implementation: 0x10906f5ac

// -[SCImageProcessVideoPlaybackSessionImpl _generateAndConfigurePlayerItemFromAsset:]
// Type encoding: @24@0:8@16
// Implementation: 0x10906f688

// -[SCImageProcessVideoPlaybackSessionImpl _rescaleAndChangePlayerItemIfNecessaryIgnoringOldSpeed:]
// Type encoding: v20@0:8B16
// Implementation: 0x10906f728

// -[SCImageProcessVideoPlaybackSessionImpl _applyAudioProcessorMix]
// Type encoding: v16@0:8
// Implementation: 0x10906f77c

// -[SCImageProcessVideoPlaybackSessionImpl _didFinishSeeking]
// Type encoding: v16@0:8
// Implementation: 0x10906f83c

// -[SCImageProcessVideoPlaybackSessionImpl _warmupCommandsIfNeededForOutputSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x10906f854

// -[SCImageProcessVideoPlaybackSessionImpl audioSessionDidBeginInterruption:]
// Type encoding: v24@0:8@16
// Implementation: 0x10906f85c

// -[SCImageProcessVideoPlaybackSessionImpl audioSession:didEndInterruption:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10906f860

// -[SCImageProcessVideoPlaybackSessionImpl audioSessionRouteDidChangeReasonNewDeviceAvailable:]
// Type encoding: v24@0:8@16
// Implementation: 0x10906f874

// -[SCImageProcessVideoPlaybackSessionImpl audioSessionRouteDidChangeReasonOldDeviceUnavailable:]
// Type encoding: v24@0:8@16
// Implementation: 0x10906f888

// -[SCImageProcessVideoPlaybackSessionImpl _onReceiveStopNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x10906f970

// -[SCImageProcessVideoPlaybackSessionImpl disableAudioPlayback]
// Type encoding: B16@0:8
// Implementation: 0x10906f974

// -[SCImageProcessVideoPlaybackSessionImpl setDisableAudioPlayback:]
// Type encoding: v20@0:8B16
// Implementation: 0x10906f97c

// -[SCImageProcessVideoPlaybackSessionImpl startTimestamp]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x10906f984

// -[SCImageProcessVideoPlaybackSessionImpl setStartTimestamp:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x10906f99c

// -[SCImageProcessVideoPlaybackSessionImpl endTimestamp]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x10906f9b4

// -[SCImageProcessVideoPlaybackSessionImpl setEndTimestamp:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x10906f9c8

// -[SCImageProcessVideoPlaybackSessionImpl preciseSeeking]
// Type encoding: B16@0:8
// Implementation: 0x10906f9dc

// -[SCImageProcessVideoPlaybackSessionImpl setPreciseSeeking:]
// Type encoding: v20@0:8B16
// Implementation: 0x10906f9e4

// -[SCImageProcessVideoPlaybackSessionImpl audioProcessorMix]
// Type encoding: @16@0:8
// Implementation: 0x10906f9ec

// -[SCImageProcessVideoPlaybackSessionImpl isRewindingToBeginning]
// Type encoding: B16@0:8
// Implementation: 0x10906f9f4

// -[SCImageProcessVideoPlaybackSessionImpl isFastForwardingToEnd]
// Type encoding: B16@0:8
// Implementation: 0x10906f9fc

// -[SCImageProcessVideoPlaybackSessionImpl timeToPrepareSec]
// Type encoding: d16@0:8
// Implementation: 0x10906fa04

// -[SCImageProcessVideoPlaybackSessionImpl startPreparingTimeSec]
// Type encoding: d16@0:8
// Implementation: 0x10906fa0c

// -[SCImageProcessVideoPlaybackSessionImpl continuousAudioPlay]
// Type encoding: B16@0:8
// Implementation: 0x10906fa14

// -[SCImageProcessVideoPlaybackSessionImpl setContinuousAudioPlay:]
// Type encoding: v20@0:8B16
// Implementation: 0x10906fa1c

// -[SCImageProcessVideoPlaybackSessionImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10906fa24

@end
