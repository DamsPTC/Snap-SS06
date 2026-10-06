// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageGradientColorsUtils
// Superclass: NSObject
// Address: 0x112be7980

@interface SCImageGradientColorsUtils


// +[SCImageGradientColorsUtils gradientColorsFromImage:shouldFlip:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x10911b07c

// +[SCImageGradientColorsUtils gradientColorsFromPixelBuffer:shouldFlip:]
// Type encoding: @28@0:8^{__CVBuffer=}16B24
// Implementation: 0x10911b144

// +[SCImageGradientColorsUtils resizeImage:newSize:]
// Type encoding: @40@0:8@16{CGSize=dd}24
// Implementation: 0x10911b20c

// +[SCImageGradientColorsUtils dominantColorsInImage:clusterCount:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x10911b2f4

// +[SCImageGradientColorsUtils dominantColorsInPixelBuffer:clusterCount:]
// Type encoding: @32@0:8^{__CVBuffer=}16Q24
// Implementation: 0x10911b364

// +[SCImageGradientColorsUtils resizedImageFromYUVPixelBuffer:]
// Type encoding: @24@0:8^{__CVBuffer=}16
// Implementation: 0x10911b424

// +[SCImageGradientColorsUtils resizedImageFromBGRAPixelBuffer:]
// Type encoding: @24@0:8^{__CVBuffer=}16
// Implementation: 0x10911b6a8

// +[SCImageGradientColorsUtils _dominantColorsInImage:clusterCount:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x10911b820

// +[SCImageGradientColorsUtils _kMeansClusteringOnColors:totalPixels:clusterCount:]
// Type encoding: @40@0:8^f16Q24Q32
// Implementation: 0x10911ba5c

@end
