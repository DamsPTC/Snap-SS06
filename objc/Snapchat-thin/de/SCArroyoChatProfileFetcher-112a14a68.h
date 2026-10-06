// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCArroyoChatProfileFetcher
// Superclass: NSObject
// Address: 0x112a14a68

@interface SCArroyoChatProfileFetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCArroyoChatProfileFetcher initWithNativeSessionManager:graphene:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105096d30

// -[SCArroyoChatProfileFetcher nativeConversationManager]
// Type encoding: @16@0:8
// Implementation: 0x105096e08

// -[SCArroyoChatProfileFetcher savedMediaChatMessagesInConversation:numberOfMessages:paginationCursor:completionQueue:completionHandler:]
// Type encoding: v56@0:8@16Q24@32@40@?48
// Implementation: 0x105096e50

// -[SCArroyoChatProfileFetcher savedAttachmentsChatMessagesInConversation:numberOfMessages:paginationCursor:completionQueue:completionHandler:]
// Type encoding: v56@0:8@16Q24@32@40@?48
// Implementation: 0x105096ff8

// -[SCArroyoChatProfileFetcher _waitForSavedChatContentInConversation:savedContentType:numOfMessagesToFetch:paginationCursor:completionQueue:completionHandler:]
// Type encoding: v64@0:8@16q24Q32@40@48@?56
// Implementation: 0x1050971a0

// -[SCArroyoChatProfileFetcher _logGrapheneMetricsForContentType:paginationCursor:numberOfLocalMessagesFetched:numberOfServerMessagesFetched:numberOfServerRequests:startTimestamp:localFetchTimestamp:endTimestamp:hasMoreMessages:success:]
// Type encoding: v88@0:8q16@24Q32Q40Q48d56d64d72B80B84
// Implementation: 0x105097d98

// -[SCArroyoChatProfileFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105098070

@end
