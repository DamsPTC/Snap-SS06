// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBadFrameAnalytics
// Superclass: NSObject
// Address: 0x112a55298

@interface SCBadFrameAnalytics

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBadFrameAnalytics initWithEvent:badFrameStatsTracker:traceSpanName:logger:]
// Type encoding: @48@0:8Q16@24@32@40
// Implementation: 0x105690fb8

// -[SCBadFrameAnalytics eventStart]
// Type encoding: v16@0:8
// Implementation: 0x105691150

// -[SCBadFrameAnalytics eventEnd]
// Type encoding: v16@0:8
// Implementation: 0x105691344

// -[SCBadFrameAnalytics reportEventWithPage:prevPage:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10569150c

// -[SCBadFrameAnalytics endAndReportEventWithPage:prevPage:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10569180c

// -[SCBadFrameAnalytics _reportBadFrameEvent:prevPage:eventDurationInSec:badFrameDurationInMs:totalFrameCount:totalDroppedFrameCount:durationBuckets:jankFrameDurationMs:totalBadFrameCount:totalHangsCount:totalHangFrameDurationMs:hangThresholdMs:mainThreadCpuTimeMs:]
// Type encoding: v120@0:8@16@24d32d40q48q56@64@72q80q88d96d104d112
// Implementation: 0x10569186c

// -[SCBadFrameAnalytics _badFrameDurationBucketsWithPage:prevPage:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105691d04

// -[SCBadFrameAnalytics dealloc]
// Type encoding: v16@0:8
// Implementation: 0x105691e74

// -[SCBadFrameAnalytics .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105691ee8

@end
