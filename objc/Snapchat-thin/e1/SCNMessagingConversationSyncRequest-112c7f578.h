// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNMessagingConversationSyncRequest
// Superclass: NSObject
// Address: 0x112c7f578

@interface SCNMessagingConversationSyncRequest

// Property: conversationId; attributes: T@"SCNMessagingUUID",&,N,V_conversationId
// Property: conversationType; attributes: Tq,N,V_conversationType
// Property: minVersion; attributes: T@"NSNumber",&,N,V_minVersion

// -[SCNMessagingConversationSyncRequest initWithConversationId:conversationType:minVersion:]
// Type encoding: @40@0:8@16q24@32
// Implementation: 0x10b63709c

// -[SCNMessagingConversationSyncRequest initWithConversationId:conversationType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10b637164

// -[SCNMessagingConversationSyncRequest conversationId]
// Type encoding: @16@0:8
// Implementation: 0x10b63716c

// -[SCNMessagingConversationSyncRequest setConversationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b637174

// -[SCNMessagingConversationSyncRequest conversationType]
// Type encoding: q16@0:8
// Implementation: 0x10b637198

// -[SCNMessagingConversationSyncRequest setConversationType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b6371a0

// -[SCNMessagingConversationSyncRequest minVersion]
// Type encoding: @16@0:8
// Implementation: 0x10b6371a8

// -[SCNMessagingConversationSyncRequest setMinVersion:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6371b0

// -[SCNMessagingConversationSyncRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b6371d4

@end
