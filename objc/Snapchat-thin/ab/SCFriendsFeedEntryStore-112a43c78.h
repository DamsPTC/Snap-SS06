// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendsFeedEntryStore
// Superclass: NSObject
// Address: 0x112a43c78

@interface SCFriendsFeedEntryStore

// Property: arroyoSyncedFeedEntriesUpdateEvents; attributes: T@"SCObservable",R,N,V_arroyoSyncedFeedEntriesUpdateEvents

// -[SCFriendsFeedEntryStore initWithFriendsFeedReadyLogger:ghostToFeedLogger:friendsFeedGraphene:sequenceTracker:performerProvider:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10041e65c

// -[SCFriendsFeedEntryStore friendsFeedUpdateEvents]
// Type encoding: @16@0:8
// Implementation: 0x10041e80c

// -[SCFriendsFeedEntryStore updateFeedEntries:multiRecipientFeedEntries:deletedFeedEntries:multiRecipientFeedEntriesDeleted:metadata:updateType:fetchContext:isInitialFetchFeed:queryTriggered:]
// Type encoding: v80@0:8@16@24@32@40@48q56@64B72B76
// Implementation: 0x1006384ac

// -[SCFriendsFeedEntryStore purgeFetchContexts]
// Type encoding: v16@0:8
// Implementation: 0x100bb90e8

// -[SCFriendsFeedEntryStore dispose]
// Type encoding: v16@0:8
// Implementation: 0x1055222d4

// -[SCFriendsFeedEntryStore _deferredFriendsFeedUpdateEventsForObserver:]
// Type encoding: @24@0:8@16
// Implementation: 0x10041eab8

// -[SCFriendsFeedEntryStore _updateFeedEntries:multiRecipientFeedEntries:deletedFeedEntries:multiRecipientFeedEntriesDeleted:metadata:updateType:fetchContext:isInitialFetchFeed:queryTriggered:]
// Type encoding: v80@0:8@16@24@32@40@48q56@64B72B76
// Implementation: 0x100639484

// -[SCFriendsFeedEntryStore _logSyncFeedMetricsForMetadata:syncResult:fetchContext:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x10086f5ec

// -[SCFriendsFeedEntryStore _updateCacheWithFeedEntries:multiRecipientFeedEntries:deletedFeedEntries:multiRecipientFeedEntriesDeleted:updateType:fetchContext:isInitialFetchFeed:queryTriggered:isSuccessfulSync:]
// Type encoding: v76@0:8@16@24@32@40q48@56B64B68B72
// Implementation: 0x10063980c

// -[SCFriendsFeedEntryStore _dispose]
// Type encoding: v16@0:8
// Implementation: 0x105522308

// -[SCFriendsFeedEntryStore arroyoSyncedFeedEntriesUpdateEvents]
// Type encoding: @16@0:8
// Implementation: 0x1004fd53c

// -[SCFriendsFeedEntryStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105522358

@end
