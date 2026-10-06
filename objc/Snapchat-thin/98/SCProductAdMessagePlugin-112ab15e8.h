// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCProductAdMessagePlugin
// Superclass: NSObject
// Address: 0x112ab15e8

@interface SCProductAdMessagePlugin

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

// -[SCProductAdMessagePlugin initWithBlizzardLogger:grapheneRegistry:adAttachmentHandlerScopeExposer:adAttachmentHandlerScopeBuilder:networkingClient:postbackInfoEventHandler:dwellRequestsEnabled:mainQueuePerformer:messagingMessageProvider:]
// Type encoding: @84@0:8@16@24@32@40@48@56B64@68@76
// Implementation: 0x105f7509c

// -[SCProductAdMessagePlugin valdiContextParamsForMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f7524c

// -[SCProductAdMessagePlugin pluginDidRegister]
// Type encoding: v16@0:8
// Implementation: 0x105f75f58

// -[SCProductAdMessagePlugin identifier]
// Type encoding: @16@0:8
// Implementation: 0x105f75f70

// -[SCProductAdMessagePlugin pluginType]
// Type encoding: Q16@0:8
// Implementation: 0x105f75fa0

// -[SCProductAdMessagePlugin adAttachmentHandlerViewWillFullyAppear:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f75fa8

// -[SCProductAdMessagePlugin adAttachmentHandlerDidComplete:result:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105f75fac

// -[SCProductAdMessagePlugin adAttachmentHandlerDidPresent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f76044

// -[SCProductAdMessagePlugin adAttachmentHandlerViewDidFullyAppear:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f76048

// -[SCProductAdMessagePlugin adAttachmentHandlerViewDidFullyDisappear:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f7604c

// -[SCProductAdMessagePlugin adAttachmentHandlerViewWillFullyDisappear:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f76050

// -[SCProductAdMessagePlugin dismissPresentedView]
// Type encoding: v16@0:8
// Implementation: 0x105f76054

// -[SCProductAdMessagePlugin _handleTapAdWithIndex:browserType:partnerRequestId:productAdShareItems:]
// Type encoding: v44@0:8Q16i24@28@36
// Implementation: 0x105f7609c

// -[SCProductAdMessagePlugin _launchBrowserWithCommonAdConfig:webViewAttachment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105f762f0

// -[SCProductAdMessagePlugin _adBrowserTypeFromMessagingBrowserType:]
// Type encoding: q20@0:8i16
// Implementation: 0x105f763b8

// -[SCProductAdMessagePlugin _composerBrowserTypeFromMessagingBrowserType:]
// Type encoding: @20@0:8i16
// Implementation: 0x105f763c4

// -[SCProductAdMessagePlugin _partnerFromMessagingPartner:]
// Type encoding: @20@0:8i16
// Implementation: 0x105f7642c

// -[SCProductAdMessagePlugin _internalBrowserDismissedFrom:]
// Type encoding: B24@0:8@16
// Implementation: 0x105f76448

// -[SCProductAdMessagePlugin activeConversationIdObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f764f8

// -[SCProductAdMessagePlugin setActiveConversationIdObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f76500

// -[SCProductAdMessagePlugin activeConversationInformationObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f76530

// -[SCProductAdMessagePlugin setActiveConversationInformationObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f76538

// -[SCProductAdMessagePlugin uiContainer]
// Type encoding: @16@0:8
// Implementation: 0x105f76568

// -[SCProductAdMessagePlugin setUiContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f76580

// -[SCProductAdMessagePlugin messageViewEvents]
// Type encoding: @16@0:8
// Implementation: 0x105f7658c

// -[SCProductAdMessagePlugin setMessageViewEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f76594

// -[SCProductAdMessagePlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f765c4

@end
