// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoMediaInfoResolver
// Superclass: NSObject
// Address: 0x112be5ec8

@interface SCNeoMediaInfoResolver

// Property: requiresParseAtCurrentLocation; attributes: TB,R,N
// Property: loadedTrackInfos; attributes: TB,R,N,V_loadedTrackInfos
// Property: loadedSegmentInfos; attributes: TB,R,N,V_loadedSegmentInfos
// Property: trackInfos; attributes: T@"NSArray",R,N
// Property: streamParser; attributes: T@"<SCNeoMediaStreamParser>",R,N,V_streamParser
// Property: streamParserRegistry; attributes: T@"SCNeoMediaStreamParserRegistry",R,N,V_streamParserRegistry
// Property: eventLogger; attributes: T@"SCNeoPlayerEventLogger",R,N,V_eventLogger
// Property: tracer; attributes: T@"<SCNPlayerAnalyticsTracer>",R,N,V_tracer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNeoMediaInfoResolver initWithStreamParserRegistry:streamParser:instruments:shouldParseSPSReorderDepth:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x1090a0408

// -[SCNeoMediaInfoResolver parseBuffer:withError:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x1090a0520

// -[SCNeoMediaInfoResolver bufferParseLocation]
// Type encoding: Q16@0:8
// Implementation: 0x1090a06dc

// -[SCNeoMediaInfoResolver trackInfos]
// Type encoding: @16@0:8
// Implementation: 0x1090a06e4

// -[SCNeoMediaInfoResolver trackInfoForTrackId:]
// Type encoding: @20@0:8i16
// Implementation: 0x1090a0730

// -[SCNeoMediaInfoResolver setTrackInfo:forTrackId:]
// Type encoding: v28@0:8@16i24
// Implementation: 0x1090a0738

// -[SCNeoMediaInfoResolver mediaStreamParser:didParseTrackInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1090a07b4

// -[SCNeoMediaInfoResolver _getOrCreateSampleInfoIndexerForTrackId:]
// Type encoding: @20@0:8i16
// Implementation: 0x1090a09d0

// -[SCNeoMediaInfoResolver _getOrCreateSegmentInfoIndexerForTrackId:]
// Type encoding: @20@0:8i16
// Implementation: 0x1090a0a58

// -[SCNeoMediaInfoResolver sampleInfoIndexerForTrackId:]
// Type encoding: @20@0:8i16
// Implementation: 0x1090a0ae0

// -[SCNeoMediaInfoResolver setSampleInfoIndexer:forTrackId:]
// Type encoding: v28@0:8@16i24
// Implementation: 0x1090a0ae8

// -[SCNeoMediaInfoResolver enumerateSampleInfoIndexersWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1090a0b44

// -[SCNeoMediaInfoResolver segmentInfoIndexerForTrackId:]
// Type encoding: @20@0:8i16
// Implementation: 0x1090a0b4c

// -[SCNeoMediaInfoResolver setSegmentInfoIndexer:forTrackId:]
// Type encoding: v28@0:8@16i24
// Implementation: 0x1090a0b54

// -[SCNeoMediaInfoResolver enumerateSegmentInfoIndexersWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1090a0bb0

// -[SCNeoMediaInfoResolver mediaStreamParser:didParseSampleInfo:forTrackId:]
// Type encoding: v36@0:8@16@24i32
// Implementation: 0x1090a0bb8

// -[SCNeoMediaInfoResolver mediaStreamParser:didParseSegmentInfo:forTrackId:]
// Type encoding: v36@0:8@16@24i32
// Implementation: 0x1090a0c24

// -[SCNeoMediaInfoResolver mediaStreamParser:didEncounterRecoverableError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1090a0c8c

// -[SCNeoMediaInfoResolver requiresParseAtCurrentLocation]
// Type encoding: B16@0:8
// Implementation: 0x1090a0ce4

// -[SCNeoMediaInfoResolver loadedTrackInfos]
// Type encoding: B16@0:8
// Implementation: 0x1090a0d04

// -[SCNeoMediaInfoResolver loadedSegmentInfos]
// Type encoding: B16@0:8
// Implementation: 0x1090a0d0c

// -[SCNeoMediaInfoResolver streamParser]
// Type encoding: @16@0:8
// Implementation: 0x1090a0d14

// -[SCNeoMediaInfoResolver streamParserRegistry]
// Type encoding: @16@0:8
// Implementation: 0x1090a0d1c

// -[SCNeoMediaInfoResolver eventLogger]
// Type encoding: @16@0:8
// Implementation: 0x1090a0d24

// -[SCNeoMediaInfoResolver tracer]
// Type encoding: @16@0:8
// Implementation: 0x1090a0d2c

// -[SCNeoMediaInfoResolver .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090a0d34

@end
