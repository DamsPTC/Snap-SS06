// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSATouchProcessingController
// Superclass: NSObject
// Address: 0x112bf8848

@interface LSATouchProcessingController

// Property: delegate; attributes: T@"<LSATouchProcessingDelegate>",R,W,N,V_delegate
// Property: touchProcessingGestureRecognizer; attributes: T@"UIGestureRecognizer",R,N,V_touchProcessingGestureRecognizer
// Property: tapGestureRecognizer; attributes: T@"UITapGestureRecognizer",R,N,V_tapGestureRecognizer
// Property: doubleTapGestureRecognizer; attributes: T@"UITapGestureRecognizer",R,N,V_doubleTapGestureRecognizer
// Property: pinchGestureRecognizer; attributes: T@"UIPinchGestureRecognizer",R,N,V_pinchGestureRecognizer
// Property: panGestureRecognizer; attributes: T@"UIPanGestureRecognizer",R,N,V_panGestureRecognizer
// Property: longPressGestureRecognizer; attributes: T@"UILongPressGestureRecognizer",R,N,V_longPressGestureRecognizer
// Property: rotationGestureRecognizer; attributes: T@"UIRotationGestureRecognizer",R,N,V_rotationGestureRecognizer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[LSATouchProcessingController initWithView:touchProcessingComponents:touchProcessingDelegate:gestureRecognizerDelegate:disableMultipleTouch:touchProcessingDelay:printDebugLogs:]
// Type encoding: @64@0:8@16@24@32@40B48d52B60
// Implementation: 0x10ad87ab8

// -[LSATouchProcessingController initWithView:touchProcessingComponents:touchProcessingDelegate:gestureRecognizerDelegate:disableMultipleTouch:]
// Type encoding: @52@0:8@16@24@32@40B48
// Implementation: 0x10ad87e5c

// -[LSATouchProcessingController initWithView:touchProcessingComponents:touchProcessingDelegate:gestureRecognizerDelegate:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10ad87e68

// -[LSATouchProcessingController hasGestureRecognizer:]
// Type encoding: B24@0:8@16
// Implementation: 0x10ad87e70

// -[LSATouchProcessingController cancelDelayedTouchProcessingIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10ad87f00

// -[LSATouchProcessingController cleanupGestureRecognizers]
// Type encoding: v16@0:8
// Implementation: 0x10ad87f08

// -[LSATouchProcessingController handleTapWithGestureRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad87fe4

// -[LSATouchProcessingController handleDoubleTapWithGestureRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad88214

// -[LSATouchProcessingController handlePinchWithGestureRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad88444

// -[LSATouchProcessingController handlePanWithGestureRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad88674

// -[LSATouchProcessingController handleLongPressWithGestureRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad888a4

// -[LSATouchProcessingController handleRotationWithGestureRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad88ad4

// -[LSATouchProcessingController touchProcessingGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x10ad88d04

// -[LSATouchProcessingController tapGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x10ad88d0c

// -[LSATouchProcessingController doubleTapGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x10ad88d14

// -[LSATouchProcessingController pinchGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x10ad88d1c

// -[LSATouchProcessingController panGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x10ad88d24

// -[LSATouchProcessingController longPressGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x10ad88d2c

// -[LSATouchProcessingController rotationGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x10ad88d34

// -[LSATouchProcessingController delegate]
// Type encoding: @16@0:8
// Implementation: 0x10ad88d3c

// -[LSATouchProcessingController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10ad88d54

@end
