// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCIncomingCallRequest
// Superclass: NSObject
// Address: 0x1129b9a60

@interface SCIncomingCallRequest

// Property: conversationId; attributes: T@"NSString",N,R
// Property: media; attributes: TQ,N,R,Vmedia
// Property: senderUserId; attributes: T@"NSString",N,R
// Property: talkCorePayload; attributes: T@"NSString",N,R
// Property: isGroup; attributes: TB,N,R,VisGroup
// Property: sealedEnvelope; attributes: T@"NSString",N,R
// Property: hash; attributes: Tq,N,R
// Property: description; attributes: T@"NSString",N,R

// -[SCIncomingCallRequest conversationId]
// Type encoding: @16@0:8
// Implementation: 0x104465510

// -[SCIncomingCallRequest media]
// Type encoding: Q16@0:8
// Implementation: 0x10446551c

// -[SCIncomingCallRequest senderUserId]
// Type encoding: @16@0:8
// Implementation: 0x10446552c

// -[SCIncomingCallRequest talkCorePayload]
// Type encoding: @16@0:8
// Implementation: 0x104465538

// -[SCIncomingCallRequest isGroup]
// Type encoding: B16@0:8
// Implementation: 0x10446558c

// -[SCIncomingCallRequest sealedEnvelope]
// Type encoding: @16@0:8
// Implementation: 0x10446559c

// -[SCIncomingCallRequest initWithConversationId:media:senderUserId:talkCorePayload:isGroup:sealedEnvelope:]
// Type encoding: @60@0:8@16Q24@32@40B48@52
// Implementation: 0x1044657b0

// -[SCIncomingCallRequest hash]
// Type encoding: q16@0:8
// Implementation: 0x104465a04

// -[SCIncomingCallRequest isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x104465db4

// -[SCIncomingCallRequest copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x104465e34

// -[SCIncomingCallRequest description]
// Type encoding: @16@0:8
// Implementation: 0x104465e38

// -[SCIncomingCallRequest init]
// Type encoding: @16@0:8
// Implementation: 0x104465e6c

// -[SCIncomingCallRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104465ee8

@end
