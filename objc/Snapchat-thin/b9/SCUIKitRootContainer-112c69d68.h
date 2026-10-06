// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUIKitRootContainer
// Superclass: SCDeckContainerBase
// Address: 0x112c69d68

@interface SCUIKitRootContainer

// Property: delegate; attributes: T@"<SCRootContainerDelegate>",W,N,Vdelegate
// Property: developerName; attributes: T@"NSString",C,N
// Property: gestureDelegate; attributes: T@"<SCDeckContainerGestureDelegate>",W,N
// Property: useUIKitForChildPresentation; attributes: TB,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUIKitRootContainer initWithBaseViewController:initialPage:transitionEventAnnouncer:currentPageTracker:circumstanceEngine:]
// Type encoding: @52@0:8@16i24@28@36@44
// Implementation: 0x10b09825c

// -[SCUIKitRootContainer initWithBaseViewController:transitionEventAnnouncer:currentPageTracker:circumstanceEngine:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10b09849c

// -[SCUIKitRootContainer setVisibleViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0984b0

// -[SCUIKitRootContainer visibleViewController]
// Type encoding: @16@0:8
// Implementation: 0x10b0984b4

// -[SCUIKitRootContainer dismissUntilWithAnimated:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x10b0984d4

// -[SCUIKitRootContainer prepareForNoninteractiveBranchChangeTransitionFromContainer:toContainer:readyBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10b0984d8

// -[SCUIKitRootContainer _logTransitionEventsForAnnouncer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0984ec

// -[SCUIKitRootContainer delegate]
// Type encoding: @16@0:8
// Implementation: 0x10b09866c

// -[SCUIKitRootContainer setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b09868c

// -[SCUIKitRootContainer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0986a0

@end
