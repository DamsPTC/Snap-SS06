// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRootContainer
// Superclass: SCDeckContainerBase
// Address: 0x112c699f8

@interface SCRootContainer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCRootContainerDelegate>",W,N,Vdelegate
// Property: developerName; attributes: T@"NSString",C,N
// Property: gestureDelegate; attributes: T@"<SCDeckContainerGestureDelegate>",W,N
// Property: useUIKitForChildPresentation; attributes: TB,N

// -[SCRootContainer initWithPresenter:bridgingSCUIContainer:transitionEventAnnouncer:currentPageTracker:circumstanceEngine:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x100593394

// -[SCRootContainer dismissUntilWithAnimated:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x10b094884

// -[SCRootContainer onUIWillAppear:appearance:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b094888

// -[SCRootContainer onUIDidAppear:appearance:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b094914

// -[SCRootContainer onUIDidDisappear:appearance:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1008ecf18

// -[SCRootContainer leafAskedToActivateButAlreadyActive:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b0949a4

// -[SCRootContainer willPerformBranchChangeTransitionFromContainer:toContainer:animated:interactive:]
// Type encoding: v40@0:8@16@24B32B36
// Implementation: 0x100876378

// -[SCRootContainer prepareForNoninteractiveBranchChangeTransitionFromContainer:toContainer:readyBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x100876428

// -[SCRootContainer didPerformBranchChangeTransitionFromContainer:toContainer:animated:interactive:completed:]
// Type encoding: v44@0:8@16@24B32B36B40
// Implementation: 0x1008eddb8

// -[SCRootContainer containerVC:willStartTransitionFrom:to:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1008791e0

// -[SCRootContainer containerVC:didEndTransitionFrom:to:didComplete:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x1008ee1f0

// -[SCRootContainer containerVC:viewWillAppearAnimated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x100c29398

// -[SCRootContainer containerVC:viewDidAppearAnimated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x100c7d6c8

// -[SCRootContainer containerVC:viewWillDisappearAnimated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10b094afc

// -[SCRootContainer containerVC:viewDidDisappearAnimated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10b094c40

// -[SCRootContainer _logTransitionEventsWithAnnouncer:]
// Type encoding: v24@0:8@16
// Implementation: 0x100593cc8

// -[SCRootContainer delegate]
// Type encoding: @16@0:8
// Implementation: 0x100876404

// -[SCRootContainer setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x100593fe8

// -[SCRootContainer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b094d84

@end
