// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoPlayerHLSPlaylistManagerEntry
// Superclass: NSObject
// Address: 0x112be6878

@interface SCNeoPlayerHLSPlaylistManagerEntry

// Property: entryId; attributes: Tq,R,N,V_entryId
// Property: url; attributes: T@"NSURL",R,N,V_url
// Property: rendition; attributes: T@"SCNeoMediaHLSAlternativeRendition",R,N,V_rendition
// Property: parameters; attributes: T@"SCNeoMediaHLSVariantStreamParameters",R,N,V_parameters
// Property: segmentsLoaded; attributes: TB,R,N
// Property: segments; attributes: T@"NSArray",&,N,V_segments
// Property: audioEntries; attributes: T@"NSArray",&,N,V_audioEntries
// Property: subtitlesEntries; attributes: T@"NSArray",&,N,V_subtitlesEntries
// Property: duration; attributes: Td,R,N,V_duration
// Property: bitrate; attributes: TQ,R,N

// -[SCNeoPlayerHLSPlaylistManagerEntry initWithEntryId:url:rendition:parameters:]
// Type encoding: @48@0:8q16@24@32@40
// Implementation: 0x1090b3ab4

// -[SCNeoPlayerHLSPlaylistManagerEntry segmentAtTime:]
// Type encoding: @24@0:8d16
// Implementation: 0x1090b3b80

// -[SCNeoPlayerHLSPlaylistManagerEntry segmentWithMediaSequence:]
// Type encoding: @24@0:8q16
// Implementation: 0x1090b3c88

// -[SCNeoPlayerHLSPlaylistManagerEntry setSegments:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090b3c90

// -[SCNeoPlayerHLSPlaylistManagerEntry setAudioEntries:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090b3ddc

// -[SCNeoPlayerHLSPlaylistManagerEntry setSubtitlesEntries:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090b3e04

// -[SCNeoPlayerHLSPlaylistManagerEntry segmentsLoaded]
// Type encoding: B16@0:8
// Implementation: 0x1090b3e2c

// -[SCNeoPlayerHLSPlaylistManagerEntry bitrate]
// Type encoding: Q16@0:8
// Implementation: 0x1090b3e3c

// -[SCNeoPlayerHLSPlaylistManagerEntry audioEntryWithSystemLocale:userChosenLocale:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1090b3e78

// -[SCNeoPlayerHLSPlaylistManagerEntry entryId]
// Type encoding: q16@0:8
// Implementation: 0x1090b40fc

// -[SCNeoPlayerHLSPlaylistManagerEntry url]
// Type encoding: @16@0:8
// Implementation: 0x1090b4104

// -[SCNeoPlayerHLSPlaylistManagerEntry rendition]
// Type encoding: @16@0:8
// Implementation: 0x1090b410c

// -[SCNeoPlayerHLSPlaylistManagerEntry parameters]
// Type encoding: @16@0:8
// Implementation: 0x1090b4114

// -[SCNeoPlayerHLSPlaylistManagerEntry segments]
// Type encoding: @16@0:8
// Implementation: 0x1090b411c

// -[SCNeoPlayerHLSPlaylistManagerEntry audioEntries]
// Type encoding: @16@0:8
// Implementation: 0x1090b4124

// -[SCNeoPlayerHLSPlaylistManagerEntry subtitlesEntries]
// Type encoding: @16@0:8
// Implementation: 0x1090b412c

// -[SCNeoPlayerHLSPlaylistManagerEntry duration]
// Type encoding: d16@0:8
// Implementation: 0x1090b4134

// -[SCNeoPlayerHLSPlaylistManagerEntry .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090b413c

@end
