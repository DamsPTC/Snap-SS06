// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCModalPresenter
// Superclass: NSObject
// Address: 0x112c6a060

@interface SCModalPresenter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: loggingObserver; attributes: T@"<SCPresenterObserver>",R,W,N,V_loggingObserver
// Property: useUIKitPresentation; attributes: TB,R,N,V_useUIKitPresentation

// -[SCModalPresenter initWithPresentingVC:presentationDirection:disableHandlingTranitionAnimation:modalContainerFactory:modalPresentationStyle:]
// Type encoding: @52@0:8@16q24B32@36q44
// Implementation: 0x10b099458

// -[SCModalPresenter present:usingStyle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b0994e4

// -[SCModalPresenter present:usingStyle:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10b0994ec

// -[SCModalPresenter presentInteractively:usingStyle:completion:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x10b0996c4

// -[SCModalPresenter dismissInteractivelyWithCompletion:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10b0998d4

// -[SCModalPresenter dismissViewControllerWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b099a58

// -[SCModalPresenter willHandleTransitionAnimationForVC:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b099b90

// -[SCModalPresenter setHorizontalFlowDirection:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b099bb0

// -[SCModalPresenter clearInteractiveTransitionState]
// Type encoding: v16@0:8
// Implementation: 0x10b099bb8

// -[SCModalPresenter interactiveTransitionEndedWithDidComplete:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b099bc0

// -[SCModalPresenter _initializeForPresentationWithVC:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b099bf8

// -[SCModalPresenter _initializeForDismissal]
// Type encoding: v16@0:8
// Implementation: 0x10b099c54

// -[SCModalPresenter _cleanup]
// Type encoding: v16@0:8
// Implementation: 0x10b099c8c

// -[SCModalPresenter _maybeCreateTransitionDelegateForVC:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b099cd0

// -[SCModalPresenter _handleInteractiveTransitionWithIsPresenting:vcToPresent:uiContainer:completion:]
// Type encoding: @44@0:8B16@20@28@?36
// Implementation: 0x10b099d3c

// -[SCModalPresenter _setModalPresentationStyleForFullScreenVC:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b099ea4

// -[SCModalPresenter _maybeSetDeckPresentedForVC:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b099eb4

// -[SCModalPresenter _maybeSetDeckDismissalForVC:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b099ef8

// -[SCModalPresenter _maybeResetDeckPresentationPropsForVC:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b099f3c

// -[SCModalPresenter loggingObserver]
// Type encoding: @16@0:8
// Implementation: 0x10b099f80

// -[SCModalPresenter useUIKitPresentation]
// Type encoding: B16@0:8
// Implementation: 0x10b099f98

// -[SCModalPresenter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b099fa0

@end
