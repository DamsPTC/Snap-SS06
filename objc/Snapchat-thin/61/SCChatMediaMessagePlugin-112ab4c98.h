// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatMediaMessagePlugin
// Superclass: NSObject
// Address: 0x112ab4c98

@interface SCChatMediaMessagePlugin

// Property: presentingViewController; attributes: T@"UIViewController<SCPageNameLogging>",?,W,N
// Property: uiContainer; attributes: T@"<SCUIContainer>",?,W,N,V_uiContainer
// Property: activeConversationIdObservable; attributes: T@"SCObservable",&,N,V_activeConversationIdObservable
// Property: activeConversationInformationObservable; attributes: T@"SCObservable",&,N,V_activeConversationInformationObservable
// Property: renderingContextProvider; attributes: T@"<SCMessagePluginRenderingContextProviding>",?,W,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: playbackPresenter; attributes: T@"<SCMessagePluginPlaybackPresenting>",W,N,V_playbackPresenter
// Property: messageViewEvents; attributes: T@"SCObservable",&,N,V_messageViewEvents
// Property: visibleMessageIds; attributes: T@"SCObservable",?,&,N,V_visibleMessageIds
// Property: messageListScrollObservable; attributes: T@"SCObservable",?,&,N
// Property: messageVisibilityFractionProvider; attributes: T@"<SCMessageVisibilityFractionProviding>",?,W,N
// Property: multiDirectionUIContainer; attributes: T@"<SCUIContainer>",?,W,N

// -[SCChatMediaMessagePlugin initWithCurrentUserId:conversationActionHandler:chatContentDelivery:chatMediaFetcher:valdiRuntimeProvider:playerProvider:drawerMediaSender:composerChatMediaVideoProvider:chatMessageDisplayStateLogger:messagingExperimentService:messagingMessageProvider:configProvider:scwStateManager:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112
// Implementation: 0x105fa5194

// -[SCChatMediaMessagePlugin valdiContextParamsForMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105fa54b4

// -[SCChatMediaMessagePlugin setActiveConversationIdObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fa6098

// -[SCChatMediaMessagePlugin identifier]
// Type encoding: @16@0:8
// Implementation: 0x105fa62f4

// -[SCChatMediaMessagePlugin pluginType]
// Type encoding: Q16@0:8
// Implementation: 0x105fa6324

// -[SCChatMediaMessagePlugin valdiContextParamsForQuotedMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105fa632c

// -[SCChatMediaMessagePlugin valdiContextParamsForQuotedMessagePreview:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105fa6334

// -[SCChatMediaMessagePlugin quotedRenderingStyleForMessage:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105fa633c

// -[SCChatMediaMessagePlugin shouldDisplayContextualHeaderForMessage:]
// Type encoding: B24@0:8@16
// Implementation: 0x105fa6354

// -[SCChatMediaMessagePlugin contextualHeaderForMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105fa6448

// -[SCChatMediaMessagePlugin dismissPresentedView]
// Type encoding: v16@0:8
// Implementation: 0x105fa6714

// -[SCChatMediaMessagePlugin savableDataModelsForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x105fa671c

// -[SCChatMediaMessagePlugin canForwardMessageFromActionMenu:focusedMessageContent:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105fa68b8

// -[SCChatMediaMessagePlugin canForwardMessageFromCTA:]
// Type encoding: B24@0:8@16
// Implementation: 0x105fa6a40

// -[SCChatMediaMessagePlugin forwardParamsForMessage:focusedMessageContent:conversationParticipants:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105fa6af8

// -[SCChatMediaMessagePlugin _thumbnailObservableForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x105fa6ca8

// -[SCChatMediaMessagePlugin forwardMessage:focusedMessageContent:conversations:recipientCount:completion:]
// Type encoding: v56@0:8@16@24@32Q40@?48
// Implementation: 0x105fa6eac

// -[SCChatMediaMessagePlugin _valdiContextParamsForQuotedMessage:conversationParticipants:isPreview:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x105fa71a4

// -[SCChatMediaMessagePlugin _startPlaybackForMessage:conversationParticipants:view:index:isQuoted:]
// Type encoding: v52@0:8@16@24@32d40B48
// Implementation: 0x105fa78c8

// -[SCChatMediaMessagePlugin _fetchContentAvailability:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105fa7ba8

// -[SCChatMediaMessagePlugin _handlePlayChatMediaFromView:configuration:messageId:index:senderUserId:recipientUserId:]
// Type encoding: v64@0:8@16@24@32Q40@48@56
// Implementation: 0x105fa7c20

// -[SCChatMediaMessagePlugin _handleCompleteDisplayForMessage:conversationId:isGroup:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x105fa7c88

// -[SCChatMediaMessagePlugin _handlePendingDisplayForMessage:conversationId:isGroup:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x105fa7d1c

// -[SCChatMediaMessagePlugin _getOrCreateMessageSubjectForMessageId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105fa7db0

// -[SCChatMediaMessagePlugin _getOrCreateViewModelForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x105fa7e4c

// -[SCChatMediaMessagePlugin _handleConversationChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fa7f30

// -[SCChatMediaMessagePlugin _visibilityObservableForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x105fa7f94

// -[SCChatMediaMessagePlugin activeConversationIdObservable]
// Type encoding: @16@0:8
// Implementation: 0x105fa8098

// -[SCChatMediaMessagePlugin activeConversationInformationObservable]
// Type encoding: @16@0:8
// Implementation: 0x105fa80a0

// -[SCChatMediaMessagePlugin setActiveConversationInformationObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fa80a8

// -[SCChatMediaMessagePlugin playbackPresenter]
// Type encoding: @16@0:8
// Implementation: 0x105fa80d8

// -[SCChatMediaMessagePlugin setPlaybackPresenter:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fa80f0

// -[SCChatMediaMessagePlugin messageViewEvents]
// Type encoding: @16@0:8
// Implementation: 0x105fa80fc

// -[SCChatMediaMessagePlugin setMessageViewEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fa8104

// -[SCChatMediaMessagePlugin visibleMessageIds]
// Type encoding: @16@0:8
// Implementation: 0x105fa8134

// -[SCChatMediaMessagePlugin setVisibleMessageIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fa813c

// -[SCChatMediaMessagePlugin uiContainer]
// Type encoding: @16@0:8
// Implementation: 0x105fa816c

// -[SCChatMediaMessagePlugin setUiContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fa8184

// -[SCChatMediaMessagePlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105fa8190

@end
