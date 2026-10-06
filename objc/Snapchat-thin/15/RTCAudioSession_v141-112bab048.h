// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: RTCAudioSession_v141
// Superclass: NSObject
// Address: 0x112bab048

@interface RTCAudioSession_v141

// Property: delegates; attributes: T{vector<__weak id<RTCAudioSessionDelegate_v141>, std::allocator<__weak id<RTCAudioSessionDelegate_v141>>>=^@^@{?=^@}},R,N,V_delegates
// Property: activationCount; attributes: Ti,R,N
// Property: webRTCSessionCount; attributes: Ti,R,N
// Property: canPlayOrRecord; attributes: TB,R
// Property: isInterrupted; attributes: TB,N
// Property: session; attributes: T@"AVAudioSession",R,N
// Property: isActive; attributes: TB,R,N
// Property: useManualAudio; attributes: TB,N
// Property: isAudioEnabled; attributes: TB,N
// Property: category; attributes: T@"NSString",R
// Property: categoryOptions; attributes: TQ,R
// Property: mode; attributes: T@"NSString",R
// Property: secondaryAudioShouldBeSilencedHint; attributes: TB,R
// Property: currentRoute; attributes: T@"AVAudioSessionRouteDescription",R
// Property: maximumInputNumberOfChannels; attributes: Tq,R
// Property: maximumOutputNumberOfChannels; attributes: Tq,R
// Property: inputGain; attributes: Tf,R
// Property: inputGainSettable; attributes: TB,R
// Property: inputAvailable; attributes: TB,R
// Property: inputDataSources; attributes: T@"NSArray",R
// Property: inputDataSource; attributes: T@"AVAudioSessionDataSourceDescription",R
// Property: outputDataSources; attributes: T@"NSArray",R
// Property: outputDataSource; attributes: T@"AVAudioSessionDataSourceDescription",R
// Property: sampleRate; attributes: Td,R
// Property: preferredSampleRate; attributes: Td,R
// Property: inputNumberOfChannels; attributes: Tq,R
// Property: outputNumberOfChannels; attributes: Tq,R
// Property: outputVolume; attributes: Tf,R
// Property: inputLatency; attributes: Td,R
// Property: outputLatency; attributes: Td,R
// Property: IOBufferDuration; attributes: Td,R
// Property: preferredIOBufferDuration; attributes: Td,R
// Property: ignoresPreferredAttributeConfigurationErrors; attributes: TB,N,V_ignoresPreferredAttributeConfigurationErrors
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[RTCAudioSession_v141 setConfiguration:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x108b63794

// -[RTCAudioSession_v141 setConfiguration:active:error:]
// Type encoding: B36@0:8@16B24^@28
// Implementation: 0x108b637a4

// -[RTCAudioSession_v141 setConfiguration:active:shouldSetActive:error:]
// Type encoding: B40@0:8@16B24B28^@32
// Implementation: 0x108b637b0

// -[RTCAudioSession_v141 init]
// Type encoding: @16@0:8
// Implementation: 0x10860ae8c

// -[RTCAudioSession_v141 dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10860af68

// -[RTCAudioSession_v141 setAudioSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x10860b04c

// -[RTCAudioSession_v141 audioSession]
// Type encoding: @16@0:8
// Implementation: 0x10860b0d0

// -[RTCAudioSession_v141 session]
// Type encoding: @16@0:8
// Implementation: 0x10860b10c

// -[RTCAudioSession_v141 setIsActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x10860b114

// -[RTCAudioSession_v141 isActive]
// Type encoding: B16@0:8
// Implementation: 0x10860b118

// -[RTCAudioSession_v141 isLocked]
// Type encoding: B16@0:8
// Implementation: 0x10860b11c

// -[RTCAudioSession_v141 setUseManualAudio:]
// Type encoding: v20@0:8B16
// Implementation: 0x10860b124

// -[RTCAudioSession_v141 useManualAudio]
// Type encoding: B16@0:8
// Implementation: 0x10860b128

// -[RTCAudioSession_v141 setIsAudioEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10860b130

// -[RTCAudioSession_v141 isAudioEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10860b228

// -[RTCAudioSession_v141 addDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10860b25c

// -[RTCAudioSession_v141 removeDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10860b3bc

// -[RTCAudioSession_v141 lockForConfiguration]
// Type encoding: v16@0:8
// Implementation: 0x10860b550

// -[RTCAudioSession_v141 unlockForConfiguration]
// Type encoding: v16@0:8
// Implementation: 0x10860b57c

// -[RTCAudioSession_v141 category]
// Type encoding: @16@0:8
// Implementation: 0x10860b5a8

// -[RTCAudioSession_v141 categoryOptions]
// Type encoding: Q16@0:8
// Implementation: 0x10860b600

// -[RTCAudioSession_v141 mode]
// Type encoding: @16@0:8
// Implementation: 0x10860b650

// -[RTCAudioSession_v141 secondaryAudioShouldBeSilencedHint]
// Type encoding: B16@0:8
// Implementation: 0x10860b6a8

// -[RTCAudioSession_v141 currentRoute]
// Type encoding: @16@0:8
// Implementation: 0x10860b6f8

// -[RTCAudioSession_v141 maximumInputNumberOfChannels]
// Type encoding: q16@0:8
// Implementation: 0x10860b750

// -[RTCAudioSession_v141 maximumOutputNumberOfChannels]
// Type encoding: q16@0:8
// Implementation: 0x10860b7a0

// -[RTCAudioSession_v141 inputGain]
// Type encoding: f16@0:8
// Implementation: 0x10860b7f0

// -[RTCAudioSession_v141 inputGainSettable]
// Type encoding: B16@0:8
// Implementation: 0x10860b848

// -[RTCAudioSession_v141 inputAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10860b898

// -[RTCAudioSession_v141 inputDataSources]
// Type encoding: @16@0:8
// Implementation: 0x10860b8e8

// -[RTCAudioSession_v141 inputDataSource]
// Type encoding: @16@0:8
// Implementation: 0x10860b940

// -[RTCAudioSession_v141 outputDataSources]
// Type encoding: @16@0:8
// Implementation: 0x10860b998

// -[RTCAudioSession_v141 outputDataSource]
// Type encoding: @16@0:8
// Implementation: 0x10860b9f0

// -[RTCAudioSession_v141 sampleRate]
// Type encoding: d16@0:8
// Implementation: 0x10860ba48

// -[RTCAudioSession_v141 preferredSampleRate]
// Type encoding: d16@0:8
// Implementation: 0x10860baa0

// -[RTCAudioSession_v141 inputNumberOfChannels]
// Type encoding: q16@0:8
// Implementation: 0x10860baf8

// -[RTCAudioSession_v141 outputNumberOfChannels]
// Type encoding: q16@0:8
// Implementation: 0x10860bb48

// -[RTCAudioSession_v141 outputVolume]
// Type encoding: f16@0:8
// Implementation: 0x10860bb98

// -[RTCAudioSession_v141 inputLatency]
// Type encoding: d16@0:8
// Implementation: 0x10860bbf0

// -[RTCAudioSession_v141 outputLatency]
// Type encoding: d16@0:8
// Implementation: 0x10860bc48

// -[RTCAudioSession_v141 IOBufferDuration]
// Type encoding: d16@0:8
// Implementation: 0x10860bca0

// -[RTCAudioSession_v141 preferredIOBufferDuration]
// Type encoding: d16@0:8
// Implementation: 0x10860bcf8

// -[RTCAudioSession_v141 setActive:error:]
// Type encoding: B28@0:8B16^@20
// Implementation: 0x10860bd50

// -[RTCAudioSession_v141 setCategory:mode:options:error:]
// Type encoding: B48@0:8@16@24Q32^@40
// Implementation: 0x10860bd58

// -[RTCAudioSession_v141 setCategory:withOptions:error:]
// Type encoding: B40@0:8@16Q24^@32
// Implementation: 0x10860bd60

// -[RTCAudioSession_v141 setMode:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x10860bd68

// -[RTCAudioSession_v141 setInputGain:error:]
// Type encoding: B28@0:8f16^@20
// Implementation: 0x10860bd70

// -[RTCAudioSession_v141 setPreferredSampleRate:error:]
// Type encoding: B32@0:8d16^@24
// Implementation: 0x10860bdf0

// -[RTCAudioSession_v141 setPreferredIOBufferDuration:error:]
// Type encoding: B32@0:8d16^@24
// Implementation: 0x10860be70

// -[RTCAudioSession_v141 setPreferredInputNumberOfChannels:error:]
// Type encoding: B32@0:8q16^@24
// Implementation: 0x10860bef0

// -[RTCAudioSession_v141 setPreferredOutputNumberOfChannels:error:]
// Type encoding: B32@0:8q16^@24
// Implementation: 0x10860bf74

// -[RTCAudioSession_v141 overrideOutputAudioPort:error:]
// Type encoding: B32@0:8Q16^@24
// Implementation: 0x10860bff8

// -[RTCAudioSession_v141 setPreferredInput:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x10860c07c

// -[RTCAudioSession_v141 setInputDataSource:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x10860c124

// -[RTCAudioSession_v141 setOutputDataSource:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x10860c1cc

// -[RTCAudioSession_v141 audioSession:didChangeVolume:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x10860c274

// -[RTCAudioSession_v141 audioSessionDidBeginInterruption:]
// Type encoding: v24@0:8@16
// Implementation: 0x10860c27c

// -[RTCAudioSession_v141 audioSession:didEndInterruption:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10860c2a4

// -[RTCAudioSession_v141 audioSessionMediaServicesWereLost:]
// Type encoding: v24@0:8@16
// Implementation: 0x10860c2d4

// -[RTCAudioSession_v141 audioSessionMediaServicesWereReset:]
// Type encoding: v24@0:8@16
// Implementation: 0x10860c2d8

// -[RTCAudioSession_v141 handleRouteChangeNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x10860c2dc

// -[RTCAudioSession_v141 handleCallKitActivate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10860c404

// -[RTCAudioSession_v141 handleCallKitDeactivate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10860c434

// -[RTCAudioSession_v141 delegates]
// Type encoding: {vector<__weak id<RTCAudioSessionDelegate_v141>, std::allocator<__weak id<RTCAudioSessionDelegate_v141>>>=^@^@{?=^@}}16@0:8
// Implementation: 0x10860c53c

// -[RTCAudioSession_v141 pushDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10860c5f0

// -[RTCAudioSession_v141 removeZeroedDelegates]
// Type encoding: v16@0:8
// Implementation: 0x10860c8e0

// -[RTCAudioSession_v141 activationCount]
// Type encoding: i16@0:8
// Implementation: 0x10860c9a4

// -[RTCAudioSession_v141 webRTCSessionCount]
// Type encoding: i16@0:8
// Implementation: 0x10860c9b8

// -[RTCAudioSession_v141 canPlayOrRecord]
// Type encoding: B16@0:8
// Implementation: 0x10860c9c0

// -[RTCAudioSession_v141 isInterrupted]
// Type encoding: B16@0:8
// Implementation: 0x10860c9c4

// -[RTCAudioSession_v141 setIsInterrupted:]
// Type encoding: v20@0:8B16
// Implementation: 0x10860ca08

// -[RTCAudioSession_v141 checkLock:]
// Type encoding: B24@0:8^@16
// Implementation: 0x10860ca38

// -[RTCAudioSession_v141 beginWebRTCSession:]
// Type encoding: B24@0:8^@16
// Implementation: 0x10860ca84

// -[RTCAudioSession_v141 endWebRTCSession:]
// Type encoding: B24@0:8^@16
// Implementation: 0x10860cad0

// -[RTCAudioSession_v141 configureWebRTCSession:]
// Type encoding: B24@0:8^@16
// Implementation: 0x10860cb1c

// -[RTCAudioSession_v141 unconfigureWebRTCSession:]
// Type encoding: B24@0:8^@16
// Implementation: 0x10860cc70

// -[RTCAudioSession_v141 configurationErrorWithDescription:]
// Type encoding: @24@0:8@16
// Implementation: 0x10860cc78

// -[RTCAudioSession_v141 audioSessionDidActivate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10860cd78

// -[RTCAudioSession_v141 audioSessionDidDeactivate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10860cd7c

// -[RTCAudioSession_v141 notifyDidBeginInterruption]
// Type encoding: v16@0:8
// Implementation: 0x10860cd80

// -[RTCAudioSession_v141 notifyDidEndInterruptionWithShouldResumeSession:]
// Type encoding: v20@0:8B16
// Implementation: 0x10860ce2c

// -[RTCAudioSession_v141 notifyDidChangeRouteWithReason:previousRoute:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x10860cee0

// -[RTCAudioSession_v141 notifyMediaServicesWereLost]
// Type encoding: v16@0:8
// Implementation: 0x10860cfc8

// -[RTCAudioSession_v141 notifyMediaServicesWereReset]
// Type encoding: v16@0:8
// Implementation: 0x10860d074

// -[RTCAudioSession_v141 notifyDidChangeCanPlayOrRecord:]
// Type encoding: v20@0:8B16
// Implementation: 0x10860d120

// -[RTCAudioSession_v141 notifyDidStartPlayOrRecord]
// Type encoding: v16@0:8
// Implementation: 0x10860d1d4

// -[RTCAudioSession_v141 notifyDidStopPlayOrRecord]
// Type encoding: v16@0:8
// Implementation: 0x10860d280

// -[RTCAudioSession_v141 notifyDidChangeOutputVolume:]
// Type encoding: v20@0:8f16
// Implementation: 0x10860d32c

// -[RTCAudioSession_v141 notifyDidDetectPlayoutGlitch:]
// Type encoding: v24@0:8q16
// Implementation: 0x10860d3e8

// -[RTCAudioSession_v141 notifyAudioUnitStartFailedWithError:]
// Type encoding: v20@0:8i16
// Implementation: 0x10860d49c

// -[RTCAudioSession_v141 ignoresPreferredAttributeConfigurationErrors]
// Type encoding: B16@0:8
// Implementation: 0x10860d5a8

// -[RTCAudioSession_v141 setIgnoresPreferredAttributeConfigurationErrors:]
// Type encoding: v20@0:8B16
// Implementation: 0x10860d5b0

// -[RTCAudioSession_v141 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10860d5b8

// -[RTCAudioSession_v141 .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10860d5e4

// +[RTCAudioSession_v141 sharedInstance]
// Type encoding: @16@0:8
// Implementation: 0x10860addc

// +[RTCAudioSession_v141 lockError]
// Type encoding: @16@0:8
// Implementation: 0x10860c460

@end
