// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: IGListAdapterUpdater
// Superclass: NSObject
// Address: 0x112b89308

@interface IGListAdapterUpdater

// Property: transactionBuilder; attributes: T@"IGListUpdateTransactionBuilder",&,N,V_transactionBuilder
// Property: lastTransactionBuilder; attributes: T@"IGListUpdateTransactionBuilder",&,N,V_lastTransactionBuilder
// Property: transaction; attributes: T@"<IGListUpdateTransactable>",&,N,V_transaction
// Property: hasQueuedUpdate; attributes: TB,N,V_hasQueuedUpdate
// Property: delegate; attributes: T@"<IGListAdapterUpdaterDelegate>",W,N,V_delegate
// Property: sectionMovesAsDeletesInserts; attributes: TB,N,V_sectionMovesAsDeletesInserts
// Property: singleItemSectionUpdates; attributes: TB,N,V_singleItemSectionUpdates
// Property: preferItemReloadsForSectionReloads; attributes: TB,N,V_preferItemReloadsForSectionReloads
// Property: allowsReloadingOnTooManyUpdates; attributes: TB,N,V_allowsReloadingOnTooManyUpdates
// Property: allowsBackgroundDiffing; attributes: TB,N,V_allowsBackgroundDiffing
// Property: experiments; attributes: Tq,N,V_experiments
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[IGListAdapterUpdater debugDescriptionLines]
// Type encoding: @16@0:8
// Implementation: 0x107e9db24

// -[IGListAdapterUpdater init]
// Type encoding: @16@0:8
// Implementation: 0x107e985bc

// -[IGListAdapterUpdater hasChanges]
// Type encoding: B16@0:8
// Implementation: 0x107e98628

// -[IGListAdapterUpdater _queueUpdateIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x107e98664

// -[IGListAdapterUpdater update]
// Type encoding: v16@0:8
// Implementation: 0x107e98788

// -[IGListAdapterUpdater isInDataUpdateBlock]
// Type encoding: B16@0:8
// Implementation: 0x107e98a50

// -[IGListAdapterUpdater objectLookupPointerFunctions]
// Type encoding: @16@0:8
// Implementation: 0x107e98a90

// -[IGListAdapterUpdater performUpdateWithCollectionViewBlock:animated:sectionDataBlock:applySectionDataBlock:completion:]
// Type encoding: v52@0:8@?16B24@?28@?36@?44
// Implementation: 0x107e98bdc

// -[IGListAdapterUpdater performUpdateWithCollectionViewBlock:animated:itemUpdates:completion:]
// Type encoding: v44@0:8@?16B24@?28@?36
// Implementation: 0x107e98c9c

// -[IGListAdapterUpdater reloadDataWithCollectionViewBlock:reloadUpdateBlock:completion:]
// Type encoding: v40@0:8@?16@?24@?32
// Implementation: 0x107e98d80

// -[IGListAdapterUpdater performDataSourceChange:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107e98e18

// -[IGListAdapterUpdater insertItemsIntoCollectionView:indexPaths:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e98f84

// -[IGListAdapterUpdater deleteItemsFromCollectionView:indexPaths:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e9903c

// -[IGListAdapterUpdater moveItemInCollectionView:fromIndexPath:toIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107e990f4

// -[IGListAdapterUpdater reloadItemInCollectionView:fromIndexPath:toIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107e991d8

// -[IGListAdapterUpdater reloadCollectionView:sections:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e99344

// -[IGListAdapterUpdater moveSectionInCollectionView:fromIndex:toIndex:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x107e993fc

// -[IGListAdapterUpdater delegate]
// Type encoding: @16@0:8
// Implementation: 0x107e99540

// -[IGListAdapterUpdater setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e99558

// -[IGListAdapterUpdater sectionMovesAsDeletesInserts]
// Type encoding: B16@0:8
// Implementation: 0x107e99564

// -[IGListAdapterUpdater setSectionMovesAsDeletesInserts:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e9956c

// -[IGListAdapterUpdater singleItemSectionUpdates]
// Type encoding: B16@0:8
// Implementation: 0x107e99574

// -[IGListAdapterUpdater setSingleItemSectionUpdates:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e9957c

// -[IGListAdapterUpdater preferItemReloadsForSectionReloads]
// Type encoding: B16@0:8
// Implementation: 0x107e99584

// -[IGListAdapterUpdater setPreferItemReloadsForSectionReloads:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e9958c

// -[IGListAdapterUpdater allowsReloadingOnTooManyUpdates]
// Type encoding: B16@0:8
// Implementation: 0x107e99594

// -[IGListAdapterUpdater setAllowsReloadingOnTooManyUpdates:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e9959c

// -[IGListAdapterUpdater allowsBackgroundDiffing]
// Type encoding: B16@0:8
// Implementation: 0x107e995a4

// -[IGListAdapterUpdater setAllowsBackgroundDiffing:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e995ac

// -[IGListAdapterUpdater experiments]
// Type encoding: q16@0:8
// Implementation: 0x107e995b4

// -[IGListAdapterUpdater setExperiments:]
// Type encoding: v24@0:8q16
// Implementation: 0x107e995bc

// -[IGListAdapterUpdater transactionBuilder]
// Type encoding: @16@0:8
// Implementation: 0x107e995c4

// -[IGListAdapterUpdater setTransactionBuilder:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e995cc

// -[IGListAdapterUpdater lastTransactionBuilder]
// Type encoding: @16@0:8
// Implementation: 0x107e995fc

// -[IGListAdapterUpdater setLastTransactionBuilder:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e99604

// -[IGListAdapterUpdater transaction]
// Type encoding: @16@0:8
// Implementation: 0x107e99634

// -[IGListAdapterUpdater setTransaction:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e9963c

// -[IGListAdapterUpdater hasQueuedUpdate]
// Type encoding: B16@0:8
// Implementation: 0x107e9966c

// -[IGListAdapterUpdater setHasQueuedUpdate:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e99674

// -[IGListAdapterUpdater .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107e9967c

@end
