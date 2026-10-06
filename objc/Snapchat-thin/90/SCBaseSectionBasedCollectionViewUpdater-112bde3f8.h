// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBaseSectionBasedCollectionViewUpdater
// Superclass: NSObject
// Address: 0x112bde3f8

@interface SCBaseSectionBasedCollectionViewUpdater

// Property: delegate; attributes: T@"<SCSectionBasedCollectionViewUpdaterDelegate>",W,N,V_delegate
// Property: collectionViewDelegate; attributes: T@"<UICollectionViewDelegate>",W,N,V_collectionViewDelegate
// Property: pendingSectionDelay; attributes: Td,N,V_pendingSectionDelay
// Property: forceLayoutUpdateBeforeBatchUpdates; attributes: TB,N,V_forceLayoutUpdateBeforeBatchUpdates
// Property: enablePerformBatchUpdateCrashRecovery; attributes: TB,N,V_enablePerformBatchUpdateCrashRecovery
// Property: disableFirstSectionNoHeaderPadding; attributes: TB,N,V_disableFirstSectionNoHeaderPadding
// Property: filterDuplicateBatchUpdate; attributes: TB,N,V_filterDuplicateBatchUpdate
// Property: sections; attributes: T@"NSArray",R,C,N,V_sections
// Property: isUpdating; attributes: TB,R,N,V_isUpdating
// Property: virtualSectionConfigurableProvidingDelegate; attributes: T@"<SCVirtualSectionConfigurableProvidingDelegate>",W,N,V_virtualSectionConfigurableProvidingDelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBaseSectionBasedCollectionViewUpdater init]
// Type encoding: @16@0:8
// Implementation: 0x108fc0c6c

// -[SCBaseSectionBasedCollectionViewUpdater setSectionWithConfigurations:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x108fc0ca0

// -[SCBaseSectionBasedCollectionViewUpdater setOrUpdateSectionWithConfigurations:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x108fc0ca4

// -[SCBaseSectionBasedCollectionViewUpdater indexPathForItemWithQueryKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x108fc0ca8

// -[SCBaseSectionBasedCollectionViewUpdater numberOfSectionsInCollectionView:]
// Type encoding: q24@0:8@16
// Implementation: 0x108fc0cb0

// -[SCBaseSectionBasedCollectionViewUpdater collectionView:numberOfItemsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x108fc0cb8

// -[SCBaseSectionBasedCollectionViewUpdater collectionView:cellForItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108fc0cc0

// -[SCBaseSectionBasedCollectionViewUpdater virtualSectionConfigurableProvidingDelegate]
// Type encoding: @16@0:8
// Implementation: 0x108fc0cc8

// -[SCBaseSectionBasedCollectionViewUpdater setVirtualSectionConfigurableProvidingDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fc0ce0

// -[SCBaseSectionBasedCollectionViewUpdater delegate]
// Type encoding: @16@0:8
// Implementation: 0x108fc0cec

// -[SCBaseSectionBasedCollectionViewUpdater setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fc0d04

// -[SCBaseSectionBasedCollectionViewUpdater collectionViewDelegate]
// Type encoding: @16@0:8
// Implementation: 0x108fc0d10

// -[SCBaseSectionBasedCollectionViewUpdater setCollectionViewDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fc0d28

// -[SCBaseSectionBasedCollectionViewUpdater pendingSectionDelay]
// Type encoding: d16@0:8
// Implementation: 0x108fc0d34

// -[SCBaseSectionBasedCollectionViewUpdater setPendingSectionDelay:]
// Type encoding: v24@0:8d16
// Implementation: 0x108fc0d3c

// -[SCBaseSectionBasedCollectionViewUpdater forceLayoutUpdateBeforeBatchUpdates]
// Type encoding: B16@0:8
// Implementation: 0x108fc0d44

// -[SCBaseSectionBasedCollectionViewUpdater setForceLayoutUpdateBeforeBatchUpdates:]
// Type encoding: v20@0:8B16
// Implementation: 0x108fc0d4c

// -[SCBaseSectionBasedCollectionViewUpdater enablePerformBatchUpdateCrashRecovery]
// Type encoding: B16@0:8
// Implementation: 0x108fc0d54

// -[SCBaseSectionBasedCollectionViewUpdater setEnablePerformBatchUpdateCrashRecovery:]
// Type encoding: v20@0:8B16
// Implementation: 0x108fc0d5c

// -[SCBaseSectionBasedCollectionViewUpdater disableFirstSectionNoHeaderPadding]
// Type encoding: B16@0:8
// Implementation: 0x108fc0d64

// -[SCBaseSectionBasedCollectionViewUpdater setDisableFirstSectionNoHeaderPadding:]
// Type encoding: v20@0:8B16
// Implementation: 0x108fc0d6c

// -[SCBaseSectionBasedCollectionViewUpdater filterDuplicateBatchUpdate]
// Type encoding: B16@0:8
// Implementation: 0x108fc0d74

// -[SCBaseSectionBasedCollectionViewUpdater setFilterDuplicateBatchUpdate:]
// Type encoding: v20@0:8B16
// Implementation: 0x108fc0d7c

// -[SCBaseSectionBasedCollectionViewUpdater sections]
// Type encoding: @16@0:8
// Implementation: 0x108fc0d84

// -[SCBaseSectionBasedCollectionViewUpdater isUpdating]
// Type encoding: B16@0:8
// Implementation: 0x108fc0d8c

// -[SCBaseSectionBasedCollectionViewUpdater .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108fc0d94

@end
