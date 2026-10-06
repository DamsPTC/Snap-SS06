// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesGhostToStoriesMetricsEmitter
// Superclass: NSObject
// Address: 0x112a8b168

@interface SCStoriesGhostToStoriesMetricsEmitter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoriesGhostToStoriesMetricsEmitter initWithLoggingType:]
// Type encoding: @24@0:8q16
// Implementation: 0x100430f98

// -[SCStoriesGhostToStoriesMetricsEmitter startWithTriggerType:]
// Type encoding: v24@0:8q16
// Implementation: 0x105b08868

// -[SCStoriesGhostToStoriesMetricsEmitter logStep:]
// Type encoding: v24@0:8q16
// Implementation: 0x105b08958

// -[SCStoriesGhostToStoriesMetricsEmitter logStepV2:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b08abc

// -[SCStoriesGhostToStoriesMetricsEmitter abortLogging]
// Type encoding: v16@0:8
// Implementation: 0x105b08acc

// -[SCStoriesGhostToStoriesMetricsEmitter _endLogging]
// Type encoding: v16@0:8
// Implementation: 0x105b08b2c

// -[SCStoriesGhostToStoriesMetricsEmitter _emitMetric]
// Type encoding: v16@0:8
// Implementation: 0x105b08b64

// -[SCStoriesGhostToStoriesMetricsEmitter _logG2SWithTriggerType:step:latency:]
// Type encoding: v40@0:8@16q24d32
// Implementation: 0x105b08d18

// -[SCStoriesGhostToStoriesMetricsEmitter _logG2STotalTimeWithTriggerType:latency:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x105b08dc8

// -[SCStoriesGhostToStoriesMetricsEmitter _logFriendStoriesSyncCompleteMetrics]
// Type encoding: v16@0:8
// Implementation: 0x105b08e54

// -[SCStoriesGhostToStoriesMetricsEmitter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105b08e68

@end
