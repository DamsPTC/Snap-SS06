// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCInteractiveSwipeTransitionController
// Superclass: UIPercentDrivenInteractiveTransition
// Address: 0x112c01b78

@interface SCInteractiveSwipeTransitionController

// Property: transitionType; attributes: TQ,R,N,V_transitionType
// Property: delegate; attributes: T@"<SCInteractiveSwipeTransitionControllerDelegate>",W,N,V_delegate
// Property: presentationDataSource; attributes: T@"<SCInteractiveSwipeTransitionControllerDataSource>",W,N,V_presentationDataSource
// Property: presentedViewController; attributes: T@"UIViewController",R,N,V_presentedViewController
// Property: panGesture; attributes: T@"UIPanGestureRecognizer",R,N,V_panGesture
// Property: directionalSlopFactor; attributes: Td,N,V_directionalSlopFactor
// Property: interactionInProgress; attributes: TB,N,V_interactionInProgress
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCInteractiveSwipeTransitionController completionCurve]
// Type encoding: q16@0:8
// Implementation: 0x10aef06fc

// -[SCInteractiveSwipeTransitionController completionSpeed]
// Type encoding: d16@0:8
// Implementation: 0x10aef0704

// -[SCInteractiveSwipeTransitionController initWithTransitionType:direction:]
// Type encoding: @32@0:8Q16Q24
// Implementation: 0x10085cb14

// -[SCInteractiveSwipeTransitionController wireToView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10085cc04

// -[SCInteractiveSwipeTransitionController handleGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aef0710

// -[SCInteractiveSwipeTransitionController finishInteractiveTransition]
// Type encoding: v16@0:8
// Implementation: 0x10aef0b0c

// -[SCInteractiveSwipeTransitionController gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x10aef0b60

// -[SCInteractiveSwipeTransitionController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10aef0da8

// -[SCInteractiveSwipeTransitionController _maxTranslationWithDirection:]
// Type encoding: d24@0:8Q16
// Implementation: 0x10aef0e44

// -[SCInteractiveSwipeTransitionController transitionType]
// Type encoding: Q16@0:8
// Implementation: 0x10aef10b0

// -[SCInteractiveSwipeTransitionController delegate]
// Type encoding: @16@0:8
// Implementation: 0x10aef10c0

// -[SCInteractiveSwipeTransitionController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10085cbe8

// -[SCInteractiveSwipeTransitionController presentationDataSource]
// Type encoding: @16@0:8
// Implementation: 0x10aef10e0

// -[SCInteractiveSwipeTransitionController setPresentationDataSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x10085cbd4

// -[SCInteractiveSwipeTransitionController presentedViewController]
// Type encoding: @16@0:8
// Implementation: 0x10aef1100

// -[SCInteractiveSwipeTransitionController panGesture]
// Type encoding: @16@0:8
// Implementation: 0x10aef1110

// -[SCInteractiveSwipeTransitionController directionalSlopFactor]
// Type encoding: d16@0:8
// Implementation: 0x10aef1120

// -[SCInteractiveSwipeTransitionController setDirectionalSlopFactor:]
// Type encoding: v24@0:8d16
// Implementation: 0x10aef1130

// -[SCInteractiveSwipeTransitionController interactionInProgress]
// Type encoding: B16@0:8
// Implementation: 0x10aef1140

// -[SCInteractiveSwipeTransitionController setInteractionInProgress:]
// Type encoding: v20@0:8B16
// Implementation: 0x10aef1150

// -[SCInteractiveSwipeTransitionController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10aef1160

// +[SCInteractiveSwipeTransitionController _translationMagnitudeWithTranslation:direction:]
// Type encoding: d40@0:8{CGPoint=dd}16Q32
// Implementation: 0x10aef0f40

// +[SCInteractiveSwipeTransitionController _isDirectionAllowedWithVectorPoint:directions:mainDirectionOut:]
// Type encoding: B48@0:8{CGPoint=dd}16Q32N^Q40
// Implementation: 0x10aef0f84

// +[SCInteractiveSwipeTransitionController _isValidPlaneWithVelocity:direction:slopFactor:]
// Type encoding: B48@0:8{CGPoint=dd}16Q32d40
// Implementation: 0x10aef1020

// +[SCInteractiveSwipeTransitionController _velocity:exceedsSpeedThresholdForDirection:]
// Type encoding: B40@0:8{CGPoint=dd}16Q32
// Implementation: 0x10aef1064

@end
