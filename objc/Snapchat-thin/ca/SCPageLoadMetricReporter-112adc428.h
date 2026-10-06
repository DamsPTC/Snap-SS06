// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPageLoadMetricReporter
// Superclass: NSObject
// Address: 0x112adc428

@interface SCPageLoadMetricReporter


// -[SCPageLoadMetricReporter initWithUserBlizzard:grapheneRegistry:loggerQueue:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100c6d3e0

// -[SCPageLoadMetricReporter logPageLoadMetric:customSplits:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100c6d4ac

// -[SCPageLoadMetricReporter logAbandonedPageLoad:]
// Type encoding: v24@0:8@16
// Implementation: 0x106373d08

// -[SCPageLoadMetricReporter _logGrapheneMetrics:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c6d5f0

// -[SCPageLoadMetricReporter _logAbandonedGrapheneMetrics:]
// Type encoding: v24@0:8@16
// Implementation: 0x106373dcc

// -[SCPageLoadMetricReporter _logGrapheneSubSteps:page:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100c6dbf4

// -[SCPageLoadMetricReporter _logBlizzardMetrics:customSplits:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100c6de4c

// -[SCPageLoadMetricReporter _logAbandonedBlizzardMetrics:]
// Type encoding: v24@0:8@16
// Implementation: 0x106374638

// -[SCPageLoadMetricReporter _pageLoadSplits:customSplits:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100c6e084

// -[SCPageLoadMetricReporter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106374b28

@end
