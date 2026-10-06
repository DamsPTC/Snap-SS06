// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: IGListSectionController
// Superclass: NSObject
// Address: 0x112b89538

@interface IGListSectionController

// Property: collectionContext; attributes: T@"<IGListCollectionContext>",W,N,V_collectionContext
// Property: viewController; attributes: T@"UIViewController",W,N,V_viewController
// Property: section; attributes: Tq,N,V_section
// Property: isFirstSection; attributes: TB,N,V_isFirstSection
// Property: isLastSection; attributes: TB,N,V_isLastSection
// Property: inset; attributes: T{UIEdgeInsets=dddd},N,V_inset
// Property: minimumLineSpacing; attributes: Td,N,V_minimumLineSpacing
// Property: minimumInteritemSpacing; attributes: Td,N,V_minimumInteritemSpacing
// Property: supplementaryViewSource; attributes: T@"<IGListSupplementaryViewSource>",W,N,V_supplementaryViewSource
// Property: displayDelegate; attributes: T@"<IGListDisplayDelegate>",W,N,V_displayDelegate
// Property: workingRangeDelegate; attributes: T@"<IGListWorkingRangeDelegate>",W,N,V_workingRangeDelegate
// Property: scrollDelegate; attributes: T@"<IGListScrollDelegate>",W,N,V_scrollDelegate
// Property: transitionDelegate; attributes: T@"<IGListTransitionDelegate>",W,N,V_transitionDelegate

// -[IGListSectionController init]
// Type encoding: @16@0:8
// Implementation: 0x107e9b5e8

// -[IGListSectionController numberOfItems]
// Type encoding: q16@0:8
// Implementation: 0x107e9b6e0

// -[IGListSectionController sizeForItemAtIndex:]
// Type encoding: {CGSize=dd}24@0:8q16
// Implementation: 0x107e9b6e8

// -[IGListSectionController cellForItemAtIndex:]
// Type encoding: @24@0:8q16
// Implementation: 0x107e9b6f8

// -[IGListSectionController didUpdateToObject:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e9b700

// -[IGListSectionController shouldSelectItemAtIndex:]
// Type encoding: B24@0:8q16
// Implementation: 0x107e9b704

// -[IGListSectionController shouldDeselectItemAtIndex:]
// Type encoding: B24@0:8q16
// Implementation: 0x107e9b70c

// -[IGListSectionController didSelectItemAtIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x107e9b714

// -[IGListSectionController didDeselectItemAtIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x107e9b718

// -[IGListSectionController didHighlightItemAtIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x107e9b71c

// -[IGListSectionController didUnhighlightItemAtIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x107e9b720

// -[IGListSectionController canMoveItemAtIndex:]
// Type encoding: B24@0:8q16
// Implementation: 0x107e9b724

// -[IGListSectionController canMoveItemAtIndex:toIndex:]
// Type encoding: B32@0:8q16q24
// Implementation: 0x107e9b72c

// -[IGListSectionController moveObjectFromIndex:toIndex:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x107e9b730

// -[IGListSectionController willDisplayCell:atIndex:listAdapter:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x107e9b734

// -[IGListSectionController didEndDisplayingCell:atIndex:listAdapter:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x107e9b7b8

// -[IGListSectionController willDisplaySectionControllerWithListAdapter:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e9b83c

// -[IGListSectionController didEndDisplayingSectionControllerWithListAdapter:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e9b898

// -[IGListSectionController viewController]
// Type encoding: @16@0:8
// Implementation: 0x107e9b8f4

// -[IGListSectionController setViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e9b90c

// -[IGListSectionController collectionContext]
// Type encoding: @16@0:8
// Implementation: 0x107e9b918

// -[IGListSectionController setCollectionContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e9b930

// -[IGListSectionController section]
// Type encoding: q16@0:8
// Implementation: 0x107e9b93c

// -[IGListSectionController setSection:]
// Type encoding: v24@0:8q16
// Implementation: 0x107e9b944

// -[IGListSectionController isFirstSection]
// Type encoding: B16@0:8
// Implementation: 0x107e9b94c

// -[IGListSectionController setIsFirstSection:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e9b954

// -[IGListSectionController isLastSection]
// Type encoding: B16@0:8
// Implementation: 0x107e9b95c

// -[IGListSectionController setIsLastSection:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e9b964

// -[IGListSectionController inset]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x107e9b96c

// -[IGListSectionController setInset:]
// Type encoding: v48@0:8{UIEdgeInsets=dddd}16
// Implementation: 0x107e9b978

// -[IGListSectionController minimumLineSpacing]
// Type encoding: d16@0:8
// Implementation: 0x107e9b984

// -[IGListSectionController setMinimumLineSpacing:]
// Type encoding: v24@0:8d16
// Implementation: 0x107e9b98c

// -[IGListSectionController minimumInteritemSpacing]
// Type encoding: d16@0:8
// Implementation: 0x107e9b994

// -[IGListSectionController setMinimumInteritemSpacing:]
// Type encoding: v24@0:8d16
// Implementation: 0x107e9b99c

// -[IGListSectionController supplementaryViewSource]
// Type encoding: @16@0:8
// Implementation: 0x107e9b9a4

// -[IGListSectionController setSupplementaryViewSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e9b9bc

// -[IGListSectionController displayDelegate]
// Type encoding: @16@0:8
// Implementation: 0x107e9b9c8

// -[IGListSectionController setDisplayDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e9b9e0

// -[IGListSectionController workingRangeDelegate]
// Type encoding: @16@0:8
// Implementation: 0x107e9b9ec

// -[IGListSectionController setWorkingRangeDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e9ba04

// -[IGListSectionController scrollDelegate]
// Type encoding: @16@0:8
// Implementation: 0x107e9ba10

// -[IGListSectionController setScrollDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e9ba28

// -[IGListSectionController transitionDelegate]
// Type encoding: @16@0:8
// Implementation: 0x107e9ba34

// -[IGListSectionController setTransitionDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e9ba4c

// -[IGListSectionController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107e9ba58

@end
