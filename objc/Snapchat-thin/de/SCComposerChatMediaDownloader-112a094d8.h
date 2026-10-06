// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerChatMediaDownloader
// Superclass: NSObject
// Address: 0x112a094d8

@interface SCComposerChatMediaDownloader

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCComposerChatMediaDownloader initWithChatMediaFetcher:chatContentDelivery:nativeMessagingSessionManager:travelModeSignalProvider:grapheneLogger:userId:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x100bdbdcc

// -[SCComposerChatMediaDownloader nativeConversationManager]
// Type encoding: @16@0:8
// Implementation: 0x104f2af2c

// -[SCComposerChatMediaDownloader supportedURLSchemes]
// Type encoding: @16@0:8
// Implementation: 0x104f2af74

// -[SCComposerChatMediaDownloader requestPayloadWithURL:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x104f2afe0

// -[SCComposerChatMediaDownloader loadImageWithRequestPayload:parameters:completion:]
// Type encoding: @48@0:8@16{SCValdiAssetRequestParameters=qq}24@?40
// Implementation: 0x104f2b1f4

// -[SCComposerChatMediaDownloader _retrieveMediaForQuotedMessage:conversationId:messageId:mediaId:loadFromCacheOnly:waitForSavedToCache:downloadSource:isQuoted:completion:]
// Type encoding: @76@0:8@16@24@32@40B48B52q56B64@?68
// Implementation: 0x104f2b6cc

// -[SCComposerChatMediaDownloader _retrieveCachedImageForMedia:conversationId:messageId:waitForSavedToCache:messageTypeString:downloadSource:isQuoted:completion:]
// Type encoding: @72@0:8@16@24@32B40@44q52B60@?64
// Implementation: 0x104f2b974

// -[SCComposerChatMediaDownloader _waitForLocalMediaToSaveInCache:conversationId:messageId:messageTypeString:downloadSource:isQuoted:cancelableGroup:completion:]
// Type encoding: v76@0:8@16@24@32@40q48B56@60@?68
// Implementation: 0x104f2bd08

// -[SCComposerChatMediaDownloader _retrieveImageForMedia:conversationId:messageId:messageContents:loadFromCacheOnly:downloadSource:isQuoted:completion:]
// Type encoding: @72@0:8@16@24@32@40B48q52B60@?64
// Implementation: 0x104f2c2c8

// -[SCComposerChatMediaDownloader _logRetrieveForMedia:conversationId:messageId:messageTypeString:isQuoted:error:]
// Type encoding: v60@0:8@16@24@32@40B48q52
// Implementation: 0x104f2c610

// -[SCComposerChatMediaDownloader _logLocalCacheMissForMedia:conversationId:messageId:messageTypeString:isQuoted:]
// Type encoding: v52@0:8@16@24@32@40B48
// Implementation: 0x104f2c6a0

// -[SCComposerChatMediaDownloader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104f2c6f4

@end
