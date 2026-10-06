// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUrlPreviewMessageFetchingPlugin
// Superclass: NSObject
// Address: 0x112ab6d18

@interface SCUrlPreviewMessageFetchingPlugin

// Property: activeConversationIdObservable; attributes: T@"SCObservable",&,N,V_activeConversationIdObservable
// Property: activeConversationInformationObservable; attributes: T@"SCObservable",&,N,V_activeConversationInformationObservable
// Property: renderingContextProvider; attributes: T@"<SCMessagePluginRenderingContextProviding>",?,W,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCMessageTypePlatformRenderedPluginDelegate>",W,N,V_delegate

// -[SCUrlPreviewMessageFetchingPlugin initWithUrlPreviewProvider:urlSpamProvider:messagingMessageProvider:experimentService:normalizedSpamCheckURLFinder:grapheneRegistry:conversationUpdatesPublisher:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x105fcb120

// -[SCUrlPreviewMessageFetchingPlugin prefetchDataForMessageViewModel:isGroupConversation:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105fcb374

// -[SCUrlPreviewMessageFetchingPlugin prefetchedDataForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x105fcb820

// -[SCUrlPreviewMessageFetchingPlugin identifier]
// Type encoding: @16@0:8
// Implementation: 0x105fcbb54

// -[SCUrlPreviewMessageFetchingPlugin pluginType]
// Type encoding: Q16@0:8
// Implementation: 0x105fcbb84

// -[SCUrlPreviewMessageFetchingPlugin setActiveConversationIdObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fcbb8c

// -[SCUrlPreviewMessageFetchingPlugin _logSpammerIfNeededForUrlPreview:senderId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105fcbcf8

// -[SCUrlPreviewMessageFetchingPlugin _handleConversationChangeToConversationIdOptional:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fcbd7c

// -[SCUrlPreviewMessageFetchingPlugin _resolveEligibilityForConversationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fcbe50

// -[SCUrlPreviewMessageFetchingPlugin _cacheScenario:forConversationId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x105fcc0d4

// -[SCUrlPreviewMessageFetchingPlugin _normalizedSpamCheckSkipReasonForGroupConversation:]
// Type encoding: @20@0:8B16
// Implementation: 0x105fcc14c

// -[SCUrlPreviewMessageFetchingPlugin _getPreviewFromMemoryIfPresentForUrl:]
// Type encoding: @24@0:8@16
// Implementation: 0x105fcc1bc

// -[SCUrlPreviewMessageFetchingPlugin _fetchPreviewForUrlIfNotPresent:senderUserId:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105fcc244

// -[SCUrlPreviewMessageFetchingPlugin _incrementNormalizedUrlSpamCheckStage:reason:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105fcc52c

// -[SCUrlPreviewMessageFetchingPlugin _handleUpdateForUrl:preview:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105fcc630

// -[SCUrlPreviewMessageFetchingPlugin _urlFromMediaCardContent:]
// Type encoding: @24@0:8@16
// Implementation: 0x105fcc714

// -[SCUrlPreviewMessageFetchingPlugin delegate]
// Type encoding: @16@0:8
// Implementation: 0x105fcc860

// -[SCUrlPreviewMessageFetchingPlugin setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fcc878

// -[SCUrlPreviewMessageFetchingPlugin activeConversationIdObservable]
// Type encoding: @16@0:8
// Implementation: 0x105fcc884

// -[SCUrlPreviewMessageFetchingPlugin activeConversationInformationObservable]
// Type encoding: @16@0:8
// Implementation: 0x105fcc88c

// -[SCUrlPreviewMessageFetchingPlugin setActiveConversationInformationObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fcc894

// -[SCUrlPreviewMessageFetchingPlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105fcc8c4

@end
