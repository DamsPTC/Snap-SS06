// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatConversationUpdater
// Superclass: NSObject
// Address: 0x112ae3ea8

@interface SCChatConversationUpdater

// Property: conversationViewModel; attributes: T@"SCChatConversationViewModelV3",&,V_conversationViewModel
// Property: activeConversationData; attributes: T@"SCChatActiveConversationData",&,V_activeConversationData
// Property: lastUpdateTime; attributes: Td,V_lastUpdateTime
// Property: numberOfMessagesFromLastUpdate; attributes: TQ,V_numberOfMessagesFromLastUpdate
// Property: configuration; attributes: T@"SCChatConfiguration",&,V_configuration
// Property: metricsTracker; attributes: T@"SCChatPageLoadMetricsTracker",&,V_metricsTracker
// Property: locationContextTimezoneInfo; attributes: T@"SCMapLocationContextTimeZoneInfo",&,V_locationContextTimezoneInfo
// Property: locationContextHeaderLocation; attributes: T@"NSString",&,V_locationContextHeaderLocation
// Property: locationContextHeaderTimestamp; attributes: Td,V_locationContextHeaderTimestamp
// Property: locationContextHeaderApplicableUserIds; attributes: T@"NSArray",&,V_locationContextHeaderApplicableUserIds
// Property: actionmojiSelfieId; attributes: T@"NSString",&,V_actionmojiSelfieId
// Property: isEligibleForLocationUpsellBanner; attributes: TB,V_isEligibleForLocationUpsellBanner
// Property: isEligibleForArrivalNotifUpsellBanner; attributes: TB,V_isEligibleForArrivalNotifUpsellBanner
// Property: isSubscribedToMerlinBio; attributes: TB,V_isSubscribedToMerlinBio
// Property: friendshipFlashbacksDataModel; attributes: T@"SCFriendshipFlashbacksDataModel",&,V_friendshipFlashbacksDataModel
// Property: campaignPublicUserStorySummaryInfo; attributes: T@"SCStoriesSummaryInfo",&,V_campaignPublicUserStorySummaryInfo
// Property: addToGroupCardState; attributes: T@"SCAddToGroupCardState",&,V_addToGroupCardState
// Property: friendSaturnStatus; attributes: T@"SCSaturnStatusComponents",&,V_friendSaturnStatus
// Property: friendSaturnUserId; attributes: T@"NSString",C,V_friendSaturnUserId
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatConversationUpdater initWithPolaroidViewTransitionResolver:pluginManager:accessoryPluginManager:messageViewModelFactory:animationDataCoordinator:pageLoadMetricsEmitter:userSession:legacyChatTooltipsService:messagingExperimentService:featureSettingsService:customStoriesDataFetcher:plusFeatureGating:plusServices:locationContextFetcher:circumstanceEngine:chatEligibilityProvider:chatDisplayReadyLogger:storiesReplayManager:remoteStoriesDataProvider:schedulingPerformer:viewModelGenerationPerformer:notificationOSSettingsRetriever:groupsCustomColorsFetcher:friendshipFlashbacksDataManager:chatTooltipsService:addToGroupCardStateObservable:locationPreferencesProvider:mapUpsellRequestService:userBirthdayProvider:saturnExperimentProvider:saturnStatusProvider:snapchattersSynchronousDataFetcher:streakMilestoneProvider:streakProvider:activeArrivalNotificationTracker:myAIExperimentServices:]
// Type encoding: @304@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288@296
// Implementation: 0x1064fb464

// -[SCChatConversationUpdater initWithPolaroidViewTransitionResolver:pluginManager:accessoryPluginManager:messageViewModelFactory:animationDataCoordinator:pageLoadMetricsEmitter:userSession:legacyChatTooltipsService:messagingExperimentService:featureSettingsService:customStoriesDataFetcher:plusFeatureGating:plusServices:locationContextFetcher:circumstanceEngine:chatEligibilityProvider:chatDisplayReadyLogger:storiesReplayManager:remoteStoriesDataProvider:viewModelGenerationPerformer:notificationOSSettingsRetriever:groupsCustomColorsFetcher:friendshipFlashbacksDataManager:chatTooltipsService:addToGroupCardStateObservable:locationPreferencesProvider:mapUpsellRequestService:userBirthdayProvider:saturnExperimentProvider:saturnStatusProvider:snapchattersSynchronousDataFetcher:streakMilestoneProvider:streakProvider:activeArrivalNotificationTracker:myAIExperimentServices:]
// Type encoding: @296@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288
// Implementation: 0x1064fc6e0

// -[SCChatConversationUpdater addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064fcb18

// -[SCChatConversationUpdater removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064fcbb0

// -[SCChatConversationUpdater regenerateViewModelsForContentSizeCategoryChange]
// Type encoding: v16@0:8
// Implementation: 0x1064fcbb8

// -[SCChatConversationUpdater _setActiveConversationId:configuration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1064fcc80

// -[SCChatConversationUpdater _fetchFriendLocationContextCaptions:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064fcd38

// -[SCChatConversationUpdater _observeUnviewedFriendshipFlashback:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064fcedc

// -[SCChatConversationUpdater _processFriendshipFlashbacksDataModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064fd074

// -[SCChatConversationUpdater _startObservingSaturnStatus:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064fd168

// -[SCChatConversationUpdater _stopObservingSaturnStatus]
// Type encoding: v16@0:8
// Implementation: 0x1064fd670

// -[SCChatConversationUpdater _handleSaturnStatusUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064fd6b4

// -[SCChatConversationUpdater _fetchPublicStoryForCampaign:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064fd820

// -[SCChatConversationUpdater _fetchPublicStoryForCampaignWithUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064fd9e0

// -[SCChatConversationUpdater _scheduleUpdateForPublicStoryFetched:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1064fdb54

// -[SCChatConversationUpdater _updatePublicStorySummaryInfo:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1064fdd2c

// -[SCChatConversationUpdater _fetchGroupLocationContextCaptionsIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064fdf98

// -[SCChatConversationUpdater _fetchLocationContextCaptionsForGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064fe0c8

// -[SCChatConversationUpdater unsetActiveConversation:token:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1064fe4d0

// -[SCChatConversationUpdater _unsetActiveConversation:token:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1064fe598

// -[SCChatConversationUpdater _processAddToGroupCardState:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064fe6cc

// -[SCChatConversationUpdater dataCoordinatorDidUpdateWithIdentifier:dataRequest:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1064fe820

// -[SCChatConversationUpdater conversationFetchDidFailForChatIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064feda4

// -[SCChatConversationUpdater _scheduleConversationUpdateWithToken:metricsTracker:reason:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x1064fee74

// -[SCChatConversationUpdater _createPendingRenderBlockForToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064ff0e0

// -[SCChatConversationUpdater _cancelCurrentUpdateBlockIfNecessaryForIncomingToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064ff2a8

// -[SCChatConversationUpdater _delayForUpdate]
// Type encoding: d16@0:8
// Implementation: 0x1064ff2dc

// -[SCChatConversationUpdater _conversationViewModelForActiveConversationData:configuration:token:trackingId:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1064ff3a4

// -[SCChatConversationUpdater _logNewViewModels:messageTypes:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106501824

// -[SCChatConversationUpdater _issueLoadingViewModelForConversationId:metadata:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065018f8

// -[SCChatConversationUpdater _regularViewModelWithMessage:previousMessage:previousViewModel:messageGroup:currentTime:conversation:conversationSubtypeMetadata:conversationParticipants:earlierContentExists:snapshot:parsingData:messageAnimationData:snapchattersData:postSnapActionsParams:currentUserSnapchatter:reactionMetadata:]
// Type encoding: @140@0:8@16@24@32@40@48@56@64@72B80@84@92@100@108@116@124@132
// Implementation: 0x106501a60

// -[SCChatConversationUpdater updateWithNewViewModel:token:metricsTracker:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106501ca8

// -[SCChatConversationUpdater _shouldDisplayChatDeleteMessageForConversation:]
// Type encoding: B24@0:8@16
// Implementation: 0x106501e60

// -[SCChatConversationUpdater _feedIdForConversationId:metadata:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106501f3c

// -[SCChatConversationUpdater _observeStreaksUpdatesForConversationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106502078

// -[SCChatConversationUpdater _handleStreakUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106502284

// -[SCChatConversationUpdater activeConversationId]
// Type encoding: @16@0:8
// Implementation: 0x1065023e0

// -[SCChatConversationUpdater clear]
// Type encoding: v16@0:8
// Implementation: 0x106502424

// -[SCChatConversationUpdater _handleAnimationUpdateRequestWithToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x106502508

// -[SCChatConversationUpdater _parseLocationContextResponse:withError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065025ac

// -[SCChatConversationUpdater _parseGroupLocationContextResponse:withError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10650296c

// -[SCChatConversationUpdater _resetLocationBannerEligibilityIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x106502a4c

// -[SCChatConversationUpdater _checkLocationUpsellEligible]
// Type encoding: v16@0:8
// Implementation: 0x106502b6c

// -[SCChatConversationUpdater _checkLocationSharingEligibilityForUpsellBanner:friendId:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106502e38

// -[SCChatConversationUpdater _subscribeToArrivalNotifActiveAlert]
// Type encoding: v16@0:8
// Implementation: 0x106502ee8

// -[SCChatConversationUpdater _handleArrivalNotifAlertUpdate:friendId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10650314c

// -[SCChatConversationUpdater _handleMerlinBioSubscriptionUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065032d0

// -[SCChatConversationUpdater _handleMerlinBioUpdate]
// Type encoding: v16@0:8
// Implementation: 0x1065034b4

// -[SCChatConversationUpdater _streakMilestoneInfoForConversation:recipientSnapchatter:currentUserSnapchatter:group:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106503664

// -[SCChatConversationUpdater _getCommunityDisplayName:]
// Type encoding: @24@0:8@16
// Implementation: 0x1065038f8

// -[SCChatConversationUpdater conversationViewModel]
// Type encoding: @16@0:8
// Implementation: 0x106503a2c

// -[SCChatConversationUpdater setConversationViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106503a38

// -[SCChatConversationUpdater activeConversationData]
// Type encoding: @16@0:8
// Implementation: 0x106503a40

// -[SCChatConversationUpdater setActiveConversationData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106503a4c

// -[SCChatConversationUpdater lastUpdateTime]
// Type encoding: d16@0:8
// Implementation: 0x106503a54

// -[SCChatConversationUpdater setLastUpdateTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x106503a5c

// -[SCChatConversationUpdater numberOfMessagesFromLastUpdate]
// Type encoding: Q16@0:8
// Implementation: 0x106503a64

// -[SCChatConversationUpdater setNumberOfMessagesFromLastUpdate:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106503a6c

// -[SCChatConversationUpdater configuration]
// Type encoding: @16@0:8
// Implementation: 0x106503a74

// -[SCChatConversationUpdater setConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x106503a80

// -[SCChatConversationUpdater metricsTracker]
// Type encoding: @16@0:8
// Implementation: 0x106503a88

// -[SCChatConversationUpdater setMetricsTracker:]
// Type encoding: v24@0:8@16
// Implementation: 0x106503a94

// -[SCChatConversationUpdater locationContextTimezoneInfo]
// Type encoding: @16@0:8
// Implementation: 0x106503a9c

// -[SCChatConversationUpdater setLocationContextTimezoneInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x106503aa8

// -[SCChatConversationUpdater locationContextHeaderLocation]
// Type encoding: @16@0:8
// Implementation: 0x106503ab0

// -[SCChatConversationUpdater setLocationContextHeaderLocation:]
// Type encoding: v24@0:8@16
// Implementation: 0x106503abc

// -[SCChatConversationUpdater locationContextHeaderTimestamp]
// Type encoding: d16@0:8
// Implementation: 0x106503ac4

// -[SCChatConversationUpdater setLocationContextHeaderTimestamp:]
// Type encoding: v24@0:8d16
// Implementation: 0x106503acc

// -[SCChatConversationUpdater locationContextHeaderApplicableUserIds]
// Type encoding: @16@0:8
// Implementation: 0x106503ad4

// -[SCChatConversationUpdater setLocationContextHeaderApplicableUserIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x106503ae0

// -[SCChatConversationUpdater actionmojiSelfieId]
// Type encoding: @16@0:8
// Implementation: 0x106503ae8

// -[SCChatConversationUpdater setActionmojiSelfieId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106503af4

// -[SCChatConversationUpdater isEligibleForLocationUpsellBanner]
// Type encoding: B16@0:8
// Implementation: 0x106503afc

// -[SCChatConversationUpdater setIsEligibleForLocationUpsellBanner:]
// Type encoding: v20@0:8B16
// Implementation: 0x106503b08

// -[SCChatConversationUpdater isEligibleForArrivalNotifUpsellBanner]
// Type encoding: B16@0:8
// Implementation: 0x106503b10

// -[SCChatConversationUpdater setIsEligibleForArrivalNotifUpsellBanner:]
// Type encoding: v20@0:8B16
// Implementation: 0x106503b1c

// -[SCChatConversationUpdater isSubscribedToMerlinBio]
// Type encoding: B16@0:8
// Implementation: 0x106503b24

// -[SCChatConversationUpdater setIsSubscribedToMerlinBio:]
// Type encoding: v20@0:8B16
// Implementation: 0x106503b30

// -[SCChatConversationUpdater friendshipFlashbacksDataModel]
// Type encoding: @16@0:8
// Implementation: 0x106503b38

// -[SCChatConversationUpdater setFriendshipFlashbacksDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106503b44

// -[SCChatConversationUpdater campaignPublicUserStorySummaryInfo]
// Type encoding: @16@0:8
// Implementation: 0x106503b4c

// -[SCChatConversationUpdater setCampaignPublicUserStorySummaryInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x106503b58

// -[SCChatConversationUpdater addToGroupCardState]
// Type encoding: @16@0:8
// Implementation: 0x106503b60

// -[SCChatConversationUpdater setAddToGroupCardState:]
// Type encoding: v24@0:8@16
// Implementation: 0x106503b6c

// -[SCChatConversationUpdater friendSaturnStatus]
// Type encoding: @16@0:8
// Implementation: 0x106503b74

// -[SCChatConversationUpdater setFriendSaturnStatus:]
// Type encoding: v24@0:8@16
// Implementation: 0x106503b80

// -[SCChatConversationUpdater friendSaturnUserId]
// Type encoding: @16@0:8
// Implementation: 0x106503b88

// -[SCChatConversationUpdater setFriendSaturnUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106503b94

// -[SCChatConversationUpdater .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106503b9c

// +[SCChatConversationUpdater addViewModel:toArray:updateCount:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106501db4

@end
