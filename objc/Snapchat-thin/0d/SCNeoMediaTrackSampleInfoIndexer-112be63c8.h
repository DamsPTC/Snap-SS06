// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoMediaTrackSampleInfoIndexer
// Superclass: NSObject
// Address: 0x112be63c8

@interface SCNeoMediaTrackSampleInfoIndexer

// Property: sampleInfos; attributes: T@"NSArray",R,N
// Property: bitrate; attributes: TQ,R,N
// Property: duration; attributes: T{?=qiIq},R,N,V_duration

// -[SCNeoMediaTrackSampleInfoIndexer init]
// Type encoding: @16@0:8
// Implementation: 0x1090a5fdc

// -[SCNeoMediaTrackSampleInfoIndexer appendSampleInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090a6098

// -[SCNeoMediaTrackSampleInfoIndexer _sampleInfosTimeline]
// Type encoding: @16@0:8
// Implementation: 0x1090a617c

// -[SCNeoMediaTrackSampleInfoIndexer _syncSampleInfosTimeline]
// Type encoding: @16@0:8
// Implementation: 0x1090a61bc

// -[SCNeoMediaTrackSampleInfoIndexer _indexOfSampleAtTime:]
// Type encoding: q40@0:8{?=qiIq}16
// Implementation: 0x1090a61fc

// -[SCNeoMediaTrackSampleInfoIndexer sampleAtTime:]
// Type encoding: @40@0:8{?=qiIq}16
// Implementation: 0x1090a624c

// -[SCNeoMediaTrackSampleInfoIndexer syncSampleAtTime:toleranceBefore:toleranceAfter:]
// Type encoding: @88@0:8{?=qiIq}16{?=qiIq}40{?=qiIq}64
// Implementation: 0x1090a62d8

// -[SCNeoMediaTrackSampleInfoIndexer firstSyncSampleBeforeTime:]
// Type encoding: @40@0:8{?=qiIq}16
// Implementation: 0x1090a6634

// -[SCNeoMediaTrackSampleInfoIndexer sampleAfterSample:]
// Type encoding: @24@0:8@16
// Implementation: 0x1090a6794

// -[SCNeoMediaTrackSampleInfoIndexer sampleInfos]
// Type encoding: @16@0:8
// Implementation: 0x1090a6808

// -[SCNeoMediaTrackSampleInfoIndexer _computeBitrate]
// Type encoding: v16@0:8
// Implementation: 0x1090a6848

// -[SCNeoMediaTrackSampleInfoIndexer bitrate]
// Type encoding: Q16@0:8
// Implementation: 0x1090a69dc

// -[SCNeoMediaTrackSampleInfoIndexer mutableCopy]
// Type encoding: @16@0:8
// Implementation: 0x1090a6a14

// -[SCNeoMediaTrackSampleInfoIndexer duration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x1090a6ac0

// -[SCNeoMediaTrackSampleInfoIndexer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090a6ad4

@end
