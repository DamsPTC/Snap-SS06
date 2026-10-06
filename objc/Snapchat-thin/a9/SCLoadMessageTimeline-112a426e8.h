// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLoadMessageTimeline
// Superclass: NSObject
// Address: 0x112a426e8

@interface SCLoadMessageTimeline

// Property: loadMessageAttemptId; attributes: T@"NSString",R,C,N,V_loadMessageAttemptId
// Property: timestamps; attributes: T@"NSArray",R,C,N
// Property: metadata; attributes: T@"NSSet",R,C,N
// Property: completionStep; attributes: Tq,N,V_completionStep
// Property: mediaSizeBytes; attributes: Tq,N,V_mediaSizeBytes
// Property: lensSizeBytes; attributes: Tq,N,V_lensSizeBytes

// -[SCLoadMessageTimeline init]
// Type encoding: @16@0:8
// Implementation: 0x1054fdf04

// -[SCLoadMessageTimeline addTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054fdfa0

// -[SCLoadMessageTimeline timestamps]
// Type encoding: @16@0:8
// Implementation: 0x1054fdfa8

// -[SCLoadMessageTimeline addMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054fdfc0

// -[SCLoadMessageTimeline metadata]
// Type encoding: @16@0:8
// Implementation: 0x1054fe008

// -[SCLoadMessageTimeline loadMessageAttemptId]
// Type encoding: @16@0:8
// Implementation: 0x1054fe020

// -[SCLoadMessageTimeline completionStep]
// Type encoding: q16@0:8
// Implementation: 0x1054fe028

// -[SCLoadMessageTimeline setCompletionStep:]
// Type encoding: v24@0:8q16
// Implementation: 0x1054fe030

// -[SCLoadMessageTimeline mediaSizeBytes]
// Type encoding: q16@0:8
// Implementation: 0x1054fe038

// -[SCLoadMessageTimeline setMediaSizeBytes:]
// Type encoding: v24@0:8q16
// Implementation: 0x1054fe040

// -[SCLoadMessageTimeline lensSizeBytes]
// Type encoding: q16@0:8
// Implementation: 0x1054fe048

// -[SCLoadMessageTimeline setLensSizeBytes:]
// Type encoding: v24@0:8q16
// Implementation: 0x1054fe050

// -[SCLoadMessageTimeline .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054fe058

@end
