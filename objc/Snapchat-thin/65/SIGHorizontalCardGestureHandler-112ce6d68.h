// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SIGHorizontalCardGestureHandler
// Superclass: NSObject
// Address: 0x112ce6d68

@interface SIGHorizontalCardGestureHandler

// Property: cardTransitionDelegate; attributes: T@"<SIGCardTransitionDelegate>",W,N,V_cardTransitionDelegate
// Property: dismissalTransition; attributes: T@"UIPercentDrivenInteractiveTransition",R,N,V_dismissalTransition
// Property: experimentalGestureCancelRecoveryEnabled; attributes: TB,N,V_experimentalGestureCancelRecoveryEnabled
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SIGHorizontalCardGestureHandler init]
// Type encoding: @16@0:8
// Implementation: 0x10b836404

// -[SIGHorizontalCardGestureHandler shouldAllowInteractionWithView:touchLocation:]
// Type encoding: B40@0:8@16{CGPoint=dd}24
// Implementation: 0x10b836468

// -[SIGHorizontalCardGestureHandler startInteractingWithView:atOffset:velocity:]
// Type encoding: v40@0:8@16d24d32
// Implementation: 0x10b83650c

// -[SIGHorizontalCardGestureHandler updateInteractingWithView:atOffset:velocity:]
// Type encoding: v40@0:8@16d24d32
// Implementation: 0x10b836554

// -[SIGHorizontalCardGestureHandler endInteractingWithView:atOffset:velocity:cancel:]
// Type encoding: v44@0:8@16d24d32B40
// Implementation: 0x10b836624

// -[SIGHorizontalCardGestureHandler cardTransitionDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10b8367c8

// -[SIGHorizontalCardGestureHandler setCardTransitionDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b8367e0

// -[SIGHorizontalCardGestureHandler dismissalTransition]
// Type encoding: @16@0:8
// Implementation: 0x10b8367ec

// -[SIGHorizontalCardGestureHandler experimentalGestureCancelRecoveryEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10b8367f4

// -[SIGHorizontalCardGestureHandler setExperimentalGestureCancelRecoveryEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b8367fc

// -[SIGHorizontalCardGestureHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b836804

@end
