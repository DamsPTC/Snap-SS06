// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCProfileArroyoChatMediaDataCoordinator
// Superclass: NSObject
// Address: 0x112a14658

@interface SCProfileArroyoChatMediaDataCoordinator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCProfileArroyoChatMediaDataCoordinator initWithConversationId:conversationType:numberOfMessagesPerPage:savedMediaChatMessagesFetcher:chatMessagesUpdateTracker:grapheneRegistry:profileType:chatMessageActionHandler:]
// Type encoding: @80@0:8@16q24Q32@40@48@56q64@72
// Implementation: 0x105087a5c

// -[SCProfileArroyoChatMediaDataCoordinator chatMedia]
// Type encoding: @16@0:8
// Implementation: 0x105087cc4

// -[SCProfileArroyoChatMediaDataCoordinator chatMediaWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105087de4

// -[SCProfileArroyoChatMediaDataCoordinator hasMoreChatMedia]
// Type encoding: B16@0:8
// Implementation: 0x105087f50

// -[SCProfileArroyoChatMediaDataCoordinator fetchMoreChatMedia]
// Type encoding: v16@0:8
// Implementation: 0x10508800c

// -[SCProfileArroyoChatMediaDataCoordinator _fetchMoreChatMedia]
// Type encoding: v16@0:8
// Implementation: 0x1050880e0

// -[SCProfileArroyoChatMediaDataCoordinator _updateMediaFromAppendedMessages:nextPaginationCursor:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1050883c8

// -[SCProfileArroyoChatMediaDataCoordinator didUpdateConversation:updatedMessages:removedMessageIds:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105088a94

// -[SCProfileArroyoChatMediaDataCoordinator _updateMediaFromUpdatedMessages:removedMessageIds:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105088bf4

// -[SCProfileArroyoChatMediaDataCoordinator didResetConversation:messages:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105089184

// -[SCProfileArroyoChatMediaDataCoordinator _resetMediaFromMessages:]
// Type encoding: v24@0:8@16
// Implementation: 0x1050892b4

// -[SCProfileArroyoChatMediaDataCoordinator addUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10508952c

// -[SCProfileArroyoChatMediaDataCoordinator removeUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105089534

// -[SCProfileArroyoChatMediaDataCoordinator _announceUpdate]
// Type encoding: v16@0:8
// Implementation: 0x10508953c

// -[SCProfileArroyoChatMediaDataCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105089600

// +[SCProfileArroyoChatMediaDataCoordinator announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105089520

@end
