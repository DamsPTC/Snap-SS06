// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCProfileArroyoChatAttachmentDataCoordinator
// Superclass: NSObject
// Address: 0x112a13d48

@interface SCProfileArroyoChatAttachmentDataCoordinator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCProfileArroyoChatAttachmentDataCoordinator initWithConversationId:ownerID:conversationType:numberOfMessagesPerPage:savedAttachmentMessagesFetcher:chatMessagesUpdateTracker:grapheneRegistry:profileType:]
// Type encoding: @80@0:8@16@24q32Q40@48@56@64q72
// Implementation: 0x1050736ac

// -[SCProfileArroyoChatAttachmentDataCoordinator chatAttachments]
// Type encoding: @16@0:8
// Implementation: 0x105073908

// -[SCProfileArroyoChatAttachmentDataCoordinator hasMoreChatAttachments]
// Type encoding: B16@0:8
// Implementation: 0x105073a28

// -[SCProfileArroyoChatAttachmentDataCoordinator fetchMoreChatAttachments]
// Type encoding: v16@0:8
// Implementation: 0x105073ae4

// -[SCProfileArroyoChatAttachmentDataCoordinator _fetchMoreChatAttachments]
// Type encoding: v16@0:8
// Implementation: 0x105073bb8

// -[SCProfileArroyoChatAttachmentDataCoordinator _updateAttachmentsFromAppendedMessages:nextPaginationCursor:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105073d88

// -[SCProfileArroyoChatAttachmentDataCoordinator didUpdateConversation:updatedMessages:removedMessageIds:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1050743dc

// -[SCProfileArroyoChatAttachmentDataCoordinator _updateAttachmentsFromAppendedMessages:removedMessageIds:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10507453c

// -[SCProfileArroyoChatAttachmentDataCoordinator didResetConversation:messages:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1050749c4

// -[SCProfileArroyoChatAttachmentDataCoordinator _resetAttachmentsFromMessages:]
// Type encoding: v24@0:8@16
// Implementation: 0x105074af4

// -[SCProfileArroyoChatAttachmentDataCoordinator addUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105074c94

// -[SCProfileArroyoChatAttachmentDataCoordinator removeUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105074c9c

// -[SCProfileArroyoChatAttachmentDataCoordinator _announceUpdate]
// Type encoding: v16@0:8
// Implementation: 0x105074ca4

// -[SCProfileArroyoChatAttachmentDataCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105074d68

// +[SCProfileArroyoChatAttachmentDataCoordinator announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105074c88

@end
