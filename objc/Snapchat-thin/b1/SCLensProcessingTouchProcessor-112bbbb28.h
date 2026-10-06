// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensProcessingTouchProcessor
// Superclass: NSObject
// Address: 0x112bbbb28

@interface SCLensProcessingTouchProcessor

// Property: effectIds; attributes: T@"NSSet",&,V_effectIds
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensProcessingTouchProcessor initWithEffectIdsObservable:touchProcessingComponent:dirtyFrameProvider:gestureView:gestureRecognizerDelegate:touchProcessingActive:shouldBlockTouches:]
// Type encoding: @64@0:8@16@24@32@40@48B56B60
// Implementation: 0x108c977ec

// -[SCLensProcessingTouchProcessor beginTouchProcessing]
// Type encoding: v16@0:8
// Implementation: 0x108c979e4

// -[SCLensProcessingTouchProcessor endTouchProcessing]
// Type encoding: v16@0:8
// Implementation: 0x108c97bbc

// -[SCLensProcessingTouchProcessor touchProcessingControllerDidProcessTouches:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c97bc4

// -[SCLensProcessingTouchProcessor touchProcessingControllerDidFinishInteraction:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c97bc8

// -[SCLensProcessingTouchProcessor touchProcessingController:didReceiveError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108c97bcc

// -[SCLensProcessingTouchProcessor gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x108c97bd0

// -[SCLensProcessingTouchProcessor source]
// Type encoding: Q16@0:8
// Implementation: 0x108c97bd8

// -[SCLensProcessingTouchProcessor isTouchProcessingEnabled]
// Type encoding: B16@0:8
// Implementation: 0x108c97be4

// -[SCLensProcessingTouchProcessor isAnyViewfinderGestureRecognizer:]
// Type encoding: B24@0:8@16
// Implementation: 0x108c97bec

// -[SCLensProcessingTouchProcessor viewfinderShouldBlockTouchesForGestureRecognizer:]
// Type encoding: B24@0:8@16
// Implementation: 0x108c97bf4

// -[SCLensProcessingTouchProcessor isViewfinderTouchProcessingGestureRecognizer:]
// Type encoding: B24@0:8@16
// Implementation: 0x108c97bfc

// -[SCLensProcessingTouchProcessor isGestureRecognizer:ofType:]
// Type encoding: B32@0:8@16Q24
// Implementation: 0x108c97c68

// -[SCLensProcessingTouchProcessor blockTouchesWithNormalizedTouchPoints:touchTypeMask:]
// Type encoding: B32@0:8@16Q24
// Implementation: 0x108c97d98

// -[SCLensProcessingTouchProcessor _handleTap:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c97da0

// -[SCLensProcessingTouchProcessor _handleContinuousRendering:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c97efc

// -[SCLensProcessingTouchProcessor effectIds]
// Type encoding: @16@0:8
// Implementation: 0x108c9809c

// -[SCLensProcessingTouchProcessor setEffectIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c980a8

// -[SCLensProcessingTouchProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108c980b0

@end
