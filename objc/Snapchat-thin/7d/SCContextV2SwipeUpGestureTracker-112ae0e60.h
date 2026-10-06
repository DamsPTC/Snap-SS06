// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextV2SwipeUpGestureTracker
// Superclass: NSObject
// Address: 0x112ae0e60

@interface SCContextV2SwipeUpGestureTracker

// Property: presentationAmount; attributes: Td,N,V_presentationAmount
// Property: delegate; attributes: T@"<SCContextV2SwipeUpGestureDelegate>",W,N,V_delegate
// Property: presentedViewController; attributes: T@"UIViewController<SCContextV2SwipeUpPresentable>",W,N,V_presentedViewController

// -[SCContextV2SwipeUpGestureTracker setPresented:animated:source:completion:]
// Type encoding: v40@0:8B16B20@24@?32
// Implementation: 0x1064861c8

// -[SCContextV2SwipeUpGestureTracker setPresentationAmount:]
// Type encoding: v24@0:8d16
// Implementation: 0x106486908

// -[SCContextV2SwipeUpGestureTracker _ensureSwipeUpVCExistsWithCompletion:source:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x106486a30

// -[SCContextV2SwipeUpGestureTracker _swipeUpVCDidDismissViaSwipe:]
// Type encoding: v20@0:8B16
// Implementation: 0x106486d54

// -[SCContextV2SwipeUpGestureTracker _createContextActionSourceWithActionType:]
// Type encoding: @24@0:8q16
// Implementation: 0x106486e10

// -[SCContextV2SwipeUpGestureTracker delegate]
// Type encoding: @16@0:8
// Implementation: 0x106486f34

// -[SCContextV2SwipeUpGestureTracker setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106486f4c

// -[SCContextV2SwipeUpGestureTracker presentedViewController]
// Type encoding: @16@0:8
// Implementation: 0x106486f58

// -[SCContextV2SwipeUpGestureTracker setPresentedViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x106486f70

// -[SCContextV2SwipeUpGestureTracker presentationAmount]
// Type encoding: d16@0:8
// Implementation: 0x106486f7c

// -[SCContextV2SwipeUpGestureTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106486f84

@end
