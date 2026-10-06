// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCADataSaverEnableEvent
// Superclass: SCAUserTrackedEvent
// Address: 0x112d10910

@interface SCADataSaverEnableEvent


// -[SCADataSaverEnableEvent getEventName]
// Type encoding: @16@0:8
// Implementation: 0x10ba9be94

// -[SCADataSaverEnableEvent getEventQoS]
// Type encoding: q16@0:8
// Implementation: 0x10ba9bea0

// -[SCADataSaverEnableEvent getPerUserSamplingRate]
// Type encoding: d16@0:8
// Implementation: 0x10ba9bea8

// -[SCADataSaverEnableEvent getPerUserSamplingRateV2]
// Type encoding: d16@0:8
// Implementation: 0x10ba9beb4

// -[SCADataSaverEnableEvent setDataSaverEnableDurationMs:]
// Type encoding: v24@0:8q16
// Implementation: 0x10ba9bec0

// -[SCADataSaverEnableEvent setDataSaverEnableReason:]
// Type encoding: v24@0:8q16
// Implementation: 0x10ba9bf14

// -[SCADataSaverEnableEvent getFieldNumberToFieldDict]
// Type encoding: @16@0:8
// Implementation: 0x10ba9bf94

// -[SCADataSaverEnableEvent toProtoWithAllowedFields:]
// Type encoding: @24@0:8@16
// Implementation: 0x10ba9bf98

// -[SCADataSaverEnableEvent getPayloadIdentifier]
// Type encoding: q16@0:8
// Implementation: 0x10ba9bfa4

@end
