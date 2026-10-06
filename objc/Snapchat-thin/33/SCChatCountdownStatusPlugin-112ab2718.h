// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatCountdownStatusPlugin
// Superclass: NSObject
// Address: 0x112ab2718

@interface SCChatCountdownStatusPlugin

// Property: presentingViewController; attributes: T@"UIViewController<SCPageNameLogging>",?,W,N
// Property: uiContainer; attributes: T@"<SCUIContainer>",?,W,N,V_uiContainer
// Property: activeConversationIdObservable; attributes: T@"SCObservable",&,N,V_activeConversationIdObservable
// Property: activeConversationInformationObservable; attributes: T@"SCObservable",&,N,VactiveConversationInformationObservable
// Property: renderingContextProvider; attributes: T@"<SCMessagePluginRenderingContextProviding>",?,W,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: multiDirectionUIContainer; attributes: T@"<SCUIContainer>",?,W,N

// -[SCChatCountdownStatusPlugin initWithUserId:countdownsServices:friendStore:userInfoProvider:grpcServiceFactory:blizzardLogger:cofStore:messagingMessageProvider:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x105f7b904

// -[SCChatCountdownStatusPlugin valdiContextParamsForMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f7bacc

// -[SCChatCountdownStatusPlugin _providers]
// Type encoding: @16@0:8
// Implementation: 0x105f7bea4

// -[SCChatCountdownStatusPlugin _presentListPageForParticipants:countdownId:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105f7bf90

// -[SCChatCountdownStatusPlugin _countdownStatusTypeFromProtoObjectType:]
// Type encoding: i20@0:8i16
// Implementation: 0x105f7c214

// -[SCChatCountdownStatusPlugin identifier]
// Type encoding: @16@0:8
// Implementation: 0x105f7c224

// -[SCChatCountdownStatusPlugin pluginType]
// Type encoding: Q16@0:8
// Implementation: 0x105f7c254

// -[SCChatCountdownStatusPlugin setActiveConversationIdObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f7c25c

// -[SCChatCountdownStatusPlugin conversationId]
// Type encoding: @16@0:8
// Implementation: 0x105f7c3c0

// -[SCChatCountdownStatusPlugin _handleConversationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f7c3fc

// -[SCChatCountdownStatusPlugin dismissPresentedView]
// Type encoding: v16@0:8
// Implementation: 0x105f7c46c

// -[SCChatCountdownStatusPlugin activeConversationIdObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f7c4bc

// -[SCChatCountdownStatusPlugin activeConversationInformationObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f7c4c4

// -[SCChatCountdownStatusPlugin setActiveConversationInformationObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f7c4cc

// -[SCChatCountdownStatusPlugin uiContainer]
// Type encoding: @16@0:8
// Implementation: 0x105f7c4fc

// -[SCChatCountdownStatusPlugin setUiContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f7c514

// -[SCChatCountdownStatusPlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f7c520

@end
