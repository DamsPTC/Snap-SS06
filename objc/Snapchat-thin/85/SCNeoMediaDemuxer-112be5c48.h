// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoMediaDemuxer
// Superclass: NSObject
// Address: 0x112be5c48

@interface SCNeoMediaDemuxer

// Property: loadedTrackInfos; attributes: TB,R,N
// Property: loadedSegmentInfos; attributes: TB,R,N
// Property: requiresParseAtCurrentLocation; attributes: TB,R,N
// Property: trackInfos; attributes: T@"NSArray",R,N
// Property: loadedByteRanges; attributes: T@"NSArray",R,N,V_loadedByteRanges
// Property: loadedTimeRanges; attributes: T@"NSArray",R,N,V_loadedTimeRanges

// -[SCNeoMediaDemuxer initWithBuffer:mediaInfoResolver:blockAllocatorPool:instruments:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10909d99c

// -[SCNeoMediaDemuxer parseBufferWithError:]
// Type encoding: B24@0:8^@16
// Implementation: 0x10909daa4

// -[SCNeoMediaDemuxer seekToTime:toleranceBefore:toleranceAfter:inTrackId:]
// Type encoding: {?=qiIq}92@0:8{?=qiIq}16{?=qiIq}40{?=qiIq}64i88
// Implementation: 0x10909dab4

// -[SCNeoMediaDemuxer _streamForTrackId:]
// Type encoding: @20@0:8i16
// Implementation: 0x10909dbd8

// -[SCNeoMediaDemuxer hasNextSampleBufferForTrackId:]
// Type encoding: B20@0:8i16
// Implementation: 0x10909dd24

// -[SCNeoMediaDemuxer didReachEndOfStreamForTrackId:]
// Type encoding: B20@0:8i16
// Implementation: 0x10909dd6c

// -[SCNeoMediaDemuxer dequeueNextSampleBufferForTrackId:error:]
// Type encoding: @28@0:8i16^@20
// Implementation: 0x10909ddac

// -[SCNeoMediaDemuxer bufferLocationForTrackId:]
// Type encoding: {_NSRange=QQ}20@0:8i16
// Implementation: 0x10909df08

// -[SCNeoMediaDemuxer bufferParseLocation]
// Type encoding: Q16@0:8
// Implementation: 0x10909df58

// -[SCNeoMediaDemuxer trackInfos]
// Type encoding: @16@0:8
// Implementation: 0x10909df60

// -[SCNeoMediaDemuxer trackInfoForTrackId:]
// Type encoding: @20@0:8i16
// Implementation: 0x10909df68

// -[SCNeoMediaDemuxer durationForTrackId:]
// Type encoding: {?=qiIq}20@0:8i16
// Implementation: 0x10909df70

// -[SCNeoMediaDemuxer bitrateForTrackId:]
// Type encoding: Q20@0:8i16
// Implementation: 0x10909e018

// -[SCNeoMediaDemuxer requiresParseAtCurrentLocation]
// Type encoding: B16@0:8
// Implementation: 0x10909e058

// -[SCNeoMediaDemuxer loadedTrackInfos]
// Type encoding: B16@0:8
// Implementation: 0x10909e060

// -[SCNeoMediaDemuxer loadedSegmentInfos]
// Type encoding: B16@0:8
// Implementation: 0x10909e068

// -[SCNeoMediaDemuxer loadedByteRanges]
// Type encoding: @16@0:8
// Implementation: 0x10909e070

// -[SCNeoMediaDemuxer loadedTimeRanges]
// Type encoding: @16@0:8
// Implementation: 0x10909e078

// -[SCNeoMediaDemuxer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10909e080

@end
