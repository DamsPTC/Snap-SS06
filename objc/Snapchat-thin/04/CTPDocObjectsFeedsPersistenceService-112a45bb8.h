// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: CTPDocObjectsFeedsPersistenceService
// Superclass: NSObject
// Address: 0x112a45bb8

@interface CTPDocObjectsFeedsPersistenceService


// -[CTPDocObjectsFeedsPersistenceService initWithDocObjectContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055565fc

// -[CTPDocObjectsFeedsPersistenceService feedNodeForContext:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10555671c

// -[CTPDocObjectsFeedsPersistenceService upsertFeedNode:]
// Type encoding: @24@0:8@16
// Implementation: 0x105556880

// -[CTPDocObjectsFeedsPersistenceService deleteFeedNodeForContext:]
// Type encoding: @24@0:8Q16
// Implementation: 0x105556a18

// -[CTPDocObjectsFeedsPersistenceService deleteAllFeedNodes]
// Type encoding: @16@0:8
// Implementation: 0x105556c74

// -[CTPDocObjectsFeedsPersistenceService setFeedIdentifiers:forDeltaSyncKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105556de4

// -[CTPDocObjectsFeedsPersistenceService removeFeedIdForDeltaSyncKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x105556e6c

// -[CTPDocObjectsFeedsPersistenceService feedIdentifiersForDeltaSyncKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x105556ed0

// -[CTPDocObjectsFeedsPersistenceService rootFeedTreeObservable:]
// Type encoding: @24@0:8Q16
// Implementation: 0x105556f68

// -[CTPDocObjectsFeedsPersistenceService _performDeleteNodeForContext:completionBlock:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x1055572e8

// -[CTPDocObjectsFeedsPersistenceService _performFeedNodeForContext:withPromise:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x1055577ac

// -[CTPDocObjectsFeedsPersistenceService _performDeleteAllNodeswithPromise:]
// Type encoding: v24@0:8@16
// Implementation: 0x105557a8c

// -[CTPDocObjectsFeedsPersistenceService _performUpsertFeedNode:withPromise:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105557f0c

// -[CTPDocObjectsFeedsPersistenceService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1055581bc

@end
