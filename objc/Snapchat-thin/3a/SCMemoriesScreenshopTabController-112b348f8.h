// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesScreenshopTabController
// Superclass: NSObject
// Address: 0x112b348f8

@interface SCMemoriesScreenshopTabController

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: tabType; attributes: TQ,R,N,V_tabType
// Property: scrollContentInset; attributes: T{UIEdgeInsets=dddd},N,V_scrollContentInset
// Property: scrollContentOffset; attributes: Td,N,V_scrollContentOffset
// Property: contentHeight; attributes: Td,R,N
// Property: scrollContentDistanceToTop; attributes: Td,R,N,V_scrollContentDistanceToTop
// Property: visible; attributes: TB,N,V_visible
// Property: focused; attributes: TB,N,V_focused
// Property: loading; attributes: TB,N,V_loading
// Property: selectMode; attributes: TB,N,V_selectMode
// Property: delegate; attributes: T@"<SCGalleryTabControllerDelegate>",W,N,V_delegate
// Property: PPVNavigationLogger; attributes: T@"<SCNavigationLogging>",?,&,N

// -[SCMemoriesScreenshopTabController initWithContainerViewController:configuration:delegate:tabType:composerCoreUIServices:screenshopTabServices:commerceConfigProvider:valdiRuntimeProvider:circumstanceEngine:]
// Type encoding: @88@0:8@16@24@32Q40@48@56@64@72@80
// Implementation: 0x106cf4888

// -[SCMemoriesScreenshopTabController sourceViewForLastOpenedItemAndNotifyRecentOpenedItemId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106cf4ae4

// -[SCMemoriesScreenshopTabController presentOperaWithPHassets:index:sourceView:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x106cf4b0c

// -[SCMemoriesScreenshopTabController updateTabBarBadged:]
// Type encoding: v20@0:8B16
// Implementation: 0x106cf4c88

// -[SCMemoriesScreenshopTabController _createGridWithLoading]
// Type encoding: v16@0:8
// Implementation: 0x106cf4d8c

// -[SCMemoriesScreenshopTabController _alertContainer]
// Type encoding: @16@0:8
// Implementation: 0x106cf5258

// -[SCMemoriesScreenshopTabController _attachAlertViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x106cf5414

// -[SCMemoriesScreenshopTabController _detachAlertViewControllerWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106cf5498

// -[SCMemoriesScreenshopTabController _constrainCategoryGrid]
// Type encoding: v16@0:8
// Implementation: 0x106cf5608

// -[SCMemoriesScreenshopTabController _logScreenshopOnboardingImpressionWithLocation:isNewUser:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106cf5864

// -[SCMemoriesScreenshopTabController _checkDisplayOnboardingPopupViewWithBlock:isNewUser:]
// Type encoding: v28@0:8@?16B24
// Implementation: 0x106cf58d8

// -[SCMemoriesScreenshopTabController loadViewIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106cf598c

// -[SCMemoriesScreenshopTabController allItemsCount]
// Type encoding: Q16@0:8
// Implementation: 0x106cf5a50

// -[SCMemoriesScreenshopTabController allItems]
// Type encoding: @16@0:8
// Implementation: 0x106cf5a58

// -[SCMemoriesScreenshopTabController galleryItemIdToSnapsMap]
// Type encoding: @16@0:8
// Implementation: 0x106cf5a64

// -[SCMemoriesScreenshopTabController galleryItemIdToPHAssetsMap]
// Type encoding: @16@0:8
// Implementation: 0x106cf5a6c

// -[SCMemoriesScreenshopTabController itemIdsToExclude]
// Type encoding: @16@0:8
// Implementation: 0x106cf5a74

// -[SCMemoriesScreenshopTabController changeSelected:forGalleryItem:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x106cf5a7c

// -[SCMemoriesScreenshopTabController changeSelected:forGallerySnapItem:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x106cf5a80

// -[SCMemoriesScreenshopTabController changeSelected:forItems:snapItems:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x106cf5a84

// -[SCMemoriesScreenshopTabController endEditing]
// Type encoding: v16@0:8
// Implementation: 0x106cf5a88

// -[SCMemoriesScreenshopTabController galleryViewWillAppear]
// Type encoding: v16@0:8
// Implementation: 0x106cf5a8c

// -[SCMemoriesScreenshopTabController galleryViewDidAppear]
// Type encoding: v16@0:8
// Implementation: 0x106cf5ad0

// -[SCMemoriesScreenshopTabController galleryViewDidDisappear]
// Type encoding: v16@0:8
// Implementation: 0x106cf5ad4

// -[SCMemoriesScreenshopTabController indexPathForId:itemLevelIdentifier:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106cf5b18

// -[SCMemoriesScreenshopTabController setFocused:]
// Type encoding: v20@0:8B16
// Implementation: 0x106cf5b2c

// -[SCMemoriesScreenshopTabController isDragging]
// Type encoding: B16@0:8
// Implementation: 0x106cf5c30

// -[SCMemoriesScreenshopTabController isPrivate]
// Type encoding: B16@0:8
// Implementation: 0x106cf5c38

// -[SCMemoriesScreenshopTabController isEditing]
// Type encoding: B16@0:8
// Implementation: 0x106cf5c40

// -[SCMemoriesScreenshopTabController isInLineSearchable]
// Type encoding: B16@0:8
// Implementation: 0x106cf5c48

// -[SCMemoriesScreenshopTabController isTracking]
// Type encoding: B16@0:8
// Implementation: 0x106cf5c50

// -[SCMemoriesScreenshopTabController isViewLoaded]
// Type encoding: B16@0:8
// Implementation: 0x106cf5c58

// -[SCMemoriesScreenshopTabController itemsInRect:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x106cf5c68

// -[SCMemoriesScreenshopTabController prefersAllItemsAreNotIterated]
// Type encoding: B16@0:8
// Implementation: 0x106cf5c74

// -[SCMemoriesScreenshopTabController scrollBarTopOffset]
// Type encoding: d16@0:8
// Implementation: 0x106cf5c7c

// -[SCMemoriesScreenshopTabController scrollToGalleryItem:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106cf5c84

// -[SCMemoriesScreenshopTabController selectedGalleryItems]
// Type encoding: @16@0:8
// Implementation: 0x106cf5c88

// -[SCMemoriesScreenshopTabController setScrollContentOffset:animated:completion:]
// Type encoding: v36@0:8d16B24@?28
// Implementation: 0x106cf5c90

// -[SCMemoriesScreenshopTabController scrollToTop]
// Type encoding: v16@0:8
// Implementation: 0x106cf5ca8

// -[SCMemoriesScreenshopTabController contentHeight]
// Type encoding: d16@0:8
// Implementation: 0x106cf5cac

// -[SCMemoriesScreenshopTabController shouldAlignInitialScrollContentDistanceToTopOfOtherTabControllerToThisTabController]
// Type encoding: B16@0:8
// Implementation: 0x106cf5cb4

// -[SCMemoriesScreenshopTabController shouldAlignInitialScrollContentDistanceToTopOfThisTabControllerToOtherTabController]
// Type encoding: B16@0:8
// Implementation: 0x106cf5cbc

// -[SCMemoriesScreenshopTabController deeplinkToOperaWithDestinationInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x106cf5cc4

// -[SCMemoriesScreenshopTabController shouldDisplay]
// Type encoding: B16@0:8
// Implementation: 0x106cf5cc8

// -[SCMemoriesScreenshopTabController collectionView]
// Type encoding: @16@0:8
// Implementation: 0x106cf5cd0

// -[SCMemoriesScreenshopTabController view]
// Type encoding: @16@0:8
// Implementation: 0x106cf5cd8

// -[SCMemoriesScreenshopTabController didTriggerCreateMashupForStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x106cf5d00

// -[SCMemoriesScreenshopTabController didTriggerRefetchLatestFeaturedStories]
// Type encoding: v16@0:8
// Implementation: 0x106cf5d04

// -[SCMemoriesScreenshopTabController pageViewName]
// Type encoding: q16@0:8
// Implementation: 0x106cf5d08

// -[SCMemoriesScreenshopTabController galleryTabsOperaPresenterShouldUpdateList]
// Type encoding: B16@0:8
// Implementation: 0x106cf5d10

// -[SCMemoriesScreenshopTabController galleryTabsOperaPresenterOperaPlaylistForItemId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106cf5d18

// -[SCMemoriesScreenshopTabController galleryTabsOperaPresenterDidDismissOpera]
// Type encoding: v16@0:8
// Implementation: 0x106cf5d24

// -[SCMemoriesScreenshopTabController scrollContentInset]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x106cf5d28

// -[SCMemoriesScreenshopTabController setScrollContentInset:]
// Type encoding: v48@0:8{UIEdgeInsets=dddd}16
// Implementation: 0x106cf5d34

// -[SCMemoriesScreenshopTabController scrollContentOffset]
// Type encoding: d16@0:8
// Implementation: 0x106cf5d40

// -[SCMemoriesScreenshopTabController setScrollContentOffset:]
// Type encoding: v24@0:8d16
// Implementation: 0x106cf5d48

// -[SCMemoriesScreenshopTabController scrollContentDistanceToTop]
// Type encoding: d16@0:8
// Implementation: 0x106cf5d50

// -[SCMemoriesScreenshopTabController visible]
// Type encoding: B16@0:8
// Implementation: 0x106cf5d58

// -[SCMemoriesScreenshopTabController setVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x106cf5d60

// -[SCMemoriesScreenshopTabController focused]
// Type encoding: B16@0:8
// Implementation: 0x106cf5d68

// -[SCMemoriesScreenshopTabController loading]
// Type encoding: B16@0:8
// Implementation: 0x106cf5d70

// -[SCMemoriesScreenshopTabController setLoading:]
// Type encoding: v20@0:8B16
// Implementation: 0x106cf5d78

// -[SCMemoriesScreenshopTabController selectMode]
// Type encoding: B16@0:8
// Implementation: 0x106cf5d80

// -[SCMemoriesScreenshopTabController setSelectMode:]
// Type encoding: v20@0:8B16
// Implementation: 0x106cf5d88

// -[SCMemoriesScreenshopTabController delegate]
// Type encoding: @16@0:8
// Implementation: 0x106cf5d90

// -[SCMemoriesScreenshopTabController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106cf5da8

// -[SCMemoriesScreenshopTabController tabType]
// Type encoding: Q16@0:8
// Implementation: 0x106cf5db4

// -[SCMemoriesScreenshopTabController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106cf5dbc

@end
