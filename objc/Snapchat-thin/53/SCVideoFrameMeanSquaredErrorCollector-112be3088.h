// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVideoFrameMeanSquaredErrorCollector
// Superclass: NSObject
// Address: 0x112be3088

@interface SCVideoFrameMeanSquaredErrorCollector


// +[SCVideoFrameMeanSquaredErrorCollector videoFrameMeanSquaredErrorsWithVideoFrames:videoAsset:videoOrientation:keyFrameInterval:shouldScaleVideo:]
// Type encoding: @52@0:8@16@24q32Q40B48
// Implementation: 0x109054ab0

// +[SCVideoFrameMeanSquaredErrorCollector _rotatePixelBuffer:withRotationAngle:translationPoint:]
// Type encoding: ^{__CVBuffer=}48@0:8^{__CVBuffer=}16d24{CGPoint=dd}32
// Implementation: 0x109054f48

// +[SCVideoFrameMeanSquaredErrorCollector _scalePixelBuffer:withScaleX:ScaleY:]
// Type encoding: ^{__CVBuffer=}40@0:8^{__CVBuffer=}16d24d32
// Implementation: 0x109055114

@end
