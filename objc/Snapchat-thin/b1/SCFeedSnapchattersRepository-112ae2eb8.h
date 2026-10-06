// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeedSnapchattersRepository
// Superclass: NSObject
// Address: 0x112ae2eb8

@interface SCFeedSnapchattersRepository

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFeedSnapchattersRepository addUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x100ba9014

// -[SCFeedSnapchattersRepository removeUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064dd484

// -[SCFeedSnapchattersRepository initWithSnapchatterDataFetcher:snapchatterPublicInfoFetcher:snapchattersObservableRepository:userInfoProvider:lazyUserSnapPrivacyProvider:snapProUserProfileIdProvider:bitmojiAvatarProvider:bitmojiSelfieProvider:chatEligibilityProvider:userId:graphene:storiesConfigProvider:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@88@96@104
// Implementation: 0x100ba8264

// -[SCFeedSnapchattersRepository _setupSubscriptionsWithBitmojiAvatarProvider:bitmojiSelfieProvider:snapchattersObservableRepository:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1064dd4cc

// -[SCFeedSnapchattersRepository _refreshBitmoji]
// Type encoding: v16@0:8
// Implementation: 0x1064dd8ac

// -[SCFeedSnapchattersRepository _announceDidUpdateWithAnnouncerIdentifierForSelf]
// Type encoding: v16@0:8
// Implementation: 0x100c5a1b8

// -[SCFeedSnapchattersRepository didUpdateFriendStorySettingWithUpdateRequest:success:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1064dd8b0

// -[SCFeedSnapchattersRepository didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064dd940

// -[SCFeedSnapchattersRepository didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x1064dd944

// -[SCFeedSnapchattersRepository didEndSnapchattersFetchDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x100c5a1ac

// -[SCFeedSnapchattersRepository didEndSnapchattersSuggestDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x1064dda88

// -[SCFeedSnapchattersRepository didEndSnapchattersContactDataRequest:withResult:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1064dda8c

// -[SCFeedSnapchattersRepository didEndSnapchattersFriendInfoRequest:withSuccess:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1064dda90

// -[SCFeedSnapchattersRepository personEntitiesForFeedIds:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x100bd1be0

// -[SCFeedSnapchattersRepository _personEntitiesIncludingUserIdsForFeedIds:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x100bd1be4

// -[SCFeedSnapchattersRepository _processLocalSnapchatterFetch:requestedUserIds:friendsFeedEntities:completionQueue:completionHandler:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x100bd2360

// -[SCFeedSnapchattersRepository _convertSnapchattersToEntities:]
// Type encoding: @24@0:8@16
// Implementation: 0x100bd26e8

// -[SCFeedSnapchattersRepository _friendsFeedEntityForSnapchatter:]
// Type encoding: @24@0:8@16
// Implementation: 0x100bf0b2c

// -[SCFeedSnapchattersRepository .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1064ddc3c

// +[SCFeedSnapchattersRepository announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x100c5a1f8

@end
