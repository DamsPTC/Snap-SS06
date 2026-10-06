// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCForwardMessageAccessoryPlugin
// Superclass: NSObject
// Address: 0x112ab5378

@interface SCForwardMessageAccessoryPlugin

// Property: messageRenderingPluginManager; attributes: T@"SCLazy",?,W,N,V_messageRenderingPluginManager
// Property: chatScrollHandler; attributes: T@"<SCCChatScrollHandling>",?,W,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: uiContainer; attributes: T@"<SCUIContainer>",&,N,V_uiContainer
// Property: presentingViewController; attributes: T@"UIViewController<SCPageNameLogging>",?,W,N

// -[SCForwardMessageAccessoryPlugin initWithCurrentUserId:forwardScopeExposer:urlSpamProvider:messagingExperimentService:notificationPool:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105fb2a04

// -[SCForwardMessageAccessoryPlugin accessoryParamsForMessage:conversationInformation:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105fb2b54

// -[SCForwardMessageAccessoryPlugin identifier]
// Type encoding: @16@0:8
// Implementation: 0x105fb2f98

// -[SCForwardMessageAccessoryPlugin isApplicableToMessage:]
// Type encoding: B24@0:8@16
// Implementation: 0x105fb2fc8

// -[SCForwardMessageAccessoryPlugin pluginType]
// Type encoding: Q16@0:8
// Implementation: 0x105fb30a0

// -[SCForwardMessageAccessoryPlugin dismissPresentedView]
// Type encoding: v16@0:8
// Implementation: 0x105fb30a8

// -[SCForwardMessageAccessoryPlugin dismissForwardScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fb30ac

// -[SCForwardMessageAccessoryPlugin _forwardablePluginForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x105fb30b0

// -[SCForwardMessageAccessoryPlugin _pluginForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x105fb3100

// -[SCForwardMessageAccessoryPlugin _forwardEligibilityObservableForMessage:messageObservable:conversationInformationObservable:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105fb317c

// -[SCForwardMessageAccessoryPlugin _isTextMessageEligible:conversationInformation:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105fb3660

// -[SCForwardMessageAccessoryPlugin _isURLMessageEligible:url:conversationInformation:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x105fb381c

// -[SCForwardMessageAccessoryPlugin _dismissForwardScopeIfPresented]
// Type encoding: v16@0:8
// Implementation: 0x105fb3c84

// -[SCForwardMessageAccessoryPlugin _contextParamsForMessage:conversationInformation:messageObservable:conversationInformationObservable:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x105fb3ccc

// -[SCForwardMessageAccessoryPlugin _handleTapOnMessage:conversationParticipants:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105fb4010

// -[SCForwardMessageAccessoryPlugin uiContainer]
// Type encoding: @16@0:8
// Implementation: 0x105fb421c

// -[SCForwardMessageAccessoryPlugin setUiContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fb4224

// -[SCForwardMessageAccessoryPlugin messageRenderingPluginManager]
// Type encoding: @16@0:8
// Implementation: 0x105fb4254

// -[SCForwardMessageAccessoryPlugin setMessageRenderingPluginManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fb426c

// -[SCForwardMessageAccessoryPlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105fb4278

@end
