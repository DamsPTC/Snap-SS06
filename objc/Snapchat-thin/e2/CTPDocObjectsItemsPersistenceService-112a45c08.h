// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: CTPDocObjectsItemsPersistenceService
// Superclass: NSObject
// Address: 0x112a45c08

@interface CTPDocObjectsItemsPersistenceService


// -[CTPDocObjectsItemsPersistenceService initWithDocObjectContext:persistenceLogger:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105558314

// -[CTPDocObjectsItemsPersistenceService feedSyncMetadataForFeedId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10555841c

// -[CTPDocObjectsItemsPersistenceService itemsForFeedId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055585b4

// -[CTPDocObjectsItemsPersistenceService itemForCTId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10555876c

// -[CTPDocObjectsItemsPersistenceService sectionsForFeedId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105558788

// -[CTPDocObjectsItemsPersistenceService deleteSyncMetadataForFeedId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105558920

// -[CTPDocObjectsItemsPersistenceService deleteAllItemsMatchingCtId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105558cdc

// -[CTPDocObjectsItemsPersistenceService deleteSyncMetadataDataForFeedTreeContext:]
// Type encoding: @24@0:8Q16
// Implementation: 0x105559098

// -[CTPDocObjectsItemsPersistenceService upsertItemsForFeedId:upsertedItems:deletedItemIds:updateFeedSyncMetadata:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x105559410

// -[CTPDocObjectsItemsPersistenceService updateItemforItemID:feedID:rankID:completionBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x105559658

// -[CTPDocObjectsItemsPersistenceService synchronouslyUpsertItemsForFeedId:upsertedItems:deletedItemIds:updateFeedSyncMetadata:transactionContext:]
// Type encoding: @52@0:8@16@24@32B40@44
// Implementation: 0x10555a240

// -[CTPDocObjectsItemsPersistenceService setItemsForFeedId:items:doNotClearIfNoSyncData:pageToken:]
// Type encoding: @44@0:8@16@24B32@36
// Implementation: 0x10555ad98

// -[CTPDocObjectsItemsPersistenceService synchronouslyDeleteItemsForFeedId:transactionContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10555afc0

// -[CTPDocObjectsItemsPersistenceService deleteAllItems]
// Type encoding: @16@0:8
// Implementation: 0x10555b64c

// -[CTPDocObjectsItemsPersistenceService observableForUpdatesForFeedId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10555b7a4

// -[CTPDocObjectsItemsPersistenceService docObjectContext]
// Type encoding: @16@0:8
// Implementation: 0x10555bd20

// -[CTPDocObjectsItemsPersistenceService _performFeedSyncMetadataForFeedId:withPromise:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10555bd28

// -[CTPDocObjectsItemsPersistenceService _performItemsForFeedId:withPromise:startTime:]
// Type encoding: v40@0:8@16@24d32
// Implementation: 0x10555c208

// -[CTPDocObjectsItemsPersistenceService _synchronousPerformItemForCTId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10555c72c

// -[CTPDocObjectsItemsPersistenceService _sortedPersistedItemsForFetchResult:]
// Type encoding: @24@0:8@16
// Implementation: 0x10555ca1c

// -[CTPDocObjectsItemsPersistenceService _sortedPersistedSectionsForFetchResult:]
// Type encoding: @24@0:8@16
// Implementation: 0x10555cb98

// -[CTPDocObjectsItemsPersistenceService _performSectionsForFeedId:withPromise:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10555d114

// -[CTPDocObjectsItemsPersistenceService _sortedPersistedSectionArray:]
// Type encoding: @24@0:8@16
// Implementation: 0x10555d5d4

// -[CTPDocObjectsItemsPersistenceService _sortedPersistedItemArray:]
// Type encoding: @24@0:8@16
// Implementation: 0x10555d6f4

// -[CTPDocObjectsItemsPersistenceService _performSetItemsForFeedId:items:doNotClearIfNoSyncData:pageToken:promise:]
// Type encoding: v52@0:8@16@24B32@36@44
// Implementation: 0x10555d814

// -[CTPDocObjectsItemsPersistenceService _performDeleteFeedSyncDataForFeedTreeContext:completionBlock:]
// Type encoding: v28@0:8c16@?20
// Implementation: 0x10555e8d0

// -[CTPDocObjectsItemsPersistenceService _performDeleteFeedSyncDataForFeedId:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10555eef4

// -[CTPDocObjectsItemsPersistenceService _performUpsertItemsForFeedId:upsertedItems:deletedItemIds:updateFeedSyncMetadata:promise:startTime:]
// Type encoding: v60@0:8@16@24@32B40@44d52
// Implementation: 0x10555f664

// -[CTPDocObjectsItemsPersistenceService _performDeleteItemsWithCtId:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10555fb1c

// -[CTPDocObjectsItemsPersistenceService _performDeleteAllItemsWithPromise:]
// Type encoding: v24@0:8@16
// Implementation: 0x105560144

// -[CTPDocObjectsItemsPersistenceService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10556094c

@end
