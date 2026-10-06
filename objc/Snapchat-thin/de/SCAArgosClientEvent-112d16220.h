// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAArgosClientEvent
// Superclass: SCAUserTrackedEvent
// Address: 0x112d16220

@interface SCAArgosClientEvent


// -[SCAArgosClientEvent getEventName]
// Type encoding: @16@0:8
// Implementation: 0x10bac5c34

// -[SCAArgosClientEvent getEventQoS]
// Type encoding: q16@0:8
// Implementation: 0x10bac5c40

// -[SCAArgosClientEvent getPerUserSamplingRate]
// Type encoding: d16@0:8
// Implementation: 0x10bac5c48

// -[SCAArgosClientEvent getPerUserSamplingRateV2]
// Type encoding: d16@0:8
// Implementation: 0x10bac5c54

// -[SCAArgosClientEvent setLatencyMs:]
// Type encoding: v24@0:8q16
// Implementation: 0x10bac5c60

// -[SCAArgosClientEvent setPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x10bac5cb4

// -[SCAArgosClientEvent setReturnedHeader:]
// Type encoding: v24@0:8q16
// Implementation: 0x10bac5ccc

// -[SCAArgosClientEvent setMode:]
// Type encoding: v24@0:8q16
// Implementation: 0x10bac5d20

// -[SCAArgosClientEvent setRequestId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10bac5d74

// -[SCAArgosClientEvent setArgosTokenType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10bac5d8c

// -[SCAArgosClientEvent setSignatureLatencyMs:]
// Type encoding: v24@0:8q16
// Implementation: 0x10bac5de0

// -[SCAArgosClientEvent setTokenInCache:]
// Type encoding: v20@0:8B16
// Implementation: 0x10bac5e34

// -[SCAArgosClientEvent getFieldNumberToFieldDict]
// Type encoding: @16@0:8
// Implementation: 0x10bac5e88

// -[SCAArgosClientEvent toProtoWithAllowedFields:]
// Type encoding: @24@0:8@16
// Implementation: 0x10bac5e8c

// -[SCAArgosClientEvent getPayloadIdentifier]
// Type encoding: q16@0:8
// Implementation: 0x10bac5e98

@end
