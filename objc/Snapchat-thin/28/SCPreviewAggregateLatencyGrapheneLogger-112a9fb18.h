// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewAggregateLatencyGrapheneLogger
// Superclass: NSObject
// Address: 0x112a9fb18

@interface SCPreviewAggregateLatencyGrapheneLogger


// -[SCPreviewAggregateLatencyGrapheneLogger initWithGrapheneServices:]
// Type encoding: @24@0:8@16
// Implementation: 0x105de2fe8

// -[SCPreviewAggregateLatencyGrapheneLogger startLatencyMeasurementForAction:subAction:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x105de30a8

// -[SCPreviewAggregateLatencyGrapheneLogger endLatencyMeasurementForAction:subAction:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x105de3128

// -[SCPreviewAggregateLatencyGrapheneLogger logAndFlushLatencyMeasurementsForAction:]
// Type encoding: v24@0:8q16
// Implementation: 0x105de32f0

// -[SCPreviewAggregateLatencyGrapheneLogger _grapheneMetricForAction:]
// Type encoding: @24@0:8q16
// Implementation: 0x105de366c

// -[SCPreviewAggregateLatencyGrapheneLogger _applyMetricDimensionsToMetric:forSubAction:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x105de369c

// -[SCPreviewAggregateLatencyGrapheneLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105de3704

@end
