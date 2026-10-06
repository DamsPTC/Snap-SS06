// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: CTPDocObjectsExternalIdsPersistenceService
// Superclass: NSObject
// Address: 0x112a45b68

@interface CTPDocObjectsExternalIdsPersistenceService


// -[CTPDocObjectsExternalIdsPersistenceService initWithDocObjectContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055525c0

// -[CTPDocObjectsExternalIdsPersistenceService externalIdSyncMetadata:]
// Type encoding: @24@0:8Q16
// Implementation: 0x105552698

// -[CTPDocObjectsExternalIdsPersistenceService checkExternalId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055527fc

// -[CTPDocObjectsExternalIdsPersistenceService setExternalIdsForExternalIdType:externalIds:]
// Type encoding: @32@0:8Q16@24
// Implementation: 0x105552994

// -[CTPDocObjectsExternalIdsPersistenceService upsertExternalIds:deletedExternalIds:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105552b40

// -[CTPDocObjectsExternalIdsPersistenceService synchronouslyUpsertExternalIds:deletedExternalIds:transactionContext:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105552d5c

// -[CTPDocObjectsExternalIdsPersistenceService docObjectContext]
// Type encoding: @16@0:8
// Implementation: 0x105552d78

// -[CTPDocObjectsExternalIdsPersistenceService _performExternalIdSyncForExternalIdType:withPromise:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x105552d80

// -[CTPDocObjectsExternalIdsPersistenceService _performCheckForId:withPromise:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105553134

// -[CTPDocObjectsExternalIdsPersistenceService _performSetIdsForType:items:promise:]
// Type encoding: v40@0:8Q16@24@32
// Implementation: 0x105553634

// -[CTPDocObjectsExternalIdsPersistenceService _performUpsertIds:deletedIds:promise:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105553fb0

// -[CTPDocObjectsExternalIdsPersistenceService _synchronouslyPerformUpsertIds:deletedIds:transactionContext:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105554448

// -[CTPDocObjectsExternalIdsPersistenceService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1055548d4

@end
