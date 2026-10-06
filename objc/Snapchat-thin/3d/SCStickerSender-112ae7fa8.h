// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStickerSender
// Superclass: NSObject
// Address: 0x112ae7fa8

@interface SCStickerSender


// -[SCStickerSender initWithCoreMessageSender:externalMediaPreparer:itemTransformer:stickerLogger:creativeToolsABProvider:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1065c534c

// -[SCStickerSender _shouldMarkItemInstanceAsExternalContent:]
// Type encoding: B24@0:8@16
// Implementation: 0x1065c5470

// -[SCStickerSender sendSticker:quotedMessageId:sendContextSource:conversationIds:platformAnalytics:completionHandler:]
// Type encoding: v64@0:8@16@24q32@40@48@?56
// Implementation: 0x1065c5574

// -[SCStickerSender sendCTPItemInstance:quotedMessageId:sendContextSource:conversationIds:platformAnalytics:completionHandler:]
// Type encoding: v64@0:8@16@24q32@40@48@?56
// Implementation: 0x1065c58ec

// -[SCStickerSender sendEmoji:quotedMessageId:sendContextSource:conversationIds:platformAnalytics:completionHandler:]
// Type encoding: v64@0:8@16@24q32@40@48@?56
// Implementation: 0x1065c5fb4

// -[SCStickerSender sendCustomSticker:quotedMessageId:conversationIds:platformAnalytics:completionHandler:isMemojiSticker:]
// Type encoding: v60@0:8@16@24@32@40@?48B56
// Implementation: 0x1065c625c

// -[SCStickerSender .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1065c666c

@end
