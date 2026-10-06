// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCChatMessageReportParams
// Superclass: SCValdiMarshallableObject
// Address: 0x112c94b58

@interface SCCChatMessageReportParams

// Property: conversationId; attributes: T@"NSString",C,D,N
// Property: clientMessageId; attributes: T@"NSString",C,D,N
// Property: serverMessageId; attributes: Tq,D,N
// Property: reportedUserId; attributes: T@"NSString",C,D,N
// Property: reportedUserName; attributes: T@"NSString",C,D,N
// Property: isGroupChat; attributes: T@"NSNumber",&,D,N
// Property: groupChatName; attributes: T@"NSString",C,D,N
// Property: conversationSubtype; attributes: T@"NSNumber",&,D,N

// -[SCCChatMessageReportParams initWithConversationId:clientMessageId:serverMessageId:reportedUserId:]
// Type encoding: @48@0:8@16@24q32@40
// Implementation: 0x10b66dc24

// +[SCCChatMessageReportParams valdiMarshallableObjectDescriptor]
// Type encoding: {SCValdiMarshallableObjectDescriptor=^{SCValdiMarshallableObjectFieldDescriptor}^*^{SCValdiMarshallableObjectBlockSupport}C}16@0:8
// Implementation: 0x10b66dc60

@end
