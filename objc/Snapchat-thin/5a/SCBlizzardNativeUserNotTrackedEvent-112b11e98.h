// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBlizzardNativeUserNotTrackedEvent
// Superclass: SCAUserNotTrackedEvent
// Address: 0x112b11e98

@interface SCBlizzardNativeUserNotTrackedEvent


// -[SCBlizzardNativeUserNotTrackedEvent initWithEventName:payloadId:qos:perUserSamplingRate:perEventSamplingRate:eventFields:protoSerializationCallback:perUserSamplingRateV2:]
// Type encoding: @80@0:8@16q24q32d40d48@56@64d72
// Implementation: 0x106ada4cc

// -[SCBlizzardNativeUserNotTrackedEvent toProtoWithAllowedFields:]
// Type encoding: @24@0:8@16
// Implementation: 0x106ada610

// -[SCBlizzardNativeUserNotTrackedEvent getEventName]
// Type encoding: @16@0:8
// Implementation: 0x106ada620

// -[SCBlizzardNativeUserNotTrackedEvent getPayloadIdentifier]
// Type encoding: q16@0:8
// Implementation: 0x106ada650

// -[SCBlizzardNativeUserNotTrackedEvent getEventQoS]
// Type encoding: q16@0:8
// Implementation: 0x106ada660

// -[SCBlizzardNativeUserNotTrackedEvent getPerUserSamplingRateV2]
// Type encoding: d16@0:8
// Implementation: 0x106ada670

// -[SCBlizzardNativeUserNotTrackedEvent getPerUserSamplingRate]
// Type encoding: d16@0:8
// Implementation: 0x106ada680

// -[SCBlizzardNativeUserNotTrackedEvent getPerEventSamplingRate]
// Type encoding: d16@0:8
// Implementation: 0x106ada690

// -[SCBlizzardNativeUserNotTrackedEvent asDictionary]
// Type encoding: @16@0:8
// Implementation: 0x106ada6a0

// -[SCBlizzardNativeUserNotTrackedEvent copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x106ada74c

// -[SCBlizzardNativeUserNotTrackedEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ada7ac

@end
