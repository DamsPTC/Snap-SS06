// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVideoTranscodingImageProcessorProvider
// Superclass: NSObject
// Address: 0x112ba77b8

@interface SCVideoTranscodingImageProcessorProvider


// -[SCVideoTranscodingImageProcessorProvider initWithRequestInput:requestOutput:targetTrajectoryFactory:spectaclesImageProcessCommandFactory:circumstanceEngine:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10856b160

// -[SCVideoTranscodingImageProcessorProvider generateImageProcessorWithSourceSize:targetSize:orientation:useUpgradedIpp:overlayImageDataHandler:]
// Type encoding: @68@0:8{CGSize=dd}16{CGSize=dd}32q48B56@?60
// Implementation: 0x10856b284

// -[SCVideoTranscodingImageProcessorProvider _createUpgradedIppTimedProcessorWithSourceSize:targetSize:]
// Type encoding: @48@0:8{CGSize=dd}16{CGSize=dd}32
// Implementation: 0x10856b3b4

// -[SCVideoTranscodingImageProcessorProvider _createTimedImageProcessorWithVideoSourceSize:targetSize:orientation:overlayImageDataHandler:]
// Type encoding: @64@0:8{CGSize=dd}16{CGSize=dd}32q48@?56
// Implementation: 0x10856b574

// -[SCVideoTranscodingImageProcessorProvider _generateRenderEffectDAGWithTimeRange:videoSourceSize:targetSize:orientation:configuration:overlayImageDataHandler:]
// Type encoding: @120@0:8{?={?=qiIq}{?=qiIq}}16{CGSize=dd}64{CGSize=dd}80q96@104@?112
// Implementation: 0x10856be10

// -[SCVideoTranscodingImageProcessorProvider _isSpectaclesMediaWithConfiguration:]
// Type encoding: B24@0:8@16
// Implementation: 0x10856cf88

// -[SCVideoTranscodingImageProcessorProvider _isCircularSpectaclesMediaWithConfiguration:]
// Type encoding: B24@0:8@16
// Implementation: 0x10856d034

// -[SCVideoTranscodingImageProcessorProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10856d0a8

@end
