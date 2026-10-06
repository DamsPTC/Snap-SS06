// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCConversationRetentionMessagePlugin
// Superclass: NSObject
// Address: 0x112ab61d8

@interface SCConversationRetentionMessagePlugin

// Property: presentingViewController; attributes: T@"UIViewController<SCPageNameLogging>",?,W,N,V_presentingViewController
// Property: uiContainer; attributes: T@"<SCUIContainer>",?,W,N,V_uiContainer
// Property: activeConversationIdObservable; attributes: T@"SCObservable",&,N,V_activeConversationIdObservable
// Property: activeConversationInformationObservable; attributes: T@"SCObservable",&,N,V_activeConversationInformationObservable
// Property: renderingContextProvider; attributes: T@"<SCMessagePluginRenderingContextProviding>",?,W,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCConversationRetentionMessagePlugin initWithActionHandler:tracker:actionSheetPresenterFactory:userId:userProvider:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105fc4c8c

// -[SCConversationRetentionMessagePlugin valdiContextParamsForMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105fc4dcc

// -[SCConversationRetentionMessagePlugin setActiveConversationIdObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fc528c

// -[SCConversationRetentionMessagePlugin identifier]
// Type encoding: @16@0:8
// Implementation: 0x105fc53f0

// -[SCConversationRetentionMessagePlugin pluginType]
// Type encoding: Q16@0:8
// Implementation: 0x105fc5420

// -[SCConversationRetentionMessagePlugin _handleRetentionModeChange:]
// Type encoding: v20@0:8i16
// Implementation: 0x105fc5428

// -[SCConversationRetentionMessagePlugin _handleSnapViewabilityChangeToRetentionType:]
// Type encoding: v20@0:8i16
// Implementation: 0x105fc54a8

// -[SCConversationRetentionMessagePlugin _handleConversationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fc5508

// -[SCConversationRetentionMessagePlugin activeConversationIdObservable]
// Type encoding: @16@0:8
// Implementation: 0x105fc5570

// -[SCConversationRetentionMessagePlugin activeConversationInformationObservable]
// Type encoding: @16@0:8
// Implementation: 0x105fc5578

// -[SCConversationRetentionMessagePlugin setActiveConversationInformationObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fc5580

// -[SCConversationRetentionMessagePlugin uiContainer]
// Type encoding: @16@0:8
// Implementation: 0x105fc55b0

// -[SCConversationRetentionMessagePlugin setUiContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fc55c8

// -[SCConversationRetentionMessagePlugin presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x105fc55d4

// -[SCConversationRetentionMessagePlugin setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fc55ec

// -[SCConversationRetentionMessagePlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105fc55f8

@end
