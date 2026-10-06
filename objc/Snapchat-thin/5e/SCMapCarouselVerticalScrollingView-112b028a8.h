// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapCarouselVerticalScrollingView
// Superclass: SCTransparentParentView
// Address: 0x112b028a8

@interface SCMapCarouselVerticalScrollingView

// Property: collectionView; attributes: T@"UICollectionView",R,N,V_collectionView
// Property: delegate; attributes: T@"<SCMapCarouselVerticalScrollingViewDelegate>",W,N,V_delegate
// Property: topCellFrame; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapCarouselVerticalScrollingView initWithFrame:allowsDismissal:]
// Type encoding: @52@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16B48
// Implementation: 0x10686e584

// -[SCMapCarouselVerticalScrollingView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x10686e750

// -[SCMapCarouselVerticalScrollingView hitTest:withEvent:]
// Type encoding: @40@0:8{CGPoint=dd}16@32
// Implementation: 0x10686e888

// -[SCMapCarouselVerticalScrollingView topCellFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x10686ea28

// -[SCMapCarouselVerticalScrollingView updateContentInset]
// Type encoding: v16@0:8
// Implementation: 0x10686eb1c

// -[SCMapCarouselVerticalScrollingView verticalPeekHeight]
// Type encoding: d16@0:8
// Implementation: 0x10686eba8

// -[SCMapCarouselVerticalScrollingView additionalScrollSnappingOffsetsForItemAtIndexPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x10686ec18

// -[SCMapCarouselVerticalScrollingView _scrollDestinationsForTopsOfCells]
// Type encoding: @16@0:8
// Implementation: 0x10686ec20

// -[SCMapCarouselVerticalScrollingView _allScrollDestinations]
// Type encoding: @16@0:8
// Implementation: 0x10686ec28

// -[SCMapCarouselVerticalScrollingView _scrollDestinationsIncludingAdditionalInternalSnapPoints:]
// Type encoding: @20@0:8B16
// Implementation: 0x10686ec30

// -[SCMapCarouselVerticalScrollingView _isScrolledToTop]
// Type encoding: B16@0:8
// Implementation: 0x10686ef10

// -[SCMapCarouselVerticalScrollingView _isScrolledToBottom]
// Type encoding: B16@0:8
// Implementation: 0x10686efe0

// -[SCMapCarouselVerticalScrollingView _heightForItemAtIndex:inSection:]
// Type encoding: d32@0:8q16q24
// Implementation: 0x10686f0b0

// -[SCMapCarouselVerticalScrollingView _heightForHeader]
// Type encoding: d16@0:8
// Implementation: 0x10686f170

// -[SCMapCarouselVerticalScrollingView reloadData]
// Type encoding: v16@0:8
// Implementation: 0x10686f204

// -[SCMapCarouselVerticalScrollingView scrollToItemAtIndex:animated:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x10686f264

// -[SCMapCarouselVerticalScrollingView numberOfSectionsInCollectionView:]
// Type encoding: q24@0:8@16
// Implementation: 0x10686f338

// -[SCMapCarouselVerticalScrollingView collectionView:numberOfItemsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x10686f340

// -[SCMapCarouselVerticalScrollingView collectionView:cellForItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10686f348

// -[SCMapCarouselVerticalScrollingView collectionView:viewForSupplementaryElementOfKind:atIndexPath:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10686f350

// -[SCMapCarouselVerticalScrollingView collectionView:layout:sizeForItemAtIndexPath:]
// Type encoding: {CGSize=dd}40@0:8@16@24@32
// Implementation: 0x10686f358

// -[SCMapCarouselVerticalScrollingView collectionView:layout:referenceSizeForHeaderInSection:]
// Type encoding: {CGSize=dd}40@0:8@16@24q32
// Implementation: 0x10686f374

// -[SCMapCarouselVerticalScrollingView collectionView:layout:minimumLineSpacingForSectionAtIndex:]
// Type encoding: d40@0:8@16@24q32
// Implementation: 0x10686f394

// -[SCMapCarouselVerticalScrollingView collectionView:layout:minimumInteritemSpacingForSectionAtIndex:]
// Type encoding: d40@0:8@16@24q32
// Implementation: 0x10686f39c

// -[SCMapCarouselVerticalScrollingView scrollViewDidScroll:]
// Type encoding: v24@0:8@16
// Implementation: 0x10686f3a4

// -[SCMapCarouselVerticalScrollingView scrollViewWillEndDragging:withVelocity:targetContentOffset:]
// Type encoding: v48@0:8@16{CGPoint=dd}24N^{CGPoint=dd}40
// Implementation: 0x10686f3e0

// -[SCMapCarouselVerticalScrollingView _onPan:]
// Type encoding: v24@0:8@16
// Implementation: 0x10686f448

// -[SCMapCarouselVerticalScrollingView gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x10686f4a4

// -[SCMapCarouselVerticalScrollingView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10686f628

// -[SCMapCarouselVerticalScrollingView delegate]
// Type encoding: @16@0:8
// Implementation: 0x10686f630

// -[SCMapCarouselVerticalScrollingView setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10686f650

// -[SCMapCarouselVerticalScrollingView collectionView]
// Type encoding: @16@0:8
// Implementation: 0x10686f664

// -[SCMapCarouselVerticalScrollingView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10686f674

@end
