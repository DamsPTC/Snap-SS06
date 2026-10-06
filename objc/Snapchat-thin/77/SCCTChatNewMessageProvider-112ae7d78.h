// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCTChatNewMessageProvider
// Superclass: NSObject
// Address: 0x112ae7d78

@interface SCCTChatNewMessageProvider

// Property: conversationId; attributes: T@"NSString",&,N,V_conversationId
// Property: lastMessageTimestamp; attributes: T@"NSDate",&,N,V_lastMessageTimestamp
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCTChatNewMessageProvider initWithConversationUpdaterEventPublisher:chatActionHandler:performer:announcer:currentUserId:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1065c3568

// -[SCCTChatNewMessageProvider dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1065c3690

// -[SCCTChatNewMessageProvider conversationId]
// Type encoding: @16@0:8
// Implementation: 0x1065c36e4

// -[SCCTChatNewMessageProvider setConversationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065c3720

// -[SCCTChatNewMessageProvider lastMessageTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x1065c3760

// -[SCCTChatNewMessageProvider setLastMessageTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065c379c

// -[SCCTChatNewMessageProvider startObservingNewMessagesWithConversationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065c37dc

// -[SCCTChatNewMessageProvider stopObservingNewMessages]
// Type encoding: v16@0:8
// Implementation: 0x1065c3848

// -[SCCTChatNewMessageProvider addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065c387c

// -[SCCTChatNewMessageProvider removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065c3884

// -[SCCTChatNewMessageProvider _createMessagesObserver]
// Type encoding: @16@0:8
// Implementation: 0x1065c388c

// -[SCCTChatNewMessageProvider _shouldAllowMessageUpdateForUpdateEvent:]
// Type encoding: B24@0:8@16
// Implementation: 0x1065c3b20

// -[SCCTChatNewMessageProvider _notifyAnnouncerWithMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065c3c18

// -[SCCTChatNewMessageProvider _checkLastMessageInConversation:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065c3d64

// -[SCCTChatNewMessageProvider _lastMessageInConversation:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1065c3e8c

// -[SCCTChatNewMessageProvider _isNewTextMessage:]
// Type encoding: B24@0:8@16
// Implementation: 0x1065c3f88

// -[SCCTChatNewMessageProvider _isTextMessage:]
// Type encoding: B24@0:8@16
// Implementation: 0x1065c409c

// -[SCCTChatNewMessageProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1065c40e0

@end
