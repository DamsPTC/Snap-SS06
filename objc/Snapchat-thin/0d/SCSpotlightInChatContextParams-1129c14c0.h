// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightInChatContextParams
// Superclass: NSObject
// Address: 0x1129c14c0

@interface SCSpotlightInChatContextParams

// Property: userId; attributes: T@"NSString",N,R
// Property: username; attributes: T@"NSString",N,R
// Property: displayName; attributes: T@"NSString",N,R
// Property: conversationId; attributes: T@"NSString",N,R
// Property: analyticsId; attributes: T@"SCConversationAnalyticsId",N,R,VanalyticsId
// Property: recipientCount; attributes: TQ,N,R,VrecipientCount
// Property: isGroup; attributes: TB,N,R,VisGroup
// Property: quotedMessageId; attributes: T@"NSString",N,C
// Property: quotedAnalyticsMessageId; attributes: T@"NSString",N,C
// Property: replyContextParamsByUserId; attributes: T@"NSDictionary",N,R

// -[SCSpotlightInChatContextParams userId]
// Type encoding: @16@0:8
// Implementation: 0x1044c0cb8

// -[SCSpotlightInChatContextParams username]
// Type encoding: @16@0:8
// Implementation: 0x1044c0cc4

// -[SCSpotlightInChatContextParams displayName]
// Type encoding: @16@0:8
// Implementation: 0x1044c0cd0

// -[SCSpotlightInChatContextParams conversationId]
// Type encoding: @16@0:8
// Implementation: 0x1044c0cdc

// -[SCSpotlightInChatContextParams analyticsId]
// Type encoding: @16@0:8
// Implementation: 0x1044c0d40

// -[SCSpotlightInChatContextParams recipientCount]
// Type encoding: Q16@0:8
// Implementation: 0x1044c0d50

// -[SCSpotlightInChatContextParams isGroup]
// Type encoding: B16@0:8
// Implementation: 0x1044c0d60

// -[SCSpotlightInChatContextParams quotedMessageId]
// Type encoding: @16@0:8
// Implementation: 0x1044c0d70

// -[SCSpotlightInChatContextParams setQuotedMessageId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1044c0d7c

// -[SCSpotlightInChatContextParams quotedAnalyticsMessageId]
// Type encoding: @16@0:8
// Implementation: 0x1044c0d88

// -[SCSpotlightInChatContextParams setQuotedAnalyticsMessageId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1044c0e08

// -[SCSpotlightInChatContextParams replyContextParamsByUserId]
// Type encoding: @16@0:8
// Implementation: 0x1044c0e8c

// -[SCSpotlightInChatContextParams initWithUserId:username:displayName:conversationId:analyticsId:recipientCount:isGroup:quotedMessageId:quotedAnalyticsMessageId:]
// Type encoding: @84@0:8@16@24@32@40@48Q56B64@68@76
// Implementation: 0x1044c10ac

// -[SCSpotlightInChatContextParams initWithUserId:username:displayName:conversationId:analyticsId:recipientCount:isGroup:quotedMessageId:quotedAnalyticsMessageId:replyContextParamsByUserId:]
// Type encoding: @92@0:8@16@24@32@40@48Q56B64@68@76@84
// Implementation: 0x1044c1558

// -[SCSpotlightInChatContextParams copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x1044c19a0

// -[SCSpotlightInChatContextParams init]
// Type encoding: @16@0:8
// Implementation: 0x1044c1a00

// -[SCSpotlightInChatContextParams .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1044c1a60

@end
