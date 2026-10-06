// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoryScrubEndedMetrics
// Superclass: NSObject
// Address: 0x1128a9ab0

@interface SCStoryScrubEndedMetrics

// Property: targetSnapIndex; attributes: TQ,N,R,VtargetSnapIndex
// Property: scrubStartIndex; attributes: TQ,N,R,VscrubStartIndex
// Property: scrubSnapDelta; attributes: Tq,N,R,VscrubSnapDelta
// Property: scrubDurationMs; attributes: Td,N,R,VscrubDurationMs
// Property: scrubSegmentCount; attributes: TQ,N,R,VscrubSegmentCount
// Property: isVideoChapter; attributes: TB,N,R,VisVideoChapter

// -[SCStoryScrubEndedMetrics targetSnapIndex]
// Type encoding: Q16@0:8
// Implementation: 0x102e859c4

// -[SCStoryScrubEndedMetrics scrubStartIndex]
// Type encoding: Q16@0:8
// Implementation: 0x102e859d4

// -[SCStoryScrubEndedMetrics scrubSnapDelta]
// Type encoding: q16@0:8
// Implementation: 0x102e859e4

// -[SCStoryScrubEndedMetrics scrubDurationMs]
// Type encoding: d16@0:8
// Implementation: 0x102e859f4

// -[SCStoryScrubEndedMetrics scrubSegmentCount]
// Type encoding: Q16@0:8
// Implementation: 0x102e85a04

// -[SCStoryScrubEndedMetrics isVideoChapter]
// Type encoding: B16@0:8
// Implementation: 0x102e85a14

// -[SCStoryScrubEndedMetrics initWithTargetSnapIndex:scrubStartIndex:scrubSnapDelta:scrubDurationMs:scrubSegmentCount:isVideoChapter:]
// Type encoding: @60@0:8Q16Q24q32d40Q48B56
// Implementation: 0x102e85ad8

// -[SCStoryScrubEndedMetrics init]
// Type encoding: @16@0:8
// Implementation: 0x102e85b8c

@end
