// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCConversationUpdatesPublisher
// Superclass: NSObject
// Address: 0x112ae6ce8

@interface SCConversationUpdatesPublisher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCConversationUpdatesPublisher initWithActionHandler:updaterEventPublisher:conversationIdResolver:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10659cd08

// -[SCConversationUpdatesPublisher fetchAndObserveConversationForChatIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x10659cdd4

// -[SCConversationUpdatesPublisher fetchAndObserveConversation:]
// Type encoding: @24@0:8@16
// Implementation: 0x10659cfec

// -[SCConversationUpdatesPublisher updateEventsForConversation:]
// Type encoding: @24@0:8@16
// Implementation: 0x10659d308

// -[SCConversationUpdatesPublisher fetchAndObserveMessage:conversationId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10659d44c

// -[SCConversationUpdatesPublisher updateEventsForMessage:conversationId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10659d71c

// -[SCConversationUpdatesPublisher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10659da54

@end
