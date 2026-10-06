// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaRotatingLayerPinchController
// Superclass: NSObject
// Address: 0x112b82288

@interface SCOperaRotatingLayerPinchController

// Property: pinchGestureRecognizer; attributes: T@"UIPinchGestureRecognizer",&,N,V_pinchGestureRecognizer
// Property: isSuppressingPinchState; attributes: TB,N,V_isSuppressingPinchState
// Property: pinchingInProgress; attributes: TB,N,V_pinchingInProgress
// Property: delegate; attributes: T@"<SCOperaRotatingLayerPinchControllerDelegate>",W,N,V_delegate
// Property: scale; attributes: Td,R,N
// Property: shouldPinchWhenSuppressed; attributes: TB,N,V_shouldPinchWhenSuppressed
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOperaRotatingLayerPinchController scale]
// Type encoding: d16@0:8
// Implementation: 0x107dbb338

// -[SCOperaRotatingLayerPinchController initWithViewBounds:animationDuration:springDamping:delegate:]
// Type encoding: @72@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16d48d56@64
// Implementation: 0x107dbb340

// -[SCOperaRotatingLayerPinchController addPinchGestureToTarget:]
// Type encoding: v24@0:8@16
// Implementation: 0x107dbb478

// -[SCOperaRotatingLayerPinchController setInPinchedState:]
// Type encoding: v20@0:8B16
// Implementation: 0x107dbb488

// -[SCOperaRotatingLayerPinchController isInPinchedState]
// Type encoding: B16@0:8
// Implementation: 0x107dbb4d4

// -[SCOperaRotatingLayerPinchController setSuppressed:]
// Type encoding: v20@0:8B16
// Implementation: 0x107dbb4e4

// -[SCOperaRotatingLayerPinchController _adjustedVideoScaleFactor:]
// Type encoding: d24@0:8d16
// Implementation: 0x107dbb614

// -[SCOperaRotatingLayerPinchController _computeScaleProgress]
// Type encoding: d16@0:8
// Implementation: 0x107dbb68c

// -[SCOperaRotatingLayerPinchController resetScaleWithNewScale:smallestScale:largestScale:]
// Type encoding: v40@0:8d16d24d32
// Implementation: 0x107dbb6c0

// -[SCOperaRotatingLayerPinchController _handlePinch:]
// Type encoding: v24@0:8@16
// Implementation: 0x107dbb6cc

// -[SCOperaRotatingLayerPinchController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107dbba20

// -[SCOperaRotatingLayerPinchController delegate]
// Type encoding: @16@0:8
// Implementation: 0x107dbba98

// -[SCOperaRotatingLayerPinchController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107dbbab0

// -[SCOperaRotatingLayerPinchController shouldPinchWhenSuppressed]
// Type encoding: B16@0:8
// Implementation: 0x107dbbabc

// -[SCOperaRotatingLayerPinchController setShouldPinchWhenSuppressed:]
// Type encoding: v20@0:8B16
// Implementation: 0x107dbbac4

// -[SCOperaRotatingLayerPinchController pinchingInProgress]
// Type encoding: B16@0:8
// Implementation: 0x107dbbacc

// -[SCOperaRotatingLayerPinchController setPinchingInProgress:]
// Type encoding: v20@0:8B16
// Implementation: 0x107dbbad4

// -[SCOperaRotatingLayerPinchController pinchGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x107dbbadc

// -[SCOperaRotatingLayerPinchController setPinchGestureRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x107dbbae4

// -[SCOperaRotatingLayerPinchController isSuppressingPinchState]
// Type encoding: B16@0:8
// Implementation: 0x107dbbb14

// -[SCOperaRotatingLayerPinchController setIsSuppressingPinchState:]
// Type encoding: v20@0:8B16
// Implementation: 0x107dbbb1c

// -[SCOperaRotatingLayerPinchController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107dbbb24

@end
