// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextRepliesSubscribeUpsellDataManager
// Superclass: NSObject
// Address: 0x112ae0f28

@interface SCContextRepliesSubscribeUpsellDataManager

// Property: profileImageSubject; attributes: T@"SCBehaviorSubject",R,N,V_profileImageSubject
// Property: businessProfileId; attributes: T@"NSString",R,C,N,V_businessProfileId
// Property: userId; attributes: T@"NSString",R,C,N,V_userId

// -[SCContextRepliesSubscribeUpsellDataManager initWithSubscribeStatusHandler:snapchatterServices:imageFetchingService:publicProfileManager:bitmojiSelfieFetcher:userParams:profileIconURL:bitmojiAvatarId:bitmojiSelfieId:isPosterMutualFriend:]
// Type encoding: @92@0:8@16@24@32@40@48@56@64@72@80B88
// Implementation: 0x10648ac18

// -[SCContextRepliesSubscribeUpsellDataManager _setIsPosterMutualFriend:]
// Type encoding: v20@0:8B16
// Implementation: 0x10648b0e4

// -[SCContextRepliesSubscribeUpsellDataManager _setIsSubscribed:]
// Type encoding: v20@0:8B16
// Implementation: 0x10648b0ec

// -[SCContextRepliesSubscribeUpsellDataManager shouldShowUpsell]
// Type encoding: B16@0:8
// Implementation: 0x10648b0f4

// -[SCContextRepliesSubscribeUpsellDataManager _fetchSnapchatter]
// Type encoding: v16@0:8
// Implementation: 0x10648b114

// -[SCContextRepliesSubscribeUpsellDataManager subscribeWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10648b35c

// -[SCContextRepliesSubscribeUpsellDataManager _submitSubscriptionWithSnapchatter:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10648b4ac

// -[SCContextRepliesSubscribeUpsellDataManager displayName]
// Type encoding: @16@0:8
// Implementation: 0x10648b564

// -[SCContextRepliesSubscribeUpsellDataManager _fetchProfileImage]
// Type encoding: v16@0:8
// Implementation: 0x10648b56c

// -[SCContextRepliesSubscribeUpsellDataManager _fetchUrlFromProfileManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x10648b68c

// -[SCContextRepliesSubscribeUpsellDataManager _fetchImageFromUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x10648b848

// -[SCContextRepliesSubscribeUpsellDataManager _fetchBitmojiAvatar]
// Type encoding: v16@0:8
// Implementation: 0x10648bca4

// -[SCContextRepliesSubscribeUpsellDataManager _defaultBitmojiAvatar]
// Type encoding: @16@0:8
// Implementation: 0x10648be38

// -[SCContextRepliesSubscribeUpsellDataManager _publishToProfileImageBehaviourSubject:]
// Type encoding: v24@0:8@16
// Implementation: 0x10648be8c

// -[SCContextRepliesSubscribeUpsellDataManager businessProfileId]
// Type encoding: @16@0:8
// Implementation: 0x10648be94

// -[SCContextRepliesSubscribeUpsellDataManager userId]
// Type encoding: @16@0:8
// Implementation: 0x10648be9c

// -[SCContextRepliesSubscribeUpsellDataManager profileImageSubject]
// Type encoding: @16@0:8
// Implementation: 0x10648bea4

// -[SCContextRepliesSubscribeUpsellDataManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10648beac

@end
