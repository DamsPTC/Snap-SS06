// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAVFoundationNeoPlayerOutput
// Superclass: NSObject
// Address: 0x112be54c8

@interface SCAVFoundationNeoPlayerOutput

// Property: approximateBaselinePerfMetrics; attributes: T@"SCNPlayerAnalyticsVideoRendererPerformanceMetrics",&,V_approximateBaselinePerfMetrics
// Property: audioSessionWasReset; attributes: TB,V_audioSessionWasReset
// Property: videoView; attributes: T@"SCNeoPlayerVideoView",R,N
// Property: timebase; attributes: T^{OpaqueCMTimebase=},R,N
// Property: rate; attributes: Tf,N
// Property: volume; attributes: Tf,N
// Property: muted; attributes: TB,N
// Property: videoEnabled; attributes: TB,N
// Property: audioEnabled; attributes: TB,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAVFoundationNeoPlayerOutput initWithRendererCreationThreadMode:enableBackgroundRecoveryRevamp:enableFrozenFrameRecovery:enableSafeVideoRendererTeardown:mediaQueue:delegate:]
// Type encoding: @52@0:8q16B24B28B32@36@44
// Implementation: 0x109090710

// -[SCAVFoundationNeoPlayerOutput initWithRendererCreationThreadMode:enableBackgroundRecoveryRevamp:enableFrozenFrameRecovery:enableSafeVideoRendererTeardown:mediaQueue:externalVideoRenderer:delegate:]
// Type encoding: @60@0:8q16B24B28B32@36@44@52
// Implementation: 0x109090734

// -[SCAVFoundationNeoPlayerOutput _handleVideoRendererFailedToDecode:]
// Type encoding: v24@0:8@16
// Implementation: 0x109090bb8

// -[SCAVFoundationNeoPlayerOutput handleAppDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x109090d5c

// -[SCAVFoundationNeoPlayerOutput destroyVideoRenderer]
// Type encoding: v16@0:8
// Implementation: 0x109090db4

// -[SCAVFoundationNeoPlayerOutput _getOrCreateAudioRenderer]
// Type encoding: @16@0:8
// Implementation: 0x109090f00

// -[SCAVFoundationNeoPlayerOutput _logTag]
// Type encoding: @16@0:8
// Implementation: 0x109091018

// -[SCAVFoundationNeoPlayerOutput didReceiveAudioSessionActivatedSignal]
// Type encoding: v16@0:8
// Implementation: 0x109091074

// -[SCAVFoundationNeoPlayerOutput _onVideoRendererReady]
// Type encoding: v16@0:8
// Implementation: 0x10909107c

// -[SCAVFoundationNeoPlayerOutput _applyInitialLayerGeometryAndHiddenState:]
// Type encoding: v24@0:8@16
// Implementation: 0x109091168

// -[SCAVFoundationNeoPlayerOutput _createVideoRenderer]
// Type encoding: v16@0:8
// Implementation: 0x10909126c

// -[SCAVFoundationNeoPlayerOutput _setVideoLayerAndReadyRenderer:]
// Type encoding: v24@0:8@16
// Implementation: 0x109091434

// -[SCAVFoundationNeoPlayerOutput _getOrCreateVideoRenderer]
// Type encoding: @16@0:8
// Implementation: 0x10909153c

// -[SCAVFoundationNeoPlayerOutput shouldResetRenderers]
// Type encoding: B16@0:8
// Implementation: 0x1090916d8

// -[SCAVFoundationNeoPlayerOutput shouldResetRenderersForAudio]
// Type encoding: B16@0:8
// Implementation: 0x109091720

// -[SCAVFoundationNeoPlayerOutput teardown]
// Type encoding: v16@0:8
// Implementation: 0x109091724

// -[SCAVFoundationNeoPlayerOutput _teardownPrologue]
// Type encoding: v16@0:8
// Implementation: 0x109091840

// -[SCAVFoundationNeoPlayerOutput _teardownEpilogue]
// Type encoding: v16@0:8
// Implementation: 0x1090918b4

// -[SCAVFoundationNeoPlayerOutput _discardVideoRenderer]
// Type encoding: v16@0:8
// Implementation: 0x10909197c

// -[SCAVFoundationNeoPlayerOutput videoView]
// Type encoding: @16@0:8
// Implementation: 0x1090919f0

// -[SCAVFoundationNeoPlayerOutput videoGravity]
// Type encoding: Q16@0:8
// Implementation: 0x109091a14

// -[SCAVFoundationNeoPlayerOutput setVideoGravity:]
// Type encoding: v24@0:8Q16
// Implementation: 0x109091a1c

// -[SCAVFoundationNeoPlayerOutput timebase]
// Type encoding: ^{OpaqueCMTimebase=}16@0:8
// Implementation: 0x109091a24

// -[SCAVFoundationNeoPlayerOutput rate]
// Type encoding: f16@0:8
// Implementation: 0x109091a2c

// -[SCAVFoundationNeoPlayerOutput setRate:]
// Type encoding: v20@0:8f16
// Implementation: 0x109091a34

// -[SCAVFoundationNeoPlayerOutput videoEnabled]
// Type encoding: B16@0:8
// Implementation: 0x109091b8c

// -[SCAVFoundationNeoPlayerOutput setVideoEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x109091b94

// -[SCAVFoundationNeoPlayerOutput audioEnabled]
// Type encoding: B16@0:8
// Implementation: 0x109091c40

// -[SCAVFoundationNeoPlayerOutput setAudioEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x109091c48

// -[SCAVFoundationNeoPlayerOutput getOutputStatus]
// Type encoding: {SCNeoPlayerOutputStatus=BB}16@0:8
// Implementation: 0x109091cc4

// -[SCAVFoundationNeoPlayerOutput canEnqueueAudioSampleBuffer]
// Type encoding: B16@0:8
// Implementation: 0x109091cfc

// -[SCAVFoundationNeoPlayerOutput canEnqueueVideoSampleBuffer]
// Type encoding: B16@0:8
// Implementation: 0x109091d04

// -[SCAVFoundationNeoPlayerOutput cancelReadyToEnqueueAudioSampleBuffer]
// Type encoding: v16@0:8
// Implementation: 0x109091d38

// -[SCAVFoundationNeoPlayerOutput cancelReadyToEnqueueVideoSampleBuffer]
// Type encoding: v16@0:8
// Implementation: 0x109091db8

// -[SCAVFoundationNeoPlayerOutput enqueueAudioSampleBuffer:]
// Type encoding: v24@0:8^{opaqueCMSampleBuffer=}16
// Implementation: 0x109091e50

// -[SCAVFoundationNeoPlayerOutput _scheduleVideoRevealIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x109092004

// -[SCAVFoundationNeoPlayerOutput enqueueVideoSampleBuffer:]
// Type encoding: v24@0:8^{opaqueCMSampleBuffer=}16
// Implementation: 0x1090921d0

// -[SCAVFoundationNeoPlayerOutput onReadyToEnqueueAudioSampleBuffer:queue:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x10909248c

// -[SCAVFoundationNeoPlayerOutput onReadyToEnqueueVideoSampleBuffer:queue:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x1090925ac

// -[SCAVFoundationNeoPlayerOutput seekToTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x109092700

// -[SCAVFoundationNeoPlayerOutput reset]
// Type encoding: v16@0:8
// Implementation: 0x10909285c

// -[SCAVFoundationNeoPlayerOutput muted]
// Type encoding: B16@0:8
// Implementation: 0x109092940

// -[SCAVFoundationNeoPlayerOutput setMuted:]
// Type encoding: v20@0:8B16
// Implementation: 0x109092948

// -[SCAVFoundationNeoPlayerOutput volume]
// Type encoding: f16@0:8
// Implementation: 0x10909295c

// -[SCAVFoundationNeoPlayerOutput setVolume:]
// Type encoding: v20@0:8f16
// Implementation: 0x109092964

// -[SCAVFoundationNeoPlayerOutput supportsCodec:]
// Type encoding: B20@0:8I16
// Implementation: 0x109092978

// -[SCAVFoundationNeoPlayerOutput hasSufficientVideoDataForReliablePlayback]
// Type encoding: B16@0:8
// Implementation: 0x109092a78

// -[SCAVFoundationNeoPlayerOutput isSynchronizerAdvancing]
// Type encoding: B16@0:8
// Implementation: 0x109092a80

// -[SCAVFoundationNeoPlayerOutput setInstruments:]
// Type encoding: v24@0:8@16
// Implementation: 0x109092aa0

// -[SCAVFoundationNeoPlayerOutput setVideoTransform:videoSize:]
// Type encoding: v80@0:8{CGAffineTransform=dddddd}16{CGSize=dd}64
// Implementation: 0x109092c48

// -[SCAVFoundationNeoPlayerOutput loadVideoRendererPerformanceMetrics:]
// Type encoding: v24@0:8@16
// Implementation: 0x109092cf0

// -[SCAVFoundationNeoPlayerOutput clear]
// Type encoding: v16@0:8
// Implementation: 0x109092f6c

// -[SCAVFoundationNeoPlayerOutput audioSessionWasReset]
// Type encoding: B16@0:8
// Implementation: 0x109093098

// -[SCAVFoundationNeoPlayerOutput setAudioSessionWasReset:]
// Type encoding: v20@0:8B16
// Implementation: 0x1090930a4

// -[SCAVFoundationNeoPlayerOutput approximateBaselinePerfMetrics]
// Type encoding: @16@0:8
// Implementation: 0x1090930ac

// -[SCAVFoundationNeoPlayerOutput setApproximateBaselinePerfMetrics:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090930b8

// -[SCAVFoundationNeoPlayerOutput .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090930c0

@end
