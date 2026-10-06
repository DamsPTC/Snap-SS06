// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapchatterMessageRenderingPlugin
// Superclass: NSObject
// Address: 0x112ab5698

@interface SCSnapchatterMessageRenderingPlugin

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: presentingViewController; attributes: T@"UIViewController<SCPageNameLogging>",?,W,N
// Property: uiContainer; attributes: T@"<SCUIContainer>",?,W,N,V_uiContainer
// Property: activeConversationIdObservable; attributes: T@"SCObservable",&,N,V_activeConversationIdObservable
// Property: activeConversationInformationObservable; attributes: T@"SCObservable",&,N,V_activeConversationInformationObservable
// Property: renderingContextProvider; attributes: T@"<SCMessagePluginRenderingContextProviding>",?,W,N
// Property: multiDirectionUIContainer; attributes: T@"<SCUIContainer>",?,W,N

// -[SCSnapchatterMessageRenderingPlugin initWithSnapchatterMessageFetcher:snapchatterShareSender:friendProfileScopeExposer:messagingMessageProvider:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x105fb82e0

// -[SCSnapchatterMessageRenderingPlugin identifier]
// Type encoding: @16@0:8
// Implementation: 0x105fb83f8

// -[SCSnapchatterMessageRenderingPlugin setActiveConversationIdObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fb8428

// -[SCSnapchatterMessageRenderingPlugin _clearFetcherCache]
// Type encoding: v16@0:8
// Implementation: 0x105fb855c

// -[SCSnapchatterMessageRenderingPlugin pluginType]
// Type encoding: Q16@0:8
// Implementation: 0x105fb8590

// -[SCSnapchatterMessageRenderingPlugin _handleTapForUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fb8598

// -[SCSnapchatterMessageRenderingPlugin _handleAddButtonTapForUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fb8690

// -[SCSnapchatterMessageRenderingPlugin _snapchatterUserIdForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x105fb86e0

// -[SCSnapchatterMessageRenderingPlugin valdiContextParamsForMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105fb87d0

// -[SCSnapchatterMessageRenderingPlugin friendProfileDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fb8b08

// -[SCSnapchatterMessageRenderingPlugin canForwardMessageFromActionMenu:focusedMessageContent:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105fb8b50

// -[SCSnapchatterMessageRenderingPlugin canForwardMessageFromCTA:]
// Type encoding: B24@0:8@16
// Implementation: 0x105fb8b58

// -[SCSnapchatterMessageRenderingPlugin forwardParamsForMessage:focusedMessageContent:conversationParticipants:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105fb8b60

// -[SCSnapchatterMessageRenderingPlugin forwardMessage:focusedMessageContent:conversations:recipientCount:completion:]
// Type encoding: v56@0:8@16@24@32Q40@?48
// Implementation: 0x105fb8d70

// -[SCSnapchatterMessageRenderingPlugin dismissPresentedView]
// Type encoding: v16@0:8
// Implementation: 0x105fb8fcc

// -[SCSnapchatterMessageRenderingPlugin activeConversationIdObservable]
// Type encoding: @16@0:8
// Implementation: 0x105fb9014

// -[SCSnapchatterMessageRenderingPlugin activeConversationInformationObservable]
// Type encoding: @16@0:8
// Implementation: 0x105fb901c

// -[SCSnapchatterMessageRenderingPlugin setActiveConversationInformationObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fb9024

// -[SCSnapchatterMessageRenderingPlugin uiContainer]
// Type encoding: @16@0:8
// Implementation: 0x105fb9054

// -[SCSnapchatterMessageRenderingPlugin setUiContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fb906c

// -[SCSnapchatterMessageRenderingPlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105fb9078

@end
