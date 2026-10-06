// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNMessagingStatelessSession
// Superclass: NSObject
// Address: 0x112babc78

@interface SCNMessagingStatelessSession


// -[SCNMessagingStatelessSession initWithCpp:]
// Type encoding: @24@0:8r^v16
// Implementation: 0x10863e4d4

// -[SCNMessagingStatelessSession getConversationMetadata:]
// Type encoding: @24@0:8@16
// Implementation: 0x10863e730

// -[SCNMessagingStatelessSession consumeMessagingPayloadOrSyncConversation:versionNumber:messagingPayloadBytes:callback:]
// Type encoding: v48@0:8@16q24@32@40
// Implementation: 0x10863e81c

// -[SCNMessagingStatelessSession sendMessageWithContent:messageContent:callback:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10863e948

// -[SCNMessagingStatelessSession extractMessage:messageId:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10863ea70

// -[SCNMessagingStatelessSession setDebugMode:]
// Type encoding: v20@0:8B16
// Implementation: 0x10863eb54

// -[SCNMessagingStatelessSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10863ec8c

// -[SCNMessagingStatelessSession .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10863ece0

// +[SCNMessagingStatelessSession create:authContextDelegate:queue:grapheneLogger:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10863e54c

// +[SCNMessagingStatelessSession createMediaReferenceKey:serverMessageId:mediaListIndex:mediaListId:]
// Type encoding: @44@0:8@16q24i32q36
// Implementation: 0x10863ebb8

@end
