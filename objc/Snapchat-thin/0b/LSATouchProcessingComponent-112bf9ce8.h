// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSATouchProcessingComponent
// Superclass: LSABaseComponent
// Address: 0x112bf9ce8

@interface LSATouchProcessingComponent

// Property: touchHandlingDescriptorForCurrentFrame; attributes: T@"LSATouchHandlingDescriptor",&,V_touchHandlingDescriptorForCurrentFrame
// Property: currentLensId; attributes: T@"NSString",C,N,V_currentLensId
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[LSATouchProcessingComponent shouldBlockTouchesWithNormalizedTouchPoints:touchTypeMask:]
// Type encoding: B32@0:8@16Q24
// Implementation: 0x10adb9164

// -[LSATouchProcessingComponent processTouchSet:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10adb9430

// -[LSATouchProcessingComponent processTouchArray:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10adb9a34

// -[LSATouchProcessingComponent processPinchGestureWithGestureRecognizer:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10adba000

// -[LSATouchProcessingComponent processPanGestureWithGestureRecognizer:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10adba508

// -[LSATouchProcessingComponent processRotationGestureWithGestureRecognizer:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10adbaab4

// -[LSATouchProcessingComponent processTapGestureWithGestureRecognizer:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10adbaf68

// -[LSATouchProcessingComponent processDoubleTapGestureWithGestureRecognizer:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10adbb3c4

// -[LSATouchProcessingComponent processLongPressGestureWithGestureRecognizer:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10adbb820

// -[LSATouchProcessingComponent _processGestureEvent:]
// Type encoding: v24@0:8^v16
// Implementation: 0x10adbbc7c

// -[LSATouchProcessingComponent componentWillProcessFrame:]
// Type encoding: v24@0:8@16
// Implementation: 0x10adbbdf4

// -[LSATouchProcessingComponent componentDidProcessFrame:]
// Type encoding: v24@0:8@16
// Implementation: 0x10adbbdf8

// -[LSATouchProcessingComponent component:willSetLens:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10adbc0e4

// -[LSATouchProcessingComponent component:didSetLens:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10adbc170

// -[LSATouchProcessingComponent setCoreManager:announcer:configuration:]
// Type encoding: v48@0:8{shared_ptr<LS::CoreManager>=^{CoreManager}^{__shared_weak_count}}16@32@40
// Implementation: 0x10adbc174

// -[LSATouchProcessingComponent clearResources]
// Type encoding: v16@0:8
// Implementation: 0x10adbc2b0

// -[LSATouchProcessingComponent touchHandlingDescriptorForCurrentFrame]
// Type encoding: @16@0:8
// Implementation: 0x10adbc2dc

// -[LSATouchProcessingComponent setTouchHandlingDescriptorForCurrentFrame:]
// Type encoding: v24@0:8@16
// Implementation: 0x10adbc2ec

// -[LSATouchProcessingComponent currentLensId]
// Type encoding: @16@0:8
// Implementation: 0x10adbc2f8

// -[LSATouchProcessingComponent setCurrentLensId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10adbc308

// -[LSATouchProcessingComponent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10adbc314

@end
