// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCViewfinderTouchController
// Superclass: NSObject
// Address: 0x112ad5948

@interface SCViewfinderTouchController

// Property: gestureView; attributes: T@"UIView",&,N,V_gestureView
// Property: gestureRecognizerDelegate; attributes: T@"<UIGestureRecognizerDelegate>",W,N,V_gestureRecognizerDelegate

// -[SCViewfinderTouchController initWithGestureView:gestureRecognizerDelegate:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10621a978

// -[SCViewfinderTouchController registerTouchProcessor:]
// Type encoding: v24@0:8@16
// Implementation: 0x10621aa38

// -[SCViewfinderTouchController unregisterTouchProcessor:]
// Type encoding: v24@0:8@16
// Implementation: 0x10621aa40

// -[SCViewfinderTouchController isTouchProcessingEnabledForSource:]
// Type encoding: B24@0:8Q16
// Implementation: 0x10621aa48

// -[SCViewfinderTouchController isGestureRecognizer:ofSource:]
// Type encoding: B32@0:8@16Q24
// Implementation: 0x10621ab6c

// -[SCViewfinderTouchController viewfinderShouldBlockTouchesForGestureRecognizer:]
// Type encoding: B24@0:8@16
// Implementation: 0x10621acac

// -[SCViewfinderTouchController isViewfinderTouchProcessingGestureRecognizer:]
// Type encoding: B24@0:8@16
// Implementation: 0x10621adc8

// -[SCViewfinderTouchController isGestureRecognizer:ofType:]
// Type encoding: B32@0:8@16Q24
// Implementation: 0x10621aee4

// -[SCViewfinderTouchController blockTouchesWithNormalizedTouchPoints:touchTypeMask:]
// Type encoding: B32@0:8@16Q24
// Implementation: 0x10621b014

// -[SCViewfinderTouchController gestureView]
// Type encoding: @16@0:8
// Implementation: 0x10621b144

// -[SCViewfinderTouchController setGestureView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10621b14c

// -[SCViewfinderTouchController gestureRecognizerDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10621b17c

// -[SCViewfinderTouchController setGestureRecognizerDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10621b194

// -[SCViewfinderTouchController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10621b1a0

@end
