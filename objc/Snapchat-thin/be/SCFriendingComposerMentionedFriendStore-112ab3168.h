// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendingComposerMentionedFriendStore
// Superclass: NSObject
// Address: 0x112ab3168

@interface SCFriendingComposerMentionedFriendStore

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: mentionedFriendsObservable; attributes: T@"SCBridgeObservable",&,N,V_mentionedFriendsObservable

// -[SCFriendingComposerMentionedFriendStore initWithSnapchatters:snapchattersDataMutator:snapchattersDataTracker:performerProvider:grapheneRegistry:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105f9a2fc

// -[SCFriendingComposerMentionedFriendStore addMentionedFriendWithMentionedFriend:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f9a5dc

// -[SCFriendingComposerMentionedFriendStore _publishInitData]
// Type encoding: v16@0:8
// Implementation: 0x105f9a6f8

// -[SCFriendingComposerMentionedFriendStore _didAddSnapchatter:success:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x105f9a908

// -[SCFriendingComposerMentionedFriendStore _didRemoveSnapchatter:success:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x105f9aaa0

// -[SCFriendingComposerMentionedFriendStore didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f9ac18

// -[SCFriendingComposerMentionedFriendStore didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x105f9ac1c

// -[SCFriendingComposerMentionedFriendStore mentionedFriendsObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f9b0bc

// -[SCFriendingComposerMentionedFriendStore setMentionedFriendsObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f9b0c4

// -[SCFriendingComposerMentionedFriendStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f9b0f4

@end
