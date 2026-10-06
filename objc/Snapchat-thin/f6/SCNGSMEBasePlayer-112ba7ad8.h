// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNGSMEBasePlayer
// Superclass: NSObject
// Address: 0x112ba7ad8

@interface SCNGSMEBasePlayer

// Property: playerModel; attributes: T@"SCNGSMESnap",&,N,V_playerModel
// Property: playerModelObservable; attributes: T@"SCObservable",R,N
// Property: playbackLogger; attributes: T@"<SCNGSMEPlaybackLogging>",&,N,V_playbackLogger
// Property: playerView; attributes: T@"UIView<SCNGSMEPlayerView>",&,N,V_playerView
// Property: videoFrameObservable; attributes: T@"SCObservable",R,N
// Property: publishVideoFramesEnabled; attributes: TB,N,V_publishVideoFramesEnabled
// Property: playerStatusObservable; attributes: T@"SCObservable",R,N
// Property: playerPhaseObservable; attributes: T@"SCObservable",R,N
// Property: shouldLoop; attributes: TB,N,V_shouldLoop
// Property: startTimestamp; attributes: T{?=qiIq},N,V_startTimestamp
// Property: endTimestamp; attributes: T{?=qiIq},N,V_endTimestamp
// Property: preciseSeeking; attributes: TB,N,V_preciseSeeking
// Property: renderSize; attributes: T{CGSize=dd},N,V_renderSize
// Property: volume; attributes: Tf,N
// Property: legacyPreviewPlayer; attributes: T@"<SCImageProcessVideoPlaybackSession>",&,N,V_legacyPreviewPlayer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNGSMEBasePlayer initWithPlayerModel:playerProvider:audioSession:circumstanceEngine:firstFrameImage:playbackLogger:preparePerformer:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x108579a7c

// -[SCNGSMEBasePlayer dealloc]
// Type encoding: v16@0:8
// Implementation: 0x108579d68

// -[SCNGSMEBasePlayer _currentStatus]
// Type encoding: q16@0:8
// Implementation: 0x108579ddc

// -[SCNGSMEBasePlayer _generateAndPublishCurrentStateWithTimestamp:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x108579e3c

// -[SCNGSMEBasePlayer _generateAndPublishCurrentState]
// Type encoding: v16@0:8
// Implementation: 0x10857a054

// -[SCNGSMEBasePlayer _calculatePublishTime]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x10857a09c

// -[SCNGSMEBasePlayer _publishState:]
// Type encoding: v24@0:8@16
// Implementation: 0x10857a0f0

// -[SCNGSMEBasePlayer _errorDomainPrefix]
// Type encoding: @16@0:8
// Implementation: 0x10857a14c

// -[SCNGSMEBasePlayer _errorForRawError:]
// Type encoding: @24@0:8@16
// Implementation: 0x10857a378

// -[SCNGSMEBasePlayer _observePlayerAndItem]
// Type encoding: v16@0:8
// Implementation: 0x10857a464

// -[SCNGSMEBasePlayer _registerForNotifications]
// Type encoding: v16@0:8
// Implementation: 0x10857adf4

// -[SCNGSMEBasePlayer _playerItemDidPlayToEndTime:]
// Type encoding: v24@0:8@16
// Implementation: 0x10857af44

// -[SCNGSMEBasePlayer _playerFailedToPlayToEnd:]
// Type encoding: v24@0:8@16
// Implementation: 0x10857afe4

// -[SCNGSMEBasePlayer _onReceiveStopNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x10857b158

// -[SCNGSMEBasePlayer _applicationDidBecomeActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x10857b160

// -[SCNGSMEBasePlayer _prepareVideoPlayback]
// Type encoding: v16@0:8
// Implementation: 0x10857b174

// -[SCNGSMEBasePlayer _disableClosedCaptions]
// Type encoding: v16@0:8
// Implementation: 0x10857b330

// -[SCNGSMEBasePlayer _errorIfNoPlayerItem]
// Type encoding: v16@0:8
// Implementation: 0x10857b3a0

// -[SCNGSMEBasePlayer _createPixelBufferPoolIfNeededWithSize:]
// Type encoding: v32@0:8{?=QQ}16
// Implementation: 0x10857b3a4

// -[SCNGSMEBasePlayer _setPlayedToEnd]
// Type encoding: v16@0:8
// Implementation: 0x10857b3a8

// -[SCNGSMEBasePlayer _publishPhaseEvent:]
// Type encoding: v24@0:8q16
// Implementation: 0x10857b3ac

// -[SCNGSMEBasePlayer _presentationFrameNumberForTimestamp:]
// Type encoding: q40@0:8{?=qiIq}16
// Implementation: 0x10857b3f4

// -[SCNGSMEBasePlayer _fpsForStatus]
// Type encoding: f16@0:8
// Implementation: 0x10857b5dc

// -[SCNGSMEBasePlayer canChangeModelWithoutRestart:]
// Type encoding: B24@0:8@16
// Implementation: 0x10857b5e4

// -[SCNGSMEBasePlayer playerModelObservable]
// Type encoding: @16@0:8
// Implementation: 0x10857b5ec

// -[SCNGSMEBasePlayer playerStatusObservable]
// Type encoding: @16@0:8
// Implementation: 0x10857b614

// -[SCNGSMEBasePlayer playerPhaseObservable]
// Type encoding: @16@0:8
// Implementation: 0x10857b63c

// -[SCNGSMEBasePlayer videoFrameObservable]
// Type encoding: @16@0:8
// Implementation: 0x10857b664

// -[SCNGSMEBasePlayer _setUpDisplayLink]
// Type encoding: v16@0:8
// Implementation: 0x10857b68c

// -[SCNGSMEBasePlayer _tearDownDisplayLink]
// Type encoding: v16@0:8
// Implementation: 0x10857b728

// -[SCNGSMEBasePlayer setPlayerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10857b764

// -[SCNGSMEBasePlayer _recordPlaybackLoggerCall:]
// Type encoding: v24@0:8@16
// Implementation: 0x10857b794

// -[SCNGSMEBasePlayer _setPlayerViewDispatchBlock:]
// Type encoding: v24@0:8@16
// Implementation: 0x10857b798

// -[SCNGSMEBasePlayer setShouldLoop:]
// Type encoding: v20@0:8B16
// Implementation: 0x10857b79c

// -[SCNGSMEBasePlayer setStartTimestamp:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x10857b7c4

// -[SCNGSMEBasePlayer setEndTimestamp:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x10857b7dc

// -[SCNGSMEBasePlayer setPreciseSeeking:]
// Type encoding: v20@0:8B16
// Implementation: 0x10857b9d4

// -[SCNGSMEBasePlayer setVolume:]
// Type encoding: v20@0:8f16
// Implementation: 0x10857b9dc

// -[SCNGSMEBasePlayer volume]
// Type encoding: f16@0:8
// Implementation: 0x10857b9f0

// -[SCNGSMEBasePlayer videoOutput]
// Type encoding: @16@0:8
// Implementation: 0x10857b9f8

// -[SCNGSMEBasePlayer setRenderSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x10857bb0c

// -[SCNGSMEBasePlayer renderSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10857bb20

// -[SCNGSMEBasePlayer prepareToPlay]
// Type encoding: v16@0:8
// Implementation: 0x10857bb28

// -[SCNGSMEBasePlayer _beginPreparingToPlay]
// Type encoding: v16@0:8
// Implementation: 0x10857bbb0

// -[SCNGSMEBasePlayer _finishPreparingToPlay]
// Type encoding: v16@0:8
// Implementation: 0x10857be98

// -[SCNGSMEBasePlayer _prepareToPlayOperation]
// Type encoding: v16@0:8
// Implementation: 0x10857bfd4

// -[SCNGSMEBasePlayer _usePreparePerformer]
// Type encoding: B16@0:8
// Implementation: 0x10857bfd8

// -[SCNGSMEBasePlayer _restartAfterAudioSessionDeactivationOrCategoryChange]
// Type encoding: B16@0:8
// Implementation: 0x10857bfe0

// -[SCNGSMEBasePlayer playerPrepared]
// Type encoding: B16@0:8
// Implementation: 0x10857bff8

// -[SCNGSMEBasePlayer setPlayerPrepared:]
// Type encoding: v20@0:8B16
// Implementation: 0x10857c008

// -[SCNGSMEBasePlayer _perform:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10857c01c

// -[SCNGSMEBasePlayer _displayLinkCallback:]
// Type encoding: v24@0:8@16
// Implementation: 0x10857c118

// -[SCNGSMEBasePlayer getSampleBufferAtTime:]
// Type encoding: ^{opaqueCMSampleBuffer=}24@0:8d16
// Implementation: 0x10857c11c

// -[SCNGSMEBasePlayer getRenderedImage]
// Type encoding: @16@0:8
// Implementation: 0x10857c2dc

// -[SCNGSMEBasePlayer _captureRenderedImage]
// Type encoding: @16@0:8
// Implementation: 0x10857c564

// -[SCNGSMEBasePlayer _createSampleBufferFromPixelBuffer:presentationTimeStamp:]
// Type encoding: ^{opaqueCMSampleBuffer=}48@0:8^{__CVBuffer=}16{?=qiIq}24
// Implementation: 0x10857c5d4

// -[SCNGSMEBasePlayer startRunning]
// Type encoding: v16@0:8
// Implementation: 0x10857c684

// -[SCNGSMEBasePlayer pauseRunning]
// Type encoding: v16@0:8
// Implementation: 0x10857c784

// -[SCNGSMEBasePlayer resumeRunning]
// Type encoding: v16@0:8
// Implementation: 0x10857c860

// -[SCNGSMEBasePlayer stopRunning]
// Type encoding: v16@0:8
// Implementation: 0x10857c944

// -[SCNGSMEBasePlayer setPlaybackRate:]
// Type encoding: v20@0:8f16
// Implementation: 0x10857cae0

// -[SCNGSMEBasePlayer seekVideoAndAudioToBeginning]
// Type encoding: v16@0:8
// Implementation: 0x10857cbe0

// -[SCNGSMEBasePlayer seekToTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x10857cd08

// -[SCNGSMEBasePlayer seekToTime:completionHandler:]
// Type encoding: v48@0:8{?=qiIq}16@?40
// Implementation: 0x10857cd44

// -[SCNGSMEBasePlayer stopPlayingAndSeekSmoothlyToTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x10857cefc

// -[SCNGSMEBasePlayer _smoothSeekToTime]
// Type encoding: v16@0:8
// Implementation: 0x10857d02c

// -[SCNGSMEBasePlayer isPlaying]
// Type encoding: B16@0:8
// Implementation: 0x10857d178

// -[SCNGSMEBasePlayer shouldBeRunning]
// Type encoding: B16@0:8
// Implementation: 0x10857d198

// -[SCNGSMEBasePlayer currentTime]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x10857d1a0

// -[SCNGSMEBasePlayer clearLastFrameImage]
// Type encoding: v16@0:8
// Implementation: 0x10857d1b8

// -[SCNGSMEBasePlayer _setPlaceholderImageOnPlayerView]
// Type encoding: v16@0:8
// Implementation: 0x10857d1bc

// -[SCNGSMEBasePlayer _onReceiveAudioSessionDidActivate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10857d1c0

// -[SCNGSMEBasePlayer _onReceiveAudioSessionWillDeactivate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10857d24c

// -[SCNGSMEBasePlayer audioSessionDidBeginInterruption:]
// Type encoding: v24@0:8@16
// Implementation: 0x10857d35c

// -[SCNGSMEBasePlayer audioSession:didEndInterruption:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10857d360

// -[SCNGSMEBasePlayer audioSessionRouteDidChangeReasonCategoryChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x10857d45c

// -[SCNGSMEBasePlayer audioSessionRouteDidChangeReasonNewDeviceAvailable:]
// Type encoding: v24@0:8@16
// Implementation: 0x10857d584

// -[SCNGSMEBasePlayer audioSessionRouteDidChangeReasonOldDeviceUnavailable:]
// Type encoding: v24@0:8@16
// Implementation: 0x10857d680

// -[SCNGSMEBasePlayer audioSessionSilenceSecondaryAudioHintTypeDidChangeToEnd:]
// Type encoding: v24@0:8@16
// Implementation: 0x10857d768

// -[SCNGSMEBasePlayer audioSessionMediaServicesWereReset:]
// Type encoding: v24@0:8@16
// Implementation: 0x10857d864

// -[SCNGSMEBasePlayer _resetPlayerAfterMediaServicesLoss]
// Type encoding: v16@0:8
// Implementation: 0x10857d968

// -[SCNGSMEBasePlayer _isCompositionSupported:]
// Type encoding: B24@0:8@16
// Implementation: 0x10857daec

// -[SCNGSMEBasePlayer _supportedVideoTrackCount:andImageOverlayCount:]
// Type encoding: B24@0:8i16i20
// Implementation: 0x10857dcf4

// -[SCNGSMEBasePlayer playerModel]
// Type encoding: @16@0:8
// Implementation: 0x10857dcfc

// -[SCNGSMEBasePlayer setPlayerModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x10857dd04

// -[SCNGSMEBasePlayer playbackLogger]
// Type encoding: @16@0:8
// Implementation: 0x10857dd34

// -[SCNGSMEBasePlayer setPlaybackLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x10857dd3c

// -[SCNGSMEBasePlayer shouldLoop]
// Type encoding: B16@0:8
// Implementation: 0x10857dd6c

// -[SCNGSMEBasePlayer startTimestamp]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x10857dd74

// -[SCNGSMEBasePlayer endTimestamp]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x10857dd8c

// -[SCNGSMEBasePlayer preciseSeeking]
// Type encoding: B16@0:8
// Implementation: 0x10857dda0

// -[SCNGSMEBasePlayer playerView]
// Type encoding: @16@0:8
// Implementation: 0x10857dda8

// -[SCNGSMEBasePlayer legacyPreviewPlayer]
// Type encoding: @16@0:8
// Implementation: 0x10857ddb0

// -[SCNGSMEBasePlayer setLegacyPreviewPlayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10857ddb8

// -[SCNGSMEBasePlayer publishVideoFramesEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10857dde8

// -[SCNGSMEBasePlayer setPublishVideoFramesEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10857ddf0

// -[SCNGSMEBasePlayer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10857ddf8

@end
