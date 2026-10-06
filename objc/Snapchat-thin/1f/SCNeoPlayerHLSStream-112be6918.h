// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoPlayerHLSStream
// Superclass: NSObject
// Address: 0x112be6918

@interface SCNeoPlayerHLSStream

// Property: trackInfos; attributes: T@"NSArray",R,N,V_trackInfos
// Property: loadedTrackInfos; attributes: TB,R,N,V_loadedTrackInfos
// Property: entry; attributes: T@"SCNeoPlayerHLSPlaylistManagerEntry",R,N,V_entry
// Property: currentSegment; attributes: T@"SCNeoMediaHLSMediaSegment",R,N
// Property: active; attributes: TB,N,V_active
// Property: startTime; attributes: T{?=qiIq},N,V_startTime
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCNeoPlayerSampleBufferProviderDelegate>",W,N
// Property: duration; attributes: T{?=qiIq},R,N
// Property: loadedTimeRanges; attributes: T@"NSArray",R,N
// Property: error; attributes: T@"NSError",R,N
// Property: timebase; attributes: T^{OpaqueCMTimebase=},R,N

// -[SCNeoPlayerHLSStream initWithEntry:bufferChunkManager:mediaAssetConfiguration:mediaQueue:dataProviderFactory:instruments:delegate:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x1090b4664

// -[SCNeoPlayerHLSStream dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1090b4920

// -[SCNeoPlayerHLSStream setActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x1090b4a64

// -[SCNeoPlayerHLSStream _onError:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090b4ac4

// -[SCNeoPlayerHLSStream _getOrCreateMediaInitSectionResolverWithMediaInitSection:]
// Type encoding: @24@0:8@16
// Implementation: 0x1090b4b34

// -[SCNeoPlayerHLSStream _getOrCreateSegmentStreamForSegment:]
// Type encoding: @24@0:8@16
// Implementation: 0x1090b4d38

// -[SCNeoPlayerHLSStream _notifyHasNextSampleBuffersIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1090b4f20

// -[SCNeoPlayerHLSStream _updateActiveSegmentAtTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x1090b4fb0

// -[SCNeoPlayerHLSStream _prepareNextSegmentsAfterSegment:]
// Type encoding: q24@0:8@16
// Implementation: 0x1090b5004

// -[SCNeoPlayerHLSStream _updateActiveSegment:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090b50f0

// -[SCNeoPlayerHLSStream didLoadSegments]
// Type encoding: v16@0:8
// Implementation: 0x1090b5268

// -[SCNeoPlayerHLSStream setStartTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x1090b52cc

// -[SCNeoPlayerHLSStream computeMediaDataManagerMetrics]
// Type encoding: {SCNeoMediaDataManagerMetrics=qdqB}16@0:8
// Implementation: 0x1090b530c

// -[SCNeoPlayerHLSStream setVideoTrackId:audioTrackId:currentTime:]
// Type encoding: v48@0:8i16i20{?=qiIq}24
// Implementation: 0x1090b5324

// -[SCNeoPlayerHLSStream seekToTime:toleranceBefore:toleranceAfter:]
// Type encoding: {?=qiIq}88@0:8{?=qiIq}16{?=qiIq}40{?=qiIq}64
// Implementation: 0x1090b5458

// -[SCNeoPlayerHLSStream timebase]
// Type encoding: ^{OpaqueCMTimebase=}16@0:8
// Implementation: 0x1090b5514

// -[SCNeoPlayerHLSStream updatedLoadedTimeRanges]
// Type encoding: v16@0:8
// Implementation: 0x1090b5554

// -[SCNeoPlayerHLSStream updateTrackInfos]
// Type encoding: v16@0:8
// Implementation: 0x1090b5558

// -[SCNeoPlayerHLSStream _updateCurrentSegmentStreamIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1090b570c

// -[SCNeoPlayerHLSStream hasNextAudioSampleBuffer]
// Type encoding: B16@0:8
// Implementation: 0x1090b57d8

// -[SCNeoPlayerHLSStream dequeueNextAudioSampleBufferWithError:]
// Type encoding: @24@0:8^@16
// Implementation: 0x1090b57e0

// -[SCNeoPlayerHLSStream didReachEndOfAudioTrack]
// Type encoding: B16@0:8
// Implementation: 0x1090b5824

// -[SCNeoPlayerHLSStream hasNextVideoSampleBuffer]
// Type encoding: B16@0:8
// Implementation: 0x1090b5854

// -[SCNeoPlayerHLSStream dequeueNextVideoSampleBufferWithError:]
// Type encoding: @24@0:8^@16
// Implementation: 0x1090b585c

// -[SCNeoPlayerHLSStream didReachEndOfVideoTrack]
// Type encoding: B16@0:8
// Implementation: 0x1090b58a0

// -[SCNeoPlayerHLSStream sampleBufferProvider:didFailWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1090b58d0

// -[SCNeoPlayerHLSStream sampleBufferProvider:loadedTimeRangesDidChange:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1090b58d8

// -[SCNeoPlayerHLSStream sampleBufferProviderDidLoadTrackInfos:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090b58dc

// -[SCNeoPlayerHLSStream sampleBufferProviderHasNewAudioBuffer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090b58f0

// -[SCNeoPlayerHLSStream sampleBufferProviderHasNewVideoBuffer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090b58f4

// -[SCNeoPlayerHLSStream sampleBufferProvider:didLoadDataSize:withLatency:]
// Type encoding: v40@0:8@16Q24d32
// Implementation: 0x1090b58f8

// -[SCNeoPlayerHLSStream loadedTimeRanges]
// Type encoding: @16@0:8
// Implementation: 0x1090b5964

// -[SCNeoPlayerHLSStream duration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x1090b596c

// -[SCNeoPlayerHLSStream error]
// Type encoding: @16@0:8
// Implementation: 0x1090b59b4

// -[SCNeoPlayerHLSStream delegate]
// Type encoding: @16@0:8
// Implementation: 0x1090b59bc

// -[SCNeoPlayerHLSStream setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090b59d4

// -[SCNeoPlayerHLSStream currentSegment]
// Type encoding: @16@0:8
// Implementation: 0x1090b59e0

// -[SCNeoPlayerHLSStream mediaDataManager:didFailToLoadWithError:forSourceIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x1090b59e8

// -[SCNeoPlayerHLSStream mediaDataManager:didUpdateBufferAtByteOffset:forSourceIndex:loadLatency:loadSize:]
// Type encoding: v56@0:8@16Q24q32d40Q48
// Implementation: 0x1090b59f0

// -[SCNeoPlayerHLSStream mediaDataManager:didReachEndforSourceIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1090b5a38

// -[SCNeoPlayerHLSStream trackInfos]
// Type encoding: @16@0:8
// Implementation: 0x1090b5a74

// -[SCNeoPlayerHLSStream loadedTrackInfos]
// Type encoding: B16@0:8
// Implementation: 0x1090b5a7c

// -[SCNeoPlayerHLSStream entry]
// Type encoding: @16@0:8
// Implementation: 0x1090b5a84

// -[SCNeoPlayerHLSStream active]
// Type encoding: B16@0:8
// Implementation: 0x1090b5a8c

// -[SCNeoPlayerHLSStream startTime]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x1090b5a94

// -[SCNeoPlayerHLSStream .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090b5aa8

@end
