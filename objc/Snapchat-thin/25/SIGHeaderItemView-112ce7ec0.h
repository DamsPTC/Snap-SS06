// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SIGHeaderItemView
// Superclass: UIView
// Address: 0x112ce7ec0

@interface SIGHeaderItemView

// Property: currentHeaderItem; attributes: T@"SIGHeaderItem",&,N
// Property: observer; attributes: T@"<SIGHeaderItemViewObserver>",W,N,V_observer
// Property: titleTextField; attributes: T@"UITextField",R,N
// Property: searchField; attributes: T@"SIGTextField",R,N
// Property: tooltipPresenter; attributes: T@"<SIGTooltipPresenter>",W,N,V_tooltipPresenter
// Property: titleAffordance; attributes: T@"UIImage",&,N,V_titleAffordance
// Property: contentInset; attributes: T{UIEdgeInsets=dddd},N,V_contentInset
// Property: scrollViewVerticalOffset; attributes: Tq,N,V_scrollViewVerticalOffset
// Property: maximumHeight; attributes: Td,R,N
// Property: maximumHeightWithFullBottomAccessoryRow; attributes: Td,R,N
// Property: scrollViewScrollingToTopOnTappingStatusBar; attributes: TB,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SIGHeaderItemView initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10057e180

// -[SIGHeaderItemView setTooltipPresenter:]
// Type encoding: v24@0:8@16
// Implementation: 0x100586ef8

// -[SIGHeaderItemView titleTextField]
// Type encoding: @16@0:8
// Implementation: 0x10b859244

// -[SIGHeaderItemView searchField]
// Type encoding: @16@0:8
// Implementation: 0x10b859254

// -[SIGHeaderItemView _fractionalSearchShown]
// Type encoding: d16@0:8
// Implementation: 0x1005867fc

// -[SIGHeaderItemView _fractionalBottomAccessoryViewShown]
// Type encoding: d16@0:8
// Implementation: 0x100586870

// -[SIGHeaderItemView _fractionalBottomAccessoryViewHeightShown]
// Type encoding: d16@0:8
// Implementation: 0x1005868e4

// -[SIGHeaderItemView _titleOpacity]
// Type encoding: d16@0:8
// Implementation: 0x10b859264

// -[SIGHeaderItemView _bottomAccessoryRowOpacity]
// Type encoding: d16@0:8
// Implementation: 0x10b8592b0

// -[SIGHeaderItemView _isShowingSearchRow]
// Type encoding: B16@0:8
// Implementation: 0x100c2e63c

// -[SIGHeaderItemView _isShowingSubheaderRow]
// Type encoding: B16@0:8
// Implementation: 0x100586958

// -[SIGHeaderItemView _interfaceLayoutDirection]
// Type encoding: q16@0:8
// Implementation: 0x100c2e354

// -[SIGHeaderItemView safeAreaInsetsDidChange]
// Type encoding: v16@0:8
// Implementation: 0x100c2daec

// -[SIGHeaderItemView layoutMarginsDidChange]
// Type encoding: v16@0:8
// Implementation: 0x100c2daa4

// -[SIGHeaderItemView _resolvedSafeAreaInsets]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x10058647c

// -[SIGHeaderItemView _intrinsicTotalSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x100586444

// -[SIGHeaderItemView heightAtFractionalSearchShown:fractionalBottomAccessoryViewShown:showingSubheader:]
// Type encoding: d36@0:8d16d24B32
// Implementation: 0x100586968

// -[SIGHeaderItemView maximumHeight]
// Type encoding: d16@0:8
// Implementation: 0x1008bf4bc

// -[SIGHeaderItemView maximumHeightWithFullBottomAccessoryRow]
// Type encoding: d16@0:8
// Implementation: 0x10b8592e8

// -[SIGHeaderItemView _intrinsicContentSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x100586788

// -[SIGHeaderItemView _topRowBounds]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x100c2df54

// -[SIGHeaderItemView _horizontalContentBoundsWithSafeAreaInsets:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}48@0:8{UIEdgeInsets=dddd}16
// Implementation: 0x100c2e010

// -[SIGHeaderItemView _cornerAdaptiveHorizontalLayoutFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x100c2e1c4

// -[SIGHeaderItemView _topRowTitleFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x100c2e1d4

// -[SIGHeaderItemView _topRowLeadingAccessoryViewFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x100c2e290

// -[SIGHeaderItemView _topRowTrailingAccessoryViewFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x100c2e398

// -[SIGHeaderItemView _tabBarFrameWithSearchFieldFrame:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x100c2e580

// -[SIGHeaderItemView _bottomAccessoryViewRowFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x100c2e8e4

// -[SIGHeaderItemView _intrinsicSearchFieldFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x100c2decc

// -[SIGHeaderItemView _effectiveSearchFieldFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x100c2dd74

// -[SIGHeaderItemView _updateScrollBasedValues]
// Type encoding: v16@0:8
// Implementation: 0x100586324

// -[SIGHeaderItemView didMoveToWindow]
// Type encoding: v16@0:8
// Implementation: 0x100c2c5e0

// -[SIGHeaderItemView invalidateIntrinsicContentSize]
// Type encoding: v16@0:8
// Implementation: 0x1005862a4

// -[SIGHeaderItemView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x100c2db34

// -[SIGHeaderItemView _layoutSubviewsInternal]
// Type encoding: v16@0:8
// Implementation: 0x10b859418

// -[SIGHeaderItemView _layoutSubviewsInternalWithSearchFieldFrame:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x100c2e460

// -[SIGHeaderItemView intrinsicContentSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x1005863c0

// -[SIGHeaderItemView headerItem:didChangeHeaderTitleRowYOffset:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10058626c

// -[SIGHeaderItemView headerItem:didChangeAdjustsContentSizeWhenHidden:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10b85943c

// -[SIGHeaderItemView headerItem:didChangeAlpha:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x1005861d8

// -[SIGHeaderItemView headerItem:didChangeHidden:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x100586224

// -[SIGHeaderItemView headerItem:didChangeTitleAffordance:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100586db8

// -[SIGHeaderItemView traitCollectionDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c2c4e0

// -[SIGHeaderItemView scrollViewScrollingToTopOnTappingStatusBar]
// Type encoding: B16@0:8
// Implementation: 0x10b859440

// -[SIGHeaderItemView setScrollViewVerticalOffset:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b859450

// -[SIGHeaderItemView currentHeaderItem]
// Type encoding: @16@0:8
// Implementation: 0x100587094

// -[SIGHeaderItemView setCurrentHeaderItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1005813c4

// -[SIGHeaderItemView headerItem:didChangeSearchFieldVisible:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x100586b08

// -[SIGHeaderItemView headerItem:didChangeShowsSectionTitle:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x100586c9c

// -[SIGHeaderItemView headerItem:didChangeTabBarItems:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100586c24

// -[SIGHeaderItemView headerItem:didChangeTitleAlwaysCollapsed:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x100586a6c

// -[SIGHeaderItemView headerItem:didChangeTitleCollapsesWhenScrolled:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x100586a24

// -[SIGHeaderItemView headerItem:didChangeBottomAccessoryViewFadesWhenScrolled:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x100586ab4

// -[SIGHeaderItemView headerItem:didChangeBottomAccessoryViewCollapsesWhenScrolled:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x100586ad0

// -[SIGHeaderItemView headerItem:didChangeScrollViewScrollingToTopOnTappingStatusBar:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x100586aec

// -[SIGHeaderItemView headerItem:didChangeBottomAccessoryView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100586cac

// -[SIGHeaderItemView startAnimationForTransitionToHeaderItem:style:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10b8594fc

// -[SIGHeaderItemView completeAnimation:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b8595fc

// -[SIGHeaderItemView performAnimatedTransition:style:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x100587700

// -[SIGHeaderItemView titleAffordance]
// Type encoding: @16@0:8
// Implementation: 0x100586e18

// -[SIGHeaderItemView setTitleAffordance:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b8599ec

// -[SIGHeaderItemView observer]
// Type encoding: @16@0:8
// Implementation: 0x10b859a2c

// -[SIGHeaderItemView setObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x100586f54

// -[SIGHeaderItemView tooltipPresenter]
// Type encoding: @16@0:8
// Implementation: 0x10b859a4c

// -[SIGHeaderItemView contentInset]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x10b859a6c

// -[SIGHeaderItemView setContentInset:]
// Type encoding: v48@0:8{UIEdgeInsets=dddd}16
// Implementation: 0x10b859a84

// -[SIGHeaderItemView scrollViewVerticalOffset]
// Type encoding: q16@0:8
// Implementation: 0x10b859a9c

// -[SIGHeaderItemView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x100c22b60

@end
