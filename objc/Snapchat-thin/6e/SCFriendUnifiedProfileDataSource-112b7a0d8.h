// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendUnifiedProfileDataSource
// Superclass: NSObject
// Address: 0x112b7a0d8

@interface SCFriendUnifiedProfileDataSource

// Property: userId; attributes: T@"NSString",C,V_userId
// Property: username; attributes: T@"NSString",C,V_username
// Property: storiesDataAccess; attributes: T@"SCLazy",R,N,V_storiesDataAccess
// Property: remoteStoriesDataProvider; attributes: T@"SCLazy",R,N,V_remoteStoriesDataProvider
// Property: configuration; attributes: T@"SCFriendUnifiedProfileConfiguration",R,N,V_configuration
// Property: sessionId; attributes: T@"NSString",R,C,N,V_sessionId
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFriendUnifiedProfileDataSource initWithSnapchatter:conversationId:snapchattersDataFetcher:snapchattersDataTracker:friendStatusManagerCreator:snapchatterPublicInfoFetcher:friendScoreCoordinator:userInfoProvider:currentUserId:friendsFeedDataAccess:messagingExperimentService:sponsoredSnapAdResponseParser:sponsoredSnapBannerDataProvider:storiesDataAccess:remoteStoriesDataProvider:friendProfileConfiguration:creatorSettingsFetcher:creatorSettingsMutator:creatorSettingsTracker:friendStorySettingMutator:circumstanceEngine:]
// Type encoding: @184@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176
// Implementation: 0x107ce7c6c

// -[SCFriendUnifiedProfileDataSource currentUserId]
// Type encoding: @16@0:8
// Implementation: 0x107ce840c

// -[SCFriendUnifiedProfileDataSource snapchatter]
// Type encoding: @16@0:8
// Implementation: 0x107ce8434

// -[SCFriendUnifiedProfileDataSource userSnapchatter]
// Type encoding: @16@0:8
// Implementation: 0x107ce854c

// -[SCFriendUnifiedProfileDataSource conversationId]
// Type encoding: @16@0:8
// Implementation: 0x107ce8594

// -[SCFriendUnifiedProfileDataSource userScore]
// Type encoding: @16@0:8
// Implementation: 0x107ce85bc

// -[SCFriendUnifiedProfileDataSource hasUnviewedStories]
// Type encoding: B16@0:8
// Implementation: 0x107ce86c4

// -[SCFriendUnifiedProfileDataSource storyThumbnailNetworkImage]
// Type encoding: @16@0:8
// Implementation: 0x107ce8780

// -[SCFriendUnifiedProfileDataSource addFriendStatus]
// Type encoding: q16@0:8
// Implementation: 0x107ce8888

// -[SCFriendUnifiedProfileDataSource friendsFeedItem]
// Type encoding: @16@0:8
// Implementation: 0x107ce8948

// -[SCFriendUnifiedProfileDataSource campaignCreatorSnapchatter]
// Type encoding: @16@0:8
// Implementation: 0x107ce8a48

// -[SCFriendUnifiedProfileDataSource sponsoredSnapBannerMetadata]
// Type encoding: @16@0:8
// Implementation: 0x107ce8b48

// -[SCFriendUnifiedProfileDataSource nonFriendAddSourceType]
// Type encoding: q16@0:8
// Implementation: 0x107ce8c48

// -[SCFriendUnifiedProfileDataSource nonFriendAddPlacementType]
// Type encoding: q16@0:8
// Implementation: 0x107ce8d34

// -[SCFriendUnifiedProfileDataSource snapchatterDataFetcher]
// Type encoding: @16@0:8
// Implementation: 0x107ce8e20

// -[SCFriendUnifiedProfileDataSource storyContentType]
// Type encoding: q16@0:8
// Implementation: 0x107ce8e48

// -[SCFriendUnifiedProfileDataSource addUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ce8f10

// -[SCFriendUnifiedProfileDataSource removeUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ce8f18

// -[SCFriendUnifiedProfileDataSource _updateSnapchatterWithUserId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107ce8f20

// -[SCFriendUnifiedProfileDataSource _setSnapchatter:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107ce9108

// -[SCFriendUnifiedProfileDataSource _dispatchSnapchatterUpdate]
// Type encoding: v16@0:8
// Implementation: 0x107ce929c

// -[SCFriendUnifiedProfileDataSource _dispatchUpdateUserScoreRequest]
// Type encoding: v16@0:8
// Implementation: 0x107ce9330

// -[SCFriendUnifiedProfileDataSource _updateUserScore:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ce95f0

// -[SCFriendUnifiedProfileDataSource _dispatchUserScoreUpdate]
// Type encoding: v16@0:8
// Implementation: 0x107ce973c

// -[SCFriendUnifiedProfileDataSource _udpateStoryThumbnailNetworkImageWithSnapchatter:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ce97d0

// -[SCFriendUnifiedProfileDataSource _updateStoryThumbnailNetworkImage:hasUnviewedStories:storyContentType:]
// Type encoding: v36@0:8@16B24q28
// Implementation: 0x107ce9a68

// -[SCFriendUnifiedProfileDataSource _dispatchStoryThumbnailNetworkImageUpdate]
// Type encoding: v16@0:8
// Implementation: 0x107ce9bfc

// -[SCFriendUnifiedProfileDataSource _dispatchRemoveFriend]
// Type encoding: v16@0:8
// Implementation: 0x107ce9c90

// -[SCFriendUnifiedProfileDataSource _dispatchBlockFriend]
// Type encoding: v16@0:8
// Implementation: 0x107ce9d24

// -[SCFriendUnifiedProfileDataSource _dispatchIgnoreFriendRequest]
// Type encoding: v16@0:8
// Implementation: 0x107ce9db8

// -[SCFriendUnifiedProfileDataSource _dispatchIgnoreFriendSuggestion]
// Type encoding: v16@0:8
// Implementation: 0x107ce9e4c

// -[SCFriendUnifiedProfileDataSource _dispatchAddFriendStatusUpdate]
// Type encoding: v16@0:8
// Implementation: 0x107ce9ee0

// -[SCFriendUnifiedProfileDataSource _updateFriendsFeedItemBasedOnFriendsFeedItems:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ce9f74

// -[SCFriendUnifiedProfileDataSource _updateCampaignSnapchatterIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x107cea2f4

// -[SCFriendUnifiedProfileDataSource _updateCampaignCreatorSnapchatter:]
// Type encoding: v24@0:8@16
// Implementation: 0x107cea5cc

// -[SCFriendUnifiedProfileDataSource _dispatchCampaignCreatorSnapchatterUpdate]
// Type encoding: v16@0:8
// Implementation: 0x107cea718

// -[SCFriendUnifiedProfileDataSource _updateFriendsFeedItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x107cea7ac

// -[SCFriendUnifiedProfileDataSource _dispatchFriendsFeedItemUpdate]
// Type encoding: v16@0:8
// Implementation: 0x107cea8f8

// -[SCFriendUnifiedProfileDataSource _updateSponsoredSnapBannerMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x107cea98c

// -[SCFriendUnifiedProfileDataSource _updateCampaignSnapchatterFromBannerMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ceaad8

// -[SCFriendUnifiedProfileDataSource didUpdateFriendStorySettingWithUpdateRequest:success:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107cead34

// -[SCFriendUnifiedProfileDataSource didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ceae38

// -[SCFriendUnifiedProfileDataSource didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x107ceaed8

// -[SCFriendUnifiedProfileDataSource didEndSnapchattersSuggestDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x107ceb328

// -[SCFriendUnifiedProfileDataSource _updateAddFriendStatus:]
// Type encoding: v24@0:8q16
// Implementation: 0x107ceb42c

// -[SCFriendUnifiedProfileDataSource didUpdateSummaryInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ceb494

// -[SCFriendUnifiedProfileDataSource didUpdateWithAnnouncerIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ceb4d0

// -[SCFriendUnifiedProfileDataSource storiesDataAccess]
// Type encoding: @16@0:8
// Implementation: 0x107ceb694

// -[SCFriendUnifiedProfileDataSource remoteStoriesDataProvider]
// Type encoding: @16@0:8
// Implementation: 0x107ceb69c

// -[SCFriendUnifiedProfileDataSource configuration]
// Type encoding: @16@0:8
// Implementation: 0x107ceb6a4

// -[SCFriendUnifiedProfileDataSource sessionId]
// Type encoding: @16@0:8
// Implementation: 0x107ceb6ac

// -[SCFriendUnifiedProfileDataSource userId]
// Type encoding: @16@0:8
// Implementation: 0x107ceb6b4

// -[SCFriendUnifiedProfileDataSource setUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ceb6c0

// -[SCFriendUnifiedProfileDataSource username]
// Type encoding: @16@0:8
// Implementation: 0x107ceb6c8

// -[SCFriendUnifiedProfileDataSource setUsername:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ceb6d4

// -[SCFriendUnifiedProfileDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ceb6dc

// +[SCFriendUnifiedProfileDataSource announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107ce8f04

@end
