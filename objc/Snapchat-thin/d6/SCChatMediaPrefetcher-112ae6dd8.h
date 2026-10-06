// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatMediaPrefetcher
// Superclass: NSObject
// Address: 0x112ae6dd8

@interface SCChatMediaPrefetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatMediaPrefetcher initWithPrefetchableMessagesFetcher:messageActionHandler:graphene:currentUserId:messagingExperimentService:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1004e8dec

// -[SCChatMediaPrefetcher performPrefetchIfNecessaryForConversationIds:groupIds:notificationOpenConversationId:requestContext:dispatchQueue:completionBlock:]
// Type encoding: v64@0:8@16@24@32q40@48@?56
// Implementation: 0x1065a03d0

// -[SCChatMediaPrefetcher _performPrefetchForConversationIds:groupIds:notificationOpenConversationId:requestContext:completionBlock:]
// Type encoding: v56@0:8@16@24@32q40@?48
// Implementation: 0x1065a063c

// -[SCChatMediaPrefetcher _processPrefetchCandidates:groupIds:notificationOpenConversationId:requestContext:completionBlock:]
// Type encoding: v56@0:8@16@24@32q40@?48
// Implementation: 0x1065a0858

// -[SCChatMediaPrefetcher _logMetric:isGroupConversation:count:]
// Type encoding: v36@0:8@16B24q28
// Implementation: 0x1065a0b24

// -[SCChatMediaPrefetcher loadStartedForMediaContent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065a0bd8

// -[SCChatMediaPrefetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1065a0bdc

@end
