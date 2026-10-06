// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGraphenePerformanceLoggerImpl
// Superclass: SCGraphenePerformanceLogger
// Address: 0x112a2a688

@interface SCGraphenePerformanceLoggerImpl


// -[SCGraphenePerformanceLoggerImpl initWithGrapheneLogger:performer:timeProvider:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1053101c0

// -[SCGraphenePerformanceLoggerImpl logTimeMetricsStart:uniqueId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1053102d0

// -[SCGraphenePerformanceLoggerImpl updateMetricWithUniqueId:dimensionNameToValue:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105310410

// -[SCGraphenePerformanceLoggerImpl _updateMetricLogItem:dimensionNameToValue:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105310528

// -[SCGraphenePerformanceLoggerImpl incrementCounterWithUniqueId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105310698

// -[SCGraphenePerformanceLoggerImpl _incrementCounterWithLogItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x105310778

// -[SCGraphenePerformanceLoggerImpl logHistogramWithUniqueId:value:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1053107c8

// -[SCGraphenePerformanceLoggerImpl _logHistogramWithLogItem:value:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1053108c0

// -[SCGraphenePerformanceLoggerImpl logTimeMetricEndWithUniqueId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105310920

// -[SCGraphenePerformanceLoggerImpl _logTimeEndForUniqueId:logItem:endTimestamp:]
// Type encoding: v40@0:8@16@24d32
// Implementation: 0x105310a40

// -[SCGraphenePerformanceLoggerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105310b08

@end
