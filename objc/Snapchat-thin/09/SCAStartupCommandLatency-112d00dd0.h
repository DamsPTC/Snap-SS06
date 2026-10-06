// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAStartupCommandLatency
// Superclass: SCAUserTrackedEvent
// Address: 0x112d00dd0

@interface SCAStartupCommandLatency


// -[SCAStartupCommandLatency getEventName]
// Type encoding: @16@0:8
// Implementation: 0x10ba08dc0

// -[SCAStartupCommandLatency getEventQoS]
// Type encoding: q16@0:8
// Implementation: 0x10ba08dcc

// -[SCAStartupCommandLatency getPerUserSamplingRate]
// Type encoding: d16@0:8
// Implementation: 0x10ba08dd4

// -[SCAStartupCommandLatency getPerUserSamplingRateV2]
// Type encoding: d16@0:8
// Implementation: 0x10ba08de0

// -[SCAStartupCommandLatency getPerEventSamplingRate]
// Type encoding: d16@0:8
// Implementation: 0x10ba08dec

// -[SCAStartupCommandLatency setCommandId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ba08df8

// -[SCAStartupCommandLatency setDurationUs:]
// Type encoding: v24@0:8q16
// Implementation: 0x10ba08e10

// -[SCAStartupCommandLatency setExecutionQueueIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ba08e64

// -[SCAStartupCommandLatency setExecutionQueueQualityOfService:]
// Type encoding: v24@0:8q16
// Implementation: 0x10ba08e7c

// -[SCAStartupCommandLatency setRelatedCommandId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ba08efc

// -[SCAStartupCommandLatency getFieldNumberToFieldDict]
// Type encoding: @16@0:8
// Implementation: 0x10ba08f14

// -[SCAStartupCommandLatency toProtoWithAllowedFields:]
// Type encoding: @24@0:8@16
// Implementation: 0x10ba08f18

// -[SCAStartupCommandLatency getPayloadIdentifier]
// Type encoding: q16@0:8
// Implementation: 0x10ba08f24

@end
