// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatWallpapersMessagePlugin
// Superclass: NSObject
// Address: 0x112ab4d88

@interface SCChatWallpapersMessagePlugin

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

// -[SCChatWallpapersMessagePlugin initWithUserId:conversationActionHandler:userProvider:chatCustomizationHubScopeExposer:chatCustomizationHubScopeServices:conversationUpdatesPublisher:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x105fad9ec

// -[SCChatWallpapersMessagePlugin valdiContextParamsForMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105fadb60

// -[SCChatWallpapersMessagePlugin _displayUpdateWallpaperFlowForConversation:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fadedc

// -[SCChatWallpapersMessagePlugin _exposeUpdateWallpaperFlowForConversation:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fae008

// -[SCChatWallpapersMessagePlugin _exposeUpdateWallpaperScopeForConversation:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fae048

// -[SCChatWallpapersMessagePlugin identifier]
// Type encoding: @16@0:8
// Implementation: 0x105fae1bc

// -[SCChatWallpapersMessagePlugin pluginType]
// Type encoding: Q16@0:8
// Implementation: 0x105fae1ec

// -[SCChatWallpapersMessagePlugin setActiveConversationIdObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fae1f4

// -[SCChatWallpapersMessagePlugin _handleConversationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fae358

// -[SCChatWallpapersMessagePlugin _getOrCreateConversationEnableTapObservable]
// Type encoding: @16@0:8
// Implementation: 0x105fae3d4

// -[SCChatWallpapersMessagePlugin willDisplayChatCustomizationHubScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fae544

// -[SCChatWallpapersMessagePlugin didDismissChatCustomizationHubScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fae548

// -[SCChatWallpapersMessagePlugin didRequestDismissal:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fae590

// -[SCChatWallpapersMessagePlugin dismissPresentedView]
// Type encoding: v16@0:8
// Implementation: 0x105fae63c

// -[SCChatWallpapersMessagePlugin activeConversationIdObservable]
// Type encoding: @16@0:8
// Implementation: 0x105fae684

// -[SCChatWallpapersMessagePlugin activeConversationInformationObservable]
// Type encoding: @16@0:8
// Implementation: 0x105fae68c

// -[SCChatWallpapersMessagePlugin setActiveConversationInformationObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fae694

// -[SCChatWallpapersMessagePlugin uiContainer]
// Type encoding: @16@0:8
// Implementation: 0x105fae6c4

// -[SCChatWallpapersMessagePlugin setUiContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fae6dc

// -[SCChatWallpapersMessagePlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105fae6e8

@end
