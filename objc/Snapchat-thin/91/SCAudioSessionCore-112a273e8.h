// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAudioSessionCore
// Superclass: NSObject
// Address: 0x112a273e8

@interface SCAudioSessionCore

// Property: session; attributes: T@"AVAudioSession",R,N
// Property: performer; attributes: T@"<SCPerforming>",R,N,V_performer
// Property: proximityDevice; attributes: T@"SCProximityDevice",R,N,V_proximityDevice
// Property: announcer; attributes: T@"SCAudioSessionListenerAnnouncer",&,N,V_announcer
// Property: notificationCenter; attributes: T@"NSNotificationCenter",&,N,V_notificationCenter
// Property: callingDelegate; attributes: T@"<SCAudioSessionCallingDelegate>",W,N,V_callingDelegate
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
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAudioSessionCore initWithPerformer:notificationCenter:proximityDevice:systemBlizzardLogger:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1000bcc3c

// -[SCAudioSessionCore dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1052c7568

// -[SCAudioSessionCore session]
// Type encoding: @16@0:8
// Implementation: 0x1000bcee0

// -[SCAudioSessionCore category]
// Type encoding: @16@0:8
// Implementation: 0x1052c75ac

// -[SCAudioSessionCore categoryOptions]
// Type encoding: Q16@0:8
// Implementation: 0x1052c75f0

// -[SCAudioSessionCore mode]
// Type encoding: @16@0:8
// Implementation: 0x1052c762c

// -[SCAudioSessionCore setActive:]
// Type encoding: B20@0:8B16
// Implementation: 0x1052c7670

// -[SCAudioSessionCore setActive:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x1052c76c4

// -[SCAudioSessionCore setActive:notifyOthers:completion:]
// Type encoding: v32@0:8B16B20@?24
// Implementation: 0x1052c77b8

// -[SCAudioSessionCore setCategory:withOptions:completion:]
// Type encoding: v40@0:8@16Q24@?32
// Implementation: 0x1052c7948

// -[SCAudioSessionCore secondaryAudioShouldBeSilencedHint]
// Type encoding: B16@0:8
// Implementation: 0x1052c7aac

// -[SCAudioSessionCore availableInputs]
// Type encoding: @16@0:8
// Implementation: 0x1052c7ab4

// -[SCAudioSessionCore currentRoute]
// Type encoding: @16@0:8
// Implementation: 0x1052c7af8

// -[SCAudioSessionCore setCurrentRoute:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052c7b40

// -[SCAudioSessionCore previousRoute]
// Type encoding: @16@0:8
// Implementation: 0x1052c7bac

// -[SCAudioSessionCore setPreviousRoute:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052c7bf4

// -[SCAudioSessionCore maximumInputNumberOfChannels]
// Type encoding: q16@0:8
// Implementation: 0x1052c7c60

// -[SCAudioSessionCore maximumOutputNumberOfChannels]
// Type encoding: q16@0:8
// Implementation: 0x1052c7c9c

// -[SCAudioSessionCore inputGain]
// Type encoding: f16@0:8
// Implementation: 0x1052c7cd8

// -[SCAudioSessionCore inputGainSettable]
// Type encoding: B16@0:8
// Implementation: 0x1052c7d1c

// -[SCAudioSessionCore inputAvailable]
// Type encoding: B16@0:8
// Implementation: 0x1052c7d58

// -[SCAudioSessionCore inputDataSources]
// Type encoding: @16@0:8
// Implementation: 0x1052c7d94

// -[SCAudioSessionCore inputDataSource]
// Type encoding: @16@0:8
// Implementation: 0x1052c7dd8

// -[SCAudioSessionCore outputDataSources]
// Type encoding: @16@0:8
// Implementation: 0x1052c7e1c

// -[SCAudioSessionCore outputDataSource]
// Type encoding: @16@0:8
// Implementation: 0x1052c7e60

// -[SCAudioSessionCore preferredInput]
// Type encoding: @16@0:8
// Implementation: 0x1052c7ea4

// -[SCAudioSessionCore sampleRate]
// Type encoding: d16@0:8
// Implementation: 0x1052c7ee8

// -[SCAudioSessionCore preferredSampleRate]
// Type encoding: d16@0:8
// Implementation: 0x1052c7f2c

// -[SCAudioSessionCore inputNumberOfChannels]
// Type encoding: q16@0:8
// Implementation: 0x1052c7f70

// -[SCAudioSessionCore outputNumberOfChannels]
// Type encoding: q16@0:8
// Implementation: 0x1052c7fac

// -[SCAudioSessionCore outputVolume]
// Type encoding: f16@0:8
// Implementation: 0x1000f4fb0

// -[SCAudioSessionCore setOutputVolume:]
// Type encoding: v20@0:8f16
// Implementation: 0x1052c7fe8

// -[SCAudioSessionCore inputLatency]
// Type encoding: d16@0:8
// Implementation: 0x1052c8034

// -[SCAudioSessionCore outputLatency]
// Type encoding: d16@0:8
// Implementation: 0x1052c8078

// -[SCAudioSessionCore IOBufferDuration]
// Type encoding: d16@0:8
// Implementation: 0x1052c80bc

// -[SCAudioSessionCore preferredIOBufferDuration]
// Type encoding: d16@0:8
// Implementation: 0x1052c8100

// -[SCAudioSessionCore setInputGain:error:]
// Type encoding: B28@0:8f16^@20
// Implementation: 0x1052c8144

// -[SCAudioSessionCore setPreferredSampleRate:error:]
// Type encoding: B32@0:8d16^@24
// Implementation: 0x1052c8198

// -[SCAudioSessionCore setPreferredIOBufferDuration:error:]
// Type encoding: B32@0:8d16^@24
// Implementation: 0x1052c81ec

// -[SCAudioSessionCore setPreferredInputNumberOfChannels:error:]
// Type encoding: B32@0:8q16^@24
// Implementation: 0x1052c8240

// -[SCAudioSessionCore setPreferredOutputNumberOfChannels:error:]
// Type encoding: B32@0:8q16^@24
// Implementation: 0x1052c8294

// -[SCAudioSessionCore overrideOutputAudioPort:error:]
// Type encoding: B32@0:8Q16^@24
// Implementation: 0x1052c82e8

// -[SCAudioSessionCore setPreferredInput:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x1052c833c

// -[SCAudioSessionCore setInputDataSource:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x1052c83a8

// -[SCAudioSessionCore setOutputDataSource:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x1052c8414

// -[SCAudioSessionCore recordPermission]
// Type encoding: Q16@0:8
// Implementation: 0x1008496d4

// -[SCAudioSessionCore requestRecordPermission:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1052c8480

// -[SCAudioSessionCore requestRecordPermissionWithLogging:permissionBlock:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x1052c848c

// -[SCAudioSessionCore isPlayingSound]
// Type encoding: B16@0:8
// Implementation: 0x1052c865c

// -[SCAudioSessionCore setIsOverridingMuteSwitch:]
// Type encoding: v20@0:8B16
// Implementation: 0x1052c8700

// -[SCAudioSessionCore checkIsPlayingSoundWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1052c8708

// -[SCAudioSessionCore checkStatusWithCallbackPerformer:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1052c87d8

// -[SCAudioSessionCore _didReceiveSecretFeatureOn:performer:callback:]
// Type encoding: v36@0:8B16@20@?28
// Implementation: 0x1052c8900

// -[SCAudioSessionCore currentAudioStateWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1052c8a44

// -[SCAudioSessionCore setVolumeHUDEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1052c8b18

// -[SCAudioSessionCore volumeHUDEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1052c8bec

// -[SCAudioSessionCore isOtherAudioPlaying]
// Type encoding: B16@0:8
// Implementation: 0x1052c8bfc

// -[SCAudioSessionCore userUsingHeadphones]
// Type encoding: B16@0:8
// Implementation: 0x1052c8c38

// -[SCAudioSessionCore userUsingBluetoothOutput]
// Type encoding: B16@0:8
// Implementation: 0x1052c8dac

// -[SCAudioSessionCore userUsingCarPlay]
// Type encoding: B16@0:8
// Implementation: 0x1052c8f68

// -[SCAudioSessionCore isAirPodsConnecting:]
// Type encoding: B20@0:8B16
// Implementation: 0x1052c90dc

// -[SCAudioSessionCore isAirPodsDisconnecting:]
// Type encoding: B20@0:8B16
// Implementation: 0x1052c9134

// -[SCAudioSessionCore _isAirPodsAudioSessionRoute:useNameHint:]
// Type encoding: B28@0:8@16B24
// Implementation: 0x1052c918c

// -[SCAudioSessionCore resetAudioInputPortLocationOrientationPolarPattern]
// Type encoding: v16@0:8
// Implementation: 0x1052c9334

// -[SCAudioSessionCore setAudioInputPortWithLocation:orientation:polarPattern:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1052c9400

// -[SCAudioSessionCore setAudioInputPortWithLocation:orientation:polarPattern:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1052c9408

// -[SCAudioSessionCore noSoundCheckAudioSessionIsNil]
// Type encoding: B16@0:8
// Implementation: 0x1052c97a8

// -[SCAudioSessionCore selectedDataSourceName]
// Type encoding: @16@0:8
// Implementation: 0x1052c97dc

// -[SCAudioSessionCore _builtInMicPort]
// Type encoding: @16@0:8
// Implementation: 0x1052c9874

// -[SCAudioSessionCore tryUseFrontMicWithErrorCode:]
// Type encoding: @24@0:8q16
// Implementation: 0x1052c99cc

// -[SCAudioSessionCore debugInfoWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1052c9d6c

// -[SCAudioSessionCore debugInfoWithUploadInfoCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1052c9e04

// -[SCAudioSessionCore _debugInfoWithInfo:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1052ca150

// -[SCAudioSessionCore debugInfoCurrentRoutes]
// Type encoding: @16@0:8
// Implementation: 0x1052ca320

// -[SCAudioSessionCore addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10087e34c

// -[SCAudioSessionCore removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052ca57c

// -[SCAudioSessionCore setProximityMonitoringEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1052ca584

// -[SCAudioSessionCore proximityDevice:onProximityStateChange:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1052ca658

// -[SCAudioSessionCore _isRecordPermissionRequestSkipEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1000bf410

// -[SCAudioSessionCore _setBounds]
// Type encoding: v16@0:8
// Implementation: 0x1052ca65c

// -[SCAudioSessionCore _updateNonMuteVolume]
// Type encoding: v16@0:8
// Implementation: 0x1000f4f6c

// -[SCAudioSessionCore _setupNotifications]
// Type encoding: v16@0:8
// Implementation: 0x1000f4fcc

// -[SCAudioSessionCore _cleanNotifications]
// Type encoding: v16@0:8
// Implementation: 0x1052ca774

// -[SCAudioSessionCore onAVAudioSessionVolumeChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052ca7a0

// -[SCAudioSessionCore onAVAudioSessionRouteChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052ca830

// -[SCAudioSessionCore onAVAudioSessionMediaServicesWereLost:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052caad0

// -[SCAudioSessionCore onAVAudioSessionMediaServicesWereReset:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052caaf0

// -[SCAudioSessionCore onAVAudioSessionSilenceSecondaryAudioHintNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052cab10

// -[SCAudioSessionCore _updateSilenceSecondaryAudioHint:]
// Type encoding: v20@0:8B16
// Implementation: 0x1052caba8

// -[SCAudioSessionCore onAVAudioSessionInterruption:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052cacd8

// -[SCAudioSessionCore onApplicationDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x1052cadd0

// -[SCAudioSessionCore forceEndAudioInterruptionIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1052cae90

// -[SCAudioSessionCore hiddenVolumeView]
// Type encoding: @16@0:8
// Implementation: 0x1052caeb4

// -[SCAudioSessionCore hiddenVolumeSlider]
// Type encoding: @16@0:8
// Implementation: 0x1052caec0

// -[SCAudioSessionCore _isCategorySilencedByMuteSwitch:]
// Type encoding: B24@0:8@16
// Implementation: 0x1052caecc

// -[SCAudioSessionCore _outputPortTypes]
// Type encoding: @16@0:8
// Implementation: 0x1052caf34

// -[SCAudioSessionCore _formatRoute:printAllDataSource:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x1052cb0b8

// -[SCAudioSessionCore _humanReadableCategoryOptions:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1052cb378

// -[SCAudioSessionCore setStereoRecordingWithLocation:orientation:videoOrientation:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x1052cb4ac

// -[SCAudioSessionCore performer]
// Type encoding: @16@0:8
// Implementation: 0x1052cb598

// -[SCAudioSessionCore proximityDevice]
// Type encoding: @16@0:8
// Implementation: 0x1052cb5a0

// -[SCAudioSessionCore announcer]
// Type encoding: @16@0:8
// Implementation: 0x1052cb5a8

// -[SCAudioSessionCore setAnnouncer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052cb5b0

// -[SCAudioSessionCore notificationCenter]
// Type encoding: @16@0:8
// Implementation: 0x1052cb5e0

// -[SCAudioSessionCore setNotificationCenter:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052cb5e8

// -[SCAudioSessionCore callingDelegate]
// Type encoding: @16@0:8
// Implementation: 0x1052cb618

// -[SCAudioSessionCore setCallingDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052cb630

// -[SCAudioSessionCore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1052cb63c

@end
