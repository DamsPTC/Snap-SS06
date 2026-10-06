// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSwipeTransitionCoordinatorImpl
// Superclass: NSObject
// Address: 0x112c01c68

@interface SCSwipeTransitionCoordinatorImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: presentationDirection; attributes: TQ,R,N,V_presentationDirection
// Property: dismissDirection; attributes: TQ,R,N,V_dismissDirection
// Property: percentPresented; attributes: Td,R,N
// Property: isPresenting; attributes: TB,R,N
// Property: isTransitioning; attributes: TB,R,N
// Property: interactivePresentationController; attributes: T@"SCInteractiveSwipeTransitionController",R,N,V_interactivePresentationController
// Property: interactiveDismissController; attributes: T@"SCInteractiveSwipeTransitionController",R,N,V_interactiveDismissController

// -[SCSwipeTransitionCoordinatorImpl initWithPresentationDirection:dismissalDirection:transitionMode:delegate:dataSource:]
// Type encoding: @56@0:8Q16Q24Q32@40@48
// Implementation: 0x10085ca24

// -[SCSwipeTransitionCoordinatorImpl initWithDirection:transitionMode:delegate:dataSource:]
// Type encoding: @48@0:8Q16Q24@32@40
// Implementation: 0x10085c9a0

// -[SCSwipeTransitionCoordinatorImpl dataSource]
// Type encoding: @16@0:8
// Implementation: 0x10aef2a74

// -[SCSwipeTransitionCoordinatorImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x10aef2a8c

// -[SCSwipeTransitionCoordinatorImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aef2aa4

// -[SCSwipeTransitionCoordinatorImpl shouldSetPresentedViewControllerAfterTransition]
// Type encoding: B16@0:8
// Implementation: 0x10aef2ab0

// -[SCSwipeTransitionCoordinatorImpl percentPresented]
// Type encoding: d16@0:8
// Implementation: 0x1008cb884

// -[SCSwipeTransitionCoordinatorImpl isPresenting]
// Type encoding: B16@0:8
// Implementation: 0x1008b4e50

// -[SCSwipeTransitionCoordinatorImpl isTransitioning]
// Type encoding: B16@0:8
// Implementation: 0x10aef2ab8

// -[SCSwipeTransitionCoordinatorImpl presentViewController:animationDuration:completion:]
// Type encoding: v40@0:8@16d24@?32
// Implementation: 0x10aef2af4

// -[SCSwipeTransitionCoordinatorImpl dismissViewControllerAnimationDuration:completion:]
// Type encoding: v32@0:8d16@?24
// Implementation: 0x10aef2cec

// -[SCSwipeTransitionCoordinatorImpl _completeDismissViewController:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x10aef2e28

// -[SCSwipeTransitionCoordinatorImpl swipeTransitionController:willBeginWithTransitionType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10aef2e90

// -[SCSwipeTransitionCoordinatorImpl swipeTransitionController:didBeginWithTransitionType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10aef2e94

// -[SCSwipeTransitionCoordinatorImpl swipeTransitionController:didFinishWithTransitionType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10aef2e98

// -[SCSwipeTransitionCoordinatorImpl swipeTransitionController:willFailWithTransitionType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10aef2ed8

// -[SCSwipeTransitionCoordinatorImpl transitionController:transitionType:shouldAllowGesture:toRecognizeSimultaneouslyWith:]
// Type encoding: B48@0:8@16Q24@32@40
// Implementation: 0x10aef2f7c

// -[SCSwipeTransitionCoordinatorImpl presentedViewControllerWithSwipeTransitionController:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aef3034

// -[SCSwipeTransitionCoordinatorImpl presentingViewControllerWithSwipeTransitionController:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aef30f8

// -[SCSwipeTransitionCoordinatorImpl shouldBeginTransitionWithSwipeTransitionController:gestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10aef30fc

// -[SCSwipeTransitionCoordinatorImpl swipeTransitionController:transitionViewController:withTransitionType:direction:completion:]
// Type encoding: v56@0:8@16@24Q32Q40@?48
// Implementation: 0x10aef315c

// -[SCSwipeTransitionCoordinatorImpl shouldTransitionWithTransitionType:gestureRecognizer:interactive:]
// Type encoding: B36@0:8Q16@24B32
// Implementation: 0x10aef32a0

// -[SCSwipeTransitionCoordinatorImpl performTransitionWithViewController:withTransitionType:direction:animationDuration:interactive:completion:]
// Type encoding: v60@0:8@16Q24Q32d40B48@?52
// Implementation: 0x10aef334c

// -[SCSwipeTransitionCoordinatorImpl _didFinishTransitionWithTransitionType:interactive:completion:]
// Type encoding: v36@0:8Q16B24@?28
// Implementation: 0x10aef36f4

// -[SCSwipeTransitionCoordinatorImpl passthroughViews]
// Type encoding: @16@0:8
// Implementation: 0x10aef37a8

// -[SCSwipeTransitionCoordinatorImpl performModalTransitionWithViewController:withTransitionType:animated:completion:]
// Type encoding: v44@0:8@16Q24B32@?36
// Implementation: 0x10aef37b4

// -[SCSwipeTransitionCoordinatorImpl interactionControllerForPresentation:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aef389c

// -[SCSwipeTransitionCoordinatorImpl interactionControllerForDismissal:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aef38dc

// -[SCSwipeTransitionCoordinatorImpl animationControllerForPresentedController:presentingController:sourceController:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10aef391c

// -[SCSwipeTransitionCoordinatorImpl animationControllerForDismissedController:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aef3954

// -[SCSwipeTransitionCoordinatorImpl presentationControllerForPresentedViewController:presentingViewController:sourceViewController:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10aef398c

// -[SCSwipeTransitionCoordinatorImpl presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x10aef3a40

// -[SCSwipeTransitionCoordinatorImpl _setupPresentedViewControllerForTransition]
// Type encoding: v16@0:8
// Implementation: 0x10aef3a88

// -[SCSwipeTransitionCoordinatorImpl _logPlatformInfoWithString:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aef3b90

// -[SCSwipeTransitionCoordinatorImpl presentationDirection]
// Type encoding: Q16@0:8
// Implementation: 0x10aef3b94

// -[SCSwipeTransitionCoordinatorImpl dismissDirection]
// Type encoding: Q16@0:8
// Implementation: 0x10aef3b9c

// -[SCSwipeTransitionCoordinatorImpl interactiveDismissController]
// Type encoding: @16@0:8
// Implementation: 0x10aef3ba4

// -[SCSwipeTransitionCoordinatorImpl interactivePresentationController]
// Type encoding: @16@0:8
// Implementation: 0x10085cbfc

// -[SCSwipeTransitionCoordinatorImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10aef3bac

@end
