// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMediaDrawerCameraRollTabController
// Superclass: NSObject
// Address: 0x112b0af08

@interface SCMediaDrawerCameraRollTabController

// Property: topMargin; attributes: Td,N
// Property: bottomMargin; attributes: Td,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCMediaDrawerTabControllerDelegate>",W,N,V_delegate
// Property: itemType; attributes: Tq,R,N
// Property: view; attributes: T@"UIView",R,N,V_view
// Property: scrollView; attributes: T@"UIScrollView",R,N

// -[SCMediaDrawerCameraRollTabController initWithDelegate:cameraRollAlbumPickerScopeExposer:filterFactory:grapheneRegistry:videoImporter:imageImporter:previewURLVideoProvider:mediaTranscodingLogger:photoPermissionCoordinator:circumstanceEngine:coreConfigProvider:memoriesExperimentService:applicationLifecycleEvents:userPreferences:downloader:topOffset:containerViewController:fetchLimit:]
// Type encoding: @160@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128d136@144@152
// Implementation: 0x1069e05a4

// -[SCMediaDrawerCameraRollTabController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1069e08a8

// -[SCMediaDrawerCameraRollTabController itemType]
// Type encoding: q16@0:8
// Implementation: 0x1069e08f4

// -[SCMediaDrawerCameraRollTabController view]
// Type encoding: @16@0:8
// Implementation: 0x1069e08fc

// -[SCMediaDrawerCameraRollTabController scrollView]
// Type encoding: @16@0:8
// Implementation: 0x1069e126c

// -[SCMediaDrawerCameraRollTabController itemsInScrollViewRect:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x1069e1294

// -[SCMediaDrawerCameraRollTabController _placeholderFrameInCollectionView]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x1069e14cc

// -[SCMediaDrawerCameraRollTabController animateSelectingDrawerItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069e1564

// -[SCMediaDrawerCameraRollTabController restoreSelectionForDrawerItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069e156c

// -[SCMediaDrawerCameraRollTabController animateSelectingDrawerItem:updateCollectionViewState:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1069e1574

// -[SCMediaDrawerCameraRollTabController animateDeselectDrawerItem:itemsIdWithUpdatedIndex:isDeselectingLastItem:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1069e1720

// -[SCMediaDrawerCameraRollTabController animateDeselectAll]
// Type encoding: v16@0:8
// Implementation: 0x1069e19a4

// -[SCMediaDrawerCameraRollTabController updateScrollViewWithTopMargin:deltaContentOffset:animated:]
// Type encoding: v36@0:8d16d24B32
// Implementation: 0x1069e1af4

// -[SCMediaDrawerCameraRollTabController scrollToTopWithTopMargin:]
// Type encoding: v24@0:8d16
// Implementation: 0x1069e1c90

// -[SCMediaDrawerCameraRollTabController scrollToDrawerItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069e1cd8

// -[SCMediaDrawerCameraRollTabController scrollToPercent:]
// Type encoding: v24@0:8d16
// Implementation: 0x1069e1da4

// -[SCMediaDrawerCameraRollTabController tabCellWillDisplay]
// Type encoding: v16@0:8
// Implementation: 0x1069e1e20

// -[SCMediaDrawerCameraRollTabController didFocusOnTab]
// Type encoding: v16@0:8
// Implementation: 0x1069e1fd0

// -[SCMediaDrawerCameraRollTabController collectionView:viewForSupplementaryElementOfKind:atIndexPath:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1069e1fd4

// -[SCMediaDrawerCameraRollTabController collectionView:numberOfItemsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x1069e20e4

// -[SCMediaDrawerCameraRollTabController collectionView:cellForItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1069e20ec

// -[SCMediaDrawerCameraRollTabController collectionView:layout:referenceSizeForHeaderInSection:]
// Type encoding: {CGSize=dd}40@0:8@16@24q32
// Implementation: 0x1069e2220

// -[SCMediaDrawerCameraRollTabController collectionView:didSelectItemAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1069e2290

// -[SCMediaDrawerCameraRollTabController collectionView:didDeselectItemAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1069e238c

// -[SCMediaDrawerCameraRollTabController scrollViewWillBeginDragging:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069e2428

// -[SCMediaDrawerCameraRollTabController scrollViewDidScroll:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069e247c

// -[SCMediaDrawerCameraRollTabController scrollViewDidEndDragging:willDecelerate:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1069e250c

// -[SCMediaDrawerCameraRollTabController scrollViewDidEndDecelerating:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069e2580

// -[SCMediaDrawerCameraRollTabController chatMediaDrawerShouldRemoveOversizedDataSourceMedia:]
// Type encoding: B24@0:8@16
// Implementation: 0x1069e25b4

// -[SCMediaDrawerCameraRollTabController newSendingLimitDurationSeconds]
// Type encoding: d16@0:8
// Implementation: 0x1069e25d0

// -[SCMediaDrawerCameraRollTabController didTapGrantFullAccess]
// Type encoding: v16@0:8
// Implementation: 0x1069e2608

// -[SCMediaDrawerCameraRollTabController mediaListDidChangeWithOnlyReloadedIndexPathes:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069e26b0

// -[SCMediaDrawerCameraRollTabController _handleLongPress:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069e26b4

// -[SCMediaDrawerCameraRollTabController _reloadDataAndShowPlaceholderIfNeededWithOnlyReloadedItemsAtIndexPathes:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069e27c0

// -[SCMediaDrawerCameraRollTabController _showPlaceholder:]
// Type encoding: v24@0:8q16
// Implementation: 0x1069e2960

// -[SCMediaDrawerCameraRollTabController _updatePlaceholderFrameIfExists]
// Type encoding: v16@0:8
// Implementation: 0x1069e2e1c

// -[SCMediaDrawerCameraRollTabController didPressAllow]
// Type encoding: v16@0:8
// Implementation: 0x1069e2e4c

// -[SCMediaDrawerCameraRollTabController setCenterCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069e2e80

// -[SCMediaDrawerCameraRollTabController setTopMargin:]
// Type encoding: v24@0:8d16
// Implementation: 0x1069e2e84

// -[SCMediaDrawerCameraRollTabController topMargin]
// Type encoding: d16@0:8
// Implementation: 0x1069e2ed0

// -[SCMediaDrawerCameraRollTabController setBottomMargin:]
// Type encoding: v24@0:8d16
// Implementation: 0x1069e2ed8

// -[SCMediaDrawerCameraRollTabController bottomMargin]
// Type encoding: d16@0:8
// Implementation: 0x1069e2f18

// -[SCMediaDrawerCameraRollTabController _animate:completionBlock:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x1069e2f34

// -[SCMediaDrawerCameraRollTabController _updateHeaderViewCoveredHeightIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1069e3058

// -[SCMediaDrawerCameraRollTabController _updateHeaderViewConstraintsIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1069e30c8

// -[SCMediaDrawerCameraRollTabController _updateAlbumPickerViewIfExists]
// Type encoding: v16@0:8
// Implementation: 0x1069e3194

// -[SCMediaDrawerCameraRollTabController _displayCameraRollAlbumViewWithPillsUIEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1069e31cc

// -[SCMediaDrawerCameraRollTabController _shouldShowViewAlbumsSectionHeader]
// Type encoding: B16@0:8
// Implementation: 0x1069e32ec

// -[SCMediaDrawerCameraRollTabController _shouldShowAlbumPillView]
// Type encoding: B16@0:8
// Implementation: 0x1069e32f4

// -[SCMediaDrawerCameraRollTabController _findItemIndexInDataSource:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1069e3360

// -[SCMediaDrawerCameraRollTabController didTapViewAlbumsButton]
// Type encoding: v16@0:8
// Implementation: 0x1069e350c

// -[SCMediaDrawerCameraRollTabController cameraRollAlbumPickerViewWillDimiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069e3514

// -[SCMediaDrawerCameraRollTabController didSelectCameraRollAlbumPill:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069e35b8

// -[SCMediaDrawerCameraRollTabController willAlbumPillsViewBeginScrolling]
// Type encoding: v16@0:8
// Implementation: 0x1069e3620

// -[SCMediaDrawerCameraRollTabController didAlbumPillsViewFinishScrolling]
// Type encoding: v16@0:8
// Implementation: 0x1069e364c

// -[SCMediaDrawerCameraRollTabController showAlbumPicker]
// Type encoding: v16@0:8
// Implementation: 0x1069e3678

// -[SCMediaDrawerCameraRollTabController attachUI:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069e367c

// -[SCMediaDrawerCameraRollTabController detachUI:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1069e377c

// -[SCMediaDrawerCameraRollTabController delegate]
// Type encoding: @16@0:8
// Implementation: 0x1069e37f8

// -[SCMediaDrawerCameraRollTabController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069e3810

// -[SCMediaDrawerCameraRollTabController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1069e381c

@end
