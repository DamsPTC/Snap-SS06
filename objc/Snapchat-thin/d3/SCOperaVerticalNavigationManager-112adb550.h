// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaVerticalNavigationManager
// Superclass: NSObject
// Address: 0x112adb550

@interface SCOperaVerticalNavigationManager

// Property: delegate; attributes: T@"<SCOperaNavigationManagingDelegate>",R,W,N,V_delegate
// Property: dataProvider; attributes: T@"<SCOperaNavigationDataProviding>",R,W,N,V_dataProvider
// Property: operaScrollView; attributes: T@"UIView<SCOperaScrollViewing>",W,N,V_operaScrollView
// Property: scrollRelativePosition; attributes: TQ,N,V_scrollRelativePosition
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOperaVerticalNavigationManager initWithDelegate:dataProvider:configuration:grapheneRegistry:eventAnnouncer:legacyStateContainer:configProvider:internalConfigProvider:viewSource:defaultPageTransitionConfig:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72q80@88
// Implementation: 0x10631b648

// -[SCOperaVerticalNavigationManager setOperaScrollView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10631b834

// -[SCOperaVerticalNavigationManager navigateToPreviousGroupAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x10631b884

// -[SCOperaVerticalNavigationManager navigateToNextGroupAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x10631b88c

// -[SCOperaVerticalNavigationManager navigateToParentAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x10631b894

// -[SCOperaVerticalNavigationManager navigateToAttachmentAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x10631b89c

// -[SCOperaVerticalNavigationManager navigateToPreviousGroupAnimated:ignoreSettingLastInteraction:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x10631b8a4

// -[SCOperaVerticalNavigationManager navigateToNextGroupAnimated:ignoreSettingLastInteraction:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x10631b9c0

// -[SCOperaVerticalNavigationManager navigateToParentAnimated:ignoreSettingLastInteraction:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x10631badc

// -[SCOperaVerticalNavigationManager resetCurrentScrolling]
// Type encoding: v16@0:8
// Implementation: 0x10631bbd0

// -[SCOperaVerticalNavigationManager navigateToAttachmentAnimated:ignoreSettingLastInteraction:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x10631bc48

// -[SCOperaVerticalNavigationManager startInteractiveTransitionInDirection:velocity:touchPoint:]
// Type encoding: @56@0:8Q16{CGPoint=dd}24{CGPoint=dd}40
// Implementation: 0x10631bf44

// -[SCOperaVerticalNavigationManager isAnimatingScrolling]
// Type encoding: B16@0:8
// Implementation: 0x10631c030

// -[SCOperaVerticalNavigationManager shouldBeginDismissingWithDirection:gestureRecognizer:]
// Type encoding: B32@0:8q16@24
// Implementation: 0x10631c038

// -[SCOperaVerticalNavigationManager didFinishLayoutPageViewControllersForCurrentViewModel]
// Type encoding: v16@0:8
// Implementation: 0x10631c510

// -[SCOperaVerticalNavigationManager _shouldDismissOnViewModel:]
// Type encoding: B24@0:8@16
// Implementation: 0x10631c744

// -[SCOperaVerticalNavigationManager _relativePositionForSwipeDirecton:]
// Type encoding: Q24@0:8q16
// Implementation: 0x10631c7c4

// -[SCOperaVerticalNavigationManager _scrollToContentOffset:animated:forAutoAdvance:ignoreSettingLastInteraction:scrollRelativePosition:]
// Type encoding: v52@0:8{CGPoint=dd}16B32B36B40Q44
// Implementation: 0x10631c950

// -[SCOperaVerticalNavigationManager _scrollRelativePositionForSwipeDirection:]
// Type encoding: Q24@0:8q16
// Implementation: 0x10631cb78

// -[SCOperaVerticalNavigationManager operaScrollViewDidScroll:direction:touchBeginPoint:]
// Type encoding: v48@0:8@16q24{CGPoint=dd}32
// Implementation: 0x10631cd68

// -[SCOperaVerticalNavigationManager operaScrollViewWillEndDragging:direction:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10631d1f4

// -[SCOperaVerticalNavigationManager operaScrollViewDidEndScrolling:]
// Type encoding: v24@0:8@16
// Implementation: 0x10631d228

// -[SCOperaVerticalNavigationManager operaScrollViewDidTap:recognizer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10631d5b0

// -[SCOperaVerticalNavigationManager operaScrollViewWillBeginDragging:velocity:touchPoint:]
// Type encoding: v56@0:8@16{CGPoint=dd}24{CGPoint=dd}40
// Implementation: 0x10631d9c4

// -[SCOperaVerticalNavigationManager operaScrollViewWillScroll:direction:targetOffset:animated:]
// Type encoding: B52@0:8@16q24{CGPoint=dd}32B48
// Implementation: 0x10631e064

// -[SCOperaVerticalNavigationManager scrollView:swipeDirectionForAngle:]
// Type encoding: q32@0:8@16d24
// Implementation: 0x10631e54c

// -[SCOperaVerticalNavigationManager scrollView:animationConfigForDirection:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10631e658

// -[SCOperaVerticalNavigationManager scrollView:minVelocityForDirection:]
// Type encoding: d32@0:8@16q24
// Implementation: 0x10631e714

// -[SCOperaVerticalNavigationManager _setContentOffsetWithoutCallback:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x10631e7ac

// -[SCOperaVerticalNavigationManager _scrollViewOffsetForPageVC:]
// Type encoding: {CGPoint=dd}24@0:8@16
// Implementation: 0x10631e830

// -[SCOperaVerticalNavigationManager _sendScrollEventWithRelativePosition:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10631e838

// -[SCOperaVerticalNavigationManager _pageVCForRelativePosition:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10631e938

// -[SCOperaVerticalNavigationManager _viewModelForRelativePosition:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10631e9b0

// -[SCOperaVerticalNavigationManager _updateLeftTapLayerEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10631ea1c

// -[SCOperaVerticalNavigationManager _updateViewPropertiesWithContentOffset:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x10631eb34

// -[SCOperaVerticalNavigationManager _isScrollingVertically]
// Type encoding: B16@0:8
// Implementation: 0x10631f368

// -[SCOperaVerticalNavigationManager _isScrollingHorizontally]
// Type encoding: B16@0:8
// Implementation: 0x10631f438

// -[SCOperaVerticalNavigationManager _pageViewControllerForViewModel:atRelativePosition:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x10631f4d4

// -[SCOperaVerticalNavigationManager _initProfilerIfNeeded:grapheneRegistry:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10631f708

// -[SCOperaVerticalNavigationManager delegate]
// Type encoding: @16@0:8
// Implementation: 0x10631f7b8

// -[SCOperaVerticalNavigationManager dataProvider]
// Type encoding: @16@0:8
// Implementation: 0x10631f7d0

// -[SCOperaVerticalNavigationManager operaScrollView]
// Type encoding: @16@0:8
// Implementation: 0x10631f7e8

// -[SCOperaVerticalNavigationManager scrollRelativePosition]
// Type encoding: Q16@0:8
// Implementation: 0x10631f800

// -[SCOperaVerticalNavigationManager setScrollRelativePosition:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10631f808

// -[SCOperaVerticalNavigationManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10631f810

@end
