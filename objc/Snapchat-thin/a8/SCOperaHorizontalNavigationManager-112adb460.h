// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaHorizontalNavigationManager
// Superclass: NSObject
// Address: 0x112adb460

@interface SCOperaHorizontalNavigationManager

// Property: delegate; attributes: T@"<SCOperaNavigationManagingDelegate>",R,W,N,V_delegate
// Property: dataProvider; attributes: T@"<SCOperaNavigationDataProviding>",R,W,N,V_dataProvider
// Property: operaScrollView; attributes: T@"UIView<SCOperaScrollViewing>",W,N,V_operaScrollView
// Property: scrollRelativePosition; attributes: TQ,N,V_scrollRelativePosition
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOperaHorizontalNavigationManager initWithDelegate:dataProvider:configuration:grapheneRegistry:eventAnnouncer:legacyStateContainer:configProvider:internalConfigProvider:viewSource:defaultPageTransitionConfig:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72q80@88
// Implementation: 0x10631771c

// -[SCOperaHorizontalNavigationManager setOperaScrollView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063178cc

// -[SCOperaHorizontalNavigationManager navigateToPreviousGroupAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x10631791c

// -[SCOperaHorizontalNavigationManager navigateToNextGroupAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x106317924

// -[SCOperaHorizontalNavigationManager navigateToParentAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x10631792c

// -[SCOperaHorizontalNavigationManager navigateToAttachmentAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x106317934

// -[SCOperaHorizontalNavigationManager navigateToPreviousGroupAnimated:ignoreSettingLastInteraction:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x10631793c

// -[SCOperaHorizontalNavigationManager navigateToNextGroupAnimated:ignoreSettingLastInteraction:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x106317a58

// -[SCOperaHorizontalNavigationManager navigateToParentAnimated:ignoreSettingLastInteraction:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x106317b74

// -[SCOperaHorizontalNavigationManager navigateToAttachmentAnimated:ignoreSettingLastInteraction:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x106317c7c

// -[SCOperaHorizontalNavigationManager startInteractiveTransitionInDirection:velocity:touchPoint:]
// Type encoding: @56@0:8Q16{CGPoint=dd}24{CGPoint=dd}40
// Implementation: 0x106317d5c

// -[SCOperaHorizontalNavigationManager resetCurrentScrolling]
// Type encoding: v16@0:8
// Implementation: 0x106317e00

// -[SCOperaHorizontalNavigationManager isAnimatingScrolling]
// Type encoding: B16@0:8
// Implementation: 0x106317e98

// -[SCOperaHorizontalNavigationManager shouldBeginDismissingWithDirection:gestureRecognizer:]
// Type encoding: B32@0:8q16@24
// Implementation: 0x106317ea0

// -[SCOperaHorizontalNavigationManager didFinishLayoutPageViewControllersForCurrentViewModel]
// Type encoding: v16@0:8
// Implementation: 0x106318360

// -[SCOperaHorizontalNavigationManager _shouldDismissOnViewModel:]
// Type encoding: B24@0:8@16
// Implementation: 0x106318364

// -[SCOperaHorizontalNavigationManager _relativePositionForSwipeDirecton:]
// Type encoding: Q24@0:8q16
// Implementation: 0x106318488

// -[SCOperaHorizontalNavigationManager _scrollToContentOffset:animated:forAutoAdvance:ignoreSettingLastInteraction:scrollRelativePosition:]
// Type encoding: v52@0:8{CGPoint=dd}16B32B36B40Q44
// Implementation: 0x1063184ac

// -[SCOperaHorizontalNavigationManager operaScrollViewDidScroll:direction:touchBeginPoint:]
// Type encoding: v48@0:8@16q24{CGPoint=dd}32
// Implementation: 0x1063186a4

// -[SCOperaHorizontalNavigationManager operaScrollViewWillEndDragging:direction:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106318c98

// -[SCOperaHorizontalNavigationManager operaScrollViewDidEndScrolling:]
// Type encoding: v24@0:8@16
// Implementation: 0x106318ccc

// -[SCOperaHorizontalNavigationManager operaScrollViewDidTap:recognizer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106318f54

// -[SCOperaHorizontalNavigationManager operaScrollViewWillBeginDragging:velocity:touchPoint:]
// Type encoding: v56@0:8@16{CGPoint=dd}24{CGPoint=dd}40
// Implementation: 0x106319368

// -[SCOperaHorizontalNavigationManager operaScrollViewWillScroll:direction:targetOffset:animated:]
// Type encoding: B52@0:8@16q24{CGPoint=dd}32B48
// Implementation: 0x106319810

// -[SCOperaHorizontalNavigationManager scrollView:swipeDirectionForAngle:]
// Type encoding: q32@0:8@16d24
// Implementation: 0x106319c7c

// -[SCOperaHorizontalNavigationManager scrollView:animationConfigForDirection:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x106319d88

// -[SCOperaHorizontalNavigationManager scrollView:minVelocityForDirection:]
// Type encoding: d32@0:8@16q24
// Implementation: 0x106319e44

// -[SCOperaHorizontalNavigationManager _scrollViewOffsetForPageVC:]
// Type encoding: {CGPoint=dd}24@0:8@16
// Implementation: 0x106319edc

// -[SCOperaHorizontalNavigationManager _sendScrollEventWithRelativePosition:isPanning:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x106319f40

// -[SCOperaHorizontalNavigationManager _pageVCForRelativePosition:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10631a0ec

// -[SCOperaHorizontalNavigationManager _viewModelForRelativePosition:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10631a164

// -[SCOperaHorizontalNavigationManager _updatePageVCForHorizontalScroll:]
// Type encoding: v24@0:8@16
// Implementation: 0x10631a26c

// -[SCOperaHorizontalNavigationManager _updateLeftTapLayerEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10631a48c

// -[SCOperaHorizontalNavigationManager _updateViewPropertiesWithContentOffset:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x10631a5a4

// -[SCOperaHorizontalNavigationManager _isScrollingVertically]
// Type encoding: B16@0:8
// Implementation: 0x10631ad7c

// -[SCOperaHorizontalNavigationManager _isScrollingHorizontally]
// Type encoding: B16@0:8
// Implementation: 0x10631adb4

// -[SCOperaHorizontalNavigationManager _pageViewControllerForViewModel:atRelativePosition:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x10631adec

// -[SCOperaHorizontalNavigationManager delegate]
// Type encoding: @16@0:8
// Implementation: 0x10631b020

// -[SCOperaHorizontalNavigationManager dataProvider]
// Type encoding: @16@0:8
// Implementation: 0x10631b038

// -[SCOperaHorizontalNavigationManager operaScrollView]
// Type encoding: @16@0:8
// Implementation: 0x10631b050

// -[SCOperaHorizontalNavigationManager scrollRelativePosition]
// Type encoding: Q16@0:8
// Implementation: 0x10631b068

// -[SCOperaHorizontalNavigationManager setScrollRelativePosition:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10631b070

// -[SCOperaHorizontalNavigationManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10631b078

@end
