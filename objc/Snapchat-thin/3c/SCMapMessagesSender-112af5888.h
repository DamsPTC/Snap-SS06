// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapMessagesSender
// Superclass: NSObject
// Address: 0x112af5888

@interface SCMapMessagesSender


// -[SCMapMessagesSender initWithCoreMessageSender:textMessageSender:externalMediaPreparer:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106752204

// -[SCMapMessagesSender sendMapSnapShareMessage:conversations:platformAnalytics:additionalTextPlatformAnalytics:completionQueue:completionHandler:]
// Type encoding: v64@0:8@16@24@32@40@48@?56
// Implementation: 0x1067522d0

// -[SCMapMessagesSender sendDropShare:conversations:platformAnalytics:completionQueue:completionHandler:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x106752688

// -[SCMapMessagesSender sendPlaceShareForPlaceID:additionalText:conversations:platformAnalytics:additionalTextPlatformAnalytics:completionQueue:completionHandler:]
// Type encoding: v72@0:8@16@24@32@40@48@56@?64
// Implementation: 0x106752aa0

// -[SCMapMessagesSender sendLocationShareToConversationId:platformAnalytics:completionQueue:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106752df0

// -[SCMapMessagesSender sendLocationCardMessageToConversationId:type:platformAnalytics:completionQueue:completionHandler:]
// Type encoding: v56@0:8@16q24@32@40@?48
// Implementation: 0x106753044

// -[SCMapMessagesSender sendLocationStatusAcceptedRequestToConversationId:isLiveRequest:completionQueue:completionHandler:]
// Type encoding: v44@0:8@16B24@28@?36
// Implementation: 0x1067532d8

// -[SCMapMessagesSender sendVisitedByCardToConversations:recipientCount:visitedByUserId:placesId:source:completionQueue:completionHandler:]
// Type encoding: v72@0:8@16q24@32@40q48@56@?64
// Implementation: 0x106753504

// -[SCMapMessagesSender .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1067538c4

@end
