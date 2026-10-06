// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAsyncMetricsStore
// Superclass: NSObject
// Address: 0x112bc3058

@interface SCAsyncMetricsStore


// -[SCAsyncMetricsStore init]
// Type encoding: @16@0:8
// Implementation: 0x108dfc1bc

// -[SCAsyncMetricsStore startLatencyMetric:withUniqueId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108dfc338

// -[SCAsyncMetricsStore cancelLatencyMetric:withUniqueId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108dfc4fc

// -[SCAsyncMetricsStore endLatencyMetric:withUniqueId:]
// Type encoding: d32@0:8@16@24
// Implementation: 0x108dfc684

// -[SCAsyncMetricsStore _uniqueEventKeyWithEventName:andUniqueId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108dfc8a0

// -[SCAsyncMetricsStore _latencyMetricForUniqueEventKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x108dfc8d0

// -[SCAsyncMetricsStore _setLatencyMetric:forUniqueEventKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108dfc8fc

// -[SCAsyncMetricsStore _removeLatencyMetricForUniqueEventKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x108dfc910

// -[SCAsyncMetricsStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108dfc920

// +[SCAsyncMetricsStore shared]
// Type encoding: @16@0:8
// Implementation: 0x108dfc288

@end
