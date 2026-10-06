// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCProfileChatMessagesUpdateListenerAnnouncer
// Superclass: NSObject
// Address: 0x112a14c70

@interface SCProfileChatMessagesUpdateListenerAnnouncer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCProfileChatMessagesUpdateListenerAnnouncer description]
// Type encoding: @16@0:8
// Implementation: 0x10509b1b0

// -[SCProfileChatMessagesUpdateListenerAnnouncer addListener:]
// Type encoding: B24@0:8@16
// Implementation: 0x10509b38c

// -[SCProfileChatMessagesUpdateListenerAnnouncer removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10509b7c0

// -[SCProfileChatMessagesUpdateListenerAnnouncer didResetConversation:messages:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10509b9f0

// -[SCProfileChatMessagesUpdateListenerAnnouncer didUpdateConversation:updatedMessages:removedMessageIds:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10509bb18

// -[SCProfileChatMessagesUpdateListenerAnnouncer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10509bc44

// -[SCProfileChatMessagesUpdateListenerAnnouncer .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10509bc6c

@end
