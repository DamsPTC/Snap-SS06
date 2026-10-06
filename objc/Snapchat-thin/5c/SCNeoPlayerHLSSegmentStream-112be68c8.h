// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoPlayerHLSSegmentStream
// Superclass: SCNeoPlayerSingleMediaSampleBufferProvider
// Address: 0x112be68c8

@interface SCNeoPlayerHLSSegmentStream

// Property: mediaSegment; attributes: T@"SCNeoMediaHLSMediaSegment",R,N,V_mediaSegment

// -[SCNeoPlayerHLSSegmentStream initWithMediaSegment:dataProvider:mediaDataManager:mediaQueue:mediaInitSectionResolver:blockAllocatorPool:instruments:delegate:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x1090b41e4

// -[SCNeoPlayerHLSSegmentStream seekToBeginningOfSegment]
// Type encoding: v16@0:8
// Implementation: 0x1090b44b0

// -[SCNeoPlayerHLSSegmentStream _didReceiveMediaInfoResolver:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090b4538

// -[SCNeoPlayerHLSSegmentStream _mediaInfoResolver:didCompleteWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1090b4548

// -[SCNeoPlayerHLSSegmentStream mediaSegment]
// Type encoding: @16@0:8
// Implementation: 0x1090b45d4

// -[SCNeoPlayerHLSSegmentStream .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090b45e4

@end
