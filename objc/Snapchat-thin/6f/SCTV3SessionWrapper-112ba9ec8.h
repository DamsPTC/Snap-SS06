// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTV3SessionWrapper
// Superclass: NSObject
// Address: 0x112ba9ec8

@interface SCTV3SessionWrapper

// Property: callingSessionState; attributes: T@"SCTCCallingSessionState",&,V_callingSessionState
// Property: talkContext; attributes: T@"<SCTalkContext>",R,N,V_talkContext
// Property: lensToRestore; attributes: T@"SCCallLensInfo",R,N,V_lensToRestore
// Property: participantColorCache; attributes: T@"SCTCallInfoParticipantColorCache",R,N,V_participantColorCache
// Property: localScreenShareInfoObservable; attributes: T@"SCObservable",R,N,V_localScreenShareInfoObservable
// Property: callIntent; attributes: T@"SCCallIntent",R,N,V_callIntent
// Property: callPageConfig; attributes: T@"<SCCallPageConfig>",R,N,V_callPageConfig
// Property: cameraType; attributes: TQ,N,V_cameraType
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTV3SessionWrapper initWithTalkContext:callIntent:callingSession:talkCoreDispatcher:chatTransportServices:identityServices:talkContextMutableFactory:screenCaptureServices:callSuperResolutionServices:batteryObserver:notificationPool:applicationLifecycleEvents:localFrameProvider:platformEventSubject:rendererManagerBridge:callPageConfig:]
// Type encoding: @144@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136
// Implementation: 0x1085ea340

// -[SCTV3SessionWrapper dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1085eac3c

// -[SCTV3SessionWrapper addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085eac90

// -[SCTV3SessionWrapper removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085eac98

// -[SCTV3SessionWrapper addExtraListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085eaca0

// -[SCTV3SessionWrapper removeExtraListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085eaca8

// -[SCTV3SessionWrapper createToken]
// Type encoding: @16@0:8
// Implementation: 0x1085eacb0

// -[SCTV3SessionWrapper flushTokenUpdates:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085eacec

// -[SCTV3SessionWrapper invalidateToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085ead24

// -[SCTV3SessionWrapper dispose]
// Type encoding: v16@0:8
// Implementation: 0x1085ead5c

// -[SCTV3SessionWrapper state]
// Type encoding: @16@0:8
// Implementation: 0x1085eada8

// -[SCTV3SessionWrapper localParticipant]
// Type encoding: @16@0:8
// Implementation: 0x1085eadac

// -[SCTV3SessionWrapper talkSessionState]
// Type encoding: q16@0:8
// Implementation: 0x1085eadf0

// -[SCTV3SessionWrapper updateMuteStatus:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085eadf8

// -[SCTV3SessionWrapper updatePublishedMedia:isMuted:completion:]
// Type encoding: v36@0:8Q16B24@?28
// Implementation: 0x1085eaed0

// -[SCTV3SessionWrapper dismissCall]
// Type encoding: v16@0:8
// Implementation: 0x1085eb1c0

// -[SCTV3SessionWrapper reportNotificationDisplayType:deliveryMechanism:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x1085eb224

// -[SCTV3SessionWrapper reportNotificationFailed:senderUserId:missedCallReason:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x1085eb320

// -[SCTV3SessionWrapper _isAnyParticipantScreenSharing]
// Type encoding: B16@0:8
// Implementation: 0x1085eb400

// -[SCTV3SessionWrapper _recomputeSuperResolutionPause]
// Type encoding: v16@0:8
// Implementation: 0x1085eb590

// -[SCTV3SessionWrapper _isRemoteCameraSinkId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1085eb5d4

// -[SCTV3SessionWrapper startRendering:callback:]
// Type encoding: i32@0:8@16@24
// Implementation: 0x1085eb794

// -[SCTV3SessionWrapper stopRendering:]
// Type encoding: v20@0:8i16
// Implementation: 0x1085eb93c

// -[SCTV3SessionWrapper onLensStarted:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085eb944

// -[SCTV3SessionWrapper onLensStopped]
// Type encoding: v16@0:8
// Implementation: 0x1085eba50

// -[SCTV3SessionWrapper sendUserVideoStreamVisibilityEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085ebb24

// -[SCTV3SessionWrapper setLensToRestore:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085ebc10

// -[SCTV3SessionWrapper setAppliedLensObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085ebc40

// -[SCTV3SessionWrapper setSharedLensController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085ebe2c

// -[SCTV3SessionWrapper setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085ebe5c

// -[SCTV3SessionWrapper notifyScreenShotTaken]
// Type encoding: v16@0:8
// Implementation: 0x1085ebe68

// -[SCTV3SessionWrapper notifyScreenRecorded]
// Type encoding: v16@0:8
// Implementation: 0x1085ebf84

// -[SCTV3SessionWrapper reportCallingAddedParticipants:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085ec0d4

// -[SCTV3SessionWrapper setDisposeReason:]
// Type encoding: v20@0:8i16
// Implementation: 0x1085ec1e0

// -[SCTV3SessionWrapper notifyScreenShareWillStart:]
// Type encoding: B20@0:8B16
// Implementation: 0x1085ec21c

// -[SCTV3SessionWrapper _onStateUpdated:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085ec26c

// -[SCTV3SessionWrapper _onTalkingStateChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085ec398

// -[SCTV3SessionWrapper _startConnectedLensSelfStream]
// Type encoding: v16@0:8
// Implementation: 0x1085ec3f0

// -[SCTV3SessionWrapper _stopConnectedLensSelfStream]
// Type encoding: v16@0:8
// Implementation: 0x1085ec4dc

// -[SCTV3SessionWrapper stopScreenCapture]
// Type encoding: v16@0:8
// Implementation: 0x1085ec5c8

// -[SCTV3SessionWrapper _onLensStarted:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085ec5d0

// -[SCTV3SessionWrapper _onLensStopped]
// Type encoding: v16@0:8
// Implementation: 0x1085ec6c8

// -[SCTV3SessionWrapper screenCaptureServices:injectFrame:]
// Type encoding: v32@0:8@16^{opaqueCMSampleBuffer=}24
// Implementation: 0x1085ec740

// -[SCTV3SessionWrapper screenCaptureServices:stateChanged:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1085ec75c

// -[SCTV3SessionWrapper wasRemovedFromScreenCaptureServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085ec85c

// -[SCTV3SessionWrapper _resolveActiveCallUI]
// Type encoding: v16@0:8
// Implementation: 0x1085ec954

// -[SCTV3SessionWrapper _activate]
// Type encoding: v16@0:8
// Implementation: 0x1085ecadc

// -[SCTV3SessionWrapper _activateWithPausedVideo]
// Type encoding: v16@0:8
// Implementation: 0x1085eccd4

// -[SCTV3SessionWrapper _background]
// Type encoding: v16@0:8
// Implementation: 0x1085ecd90

// -[SCTV3SessionWrapper _updateUiState:]
// Type encoding: v20@0:8i16
// Implementation: 0x1085ecda4

// -[SCTV3SessionWrapper _subscribeToSessionEvents]
// Type encoding: v16@0:8
// Implementation: 0x1085ece80

// -[SCTV3SessionWrapper _onScreenStateChanged:]
// Type encoding: v24@0:8q16
// Implementation: 0x1085ed710

// -[SCTV3SessionWrapper _updateScreenState:enableAudio:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x1085ed7f4

// -[SCTV3SessionWrapper _runOnTalkCoreThreadWithPlatformEventSubject:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1085eda10

// -[SCTV3SessionWrapper _handleStateChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085edac4

// -[SCTV3SessionWrapper _checkForRemoteScreenStreamStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085eddb0

// -[SCTV3SessionWrapper _registerAsScreenCaptureDelegate]
// Type encoding: v16@0:8
// Implementation: 0x1085ee148

// -[SCTV3SessionWrapper _removeAsScreenCaptureDelegate]
// Type encoding: v16@0:8
// Implementation: 0x1085ee178

// -[SCTV3SessionWrapper _selfDestructIfPossible]
// Type encoding: v16@0:8
// Implementation: 0x1085ee204

// -[SCTV3SessionWrapper _selfDestructLaterIfPossible]
// Type encoding: v16@0:8
// Implementation: 0x1085ee270

// -[SCTV3SessionWrapper _destroyTalkCoreSession]
// Type encoding: v16@0:8
// Implementation: 0x1085ee334

// -[SCTV3SessionWrapper _onAVAudioSessionMediaServicesWereReset:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085ee438

// -[SCTV3SessionWrapper _refreshRemoteParticipants:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085ee538

// -[SCTV3SessionWrapper _updateScreenCaptureDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085ee81c

// -[SCTV3SessionWrapper _updateCallIsInProgress:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085ee8c4

// -[SCTV3SessionWrapper _onCallStarted]
// Type encoding: v16@0:8
// Implementation: 0x1085ee950

// -[SCTV3SessionWrapper _onCallEnded]
// Type encoding: v16@0:8
// Implementation: 0x1085ee958

// -[SCTV3SessionWrapper _showVideoPrivacyNotification]
// Type encoding: v16@0:8
// Implementation: 0x1085ee960

// -[SCTV3SessionWrapper _clearLensIdToRestore]
// Type encoding: v16@0:8
// Implementation: 0x1085ee968

// -[SCTV3SessionWrapper talkContext]
// Type encoding: @16@0:8
// Implementation: 0x1085ee978

// -[SCTV3SessionWrapper lensToRestore]
// Type encoding: @16@0:8
// Implementation: 0x1085ee980

// -[SCTV3SessionWrapper participantColorCache]
// Type encoding: @16@0:8
// Implementation: 0x1085ee988

// -[SCTV3SessionWrapper localScreenShareInfoObservable]
// Type encoding: @16@0:8
// Implementation: 0x1085ee990

// -[SCTV3SessionWrapper callIntent]
// Type encoding: @16@0:8
// Implementation: 0x1085ee998

// -[SCTV3SessionWrapper callPageConfig]
// Type encoding: @16@0:8
// Implementation: 0x1085ee9a0

// -[SCTV3SessionWrapper cameraType]
// Type encoding: Q16@0:8
// Implementation: 0x1085ee9a8

// -[SCTV3SessionWrapper setCameraType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1085ee9b0

// -[SCTV3SessionWrapper callingSessionState]
// Type encoding: @16@0:8
// Implementation: 0x1085ee9b8

// -[SCTV3SessionWrapper setCallingSessionState:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085ee9c4

// -[SCTV3SessionWrapper .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1085ee9cc

@end
