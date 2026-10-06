// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImpalaShowProfilePresenter
// Superclass: NSObject
// Address: 0x112b7eea8

@interface SCImpalaShowProfilePresenter

// Property: presentingViewController; attributes: T@"UIViewController",R,W,N,V_presentingViewController
// Property: provider; attributes: T@"<SCImpalaViewControllerProvider>",R,W,N,V_provider
// Property: performHapticFeedback; attributes: TB,N,V_performHapticFeedback
// Property: delegate; attributes: T@"<SCImpalaShowProfilePresenterDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCImpalaShowProfilePresenter initWithPresentingViewController:]
// Type encoding: @24@0:8@16
// Implementation: 0x107d77610

// -[SCImpalaShowProfilePresenter initWithPresentingViewController:isNavigationStyleVertical:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x107d77718

// -[SCImpalaShowProfilePresenter initWithSwipeUpInPresentingViewController:provider:viewForPresentationGesture:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107d77838

// -[SCImpalaShowProfilePresenter initWithSwipeUpInPresentingViewController:provider:viewForPresentationGesture:isNavigationStyleVertical:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x107d7794c

// -[SCImpalaShowProfilePresenter presentViewController:animated:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x107d77a80

// -[SCImpalaShowProfilePresenter _swipeDirectionForLogging]
// Type encoding: q16@0:8
// Implementation: 0x107d77e7c

// -[SCImpalaShowProfilePresenter _swipeActionEnabledWithDirection:]
// Type encoding: B24@0:8q16
// Implementation: 0x107d77e98

// -[SCImpalaShowProfilePresenter swipeInteractionControllerShouldStartInteraction:withDirection:]
// Type encoding: B32@0:8@16q24
// Implementation: 0x107d77f34

// -[SCImpalaShowProfilePresenter swipeInteractionControllerDidStartInteraction:withDirection:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107d77fd8

// -[SCImpalaShowProfilePresenter swipeInteractionController:withDirection:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B40@0:8@16q24@32
// Implementation: 0x107d78098

// -[SCImpalaShowProfilePresenter swipeInteractionController:shouldBeRequiredToFailByGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107d78314

// -[SCImpalaShowProfilePresenter swipeInteractionControllerDidBegin:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d7832c

// -[SCImpalaShowProfilePresenter swipeInteractionControllerDidFinish:cancelled:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107d78380

// -[SCImpalaShowProfilePresenter animationControllerForPresentedController:presentingController:sourceController:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107d783dc

// -[SCImpalaShowProfilePresenter animationControllerForDismissedController:]
// Type encoding: @24@0:8@16
// Implementation: 0x107d78404

// -[SCImpalaShowProfilePresenter interactionControllerForPresentation:]
// Type encoding: @24@0:8@16
// Implementation: 0x107d7842c

// -[SCImpalaShowProfilePresenter interactionControllerForDismissal:]
// Type encoding: @24@0:8@16
// Implementation: 0x107d78454

// -[SCImpalaShowProfilePresenter presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x107d7847c

// -[SCImpalaShowProfilePresenter provider]
// Type encoding: @16@0:8
// Implementation: 0x107d78494

// -[SCImpalaShowProfilePresenter performHapticFeedback]
// Type encoding: B16@0:8
// Implementation: 0x107d784ac

// -[SCImpalaShowProfilePresenter setPerformHapticFeedback:]
// Type encoding: v20@0:8B16
// Implementation: 0x107d784b4

// -[SCImpalaShowProfilePresenter delegate]
// Type encoding: @16@0:8
// Implementation: 0x107d784bc

// -[SCImpalaShowProfilePresenter setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d784d4

// -[SCImpalaShowProfilePresenter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107d784e0

@end
