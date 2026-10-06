// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoPlayerCPPDynamicMediaSampleBufferProvider
// Superclass: NSObject
// Address: 0x112be65f8

@interface SCNeoPlayerCPPDynamicMediaSampleBufferProvider

// Property: delegate; attributes: T@"<SCNeoPlayerSampleBufferProviderDelegate>",W,N
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

// -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider initWithURL:dataProviderFactory:instruments:mediaAssetConfiguration:playerConfiguration:mediaQueue:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1090adb14

// -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1090add38

// -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider delegate]
// Type encoding: @16@0:8
// Implementation: 0x1090adecc

// -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090adee4

// -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider _refreshTrackInfos]
// Type encoding: v16@0:8
// Implementation: 0x1090adef0

// -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider _onLoadedTrackInfos]
// Type encoding: v16@0:8
// Implementation: 0x1090ae1a0

// -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider _onHasNewAudioBuffer]
// Type encoding: v16@0:8
// Implementation: 0x1090ae1e4

// -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider _onHasNewVideoBuffer]
// Type encoding: v16@0:8
// Implementation: 0x1090ae220

// -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider _onFailedWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090ae25c

// -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider _onLoadedDataSize:latency:]
// Type encoding: v32@0:8Q16d24
// Implementation: 0x1090ae2d4

// -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider trackInfos]
// Type encoding: @16@0:8
// Implementation: 0x1090ae334

// -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider loadedTrackInfos]
// Type encoding: B16@0:8
// Implementation: 0x1090ae370

// -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider _trackInfoForTrackId:]
// Type encoding: @20@0:8i16
// Implementation: 0x1090ae378

// -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider setVideoTrackId:audioTrackId:currentTime:]
// Type encoding: v48@0:8i16i20{?=qiIq}24
// Implementation: 0x1090ae4a4

// -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider _sampleBufferFromResult:trackInfo:error:]
// Type encoding: @40@0:8r^v16@24^@32
// Implementation: 0x1090ae520

// -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider dequeueNextAudioSampleBufferWithError:]
// Type encoding: @24@0:8^@16
// Implementation: 0x1090ae654

// -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider dequeueNextVideoSampleBufferWithError:]
// Type encoding: @24@0:8^@16
// Implementation: 0x1090ae6c8

// -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider hasNextAudioSampleBuffer]
// Type encoding: B16@0:8
// Implementation: 0x1090ae73c

// -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider hasNextVideoSampleBuffer]
// Type encoding: B16@0:8
// Implementation: 0x1090ae760

// -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider didReachEndOfAudioTrack]
// Type encoding: B16@0:8
// Implementation: 0x1090ae784

// -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider didReachEndOfVideoTrack]
// Type encoding: B16@0:8
// Implementation: 0x1090ae7a8

// -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider seekToTime:toleranceBefore:toleranceAfter:]
// Type encoding: {?=qiIq}88@0:8{?=qiIq}16{?=qiIq}40{?=qiIq}64
// Implementation: 0x1090ae7cc

// -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider timebase]
// Type encoding: ^{OpaqueCMTimebase=}16@0:8
// Implementation: 0x1090ae83c

// -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider loadedTimeRanges]
// Type encoding: @16@0:8
// Implementation: 0x1090ae878

// -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider error]
// Type encoding: @16@0:8
// Implementation: 0x1090ae884

// -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider duration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x1090ae924

// -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider computeMediaDataManagerMetrics]
// Type encoding: {SCNeoMediaDataManagerMetrics=qdqB}16@0:8
// Implementation: 0x1090ae94c

// -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090ae9a8

// -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x1090aea10

@end
