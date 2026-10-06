// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendsFeedSnapBackConversationObserver
// Superclass: NSObject
// Address: 0x112a0be68

@interface SCFriendsFeedSnapBackConversationObserver

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFriendsFeedSnapBackConversationObserver initWithConversationId:userId:conversationDataFetcher:conversationUpdateEventPublisher:performer:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x104f73c50

// -[SCFriendsFeedSnapBackConversationObserver hasUnseenIncomingItemsOtherThanMessageId:]
// Type encoding: B24@0:8@16
// Implementation: 0x104f73dcc

// -[SCFriendsFeedSnapBackConversationObserver didCurrentUserReplyDuringPlayback]
// Type encoding: B16@0:8
// Implementation: 0x104f73fb0

// -[SCFriendsFeedSnapBackConversationObserver didCurrentUserReactToAnyOfMessageIds:]
// Type encoding: B24@0:8@16
// Implementation: 0x104f73fe4

// -[SCFriendsFeedSnapBackConversationObserver _seedRecentMessages]
// Type encoding: v16@0:8
// Implementation: 0x104f74188

// -[SCFriendsFeedSnapBackConversationObserver _subscribeToUpdates]
// Type encoding: v16@0:8
// Implementation: 0x104f743b4

// -[SCFriendsFeedSnapBackConversationObserver _ingestMessages:markSeeded:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104f74660

// -[SCFriendsFeedSnapBackConversationObserver _message:hasUnreadReactionFromUserOtherThan:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x104f7483c

// -[SCFriendsFeedSnapBackConversationObserver _removeMessages:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f749e0

// -[SCFriendsFeedSnapBackConversationObserver .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104f74b78

@end
