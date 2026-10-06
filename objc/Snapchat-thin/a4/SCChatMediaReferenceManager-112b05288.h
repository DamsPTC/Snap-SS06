// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatMediaReferenceManager
// Superclass: NSObject
// Address: 0x112b05288

@interface SCChatMediaReferenceManager


// -[SCChatMediaReferenceManager init]
// Type encoding: @16@0:8
// Implementation: 0x100495f44

// -[SCChatMediaReferenceManager initWithPerformer:]
// Type encoding: @24@0:8@16
// Implementation: 0x100495fa4

// -[SCChatMediaReferenceManager addReferenceToMediaId:forMessage:conversationId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1068f1cf4

// -[SCChatMediaReferenceManager referencesForMediaId:block:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1068f1f48

// -[SCChatMediaReferenceManager removeReferencesForConversationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068f2058

// -[SCChatMediaReferenceManager removeReferencesForMessageId:conversationId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1068f21f8

// -[SCChatMediaReferenceManager _removeIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068f230c

// -[SCChatMediaReferenceManager _identifiersMatchingConversationId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068f24a8

// -[SCChatMediaReferenceManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1068f25bc

@end
