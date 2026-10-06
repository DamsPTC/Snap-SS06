// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnifiedProfileTransitionCoordinator
// Superclass: NSObject
// Address: 0x112aeae38

@interface SCUnifiedProfileTransitionCoordinator

// Property: dataSource; attributes: T@"<SCUnifiedProfileTransitionCoordinatorDataSource>",W,N,V_dataSource
// Property: delegate; attributes: T@"<SCUnifiedProfileTransitionCoordinatorDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUnifiedProfileTransitionCoordinator initWithSourcePageViewName:attributionServices:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x10663298c

// -[SCUnifiedProfileTransitionCoordinator isProfilePresented]
// Type encoding: B16@0:8
// Implementation: 0x106632a54

// -[SCUnifiedProfileTransitionCoordinator presentProfileFromViewController:animated:profileType:]
// Type encoding: v36@0:8@16B24Q28
// Implementation: 0x106632b24

// -[SCUnifiedProfileTransitionCoordinator presentProfileFromViewController:animated:profileType:notification:completion:]
// Type encoding: v52@0:8@16B24Q28@36@?44
// Implementation: 0x106632b30

// -[SCUnifiedProfileTransitionCoordinator _presentConfiguredPresentedViewControllerWithAnimated:notification:completion:]
// Type encoding: v36@0:8B16@20@?28
// Implementation: 0x106632c48

// -[SCUnifiedProfileTransitionCoordinator transitionToProfileNotificationWhenReady:]
// Type encoding: v24@0:8@16
// Implementation: 0x106632e30

// -[SCUnifiedProfileTransitionCoordinator dismissProfileViewControllerAnimated:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x106632ea8

// -[SCUnifiedProfileTransitionCoordinator swipeDownDismissControllerGestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x10663303c

// -[SCUnifiedProfileTransitionCoordinator swipeDownDismissControllerGestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106633140

// -[SCUnifiedProfileTransitionCoordinator swipeDownDismissControllerWillBeginDismiss]
// Type encoding: v16@0:8
// Implementation: 0x1066332f0

// -[SCUnifiedProfileTransitionCoordinator swipeDownDismissControllerWillFinishDismiss]
// Type encoding: v16@0:8
// Implementation: 0x1066333a0

// -[SCUnifiedProfileTransitionCoordinator swipeDownDismissControllerWillCancelDismiss]
// Type encoding: v16@0:8
// Implementation: 0x10663340c

// -[SCUnifiedProfileTransitionCoordinator _configuredPresentedViewController]
// Type encoding: @16@0:8
// Implementation: 0x1066334a8

// -[SCUnifiedProfileTransitionCoordinator _animateAlongSideWithTransitionType:animated:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x10663371c

// -[SCUnifiedProfileTransitionCoordinator _profileTransitionDidCompleteWithTransitionType:isCancelled:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x106633918

// -[SCUnifiedProfileTransitionCoordinator interactionControllerForDismissal:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066339a8

// -[SCUnifiedProfileTransitionCoordinator animationControllerForPresentedController:presentingController:sourceController:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1066339e8

// -[SCUnifiedProfileTransitionCoordinator animationControllerForDismissedController:]
// Type encoding: @24@0:8@16
// Implementation: 0x106633a20

// -[SCUnifiedProfileTransitionCoordinator dataSource]
// Type encoding: @16@0:8
// Implementation: 0x106633a58

// -[SCUnifiedProfileTransitionCoordinator setDataSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x106633a70

// -[SCUnifiedProfileTransitionCoordinator delegate]
// Type encoding: @16@0:8
// Implementation: 0x106633a7c

// -[SCUnifiedProfileTransitionCoordinator setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106633a94

// -[SCUnifiedProfileTransitionCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106633aa0

@end
