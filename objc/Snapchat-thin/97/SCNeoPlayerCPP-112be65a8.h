// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoPlayerCPP
// Superclass: NSObject
// Address: 0x112be65a8

@interface SCNeoPlayerCPP

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: view; attributes: T@"UIView",R,N
// Property: delegate; attributes: T@"<SCNeoPlayerDelegate>",W,N
// Property: playerItemFactory; attributes: T@"SCNeoPlayerItemFactory",R,N,V_playerItemFactory
// Property: error; attributes: T@"NSError",R,N
// Property: rate; attributes: Tf,N
// Property: volume; attributes: Tf,N
// Property: muted; attributes: TB,N
// Property: loopEnabled; attributes: TB,N
// Property: videoGravity; attributes: TQ,N
// Property: currentItem; attributes: T@"<SCNeoPlayerItem>",&,N
// Property: videoSampleBufferProcessor; attributes: T@"<SCNeoMediaSampleBufferProcessor>",&,N
// Property: audioSampleBufferProcessor; attributes: T@"<SCNeoMediaSampleBufferProcessor>",&,N
// Property: currentTime; attributes: T{?=qiIq},R,N
// Property: state; attributes: TQ,R,N
// Property: videoRendererPerformanceMetricsProvider; attributes: T@"<SCNPlayerAnalyticsVideoRendererPerformanceMetricsProvider>",R,N
// Property: subtitleDelegate; attributes: T@"<SCNeoPlayerSubtitleDelegate>",W,N
// Property: subtitlesEnabled; attributes: TB,N,GareSubtitlesEnabled

// -[SCNeoPlayerCPP initWithConfiguration:]
// Type encoding: @24@0:8@16
// Implementation: 0x1090a97f0

// -[SCNeoPlayerCPP dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1090aa088

// -[SCNeoPlayerCPP pause]
// Type encoding: v16@0:8
// Implementation: 0x1090aa144

// -[SCNeoPlayerCPP play]
// Type encoding: v16@0:8
// Implementation: 0x1090aa14c

// -[SCNeoPlayerCPP _resetRenderersIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x1090aa170

// -[SCNeoPlayerCPP seekToTime:toleranceBefore:toleranceAfter:]
// Type encoding: v88@0:8{?=qiIq}16{?=qiIq}40{?=qiIq}64
// Implementation: 0x1090aa1f4

// -[SCNeoPlayerCPP rate]
// Type encoding: f16@0:8
// Implementation: 0x1090aa224

// -[SCNeoPlayerCPP setRate:]
// Type encoding: v20@0:8f16
// Implementation: 0x1090aa22c

// -[SCNeoPlayerCPP currentTime]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x1090aa234

// -[SCNeoPlayerCPP error]
// Type encoding: @16@0:8
// Implementation: 0x1090aa270

// -[SCNeoPlayerCPP muted]
// Type encoding: B16@0:8
// Implementation: 0x1090aa2dc

// -[SCNeoPlayerCPP setMuted:]
// Type encoding: v20@0:8B16
// Implementation: 0x1090aa33c

// -[SCNeoPlayerCPP volume]
// Type encoding: f16@0:8
// Implementation: 0x1090aa398

// -[SCNeoPlayerCPP setVolume:]
// Type encoding: v20@0:8f16
// Implementation: 0x1090aa404

// -[SCNeoPlayerCPP videoGravity]
// Type encoding: Q16@0:8
// Implementation: 0x1090aa470

// -[SCNeoPlayerCPP setVideoGravity:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1090aa478

// -[SCNeoPlayerCPP setCurrentItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090aa480

// -[SCNeoPlayerCPP currentItem]
// Type encoding: @16@0:8
// Implementation: 0x1090aa8d8

// -[SCNeoPlayerCPP view]
// Type encoding: @16@0:8
// Implementation: 0x1090aa908

// -[SCNeoPlayerCPP audioSampleBufferProcessor]
// Type encoding: @16@0:8
// Implementation: 0x1090aa928

// -[SCNeoPlayerCPP setAudioSampleBufferProcessor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090aa958

// -[SCNeoPlayerCPP videoSampleBufferProcessor]
// Type encoding: @16@0:8
// Implementation: 0x1090aaaac

// -[SCNeoPlayerCPP videoRendererPerformanceMetricsProvider]
// Type encoding: @16@0:8
// Implementation: 0x1090aaadc

// -[SCNeoPlayerCPP setVideoSampleBufferProcessor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090aab84

// -[SCNeoPlayerCPP setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090aacd8

// -[SCNeoPlayerCPP delegate]
// Type encoding: @16@0:8
// Implementation: 0x1090aaea8

// -[SCNeoPlayerCPP state]
// Type encoding: Q16@0:8
// Implementation: 0x1090aaf50

// -[SCNeoPlayerCPP setSubtitleDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090aaf70

// -[SCNeoPlayerCPP subtitleDelegate]
// Type encoding: @16@0:8
// Implementation: 0x1090ab084

// -[SCNeoPlayerCPP setSubtitlesEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1090ab0b8

// -[SCNeoPlayerCPP areSubtitlesEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1090ab0c4

// -[SCNeoPlayerCPP refreshSubtitleState]
// Type encoding: v16@0:8
// Implementation: 0x1090ab0cc

// -[SCNeoPlayerCPP loopEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1090ab0d4

// -[SCNeoPlayerCPP setLoopEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1090ab0dc

// -[SCNeoPlayerCPP playerOutput:didFailWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1090ab0e8

// -[SCNeoPlayerCPP playerOutputDidEnqueueSampleBuffer:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1090ab124

// -[SCNeoPlayerCPP setSubtitlesUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090ab128

// -[SCNeoPlayerCPP playerItemFactory]
// Type encoding: @16@0:8
// Implementation: 0x1090ab2a0

// -[SCNeoPlayerCPP .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090ab2a8

// -[SCNeoPlayerCPP .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x1090ab320

@end
