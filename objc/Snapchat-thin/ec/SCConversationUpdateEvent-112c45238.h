// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCConversationUpdateEvent
// Superclass: NSObject
// Address: 0x112c45238

@interface SCConversationUpdateEvent

// Property: conversationId; attributes: T@"SCNMessagingUUID",R,C,N,V_conversationId
// Property: conversation; attributes: T@"SCNMessagingConversation",R,C,N,V_conversation
// Property: updatedMessages; attributes: T@"NSArray",R,C,N,V_updatedMessages
// Property: removedMessages; attributes: T@"NSArray",R,C,N,V_removedMessages

// -[SCConversationUpdateEvent initWithConversationId:conversation:updatedMessages:removedMessages:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10afd2b04

// -[SCConversationUpdateEvent copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10afd2c10

// -[SCConversationUpdateEvent hash]
// Type encoding: Q16@0:8
// Implementation: 0x10afd2c34

// -[SCConversationUpdateEvent isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10afd2cc0

// -[SCConversationUpdateEvent conversationId]
// Type encoding: @16@0:8
// Implementation: 0x10afd2d98

// -[SCConversationUpdateEvent conversation]
// Type encoding: @16@0:8
// Implementation: 0x10afd2da0

// -[SCConversationUpdateEvent updatedMessages]
// Type encoding: @16@0:8
// Implementation: 0x10afd2da8

// -[SCConversationUpdateEvent removedMessages]
// Type encoding: @16@0:8
// Implementation: 0x10afd2db0

// -[SCConversationUpdateEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10afd2db8

@end
