// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapCarouselContainerView
// Superclass: SCTransparentParentView
// Address: 0x112b02808

@interface SCMapCarouselContainerView

// Property: pages; attributes: T@"NSArray",C,N,V_pages
// Property: delegate; attributes: T@"<SCMapCarouselContainerViewDelegate>",W,N,V_delegate
// Property: padding; attributes: T{SCMapCarouselViewPadding=ddd},N
// Property: scrollEnabled; attributes: TB,N
// Property: wraparoundScrollEnabled; attributes: TB,N
// Property: onlyScrollOneItemPerSwipe; attributes: TB,N
// Property: showsDismissButton; attributes: TB,N
// Property: visiblePageIndex; attributes: Tq,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapCarouselContainerView initWithFrame:allowsDismissal:]
// Type encoding: @52@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16B48
// Implementation: 0x10686cc7c

// -[SCMapCarouselContainerView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x10686cd9c

// -[SCMapCarouselContainerView padding]
// Type encoding: {SCMapCarouselViewPadding=ddd}16@0:8
// Implementation: 0x10686cdf4

// -[SCMapCarouselContainerView setPadding:]
// Type encoding: v40@0:8{SCMapCarouselViewPadding=ddd}16
// Implementation: 0x10686ce04

// -[SCMapCarouselContainerView scrollEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10686ce14

// -[SCMapCarouselContainerView setScrollEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10686ce24

// -[SCMapCarouselContainerView wraparoundScrollEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10686ce34

// -[SCMapCarouselContainerView setWraparoundScrollEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10686ce44

// -[SCMapCarouselContainerView onlyScrollOneItemPerSwipe]
// Type encoding: B16@0:8
// Implementation: 0x10686ce54

// -[SCMapCarouselContainerView setOnlyScrollOneItemPerSwipe:]
// Type encoding: v20@0:8B16
// Implementation: 0x10686ce64

// -[SCMapCarouselContainerView setShowsDismissButton:]
// Type encoding: v20@0:8B16
// Implementation: 0x10686ce74

// -[SCMapCarouselContainerView showsDismissButton]
// Type encoding: B16@0:8
// Implementation: 0x10686ce84

// -[SCMapCarouselContainerView viewForPageAtIndex:]
// Type encoding: @24@0:8q16
// Implementation: 0x10686ce94

// -[SCMapCarouselContainerView setPages:]
// Type encoding: v24@0:8@16
// Implementation: 0x10686cea4

// -[SCMapCarouselContainerView setPages:visiblePageIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10686ceac

// -[SCMapCarouselContainerView numberOfViewsInMapCarouselView:]
// Type encoding: q24@0:8@16
// Implementation: 0x10686d050

// -[SCMapCarouselContainerView mapCarouselView:viewForIndex:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10686d060

// -[SCMapCarouselContainerView mapCarouselView:didShowViewAtIndex:actionType:]
// Type encoding: v40@0:8@16q24Q32
// Implementation: 0x10686d100

// -[SCMapCarouselContainerView mapCarouselViewShouldBeDismissed:]
// Type encoding: v24@0:8@16
// Implementation: 0x10686d19c

// -[SCMapCarouselContainerView visiblePageIndex]
// Type encoding: q16@0:8
// Implementation: 0x10686d21c

// -[SCMapCarouselContainerView setVisiblePageIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x10686d22c

// -[SCMapCarouselContainerView scrollToPageAtIndex:animated:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x10686d234

// -[SCMapCarouselContainerView isUserCurrentlyInteracting]
// Type encoding: B16@0:8
// Implementation: 0x10686d244

// -[SCMapCarouselContainerView _handlePanGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x10686d254

// -[SCMapCarouselContainerView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10686d3ac

// -[SCMapCarouselContainerView animateInWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10686d400

// -[SCMapCarouselContainerView animateOutWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10686d47c

// -[SCMapCarouselContainerView _springToHidden:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x10686d488

// -[SCMapCarouselContainerView pages]
// Type encoding: @16@0:8
// Implementation: 0x10686d5b4

// -[SCMapCarouselContainerView delegate]
// Type encoding: @16@0:8
// Implementation: 0x10686d5c4

// -[SCMapCarouselContainerView setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10686d5e4

// -[SCMapCarouselContainerView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10686d5f8

@end
