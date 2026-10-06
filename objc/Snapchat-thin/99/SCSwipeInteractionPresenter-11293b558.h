// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSwipeInteractionPresenter
// Superclass: NSObject
// Address: 0x11293b558

@interface SCSwipeInteractionPresenter

// Property: performThresholdHaptic; attributes: TB,N,VperformThresholdHaptic

// -[SCSwipeInteractionPresenter swipeInteractionController:shouldStartInteractionWithDirection:]
// Type encoding: B32@0:8@16q24
// Implementation: 0x103bab9ec

// -[SCSwipeInteractionPresenter swipeInteractionController:didStartInteractionWithDirection:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x103baba50

// -[SCSwipeInteractionPresenter swipeInteractionController:withDirection:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B40@0:8@16q24@32
// Implementation: 0x103babaa0

// -[SCSwipeInteractionPresenter swipeInteractionController:shouldBeRequiredToFailByGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x103babb20

// -[SCSwipeInteractionPresenter swipeInteractionControllerDidBegin:]
// Type encoding: v24@0:8@16
// Implementation: 0x103babc68

// -[SCSwipeInteractionPresenter swipeInteractionControllerDidFinish:cancelled:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x103babe84

// -[SCSwipeInteractionPresenter swipeInteractionControllerDidCrossCommitThreshold:]
// Type encoding: v24@0:8@16
// Implementation: 0x103babfcc

// -[SCSwipeInteractionPresenter animationControllerForPresentedController:presentingController:sourceController:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x103bab89c

// -[SCSwipeInteractionPresenter animationControllerForDismissedController:]
// Type encoding: @24@0:8@16
// Implementation: 0x103bacb14

// -[SCSwipeInteractionPresenter interactionControllerForPresentation:]
// Type encoding: @24@0:8@16
// Implementation: 0x103bab8ac

// -[SCSwipeInteractionPresenter interactionControllerForDismissal:]
// Type encoding: @24@0:8@16
// Implementation: 0x103bacb10

// -[SCSwipeInteractionPresenter performThresholdHaptic]
// Type encoding: B16@0:8
// Implementation: 0x103ba9b10

// -[SCSwipeInteractionPresenter setPerformThresholdHaptic:]
// Type encoding: v20@0:8B16
// Implementation: 0x103ba9b54

// -[SCSwipeInteractionPresenter initWithPresentingViewController:viewForPresentationGesture:presentedViewControllerProvider:delegate:dismissalSwipeDirection:performHapticFeedback:invertDismissDirection:]
// Type encoding: @64@0:8@16@24@32@40q48B56B60
// Implementation: 0x103baa440

// -[SCSwipeInteractionPresenter initWithPresentingViewController:viewForPresentationGesture:presentedViewControllerProvider:delegate:swipeDirection:performHapticFeedback:invertDismissDirection:]
// Type encoding: @64@0:8@16@24@32@40q48B56B60
// Implementation: 0x103baac58

// -[SCSwipeInteractionPresenter getPresentationInteractionController]
// Type encoding: @16@0:8
// Implementation: 0x103baad2c

// -[SCSwipeInteractionPresenter presentWithAnimated:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x103bab3e0

// -[SCSwipeInteractionPresenter init]
// Type encoding: @16@0:8
// Implementation: 0x103bab7d4

// -[SCSwipeInteractionPresenter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x103bab834

@end
