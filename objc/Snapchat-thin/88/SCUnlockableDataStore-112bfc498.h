// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnlockableDataStore
// Superclass: NSObject
// Address: 0x112bfc498

@interface SCUnlockableDataStore

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: unlockedLenses; attributes: T@"NSArray",R,N
// Property: unlockedLensesFuture; attributes: T@"SCFuture",R,N

// -[SCUnlockableDataStore _restoreSavedState]
// Type encoding: v16@0:8
// Implementation: 0x1004e6020

// -[SCUnlockableDataStore _resetStateWithLoadedState:]
// Type encoding: v24@0:8@16
// Implementation: 0x1004e6398

// -[SCUnlockableDataStore _saveState]
// Type encoding: v16@0:8
// Implementation: 0x10aebaa00

// -[SCUnlockableDataStore _saveStateSafely]
// Type encoding: v16@0:8
// Implementation: 0x10aebaa60

// -[SCUnlockableDataStore _subscribeForLensDataStoreEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x1004e5f3c

// -[SCUnlockableDataStore clear]
// Type encoding: v16@0:8
// Implementation: 0x10aebadbc

// -[SCUnlockableDataStore initWithUnlockableRemoteFetcher:lensUserProvider:archiveUtils:removedLensesFilter:creatorBlacklistFilter:lensMetadataStoreEvents:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1004e56fc

// -[SCUnlockableDataStore _ensureNonNilObjectsWithState:]
// Type encoding: v24@0:8@16
// Implementation: 0x1004e58d0

// -[SCUnlockableDataStore updateDataIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10aebaf68

// -[SCUnlockableDataStore updateData]
// Type encoding: v16@0:8
// Implementation: 0x10aebafe4

// -[SCUnlockableDataStore addUnlockedLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aebb048

// -[SCUnlockableDataStore updateDataStoresWithRemovedLensId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aebb0e8

// -[SCUnlockableDataStore updateDataStoresWithUnlockedLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aebb188

// -[SCUnlockableDataStore updateLiveReplyDataStores]
// Type encoding: v16@0:8
// Implementation: 0x10aebb1ac

// -[SCUnlockableDataStore _addUnlockedLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aebb1b0

// -[SCUnlockableDataStore removeUnlockedLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aebb4e8

// -[SCUnlockableDataStore _removeUnlockedLensWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aebb5b8

// -[SCUnlockableDataStore unlockedLensesFuture]
// Type encoding: @16@0:8
// Implementation: 0x10aebb824

// -[SCUnlockableDataStore unlockedLenses]
// Type encoding: @16@0:8
// Implementation: 0x10aebb90c

// -[SCUnlockableDataStore _unlockedLenses]
// Type encoding: @16@0:8
// Implementation: 0x10aebba1c

// -[SCUnlockableDataStore _clearExpiredLens]
// Type encoding: v16@0:8
// Implementation: 0x10aebba54

// -[SCUnlockableDataStore _setUnlockedLenses:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c44d50

// -[SCUnlockableDataStore _postOnGlobalQueueNotificationName:userInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100c44e7c

// -[SCUnlockableDataStore _notificationPerformer]
// Type encoding: @16@0:8
// Implementation: 0x100c44f4c

// -[SCUnlockableDataStore unlockLensController:didUpdateScanUnlockedLensesData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100c44b68

// -[SCUnlockableDataStore lensIdToChecksumMap]
// Type encoding: @16@0:8
// Implementation: 0x10aebbc18

// -[SCUnlockableDataStore _filterOutLenses]
// Type encoding: v16@0:8
// Implementation: 0x10aebbd2c

// -[SCUnlockableDataStore unlockLensUpdatedNotificationName]
// Type encoding: @16@0:8
// Implementation: 0x10aebbf70

// -[SCUnlockableDataStore unlockLensUpdatedNotificationKey]
// Type encoding: @16@0:8
// Implementation: 0x10aebbfa0

// -[SCUnlockableDataStore _didFetchData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aebbfd0

// -[SCUnlockableDataStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10aebc070

// +[SCUnlockableDataStore storeFromSavedStateWithRemoteFetcher:lensUserProvider:archiveUtils:removedLensesFilter:creatorBlacklistFilter:lensMetadataStoreEvents:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1004e561c

// +[SCUnlockableDataStore removeSavedStateWithArchiveUtils:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aeba9f4

@end
