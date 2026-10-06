// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGalleryStoriesTabV2Controller
// Superclass: NSObject
// Address: 0x112b0b458

@interface SCGalleryStoriesTabV2Controller

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: tabType; attributes: TQ,R,N,V_tabType
// Property: scrollContentInset; attributes: T{UIEdgeInsets=dddd},N,V_scrollContentInset
// Property: scrollContentOffset; attributes: Td,N
// Property: contentHeight; attributes: Td,R,N
// Property: scrollContentDistanceToTop; attributes: Td,R,N
// Property: visible; attributes: TB,N,V_visible
// Property: focused; attributes: TB,N,V_focused
// Property: loading; attributes: TB,N,V_loading
// Property: selectMode; attributes: TB,N,V_selectMode
// Property: delegate; attributes: T@"<SCGalleryTabControllerDelegate>",W,N,V_delegate
// Property: PPVNavigationLogger; attributes: T@"<SCNavigationLogging>",?,&,N

// -[SCGalleryStoriesTabV2Controller initWithTabType:containerViewController:memoriesScopeDelegate:delegate:storiesTabService:currentPageTracker:]
// Type encoding: @64@0:8Q16@24@32@40@48@56
// Implementation: 0x106a006fc

// -[SCGalleryStoriesTabV2Controller _keyboardWillShow:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a00b50

// -[SCGalleryStoriesTabV2Controller _keyboardWillHide:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a00e58

// -[SCGalleryStoriesTabV2Controller scrollBarTopOffset]
// Type encoding: d16@0:8
// Implementation: 0x106a00fec

// -[SCGalleryStoriesTabV2Controller isPrivate]
// Type encoding: B16@0:8
// Implementation: 0x106a01054

// -[SCGalleryStoriesTabV2Controller shouldDisplay]
// Type encoding: B16@0:8
// Implementation: 0x106a0105c

// -[SCGalleryStoriesTabV2Controller setLoading:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a01064

// -[SCGalleryStoriesTabV2Controller setVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a010c4

// -[SCGalleryStoriesTabV2Controller allItems]
// Type encoding: @16@0:8
// Implementation: 0x106a010e0

// -[SCGalleryStoriesTabV2Controller galleryItemIdToSnapsMap]
// Type encoding: @16@0:8
// Implementation: 0x106a01108

// -[SCGalleryStoriesTabV2Controller galleryItemIdToPHAssetsMap]
// Type encoding: @16@0:8
// Implementation: 0x106a012ac

// -[SCGalleryStoriesTabV2Controller itemIdsToExclude]
// Type encoding: @16@0:8
// Implementation: 0x106a012b4

// -[SCGalleryStoriesTabV2Controller prefersAllItemsAreNotIterated]
// Type encoding: B16@0:8
// Implementation: 0x106a012bc

// -[SCGalleryStoriesTabV2Controller allItemsCount]
// Type encoding: Q16@0:8
// Implementation: 0x106a012c4

// -[SCGalleryStoriesTabV2Controller isViewLoaded]
// Type encoding: B16@0:8
// Implementation: 0x106a01300

// -[SCGalleryStoriesTabV2Controller _contentInsetsWithInsets:]
// Type encoding: {UIEdgeInsets=dddd}48@0:8{UIEdgeInsets=dddd}16
// Implementation: 0x106a01310

// -[SCGalleryStoriesTabV2Controller loadViewIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106a01354

// -[SCGalleryStoriesTabV2Controller _handleTap:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a01920

// -[SCGalleryStoriesTabV2Controller view]
// Type encoding: @16@0:8
// Implementation: 0x106a0192c

// -[SCGalleryStoriesTabV2Controller collectionView]
// Type encoding: @16@0:8
// Implementation: 0x106a01954

// -[SCGalleryStoriesTabV2Controller itemsInRect:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x106a0197c

// -[SCGalleryStoriesTabV2Controller indexPathForId:itemLevelIdentifier:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106a01984

// -[SCGalleryStoriesTabV2Controller setScrollContentInset:]
// Type encoding: v48@0:8{UIEdgeInsets=dddd}16
// Implementation: 0x106a01a20

// -[SCGalleryStoriesTabV2Controller scrollContentOffset]
// Type encoding: d16@0:8
// Implementation: 0x106a01a64

// -[SCGalleryStoriesTabV2Controller scrollToTop]
// Type encoding: v16@0:8
// Implementation: 0x106a01aa0

// -[SCGalleryStoriesTabV2Controller contentHeight]
// Type encoding: d16@0:8
// Implementation: 0x106a01aa4

// -[SCGalleryStoriesTabV2Controller setScrollContentOffset:]
// Type encoding: v24@0:8d16
// Implementation: 0x106a01aec

// -[SCGalleryStoriesTabV2Controller setScrollContentOffset:animated:completion:]
// Type encoding: v36@0:8d16B24@?28
// Implementation: 0x106a01af8

// -[SCGalleryStoriesTabV2Controller scrollContentDistanceToTop]
// Type encoding: d16@0:8
// Implementation: 0x106a01bc0

// -[SCGalleryStoriesTabV2Controller setSelectMode:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a01bec

// -[SCGalleryStoriesTabV2Controller setFocused:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a01c38

// -[SCGalleryStoriesTabV2Controller changeSelected:forGalleryItem:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x106a01da8

// -[SCGalleryStoriesTabV2Controller changeSelected:forGallerySnapItem:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x106a01e00

// -[SCGalleryStoriesTabV2Controller changeSelected:forItems:snapItems:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x106a01e08

// -[SCGalleryStoriesTabV2Controller selectedGalleryItems]
// Type encoding: @16@0:8
// Implementation: 0x106a01e14

// -[SCGalleryStoriesTabV2Controller selectedSnapItems]
// Type encoding: @16@0:8
// Implementation: 0x106a01e6c

// -[SCGalleryStoriesTabV2Controller orderedSelectedSnapItems]
// Type encoding: @16@0:8
// Implementation: 0x106a01e74

// -[SCGalleryStoriesTabV2Controller selectedItemCount]
// Type encoding: Q16@0:8
// Implementation: 0x106a01e7c

// -[SCGalleryStoriesTabV2Controller scrollToGalleryItem:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106a020bc

// -[SCGalleryStoriesTabV2Controller isDragging]
// Type encoding: B16@0:8
// Implementation: 0x106a020c4

// -[SCGalleryStoriesTabV2Controller isTracking]
// Type encoding: B16@0:8
// Implementation: 0x106a020cc

// -[SCGalleryStoriesTabV2Controller isEditing]
// Type encoding: B16@0:8
// Implementation: 0x106a020d4

// -[SCGalleryStoriesTabV2Controller endEditing]
// Type encoding: v16@0:8
// Implementation: 0x106a020dc

// -[SCGalleryStoriesTabV2Controller isInLineSearchable]
// Type encoding: B16@0:8
// Implementation: 0x106a020e8

// -[SCGalleryStoriesTabV2Controller shouldAlignInitialScrollContentDistanceToTopOfOtherTabControllerToThisTabController]
// Type encoding: B16@0:8
// Implementation: 0x106a020f0

// -[SCGalleryStoriesTabV2Controller shouldAlignInitialScrollContentDistanceToTopOfThisTabControllerToOtherTabController]
// Type encoding: B16@0:8
// Implementation: 0x106a020f8

// -[SCGalleryStoriesTabV2Controller deeplinkToOperaWithDestinationInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a02100

// -[SCGalleryStoriesTabV2Controller galleryViewWillAppear]
// Type encoding: v16@0:8
// Implementation: 0x106a02104

// -[SCGalleryStoriesTabV2Controller galleryViewDidAppear]
// Type encoding: v16@0:8
// Implementation: 0x106a02108

// -[SCGalleryStoriesTabV2Controller galleryViewDidDisappear]
// Type encoding: v16@0:8
// Implementation: 0x106a0210c

// -[SCGalleryStoriesTabV2Controller didTriggerCreateMashupForStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a02210

// -[SCGalleryStoriesTabV2Controller didTriggerRefetchLatestFeaturedStories]
// Type encoding: v16@0:8
// Implementation: 0x106a02214

// -[SCGalleryStoriesTabV2Controller pageViewName]
// Type encoding: q16@0:8
// Implementation: 0x106a02218

// -[SCGalleryStoriesTabV2Controller scrollViewDidScroll:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a02220

// -[SCGalleryStoriesTabV2Controller scrollViewWillBeginDragging:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a023e0

// -[SCGalleryStoriesTabV2Controller scrollViewDidEndDragging:willDecelerate:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106a02414

// -[SCGalleryStoriesTabV2Controller scrollViewDidEndDecelerating:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a02458

// -[SCGalleryStoriesTabV2Controller scrollViewDidEndScrollingAnimation:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a0248c

// -[SCGalleryStoriesTabV2Controller _logSelectSearchResultEntryIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a0259c

// -[SCGalleryStoriesTabV2Controller _logSelectSearchResultSnapIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a02684

// -[SCGalleryStoriesTabV2Controller _pageHeight]
// Type encoding: d16@0:8
// Implementation: 0x106a0276c

// -[SCGalleryStoriesTabV2Controller _notifyScrollContentOffsetChange]
// Type encoding: v16@0:8
// Implementation: 0x106a027f0

// -[SCGalleryStoriesTabV2Controller _updateWithScrollContentInset]
// Type encoding: v16@0:8
// Implementation: 0x106a02870

// -[SCGalleryStoriesTabV2Controller _indexWithOffset:]
// Type encoding: q24@0:8@16
// Implementation: 0x106a028b8

// -[SCGalleryStoriesTabV2Controller _allItemsOffset]
// Type encoding: q16@0:8
// Implementation: 0x106a028ec

// -[SCGalleryStoriesTabV2Controller _galleryItemIdToSnapsMap]
// Type encoding: @16@0:8
// Implementation: 0x106a029a0

// -[SCGalleryStoriesTabV2Controller _regularStoryViewModels]
// Type encoding: @16@0:8
// Implementation: 0x106a02b68

// -[SCGalleryStoriesTabV2Controller _regularStoryGalleryEntries]
// Type encoding: @16@0:8
// Implementation: 0x106a02b98

// -[SCGalleryStoriesTabV2Controller _regularStoryGalleryItems]
// Type encoding: @16@0:8
// Implementation: 0x106a02bec

// -[SCGalleryStoriesTabV2Controller collectionView:numberOfItemsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x106a02c8c

// -[SCGalleryStoriesTabV2Controller _cellClassForViewModel:]
// Type encoding: #24@0:8@16
// Implementation: 0x106a02c94

// -[SCGalleryStoriesTabV2Controller collectionView:cellForItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106a02d4c

// -[SCGalleryStoriesTabV2Controller collectionView:layout:sizeForItemAtIndexPath:]
// Type encoding: {CGSize=dd}40@0:8@16@24@32
// Implementation: 0x106a030dc

// -[SCGalleryStoriesTabV2Controller collectionView:willDisplayCell:forItemAtIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106a03188

// -[SCGalleryStoriesTabV2Controller collectionView:didEndDisplayingCell:forItemAtIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106a032a0

// -[SCGalleryStoriesTabV2Controller collectionView:willDisplaySupplementaryView:forElementKind:atIndexPath:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106a032fc

// -[SCGalleryStoriesTabV2Controller collectionView:viewForSupplementaryElementOfKind:atIndexPath:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106a03348

// -[SCGalleryStoriesTabV2Controller collectionView:layout:referenceSizeForFooterInSection:]
// Type encoding: {CGSize=dd}40@0:8@16@24q32
// Implementation: 0x106a033ec

// -[SCGalleryStoriesTabV2Controller collectionView:layout:referenceSizeForHeaderInSection:]
// Type encoding: {CGSize=dd}40@0:8@16@24q32
// Implementation: 0x106a03440

// -[SCGalleryStoriesTabV2Controller galleryCollectionViewHelper:itemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106a03450

// -[SCGalleryStoriesTabV2Controller _galleryItems]
// Type encoding: @16@0:8
// Implementation: 0x106a034e0

// -[SCGalleryStoriesTabV2Controller _galleryItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a034e4

// -[SCGalleryStoriesTabV2Controller memoriesCollectionViewSelectionHelper:galleryItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106a03568

// -[SCGalleryStoriesTabV2Controller memoriesCollectionViewSelectionHelper:snapsForEntry:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106a03570

// -[SCGalleryStoriesTabV2Controller memoriesCollectionViewSelectionHelper:shouldChangeSelectedAtIndexPath:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106a036a0

// -[SCGalleryStoriesTabV2Controller memoriesCollectionViewSelectionHelper:didChangeSelected:forItem:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x106a03708

// -[SCGalleryStoriesTabV2Controller memoriesCollectionViewSelectionHelper:didChangeSelected:forSnapItem:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x106a03764

// -[SCGalleryStoriesTabV2Controller memoriesCollectionViewSelectionHelper:didChangeSelected:forItems:snapItems:]
// Type encoding: v44@0:8@16B24@28@36
// Implementation: 0x106a037c0

// -[SCGalleryStoriesTabV2Controller memoriesCollectionViewSelectionHelper:didTapItemAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a0383c

// -[SCGalleryStoriesTabV2Controller memoriesCollectionViewSelectionHelper:handleLongPress:itemAtIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106a039e4

// -[SCGalleryStoriesTabV2Controller memoriesCollectionViewSelectionHelper:overrideTapHandlingAtIndexPath:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106a03ae8

// -[SCGalleryStoriesTabV2Controller memoriesCollectionViewIsFullyVisible:]
// Type encoding: B24@0:8@16
// Implementation: 0x106a03bcc

// -[SCGalleryStoriesTabV2Controller operaPresenterDidOpenViewWithItemId:snapLevelItemId:crFeaturedStory:isFromSnapFeed:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x106a03c0c

// -[SCGalleryStoriesTabV2Controller operaPresenterDidOpenViewWithOperaItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a03df4

// -[SCGalleryStoriesTabV2Controller operaPresenterBeganDismiss]
// Type encoding: v16@0:8
// Implementation: 0x106a03f5c

// -[SCGalleryStoriesTabV2Controller operaPresenterCancelledDismiss]
// Type encoding: v16@0:8
// Implementation: 0x106a03f90

// -[SCGalleryStoriesTabV2Controller operaPresenterDidPresent]
// Type encoding: v16@0:8
// Implementation: 0x106a03f9c

// -[SCGalleryStoriesTabV2Controller operaPresenterDidDismissItemId:snapLevelItemId:playbackItemIndex:crFeaturedStory:isFromSnapFeed:]
// Type encoding: v52@0:8@16@24@32@40B48
// Implementation: 0x106a03ff4

// -[SCGalleryStoriesTabV2Controller operaPresenterOverrideTransitionModeForItem:]
// Type encoding: q24@0:8@16
// Implementation: 0x106a0406c

// -[SCGalleryStoriesTabV2Controller _handleLongPress:cell:viewModel:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106a040cc

// -[SCGalleryStoriesTabV2Controller _toggleExpand:cell:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a04200

// -[SCGalleryStoriesTabV2Controller _selectSnapViewModel:forStoryCell:viewModel:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106a0445c

// -[SCGalleryStoriesTabV2Controller storyCell:didSelectSnapViewModel:viewModel:snapCell:fromView:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x106a04658

// -[SCGalleryStoriesTabV2Controller storyCell:didLongPress:snapViewModel:viewModel:fromView:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x106a04924

// -[SCGalleryStoriesTabV2Controller storyCell:didTapShowAll:reload:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x106a04a2c

// -[SCGalleryStoriesTabV2Controller storyCell:didBeginEditing:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a04b44

// -[SCGalleryStoriesTabV2Controller storyCellIsTabFocused:]
// Type encoding: B24@0:8@16
// Implementation: 0x106a04b50

// -[SCGalleryStoriesTabV2Controller storyCell:didTapStory:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a04b58

// -[SCGalleryStoriesTabV2Controller storyCellIsCollectionViewFullyVisible:]
// Type encoding: B24@0:8@16
// Implementation: 0x106a04e98

// -[SCGalleryStoriesTabV2Controller storyCell:handleLongPress:viewModel:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106a04ed8

// -[SCGalleryStoriesTabV2Controller memoriesActionMenuHelperDidTriggerAddToStory:item:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a04ee8

// -[SCGalleryStoriesTabV2Controller memoriesActionMenuHelperDidTapEntry:item:fromView:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106a04f3c

// -[SCGalleryStoriesTabV2Controller memoriesActionMenuHelperDidTapEditStory:item:fromView:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106a05124

// -[SCGalleryStoriesTabV2Controller memoriesActionMenuHelperDidTapViewSnapsFromView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a051a8

// -[SCGalleryStoriesTabV2Controller _presentSubscreenStoryFromView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a051ac

// -[SCGalleryStoriesTabV2Controller _presentFavoriteSnapsStory]
// Type encoding: v16@0:8
// Implementation: 0x106a052ec

// -[SCGalleryStoriesTabV2Controller _presentConsolidatedAutoSavedStoryWithSubscreenStoryTitle:entrySource:customStoryEntryExternalId:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x106a053e0

// -[SCGalleryStoriesTabV2Controller memoriesActionMenuHelperDidTapRemoveStories]
// Type encoding: v16@0:8
// Implementation: 0x106a05520

// -[SCGalleryStoriesTabV2Controller memoriesActionMenuHelperDidTriggerCreateMashupForStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a055bc

// -[SCGalleryStoriesTabV2Controller memoriesActionMenuHelperDidTriggerRefetchLatestFeaturedStories]
// Type encoding: v16@0:8
// Implementation: 0x106a055c0

// -[SCGalleryStoriesTabV2Controller memoriesActionMenuHelperDidTriggerResetAllFeaturedStoriesViewProgress]
// Type encoding: v16@0:8
// Implementation: 0x106a055c4

// -[SCGalleryStoriesTabV2Controller memoriesActionMenuHelperDidTriggerInspectOriginalSnapsWithSnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a055c8

// -[SCGalleryStoriesTabV2Controller _displayConsolidatedStoriesMyStoryOnboardingAlertIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106a055cc

// -[SCGalleryStoriesTabV2Controller consolidatedAutoSavedStoriesWillDimiss]
// Type encoding: v16@0:8
// Implementation: 0x106a05a94

// -[SCGalleryStoriesTabV2Controller _updateFocusedDisplayedTabTypeForGalleryLogger]
// Type encoding: v16@0:8
// Implementation: 0x106a05ad4

// -[SCGalleryStoriesTabV2Controller consolidatedAutoSavedStoriesDidCreateStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a05b54

// -[SCGalleryStoriesTabV2Controller consolidatedAutoSavedStoriesDidEndDimissing:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a05cc4

// -[SCGalleryStoriesTabV2Controller favoriteSnapsStoryWillDimiss]
// Type encoding: v16@0:8
// Implementation: 0x106a05d68

// -[SCGalleryStoriesTabV2Controller favoriteSnapsStoryDidCreateStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a05da8

// -[SCGalleryStoriesTabV2Controller memoriesActionMenuHelperIsClientCompatibleForItem:]
// Type encoding: B24@0:8@16
// Implementation: 0x106a05f18

// -[SCGalleryStoriesTabV2Controller _isViewModelValidForUse:]
// Type encoding: B24@0:8@16
// Implementation: 0x106a06094

// -[SCGalleryStoriesTabV2Controller memoriesActionMenuHelperDidHideLegacyAutoSavedStories:]
// Type encoding: B24@0:8@16
// Implementation: 0x106a06118

// -[SCGalleryStoriesTabV2Controller storiesTabDataSourceDidReceiveData:viewModels:coordinator:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106a06190

// -[SCGalleryStoriesTabV2Controller _indexPathsFromIndexSet:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a06a98

// -[SCGalleryStoriesTabV2Controller emptyStateViewDidTapButton]
// Type encoding: v16@0:8
// Implementation: 0x106a06b80

// -[SCGalleryStoriesTabV2Controller _setUpEmptyStateForActiveSearchIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106a06be8

// -[SCGalleryStoriesTabV2Controller _cleanUpEmptyStateForActiveSearchIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106a06cbc

// -[SCGalleryStoriesTabV2Controller _updateEmptyStateView:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a06d00

// -[SCGalleryStoriesTabV2Controller scrollContentInset]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x106a07164

// -[SCGalleryStoriesTabV2Controller visible]
// Type encoding: B16@0:8
// Implementation: 0x106a07170

// -[SCGalleryStoriesTabV2Controller focused]
// Type encoding: B16@0:8
// Implementation: 0x106a07178

// -[SCGalleryStoriesTabV2Controller loading]
// Type encoding: B16@0:8
// Implementation: 0x106a07180

// -[SCGalleryStoriesTabV2Controller selectMode]
// Type encoding: B16@0:8
// Implementation: 0x106a07188

// -[SCGalleryStoriesTabV2Controller delegate]
// Type encoding: @16@0:8
// Implementation: 0x106a07190

// -[SCGalleryStoriesTabV2Controller setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a071a8

// -[SCGalleryStoriesTabV2Controller tabType]
// Type encoding: Q16@0:8
// Implementation: 0x106a071b4

// -[SCGalleryStoriesTabV2Controller .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106a071bc

@end
