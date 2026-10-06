// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGrapheneExtensionProcessor
// Superclass: NSObject
// Address: 0xad3f50

@interface SCGrapheneExtensionProcessor


// -[SCGrapheneExtensionProcessor initWithUserId:etag:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x42195c

// -[SCGrapheneExtensionProcessor enqueueMetric:value:type:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x421a88

// -[SCGrapheneExtensionProcessor flush]
// Type encoding: @16@0:8
// Implementation: 0x421cec

// -[SCGrapheneExtensionProcessor _buildGrapheneMetricFromDictionary:]
// Type encoding: @24@0:8@16
// Implementation: 0x421f58

// -[SCGrapheneExtensionProcessor _buildAppVersion]
// Type encoding: @16@0:8
// Implementation: 0x422300

// -[SCGrapheneExtensionProcessor _aggregateCountMetric:value:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x422484

// -[SCGrapheneExtensionProcessor _aggregateSamplingMetric:metricType:value:]
// Type encoding: @40@0:8@16q24q32
// Implementation: 0x42252c

// -[SCGrapheneExtensionProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x42261c

@end
