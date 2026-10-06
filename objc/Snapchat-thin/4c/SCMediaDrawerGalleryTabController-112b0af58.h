// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMediaDrawerGalleryTabController
// Superclass: NSObject
// Address: 0x112b0af58

@interface SCMediaDrawerGalleryTabController

// Property: topMargin; attributes: Td,N,V_topMargin
// Property: bottomMargin; attributes: Td,N,V_bottomMargin
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCMediaDrawerTabControllerDelegate>",W,N,V_delegate
// Property: itemType; attributes: Tq,R,N
// Property: view; attributes: T@"UIView",R,N,V_view
// Property: scrollView; attributes: T@"UIScrollView",R,N

// -[SCMediaDrawerGalleryTabController initWithDelegate:cloudSync:memoriesMergedDataSource:memoriesEntryThumbnailGeneratorBuilder:memoriesEntrySyncStatusGeneratorBuilder:memoriesExperimentService:topOffset:]
// Type encoding: @72@0:8@16@24@32@40@48@56d64
// Implementation: 0x1069e3930

// -[SCMediaDrawerGalleryTabController itemType]
// Type encoding: q16@0:8
// Implementation: 0x1069e3ab0

// -[SCMediaDrawerGalleryTabController view]
// Type encoding: @16@0:8
// Implementation: 0x1069e3ab8

// -[SCMediaDrawerGalleryTabController scrollView]
// Type encoding: @16@0:8
// Implementation: 0x1069e400c

// -[SCMediaDrawerGalleryTabController itemsInScrollViewRect:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x1069e4034

// -[SCMediaDrawerGalleryTabController galleryEntryCount]
// Type encoding: Q16@0:8
// Implementation: 0x1069e4240

// -[SCMediaDrawerGalleryTabController willDisplayMediaDrawerTab]
// Type encoding: v16@0:8
// Implementation: 0x1069e4248

// -[SCMediaDrawerGalleryTabController collectionView:numberOfItemsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x1069e427c

// -[SCMediaDrawerGalleryTabController collectionView:cellForItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1069e4284

// -[SCMediaDrawerGalleryTabController collectionView:willDisplayCell:forItemAtIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1069e4448

// -[SCMediaDrawerGalleryTabController collectionView:didEndDisplayingCell:forItemAtIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1069e4554

// -[SCMediaDrawerGalleryTabController scrollViewWillBeginDragging:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069e45a8

// -[SCMediaDrawerGalleryTabController scrollViewDidScroll:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069e45fc

// -[SCMediaDrawerGalleryTabController scrollViewDidEndDragging:willDecelerate:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1069e4684

// -[SCMediaDrawerGalleryTabController scrollViewDidEndDecelerating:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069e46f8

// -[SCMediaDrawerGalleryTabController memoriesCollectionViewSelectionHelper:galleryItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1069e472c

// -[SCMediaDrawerGalleryTabController memoriesCollectionViewSelectionHelper:shouldChangeSelectedAtIndexPath:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1069e4758

// -[SCMediaDrawerGalleryTabController memoriesCollectionViewSelectionHelper:didChangeSelected:forItem:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x1069e4760

// -[SCMediaDrawerGalleryTabController memoriesCollectionViewSelectionHelper:didTapItemAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1069e4764

// -[SCMediaDrawerGalleryTabController memoriesCollectionViewSelectionHelper:handleLongPress:itemAtIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1069e4834

// -[SCMediaDrawerGalleryTabController memoriesCollectionViewIsFullyVisible:]
// Type encoding: B24@0:8@16
// Implementation: 0x1069e48cc

// -[SCMediaDrawerGalleryTabController memoriesCollectionViewSelectionHelper:overrideTapHandlingAtIndexPath:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1069e4978

// -[SCMediaDrawerGalleryTabController animateSelectingDrawerItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069e4980

// -[SCMediaDrawerGalleryTabController restoreSelectionForDrawerItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069e4988

// -[SCMediaDrawerGalleryTabController animateSelectingDrawerItem:updateCollectionViewState:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1069e4990

// -[SCMediaDrawerGalleryTabController animateDeselectDrawerItem:itemsIdWithUpdatedIndex:isDeselectingLastItem:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1069e4b88

// -[SCMediaDrawerGalleryTabController animateDeselectAll]
// Type encoding: v16@0:8
// Implementation: 0x1069e4d40

// -[SCMediaDrawerGalleryTabController updateScrollViewWithTopMargin:deltaContentOffset:animated:]
// Type encoding: v36@0:8d16d24B32
// Implementation: 0x1069e4ed0

// -[SCMediaDrawerGalleryTabController scrollToTopWithTopMargin:]
// Type encoding: v24@0:8d16
// Implementation: 0x1069e4fd0

// -[SCMediaDrawerGalleryTabController scrollToDrawerItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069e5010

// -[SCMediaDrawerGalleryTabController scrollToPercent:]
// Type encoding: v24@0:8d16
// Implementation: 0x1069e5084

// -[SCMediaDrawerGalleryTabController tabCellWillDisplay]
// Type encoding: v16@0:8
// Implementation: 0x1069e5100

// -[SCMediaDrawerGalleryTabController didFocusOnTab]
// Type encoding: v16@0:8
// Implementation: 0x1069e5104

// -[SCMediaDrawerGalleryTabController dataSource:didChangeEntries:failedEntries:fetchEntryError:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1069e5108

// -[SCMediaDrawerGalleryTabController setTopMargin:]
// Type encoding: v24@0:8d16
// Implementation: 0x1069e5404

// -[SCMediaDrawerGalleryTabController setBottomMargin:]
// Type encoding: v24@0:8d16
// Implementation: 0x1069e5448

// -[SCMediaDrawerGalleryTabController _animate:completionBlock:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x1069e5480

// -[SCMediaDrawerGalleryTabController _findGalleryEntryIndexByItemId:]
// Type encoding: q24@0:8@16
// Implementation: 0x1069e55a4

// -[SCMediaDrawerGalleryTabController delegate]
// Type encoding: @16@0:8
// Implementation: 0x1069e5664

// -[SCMediaDrawerGalleryTabController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069e567c

// -[SCMediaDrawerGalleryTabController topMargin]
// Type encoding: d16@0:8
// Implementation: 0x1069e5688

// -[SCMediaDrawerGalleryTabController bottomMargin]
// Type encoding: d16@0:8
// Implementation: 0x1069e5690

// -[SCMediaDrawerGalleryTabController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1069e5698

@end
