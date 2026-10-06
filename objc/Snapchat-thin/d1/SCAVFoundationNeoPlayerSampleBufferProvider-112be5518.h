// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAVFoundationNeoPlayerSampleBufferProvider
// Superclass: NSObject
// Address: 0x112be5518

@interface SCAVFoundationNeoPlayerSampleBufferProvider

// Property: delegate; attributes: T@"<SCNeoPlayerSampleBufferProviderDelegate>",W,N,Vdelegate
// Property: trackInfos; attributes: T@"NSArray",R,N
// Property: loadedTrackInfos; attributes: TB,R,N
// Property: duration; attributes: T{?=qiIq},R,N
// Property: loadedTimeRanges; attributes: T@"NSArray",R,N
// Property: error; attributes: T@"NSError",R,N
// Property: timebase; attributes: T^{OpaqueCMTimebase=},R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAVFoundationNeoPlayerSampleBufferProvider initWithFilePath:mediaQueue:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1090934d0

// -[SCAVFoundationNeoPlayerSampleBufferProvider dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1090936ac

// -[SCAVFoundationNeoPlayerSampleBufferProvider _onError:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090936f0

// -[SCAVFoundationNeoPlayerSampleBufferProvider _loadTrackInfos]
// Type encoding: v16@0:8
// Implementation: 0x109093778

// -[SCAVFoundationNeoPlayerSampleBufferProvider _startAssetReader]
// Type encoding: v16@0:8
// Implementation: 0x109093aa0

// -[SCAVFoundationNeoPlayerSampleBufferProvider _invalidateAssetReader]
// Type encoding: v16@0:8
// Implementation: 0x109093cb8

// -[SCAVFoundationNeoPlayerSampleBufferProvider _ensureAssetReaderReady]
// Type encoding: B16@0:8
// Implementation: 0x109093cec

// -[SCAVFoundationNeoPlayerSampleBufferProvider trackInfos]
// Type encoding: @16@0:8
// Implementation: 0x109093d44

// -[SCAVFoundationNeoPlayerSampleBufferProvider loadedTrackInfos]
// Type encoding: B16@0:8
// Implementation: 0x109093d64

// -[SCAVFoundationNeoPlayerSampleBufferProvider loadedTimeRanges]
// Type encoding: @16@0:8
// Implementation: 0x109093d90

// -[SCAVFoundationNeoPlayerSampleBufferProvider error]
// Type encoding: @16@0:8
// Implementation: 0x109093dc0

// -[SCAVFoundationNeoPlayerSampleBufferProvider _getTrackForTrackId:]
// Type encoding: @20@0:8i16
// Implementation: 0x109093df0

// -[SCAVFoundationNeoPlayerSampleBufferProvider setVideoTrackId:audioTrackId:currentTime:]
// Type encoding: v48@0:8i16i20{?=qiIq}24
// Implementation: 0x109093ef4

// -[SCAVFoundationNeoPlayerSampleBufferProvider seekToTime:toleranceBefore:toleranceAfter:]
// Type encoding: {?=qiIq}88@0:8{?=qiIq}16{?=qiIq}40{?=qiIq}64
// Implementation: 0x109093f94

// -[SCAVFoundationNeoPlayerSampleBufferProvider _prepareNextAudioSampleBufferIfNeeded]
// Type encoding: B16@0:8
// Implementation: 0x109093fe8

// -[SCAVFoundationNeoPlayerSampleBufferProvider _prepareNextVideoSampleBufferIfNeeded]
// Type encoding: B16@0:8
// Implementation: 0x1090940a8

// -[SCAVFoundationNeoPlayerSampleBufferProvider hasNextAudioSampleBuffer]
// Type encoding: B16@0:8
// Implementation: 0x109094164

// -[SCAVFoundationNeoPlayerSampleBufferProvider didReachEndOfAudioTrack]
// Type encoding: B16@0:8
// Implementation: 0x109094184

// -[SCAVFoundationNeoPlayerSampleBufferProvider dequeueNextAudioSampleBufferWithError:]
// Type encoding: @24@0:8^@16
// Implementation: 0x109094188

// -[SCAVFoundationNeoPlayerSampleBufferProvider hasNextVideoSampleBuffer]
// Type encoding: B16@0:8
// Implementation: 0x1090941c8

// -[SCAVFoundationNeoPlayerSampleBufferProvider didReachEndOfVideoTrack]
// Type encoding: B16@0:8
// Implementation: 0x1090941e8

// -[SCAVFoundationNeoPlayerSampleBufferProvider dequeueNextVideoSampleBufferWithError:]
// Type encoding: @24@0:8^@16
// Implementation: 0x1090941ec

// -[SCAVFoundationNeoPlayerSampleBufferProvider computeMediaDataManagerMetrics]
// Type encoding: {SCNeoMediaDataManagerMetrics=qdqB}16@0:8
// Implementation: 0x109094228

// -[SCAVFoundationNeoPlayerSampleBufferProvider timebase]
// Type encoding: ^{OpaqueCMTimebase=}16@0:8
// Implementation: 0x10909423c

// -[SCAVFoundationNeoPlayerSampleBufferProvider duration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x109094244

// -[SCAVFoundationNeoPlayerSampleBufferProvider delegate]
// Type encoding: @16@0:8
// Implementation: 0x109094364

// -[SCAVFoundationNeoPlayerSampleBufferProvider setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10909437c

// -[SCAVFoundationNeoPlayerSampleBufferProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109094388

@end
