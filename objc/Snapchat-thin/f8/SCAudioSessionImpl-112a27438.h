// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAudioSessionImpl
// Superclass: SCAudioSessionCore
// Address: 0x112a27438

@interface SCAudioSessionImpl

// Property: hiddenVolumeView; attributes: T@"MPVolumeView",&,N,V_hiddenVolumeView
// Property: hiddenVolumeSlider; attributes: T@"UISlider",W,N,V_hiddenVolumeSlider
// Property: lastRecordingRequestDebugInfo; attributes: T@"NSString",&,N,V_lastRecordingRequestDebugInfo
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: callingDelegate; attributes: T@"<SCAudioSessionCallingDelegate>",W,N
// Property: category; attributes: T@"NSString",R,N
// Property: categoryOptions; attributes: TQ,R,N
// Property: mode; attributes: T@"NSString",R,N
// Property: secondaryAudioShouldBeSilencedHint; attributes: TB,R,N
// Property: availableInputs; attributes: T@"NSArray",R,N
// Property: currentRoute; attributes: T@"AVAudioSessionRouteDescription",R,N
// Property: previousRoute; attributes: T@"AVAudioSessionRouteDescription",R,N
// Property: maximumInputNumberOfChannels; attributes: Tq,R,N
// Property: maximumOutputNumberOfChannels; attributes: Tq,R,N
// Property: inputGain; attributes: Tf,R,N
// Property: inputGainSettable; attributes: TB,R,N
// Property: inputAvailable; attributes: TB,R,N
// Property: inputDataSources; attributes: T@"NSArray",R,N
// Property: inputDataSource; attributes: T@"AVAudioSessionDataSourceDescription",R,N
// Property: outputDataSources; attributes: T@"NSArray",R,N
// Property: outputDataSource; attributes: T@"AVAudioSessionDataSourceDescription",R,N
// Property: preferredInput; attributes: T@"AVAudioSessionPortDescription",R,N
// Property: sampleRate; attributes: Td,R,N
// Property: preferredSampleRate; attributes: Td,R,N
// Property: inputNumberOfChannels; attributes: Tq,R,N
// Property: outputNumberOfChannels; attributes: Tq,R,N
// Property: outputVolume; attributes: Tf,R,N
// Property: inputLatency; attributes: Td,R,N
// Property: outputLatency; attributes: Td,R,N
// Property: IOBufferDuration; attributes: Td,R,N
// Property: preferredIOBufferDuration; attributes: Td,R,N
// Property: isOtherAudioPlaying; attributes: TB,R,N
// Property: volumeHUDEnabled; attributes: TB,N

// -[SCAudioSessionImpl initWithPerformer:notificationCenter:proximityDevice:systemBlizzardLogger:appStartExperimentReader:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1000bc95c

// -[SCAudioSessionImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1052cb6c8

// -[SCAudioSessionImpl hiddenVolumeView]
// Type encoding: @16@0:8
// Implementation: 0x1052cb6fc

// -[SCAudioSessionImpl hiddenVolumeSlider]
// Type encoding: @16@0:8
// Implementation: 0x1052cb774

// -[SCAudioSessionImpl configureWith:performer:completion:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x1052cb7d8

// -[SCAudioSessionImpl _configureSessionWith:performer:completion:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x1052cb894

// -[SCAudioSessionImpl _requestRecordingWithLabel:isVideoRecord:shouldUseVideoRecordingMode:deactivation:shouldRetryRequest:shouldInterruptCalling:callbackPerformer:callback:]
// Type encoding: @60@0:8@16B24B28B32B36B40@44@?52
// Implementation: 0x1052cbaa8

// -[SCAudioSessionImpl _performRequestWithLabel:tokensSet:tokensSet:deactivation:shouldRetryRequest:shouldInterruptCalling:callbackPerformer:callback:]
// Type encoding: @68@0:8@16@24@32B40B44B48@52@?60
// Implementation: 0x1052cbc7c

// -[SCAudioSessionImpl _retryUpdateAVAudioSessionBeforeCallbackWithDeactivation:numRetries:performer:callBack:]
// Type encoding: v44@0:8B16q20@28@?36
// Implementation: 0x1052cbf70

// -[SCAudioSessionImpl callKitDidActivateAudioSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052cc13c

// -[SCAudioSessionImpl callKitWillDeactivateAudioSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052cc348

// -[SCAudioSessionImpl generateNewTokenWithLabel:]
// Type encoding: @24@0:8@16
// Implementation: 0x1052cc404

// -[SCAudioSessionImpl updateAudioConfigForToken:configRequest:callbackPerformer:callback:]
// Type encoding: v48@0:8@16@?24@32@?40
// Implementation: 0x1052cc494

// -[SCAudioSessionImpl updateProximityMonitoringForToken:configRequest:callbackPerformer:callback:]
// Type encoding: v48@0:8@16@?24@32@?40
// Implementation: 0x1052cc6cc

// -[SCAudioSessionImpl preferredOrFirstAvailableRouteType]
// Type encoding: Q16@0:8
// Implementation: 0x1052cc8e8

// -[SCAudioSessionImpl performApplyAudioRoute:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1052ccbb0

// -[SCAudioSessionImpl _applyAudioRoute:]
// Type encoding: B24@0:8@16
// Implementation: 0x1052cccc4

// -[SCAudioSessionImpl _isSpeakerOn]
// Type encoding: B16@0:8
// Implementation: 0x1052ccd74

// -[SCAudioSessionImpl _overrideOutputAudioPortWithSpeaker:]
// Type encoding: B20@0:8B16
// Implementation: 0x1052ccec8

// -[SCAudioSessionImpl _setPreferredAudioInput:]
// Type encoding: B24@0:8@16
// Implementation: 0x1052ccf28

// -[SCAudioSessionImpl availableRoutes]
// Type encoding: @16@0:8
// Implementation: 0x1052ccf9c

// -[SCAudioSessionImpl relinquishConfiguration:performer:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1052cd1d4

// -[SCAudioSessionImpl _releaseToken:callbackPerformer:callback:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1052cd250

// -[SCAudioSessionImpl updateConfigurationIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1052cd518

// -[SCAudioSessionImpl _updateConfigurationIfNeededWithPerformer:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1052cd558

// -[SCAudioSessionImpl performReactivateAudioSessionWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1052cd710

// -[SCAudioSessionImpl _resumeFromBackground]
// Type encoding: v16@0:8
// Implementation: 0x1052cd888

// -[SCAudioSessionImpl _shouldRouteBasedOnProximitySensor]
// Type encoding: B16@0:8
// Implementation: 0x1052cd8c8

// -[SCAudioSessionImpl _shouldUseCallingSettings]
// Type encoding: B16@0:8
// Implementation: 0x1052cd8f0

// -[SCAudioSessionImpl _shouldUseCallKitSettings]
// Type encoding: B16@0:8
// Implementation: 0x1052cd918

// -[SCAudioSessionImpl _shouldUseRecordingSettings]
// Type encoding: B16@0:8
// Implementation: 0x1052cd940

// -[SCAudioSessionImpl _shouldUseVideoRecordingModeForRecordingSettings]
// Type encoding: B16@0:8
// Implementation: 0x1052cd968

// -[SCAudioSessionImpl _shouldUseVideoRecordingSettings]
// Type encoding: B16@0:8
// Implementation: 0x1052cd990

// -[SCAudioSessionImpl _shouldUsePlaybackSettings]
// Type encoding: B16@0:8
// Implementation: 0x1052cd9b8

// -[SCAudioSessionImpl _shouldUsePlaybackMixWithOthersSettings]
// Type encoding: B16@0:8
// Implementation: 0x1052cd9e0

// -[SCAudioSessionImpl _shouldInterruptCallingSettings]
// Type encoding: B16@0:8
// Implementation: 0x1052cda08

// -[SCAudioSessionImpl _updateAVAudioSessionIfNeededWithShouldAutoRetry:]
// Type encoding: @20@0:8B16
// Implementation: 0x1052cda30

// -[SCAudioSessionImpl _updateAVAudioSessionIfNeededWithDeactivation:shouldAutoRetry:]
// Type encoding: @24@0:8B16B20
// Implementation: 0x1052cda3c

// -[SCAudioSessionImpl _updateAVAudioSessionCategory:categoryOptions:mode:setModeExplicitly:deactivating:activating:shouldAutoRetry:]
// Type encoding: @56@0:8@16Q24@32B40B44B48B52
// Implementation: 0x1052cdeb0

// -[SCAudioSessionImpl _scheduleAVAudioSessionUpdateRetry:]
// Type encoding: v20@0:8B16
// Implementation: 0x1052cec18

// -[SCAudioSessionImpl _updateProximityMonitoringStatus]
// Type encoding: v16@0:8
// Implementation: 0x1052ced08

// -[SCAudioSessionImpl _startObservingCallStateChanges]
// Type encoding: v16@0:8
// Implementation: 0x1052ced30

// -[SCAudioSessionImpl _stopObservingCallStateChanges]
// Type encoding: v16@0:8
// Implementation: 0x1052cedc4

// -[SCAudioSessionImpl callObserver:callChanged:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1052cede4

// -[SCAudioSessionImpl playbackTokens]
// Type encoding: @16@0:8
// Implementation: 0x1052cee20

// -[SCAudioSessionImpl recordTokens]
// Type encoding: @16@0:8
// Implementation: 0x1052cee50

// -[SCAudioSessionImpl videoRecordTokens]
// Type encoding: @16@0:8
// Implementation: 0x1052cee80

// -[SCAudioSessionImpl callingTokens]
// Type encoding: @16@0:8
// Implementation: 0x1052ceeb0

// -[SCAudioSessionImpl callKitTokens]
// Type encoding: @16@0:8
// Implementation: 0x1052ceee0

// -[SCAudioSessionImpl proximityRoutingTokens]
// Type encoding: @16@0:8
// Implementation: 0x1052cef10

// -[SCAudioSessionImpl tokenSets]
// Type encoding: @16@0:8
// Implementation: 0x1052cef40

// -[SCAudioSessionImpl setCallingAvoidMixingExternalAudio:]
// Type encoding: v20@0:8B16
// Implementation: 0x1052cef70

// -[SCAudioSessionImpl onAVAudioSessionInterruption:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052cef80

// -[SCAudioSessionImpl onAVAudioSessionMediaServicesWereLost:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052cf1d4

// -[SCAudioSessionImpl onAVAudioSessionMediaServicesWereReset:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052cf2a8

// -[SCAudioSessionImpl proximityDevice:onProximityStateChange:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1052cf37c

// -[SCAudioSessionImpl debugInfoWithUploadInfoCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1052cf44c

// -[SCAudioSessionImpl applicationWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x1052cf934

// -[SCAudioSessionImpl lastRecordingRequestDebugInfo]
// Type encoding: @16@0:8
// Implementation: 0x1052cf970

// -[SCAudioSessionImpl setLastRecordingRequestDebugInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052cf980

// -[SCAudioSessionImpl setHiddenVolumeView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052cf9c0

// -[SCAudioSessionImpl setHiddenVolumeSlider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052cfa00

// -[SCAudioSessionImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1052cfa14

@end
