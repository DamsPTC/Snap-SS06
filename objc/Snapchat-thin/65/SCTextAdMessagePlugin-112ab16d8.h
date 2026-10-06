// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTextAdMessagePlugin
// Superclass: NSObject
// Address: 0x112ab16d8

@interface SCTextAdMessagePlugin

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
// Property: messageViewEvents; attributes: T@"SCObservable",&,N,V_messageViewEvents
// Property: visibleMessageIds; attributes: T@"SCObservable",?,&,N
// Property: messageListScrollObservable; attributes: T@"SCObservable",?,&,N
// Property: messageVisibilityFractionProvider; attributes: T@"<SCMessageVisibilityFractionProviding>",?,W,N

// -[SCTextAdMessagePlugin initWithBlizzardLogger:webBrowsingScopeExposer:networkingClient:postbackInfoEventHandler:dwellRequestsEnabled:messagingMessageProvider:]
// Type encoding: @60@0:8@16@24@32@40B48@52
// Implementation: 0x105f78288

// -[SCTextAdMessagePlugin valdiContextParamsForMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f783bc

// -[SCTextAdMessagePlugin pluginDidRegister]
// Type encoding: v16@0:8
// Implementation: 0x105f78d28

// -[SCTextAdMessagePlugin identifier]
// Type encoding: @16@0:8
// Implementation: 0x105f78d40

// -[SCTextAdMessagePlugin pluginType]
// Type encoding: Q16@0:8
// Implementation: 0x105f78d70

// -[SCTextAdMessagePlugin webBrowserDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f78d78

// -[SCTextAdMessagePlugin dismissPresentedView]
// Type encoding: v16@0:8
// Implementation: 0x105f78dec

// -[SCTextAdMessagePlugin _handleTapOpenExternalBrowserWithURLString:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f78e34

// -[SCTextAdMessagePlugin _handleTapOpenInAppBrowserWithURLString:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f78ed4

// -[SCTextAdMessagePlugin activeConversationIdObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f790b4

// -[SCTextAdMessagePlugin setActiveConversationIdObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f790bc

// -[SCTextAdMessagePlugin activeConversationInformationObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f790ec

// -[SCTextAdMessagePlugin setActiveConversationInformationObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f790f4

// -[SCTextAdMessagePlugin uiContainer]
// Type encoding: @16@0:8
// Implementation: 0x105f79124

// -[SCTextAdMessagePlugin setUiContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f7913c

// -[SCTextAdMessagePlugin messageViewEvents]
// Type encoding: @16@0:8
// Implementation: 0x105f79148

// -[SCTextAdMessagePlugin setMessageViewEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f79150

// -[SCTextAdMessagePlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f79180

@end
