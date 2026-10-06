// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPremiumStoryShareMessagePlugin
// Superclass: NSObject
// Address: 0x112ab3118

@interface SCPremiumStoryShareMessagePlugin

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
// Property: multiDirectionUIContainer; attributes: T@"<SCUIContainer>",?,W,N,V_multiDirectionUIContainer
// Property: forwardingDelegate; attributes: T@"<SCMessageTypeForwardablePluginDelegate>",W,N,V_forwardingDelegate

// -[SCPremiumStoryShareMessagePlugin initWithStorySharingServices:networkRequester:bitmojiFriendAvatarProvider:bitmojiAvatarProvider:snapchattersDataFetcher:networkConnectivityMonitor:locationProvider:adConfigProvider:unifiedPublicProfilesPresenterScopeExposer:creatorSettingsMutator:creatorSettingsFetcher:creatorSettingsTracker:cachedReadReceiptViewStateProvider:readReceiptCoordinator:grapheneRegistry:circumstanceEngine:discoverOperaPluginCreator:storiesConfigProvider:discoverFeedDataFetcher:viewModelGenerator:premiumStoryShareSender:lazyDiscoverFeedEventsController:chatContentDelivery:composerStoryAutoAdvanceHandlerFactory:discoverFeedDataMutator:adRenderDataParser:spotlightScopeExposer:spotlightScopeServices:messagingMessageProvider:]
// Type encoding: @248@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240
// Implementation: 0x105f98468

// -[SCPremiumStoryShareMessagePlugin valdiContextParamsForMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f98af0

// -[SCPremiumStoryShareMessagePlugin _valdiContextParamsForMessage:conversationParticipants:renderForQuotedMessage:renderForQuotedMessagePreview:]
// Type encoding: @40@0:8@16@24B32B36
// Implementation: 0x105f98afc

// -[SCPremiumStoryShareMessagePlugin identifier]
// Type encoding: @16@0:8
// Implementation: 0x105f98fe0

// -[SCPremiumStoryShareMessagePlugin pluginType]
// Type encoding: Q16@0:8
// Implementation: 0x105f99010

// -[SCPremiumStoryShareMessagePlugin setActiveConversationIdObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f99018

// -[SCPremiumStoryShareMessagePlugin _handleConversationChange]
// Type encoding: v16@0:8
// Implementation: 0x105f99160

// -[SCPremiumStoryShareMessagePlugin dismissPresentedView]
// Type encoding: v16@0:8
// Implementation: 0x105f991ec

// -[SCPremiumStoryShareMessagePlugin canForwardMessageFromActionMenu:focusedMessageContent:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105f993ec

// -[SCPremiumStoryShareMessagePlugin canForwardMessageFromCTA:]
// Type encoding: B24@0:8@16
// Implementation: 0x105f994b0

// -[SCPremiumStoryShareMessagePlugin forwardParamsForMessage:focusedMessageContent:conversationParticipants:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105f99558

// -[SCPremiumStoryShareMessagePlugin forwardMessage:focusedMessageContent:conversations:recipientCount:completion:]
// Type encoding: v56@0:8@16@24@32Q40@?48
// Implementation: 0x105f996ac

// -[SCPremiumStoryShareMessagePlugin hideForwardButtonForCacheId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f999a0

// -[SCPremiumStoryShareMessagePlugin valdiContextParamsForQuotedMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f99a3c

// -[SCPremiumStoryShareMessagePlugin valdiContextParamsForQuotedMessagePreview:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f99b30

// -[SCPremiumStoryShareMessagePlugin quotedRenderingStyleForMessage:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105f99c24

// -[SCPremiumStoryShareMessagePlugin shouldDisplayContextualHeaderForMessage:]
// Type encoding: B24@0:8@16
// Implementation: 0x105f99c2c

// -[SCPremiumStoryShareMessagePlugin contextualHeaderForMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f99cc8

// -[SCPremiumStoryShareMessagePlugin _storyShareModelForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f99dc0

// -[SCPremiumStoryShareMessagePlugin _storyForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f99e88

// -[SCPremiumStoryShareMessagePlugin _storyThumbnailUrlForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f99f50

// -[SCPremiumStoryShareMessagePlugin activeConversationIdObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f9a018

// -[SCPremiumStoryShareMessagePlugin activeConversationInformationObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f9a020

// -[SCPremiumStoryShareMessagePlugin setActiveConversationInformationObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f9a028

// -[SCPremiumStoryShareMessagePlugin operaPresenterDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105f9a058

// -[SCPremiumStoryShareMessagePlugin setOperaPresenterDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f9a070

// -[SCPremiumStoryShareMessagePlugin presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x105f9a07c

// -[SCPremiumStoryShareMessagePlugin setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f9a094

// -[SCPremiumStoryShareMessagePlugin uiContainer]
// Type encoding: @16@0:8
// Implementation: 0x105f9a0a0

// -[SCPremiumStoryShareMessagePlugin setUiContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f9a0b8

// -[SCPremiumStoryShareMessagePlugin forwardingDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105f9a0c4

// -[SCPremiumStoryShareMessagePlugin setForwardingDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f9a0dc

// -[SCPremiumStoryShareMessagePlugin multiDirectionUIContainer]
// Type encoding: @16@0:8
// Implementation: 0x105f9a0e8

// -[SCPremiumStoryShareMessagePlugin setMultiDirectionUIContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f9a100

// -[SCPremiumStoryShareMessagePlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f9a10c

@end
