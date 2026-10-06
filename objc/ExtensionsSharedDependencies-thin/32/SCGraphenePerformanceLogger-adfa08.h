// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGraphenePerformanceLogger
// Superclass: NSObject
// Address: 0xadfa08

@interface SCGraphenePerformanceLogger


// -[SCGraphenePerformanceLogger logTimeMetricsStart:uniqueId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x6143f0

// -[SCGraphenePerformanceLogger updateMetricWithUniqueId:dimensionNameToValue:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x6143f4

// -[SCGraphenePerformanceLogger incrementCounterWithUniqueId:]
// Type encoding: v24@0:8@16
// Implementation: 0x6143f8

// -[SCGraphenePerformanceLogger logHistogramWithUniqueId:value:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x6143fc

// -[SCGraphenePerformanceLogger logTimeMetricEndWithUniqueId:]
// Type encoding: v24@0:8@16
// Implementation: 0x614400

@end
