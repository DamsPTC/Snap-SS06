// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SIGCardGestureAggregator
// Superclass: NSObject
// Address: 0x112ce7128

@interface SIGCardGestureAggregator

// Property: dismissDirection; attributes: TQ,N,V_dismissDirection
// Property: dismissalTransition; attributes: T@"UIPercentDrivenInteractiveTransition",R,N
// Property: cardTransitionDelegate; attributes: T@"<SIGCardTransitionDelegate>",W,N
// Property: experimentalGestureCancelRecoveryEnabled; attributes: TB,N,V_experimentalGestureCancelRecoveryEnabled
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SIGCardGestureAggregator initWithGestureHandler:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b839f38

// -[SIGCardGestureAggregator setExperimentalGestureCancelRecoveryEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b839fd0

// -[SIGCardGestureAggregator setCardTransitionDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b839fdc

// -[SIGCardGestureAggregator cardTransitionDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10b839fe4

// -[SIGCardGestureAggregator dismissalTransition]
// Type encoding: @16@0:8
// Implementation: 0x10b839fec

// -[SIGCardGestureAggregator installSwipeToDismissGestureRecognizerOnViews:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b83a020

// -[SIGCardGestureAggregator _pullGestureUpdated:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b83a1a8

// -[SIGCardGestureAggregator gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b83a424

// -[SIGCardGestureAggregator gestureRecognizer:shouldReceivePress:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10b83a5b0

// -[SIGCardGestureAggregator gestureRecognizer:shouldReceiveTouch:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10b83a5b8

// -[SIGCardGestureAggregator gestureRecognizer:shouldRequireFailureOfGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10b83a5c0

// -[SIGCardGestureAggregator gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10b83a5c8

// -[SIGCardGestureAggregator gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10b83a5d0

// -[SIGCardGestureAggregator dismissDirection]
// Type encoding: Q16@0:8
// Implementation: 0x10b83a5f0

// -[SIGCardGestureAggregator setDismissDirection:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b83a5f8

// -[SIGCardGestureAggregator experimentalGestureCancelRecoveryEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10b83a600

// -[SIGCardGestureAggregator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b83a608

@end
