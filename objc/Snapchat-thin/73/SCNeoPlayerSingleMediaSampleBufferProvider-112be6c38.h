// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoPlayerSingleMediaSampleBufferProvider
// Superclass: NSObject
// Address: 0x112be6c38

@interface SCNeoPlayerSingleMediaSampleBufferProvider

// Property: mediaDataManagerSourceIndex; attributes: Tq,R,N,V_mediaDataManagerSourceIndex
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCNeoPlayerSampleBufferProviderDelegate>",W,N
// Property: trackInfos; attributes: T@"NSArray",R,N
// Property: loadedTrackInfos; attributes: TB,R,N
// Property: duration; attributes: T{?=qiIq},R,N
// Property: loadedTimeRanges; attributes: T@"NSArray",R,N
// Property: error; attributes: T@"NSError",R,N
// Property: timebase; attributes: T^{OpaqueCMTimebase=},R,N

// -[SCNeoPlayerSingleMediaSampleBufferProvider initWithMediaDataManager:mediaDataManagerSourceIndex:instruments:shouldParseSPSReorderDepth:mediaQueue:delegate:]
// Type encoding: @60@0:8@16q24@32B40@44@52
// Implementation: 0x1090bc808

// -[SCNeoPlayerSingleMediaSampleBufferProvider dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1090bc91c

// -[SCNeoPlayerSingleMediaSampleBufferProvider initializeDemuxerWithMediaInfoResolver:blockAllocatorPool:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1090bc96c

// -[SCNeoPlayerSingleMediaSampleBufferProvider _updateMediaDataManagerLoadMode]
// Type encoding: v16@0:8
// Implementation: 0x1090bcac4

// -[SCNeoPlayerSingleMediaSampleBufferProvider trackInfos]
// Type encoding: @16@0:8
// Implementation: 0x1090bcb00

// -[SCNeoPlayerSingleMediaSampleBufferProvider loadedTrackInfos]
// Type encoding: B16@0:8
// Implementation: 0x1090bcb30

// -[SCNeoPlayerSingleMediaSampleBufferProvider loadedTimeRanges]
// Type encoding: @16@0:8
// Implementation: 0x1090bcb5c

// -[SCNeoPlayerSingleMediaSampleBufferProvider error]
// Type encoding: @16@0:8
// Implementation: 0x1090bcb8c

// -[SCNeoPlayerSingleMediaSampleBufferProvider setVideoTrackId:audioTrackId:currentTime:]
// Type encoding: v48@0:8i16i20{?=qiIq}24
// Implementation: 0x1090bcbbc

// -[SCNeoPlayerSingleMediaSampleBufferProvider _onError:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090bcc58

// -[SCNeoPlayerSingleMediaSampleBufferProvider _didLoadTrackInfos]
// Type encoding: v16@0:8
// Implementation: 0x1090bcd14

// -[SCNeoPlayerSingleMediaSampleBufferProvider _updateLoadedTimeRanges]
// Type encoding: v16@0:8
// Implementation: 0x1090bcda0

// -[SCNeoPlayerSingleMediaSampleBufferProvider _updateDuration]
// Type encoding: v16@0:8
// Implementation: 0x1090bce3c

// -[SCNeoPlayerSingleMediaSampleBufferProvider _updateFromDemuxerWithParsed:]
// Type encoding: v20@0:8B16
// Implementation: 0x1090bcfb4

// -[SCNeoPlayerSingleMediaSampleBufferProvider _processBuffer]
// Type encoding: v16@0:8
// Implementation: 0x1090bd088

// -[SCNeoPlayerSingleMediaSampleBufferProvider seekToTime:toleranceBefore:toleranceAfter:]
// Type encoding: {?=qiIq}88@0:8{?=qiIq}16{?=qiIq}40{?=qiIq}64
// Implementation: 0x1090bd108

// -[SCNeoPlayerSingleMediaSampleBufferProvider hasNextAudioSampleBuffer]
// Type encoding: B16@0:8
// Implementation: 0x1090bd228

// -[SCNeoPlayerSingleMediaSampleBufferProvider _updateCurrentBitrate]
// Type encoding: v16@0:8
// Implementation: 0x1090bd25c

// -[SCNeoPlayerSingleMediaSampleBufferProvider _updateCurrentMediaByteOffset]
// Type encoding: v16@0:8
// Implementation: 0x1090bd2b4

// -[SCNeoPlayerSingleMediaSampleBufferProvider dequeueNextAudioSampleBufferWithError:]
// Type encoding: @24@0:8^@16
// Implementation: 0x1090bd380

// -[SCNeoPlayerSingleMediaSampleBufferProvider didReachEndOfAudioTrack]
// Type encoding: B16@0:8
// Implementation: 0x1090bd3cc

// -[SCNeoPlayerSingleMediaSampleBufferProvider hasNextVideoSampleBuffer]
// Type encoding: B16@0:8
// Implementation: 0x1090bd3f4

// -[SCNeoPlayerSingleMediaSampleBufferProvider dequeueNextVideoSampleBufferWithError:]
// Type encoding: @24@0:8^@16
// Implementation: 0x1090bd428

// -[SCNeoPlayerSingleMediaSampleBufferProvider didReachEndOfVideoTrack]
// Type encoding: B16@0:8
// Implementation: 0x1090bd474

// -[SCNeoPlayerSingleMediaSampleBufferProvider computeMediaDataManagerMetrics]
// Type encoding: {SCNeoMediaDataManagerMetrics=qdqB}16@0:8
// Implementation: 0x1090bd49c

// -[SCNeoPlayerSingleMediaSampleBufferProvider timebase]
// Type encoding: ^{OpaqueCMTimebase=}16@0:8
// Implementation: 0x1090bd4b4

// -[SCNeoPlayerSingleMediaSampleBufferProvider duration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x1090bd4f0

// -[SCNeoPlayerSingleMediaSampleBufferProvider delegate]
// Type encoding: @16@0:8
// Implementation: 0x1090bd52c

// -[SCNeoPlayerSingleMediaSampleBufferProvider setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090bd544

// -[SCNeoPlayerSingleMediaSampleBufferProvider mediaDataManager:didFailToLoadWithError:forSourceIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x1090bd550

// -[SCNeoPlayerSingleMediaSampleBufferProvider mediaDataManager:didUpdateBufferAtByteOffset:forSourceIndex:loadLatency:loadSize:]
// Type encoding: v56@0:8@16Q24q32d40Q48
// Implementation: 0x1090bd558

// -[SCNeoPlayerSingleMediaSampleBufferProvider mediaDataManager:didReachEndforSourceIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1090bd5bc

// -[SCNeoPlayerSingleMediaSampleBufferProvider mediaDataManagerSourceIndex]
// Type encoding: q16@0:8
// Implementation: 0x1090bd5c0

// -[SCNeoPlayerSingleMediaSampleBufferProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090bd5c8

@end
