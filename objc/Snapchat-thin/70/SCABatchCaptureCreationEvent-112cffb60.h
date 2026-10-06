// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCABatchCaptureCreationEvent
// Superclass: SCAUserTrackedEvent
// Address: 0x112cffb60

@interface SCABatchCaptureCreationEvent


// -[SCABatchCaptureCreationEvent getEventName]
// Type encoding: @16@0:8
// Implementation: 0x10b9f9dc0

// -[SCABatchCaptureCreationEvent getEventQoS]
// Type encoding: q16@0:8
// Implementation: 0x10b9f9dcc

// -[SCABatchCaptureCreationEvent getPerUserSamplingRate]
// Type encoding: d16@0:8
// Implementation: 0x10b9f9dd4

// -[SCABatchCaptureCreationEvent getPerUserSamplingRateV2]
// Type encoding: d16@0:8
// Implementation: 0x10b9f9de0

// -[SCABatchCaptureCreationEvent setAvgImageCreationLatencyMs:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b9f9dec

// -[SCABatchCaptureCreationEvent setAvgVideoCreationLatencyMs:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b9f9e40

// -[SCABatchCaptureCreationEvent setImageCreationCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b9f9e94

// -[SCABatchCaptureCreationEvent setIsFirstSnapImage:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b9f9ee8

// -[SCABatchCaptureCreationEvent setPreviewOpenLatencyMs:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b9f9f3c

// -[SCABatchCaptureCreationEvent setSnapSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b9f9f90

// -[SCABatchCaptureCreationEvent setVideoCreationCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b9f9fa8

// -[SCABatchCaptureCreationEvent getFieldNumberToFieldDict]
// Type encoding: @16@0:8
// Implementation: 0x10b9f9ffc

// -[SCABatchCaptureCreationEvent toProtoWithAllowedFields:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b9fa000

// -[SCABatchCaptureCreationEvent getPayloadIdentifier]
// Type encoding: q16@0:8
// Implementation: 0x10b9fa00c

@end
