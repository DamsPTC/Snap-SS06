// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoPlayerItemObjc
// Superclass: NSObject
// Address: 0x112be6a58

@interface SCNeoPlayerItemObjc

// Property: currentTime; attributes: T{?=qiIq},R,N,V_currentTime
// Property: trackInfos; attributes: T@"NSArray",R,N
// Property: loadedTimeRanges; attributes: T@"NSArray",R,N
// Property: error; attributes: T@"NSError",R,N
// Property: url; attributes: T@"NSURL",R,N,V_url
// Property: subtitlesUrl; attributes: T@"NSURL",R,N,V_subtitlesUrl
// Property: mediaAssetConfiguration; attributes: T@"SCNeoMediaAssetConfiguration",R,N,V_mediaAssetConfiguration
// Property: duration; attributes: T{?=qiIq},R,N
// Property: instruments; attributes: T@"SCNeoInstruments",R,N,V_instruments
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNeoPlayerItemObjc initWithURL:mediaAssetConfiguration:playerConfiguration:dataProviderFactory:videoRendererPerformanceMetricsProvider:subtitlesUrl:externalIdentifier:mediaQueue:error:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72^@80
// Implementation: 0x1090b6724

// -[SCNeoPlayerItemObjc seekToTime:toleranceBefore:toleranceAfter:]
// Type encoding: v88@0:8{?=qiIq}16{?=qiIq}40{?=qiIq}64
// Implementation: 0x1090b6a74

// -[SCNeoPlayerItemObjc loadTimeRange:completion:]
// Type encoding: v72@0:8{?={?=qiIq}{?=qiIq}}16@?64
// Implementation: 0x1090b6b68

// -[SCNeoPlayerItemObjc underlyingSampleBufferProvider]
// Type encoding: @16@0:8
// Implementation: 0x1090b6b6c

// -[SCNeoPlayerItemObjc trackInfos]
// Type encoding: @16@0:8
// Implementation: 0x1090b6b90

// -[SCNeoPlayerItemObjc loadedTimeRanges]
// Type encoding: @16@0:8
// Implementation: 0x1090b6b98

// -[SCNeoPlayerItemObjc duration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x1090b6ba0

// -[SCNeoPlayerItemObjc error]
// Type encoding: @16@0:8
// Implementation: 0x1090b6bb8

// -[SCNeoPlayerItemObjc updateSubtitlesUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090b6bc0

// -[SCNeoPlayerItemObjc instruments]
// Type encoding: @16@0:8
// Implementation: 0x1090b6c08

// -[SCNeoPlayerItemObjc currentTime]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x1090b6c10

// -[SCNeoPlayerItemObjc url]
// Type encoding: @16@0:8
// Implementation: 0x1090b6c24

// -[SCNeoPlayerItemObjc subtitlesUrl]
// Type encoding: @16@0:8
// Implementation: 0x1090b6c2c

// -[SCNeoPlayerItemObjc mediaAssetConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x1090b6c34

// -[SCNeoPlayerItemObjc .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090b6c3c

@end
