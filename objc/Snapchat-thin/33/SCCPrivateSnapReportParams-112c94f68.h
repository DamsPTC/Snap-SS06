// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCPrivateSnapReportParams
// Superclass: SCValdiMarshallableObject
// Address: 0x112c94f68

@interface SCCPrivateSnapReportParams

// Property: conversationId; attributes: T@"NSString",C,D,N
// Property: messageId; attributes: Tq,D,N
// Property: reportedUserId; attributes: T@"NSString",C,D,N
// Property: reportedMedia; attributes: T@"SCCReportedSnapMedia",&,D,N
// Property: mediaSentTimestamp; attributes: Tq,D,N
// Property: attachmentUrl; attributes: T@"NSString",C,D,N
// Property: usesCameraRollPickerLens; attributes: T@"NSNumber",&,D,N
// Property: lensCustomizationPrompt; attributes: T@"NSString",C,D,N
// Property: lensCustomizationId; attributes: T@"NSString",C,D,N

// -[SCCPrivateSnapReportParams initWithConversationId:messageId:reportedUserId:mediaSentTimestamp:]
// Type encoding: @48@0:8@16q24@32q40
// Implementation: 0x10b66df04

// +[SCCPrivateSnapReportParams valdiMarshallableObjectDescriptor]
// Type encoding: {SCValdiMarshallableObjectDescriptor=^{SCValdiMarshallableObjectFieldDescriptor}^*^{SCValdiMarshallableObjectBlockSupport}C}16@0:8
// Implementation: 0x10b66df3c

@end
