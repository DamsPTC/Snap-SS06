// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoPlayerHLSMediaSampleBufferProvider
// Superclass: NSObject
// Address: 0x112be6788

@interface SCNeoPlayerHLSMediaSampleBufferProvider

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

// -[SCNeoPlayerHLSMediaSampleBufferProvider initWithURL:dataProviderFactory:mainPlaylistData:instruments:mediaAssetConfiguration:mediaQueue:delegate:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x1090b0f04

// -[SCNeoPlayerHLSMediaSampleBufferProvider dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1090b1110

// -[SCNeoPlayerHLSMediaSampleBufferProvider _findBestEntryWithStartTime:]
// Type encoding: @24@0:8^{?=qiIq}16
// Implementation: 0x1090b1158

// -[SCNeoPlayerHLSMediaSampleBufferProvider _notifyHasNextSampleBuffersIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1090b1280

// -[SCNeoPlayerHLSMediaSampleBufferProvider _getOrCreateHLSStreamForEntry:]
// Type encoding: @24@0:8@16
// Implementation: 0x1090b12f8

// -[SCNeoPlayerHLSMediaSampleBufferProvider _updateStartTimeAndSetActiveInPreparingStream:startTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x1090b13dc

// -[SCNeoPlayerHLSMediaSampleBufferProvider setPreparingMainEntry:preparingAudioEntry:startTime:]
// Type encoding: v56@0:8@16@24{?=qiIq}32
// Implementation: 0x1090b1430

// -[SCNeoPlayerHLSMediaSampleBufferProvider _updatePlaybackStreamsIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1090b1634

// -[SCNeoPlayerHLSMediaSampleBufferProvider _updateActiveEntries]
// Type encoding: v16@0:8
// Implementation: 0x1090b16c0

// -[SCNeoPlayerHLSMediaSampleBufferProvider hlsPlaylistManager:didFailWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1090b176c

// -[SCNeoPlayerHLSMediaSampleBufferProvider hlsPlaylistManager:didLoadTopLevelEntries:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1090b1774

// -[SCNeoPlayerHLSMediaSampleBufferProvider hlsPlaylistManager:didLoadSegmentsInEntry:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1090b1938

// -[SCNeoPlayerHLSMediaSampleBufferProvider _onError:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090b1a14

// -[SCNeoPlayerHLSMediaSampleBufferProvider dequeueNextAudioSampleBufferWithError:]
// Type encoding: @24@0:8^@16
// Implementation: 0x1090b1b38

// -[SCNeoPlayerHLSMediaSampleBufferProvider dequeueNextVideoSampleBufferWithError:]
// Type encoding: @24@0:8^@16
// Implementation: 0x1090b1b40

// -[SCNeoPlayerHLSMediaSampleBufferProvider hasNextAudioSampleBuffer]
// Type encoding: B16@0:8
// Implementation: 0x1090b1b48

// -[SCNeoPlayerHLSMediaSampleBufferProvider hasNextVideoSampleBuffer]
// Type encoding: B16@0:8
// Implementation: 0x1090b1b50

// -[SCNeoPlayerHLSMediaSampleBufferProvider didReachEndOfAudioTrack]
// Type encoding: B16@0:8
// Implementation: 0x1090b1b58

// -[SCNeoPlayerHLSMediaSampleBufferProvider didReachEndOfVideoTrack]
// Type encoding: B16@0:8
// Implementation: 0x1090b1b60

// -[SCNeoPlayerHLSMediaSampleBufferProvider _currentPlaybackStreamContainsTime:]
// Type encoding: B40@0:8{?=qiIq}16
// Implementation: 0x1090b1b68

// -[SCNeoPlayerHLSMediaSampleBufferProvider seekToTime:toleranceBefore:toleranceAfter:]
// Type encoding: {?=qiIq}88@0:8{?=qiIq}16{?=qiIq}40{?=qiIq}64
// Implementation: 0x1090b1c34

// -[SCNeoPlayerHLSMediaSampleBufferProvider _updateTrackIds]
// Type encoding: v16@0:8
// Implementation: 0x1090b1d18

// -[SCNeoPlayerHLSMediaSampleBufferProvider setVideoTrackId:audioTrackId:currentTime:]
// Type encoding: v48@0:8i16i20{?=qiIq}24
// Implementation: 0x1090b1da4

// -[SCNeoPlayerHLSMediaSampleBufferProvider computeMediaDataManagerMetrics]
// Type encoding: {SCNeoMediaDataManagerMetrics=qdqB}16@0:8
// Implementation: 0x1090b1dc8

// -[SCNeoPlayerHLSMediaSampleBufferProvider loadedTimeRanges]
// Type encoding: @16@0:8
// Implementation: 0x1090b1de0

// -[SCNeoPlayerHLSMediaSampleBufferProvider trackInfos]
// Type encoding: @16@0:8
// Implementation: 0x1090b1de8

// -[SCNeoPlayerHLSMediaSampleBufferProvider loadedTrackInfos]
// Type encoding: B16@0:8
// Implementation: 0x1090b1e20

// -[SCNeoPlayerHLSMediaSampleBufferProvider error]
// Type encoding: @16@0:8
// Implementation: 0x1090b1e54

// -[SCNeoPlayerHLSMediaSampleBufferProvider duration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x1090b1e5c

// -[SCNeoPlayerHLSMediaSampleBufferProvider setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090b1e9c

// -[SCNeoPlayerHLSMediaSampleBufferProvider delegate]
// Type encoding: @16@0:8
// Implementation: 0x1090b1ea8

// -[SCNeoPlayerHLSMediaSampleBufferProvider timebase]
// Type encoding: ^{OpaqueCMTimebase=}16@0:8
// Implementation: 0x1090b1ec0

// -[SCNeoPlayerHLSMediaSampleBufferProvider _buildTrackInfosArray]
// Type encoding: @16@0:8
// Implementation: 0x1090b1efc

// -[SCNeoPlayerHLSMediaSampleBufferProvider _notifyDidLoadTrackInfosIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1090b1fb0

// -[SCNeoPlayerHLSMediaSampleBufferProvider isActiveSampleBufferProvider:]
// Type encoding: B24@0:8@16
// Implementation: 0x1090b20f8

// -[SCNeoPlayerHLSMediaSampleBufferProvider sampleBufferProvider:didFailWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1090b211c

// -[SCNeoPlayerHLSMediaSampleBufferProvider sampleBufferProvider:loadedTimeRangesDidChange:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1090b2124

// -[SCNeoPlayerHLSMediaSampleBufferProvider sampleBufferProviderDidLoadTrackInfos:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090b2128

// -[SCNeoPlayerHLSMediaSampleBufferProvider sampleBufferProviderHasNewAudioBuffer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090b2154

// -[SCNeoPlayerHLSMediaSampleBufferProvider sampleBufferProviderHasNewVideoBuffer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090b2180

// -[SCNeoPlayerHLSMediaSampleBufferProvider sampleBufferProvider:didLoadDataSize:withLatency:]
// Type encoding: v40@0:8@16Q24d32
// Implementation: 0x1090b21ac

// -[SCNeoPlayerHLSMediaSampleBufferProvider hlsStream:didLoadDataSize:withLatency:]
// Type encoding: v40@0:8@16Q24d32
// Implementation: 0x1090b2214

// -[SCNeoPlayerHLSMediaSampleBufferProvider hlsStream:didCompleteLoadingSegmentForIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1090b2220

// -[SCNeoPlayerHLSMediaSampleBufferProvider hlsStream:didChangeToSegmentIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1090b2234

// -[SCNeoPlayerHLSMediaSampleBufferProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090b22d8

@end
