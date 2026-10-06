// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaDeckContainerImpl
// Superclass: SCDeckContainerBase
// Address: 0x112c69958

@interface SCOperaDeckContainerImpl

// Property: developerName; attributes: T@"NSString",C,N
// Property: gestureDelegate; attributes: T@"<SCDeckContainerGestureDelegate>",W,N
// Property: useUIKitForChildPresentation; attributes: TB,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOperaDeckContainerImpl initWithPresenter:parentContainer:page:]
// Type encoding: @36@0:8@16@24i32
// Implementation: 0x10b0941a0

// -[SCOperaDeckContainerImpl startAnimatedPresentationWithViewController:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b0942b8

// -[SCOperaDeckContainerImpl cancelAnimatedPresentation]
// Type encoding: v16@0:8
// Implementation: 0x10b0942c8

// -[SCOperaDeckContainerImpl completeAnimatedPresentation]
// Type encoding: v16@0:8
// Implementation: 0x10b0942d8

// -[SCOperaDeckContainerImpl startAnimatedDismissalWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b0942e8

// -[SCOperaDeckContainerImpl cancelAnimatedDismissal]
// Type encoding: v16@0:8
// Implementation: 0x10b094458

// -[SCOperaDeckContainerImpl completeAnimatedDismissal]
// Type encoding: v16@0:8
// Implementation: 0x10b094468

// -[SCOperaDeckContainerImpl _releaseVisibleViewController]
// Type encoding: v16@0:8
// Implementation: 0x10b094478

// -[SCOperaDeckContainerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b094480

// +[SCOperaDeckContainerImpl operaDeckContainerWithConfig:presenter:parentContainer:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10b0940e8

@end
