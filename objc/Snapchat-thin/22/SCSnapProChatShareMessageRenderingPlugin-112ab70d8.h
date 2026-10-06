// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapProChatShareMessageRenderingPlugin
// Superclass: NSObject
// Address: 0x112ab70d8

@interface SCSnapProChatShareMessageRenderingPlugin

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

// -[SCSnapProChatShareMessageRenderingPlugin initWithUserSession:storySharingServices:navigationServices:contextOperaPluginProvider:snapProProfilesProvider:circumstanceEngine:discoverOperaPluginCreator:shareMessageSender:resourceDownloader:unifiedPublicProfilesPresenterScopeExposer:safetyReportScopeExposer:storySharePlaybackScopeExposer:viewModelGenerator:autoAdvancePlaybackDataProvider:storiesNetworkRequester:discoverFeedDataFetcher:discoverFeedDataMutator:notificationPool:networkConnectivityMonitor:locationProvider:storiesReadReceiptCoordinator:storiesConfigProvider:notificationOSSettingsRetriever:composerStoryAutoAdvanceHandlerFactory:snapchattersSynchronousDataFetcher:musicContentRestrictionServices:spotlightShareSender:spotlightPlatformAnalyticsCreator:pageLauncher:discoverFeedFriendStoriesDataCoordinator:optInDataProvider:mediaCoordinator:contentProductPlaybackExposer:contentProductPlaybackScopeServices:storiesGrapheneMetricsEmitter:adRenderDataParser:remoteSnapchattersDataFetcher:imageDownloader:grapheneRegistry:snapchatterObservableRepository:storiesCachedSummaryInfoProvider:lazyDiscoverFeedEventsController:storiesUsageLogger:lazyDiscoverFeedInteractionHistoryManager:messagingMessageProvider:]
// Type encoding: @376@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288@296@304@312@320@328@336@344@352@360@368
// Implementation: 0x105fd0120

// -[SCSnapProChatShareMessageRenderingPlugin identifier]
// Type encoding: @16@0:8
// Implementation: 0x105fd0a00

// -[SCSnapProChatShareMessageRenderingPlugin pluginType]
// Type encoding: Q16@0:8
// Implementation: 0x105fd0a30

// -[SCSnapProChatShareMessageRenderingPlugin valdiContextParamsForMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105fd0a38

// -[SCSnapProChatShareMessageRenderingPlugin _valdiContextParamsForMessage:pluginMessage:conversationParticipants:renderForQuotedMessage:renderForQuotedMessagePreview:]
// Type encoding: @48@0:8@16@24@32B40B44
// Implementation: 0x105fd0b00

// -[SCSnapProChatShareMessageRenderingPlugin setActiveConversationIdObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fd0ca0

// -[SCSnapProChatShareMessageRenderingPlugin canForwardMessageFromActionMenu:focusedMessageContent:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105fd0de8

// -[SCSnapProChatShareMessageRenderingPlugin canForwardMessageFromCTA:]
// Type encoding: B24@0:8@16
// Implementation: 0x105fd0f0c

// -[SCSnapProChatShareMessageRenderingPlugin isSharingRestrictedForMessage:]
// Type encoding: B24@0:8@16
// Implementation: 0x105fd101c

// -[SCSnapProChatShareMessageRenderingPlugin forwardParamsForMessage:focusedMessageContent:conversationParticipants:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105fd10f4

// -[SCSnapProChatShareMessageRenderingPlugin forwardMessage:focusedMessageContent:conversations:recipientCount:completion:]
// Type encoding: v56@0:8@16@24@32Q40@?48
// Implementation: 0x105fd12bc

// -[SCSnapProChatShareMessageRenderingPlugin valdiContextParamsForQuotedMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105fd1630

// -[SCSnapProChatShareMessageRenderingPlugin valdiContextParamsForQuotedMessagePreview:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105fd177c

// -[SCSnapProChatShareMessageRenderingPlugin quotedRenderingStyleForMessage:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105fd1890

// -[SCSnapProChatShareMessageRenderingPlugin shouldDisplayContextualHeaderForMessage:]
// Type encoding: B24@0:8@16
// Implementation: 0x105fd1898

// -[SCSnapProChatShareMessageRenderingPlugin contextualHeaderForMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105fd1914

// -[SCSnapProChatShareMessageRenderingPlugin _getContextProviderForSnapId:snapProUserId:message:conversationParticipants:renderForQuotedMessage:renderForQuotedMessagePreview:]
// Type encoding: @56@0:8@16@24@32@40B48B52
// Implementation: 0x105fd19fc

// -[SCSnapProChatShareMessageRenderingPlugin _handleConversationChange]
// Type encoding: v16@0:8
// Implementation: 0x105fd1f70

// -[SCSnapProChatShareMessageRenderingPlugin _thumbnailObservableWithThumbnailUrlObservable:]
// Type encoding: @24@0:8@16
// Implementation: 0x105fd1fcc

// -[SCSnapProChatShareMessageRenderingPlugin _storyForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x105fd2340

// -[SCSnapProChatShareMessageRenderingPlugin didHideForwardButtonForStoryId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fd23e8

// -[SCSnapProChatShareMessageRenderingPlugin dismissPresentedView]
// Type encoding: v16@0:8
// Implementation: 0x105fd2484

// -[SCSnapProChatShareMessageRenderingPlugin activeConversationInformationObservable]
// Type encoding: @16@0:8
// Implementation: 0x105fd262c

// -[SCSnapProChatShareMessageRenderingPlugin setActiveConversationInformationObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fd2634

// -[SCSnapProChatShareMessageRenderingPlugin activeConversationIdObservable]
// Type encoding: @16@0:8
// Implementation: 0x105fd2664

// -[SCSnapProChatShareMessageRenderingPlugin uiContainer]
// Type encoding: @16@0:8
// Implementation: 0x105fd266c

// -[SCSnapProChatShareMessageRenderingPlugin setUiContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fd2684

// -[SCSnapProChatShareMessageRenderingPlugin presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x105fd2690

// -[SCSnapProChatShareMessageRenderingPlugin setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fd26a8

// -[SCSnapProChatShareMessageRenderingPlugin operaPresenterDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105fd26b4

// -[SCSnapProChatShareMessageRenderingPlugin setOperaPresenterDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fd26cc

// -[SCSnapProChatShareMessageRenderingPlugin forwardingDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105fd26d8

// -[SCSnapProChatShareMessageRenderingPlugin setForwardingDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fd26f0

// -[SCSnapProChatShareMessageRenderingPlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105fd26fc

@end
