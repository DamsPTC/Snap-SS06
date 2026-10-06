// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapSDKPublicUserInfoProvider
// Superclass: NSObject
// Address: 0x112a72488

@interface SCMapSDKPublicUserInfoProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapSDKPublicUserInfoProvider initWithSnapchattersDataFetcher:snapchatterPublicInfoFetcher:currentUserID:usernameProvider:displayNameProvider:bitmojiAvatarIDProvider:bitmojiSelfieIDprovider:circumstanceEngine:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x105847e2c

// -[SCMapSDKPublicUserInfoProvider fetchPublicUserInfo:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105847fd4

// -[SCMapSDKPublicUserInfoProvider _processSnapchatters:andCallback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105848324

// -[SCMapSDKPublicUserInfoProvider _displayNameFromDisplayName:username:isMutualFriend:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x105848a90

// -[SCMapSDKPublicUserInfoProvider _bestFriendTypeFromFriendmojis:]
// Type encoding: i24@0:8@16
// Implementation: 0x105848b38

// -[SCMapSDKPublicUserInfoProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105848d58

@end
