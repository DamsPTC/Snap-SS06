// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: ADLParsedFrameData
// Superclass: NSObject
// Address: 0x112bacd58

@interface ADLParsedFrameData

// Property: configChunks; attributes: T@"NSArray",R,N,V_configChunks
// Property: videoChunks; attributes: T@"NSArray",R,N,V_videoChunks
// Property: timestampUs; attributes: Tq,R,N,V_timestampUs

// -[ADLParsedFrameData initWithConfigChunks:videoChunks:timestampUs:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x108948f6c

// -[ADLParsedFrameData configChunks]
// Type encoding: @16@0:8
// Implementation: 0x108949094

// -[ADLParsedFrameData videoChunks]
// Type encoding: @16@0:8
// Implementation: 0x10894909c

// -[ADLParsedFrameData timestampUs]
// Type encoding: q16@0:8
// Implementation: 0x1089490a4

// -[ADLParsedFrameData .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1089490ac

// +[ADLParsedFrameData ParsedFrameDataWithConfigChunks:videoChunks:timestampUs:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x108949034

@end
