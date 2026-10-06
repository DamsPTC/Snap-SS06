// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SIGFullscreenCardGestureHandler
// Superclass: NSObject
// Address: 0x112ce6db8

@interface SIGFullscreenCardGestureHandler

// Property: cardTransitionDelegate; attributes: T@"<SIGCardTransitionDelegate>",W,N,V_cardTransitionDelegate
// Property: dismissalTransition; attributes: T@"UIPercentDrivenInteractiveTransition",R,N,V_dismissalTransition
// Property: experimentalGestureCancelRecoveryEnabled; attributes: TB,N,V_experimentalGestureCancelRecoveryEnabled
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SIGFullscreenCardGestureHandler init]
// Type encoding: @16@0:8
// Implementation: 0x10b836830

// -[SIGFullscreenCardGestureHandler shouldAllowInteractionWithView:touchLocation:]
// Type encoding: B40@0:8@16{CGPoint=dd}24
// Implementation: 0x10b836894

// -[SIGFullscreenCardGestureHandler startInteractingWithView:atOffset:velocity:]
// Type encoding: v40@0:8@16d24d32
// Implementation: 0x10b836938

// -[SIGFullscreenCardGestureHandler updateInteractingWithView:atOffset:velocity:]
// Type encoding: v40@0:8@16d24d32
// Implementation: 0x10b836980

// -[SIGFullscreenCardGestureHandler endInteractingWithView:atOffset:velocity:cancel:]
// Type encoding: v44@0:8@16d24d32B40
// Implementation: 0x10b836a50

// -[SIGFullscreenCardGestureHandler cardTransitionDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10b836bf4

// -[SIGFullscreenCardGestureHandler setCardTransitionDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b836c0c

// -[SIGFullscreenCardGestureHandler dismissalTransition]
// Type encoding: @16@0:8
// Implementation: 0x10b836c18

// -[SIGFullscreenCardGestureHandler experimentalGestureCancelRecoveryEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10b836c20

// -[SIGFullscreenCardGestureHandler setExperimentalGestureCancelRecoveryEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b836c28

// -[SIGFullscreenCardGestureHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b836c30

@end
