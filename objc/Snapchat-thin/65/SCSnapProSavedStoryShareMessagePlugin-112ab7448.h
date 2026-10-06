// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapProSavedStoryShareMessagePlugin
// Superclass: NSObject
// Address: 0x112ab7448

@interface SCSnapProSavedStoryShareMessagePlugin

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

// -[SCSnapProSavedStoryShareMessagePlugin initWithContextProvider:snapProShareMessageSender:messagingMessageProvider:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105fe035c

// -[SCSnapProSavedStoryShareMessagePlugin valdiContextParamsForMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105fe0444

// -[SCSnapProSavedStoryShareMessagePlugin setActiveConversationIdObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fe0558

// -[SCSnapProSavedStoryShareMessagePlugin identifier]
// Type encoding: @16@0:8
// Implementation: 0x105fe06a0

// -[SCSnapProSavedStoryShareMessagePlugin pluginType]
// Type encoding: Q16@0:8
// Implementation: 0x105fe06d0

// -[SCSnapProSavedStoryShareMessagePlugin _handleConversationChange]
// Type encoding: v16@0:8
// Implementation: 0x105fe06d8

// -[SCSnapProSavedStoryShareMessagePlugin canForwardMessageFromActionMenu:focusedMessageContent:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105fe06e0

// -[SCSnapProSavedStoryShareMessagePlugin canForwardMessageFromCTA:]
// Type encoding: B24@0:8@16
// Implementation: 0x105fe072c

// -[SCSnapProSavedStoryShareMessagePlugin isSharingRestrictedForMessage:]
// Type encoding: B24@0:8@16
// Implementation: 0x105fe0778

// -[SCSnapProSavedStoryShareMessagePlugin forwardParamsForMessage:focusedMessageContent:conversationParticipants:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105fe086c

// -[SCSnapProSavedStoryShareMessagePlugin forwardMessage:focusedMessageContent:conversations:recipientCount:completion:]
// Type encoding: v56@0:8@16@24@32Q40@?48
// Implementation: 0x105fe0a24

// -[SCSnapProSavedStoryShareMessagePlugin _hasStory:]
// Type encoding: B24@0:8@16
// Implementation: 0x105fe0e54

// -[SCSnapProSavedStoryShareMessagePlugin activeConversationIdObservable]
// Type encoding: @16@0:8
// Implementation: 0x105fe0ecc

// -[SCSnapProSavedStoryShareMessagePlugin activeConversationInformationObservable]
// Type encoding: @16@0:8
// Implementation: 0x105fe0ed4

// -[SCSnapProSavedStoryShareMessagePlugin setActiveConversationInformationObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fe0edc

// -[SCSnapProSavedStoryShareMessagePlugin uiContainer]
// Type encoding: @16@0:8
// Implementation: 0x105fe0f0c

// -[SCSnapProSavedStoryShareMessagePlugin setUiContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fe0f24

// -[SCSnapProSavedStoryShareMessagePlugin presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x105fe0f30

// -[SCSnapProSavedStoryShareMessagePlugin setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fe0f48

// -[SCSnapProSavedStoryShareMessagePlugin operaPresenterDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105fe0f54

// -[SCSnapProSavedStoryShareMessagePlugin setOperaPresenterDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fe0f6c

// -[SCSnapProSavedStoryShareMessagePlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105fe0f78

@end
