// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTCCallingSessionState
// Superclass: SCValdiMarshallableObject
// Address: 0x112c68008

@interface SCTCCallingSessionState

// Property: conversationId; attributes: T@"NSString",C,D,N
// Property: callId; attributes: T@"NSString",C,D,N
// Property: localSessionId; attributes: T@"NSString",C,D,N
// Property: callMedia; attributes: T@"NSString",C,D,N
// Property: localParticipant; attributes: T@"<SCTCParticipant>",&,D,N
// Property: remoteParticipants; attributes: T@"NSArray",C,D,N
// Property: isConnecting; attributes: TB,D,N
// Property: callJoinedTimestampMs; attributes: T@"NSNumber",&,D,N
// Property: isHdVideoNegotiated; attributes: TB,D,N

// -[SCTCCallingSessionState initWithConversationId:localParticipant:remoteParticipants:isConnecting:isHdVideoNegotiated:]
// Type encoding: @48@0:8@16@24@32B40B44
// Implementation: 0x10b089f80

// +[SCTCCallingSessionState valdiMarshallableObjectDescriptor]
// Type encoding: {SCValdiMarshallableObjectDescriptor=^{SCValdiMarshallableObjectFieldDescriptor}^*^{SCValdiMarshallableObjectBlockSupport}C}16@0:8
// Implementation: 0x10b089fb8

@end
