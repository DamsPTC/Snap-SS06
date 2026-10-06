// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAScanHistoryEditEvent
// Superclass: SCAUserTrackedEvent
// Address: 0x112d13b60

@interface SCAScanHistoryEditEvent


// -[SCAScanHistoryEditEvent getEventName]
// Type encoding: @16@0:8
// Implementation: 0x10bab74f4

// -[SCAScanHistoryEditEvent getEventQoS]
// Type encoding: q16@0:8
// Implementation: 0x10bab7500

// -[SCAScanHistoryEditEvent setEventType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10bab7508

// -[SCAScanHistoryEditEvent setScanHistorySessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10bab7588

// -[SCAScanHistoryEditEvent setTimestampMs:]
// Type encoding: v24@0:8q16
// Implementation: 0x10bab75a0

// -[SCAScanHistoryEditEvent getFieldNumberToFieldDict]
// Type encoding: @16@0:8
// Implementation: 0x10bab75f4

// -[SCAScanHistoryEditEvent toProtoWithAllowedFields:]
// Type encoding: @24@0:8@16
// Implementation: 0x10bab75f8

// -[SCAScanHistoryEditEvent getPayloadIdentifier]
// Type encoding: q16@0:8
// Implementation: 0x10bab7604

@end
