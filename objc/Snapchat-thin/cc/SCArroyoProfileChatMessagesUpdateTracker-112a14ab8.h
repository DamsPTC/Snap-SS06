// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCArroyoProfileChatMessagesUpdateTracker
// Superclass: NSObject
// Address: 0x112a14ab8

@interface SCArroyoProfileChatMessagesUpdateTracker

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCArroyoProfileChatMessagesUpdateTracker initWithConversationDataUpdateAnnouncer:]
// Type encoding: @24@0:8@16
// Implementation: 0x1050980ac

// -[SCArroyoProfileChatMessagesUpdateTracker addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105098154

// -[SCArroyoProfileChatMessagesUpdateTracker removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10509815c

// -[SCArroyoProfileChatMessagesUpdateTracker didConversationUpdateForConversationId:conversation:updatedMessages:removedMessages:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x105098164

// -[SCArroyoProfileChatMessagesUpdateTracker didCreateConversation:]
// Type encoding: v24@0:8@16
// Implementation: 0x10509828c

// -[SCArroyoProfileChatMessagesUpdateTracker didRemoveConversation:]
// Type encoding: v24@0:8@16
// Implementation: 0x105098290

// -[SCArroyoProfileChatMessagesUpdateTracker didSendStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x105098294

// -[SCArroyoProfileChatMessagesUpdateTracker didSendComplete:]
// Type encoding: v24@0:8@16
// Implementation: 0x105098298

// -[SCArroyoProfileChatMessagesUpdateTracker didConfirmConversationServerCreation:]
// Type encoding: v24@0:8@16
// Implementation: 0x10509829c

// -[SCArroyoProfileChatMessagesUpdateTracker didConversationReset:messages:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1050982a0

// -[SCArroyoProfileChatMessagesUpdateTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10509831c

@end
