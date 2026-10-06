// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensSpotlightShareMessageRenderingPlugin
// Superclass: NSObject
// Address: 0x112ab2a88

@interface SCLensSpotlightShareMessageRenderingPlugin

// Property: presentingViewController; attributes: T@"UIViewController<SCPageNameLogging>",?,W,N
// Property: uiContainer; attributes: T@"<SCUIContainer>",?,W,N,V_uiContainer
// Property: activeConversationIdObservable; attributes: T@"SCObservable",&,N,V_activeConversationIdObservable
// Property: activeConversationInformationObservable; attributes: T@"SCObservable",&,N,V_activeConversationInformationObservable
// Property: renderingContextProvider; attributes: T@"<SCMessagePluginRenderingContextProviding>",?,W,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: multiDirectionUIContainer; attributes: T@"<SCUIContainer>",?,W,N,V_multiDirectionUIContainer

// -[SCLensSpotlightShareMessageRenderingPlugin initWithStorySharingComposerContextProvider:currentUserId:nglStudySettingsProvider:spotlightDataFetcher:publicProfileManager:spotlightShareSender:pageLauncher:thumbnailCoordinator:mediaCoordinator:discoverFeedDataMutator:snapchattersSynchronousDataFetcher:spotlightPlatformAnalyticsCreator:messagingMessageProvider:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112
// Implementation: 0x105f7dc44

// -[SCLensSpotlightShareMessageRenderingPlugin valdiContextParamsForMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f7e06c

// -[SCLensSpotlightShareMessageRenderingPlugin _valdiContextParamsForMessage:conversationParticipants:renderType:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x105f7e118

// -[SCLensSpotlightShareMessageRenderingPlugin _dataProviderWithMessage:compositeStoryId:senderUserId:renderType:]
// Type encoding: @48@0:8@16@24@32q40
// Implementation: 0x105f7e52c

// -[SCLensSpotlightShareMessageRenderingPlugin _insertDataProviderIntoConversationMap:forMessage:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105f7e674

// -[SCLensSpotlightShareMessageRenderingPlugin _insertMessage:forCompositeStoryId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105f7e714

// -[SCLensSpotlightShareMessageRenderingPlugin _handleConversationChange]
// Type encoding: v16@0:8
// Implementation: 0x105f7e774

// -[SCLensSpotlightShareMessageRenderingPlugin _lensIdFromMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f7e7e0

// -[SCLensSpotlightShareMessageRenderingPlugin identifier]
// Type encoding: @16@0:8
// Implementation: 0x105f7e91c

// -[SCLensSpotlightShareMessageRenderingPlugin pluginType]
// Type encoding: Q16@0:8
// Implementation: 0x105f7e94c

// -[SCLensSpotlightShareMessageRenderingPlugin setActiveConversationIdObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f7e954

// -[SCLensSpotlightShareMessageRenderingPlugin canForwardMessageFromActionMenu:focusedMessageContent:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105f7ea9c

// -[SCLensSpotlightShareMessageRenderingPlugin canForwardMessageFromCTA:]
// Type encoding: B24@0:8@16
// Implementation: 0x105f7eadc

// -[SCLensSpotlightShareMessageRenderingPlugin isSharingRestrictedForMessage:]
// Type encoding: B24@0:8@16
// Implementation: 0x105f7eb1c

// -[SCLensSpotlightShareMessageRenderingPlugin forwardParamsForMessage:focusedMessageContent:conversationParticipants:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105f7ebb0

// -[SCLensSpotlightShareMessageRenderingPlugin forwardMessage:focusedMessageContent:conversations:recipientCount:completion:]
// Type encoding: v56@0:8@16@24@32Q40@?48
// Implementation: 0x105f7ee50

// -[SCLensSpotlightShareMessageRenderingPlugin actionHandlerDidHandleHeaderTap:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f7f1c8

// -[SCLensSpotlightShareMessageRenderingPlugin actionHandler:didHandleStoryTap:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105f7f208

// -[SCLensSpotlightShareMessageRenderingPlugin _launchSpotlightFeedForMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f7f248

// -[SCLensSpotlightShareMessageRenderingPlugin _multipleShareConfigurationForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f7f3f4

// -[SCLensSpotlightShareMessageRenderingPlugin _discoverFeedStoryFromDataProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f7f95c

// -[SCLensSpotlightShareMessageRenderingPlugin dismissPresentedView]
// Type encoding: v16@0:8
// Implementation: 0x105f7f9b4

// -[SCLensSpotlightShareMessageRenderingPlugin valdiContextParamsForQuotedMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f7f9b8

// -[SCLensSpotlightShareMessageRenderingPlugin valdiContextParamsForQuotedMessagePreview:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f7f9c0

// -[SCLensSpotlightShareMessageRenderingPlugin quotedRenderingStyleForMessage:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105f7f9c8

// -[SCLensSpotlightShareMessageRenderingPlugin shouldDisplayContextualHeaderForMessage:]
// Type encoding: B24@0:8@16
// Implementation: 0x105f7f9d0

// -[SCLensSpotlightShareMessageRenderingPlugin contextualHeaderForMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f7f9d8

// -[SCLensSpotlightShareMessageRenderingPlugin quotedSupportEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105f7fb0c

// -[SCLensSpotlightShareMessageRenderingPlugin spotlightShareStoryFor:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f7fb14

// -[SCLensSpotlightShareMessageRenderingPlugin activeConversationIdObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f7fc5c

// -[SCLensSpotlightShareMessageRenderingPlugin activeConversationInformationObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f7fc64

// -[SCLensSpotlightShareMessageRenderingPlugin setActiveConversationInformationObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f7fc6c

// -[SCLensSpotlightShareMessageRenderingPlugin uiContainer]
// Type encoding: @16@0:8
// Implementation: 0x105f7fc9c

// -[SCLensSpotlightShareMessageRenderingPlugin setUiContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f7fcb4

// -[SCLensSpotlightShareMessageRenderingPlugin multiDirectionUIContainer]
// Type encoding: @16@0:8
// Implementation: 0x105f7fcc0

// -[SCLensSpotlightShareMessageRenderingPlugin setMultiDirectionUIContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f7fcd8

// -[SCLensSpotlightShareMessageRenderingPlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f7fce4

@end
