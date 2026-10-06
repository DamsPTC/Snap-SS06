// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnlockableLensMetadataStoreAdapter
// Superclass: NSObject
// Address: 0x112bfc538

@interface SCUnlockableLensMetadataStoreAdapter

// Property: lensMemoryStorage; attributes: T@"SCLensMemoryMapStorage",&,N,V_lensMemoryStorage
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: lenses; attributes: T@"NSArray",R,C,N
// Property: lensesToPrefetch; attributes: T@"NSArray",R,C,N
// Property: hasMoreLensesToLoad; attributes: TB,R,N
// Property: loadMoreTriggerDistance; attributes: TQ,R,N

// -[SCUnlockableLensMetadataStoreAdapter initWithUnlockableDataStore:announcerPerformer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10aebc1bc

// -[SCUnlockableLensMetadataStoreAdapter lensMemoryStorage]
// Type encoding: @16@0:8
// Implementation: 0x10aebc318

// -[SCUnlockableLensMetadataStoreAdapter addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aebc340

// -[SCUnlockableLensMetadataStoreAdapter removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aebc348

// -[SCUnlockableLensMetadataStoreAdapter lenses]
// Type encoding: @16@0:8
// Implementation: 0x10aebc350

// -[SCUnlockableLensMetadataStoreAdapter lensesToPrefetch]
// Type encoding: @16@0:8
// Implementation: 0x10aebc478

// -[SCUnlockableLensMetadataStoreAdapter warmUp]
// Type encoding: v16@0:8
// Implementation: 0x10aebc484

// -[SCUnlockableLensMetadataStoreAdapter startUpdatingWithMode:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10aebc48c

// -[SCUnlockableLensMetadataStoreAdapter stopUpdating]
// Type encoding: v16@0:8
// Implementation: 0x10aebc60c

// -[SCUnlockableLensMetadataStoreAdapter applyMetadataProviderSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aebc610

// -[SCUnlockableLensMetadataStoreAdapter synchronize]
// Type encoding: v16@0:8
// Implementation: 0x10aebc694

// -[SCUnlockableLensMetadataStoreAdapter hasMoreLensesToLoad]
// Type encoding: B16@0:8
// Implementation: 0x10aebc770

// -[SCUnlockableLensMetadataStoreAdapter loadMoreTriggerDistance]
// Type encoding: Q16@0:8
// Implementation: 0x10aebc778

// -[SCUnlockableLensMetadataStoreAdapter applyFilter:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aebc780

// -[SCUnlockableLensMetadataStoreAdapter supportsFilteringForAttribute:]
// Type encoding: B24@0:8Q16
// Implementation: 0x10aebc874

// -[SCUnlockableLensMetadataStoreAdapter _unlockedLensesDataStoreDidUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aebc880

// -[SCUnlockableLensMetadataStoreAdapter _updateLenses]
// Type encoding: v16@0:8
// Implementation: 0x10aebca50

// -[SCUnlockableLensMetadataStoreAdapter _filteredLensesWithStudioPreviewFromFilteredLenses:allLenses:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10aebcba4

// -[SCUnlockableLensMetadataStoreAdapter _performAnnouncementBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10aebcd44

// -[SCUnlockableLensMetadataStoreAdapter setLensMemoryStorage:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aebcd5c

// -[SCUnlockableLensMetadataStoreAdapter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10aebcd8c

@end
