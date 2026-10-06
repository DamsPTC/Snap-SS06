// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNavigationPresenter
// Superclass: NSObject
// Address: 0x112c6a0b0

@interface SCNavigationPresenter

// Property: loggingObserver; attributes: T@"<SCPresenterObserver>",R,W,N,V_loggingObserver
// Property: useUIKitPresentation; attributes: TB,R,N,V_useUIKitPresentation
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNavigationPresenter initWithPresentingVC:modalPresenter:deckContainer:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10b09a000

// -[SCNavigationPresenter present:usingStyle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b09a080

// -[SCNavigationPresenter present:usingStyle:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10b09a088

// -[SCNavigationPresenter presentInteractively:usingStyle:completion:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x10b09a2bc

// -[SCNavigationPresenter dismissInteractivelyWithCompletion:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10b09a50c

// -[SCNavigationPresenter dismissViewControllerWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b09a640

// -[SCNavigationPresenter willHandleTransitionAnimationForVC:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b09a764

// -[SCNavigationPresenter setHorizontalFlowDirection:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b09a76c

// -[SCNavigationPresenter clearInteractiveTransitionState]
// Type encoding: v16@0:8
// Implementation: 0x10b09a774

// -[SCNavigationPresenter _handleTransitionCompletion:completed:]
// Type encoding: v28@0:8@?16B24
// Implementation: 0x10b09a780

// -[SCNavigationPresenter _setUpContainerViewControllerWithVC:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b09a79c

// -[SCNavigationPresenter isTransitionInProgress]
// Type encoding: B16@0:8
// Implementation: 0x10b09a8bc

// -[SCNavigationPresenter loggingObserver]
// Type encoding: @16@0:8
// Implementation: 0x10b09a8c4

// -[SCNavigationPresenter useUIKitPresentation]
// Type encoding: B16@0:8
// Implementation: 0x10b09a8dc

// -[SCNavigationPresenter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b09a8e4

@end
