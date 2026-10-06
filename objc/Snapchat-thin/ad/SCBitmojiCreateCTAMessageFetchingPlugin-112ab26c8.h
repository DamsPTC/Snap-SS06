// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBitmojiCreateCTAMessageFetchingPlugin
// Superclass: NSObject
// Address: 0x112ab26c8

@interface SCBitmojiCreateCTAMessageFetchingPlugin

// Property: ctaMessageId; attributes: T@"NSString",&,V_ctaMessageId
// Property: ctaOrderKey; attributes: T@"NSNumber",&,V_ctaOrderKey
// Property: activeConversationIdObservable; attributes: T@"SCObservable",&,N,V_activeConversationIdObservable
// Property: activeConversationInformationObservable; attributes: T@"SCObservable",&,N,V_activeConversationInformationObservable
// Property: renderingContextProvider; attributes: T@"<SCMessagePluginRenderingContextProviding>",?,W,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCMessageTypePlatformRenderedPluginDelegate>",W,N,V_delegate

// -[SCBitmojiCreateCTAMessageFetchingPlugin initWithBitmojiAvatarProvider:featureSettingsService:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f7b1dc

// -[SCBitmojiCreateCTAMessageFetchingPlugin prefetchDataForMessageViewModel:isGroupConversation:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105f7b29c

// -[SCBitmojiCreateCTAMessageFetchingPlugin prefetchedDataForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f7b3d0

// -[SCBitmojiCreateCTAMessageFetchingPlugin identifier]
// Type encoding: @16@0:8
// Implementation: 0x105f7b4b0

// -[SCBitmojiCreateCTAMessageFetchingPlugin pluginType]
// Type encoding: Q16@0:8
// Implementation: 0x105f7b4e0

// -[SCBitmojiCreateCTAMessageFetchingPlugin setActiveConversationIdObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f7b4e8

// -[SCBitmojiCreateCTAMessageFetchingPlugin _handleConversationChange]
// Type encoding: v16@0:8
// Implementation: 0x105f7b670

// -[SCBitmojiCreateCTAMessageFetchingPlugin _showCTAForMessageId:orderKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105f7b69c

// -[SCBitmojiCreateCTAMessageFetchingPlugin _incrementBitmojiCreateAvatarChatImpressions]
// Type encoding: v16@0:8
// Implementation: 0x105f7b718

// -[SCBitmojiCreateCTAMessageFetchingPlugin delegate]
// Type encoding: @16@0:8
// Implementation: 0x105f7b7bc

// -[SCBitmojiCreateCTAMessageFetchingPlugin setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f7b7d4

// -[SCBitmojiCreateCTAMessageFetchingPlugin activeConversationIdObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f7b7e0

// -[SCBitmojiCreateCTAMessageFetchingPlugin activeConversationInformationObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f7b7e8

// -[SCBitmojiCreateCTAMessageFetchingPlugin setActiveConversationInformationObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f7b7f0

// -[SCBitmojiCreateCTAMessageFetchingPlugin ctaMessageId]
// Type encoding: @16@0:8
// Implementation: 0x105f7b820

// -[SCBitmojiCreateCTAMessageFetchingPlugin setCtaMessageId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f7b82c

// -[SCBitmojiCreateCTAMessageFetchingPlugin ctaOrderKey]
// Type encoding: @16@0:8
// Implementation: 0x105f7b834

// -[SCBitmojiCreateCTAMessageFetchingPlugin setCtaOrderKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f7b840

// -[SCBitmojiCreateCTAMessageFetchingPlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f7b848

@end
