// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSAVideoPlayer
// Superclass: NSObject
// Address: 0x112bf8758

@interface LSAVideoPlayer

// Property: looper; attributes: T@"AVPlayerLooper",&,N,V_looper
// Property: player; attributes: T@"AVPlayer",&,N,V_player
// Property: assetReader; attributes: T@"AVAssetReader",&,N,V_assetReader
// Property: asset; attributes: T@"AVAsset",&,N,V_asset
// Property: duration; attributes: T{?=qiIq},N,V_duration
// Property: persistentRate; attributes: Tf,N,V_persistentRate
// Property: statusReady; attributes: TB,N,V_statusReady
// Property: filepath; attributes: T@"NSString",&,N,V_filepath
// Property: preferredTransform; attributes: T{CGAffineTransform=dddddd},N,V_preferredTransform
// Property: nativeFrameRate; attributes: Tq,N,V_nativeFrameRate
// Property: numberOfFrames; attributes: Tq,N,V_numberOfFrames
// Property: shouldLoop; attributes: TB,N,V_shouldLoop
// Property: loopCount; attributes: Tq,N,V_loopCount
// Property: initialTimeSec; attributes: Tf,N,V_initialTimeSec
// Property: isMuted; attributes: TB,N,V_isMuted
// Property: isSuspended; attributes: TB,N,V_isSuspended
// Property: isPaused; attributes: TB,N,V_isPaused
// Property: lastVolume; attributes: Td,N,V_lastVolume
// Property: minDisplayTimeSec; attributes: Tf,N,V_minDisplayTimeSec
// Property: isObservingLooperStatus; attributes: TB,N,V_isObservingLooperStatus
// Property: audioStreamFormat; attributes: T{AudioStreamBasicDescription=dIIIIIIII},N,V_audioStreamFormat
// Property: audioProcessCallback; attributes: T{Function<zoo::AnyContainer<zoo::GenericPolicy<void *[6], snap::type_erasure::ICF_SafeDestroy, zoo::Move, zoo::Copy>::Policy>, void (std::vector<float> &&)>=^?[56c]},N,V_audioProcessCallback
// Property: audioMixProcessing; attributes: T@"LSAAudioMixProcessing",&,N,V_audioMixProcessing
// Property: playbackRate; attributes: Tf,N
// Property: isReady; attributes: TB,R,N
// Property: playCount; attributes: Ti,R,N
// Property: currentTime; attributes: Tf,R,N
// Property: volume; attributes: Td,N
// Property: sampleRate; attributes: Ti,R,N
// Property: numChannels; attributes: Ti,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[LSAVideoPlayer initWithFilepath:]
// Type encoding: @24@0:8@16
// Implementation: 0x10ad7cda4

// -[LSAVideoPlayer setupInitialAudioState]
// Type encoding: v16@0:8
// Implementation: 0x10ad7cfb8

// -[LSAVideoPlayer createRegularPlayer]
// Type encoding: v16@0:8
// Implementation: 0x10ad7d03c

// -[LSAVideoPlayer createLooperAndQueuePlayer]
// Type encoding: v16@0:8
// Implementation: 0x10ad7d444

// -[LSAVideoPlayer supportsLooper]
// Type encoding: B16@0:8
// Implementation: 0x10ad7d75c

// -[LSAVideoPlayer prepareWithRate:loop:initialTimeSec:]
// Type encoding: v28@0:8f16B20f24
// Implementation: 0x10ad7d764

// -[LSAVideoPlayer relativeTimeToSec:]
// Type encoding: f20@0:8f16
// Implementation: 0x10ad7dbe4

// -[LSAVideoPlayer seekSec:]
// Type encoding: v20@0:8f16
// Implementation: 0x10ad7dc08

// -[LSAVideoPlayer getDurationSec]
// Type encoding: f16@0:8
// Implementation: 0x10ad7dd54

// -[LSAVideoPlayer resume]
// Type encoding: v16@0:8
// Implementation: 0x10ad7de08

// -[LSAVideoPlayer pause]
// Type encoding: v16@0:8
// Implementation: 0x10ad7de10

// -[LSAVideoPlayer updateRate]
// Type encoding: v16@0:8
// Implementation: 0x10ad7de1c

// -[LSAVideoPlayer preferredTransform]
// Type encoding: {CGAffineTransform=dddddd}16@0:8
// Implementation: 0x10ad7de98

// -[LSAVideoPlayer setPlaybackRate:]
// Type encoding: v20@0:8f16
// Implementation: 0x10ad7deac

// -[LSAVideoPlayer playbackRate]
// Type encoding: f16@0:8
// Implementation: 0x10ad7deb4

// -[LSAVideoPlayer setVolume:]
// Type encoding: v24@0:8d16
// Implementation: 0x10ad7debc

// -[LSAVideoPlayer volume]
// Type encoding: d16@0:8
// Implementation: 0x10ad7df34

// -[LSAVideoPlayer isPaused]
// Type encoding: B16@0:8
// Implementation: 0x10ad7df7c

// -[LSAVideoPlayer sampleRate]
// Type encoding: i16@0:8
// Implementation: 0x10ad7df84

// -[LSAVideoPlayer numChannels]
// Type encoding: i16@0:8
// Implementation: 0x10ad7df94

// -[LSAVideoPlayer setAudioProcessCallback:]
// Type encoding: v80@0:8{Function<zoo::AnyContainer<zoo::GenericPolicy<void *[6], snap::type_erasure::ICF_SafeDestroy, zoo::Move, zoo::Copy>::Policy>, void (std::vector<float> &&)>=^?[56c]}16
// Implementation: 0x10ad7dfa4

// -[LSAVideoPlayer copyNextFrame]
// Type encoding: {CFRefHolder<__CVBuffer *>=^{__CVBuffer}}16@0:8
// Implementation: 0x10ad7dfec

// -[LSAVideoPlayer isReady]
// Type encoding: B16@0:8
// Implementation: 0x10ad7e2c4

// -[LSAVideoPlayer playCount]
// Type encoding: i16@0:8
// Implementation: 0x10ad7e2f4

// -[LSAVideoPlayer currentTime]
// Type encoding: f16@0:8
// Implementation: 0x10ad7e31c

// -[LSAVideoPlayer _startTime]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x10ad7e35c

// -[LSAVideoPlayer _endTime]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x10ad7e428

// -[LSAVideoPlayer playedToEnd:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad7e4f4

// -[LSAVideoPlayer createOutput]
// Type encoding: @16@0:8
// Implementation: 0x10ad7e63c

// -[LSAVideoPlayer observeValueForKeyPath:ofObject:change:context:]
// Type encoding: v48@0:8@16@24@32^v40
// Implementation: 0x10ad7e748

// -[LSAVideoPlayer destroyLooperAndQueuePlayer]
// Type encoding: v16@0:8
// Implementation: 0x10ad7eb9c

// -[LSAVideoPlayer destroyRegularPlayer]
// Type encoding: v16@0:8
// Implementation: 0x10ad7ec50

// -[LSAVideoPlayer suspendAudio]
// Type encoding: v16@0:8
// Implementation: 0x10ad7ed30

// -[LSAVideoPlayer resumeAudio]
// Type encoding: v16@0:8
// Implementation: 0x10ad7ef20

// -[LSAVideoPlayer muteAudio]
// Type encoding: v16@0:8
// Implementation: 0x10ad7ef88

// -[LSAVideoPlayer unmuteAudio]
// Type encoding: v16@0:8
// Implementation: 0x10ad7eff0

// -[LSAVideoPlayer dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10ad7f058

// -[LSAVideoPlayer numberOfFrames]
// Type encoding: q16@0:8
// Implementation: 0x10ad7f130

// -[LSAVideoPlayer setNumberOfFrames:]
// Type encoding: v24@0:8q16
// Implementation: 0x10ad7f138

// -[LSAVideoPlayer nativeFrameRate]
// Type encoding: q16@0:8
// Implementation: 0x10ad7f140

// -[LSAVideoPlayer setNativeFrameRate:]
// Type encoding: v24@0:8q16
// Implementation: 0x10ad7f148

// -[LSAVideoPlayer setIsPaused:]
// Type encoding: v20@0:8B16
// Implementation: 0x10ad7f150

// -[LSAVideoPlayer looper]
// Type encoding: @16@0:8
// Implementation: 0x10ad7f158

// -[LSAVideoPlayer setLooper:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad7f160

// -[LSAVideoPlayer player]
// Type encoding: @16@0:8
// Implementation: 0x10ad7f190

// -[LSAVideoPlayer setPlayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad7f198

// -[LSAVideoPlayer assetReader]
// Type encoding: @16@0:8
// Implementation: 0x10ad7f1c8

// -[LSAVideoPlayer setAssetReader:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad7f1d0

// -[LSAVideoPlayer asset]
// Type encoding: @16@0:8
// Implementation: 0x10ad7f200

// -[LSAVideoPlayer setAsset:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad7f208

// -[LSAVideoPlayer duration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x10ad7f238

// -[LSAVideoPlayer setDuration:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x10ad7f24c

// -[LSAVideoPlayer persistentRate]
// Type encoding: f16@0:8
// Implementation: 0x10ad7f260

// -[LSAVideoPlayer setPersistentRate:]
// Type encoding: v20@0:8f16
// Implementation: 0x10ad7f268

// -[LSAVideoPlayer statusReady]
// Type encoding: B16@0:8
// Implementation: 0x10ad7f270

// -[LSAVideoPlayer setStatusReady:]
// Type encoding: v20@0:8B16
// Implementation: 0x10ad7f278

// -[LSAVideoPlayer filepath]
// Type encoding: @16@0:8
// Implementation: 0x10ad7f280

// -[LSAVideoPlayer setFilepath:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad7f288

// -[LSAVideoPlayer setPreferredTransform:]
// Type encoding: v64@0:8{CGAffineTransform=dddddd}16
// Implementation: 0x10ad7f2b8

// -[LSAVideoPlayer shouldLoop]
// Type encoding: B16@0:8
// Implementation: 0x10ad7f2cc

// -[LSAVideoPlayer setShouldLoop:]
// Type encoding: v20@0:8B16
// Implementation: 0x10ad7f2d4

// -[LSAVideoPlayer loopCount]
// Type encoding: q16@0:8
// Implementation: 0x10ad7f2dc

// -[LSAVideoPlayer setLoopCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x10ad7f2e4

// -[LSAVideoPlayer initialTimeSec]
// Type encoding: f16@0:8
// Implementation: 0x10ad7f2ec

// -[LSAVideoPlayer setInitialTimeSec:]
// Type encoding: v20@0:8f16
// Implementation: 0x10ad7f2f4

// -[LSAVideoPlayer isMuted]
// Type encoding: B16@0:8
// Implementation: 0x10ad7f2fc

// -[LSAVideoPlayer setIsMuted:]
// Type encoding: v20@0:8B16
// Implementation: 0x10ad7f304

// -[LSAVideoPlayer isSuspended]
// Type encoding: B16@0:8
// Implementation: 0x10ad7f30c

// -[LSAVideoPlayer setIsSuspended:]
// Type encoding: v20@0:8B16
// Implementation: 0x10ad7f314

// -[LSAVideoPlayer lastVolume]
// Type encoding: d16@0:8
// Implementation: 0x10ad7f31c

// -[LSAVideoPlayer setLastVolume:]
// Type encoding: v24@0:8d16
// Implementation: 0x10ad7f324

// -[LSAVideoPlayer minDisplayTimeSec]
// Type encoding: f16@0:8
// Implementation: 0x10ad7f32c

// -[LSAVideoPlayer setMinDisplayTimeSec:]
// Type encoding: v20@0:8f16
// Implementation: 0x10ad7f334

// -[LSAVideoPlayer isObservingLooperStatus]
// Type encoding: B16@0:8
// Implementation: 0x10ad7f33c

// -[LSAVideoPlayer setIsObservingLooperStatus:]
// Type encoding: v20@0:8B16
// Implementation: 0x10ad7f344

// -[LSAVideoPlayer audioStreamFormat]
// Type encoding: {AudioStreamBasicDescription=dIIIIIIII}16@0:8
// Implementation: 0x10ad7f34c

// -[LSAVideoPlayer setAudioStreamFormat:]
// Type encoding: v56@0:8{AudioStreamBasicDescription=dIIIIIIII}16
// Implementation: 0x10ad7f364

// -[LSAVideoPlayer audioProcessCallback]
// Type encoding: {Function<zoo::AnyContainer<zoo::GenericPolicy<void *[6], snap::type_erasure::ICF_SafeDestroy, zoo::Move, zoo::Copy>::Policy>, void (std::vector<float> &&)>=^?[56c]}16@0:8
// Implementation: 0x10ad7f37c

// -[LSAVideoPlayer audioMixProcessing]
// Type encoding: @16@0:8
// Implementation: 0x10ad7f3d0

// -[LSAVideoPlayer setAudioMixProcessing:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad7f3d8

// -[LSAVideoPlayer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10ad7f408

// -[LSAVideoPlayer .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10ad7f478

@end
