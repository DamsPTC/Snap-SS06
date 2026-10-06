// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNMessagingConversationMetadata
// Superclass: NSObject
// Address: 0x112c7f3e8

@interface SCNMessagingConversationMetadata

// Property: conversationId; attributes: T@"SCNMessagingUUID",&,N,V_conversationId
// Property: version; attributes: Tq,N,V_version
// Property: lastSeenChat; attributes: Tq,N,V_lastSeenChat
// Property: lastSeenSnap; attributes: Tq,N,V_lastSeenSnap
// Property: lastSeenReactionId; attributes: Tq,N,V_lastSeenReactionId

// -[SCNMessagingConversationMetadata initWithConversationId:version:lastSeenChat:lastSeenSnap:lastSeenReactionId:]
// Type encoding: @56@0:8@16q24q32q40q48
// Implementation: 0x10b636ba8

// -[SCNMessagingConversationMetadata conversationId]
// Type encoding: @16@0:8
// Implementation: 0x10b636c58

// -[SCNMessagingConversationMetadata setConversationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b636c60

// -[SCNMessagingConversationMetadata version]
// Type encoding: q16@0:8
// Implementation: 0x10b636c90

// -[SCNMessagingConversationMetadata setVersion:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b636c98

// -[SCNMessagingConversationMetadata lastSeenChat]
// Type encoding: q16@0:8
// Implementation: 0x10b636ca0

// -[SCNMessagingConversationMetadata setLastSeenChat:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b636ca8

// -[SCNMessagingConversationMetadata lastSeenSnap]
// Type encoding: q16@0:8
// Implementation: 0x10b636cb0

// -[SCNMessagingConversationMetadata setLastSeenSnap:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b636cb8

// -[SCNMessagingConversationMetadata lastSeenReactionId]
// Type encoding: q16@0:8
// Implementation: 0x10b636cc0

// -[SCNMessagingConversationMetadata setLastSeenReactionId:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b636cc8

// -[SCNMessagingConversationMetadata .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b636cd0

@end
