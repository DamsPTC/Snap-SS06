// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNMessagingConversationMessageMetricsData
// Superclass: NSObject
// Address: 0x112c7f348

@interface SCNMessagingConversationMessageMetricsData

// Property: analyticsMessageId; attributes: T@"NSString",C,N,V_analyticsMessageId
// Property: conversationId; attributes: T@"SCNMessagingUUID",&,N,V_conversationId
// Property: type; attributes: Tq,N,V_type
// Property: oneToOneMetricsData; attributes: T@"SCNMessagingConversationMessageOneToOneMetricsData",&,N,V_oneToOneMetricsData
// Property: groupMetricsData; attributes: T@"SCNMessagingConversationMessageGroupMetricsData",&,N,V_groupMetricsData

// -[SCNMessagingConversationMessageMetricsData initWithAnalyticsMessageId:conversationId:type:oneToOneMetricsData:groupMetricsData:]
// Type encoding: @56@0:8@16@24q32@40@48
// Implementation: 0x10b6367ec

// -[SCNMessagingConversationMessageMetricsData initWithAnalyticsMessageId:conversationId:type:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x10b636938

// -[SCNMessagingConversationMessageMetricsData analyticsMessageId]
// Type encoding: @16@0:8
// Implementation: 0x10b636944

// -[SCNMessagingConversationMessageMetricsData setAnalyticsMessageId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63694c

// -[SCNMessagingConversationMessageMetricsData conversationId]
// Type encoding: @16@0:8
// Implementation: 0x10b636954

// -[SCNMessagingConversationMessageMetricsData setConversationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63695c

// -[SCNMessagingConversationMessageMetricsData type]
// Type encoding: q16@0:8
// Implementation: 0x10b63697c

// -[SCNMessagingConversationMessageMetricsData setType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b636984

// -[SCNMessagingConversationMessageMetricsData oneToOneMetricsData]
// Type encoding: @16@0:8
// Implementation: 0x10b63698c

// -[SCNMessagingConversationMessageMetricsData setOneToOneMetricsData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b636994

// -[SCNMessagingConversationMessageMetricsData groupMetricsData]
// Type encoding: @16@0:8
// Implementation: 0x10b6369b4

// -[SCNMessagingConversationMessageMetricsData setGroupMetricsData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6369bc

// -[SCNMessagingConversationMessageMetricsData .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b6369dc

@end
