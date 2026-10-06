// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoryReplyQuotedMessagePlugin
// Superclass: NSObject
// Address: 0x112ab5878

@interface SCStoryReplyQuotedMessagePlugin

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

// -[SCStoryReplyQuotedMessagePlugin initWithCurrentUserId:playerProvider:chatMessageDisplayStateLogger:valdiRuntimeProvider:messagingMessageProvider:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105fb9360

// -[SCStoryReplyQuotedMessagePlugin valdiContextParamsForQuotedMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105fb94c0

// -[SCStoryReplyQuotedMessagePlugin valdiContextParamsForQuotedMessagePreview:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105fba144

// -[SCStoryReplyQuotedMessagePlugin quotedRenderingStyleForMessage:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105fba14c

// -[SCStoryReplyQuotedMessagePlugin identifier]
// Type encoding: @16@0:8
// Implementation: 0x105fba1d4

// -[SCStoryReplyQuotedMessagePlugin setActiveConversationIdObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fba204

// -[SCStoryReplyQuotedMessagePlugin shouldDisplayContextualHeaderForMessage:]
// Type encoding: B24@0:8@16
// Implementation: 0x105fba34c

// -[SCStoryReplyQuotedMessagePlugin contextualHeaderForMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105fba38c

// -[SCStoryReplyQuotedMessagePlugin _getOrCreateMessageSubjectForMessageId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105fba5b0

// -[SCStoryReplyQuotedMessagePlugin _handleConversationChange]
// Type encoding: v16@0:8
// Implementation: 0x105fba64c

// -[SCStoryReplyQuotedMessagePlugin _isStoryReplyMediaDeletedForMessage:]
// Type encoding: B24@0:8@16
// Implementation: 0x105fba690

// -[SCStoryReplyQuotedMessagePlugin _presentPlaybackWithBaseView:configuration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105fba764

// -[SCStoryReplyQuotedMessagePlugin activeConversationIdObservable]
// Type encoding: @16@0:8
// Implementation: 0x105fba7cc

// -[SCStoryReplyQuotedMessagePlugin activeConversationInformationObservable]
// Type encoding: @16@0:8
// Implementation: 0x105fba7d4

// -[SCStoryReplyQuotedMessagePlugin setActiveConversationInformationObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fba7dc

// -[SCStoryReplyQuotedMessagePlugin playbackPresenter]
// Type encoding: @16@0:8
// Implementation: 0x105fba80c

// -[SCStoryReplyQuotedMessagePlugin setPlaybackPresenter:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fba824

// -[SCStoryReplyQuotedMessagePlugin messageViewEvents]
// Type encoding: @16@0:8
// Implementation: 0x105fba830

// -[SCStoryReplyQuotedMessagePlugin setMessageViewEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fba838

// -[SCStoryReplyQuotedMessagePlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105fba868

@end
