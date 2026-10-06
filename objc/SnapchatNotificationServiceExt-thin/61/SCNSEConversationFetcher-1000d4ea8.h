// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNSEConversationFetcher
// Superclass: NSObject
// Address: 0x1000d4ea8

@interface SCNSEConversationFetcher


// -[SCNSEConversationFetcher initWithProcessingScope:arroyoAdapter:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1000399c0

// -[SCNSEConversationFetcher initWithTimeProvider:event:arroyoAdapter:decryptedPayload:grapheneLogger:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x100039ab0

// -[SCNSEConversationFetcher consumePayloadOrDeltaSyncConversation:messageId:conversationVersion:notificationType:completionHandler:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x100039bd4

// -[SCNSEConversationFetcher _logGrapheneExtensionTotalConversationSyncLatencyMs:notificationType:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10003a05c

// -[SCNSEConversationFetcher _logGrapheneExtensionConversationSyncFailedLatencyMs:callbackStatus:notificationType:]
// Type encoding: v40@0:8q16q24@32
// Implementation: 0x10003a164

// -[SCNSEConversationFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10003a2ac

@end
