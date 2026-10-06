// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAPerfLoggerBaseEvent
// Superclass: SCAUserTrackedEvent
// Address: 0x112cfdf18

@interface SCAPerfLoggerBaseEvent


// -[SCAPerfLoggerBaseEvent getEventName]
// Type encoding: @16@0:8
// Implementation: 0x10b9ee3e8

// -[SCAPerfLoggerBaseEvent getEventQoS]
// Type encoding: q16@0:8
// Implementation: 0x10b9ee3f4

// -[SCAPerfLoggerBaseEvent getPerUserSamplingRate]
// Type encoding: d16@0:8
// Implementation: 0x10b9ee3fc

// -[SCAPerfLoggerBaseEvent getPerUserSamplingRateV2]
// Type encoding: d16@0:8
// Implementation: 0x10b9ee408

// -[SCAPerfLoggerBaseEvent setEndState:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b9ee414

// -[SCAPerfLoggerBaseEvent setErrorCode:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b9ee494

// -[SCAPerfLoggerBaseEvent setEventAnnotations:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b9ee4e8

// -[SCAPerfLoggerBaseEvent setPoints:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b9ee530

// -[SCAPerfLoggerBaseEvent setTopicType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b9ee578

// -[SCAPerfLoggerBaseEvent setDurationInMicroseconds:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b9ee5f8

// -[SCAPerfLoggerBaseEvent prepareDictionary:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b9ee64c

// -[SCAPerfLoggerBaseEvent getFieldNumberToFieldDict]
// Type encoding: @16@0:8
// Implementation: 0x10b9ee8f4

// -[SCAPerfLoggerBaseEvent toProtoWithAllowedFields:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b9ee8f8

// -[SCAPerfLoggerBaseEvent getPayloadIdentifier]
// Type encoding: q16@0:8
// Implementation: 0x10b9ee904

@end
