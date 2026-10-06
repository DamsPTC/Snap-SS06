// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCArSegmentationImageGenerator
// Superclass: NSObject
// Address: 0x112be88f8

@interface SCArSegmentationImageGenerator


// -[SCArSegmentationImageGenerator initWithUserSession:image:mediaOrientation:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x109143500

// -[SCArSegmentationImageGenerator initWithUserSession:imageFuture:mediaOrientation:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x1091435a8

// -[SCArSegmentationImageGenerator dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10914395c

// -[SCArSegmentationImageGenerator _resumeBlendingPerformerIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1091439f8

// -[SCArSegmentationImageGenerator clear]
// Type encoding: v16@0:8
// Implementation: 0x109143a64

// -[SCArSegmentationImageGenerator _segmentInputImage:withCompletion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x109143aac

// -[SCArSegmentationImageGenerator generateContextImageFromInput:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x109143df4

// -[SCArSegmentationImageGenerator _toCVMatWithResize:]
// Type encoding: {Mat=iiii****^{MatAllocator}^{UMatData}{MatSize=^i}{MatStep=^Q[2Q]}}24@0:8@16
// Implementation: 0x1091442c4

// -[SCArSegmentationImageGenerator _getContextImageFromDownloadedSky:imageMat:skyMaskMat:]
// Type encoding: @40@0:8@16r^{Mat=iiii****^{MatAllocator}^{UMatData}{MatSize=^i}{MatStep=^Q[2Q]}}24r^{Mat=iiii****^{MatAllocator}^{UMatData}{MatSize=^i}{MatStep=^Q[2Q]}}32
// Implementation: 0x1091445a8

// -[SCArSegmentationImageGenerator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109145030

// -[SCArSegmentationImageGenerator .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x109145114

// +[SCArSegmentationImageGenerator shouldEnableGenerator]
// Type encoding: B16@0:8
// Implementation: 0x109143a6c

// +[SCArSegmentationImageGenerator shouldEnableHighEndModel]
// Type encoding: B16@0:8
// Implementation: 0x109143a90

// +[SCArSegmentationImageGenerator _getDeviceMode]
// Type encoding: i16@0:8
// Implementation: 0x109144f50

// +[SCArSegmentationImageGenerator _getProcessingSizeForInputSize:minDimension:]
// Type encoding: {CGSize=dd}28@0:8r^v16i24
// Implementation: 0x109144fb0

@end
