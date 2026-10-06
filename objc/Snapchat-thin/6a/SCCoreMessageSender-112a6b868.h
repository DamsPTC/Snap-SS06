// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCoreMessageSender
// Superclass: NSObject
// Address: 0x112a6b868

@interface SCCoreMessageSender


// -[SCCoreMessageSender initWithNativeSessionManager:docObjectContext:sendObservabilityLogger:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1057d49f4

// -[SCCoreMessageSender nativeConversationManager]
// Type encoding: @16@0:8
// Implementation: 0x1057d4ac0

// -[SCCoreMessageSender sendMessageWithContent:conversations:massSnapRecipients:stories:phoneNumbers:completionQueue:completionHandler:]
// Type encoding: v72@0:8@16@24@32@40@48@56@?64
// Implementation: 0x1057d4b08

// -[SCCoreMessageSender sendMessageWithContent:conversations:massSnapRecipients:completionQueue:completionHandler:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x1057d4d04

// -[SCCoreMessageSender forwardMessage:conversations:completionQueue:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1057d4dd4

// -[SCCoreMessageSender _destinationsFromConversations:massSnapRecipients:stories:phoneNumbers:storyPostContent:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1057d4f38

// -[SCCoreMessageSender _callbackFromCompletionQueue:completionHandler:clientMessageId:]
// Type encoding: @40@0:8@16@?24@32
// Implementation: 0x1057d57d4

// -[SCCoreMessageSender _logSendPersistedWithClientMessageId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057d5a08

// -[SCCoreMessageSender .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1057d5a88

@end
