// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCReportedChatMessage
// Superclass: SCValdiMarshallableObject
// Address: 0x112c95148

@interface SCCReportedChatMessage

// Property: serverMessageId; attributes: Tq,D,N
// Property: clientMessageId; attributes: T@"NSString",C,D,N
// Property: userId; attributes: T@"NSString",C,D,N
// Property: content; attributes: T@"SCCReportedMessageContent",&,D,N
// Property: timestamp; attributes: Tq,D,N
// Property: quotedMessageId; attributes: T@"NSNumber",&,D,N
// Property: replyToContents; attributes: T@"SCCReportedReplyToContents",&,D,N

// -[SCCReportedChatMessage initWithServerMessageId:userId:content:timestamp:]
// Type encoding: @48@0:8q16@24@32q40
// Implementation: 0x10b66e06c

// +[SCCReportedChatMessage valdiMarshallableObjectDescriptor]
// Type encoding: {SCValdiMarshallableObjectDescriptor=^{SCValdiMarshallableObjectFieldDescriptor}^*^{SCValdiMarshallableObjectBlockSupport}C}16@0:8
// Implementation: 0x10b66e09c

@end
