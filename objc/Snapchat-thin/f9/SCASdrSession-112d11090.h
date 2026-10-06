// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCASdrSession
// Superclass: SCAUserTrackedEvent
// Address: 0x112d11090

@interface SCASdrSession


// -[SCASdrSession getEventName]
// Type encoding: @16@0:8
// Implementation: 0x10baa03c8

// -[SCASdrSession getEventQoS]
// Type encoding: q16@0:8
// Implementation: 0x10baa03d4

// -[SCASdrSession getPerUserSamplingRate]
// Type encoding: d16@0:8
// Implementation: 0x10baa03dc

// -[SCASdrSession getPerUserSamplingRateV2]
// Type encoding: d16@0:8
// Implementation: 0x10baa03e8

// -[SCASdrSession setConnectionType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10baa03f4

// -[SCASdrSession setEndReason:]
// Type encoding: v24@0:8q16
// Implementation: 0x10baa0474

// -[SCASdrSession setProfileName:]
// Type encoding: v24@0:8@16
// Implementation: 0x10baa04f4

// -[SCASdrSession setSdrKbps:]
// Type encoding: v24@0:8q16
// Implementation: 0x10baa050c

// -[SCASdrSession setSessionDurationSec:]
// Type encoding: v24@0:8q16
// Implementation: 0x10baa0560

// -[SCASdrSession setSessionKbytes:]
// Type encoding: v24@0:8q16
// Implementation: 0x10baa05b4

// -[SCASdrSession getFieldNumberToFieldDict]
// Type encoding: @16@0:8
// Implementation: 0x10baa0608

// -[SCASdrSession toProtoWithAllowedFields:]
// Type encoding: @24@0:8@16
// Implementation: 0x10baa060c

// -[SCASdrSession getPayloadIdentifier]
// Type encoding: q16@0:8
// Implementation: 0x10baa0618

@end
