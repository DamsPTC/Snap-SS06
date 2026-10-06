// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapCarouselView
// Superclass: UIView
// Address: 0x112b02948

@interface SCMapCarouselView

// Property: delegate; attributes: T@"<SCMapCarouselViewDelegate>",W,N,V_delegate
// Property: dataSource; attributes: T@"<SCMapCarouselViewDataSource>",W,N,V_dataSource
// Property: scrollEnabled; attributes: TB,N
// Property: infiniteScrollEnabled; attributes: TB,N,V_infiniteScrollEnabled
// Property: onlyScrollOneItemPerSwipe; attributes: TB,N,V_onlyScrollOneItemPerSwipe
// Property: alphaFadingEnabled; attributes: TB,N,V_alphaFadingEnabled
// Property: showsDismissButton; attributes: TB,N,V_showsDismissButton
// Property: padding; attributes: T{SCMapCarouselViewPadding=ddd},N,V_padding
// Property: currentViewIndex; attributes: Tq,R,N
// Property: isUserInteracting; attributes: TB,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapCarouselView init]
// Type encoding: @16@0:8
// Implementation: 0x10686f778

// -[SCMapCarouselView initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10686f78c

// -[SCMapCarouselView _handleDismissTap]
// Type encoding: v16@0:8
// Implementation: 0x10686fae8

// -[SCMapCarouselView _widthForCellWithPadding:]
// Type encoding: d40@0:8{SCMapCarouselViewPadding=ddd}16
// Implementation: 0x10686fb68

// -[SCMapCarouselView _wrapView:padding:]
// Type encoding: @48@0:8@16{SCMapCarouselViewPadding=ddd}24
// Implementation: 0x10686fb98

// -[SCMapCarouselView _numberOfScrollPaddingViewsPerSide]
// Type encoding: q16@0:8
// Implementation: 0x10686fda4

// -[SCMapCarouselView _indexToRealViewIndex:]
// Type encoding: q24@0:8q16
// Implementation: 0x10686fe0c

// -[SCMapCarouselView _indexToPreferredDisplayIndex:]
// Type encoding: q24@0:8q16
// Implementation: 0x10686fe60

// -[SCMapCarouselView _isPreferredIndex:]
// Type encoding: B24@0:8q16
// Implementation: 0x10686fea0

// -[SCMapCarouselView _preferredIndexPathForIndexPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x10686ff1c

// -[SCMapCarouselView _currentIndexPathUsingCenterPoint]
// Type encoding: @16@0:8
// Implementation: 0x10686ff8c

// -[SCMapCarouselView _viewAtIndexDidBeginToLoseFocus:]
// Type encoding: v24@0:8q16
// Implementation: 0x10686ffe0

// -[SCMapCarouselView _scrollToViewAtIndex:actionType:animated:]
// Type encoding: v36@0:8q16Q24B32
// Implementation: 0x10687009c

// -[SCMapCarouselView scrollToViewAtIndex:animated:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x1068702d8

// -[SCMapCarouselView reloadData]
// Type encoding: v16@0:8
// Implementation: 0x1068702e4

// -[SCMapCarouselView viewForIndex:]
// Type encoding: @24@0:8q16
// Implementation: 0x1068703b0

// -[SCMapCarouselView currentViewIndex]
// Type encoding: q16@0:8
// Implementation: 0x106870408

// -[SCMapCarouselView isUserInteracting]
// Type encoding: B16@0:8
// Implementation: 0x1068704d4

// -[SCMapCarouselView setPadding:]
// Type encoding: v40@0:8{SCMapCarouselViewPadding=ddd}16
// Implementation: 0x106870524

// -[SCMapCarouselView setInfiniteScrollEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10687053c

// -[SCMapCarouselView setScrollEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10687055c

// -[SCMapCarouselView scrollEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10687056c

// -[SCMapCarouselView setAlphaFadingEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10687057c

// -[SCMapCarouselView setShowsDismissButton:]
// Type encoding: v20@0:8B16
// Implementation: 0x10687058c

// -[SCMapCarouselView hitTest:withEvent:]
// Type encoding: @40@0:8{CGPoint=dd}16@32
// Implementation: 0x1068707d0

// -[SCMapCarouselView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x106870a9c

// -[SCMapCarouselView _updatePropertiesForCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x106870d18

// -[SCMapCarouselView _updatePropertiesForCell:percentFromCenter:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x106870dbc

// -[SCMapCarouselView _updatePropertiesForVisibleCells]
// Type encoding: v16@0:8
// Implementation: 0x106870e18

// -[SCMapCarouselView _updateDismissButton]
// Type encoding: v16@0:8
// Implementation: 0x106870f1c

// -[SCMapCarouselView scrollingViewForCell:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068714c8

// -[SCMapCarouselView _updateDismissButtonFrameForScrollingView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068715a0

// -[SCMapCarouselView _wrappedViewInVisibleCellAtIndex:]
// Type encoding: @24@0:8q16
// Implementation: 0x10687163c

// -[SCMapCarouselView collectionView:numberOfItemsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x106871730

// -[SCMapCarouselView collectionView:cellForItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106871790

// -[SCMapCarouselView _snapshotCellView:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068717a0

// -[SCMapCarouselView collectionView:willDisplayCell:forItemAtIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106871918

// -[SCMapCarouselView numberOfSectionsInCollectionView:]
// Type encoding: q24@0:8@16
// Implementation: 0x106871c88

// -[SCMapCarouselView collectionView:layout:sizeForItemAtIndexPath:]
// Type encoding: {CGSize=dd}40@0:8@16@24@32
// Implementation: 0x106871c90

// -[SCMapCarouselView collectionView:layout:minimumLineSpacingForSectionAtIndex:]
// Type encoding: d40@0:8@16@24q32
// Implementation: 0x106871cf0

// -[SCMapCarouselView collectionView:layout:minimumInteritemSpacingForSectionAtIndex:]
// Type encoding: d40@0:8@16@24q32
// Implementation: 0x106871cf8

// -[SCMapCarouselView scrollViewWillBeginDragging:]
// Type encoding: v24@0:8@16
// Implementation: 0x106871d00

// -[SCMapCarouselView scrollViewDidScroll:]
// Type encoding: v24@0:8@16
// Implementation: 0x106871dcc

// -[SCMapCarouselView scrollViewWillEndDragging:withVelocity:targetContentOffset:]
// Type encoding: v48@0:8@16{CGPoint=dd}24N^{CGPoint=dd}40
// Implementation: 0x106871df0

// -[SCMapCarouselView scrollViewDidEndDecelerating:]
// Type encoding: v24@0:8@16
// Implementation: 0x106872040

// -[SCMapCarouselView carouselVerticalScrollingViewTopCellFrameChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x106872378

// -[SCMapCarouselView delegate]
// Type encoding: @16@0:8
// Implementation: 0x10687237c

// -[SCMapCarouselView setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10687239c

// -[SCMapCarouselView dataSource]
// Type encoding: @16@0:8
// Implementation: 0x1068723b0

// -[SCMapCarouselView setDataSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068723d0

// -[SCMapCarouselView infiniteScrollEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1068723e4

// -[SCMapCarouselView onlyScrollOneItemPerSwipe]
// Type encoding: B16@0:8
// Implementation: 0x1068723f4

// -[SCMapCarouselView setOnlyScrollOneItemPerSwipe:]
// Type encoding: v20@0:8B16
// Implementation: 0x106872404

// -[SCMapCarouselView alphaFadingEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106872414

// -[SCMapCarouselView showsDismissButton]
// Type encoding: B16@0:8
// Implementation: 0x106872424

// -[SCMapCarouselView padding]
// Type encoding: {SCMapCarouselViewPadding=ddd}16@0:8
// Implementation: 0x106872434

// -[SCMapCarouselView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10687244c

// +[SCMapCarouselView destinationTargetForTargetContentOffset:velocity:destinations:]
// Type encoding: d40@0:8d16d24@32
// Implementation: 0x1068721d0

@end
