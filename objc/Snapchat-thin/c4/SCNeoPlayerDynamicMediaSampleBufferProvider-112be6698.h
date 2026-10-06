// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoPlayerDynamicMediaSampleBufferProvider
// Superclass: NSObject
// Address: 0x112be6698

@interface SCNeoPlayerDynamicMediaSampleBufferProvider

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

// -[SCNeoPlayerDynamicMediaSampleBufferProvider initWithURL:dataProviderFactory:instruments:mediaAssetConfiguration:playerConfiguration:mediaQueue:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1090af18c

// -[SCNeoPlayerDynamicMediaSampleBufferProvider delegate]
// Type encoding: @16@0:8
// Implementation: 0x1090af4a4

// -[SCNeoPlayerDynamicMediaSampleBufferProvider innerSampleBufferProvider]
// Type encoding: @16@0:8
// Implementation: 0x1090af4bc

// -[SCNeoPlayerDynamicMediaSampleBufferProvider setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090af4f8

// -[SCNeoPlayerDynamicMediaSampleBufferProvider _onError:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090af548

// -[SCNeoPlayerDynamicMediaSampleBufferProvider mediaDataManager:didFailToLoadWithError:forSourceIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x1090af5b8

// -[SCNeoPlayerDynamicMediaSampleBufferProvider mediaDataManager:didUpdateBufferAtByteOffset:forSourceIndex:loadLatency:loadSize:]
// Type encoding: v56@0:8@16Q24q32d40Q48
// Implementation: 0x1090af5c0

// -[SCNeoPlayerDynamicMediaSampleBufferProvider mediaDataManager:didReachEndforSourceIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1090af8a8

// -[SCNeoPlayerDynamicMediaSampleBufferProvider dequeueNextAudioSampleBufferWithError:]
// Type encoding: @24@0:8^@16
// Implementation: 0x1090af8ac

// -[SCNeoPlayerDynamicMediaSampleBufferProvider dequeueNextVideoSampleBufferWithError:]
// Type encoding: @24@0:8^@16
// Implementation: 0x1090af8f0

// -[SCNeoPlayerDynamicMediaSampleBufferProvider hasNextAudioSampleBuffer]
// Type encoding: B16@0:8
// Implementation: 0x1090af934

// -[SCNeoPlayerDynamicMediaSampleBufferProvider hasNextVideoSampleBuffer]
// Type encoding: B16@0:8
// Implementation: 0x1090af964

// -[SCNeoPlayerDynamicMediaSampleBufferProvider didReachEndOfAudioTrack]
// Type encoding: B16@0:8
// Implementation: 0x1090af994

// -[SCNeoPlayerDynamicMediaSampleBufferProvider didReachEndOfVideoTrack]
// Type encoding: B16@0:8
// Implementation: 0x1090af9c4

// -[SCNeoPlayerDynamicMediaSampleBufferProvider seekToTime:toleranceBefore:toleranceAfter:]
// Type encoding: {?=qiIq}88@0:8{?=qiIq}16{?=qiIq}40{?=qiIq}64
// Implementation: 0x1090af9f4

// -[SCNeoPlayerDynamicMediaSampleBufferProvider timebase]
// Type encoding: ^{OpaqueCMTimebase=}16@0:8
// Implementation: 0x1090afaa0

// -[SCNeoPlayerDynamicMediaSampleBufferProvider setVideoTrackId:audioTrackId:currentTime:]
// Type encoding: v48@0:8i16i20{?=qiIq}24
// Implementation: 0x1090afadc

// -[SCNeoPlayerDynamicMediaSampleBufferProvider computeMediaDataManagerMetrics]
// Type encoding: {SCNeoMediaDataManagerMetrics=qdqB}16@0:8
// Implementation: 0x1090afb48

// -[SCNeoPlayerDynamicMediaSampleBufferProvider loadedTimeRanges]
// Type encoding: @16@0:8
// Implementation: 0x1090afb60

// -[SCNeoPlayerDynamicMediaSampleBufferProvider trackInfos]
// Type encoding: @16@0:8
// Implementation: 0x1090afb9c

// -[SCNeoPlayerDynamicMediaSampleBufferProvider loadedTrackInfos]
// Type encoding: B16@0:8
// Implementation: 0x1090afbd8

// -[SCNeoPlayerDynamicMediaSampleBufferProvider error]
// Type encoding: @16@0:8
// Implementation: 0x1090afc08

// -[SCNeoPlayerDynamicMediaSampleBufferProvider duration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x1090afc84

// -[SCNeoPlayerDynamicMediaSampleBufferProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090afccc

@end
