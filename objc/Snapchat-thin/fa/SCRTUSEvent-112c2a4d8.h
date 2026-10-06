// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRTUSEvent
// Superclass: NSObject
// Address: 0x112c2a4d8

@interface SCRTUSEvent

// Property: eventName; attributes: T@"NSString",&,N,V_eventName
// Property: eventId; attributes: T@"NSString",&,N,V_eventId
// Property: product; attributes: Tq,N,V_product
// Property: protoPayload; attributes: T@"NSData",&,N,V_protoPayload
// Property: payloadId; attributes: Tq,N,V_payloadId
// Property: clientTs; attributes: T@"NSDate",&,N,V_clientTs

// -[SCRTUSEvent initWithEventName:eventId:product:protoPayload:payloadId:clientTs:]
// Type encoding: @64@0:8@16@24q32@40q48@56
// Implementation: 0x10af6d984

// -[SCRTUSEvent eventName]
// Type encoding: @16@0:8
// Implementation: 0x10af6da88

// -[SCRTUSEvent setEventName:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af6da90

// -[SCRTUSEvent eventId]
// Type encoding: @16@0:8
// Implementation: 0x10af6dac0

// -[SCRTUSEvent setEventId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af6dac8

// -[SCRTUSEvent product]
// Type encoding: q16@0:8
// Implementation: 0x10af6daf8

// -[SCRTUSEvent setProduct:]
// Type encoding: v24@0:8q16
// Implementation: 0x10af6db00

// -[SCRTUSEvent protoPayload]
// Type encoding: @16@0:8
// Implementation: 0x10af6db08

// -[SCRTUSEvent setProtoPayload:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af6db10

// -[SCRTUSEvent payloadId]
// Type encoding: q16@0:8
// Implementation: 0x10af6db40

// -[SCRTUSEvent setPayloadId:]
// Type encoding: v24@0:8q16
// Implementation: 0x10af6db48

// -[SCRTUSEvent clientTs]
// Type encoding: @16@0:8
// Implementation: 0x10af6db50

// -[SCRTUSEvent setClientTs:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af6db58

// -[SCRTUSEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10af6db88

@end
