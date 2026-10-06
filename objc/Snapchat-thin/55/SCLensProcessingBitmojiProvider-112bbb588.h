// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensProcessingBitmojiProvider
// Superclass: NSObject
// Address: 0x112bbb588

@interface SCLensProcessingBitmojiProvider

// Property: friendAvatarId; attributes: T@"NSString",&,V_friendAvatarId
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensProcessingBitmojiProvider initWithLens:bitmojiComponent:conversationMetadataProvider:lensDataFetcher:lensUserProvider:bitmojiImageFetcher:bitmojiSelfieFetcher:bitmojiAvatarProvider:snapchattersSyncFetcher:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x108c9092c

// -[SCLensProcessingBitmojiProvider isBitmojiAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108c90c4c

// -[SCLensProcessingBitmojiProvider dealloc]
// Type encoding: v16@0:8
// Implementation: 0x108c90cc8

// -[SCLensProcessingBitmojiProvider bitmojiComponent:didRequestBitmojiWithId:avatarId:friendAvatarId:bitmojiType:scale:isRequestingSelfie:]
// Type encoding: v68@0:8@16@24@32@40Q48q56B64
// Implementation: 0x108c90d10

// -[SCLensProcessingBitmojiProvider lensComponentDidRequestBitmojiInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c90f64

// -[SCLensProcessingBitmojiProvider _subscribeToAvatarUpdates]
// Type encoding: v16@0:8
// Implementation: 0x108c910a8

// -[SCLensProcessingBitmojiProvider _updateBitmojiComponentWithAvatarId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c911f0

// -[SCLensProcessingBitmojiProvider _bitmojiComponent:didRequestBitmojiWithId:avatarId:friendAvatarId:bitmojiType:scale:isRequestingSelfie:completion:]
// Type encoding: v76@0:8@16@24@32@40Q48q56B64@?68
// Implementation: 0x108c91250

// -[SCLensProcessingBitmojiProvider _isFriendmojiSharingAllowedForFriendAvatarId:]
// Type encoding: B24@0:8@16
// Implementation: 0x108c91a4c

// -[SCLensProcessingBitmojiProvider _loadBitmojiStickerWithId:avatarId:scale:isRequestingSelfie:completion:]
// Type encoding: v52@0:8@16@24q32B40@?44
// Implementation: 0x108c91cf0

// -[SCLensProcessingBitmojiProvider _loadFriendmojiStickerWithId:avatarId:friendAvatarId:scale:completion:]
// Type encoding: v56@0:8@16@24@32q40@?48
// Implementation: 0x108c92010

// -[SCLensProcessingBitmojiProvider _loadFriendsDataWithConversationDataProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c9227c

// -[SCLensProcessingBitmojiProvider _setFriendAvatarId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c92520

// -[SCLensProcessingBitmojiProvider friendAvatarId]
// Type encoding: @16@0:8
// Implementation: 0x108c925dc

// -[SCLensProcessingBitmojiProvider setFriendAvatarId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c925e8

// -[SCLensProcessingBitmojiProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108c925f0

@end
