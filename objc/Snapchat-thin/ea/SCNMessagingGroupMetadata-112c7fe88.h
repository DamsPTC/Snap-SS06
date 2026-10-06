// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNMessagingGroupMetadata
// Superclass: NSObject
// Address: 0x112c7fe88

@interface SCNMessagingGroupMetadata

// Property: conversationMetadata; attributes: T@"SCNMessagingConversation",&,N,V_conversationMetadata
// Property: creatorUUID; attributes: T@"SCNMessagingUUID",&,N,V_creatorUUID
// Property: lastUpdatedTimestamp; attributes: Tq,N,V_lastUpdatedTimestamp

// -[SCNMessagingGroupMetadata initWithConversationMetadata:creatorUUID:lastUpdatedTimestamp:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x10b639798

// -[SCNMessagingGroupMetadata conversationMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10b639860

// -[SCNMessagingGroupMetadata setConversationMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b639868

// -[SCNMessagingGroupMetadata creatorUUID]
// Type encoding: @16@0:8
// Implementation: 0x10b63988c

// -[SCNMessagingGroupMetadata setCreatorUUID:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b639894

// -[SCNMessagingGroupMetadata lastUpdatedTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x10b6398b8

// -[SCNMessagingGroupMetadata setLastUpdatedTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b6398c0

// -[SCNMessagingGroupMetadata .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b6398c8

@end
