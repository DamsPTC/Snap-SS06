// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSuccessfulCallMessagePlugin
// Superclass: NSObject
// Address: 0x112ab7678

@interface SCSuccessfulCallMessagePlugin

// Property: presentingViewController; attributes: T@"UIViewController<SCPageNameLogging>",?,W,N,V_presentingViewController
// Property: uiContainer; attributes: T@"<SCUIContainer>",?,W,N,V_uiContainer
// Property: activeConversationIdObservable; attributes: T@"SCObservable",&,N,V_activeConversationIdObservable
// Property: activeConversationInformationObservable; attributes: T@"SCObservable",&,N,V_activeConversationInformationObservable
// Property: renderingContextProvider; attributes: T@"<SCMessagePluginRenderingContextProviding>",?,W,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: multiDirectionUIContainer; attributes: T@"<SCUIContainer>",?,W,N

// -[SCSuccessfulCallMessagePlugin initWithCurrentUserId:shakeToReportScopeExposer:shakeToReportScopeServices:callFeedbackScopeExposer:callFeedbackScopeServices:modularCallLauncher:deckServices:messagingMessageProvider:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x105fe3d50

// -[SCSuccessfulCallMessagePlugin valdiContextParamsForMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105fe3ef8

// -[SCSuccessfulCallMessagePlugin callFeedbackScopeDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fe4628

// -[SCSuccessfulCallMessagePlugin identifier]
// Type encoding: @16@0:8
// Implementation: 0x105fe4670

// -[SCSuccessfulCallMessagePlugin pluginType]
// Type encoding: Q16@0:8
// Implementation: 0x105fe46a0

// -[SCSuccessfulCallMessagePlugin _exposeShakeToReport]
// Type encoding: v16@0:8
// Implementation: 0x105fe46a8

// -[SCSuccessfulCallMessagePlugin _exposeCallFeedbackWithCallId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fe4718

// -[SCSuccessfulCallMessagePlugin dismissPresentedView]
// Type encoding: v16@0:8
// Implementation: 0x105fe484c

// -[SCSuccessfulCallMessagePlugin activeConversationIdObservable]
// Type encoding: @16@0:8
// Implementation: 0x105fe49a8

// -[SCSuccessfulCallMessagePlugin setActiveConversationIdObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fe49b0

// -[SCSuccessfulCallMessagePlugin activeConversationInformationObservable]
// Type encoding: @16@0:8
// Implementation: 0x105fe49e0

// -[SCSuccessfulCallMessagePlugin setActiveConversationInformationObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fe49e8

// -[SCSuccessfulCallMessagePlugin uiContainer]
// Type encoding: @16@0:8
// Implementation: 0x105fe4a18

// -[SCSuccessfulCallMessagePlugin setUiContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fe4a30

// -[SCSuccessfulCallMessagePlugin presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x105fe4a3c

// -[SCSuccessfulCallMessagePlugin setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fe4a54

// -[SCSuccessfulCallMessagePlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105fe4a60

@end
