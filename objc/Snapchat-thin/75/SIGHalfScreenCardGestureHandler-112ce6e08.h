// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SIGHalfScreenCardGestureHandler
// Superclass: NSObject
// Address: 0x112ce6e08

@interface SIGHalfScreenCardGestureHandler

// Property: cardTransitionDelegate; attributes: T@"<SIGCardTransitionDelegate>",W,N,V_cardTransitionDelegate
// Property: dismissalTransition; attributes: T@"UIPercentDrivenInteractiveTransition",R,N,V_dismissalTransition
// Property: experimentalGestureCancelRecoveryEnabled; attributes: TB,N,V_experimentalGestureCancelRecoveryEnabled
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SIGHalfScreenCardGestureHandler init]
// Type encoding: @16@0:8
// Implementation: 0x10b836c5c

// -[SIGHalfScreenCardGestureHandler _updateHeightWithPercentage:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b836c9c

// -[SIGHalfScreenCardGestureHandler shouldAllowInteractionWithView:touchLocation:]
// Type encoding: B40@0:8@16{CGPoint=dd}24
// Implementation: 0x10b836dbc

// -[SIGHalfScreenCardGestureHandler startInteractingWithView:atOffset:velocity:]
// Type encoding: v40@0:8@16d24d32
// Implementation: 0x10b836e60

// -[SIGHalfScreenCardGestureHandler updateInteractingWithView:atOffset:velocity:]
// Type encoding: v40@0:8@16d24d32
// Implementation: 0x10b836f8c

// -[SIGHalfScreenCardGestureHandler endInteractingWithView:atOffset:velocity:cancel:]
// Type encoding: v44@0:8@16d24d32B40
// Implementation: 0x10b836fec

// -[SIGHalfScreenCardGestureHandler dismissalTransition]
// Type encoding: @16@0:8
// Implementation: 0x10b837370

// -[SIGHalfScreenCardGestureHandler cardTransitionDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10b837378

// -[SIGHalfScreenCardGestureHandler setCardTransitionDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b837390

// -[SIGHalfScreenCardGestureHandler experimentalGestureCancelRecoveryEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10b83739c

// -[SIGHalfScreenCardGestureHandler setExperimentalGestureCancelRecoveryEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b8373a4

// -[SIGHalfScreenCardGestureHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b8373ac

@end
