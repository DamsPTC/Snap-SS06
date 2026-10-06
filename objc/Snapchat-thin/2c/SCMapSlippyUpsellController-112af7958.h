// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapSlippyUpsellController
// Superclass: NSObject
// Address: 0x112af7958

@interface SCMapSlippyUpsellController

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapSlippyUpsellController initWithCurrentUserId:mapFriendsProvider:personLocationProvider:preferenceProvider:mapUserPreferences:slippyService:circumstanceEngine:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x10676e4e0

// -[SCMapSlippyUpsellController requestLocationShareUpsellWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10676e65c

// -[SCMapSlippyUpsellController reportLocationShareUpsellAccepted:]
// Type encoding: v20@0:8B16
// Implementation: 0x10676e93c

// -[SCMapSlippyUpsellController requestChatLocationShareUpsellForFriendId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10676ea2c

// -[SCMapSlippyUpsellController reportChatLocationShareUpsellActionWithFriendId:actionType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10676ecf0

// -[SCMapSlippyUpsellController requestChatPushNotificationUpsellForFriendId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10676eec0

// -[SCMapSlippyUpsellController reportChatPushNotificationUpsellActionWithFriendId:actionType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10676f0f8

// -[SCMapSlippyUpsellController requestShareBackUpsellWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10676f2c8

// -[SCMapSlippyUpsellController reportShareBackUpsellActionWithFriendId:actionType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10676f66c

// -[SCMapSlippyUpsellController _locationShareInfo]
// Type encoding: @16@0:8
// Implementation: 0x10676f83c

// -[SCMapSlippyUpsellController _friendsWithBitmojiCount]
// Type encoding: i16@0:8
// Implementation: 0x10676f9bc

// -[SCMapSlippyUpsellController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10676fb80

@end
