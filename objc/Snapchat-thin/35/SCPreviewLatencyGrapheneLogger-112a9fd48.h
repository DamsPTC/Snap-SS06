// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewLatencyGrapheneLogger
// Superclass: NSObject
// Address: 0x112a9fd48

@interface SCPreviewLatencyGrapheneLogger

// Property: previewCarouselStartInitMillis; attributes: Td,R,N,V_previewCarouselStartInitMillis

// -[SCPreviewLatencyGrapheneLogger initWithGrapheneServices:]
// Type encoding: @24@0:8@16
// Implementation: 0x105deaf64

// -[SCPreviewLatencyGrapheneLogger previewBecameInteractive]
// Type encoding: v16@0:8
// Implementation: 0x105deb090

// -[SCPreviewLatencyGrapheneLogger startTTIMeasurementForToolType:action:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x105deb0b4

// -[SCPreviewLatencyGrapheneLogger endTTIMeasurementForToolType:action:]
// Type encoding: d32@0:8q16q24
// Implementation: 0x105deb1a8

// -[SCPreviewLatencyGrapheneLogger endTTIMeasurementForToolType:action:success:]
// Type encoding: d36@0:8q16q24B32
// Implementation: 0x105deb1b0

// -[SCPreviewLatencyGrapheneLogger _endTTIMeasurementForToolType:action:logSuccess:]
// Type encoding: d40@0:8q16q24q32
// Implementation: 0x105deb1c0

// -[SCPreviewLatencyGrapheneLogger measureTFIForToolType:action:]
// Type encoding: d32@0:8q16q24
// Implementation: 0x105deb3b4

// -[SCPreviewLatencyGrapheneLogger logEmptyTFIIfNecessaryWhenExitPreviewForToolType:action:]
// Type encoding: d32@0:8q16q24
// Implementation: 0x105deb558

// -[SCPreviewLatencyGrapheneLogger _grapheneMetricForToolType:interactionType:]
// Type encoding: @32@0:8q16q24
// Implementation: 0x105deb6f8

// -[SCPreviewLatencyGrapheneLogger _grapheneMetricForPreviewToolWithInteractionType:]
// Type encoding: @24@0:8q16
// Implementation: 0x105deb774

// -[SCPreviewLatencyGrapheneLogger _applyMetricDimensionsToMetric:forToolType:action:]
// Type encoding: @40@0:8@16q24q32
// Implementation: 0x105deb7c4

// -[SCPreviewLatencyGrapheneLogger _jackpotInfoIncludedMetric:]
// Type encoding: @24@0:8@16
// Implementation: 0x105deb884

// -[SCPreviewLatencyGrapheneLogger storeJackpotResponseMillisToCurrentTimeFromCache:]
// Type encoding: v20@0:8B16
// Implementation: 0x105deb89c

// -[SCPreviewLatencyGrapheneLogger _logJackpotResponseLatencyInfoWithDurationMs:fromCache:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x105deb910

// -[SCPreviewLatencyGrapheneLogger logJackpotResponseLatencyInfo]
// Type encoding: v16@0:8
// Implementation: 0x105deb9f0

// -[SCPreviewLatencyGrapheneLogger storeCarouselFinalizedTimeMillisToCurrentTime]
// Type encoding: v16@0:8
// Implementation: 0x105debac8

// -[SCPreviewLatencyGrapheneLogger logCarouselFinalizedTimeInfo]
// Type encoding: v16@0:8
// Implementation: 0x105debb28

// -[SCPreviewLatencyGrapheneLogger setPreviewCarouselStartInitMillis]
// Type encoding: v16@0:8
// Implementation: 0x105debc44

// -[SCPreviewLatencyGrapheneLogger previewCarouselStartInitMillis]
// Type encoding: d16@0:8
// Implementation: 0x105debc80

// -[SCPreviewLatencyGrapheneLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105debc88

@end
