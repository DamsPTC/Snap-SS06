// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoMediaHLSPlaylist
// Superclass: NSObject
// Address: 0x112be5e78

@interface SCNeoMediaHLSPlaylist

// Property: variantStreams; attributes: T@"NSArray",R,N,V_variantStreams
// Property: iframeStreams; attributes: T@"NSArray",R,N,V_iframeStreams
// Property: segments; attributes: T@"NSArray",R,N,V_segments
// Property: alternativeRenditions; attributes: T@"NSArray",R,N,V_alternativeRenditions
// Property: targetSegmentDuration; attributes: Td,R,N,V_targetSegmentDuration
// Property: playlistType; attributes: TQ,R,N,V_playlistType

// -[SCNeoMediaHLSPlaylist initWithVariantStreams:iframeStreams:segments:alternativeRenditions:targetSegmentDuration:playlistType:]
// Type encoding: @64@0:8@16@24@32@40d48Q56
// Implementation: 0x1090a0004

// -[SCNeoMediaHLSPlaylist alternativeRenditionsWithGroupId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1090a0110

// -[SCNeoMediaHLSPlaylist variantStreams]
// Type encoding: @16@0:8
// Implementation: 0x1090a0284

// -[SCNeoMediaHLSPlaylist iframeStreams]
// Type encoding: @16@0:8
// Implementation: 0x1090a0288

// -[SCNeoMediaHLSPlaylist segments]
// Type encoding: @16@0:8
// Implementation: 0x1090a028c

// -[SCNeoMediaHLSPlaylist alternativeRenditions]
// Type encoding: @16@0:8
// Implementation: 0x1090a0290

// -[SCNeoMediaHLSPlaylist targetSegmentDuration]
// Type encoding: d16@0:8
// Implementation: 0x1090a0294

// -[SCNeoMediaHLSPlaylist playlistType]
// Type encoding: Q16@0:8
// Implementation: 0x1090a029c

// -[SCNeoMediaHLSPlaylist .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090a02a0

// +[SCNeoMediaHLSPlaylist playlistWithData:baseURL:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x10909e118

@end
