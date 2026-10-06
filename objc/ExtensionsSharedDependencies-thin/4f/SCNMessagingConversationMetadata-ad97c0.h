// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNMessagingConversationMetadata
// Superclass: NSObject
// Address: 0xad97c0

@interface SCNMessagingConversationMetadata

// Property: conversationId; attributes: T@"SCNMessagingUUID",&,N,V_conversationId
// Property: version; attributes: Tq,N,V_version
// Property: lastSeenChat; attributes: Tq,N,V_lastSeenChat
// Property: lastSeenSnap; attributes: Tq,N,V_lastSeenSnap
// Property: lastSeenReactionId; attributes: Tq,N,V_lastSeenReactionId

// -[SCNMessagingConversationMetadata initWithConversationId:version:lastSeenChat:lastSeenSnap:lastSeenReactionId:]
// Type encoding: @56@0:8@16q24q32q40q48
// Implementation: 0x4cda34

// -[SCNMessagingConversationMetadata conversationId]
// Type encoding: @16@0:8
// Implementation: 0x4cdae4

// -[SCNMessagingConversationMetadata setConversationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x4cdaec

// -[SCNMessagingConversationMetadata version]
// Type encoding: q16@0:8
// Implementation: 0x4cdb1c

// -[SCNMessagingConversationMetadata setVersion:]
// Type encoding: v24@0:8q16
// Implementation: 0x4cdb24

// -[SCNMessagingConversationMetadata lastSeenChat]
// Type encoding: q16@0:8
// Implementation: 0x4cdb2c

// -[SCNMessagingConversationMetadata setLastSeenChat:]
// Type encoding: v24@0:8q16
// Implementation: 0x4cdb34

// -[SCNMessagingConversationMetadata lastSeenSnap]
// Type encoding: q16@0:8
// Implementation: 0x4cdb3c

// -[SCNMessagingConversationMetadata setLastSeenSnap:]
// Type encoding: v24@0:8q16
// Implementation: 0x4cdb44

// -[SCNMessagingConversationMetadata lastSeenReactionId]
// Type encoding: q16@0:8
// Implementation: 0x4cdb4c

// -[SCNMessagingConversationMetadata setLastSeenReactionId:]
// Type encoding: v24@0:8q16
// Implementation: 0x4cdb54

// -[SCNMessagingConversationMetadata .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x4cdb5c

@end
