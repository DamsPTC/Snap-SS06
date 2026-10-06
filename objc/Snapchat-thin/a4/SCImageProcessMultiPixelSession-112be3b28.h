// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessMultiPixelSession
// Superclass: NSObject
// Address: 0x112be3b28

@interface SCImageProcessMultiPixelSession

// Property: useTransparentBackground; attributes: TB,N,V_useTransparentBackground

// -[SCImageProcessMultiPixelSession initWithQueue:images:presentationTimes:commands:viewportTransform:backgroundColors:]
// Type encoding: @104@0:8@16@24@32@40{CGAffineTransform=dddddd}48@96
// Implementation: 0x10906a814

// -[SCImageProcessMultiPixelSession dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10906aa04

// -[SCImageProcessMultiPixelSession runWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10906aaa4

// -[SCImageProcessMultiPixelSession _processImageAtIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x10906aba0

// -[SCImageProcessMultiPixelSession _addImageToProcessedArray:]
// Type encoding: v24@0:8@16
// Implementation: 0x10906b0c8

// -[SCImageProcessMultiPixelSession useTransparentBackground]
// Type encoding: B16@0:8
// Implementation: 0x10906b0d8

// -[SCImageProcessMultiPixelSession setUseTransparentBackground:]
// Type encoding: v20@0:8B16
// Implementation: 0x10906b0e0

// -[SCImageProcessMultiPixelSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10906b0e8

@end
