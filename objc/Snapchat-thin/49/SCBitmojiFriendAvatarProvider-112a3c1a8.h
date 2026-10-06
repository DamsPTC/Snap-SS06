// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBitmojiFriendAvatarProvider
// Superclass: NSObject
// Address: 0x112a3c1a8

@interface SCBitmojiFriendAvatarProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBitmojiFriendAvatarProvider initWithSnapchattersDataFetcher:snapchattersSynchronousDataFetcher:userStorageServices:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1054a6618

// -[SCBitmojiFriendAvatarProvider friendAvatarIdForEdition:respectFriendmojiPrivacySetting:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x1054a66e4

// -[SCBitmojiFriendAvatarProvider updateMyAIAvatarId:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1054a6878

// -[SCBitmojiFriendAvatarProvider _updateAvatarIdforMYAIWithSCSnapchatter:newAvatarId:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1054a6a24

// -[SCBitmojiFriendAvatarProvider _firstEligibleSnapchatterFromSnappchatters:respectFriendmojiPrivacySetting:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x1054a6b80

// -[SCBitmojiFriendAvatarProvider _allSnapchatterBestFriends]
// Type encoding: @16@0:8
// Implementation: 0x1054a6ce8

// -[SCBitmojiFriendAvatarProvider _allSnapchatterFriendsExceptBlocked]
// Type encoding: @16@0:8
// Implementation: 0x1054a6e3c

// -[SCBitmojiFriendAvatarProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054a6eb8

@end
