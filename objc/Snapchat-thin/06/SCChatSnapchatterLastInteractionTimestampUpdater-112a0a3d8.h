// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatSnapchatterLastInteractionTimestampUpdater
// Superclass: NSObject
// Address: 0x112a0a3d8

@interface SCChatSnapchatterLastInteractionTimestampUpdater

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatSnapchatterLastInteractionTimestampUpdater initWithUserId:snapchattersDataMutator:snapchattersDataTracker:friendsFeedEntryStore:crashLogger:translator:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x104f45354

// -[SCChatSnapchatterLastInteractionTimestampUpdater subscribeToFeedUpdates]
// Type encoding: v16@0:8
// Implementation: 0x104f45524

// -[SCChatSnapchatterLastInteractionTimestampUpdater stopObservingFeedUpdates]
// Type encoding: v16@0:8
// Implementation: 0x104f456bc

// -[SCChatSnapchatterLastInteractionTimestampUpdater _updateSnapchatterWithUpdatedFeedEntries:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f456c4

// -[SCChatSnapchatterLastInteractionTimestampUpdater didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f45940

// -[SCChatSnapchatterLastInteractionTimestampUpdater didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x104f45944

// -[SCChatSnapchatterLastInteractionTimestampUpdater didEndSnapchattersFetchDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x104f45948

// -[SCChatSnapchatterLastInteractionTimestampUpdater _didEndSnapchattersFetchDataRequest]
// Type encoding: v16@0:8
// Implementation: 0x104f45a54

// -[SCChatSnapchatterLastInteractionTimestampUpdater _updateTimestampsWithUserIdToTimestamps:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f45a8c

// -[SCChatSnapchatterLastInteractionTimestampUpdater .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104f45b68

@end
