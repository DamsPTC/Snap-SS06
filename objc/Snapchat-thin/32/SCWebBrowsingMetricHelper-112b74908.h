// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCWebBrowsingMetricHelper
// Superclass: NSObject
// Address: 0x112b74908

@interface SCWebBrowsingMetricHelper

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCWebBrowsingMetricHelper initWithSource:browserName:grapheneRegistry:]
// Type encoding: @40@0:8Q16@24@32
// Implementation: 0x107bbec74

// -[SCWebBrowsingMetricHelper increment:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bbed24

// -[SCWebBrowsingMetricHelper increment:errorCode:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107bbedbc

// -[SCWebBrowsingMetricHelper increment:statusCode:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107bbee60

// -[SCWebBrowsingMetricHelper addTimer:durationInMs:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x107bbef04

// -[SCWebBrowsingMetricHelper addPerformanceTimers:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bbefac

// -[SCWebBrowsingMetricHelper didLoadInitialURL]
// Type encoding: v16@0:8
// Implementation: 0x107bbf184

// -[SCWebBrowsingMetricHelper didFinishInitialLoad:]
// Type encoding: v20@0:8B16
// Implementation: 0x107bbf1a8

// -[SCWebBrowsingMetricHelper reset]
// Type encoding: v16@0:8
// Implementation: 0x107bbf2c4

// -[SCWebBrowsingMetricHelper _addPerformanceTimerMetric:timestamp:startTimestamp:]
// Type encoding: v40@0:8@16d24d32
// Implementation: 0x107bbf2cc

// -[SCWebBrowsingMetricHelper _metricWithSource:]
// Type encoding: @24@0:8@16
// Implementation: 0x107bbf2e0

// -[SCWebBrowsingMetricHelper .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107bbf358

@end
