// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPerformanceResourceTracker
// Superclass: NSObject
// Address: 0x112a27ca8

@interface SCPerformanceResourceTracker


// -[SCPerformanceResourceTracker init]
// Type encoding: @16@0:8
// Implementation: 0x10011b4bc

// -[SCPerformanceResourceTracker startRecordingResourceHistoryWithPageName:]
// Type encoding: v24@0:8@16
// Implementation: 0x100a1892c

// -[SCPerformanceResourceTracker calculateResourceMetricDictsForPageName:withCompletion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1052ec75c

// -[SCPerformanceResourceTracker _resourceMetricsDictFromResourceHistory:withSampleCountKey:maxValueKey:minValueKey:avgValueKey:medianValueKey:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1052ec8e0

// -[SCPerformanceResourceTracker didPullCpuUsage:]
// Type encoding: v24@0:8d16
// Implementation: 0x1052ecc4c

// -[SCPerformanceResourceTracker didPullGpuUsage:]
// Type encoding: v24@0:8d16
// Implementation: 0x1052ecd68

// -[SCPerformanceResourceTracker clearInvalidCpuGpuHistoryForPageName:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052ece84

// -[SCPerformanceResourceTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1052eced4

@end
