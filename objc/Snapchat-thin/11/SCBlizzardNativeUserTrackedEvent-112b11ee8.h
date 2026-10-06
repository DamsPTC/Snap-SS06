// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBlizzardNativeUserTrackedEvent
// Superclass: SCAUserTrackedEvent
// Address: 0x112b11ee8

@interface SCBlizzardNativeUserTrackedEvent


// -[SCBlizzardNativeUserTrackedEvent initWithEventName:payloadId:qos:perUserSamplingRate:perEventSamplingRate:eventFields:protoSerializationCallback:perUserSamplingRateV2:]
// Type encoding: @80@0:8@16q24q32d40d48@56@64d72
// Implementation: 0x106ada7fc

// -[SCBlizzardNativeUserTrackedEvent toProtoWithAllowedFields:]
// Type encoding: @24@0:8@16
// Implementation: 0x106ada940

// -[SCBlizzardNativeUserTrackedEvent getEventName]
// Type encoding: @16@0:8
// Implementation: 0x106ada950

// -[SCBlizzardNativeUserTrackedEvent getPayloadIdentifier]
// Type encoding: q16@0:8
// Implementation: 0x106ada980

// -[SCBlizzardNativeUserTrackedEvent getEventQoS]
// Type encoding: q16@0:8
// Implementation: 0x106ada990

// -[SCBlizzardNativeUserTrackedEvent getPerUserSamplingRate]
// Type encoding: d16@0:8
// Implementation: 0x106ada9a0

// -[SCBlizzardNativeUserTrackedEvent getPerUserSamplingRateV2]
// Type encoding: d16@0:8
// Implementation: 0x106ada9b0

// -[SCBlizzardNativeUserTrackedEvent getPerEventSamplingRate]
// Type encoding: d16@0:8
// Implementation: 0x106ada9c0

// -[SCBlizzardNativeUserTrackedEvent asDictionary]
// Type encoding: @16@0:8
// Implementation: 0x106ada9d0

// -[SCBlizzardNativeUserTrackedEvent copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x106adaa7c

// -[SCBlizzardNativeUserTrackedEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106adaadc

@end
