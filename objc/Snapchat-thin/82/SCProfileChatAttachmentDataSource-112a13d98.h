// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCProfileChatAttachmentDataSource
// Superclass: NSObject
// Address: 0x112a13d98

@interface SCProfileChatAttachmentDataSource

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCProfileChatAttachmentDataSource initWithUserSession:ownerID:conversationId:conversationType:chatAttachmentDataStore:savedAttachmentMessagesFetcher:chatMessagesUpdateTracker:grapheneServices:]
// Type encoding: @80@0:8@16@24@32q40@48@56@64@72
// Implementation: 0x105074de0

// -[SCProfileChatAttachmentDataSource addUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105074f50

// -[SCProfileChatAttachmentDataSource removeUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105074f58

// -[SCProfileChatAttachmentDataSource chatAttachmentDataModels]
// Type encoding: @16@0:8
// Implementation: 0x105074f60

// -[SCProfileChatAttachmentDataSource hasUnloadedContent]
// Type encoding: B16@0:8
// Implementation: 0x105074f68

// -[SCProfileChatAttachmentDataSource fetchMoreSavedInChatAttachmentDataModels]
// Type encoding: v16@0:8
// Implementation: 0x105074f70

// -[SCProfileChatAttachmentDataSource _dispatchSavedInChatCardsUpdate]
// Type encoding: v16@0:8
// Implementation: 0x105074f78

// -[SCProfileChatAttachmentDataSource didUpdateWithAnnouncerIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x10507503c

// -[SCProfileChatAttachmentDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1050750c0

// +[SCProfileChatAttachmentDataSource announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105074f44

@end
