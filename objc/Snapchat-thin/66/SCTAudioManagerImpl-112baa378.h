// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTAudioManagerImpl
// Superclass: NSObject
// Address: 0x112baa378

@interface SCTAudioManagerImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTAudioManagerImpl initWithAudioServices:mutableAudioSession:grapheneLogger:delegate:applicationLifecycleEvents:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1085f8854

// -[SCTAudioManagerImpl audioState]
// Type encoding: @16@0:8
// Implementation: 0x1085f8c50

// -[SCTAudioManagerImpl selectAudioDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085f8c78

// -[SCTAudioManagerImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085f8ce8

// -[SCTAudioManagerImpl sessionWrapper:updatedState:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1085f8cf4

// -[SCTAudioManagerImpl _sessionWrapper:updatedState:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1085f8e28

// -[SCTAudioManagerImpl _turnOnSpeakerBecauseOfChangingToVideoCall]
// Type encoding: v16@0:8
// Implementation: 0x1085f9198

// -[SCTAudioManagerImpl callKitIncomingCallStarted:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085f9220

// -[SCTAudioManagerImpl requestCallKitAudioSessionWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1085f9270

// -[SCTAudioManagerImpl releaseCallKitAudioSession]
// Type encoding: v16@0:8
// Implementation: 0x1085f93d4

// -[SCTAudioManagerImpl callKitDidActivateAudioSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085f9414

// -[SCTAudioManagerImpl callKitWillDeactivateAudioSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085f9568

// -[SCTAudioManagerImpl recordOutgoingCallStartMedia:forTalkContextId:]
// Type encoding: Q32@0:8Q16@24
// Implementation: 0x1085f95d0

// -[SCTAudioManagerImpl withdrawOutgoingCallStartMediaWithToken:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1085f9634

// -[SCTAudioManagerImpl _clearSpeakerOverrideMarkerForFailedApplyWithGeneration:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1085f9670

// -[SCTAudioManagerImpl audioSessionDidBeginCallInterruption:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085f973c

// -[SCTAudioManagerImpl audioSessionDidEndCallInterruption:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085f97c8

// -[SCTAudioManagerImpl audioSessionRouteDidChange:notification:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1085f9854

// -[SCTAudioManagerImpl _onAppWillEnterForegroundChangeRouteIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1085f9a64

// -[SCTAudioManagerImpl _onAppWillEnterForeground:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085f9b10

// -[SCTAudioManagerImpl _onAVAudioSessionRouteChangedWithReason:previousRoute:currentRoute:availableRoutes:]
// Type encoding: v48@0:8Q16@24@32@40
// Implementation: 0x1085f9bd0

// -[SCTAudioManagerImpl _hasEventJustHappenedForTimestamp:threshold:]
// Type encoding: B32@0:8@16d24
// Implementation: 0x1085f9ea8

// -[SCTAudioManagerImpl _hasCallKitIncomingCallJustStarted]
// Type encoding: B16@0:8
// Implementation: 0x1085f9ee4

// -[SCTAudioManagerImpl _isInCallOrCallingAccordingToTalkSession]
// Type encoding: B16@0:8
// Implementation: 0x1085f9ef0

// -[SCTAudioManagerImpl _isMediaHavingVideo]
// Type encoding: B16@0:8
// Implementation: 0x1085fa01c

// -[SCTAudioManagerImpl _isRerouteRequiredNativeSelector:routeChangeReason:previousRoute:]
// Type encoding: B40@0:8q16Q24@32
// Implementation: 0x1085fa184

// -[SCTAudioManagerImpl _performUpdateWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1085fa2d4

// -[SCTAudioManagerImpl _updateAudioSessionConfigForNonCallKit:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1085fa79c

// -[SCTAudioManagerImpl _updateAudioSessionConfigForCallKitWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1085fa8d0

// -[SCTAudioManagerImpl _updateAudioSessionConfig:isForCallKit:completion:]
// Type encoding: v36@0:8Q16B24@?28
// Implementation: 0x1085fa8ec

// -[SCTAudioManagerImpl _updateProximityIfNeeded:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1085fa950

// -[SCTAudioManagerImpl _updateRoutesAndChangeRouteIfNeeded:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1085faa04

// -[SCTAudioManagerImpl _changeRouteIfNeeded:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1085faab8

// -[SCTAudioManagerImpl _shouldLockRinging:]
// Type encoding: B24@0:8@16
// Implementation: 0x1085fad00

// -[SCTAudioManagerImpl _requestRingingLock:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085fad44

// -[SCTAudioManagerImpl _requestRingingUnlock:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085fae30

// -[SCTAudioManagerImpl _processPlaybackOfRingingSound:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085faf04

// -[SCTAudioManagerImpl _processPlaybackOfRingingSoundAfterEnablingAudioIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1085fb19c

// -[SCTAudioManagerImpl _shouldPlayHangupSoundForReason:]
// Type encoding: B24@0:8@16
// Implementation: 0x1085fb24c

// -[SCTAudioManagerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1085fb334

@end
