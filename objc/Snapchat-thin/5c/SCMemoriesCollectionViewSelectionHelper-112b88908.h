// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesCollectionViewSelectionHelper
// Superclass: NSObject
// Address: 0x112b88908

@interface SCMemoriesCollectionViewSelectionHelper

// Property: dataSource; attributes: T@"<SCMemoriesCollectionViewSelectionHelperDataSource>",W,N,V_dataSource
// Property: delegate; attributes: T@"<SCMemoriesCollectionViewSelectionHelperDelegate>",W,N,V_delegate
// Property: selectMode; attributes: TB,N,V_selectMode
// Property: shouldDisableSelectAnimation; attributes: TB,N,V_shouldDisableSelectAnimation
// Property: selectOverlayImage; attributes: T@"UIImage",&,N,V_selectOverlayImage
// Property: tabType; attributes: TQ,N,V_tabType
// Property: cofTweaksProvider; attributes: T@"<SCMemoriesCOFTweaksProviding>",&,N,V_cofTweaksProvider
// Property: selectedItemCount; attributes: TQ,R,N,V_selectedItemCount
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesCollectionViewSelectionHelper initWithCollectionView:memoriesSearchDatabase:dataObjectContext:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107e81c80

// -[SCMemoriesCollectionViewSelectionHelper dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107e81f08

// -[SCMemoriesCollectionViewSelectionHelper setSelectMode:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e81f80

// -[SCMemoriesCollectionViewSelectionHelper selectedItems]
// Type encoding: @16@0:8
// Implementation: 0x107e82308

// -[SCMemoriesCollectionViewSelectionHelper selectedGalleryEntries]
// Type encoding: @16@0:8
// Implementation: 0x107e82310

// -[SCMemoriesCollectionViewSelectionHelper selectedSnapItems]
// Type encoding: @16@0:8
// Implementation: 0x107e8233c

// -[SCMemoriesCollectionViewSelectionHelper orderedSelectedSnapItems]
// Type encoding: @16@0:8
// Implementation: 0x107e82484

// -[SCMemoriesCollectionViewSelectionHelper selectionOrderNumberForSnapItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x107e82684

// -[SCMemoriesCollectionViewSelectionHelper _recordSelectionOrder:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e82688

// -[SCMemoriesCollectionViewSelectionHelper _isSelectionOrderTargetSelected:]
// Type encoding: B24@0:8@16
// Implementation: 0x107e826d8

// -[SCMemoriesCollectionViewSelectionHelper _selectionOrderNumberForTarget:]
// Type encoding: @24@0:8@16
// Implementation: 0x107e827c8

// -[SCMemoriesCollectionViewSelectionHelper _selectionOrderNumbersBySnapIdForItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x107e8295c

// -[SCMemoriesCollectionViewSelectionHelper _selectedSnapIdsForItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x107e82c38

// -[SCMemoriesCollectionViewSelectionHelper _updateVisibleCells]
// Type encoding: v16@0:8
// Implementation: 0x107e82dcc

// -[SCMemoriesCollectionViewSelectionHelper changeSelected:item:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x107e830c8

// -[SCMemoriesCollectionViewSelectionHelper _changeSelected:item:announce:changeSelectedCellsCount:]
// Type encoding: v36@0:8B16@20B28B32
// Implementation: 0x107e830d4

// -[SCMemoriesCollectionViewSelectionHelper _changeSelected:item:announce:]
// Type encoding: v32@0:8B16@20B28
// Implementation: 0x107e83158

// -[SCMemoriesCollectionViewSelectionHelper changeSelected:snapItem:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x107e83294

// -[SCMemoriesCollectionViewSelectionHelper _changeSelected:snapItem:announce:]
// Type encoding: v32@0:8B16@20B28
// Implementation: 0x107e8329c

// -[SCMemoriesCollectionViewSelectionHelper _updateSelection:snapItem:announce:]
// Type encoding: v32@0:8B16@20B28
// Implementation: 0x107e83620

// -[SCMemoriesCollectionViewSelectionHelper setSelectedCellsCount:numberOfSnapsSelected:]
// Type encoding: v28@0:8B16Q20
// Implementation: 0x107e83940

// -[SCMemoriesCollectionViewSelectionHelper getSelectedCellsCount]
// Type encoding: Q16@0:8
// Implementation: 0x107e83974

// -[SCMemoriesCollectionViewSelectionHelper setSelectedForCell:atIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e8397c

// -[SCMemoriesCollectionViewSelectionHelper setSelectedForCell:snapItem:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e83b44

// -[SCMemoriesCollectionViewSelectionHelper toggleSelectedAtIndexPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e83cf0

// -[SCMemoriesCollectionViewSelectionHelper _isItemSelected:]
// Type encoding: B24@0:8@16
// Implementation: 0x107e83d98

// -[SCMemoriesCollectionViewSelectionHelper cancelOngoingGestureRecognizers]
// Type encoding: v16@0:8
// Implementation: 0x107e83da0

// -[SCMemoriesCollectionViewSelectionHelper toggleSelectedForSnapItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e83dc8

// -[SCMemoriesCollectionViewSelectionHelper isBatchSelected:snapItems:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107e83ebc

// -[SCMemoriesCollectionViewSelectionHelper numberOfBatchSelectedSnapsForItems:snapItems:select:]
// Type encoding: Q36@0:8@16@24B32
// Implementation: 0x107e8415c

// -[SCMemoriesCollectionViewSelectionHelper batchSelect:items:snapItems:announce:]
// Type encoding: v40@0:8B16@20@28B36
// Implementation: 0x107e843e8

// -[SCMemoriesCollectionViewSelectionHelper gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x107e84a18

// -[SCMemoriesCollectionViewSelectionHelper gestureRecognizer:shouldReceiveTouch:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107e84c04

// -[SCMemoriesCollectionViewSelectionHelper gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107e84cc0

// -[SCMemoriesCollectionViewSelectionHelper _handleLongPressGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e84cd0

// -[SCMemoriesCollectionViewSelectionHelper _touchItemCell]
// Type encoding: @16@0:8
// Implementation: 0x107e84f2c

// -[SCMemoriesCollectionViewSelectionHelper _isPressAndHoldSelectModeEnabled:]
// Type encoding: B24@0:8@16
// Implementation: 0x107e84f9c

// -[SCMemoriesCollectionViewSelectionHelper _handleActionMenuLongPressGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e84fdc

// -[SCMemoriesCollectionViewSelectionHelper showOverSelectionLimitDialogIfNeeded:numberOfSnapsSelected:]
// Type encoding: B28@0:8B16Q20
// Implementation: 0x107e85138

// -[SCMemoriesCollectionViewSelectionHelper _selectedItemsWithFilterBlock:]
// Type encoding: @24@0:8@?16
// Implementation: 0x107e851d8

// -[SCMemoriesCollectionViewSelectionHelper _handleTapAtIndexPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e85354

// -[SCMemoriesCollectionViewSelectionHelper _handleSelectionAtIndexPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e853e0

// -[SCMemoriesCollectionViewSelectionHelper dataSource]
// Type encoding: @16@0:8
// Implementation: 0x107e854a8

// -[SCMemoriesCollectionViewSelectionHelper setDataSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e854c0

// -[SCMemoriesCollectionViewSelectionHelper delegate]
// Type encoding: @16@0:8
// Implementation: 0x107e854cc

// -[SCMemoriesCollectionViewSelectionHelper setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e854e4

// -[SCMemoriesCollectionViewSelectionHelper selectMode]
// Type encoding: B16@0:8
// Implementation: 0x107e854f0

// -[SCMemoriesCollectionViewSelectionHelper shouldDisableSelectAnimation]
// Type encoding: B16@0:8
// Implementation: 0x107e854f8

// -[SCMemoriesCollectionViewSelectionHelper setShouldDisableSelectAnimation:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e85500

// -[SCMemoriesCollectionViewSelectionHelper selectOverlayImage]
// Type encoding: @16@0:8
// Implementation: 0x107e85508

// -[SCMemoriesCollectionViewSelectionHelper setSelectOverlayImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e85510

// -[SCMemoriesCollectionViewSelectionHelper tabType]
// Type encoding: Q16@0:8
// Implementation: 0x107e85540

// -[SCMemoriesCollectionViewSelectionHelper setTabType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107e85548

// -[SCMemoriesCollectionViewSelectionHelper cofTweaksProvider]
// Type encoding: @16@0:8
// Implementation: 0x107e85550

// -[SCMemoriesCollectionViewSelectionHelper setCofTweaksProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e85558

// -[SCMemoriesCollectionViewSelectionHelper selectedItemCount]
// Type encoding: Q16@0:8
// Implementation: 0x107e85588

// -[SCMemoriesCollectionViewSelectionHelper .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107e85590

@end
