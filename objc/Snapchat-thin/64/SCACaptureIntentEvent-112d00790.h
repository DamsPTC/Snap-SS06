// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCACaptureIntentEvent
// Superclass: SCAUserTrackedEvent
// Address: 0x112d00790

@interface SCACaptureIntentEvent


// -[SCACaptureIntentEvent getEventName]
// Type encoding: @16@0:8
// Implementation: 0x10ba05b24

// -[SCACaptureIntentEvent getEventQoS]
// Type encoding: q16@0:8
// Implementation: 0x10ba05b30

// -[SCACaptureIntentEvent getPerUserSamplingRate]
// Type encoding: d16@0:8
// Implementation: 0x10ba05b38

// -[SCACaptureIntentEvent getPerUserSamplingRateV2]
// Type encoding: d16@0:8
// Implementation: 0x10ba05b44

// -[SCACaptureIntentEvent setCaptureSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ba05b50

// -[SCACaptureIntentEvent setMediaType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10ba05b68

// -[SCACaptureIntentEvent setModelName:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ba05be8

// -[SCACaptureIntentEvent setPredictedMediaType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10ba05c00

// -[SCACaptureIntentEvent setPreviousCaptureSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ba05c80

// -[SCACaptureIntentEvent setPreviousMediaType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10ba05c98

// -[SCACaptureIntentEvent setVideoConfirmDelayTier:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ba05d18

// -[SCACaptureIntentEvent getFieldNumberToFieldDict]
// Type encoding: @16@0:8
// Implementation: 0x10ba05d30

// -[SCACaptureIntentEvent toProtoWithAllowedFields:]
// Type encoding: @24@0:8@16
// Implementation: 0x10ba05d34

// -[SCACaptureIntentEvent getPayloadIdentifier]
// Type encoding: q16@0:8
// Implementation: 0x10ba05d40

@end
