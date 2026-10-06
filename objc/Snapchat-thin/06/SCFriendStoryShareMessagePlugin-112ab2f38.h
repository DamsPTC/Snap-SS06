// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendStoryShareMessagePlugin
// Superclass: NSObject
// Address: 0x112ab2f38

@interface SCFriendStoryShareMessagePlugin

// Property: presentingViewController; attributes: T@"UIViewController<SCPageNameLogging>",?,W,N,V_presentingViewController
// Property: uiContainer; attributes: T@"<SCUIContainer>",?,W,N,V_uiContainer
// Property: activeConversationIdObservable; attributes: T@"SCObservable",&,N,V_activeConversationIdObservable
// Property: activeConversationInformationObservable; attributes: T@"SCObservable",&,N,V_activeConversationInformationObservable
// Property: renderingContextProvider; attributes: T@"<SCMessagePluginRenderingContextProviding>",?,W,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: operaPresenterDelegate; attributes: T@"<SCOperaPresenterDelegate>",W,N,V_operaPresenterDelegate
// Property: forwardingDelegate; attributes: T@"<SCMessageTypeForwardablePluginDelegate>",W,N,V_forwardingDelegate
// Property: multiDirectionUIContainer; attributes: T@"<SCUIContainer>",?,W,N

// -[SCFriendStoryShareMessagePlugin initWithStorySharingServices:sharedStorySnapManager:storyShareSender:friendProfileScopeExposer:operaPluginCreator:discoverFeedFriendStoriesDataCoordinator:playbackDataProvider:myStoriesPlaybackDataProvider:autoAdvancePlaybackDataProvider:optInDataProvider:userSessionScope:myStoriesDataCoordinator:contextOperaPluginProvider:storiesMediaCoordinator:snapchattersSynchronousDataFetcher:externalLinkSendingService:saveFriendStoryOperaPluginProvider:playableViewModelGenerator:discoverDataFetcher:circumstanceEngine:communitiesOnboardingScopeExposer:simpleContentFetcher:storiesConfigProvider:spotlightShareSender:spotlightPlatformAnalyticsCreator:storiesReadReceiptCoordinator:notificationOSSettingsRetriever:offPlatformShareServices:storiesNetworkRequester:networkConnectivityMonitor:locationProvider:discoverFeedDataMutator:snapVideoFilterFactory:previewURLVideoProvider:chatMediaFetcher:chatContentDelivery:adRenderDataParser:musicContentRestrictionServices:shareNotificationService:userBlizzardLogger:storiesUsageLogger:blizzardLogger:imageDownloader:discoverFeedEventsController:discoverFeedInteractionHistoryManager:remixOperaPluginProvider:unlockableViewTracker:snapchatterUserInfoProvider:playbackMediaResolver:playbackAssetRepositoryFactory:offPlatformLinkGenerationService:snapchatterObservableRepository:storiesGrapheneMetricsEmitter:grapheneRegistry:legacyStoriesTooltipsService:repostMentionScopeExposer:repostMentionScopeServices:messagingMessageProvider:]
// Type encoding: @480@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288@296@304@312@320@328@336@344@352@360@368@376@384@392@400@408@416@424@432@440@448@456@464@472
// Implementation: 0x105f8e400

// -[SCFriendStoryShareMessagePlugin valdiContextParamsForMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f8eff4

// -[SCFriendStoryShareMessagePlugin _valdiContextParamsForMessage:storyId:conversationParticipants:renderForQuotedMessage:renderForQuotedMessagePreview:]
// Type encoding: @48@0:8@16@24@32B40B44
// Implementation: 0x105f8f108

// -[SCFriendStoryShareMessagePlugin _dataProviderForStoryId:message:isGroup:renderForQuotedMessage:]
// Type encoding: @40@0:8@16@24B32B36
// Implementation: 0x105f8f488

// -[SCFriendStoryShareMessagePlugin _actionHandlerWithMessage:dataProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f8f60c

// -[SCFriendStoryShareMessagePlugin _playbackDataProviderForStoryId:message:isGroup:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x105f8f6c8

// -[SCFriendStoryShareMessagePlugin identifier]
// Type encoding: @16@0:8
// Implementation: 0x105f8f8e0

// -[SCFriendStoryShareMessagePlugin pluginType]
// Type encoding: Q16@0:8
// Implementation: 0x105f8f910

// -[SCFriendStoryShareMessagePlugin setActiveConversationIdObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f8f918

// -[SCFriendStoryShareMessagePlugin _handleConversationChange]
// Type encoding: v16@0:8
// Implementation: 0x105f8fa60

// -[SCFriendStoryShareMessagePlugin canForwardMessageFromActionMenu:focusedMessageContent:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105f8fae4

// -[SCFriendStoryShareMessagePlugin canForwardMessageFromCTA:]
// Type encoding: B24@0:8@16
// Implementation: 0x105f8fc10

// -[SCFriendStoryShareMessagePlugin forwardParamsForMessage:focusedMessageContent:conversationParticipants:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105f8fd28

// -[SCFriendStoryShareMessagePlugin forwardMessage:focusedMessageContent:conversations:recipientCount:completion:]
// Type encoding: v56@0:8@16@24@32Q40@?48
// Implementation: 0x105f8ff74

// -[SCFriendStoryShareMessagePlugin remixConfigurationForMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f90234

// -[SCFriendStoryShareMessagePlugin _isMediaAvailableForRemix:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f90858

// -[SCFriendStoryShareMessagePlugin _remixConfigurationForStoryId:posterUserId:mediaId:mediaType:contextHint:]
// Type encoding: @56@0:8@16@24@32q40@48
// Implementation: 0x105f90a3c

// -[SCFriendStoryShareMessagePlugin userIdForAddFriendCta:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f90c1c

// -[SCFriendStoryShareMessagePlugin valdiContextParamsForQuotedMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f90d88

// -[SCFriendStoryShareMessagePlugin valdiContextParamsForQuotedMessagePreview:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f90eb0

// -[SCFriendStoryShareMessagePlugin quotedRenderingStyleForMessage:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105f90fd8

// -[SCFriendStoryShareMessagePlugin shouldDisplayContextualHeaderForMessage:]
// Type encoding: B24@0:8@16
// Implementation: 0x105f90fe0

// -[SCFriendStoryShareMessagePlugin contextualHeaderForMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f9112c

// -[SCFriendStoryShareMessagePlugin _shouldDisplayStoryMentionHeaderForMessage:shareContent:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105f9135c

// -[SCFriendStoryShareMessagePlugin _shouldDisplayGroupStoryHeaderForShareContent:]
// Type encoding: B24@0:8@16
// Implementation: 0x105f91490

// -[SCFriendStoryShareMessagePlugin _isMentionRepostForMessage:]
// Type encoding: B24@0:8@16
// Implementation: 0x105f91534

// -[SCFriendStoryShareMessagePlugin _isMentionRepostForStoryId:]
// Type encoding: B24@0:8@16
// Implementation: 0x105f915fc

// -[SCFriendStoryShareMessagePlugin _friendStorySharePlatformAnalyticsForDestinationInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f91788

// -[SCFriendStoryShareMessagePlugin _thumbnailObservableWithThumbnailDownloadInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f91898

// -[SCFriendStoryShareMessagePlugin didUpdateStoryVisibilityForStoryId:isForwardable:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105f91b84

// -[SCFriendStoryShareMessagePlugin _isStoryViewable:]
// Type encoding: B24@0:8@16
// Implementation: 0x105f91cbc

// -[SCFriendStoryShareMessagePlugin freezeForwardButtonUpdatesForStoryId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f91d2c

// -[SCFriendStoryShareMessagePlugin dismissPresentedView]
// Type encoding: v16@0:8
// Implementation: 0x105f91d74

// -[SCFriendStoryShareMessagePlugin activeConversationIdObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f91f1c

// -[SCFriendStoryShareMessagePlugin activeConversationInformationObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f91f24

// -[SCFriendStoryShareMessagePlugin setActiveConversationInformationObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f91f2c

// -[SCFriendStoryShareMessagePlugin uiContainer]
// Type encoding: @16@0:8
// Implementation: 0x105f91f5c

// -[SCFriendStoryShareMessagePlugin setUiContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f91f74

// -[SCFriendStoryShareMessagePlugin presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x105f91f80

// -[SCFriendStoryShareMessagePlugin setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f91f98

// -[SCFriendStoryShareMessagePlugin operaPresenterDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105f91fa4

// -[SCFriendStoryShareMessagePlugin setOperaPresenterDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f91fbc

// -[SCFriendStoryShareMessagePlugin forwardingDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105f91fc8

// -[SCFriendStoryShareMessagePlugin setForwardingDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f91fe0

// -[SCFriendStoryShareMessagePlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f91fec

@end
