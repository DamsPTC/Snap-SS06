// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSearchScrollViewDismissalGestureController
// Superclass: NSObject
// Address: 0x112b9cbb0

@interface SCSearchScrollViewDismissalGestureController

// Property: delegate; attributes: T@"<SCSearchScrollViewDismissalGestureControllerDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSearchScrollViewDismissalGestureController handleGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x108419704

// -[SCSearchScrollViewDismissalGestureController gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x10841985c

// -[SCSearchScrollViewDismissalGestureController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1084199b4

// -[SCSearchScrollViewDismissalGestureController _resetOrDismissWithView:translation:velocity:]
// Type encoding: v56@0:8@16{CGPoint=dd}24{CGPoint=dd}40
// Implementation: 0x1084199bc

// -[SCSearchScrollViewDismissalGestureController _applyTranslationForView:translation:]
// Type encoding: v40@0:8@16{CGPoint=dd}24
// Implementation: 0x108419c44

// -[SCSearchScrollViewDismissalGestureController _finishAnimation:didDismiss:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x108419c4c

// -[SCSearchScrollViewDismissalGestureController delegate]
// Type encoding: @16@0:8
// Implementation: 0x108419cb4

// -[SCSearchScrollViewDismissalGestureController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108419ccc

// -[SCSearchScrollViewDismissalGestureController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108419cd8

@end
