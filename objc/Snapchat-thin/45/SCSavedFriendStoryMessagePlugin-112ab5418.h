// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSavedFriendStoryMessagePlugin
// Superclass: NSObject
// Address: 0x112ab5418

@interface SCSavedFriendStoryMessagePlugin

// Property: presentingViewController; attributes: T@"UIViewController<SCPageNameLogging>",?,W,N
// Property: uiContainer; attributes: T@"<SCUIContainer>",?,W,N
// Property: activeConversationIdObservable; attributes: T@"SCObservable",&,N,V_activeConversationIdObservable
// Property: activeConversationInformationObservable; attributes: T@"SCObservable",&,N,V_activeConversationInformationObservable
// Property: renderingContextProvider; attributes: T@"<SCMessagePluginRenderingContextProviding>",?,W,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: playbackPresenter; attributes: T@"<SCMessagePluginPlaybackPresenting>",W,N,V_playbackPresenter
// Property: messageViewEvents; attributes: T@"SCObservable",&,N,V_messageViewEvents
// Property: visibleMessageIds; attributes: T@"SCObservable",?,&,N
// Property: messageListScrollObservable; attributes: T@"SCObservable",?,&,N
// Property: messageVisibilityFractionProvider; attributes: T@"<SCMessageVisibilityFractionProviding>",?,W,N

// -[SCSavedFriendStoryMessagePlugin initWithCurrentUserId:featureSettingsService:userProvider:chatMediaFetcher:valdiRuntimeProvider:playerProvider:chatMessageDisplayStateLogger:messagingMessageProvider:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x105fb4f20

// -[SCSavedFriendStoryMessagePlugin valdiContextParamsForMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105fb5104

// -[SCSavedFriendStoryMessagePlugin quotedRenderingStyleForMessage:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105fb5c84

// -[SCSavedFriendStoryMessagePlugin _valdiContextParamsForQuotedMessage:conversationParticipants:isPreview:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x105fb5d50

// -[SCSavedFriendStoryMessagePlugin valdiContextParamsForQuotedMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105fb64ac

// -[SCSavedFriendStoryMessagePlugin valdiContextParamsForQuotedMessagePreview:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105fb64b4

// -[SCSavedFriendStoryMessagePlugin identifier]
// Type encoding: @16@0:8
// Implementation: 0x105fb64bc

// -[SCSavedFriendStoryMessagePlugin pluginType]
// Type encoding: Q16@0:8
// Implementation: 0x105fb64ec

// -[SCSavedFriendStoryMessagePlugin setActiveConversationIdObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fb64f4

// -[SCSavedFriendStoryMessagePlugin savableDataModelsForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x105fb663c

// -[SCSavedFriendStoryMessagePlugin shouldDisplayContextualHeaderForMessage:]
// Type encoding: B24@0:8@16
// Implementation: 0x105fb6764

// -[SCSavedFriendStoryMessagePlugin contextualHeaderForMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105fb6800

// -[SCSavedFriendStoryMessagePlugin _incrementTooltipSeenCount]
// Type encoding: v16@0:8
// Implementation: 0x105fb6a80

// -[SCSavedFriendStoryMessagePlugin _handlePlayMediaWithMessage:conversationParticipants:baseView:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105fb6ae8

// -[SCSavedFriendStoryMessagePlugin _getOrCreateMessageSubjectForMessageId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105fb6c2c

// -[SCSavedFriendStoryMessagePlugin _handleConversationChange]
// Type encoding: v16@0:8
// Implementation: 0x105fb6cc8

// -[SCSavedFriendStoryMessagePlugin _isSavedFriendStoryMessage:]
// Type encoding: B24@0:8@16
// Implementation: 0x105fb6d0c

// -[SCSavedFriendStoryMessagePlugin _savedStoryPosterIdForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x105fb6d70

// -[SCSavedFriendStoryMessagePlugin _isSavedStoryMediaDeletedForMessage:]
// Type encoding: B24@0:8@16
// Implementation: 0x105fb6e40

// -[SCSavedFriendStoryMessagePlugin _isSavedStoryMediaPresentForMessage:]
// Type encoding: B24@0:8@16
// Implementation: 0x105fb6f10

// -[SCSavedFriendStoryMessagePlugin activeConversationIdObservable]
// Type encoding: @16@0:8
// Implementation: 0x105fb6fe0

// -[SCSavedFriendStoryMessagePlugin activeConversationInformationObservable]
// Type encoding: @16@0:8
// Implementation: 0x105fb6fe8

// -[SCSavedFriendStoryMessagePlugin setActiveConversationInformationObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fb6ff0

// -[SCSavedFriendStoryMessagePlugin playbackPresenter]
// Type encoding: @16@0:8
// Implementation: 0x105fb7020

// -[SCSavedFriendStoryMessagePlugin setPlaybackPresenter:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fb7038

// -[SCSavedFriendStoryMessagePlugin messageViewEvents]
// Type encoding: @16@0:8
// Implementation: 0x105fb7044

// -[SCSavedFriendStoryMessagePlugin setMessageViewEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fb704c

// -[SCSavedFriendStoryMessagePlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105fb707c

@end
