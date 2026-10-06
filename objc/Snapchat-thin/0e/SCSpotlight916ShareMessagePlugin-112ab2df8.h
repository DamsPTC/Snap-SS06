// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlight916ShareMessagePlugin
// Superclass: NSObject
// Address: 0x112ab2df8

@interface SCSpotlight916ShareMessagePlugin

// Property: presentingViewController; attributes: T@"UIViewController<SCPageNameLogging>",?,W,N,V_presentingViewController
// Property: uiContainer; attributes: T@"<SCUIContainer>",?,W,N,V_uiContainer
// Property: activeConversationIdObservable; attributes: T@"SCObservable",&,N,V_activeConversationIdObservable
// Property: activeConversationInformationObservable; attributes: T@"SCObservable",&,N,V_activeConversationInformationObservable
// Property: renderingContextProvider; attributes: T@"<SCMessagePluginRenderingContextProviding>",?,W,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: multiDirectionUIContainer; attributes: T@"<SCUIContainer>",?,W,N,V_multiDirectionUIContainer
// Property: messageViewEvents; attributes: T@"SCObservable",&,N,V_messageViewEvents
// Property: visibleMessageIds; attributes: T@"SCObservable",?,&,N,V_visibleMessageIds
// Property: messageListScrollObservable; attributes: T@"SCObservable",?,&,N
// Property: messageVisibilityFractionProvider; attributes: T@"<SCMessageVisibilityFractionProviding>",?,W,N

// -[SCSpotlight916ShareMessagePlugin initWithStorySharingServices:currentUserId:spotlightDataFetcher:publicProfileManager:spotlightShareSender:spotlightScopeExposer:spotlightScopeServices:thumbnailCoordinator:mediaCoordinator:autoPlayEventsLogger:discoverFeedDataMutator:snapchattersSynchronousDataFetcher:spotlightPlatformAnalyticsCreator:groupFetcher:storiesConfigProvider:messagingMessageProvider:currentPageTracker:circumstanceEngine:]
// Type encoding: @160@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152
// Implementation: 0x105f82d1c

// -[SCSpotlight916ShareMessagePlugin valdiContextParamsForMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f832bc

// -[SCSpotlight916ShareMessagePlugin setVisibleMessageIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f83360

// -[SCSpotlight916ShareMessagePlugin _messageVisibilityObservableForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f83390

// -[SCSpotlight916ShareMessagePlugin _isLastMessageObservableForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f834c4

// -[SCSpotlight916ShareMessagePlugin _isLatestSpotlightShareObservableForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f836c0

// -[SCSpotlight916ShareMessagePlugin _lastMessageIdObservableFromActiveConversationInformationObservable:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f8381c

// -[SCSpotlight916ShareMessagePlugin _autoPlayPreviewEligibilityObservableForMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f839b4

// -[SCSpotlight916ShareMessagePlugin _valdiContextParamsForMessage:conversationParticipants:renderType:autoPlayPreviewEnabled:]
// Type encoding: @44@0:8@16@24q32B40
// Implementation: 0x105f83c7c

// -[SCSpotlight916ShareMessagePlugin _contextParamsWithProvider:pluginMessage:message:autoPlayPreviewEligibilityObservable:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x105f84264

// -[SCSpotlight916ShareMessagePlugin _autoPlayPreviewSessionDidOpenForMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f84644

// -[SCSpotlight916ShareMessagePlugin _autoPlayPreviewSessionDidCloseForMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f8475c

// -[SCSpotlight916ShareMessagePlugin _autoPlayMediaPlaybackDidStartForMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f84870

// -[SCSpotlight916ShareMessagePlugin _autoPlayMediaPlaybackDidPauseForMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f849e4

// -[SCSpotlight916ShareMessagePlugin _collectionViewAutoPlayItemIdForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f84aec

// -[SCSpotlight916ShareMessagePlugin _collectionViewAutoPlayLoggingInfoForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f84ba0

// -[SCSpotlight916ShareMessagePlugin _autoPlayPreviewEnabledForMessage:conversationParticipants:isLatestSpotlightShare:isVisible:]
// Type encoding: B40@0:8@16@24B32B36
// Implementation: 0x105f84c2c

// -[SCSpotlight916ShareMessagePlugin _spotlightChatPreviewAutoPlayTreatment]
// Type encoding: q16@0:8
// Implementation: 0x105f84cc8

// -[SCSpotlight916ShareMessagePlugin _dataProviderWithMessage:compositeStoryId:senderUserId:renderType:]
// Type encoding: @48@0:8@16@24@32q40
// Implementation: 0x105f84d10

// -[SCSpotlight916ShareMessagePlugin _insertDataProviderIntoConversationMap:forMessage:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105f84e58

// -[SCSpotlight916ShareMessagePlugin _insertMessage:forCompositeStoryId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105f84ef8

// -[SCSpotlight916ShareMessagePlugin _insertInChatContextParamsForMessage:conversationParticipants:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105f84f98

// -[SCSpotlight916ShareMessagePlugin _recordRegularSpotlightShareMessage:timestamp:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f85488

// -[SCSpotlight916ShareMessagePlugin _recomputeLatestSpotlightShareMessageId]
// Type encoding: @16@0:8
// Implementation: 0x105f85518

// -[SCSpotlight916ShareMessagePlugin _emitLatestSpotlightShareMessageId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f856f8

// -[SCSpotlight916ShareMessagePlugin _handleConversationChange]
// Type encoding: v16@0:8
// Implementation: 0x105f85798

// -[SCSpotlight916ShareMessagePlugin identifier]
// Type encoding: @16@0:8
// Implementation: 0x105f85924

// -[SCSpotlight916ShareMessagePlugin pluginType]
// Type encoding: Q16@0:8
// Implementation: 0x105f85954

// -[SCSpotlight916ShareMessagePlugin setActiveConversationIdObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f8595c

// -[SCSpotlight916ShareMessagePlugin setActiveConversationInformationObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f85aa4

// -[SCSpotlight916ShareMessagePlugin _lensIdFromMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f85c60

// -[SCSpotlight916ShareMessagePlugin _isSpotlightShareMessage:]
// Type encoding: B24@0:8@16
// Implementation: 0x105f85d9c

// -[SCSpotlight916ShareMessagePlugin canForwardMessageFromActionMenu:focusedMessageContent:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105f85df0

// -[SCSpotlight916ShareMessagePlugin canForwardMessageFromCTA:]
// Type encoding: B24@0:8@16
// Implementation: 0x105f85df4

// -[SCSpotlight916ShareMessagePlugin isSharingRestrictedForMessage:]
// Type encoding: B24@0:8@16
// Implementation: 0x105f85df8

// -[SCSpotlight916ShareMessagePlugin forwardParamsForMessage:focusedMessageContent:conversationParticipants:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105f85e74

// -[SCSpotlight916ShareMessagePlugin forwardMessage:focusedMessageContent:conversations:recipientCount:completion:]
// Type encoding: v56@0:8@16@24@32Q40@?48
// Implementation: 0x105f86114

// -[SCSpotlight916ShareMessagePlugin actionHandlerDidHandleHeaderTap:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f8648c

// -[SCSpotlight916ShareMessagePlugin actionHandler:didHandleStoryTap:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105f864cc

// -[SCSpotlight916ShareMessagePlugin _launchSpotlightFeedForMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f8650c

// -[SCSpotlight916ShareMessagePlugin _multipleShareConfigurationForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f86720

// -[SCSpotlight916ShareMessagePlugin _singleShareConfigurationForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f86ca0

// -[SCSpotlight916ShareMessagePlugin _discoverFeedStoryFromDataProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f8715c

// -[SCSpotlight916ShareMessagePlugin dismissPresentedView]
// Type encoding: v16@0:8
// Implementation: 0x105f871b4

// -[SCSpotlight916ShareMessagePlugin valdiContextParamsForQuotedMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f871fc

// -[SCSpotlight916ShareMessagePlugin valdiContextParamsForQuotedMessagePreview:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f87208

// -[SCSpotlight916ShareMessagePlugin quotedRenderingStyleForMessage:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105f87214

// -[SCSpotlight916ShareMessagePlugin removeSpotlightScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f8721c

// -[SCSpotlight916ShareMessagePlugin shouldDisplayContextualHeaderForMessage:]
// Type encoding: B24@0:8@16
// Implementation: 0x105f872d4

// -[SCSpotlight916ShareMessagePlugin contextualHeaderForMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f872dc

// -[SCSpotlight916ShareMessagePlugin quotedSupportEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105f87410

// -[SCSpotlight916ShareMessagePlugin spotlightShareStoryFor:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f87418

// -[SCSpotlight916ShareMessagePlugin activeConversationIdObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f87560

// -[SCSpotlight916ShareMessagePlugin activeConversationInformationObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f87568

// -[SCSpotlight916ShareMessagePlugin uiContainer]
// Type encoding: @16@0:8
// Implementation: 0x105f87570

// -[SCSpotlight916ShareMessagePlugin setUiContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f87588

// -[SCSpotlight916ShareMessagePlugin multiDirectionUIContainer]
// Type encoding: @16@0:8
// Implementation: 0x105f87594

// -[SCSpotlight916ShareMessagePlugin setMultiDirectionUIContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f875ac

// -[SCSpotlight916ShareMessagePlugin presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x105f875b8

// -[SCSpotlight916ShareMessagePlugin setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f875d0

// -[SCSpotlight916ShareMessagePlugin messageViewEvents]
// Type encoding: @16@0:8
// Implementation: 0x105f875dc

// -[SCSpotlight916ShareMessagePlugin setMessageViewEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f875e4

// -[SCSpotlight916ShareMessagePlugin visibleMessageIds]
// Type encoding: @16@0:8
// Implementation: 0x105f87614

// -[SCSpotlight916ShareMessagePlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f8761c

@end
