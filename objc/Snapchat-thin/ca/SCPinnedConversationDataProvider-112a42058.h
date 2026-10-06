// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPinnedConversationDataProvider
// Superclass: NSObject
// Address: 0x112a42058

@interface SCPinnedConversationDataProvider


// -[SCPinnedConversationDataProvider initWithBlizzardLogger:conversationIdResolver:friendsFeedEntryStore:nativeSessionManagerFuture:performerProvider:translator:userId:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x100badbbc

// -[SCPinnedConversationDataProvider subscribeToFeedUpdates]
// Type encoding: v16@0:8
// Implementation: 0x1054ec230

// -[SCPinnedConversationDataProvider stopObservingFeedUpdates]
// Type encoding: v16@0:8
// Implementation: 0x1054ec3e8

// -[SCPinnedConversationDataProvider pinnedTimestampsByFeedId]
// Type encoding: @16@0:8
// Implementation: 0x100bae334

// -[SCPinnedConversationDataProvider hasPinnedConversationWithId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1054ec414

// -[SCPinnedConversationDataProvider addPinnedConversationWithId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1054ec494

// -[SCPinnedConversationDataProvider removePinnedConversationWithId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1054ec920

// -[SCPinnedConversationDataProvider _updateNativePinnedStatusWithPinned:conversationId:completion:]
// Type encoding: v36@0:8B16@20@?28
// Implementation: 0x1054ecd8c

// -[SCPinnedConversationDataProvider _updateWithFeedEntries:deletedFeedEntries:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1054ece9c

// -[SCPinnedConversationDataProvider _logChatConversationPinWithIdentifier:pinRank:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1054ed3e4

// -[SCPinnedConversationDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054ed50c

@end
