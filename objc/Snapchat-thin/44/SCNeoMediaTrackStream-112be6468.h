// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoMediaTrackStream
// Superclass: NSObject
// Address: 0x112be6468

@interface SCNeoMediaTrackStream

// Property: bufferLocation; attributes: T{_NSRange=QQ},R,N

// -[SCNeoMediaTrackStream initWithSampleInfoIndexer:segmentInfoIndexer:trackInfo:blockAllocatorPool:instruments:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1090a7030

// -[SCNeoMediaTrackStream dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1090a7168

// -[SCNeoMediaTrackStream hasNextSampleBufferInBuffer:]
// Type encoding: B24@0:8@16
// Implementation: 0x1090a71b4

// -[SCNeoMediaTrackStream didReachEndOfStream]
// Type encoding: B16@0:8
// Implementation: 0x1090a7228

// -[SCNeoMediaTrackStream dequeueNextSampleBufferInBuffer:withError:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x1090a7230

// -[SCNeoMediaTrackStream _resolveNextSampleInfoIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1090a7398

// -[SCNeoMediaTrackStream seekToTime:toleranceBefore:toleranceAfter:]
// Type encoding: {?=qiIq}88@0:8{?=qiIq}16{?=qiIq}40{?=qiIq}64
// Implementation: 0x1090a7414

// -[SCNeoMediaTrackStream bufferLocation]
// Type encoding: {_NSRange=QQ}16@0:8
// Implementation: 0x1090a74e8

// -[SCNeoMediaTrackStream .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090a7544

@end
