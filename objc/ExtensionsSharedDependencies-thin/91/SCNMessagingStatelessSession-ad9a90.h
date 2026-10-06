// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNMessagingStatelessSession
// Superclass: NSObject
// Address: 0xad9a90

@interface SCNMessagingStatelessSession


// -[SCNMessagingStatelessSession initWithCpp:]
// Type encoding: @24@0:8r^v16
// Implementation: 0x4d0a8c

// -[SCNMessagingStatelessSession getConversationMetadata:]
// Type encoding: @24@0:8@16
// Implementation: 0x4d0ce8

// -[SCNMessagingStatelessSession consumeMessagingPayloadOrSyncConversation:versionNumber:messagingPayloadBytes:callback:]
// Type encoding: v48@0:8@16q24@32@40
// Implementation: 0x4d0dd4

// -[SCNMessagingStatelessSession sendMessageWithContent:messageContent:callback:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x4d0f00

// -[SCNMessagingStatelessSession extractMessage:messageId:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x4d1028

// -[SCNMessagingStatelessSession setDebugMode:]
// Type encoding: v20@0:8B16
// Implementation: 0x4d110c

// -[SCNMessagingStatelessSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x4d1244

// -[SCNMessagingStatelessSession .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x4d1298

// +[SCNMessagingStatelessSession create:authContextDelegate:queue:grapheneLogger:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x4d0b04

// +[SCNMessagingStatelessSession createMediaReferenceKey:serverMessageId:mediaListIndex:mediaListId:]
// Type encoding: @44@0:8@16q24i32q36
// Implementation: 0x4d1170

@end
