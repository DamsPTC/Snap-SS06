// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMessagingPlaybackGrapheneLogger
// Superclass: NSObject
// Address: 0x112a0bfa8

@interface SCMessagingPlaybackGrapheneLogger


// -[SCMessagingPlaybackGrapheneLogger initWithMessagingPlaybackGraphene:source:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x104f761b8

// -[SCMessagingPlaybackGrapheneLogger logViewAttempt]
// Type encoding: v16@0:8
// Implementation: 0x104f7623c

// -[SCMessagingPlaybackGrapheneLogger logViewComplete]
// Type encoding: v16@0:8
// Implementation: 0x104f762b0

// -[SCMessagingPlaybackGrapheneLogger logViewFailureWithReason:prefix:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x104f76324

// -[SCMessagingPlaybackGrapheneLogger logPlaybackUnableToPresentWithReason:]
// Type encoding: v24@0:8q16
// Implementation: 0x104f7645c

// -[SCMessagingPlaybackGrapheneLogger logMediaPrepLatencyWithTotalDurationMS:imageCreationLatencyMS:mainThreadHopLatencyMS:]
// Type encoding: v40@0:8d16d24d32
// Implementation: 0x104f76524

// -[SCMessagingPlaybackGrapheneLogger logMediaPrepLatencyWithTotalDurationMS:]
// Type encoding: v24@0:8d16
// Implementation: 0x104f76668

// -[SCMessagingPlaybackGrapheneLogger logSnapTapLatency:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f76720

// -[SCMessagingPlaybackGrapheneLogger _logTapToOperaStepMetric:startTime:endTime:]
// Type encoding: v40@0:8@16d24d32
// Implementation: 0x104f7688c

// -[SCMessagingPlaybackGrapheneLogger logMediaPrepareWithType:success:failureReason:durationMs:]
// Type encoding: v44@0:8q16B24q28d36
// Implementation: 0x104f76934

// -[SCMessagingPlaybackGrapheneLogger logSnapZoom]
// Type encoding: v16@0:8
// Implementation: 0x104f76ac4

// -[SCMessagingPlaybackGrapheneLogger logMediaIdMissingForMessageBodyType:mediaType:isQuoted:]
// Type encoding: v36@0:8q16q24B32
// Implementation: 0x104f76b08

// -[SCMessagingPlaybackGrapheneLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104f76c80

@end
