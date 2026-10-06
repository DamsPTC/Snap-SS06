// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCameraCaptureLensProviderAdapter
// Superclass: NSObject
// Address: 0x112ad5268

@interface SCCameraCaptureLensProviderAdapter

// Property: activeLensIds; attributes: T@"NSArray",R,N
// Property: maxPixelSize; attributes: Tq,R,N

// -[SCCameraCaptureLensProviderAdapter initWithLensEffectApplicator:processingPipeline:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10087d82c

// -[SCCameraCaptureLensProviderAdapter activeLensIds]
// Type encoding: @16@0:8
// Implementation: 0x10621857c

// -[SCCameraCaptureLensProviderAdapter maxPixelSize]
// Type encoding: q16@0:8
// Implementation: 0x10621862c

// -[SCCameraCaptureLensProviderAdapter processPixelBufferToImage:orientation:timestamp:fieldOfView:]
// Type encoding: @60@0:8^{__CVBuffer=}16q24{?=qiIq}32f56
// Implementation: 0x106218634

// -[SCCameraCaptureLensProviderAdapter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1062186e8

@end
