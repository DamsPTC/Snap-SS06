// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatTextMessagePlugin
// Superclass: NSObject
// Address: 0x112ab4ce8

@interface SCChatTextMessagePlugin

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: presentingViewController; attributes: T@"UIViewController<SCPageNameLogging>",?,W,N,V_presentingViewController
// Property: uiContainer; attributes: T@"<SCUIContainer>",?,W,N,V_uiContainer
// Property: activeConversationIdObservable; attributes: T@"SCObservable",&,N,V_activeConversationIdObservable
// Property: activeConversationInformationObservable; attributes: T@"SCObservable",&,N,V_activeConversationInformationObservable
// Property: renderingContextProvider; attributes: T@"<SCMessagePluginRenderingContextProviding>",?,W,N,V_renderingContextProvider
// Property: multiDirectionUIContainer; attributes: T@"<SCUIContainer>",?,W,N
// Property: messageViewEvents; attributes: T@"SCObservable",&,N,V_messageViewEvents
// Property: visibleMessageIds; attributes: T@"SCObservable",?,&,N
// Property: messageListScrollObservable; attributes: T@"SCObservable",?,&,N
// Property: messageVisibilityFractionProvider; attributes: T@"<SCMessageVisibilityFractionProviding>",?,W,N

// -[SCChatTextMessagePlugin initWithCurrentUserId:urlPreviewProvider:chatAttachmentHandlerScopeExposer:storyReplyQuoteActionHandler:textSender:valdiRuntimeProvider:messagingExperimentService:messagingMessageProvider:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x105fa89b8

// -[SCChatTextMessagePlugin valdiContextParamsForMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105fa8b9c

// -[SCChatTextMessagePlugin valdiContextParamsForQuotedMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105fa9834

// -[SCChatTextMessagePlugin valdiContextParamsForQuotedMessagePreview:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105fa99dc

// -[SCChatTextMessagePlugin quotedRenderingStyleForMessage:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105fa9b84

// -[SCChatTextMessagePlugin identifier]
// Type encoding: @16@0:8
// Implementation: 0x105fa9b8c

// -[SCChatTextMessagePlugin pluginType]
// Type encoding: Q16@0:8
// Implementation: 0x105fa9bbc

// -[SCChatTextMessagePlugin setActiveConversationIdObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fa9bc4

// -[SCChatTextMessagePlugin setActiveConversationInformationObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fa9d0c

// -[SCChatTextMessagePlugin dismissPresentedView]
// Type encoding: v16@0:8
// Implementation: 0x105fa9f8c

// -[SCChatTextMessagePlugin canForwardMessageFromActionMenu:focusedMessageContent:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105fa9f90

// -[SCChatTextMessagePlugin canForwardMessageFromCTA:]
// Type encoding: B24@0:8@16
// Implementation: 0x105faa264

// -[SCChatTextMessagePlugin forwardMessage:focusedMessageContent:conversations:recipientCount:completion:]
// Type encoding: v56@0:8@16@24@32Q40@?48
// Implementation: 0x105faa3b4

// -[SCChatTextMessagePlugin forwardParamsForMessage:focusedMessageContent:conversationParticipants:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105faa850

// -[SCChatTextMessagePlugin actionMenuButtonTextForMessage:focusedMessageContent:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105faacd4

// -[SCChatTextMessagePlugin didDismissChatAttachment]
// Type encoding: v16@0:8
// Implementation: 0x105faafc4

// -[SCChatTextMessagePlugin _sendTextMessageWithText:conversations:platformAnalytics:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x105fab00c

// -[SCChatTextMessagePlugin _sendURLTextMessageWithForwardedContent:conversations:platformAnalytics:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x105fab14c

// -[SCChatTextMessagePlugin _sendToMediaTypeForMessage:focusedMessageContent:]
// Type encoding: q32@0:8@16@24
// Implementation: 0x105fab268

// -[SCChatTextMessagePlugin _openAttachment:senderUserId:otherParticipantId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105fab4ac

// -[SCChatTextMessagePlugin _openUrl:senderUserId:otherParticipantId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105fab5b4

// -[SCChatTextMessagePlugin _openAddress:senderUserId:otherParticipantId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105fab668

// -[SCChatTextMessagePlugin _openPhoneNumber:senderUserId:otherParticipantId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105fab6f8

// -[SCChatTextMessagePlugin _handleQuoteTap:conversationParticipants:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105fab788

// -[SCChatTextMessagePlugin _shouldRenderWithBubble:]
// Type encoding: B24@0:8@16
// Implementation: 0x105fab878

// -[SCChatTextMessagePlugin _getOrCreateMessageSubjectForMessageId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105fab8dc

// -[SCChatTextMessagePlugin _handleConversationChange]
// Type encoding: v16@0:8
// Implementation: 0x105fab978

// -[SCChatTextMessagePlugin _handleConversationInformationUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fab9bc

// -[SCChatTextMessagePlugin _otherParticipantIdForConversationParticipants:]
// Type encoding: @24@0:8@16
// Implementation: 0x105fab9fc

// -[SCChatTextMessagePlugin _buildViewModelForTextContent:conversationParticipants:isContextualReplyFormat:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x105faba7c

// -[SCChatTextMessagePlugin _buildContextForTextContent:messageSender:otherParticipantId:enableInteraction:message:]
// Type encoding: @52@0:8@16@24@32B40@44
// Implementation: 0x105fac304

// -[SCChatTextMessagePlugin activeConversationIdObservable]
// Type encoding: @16@0:8
// Implementation: 0x105facbbc

// -[SCChatTextMessagePlugin activeConversationInformationObservable]
// Type encoding: @16@0:8
// Implementation: 0x105facbc4

// -[SCChatTextMessagePlugin renderingContextProvider]
// Type encoding: @16@0:8
// Implementation: 0x105facbcc

// -[SCChatTextMessagePlugin setRenderingContextProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x105facbe4

// -[SCChatTextMessagePlugin uiContainer]
// Type encoding: @16@0:8
// Implementation: 0x105facbf0

// -[SCChatTextMessagePlugin setUiContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105facc08

// -[SCChatTextMessagePlugin presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x105facc14

// -[SCChatTextMessagePlugin setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x105facc2c

// -[SCChatTextMessagePlugin messageViewEvents]
// Type encoding: @16@0:8
// Implementation: 0x105facc38

// -[SCChatTextMessagePlugin setMessageViewEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x105facc40

// -[SCChatTextMessagePlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105facc70

@end
