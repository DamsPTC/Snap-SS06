// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSwipeTransitionController
// Superclass: NSObject
// Address: 0x112c01bc8

@interface SCSwipeTransitionController

// Property: presenting; attributes: TB,N,V_presenting
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSwipeTransitionController initWithDirection:animationDuration:passthroughViews:]
// Type encoding: @40@0:8Q16d24@32
// Implementation: 0x10aef11c4

// -[SCSwipeTransitionController wasCancelled]
// Type encoding: B16@0:8
// Implementation: 0x10aef1268

// -[SCSwipeTransitionController _isInteractive]
// Type encoding: B16@0:8
// Implementation: 0x10aef12a0

// -[SCSwipeTransitionController resetWithDuration:direction:]
// Type encoding: v32@0:8d16Q24
// Implementation: 0x10aef1304

// -[SCSwipeTransitionController animateTransition:presentedViewController:presentingViewController:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x10aef1338

// -[SCSwipeTransitionController transitionDuration:]
// Type encoding: d24@0:8@16
// Implementation: 0x10aef1658

// -[SCSwipeTransitionController animateTransition:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aef1660

// -[SCSwipeTransitionController presentationAnimationPhaseFromViewController:toViewController:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10aef1858

// -[SCSwipeTransitionController dismissalAnimationPhaseFromViewController:toViewController:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10aef19a4

// -[SCSwipeTransitionController _frameChangeAnimationPhaseWithDestinationFrame:view:]
// Type encoding: @56@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48
// Implementation: 0x10aef1b04

// -[SCSwipeTransitionController presenting]
// Type encoding: B16@0:8
// Implementation: 0x10aef1d28

// -[SCSwipeTransitionController setPresenting:]
// Type encoding: v20@0:8B16
// Implementation: 0x10aef1d30

// -[SCSwipeTransitionController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10aef1d38

// +[SCSwipeTransitionController _originPointForDirection:presentingViewController:presentedViewController:]
// Type encoding: {CGPoint=dd}40@0:8Q16@24@32
// Implementation: 0x10aef1738

@end
