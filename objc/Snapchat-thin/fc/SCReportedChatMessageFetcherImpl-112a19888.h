// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCReportedChatMessageFetcherImpl
// Superclass: NSObject
// Address: 0x112a19888

@interface SCReportedChatMessageFetcherImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCReportedChatMessageFetcherImpl initWithConversationIdResolver:chatMessageActionHandler:conversationDataFetcher:messageReportingPluginManager:circumstanceEngine:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10511a714

// -[SCReportedChatMessageFetcherImpl fetchChatMessagesWithClientMessageId:conversationId:numMessages:]
// Type encoding: @40@0:8@16@24d32
// Implementation: 0x10511a860

// -[SCReportedChatMessageFetcherImpl fetchRecentMessagesWithParticipantId:numMessages:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x10511aa68

// -[SCReportedChatMessageFetcherImpl _fetchMerlinRequestWithResponseMessage:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10511af8c

// -[SCReportedChatMessageFetcherImpl _fetchChatMessagesWithClientMessageId:conversationId:numMessages:completion:]
// Type encoding: v48@0:8@16@24d32@?40
// Implementation: 0x10511b1a8

// -[SCReportedChatMessageFetcherImpl _generateReportedChatWithMessages:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10511b384

// -[SCReportedChatMessageFetcherImpl _createReportedChatMessagesFromMessages:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10511b4b8

// -[SCReportedChatMessageFetcherImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10511bfa8

@end
