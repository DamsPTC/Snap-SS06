// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCameraViewfinderMetalRenderer
// Superclass: NSObject
// Address: 0x112b5abe8

@interface SCCameraViewfinderMetalRenderer

// Property: isMetalLibLoaded; attributes: TB,V_isMetalLibLoaded
// Property: layer; attributes: T@"CAMetalLayer",&,N,V_layer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCameraViewfinderMetalRenderer init]
// Type encoding: @16@0:8
// Implementation: 0x100456c20

// -[SCCameraViewfinderMetalRenderer resumeRendering]
// Type encoding: v16@0:8
// Implementation: 0x1004dcb70

// -[SCCameraViewfinderMetalRenderer suspendRenderingForBackground]
// Type encoding: v16@0:8
// Implementation: 0x107031f58

// -[SCCameraViewfinderMetalRenderer updateTextureSizeIfNecessary:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x100883dac

// -[SCCameraViewfinderMetalRenderer setSampleBufferOrientation:]
// Type encoding: v24@0:8q16
// Implementation: 0x1004dcd24

// -[SCCameraViewfinderMetalRenderer fetchDisplayLayer:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1004dcd2c

// -[SCCameraViewfinderMetalRenderer render:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x100883e18

// -[SCCameraViewfinderMetalRenderer setBlurEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x107031f60

// -[SCCameraViewfinderMetalRenderer flushOutdatedPreview]
// Type encoding: v16@0:8
// Implementation: 0x107032014

// -[SCCameraViewfinderMetalRenderer flushTextureCache]
// Type encoding: v16@0:8
// Implementation: 0x10703201c

// -[SCCameraViewfinderMetalRenderer _isFrameRenderingEnabled]
// Type encoding: B16@0:8
// Implementation: 0x100884650

// -[SCCameraViewfinderMetalRenderer _setFrameRenderingEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1004dcb78

// -[SCCameraViewfinderMetalRenderer _setup]
// Type encoding: v16@0:8
// Implementation: 0x100456d88

// -[SCCameraViewfinderMetalRenderer setupRenderModule]
// Type encoding: v16@0:8
// Implementation: 0x1008bbaac

// -[SCCameraViewfinderMetalRenderer _useSampleBufferOrientationForRendering]
// Type encoding: B16@0:8
// Implementation: 0x1008beaf4

// -[SCCameraViewfinderMetalRenderer createDisplayLayer]
// Type encoding: v16@0:8
// Implementation: 0x1008bbaec

// -[SCCameraViewfinderMetalRenderer layer]
// Type encoding: @16@0:8
// Implementation: 0x107032044

// -[SCCameraViewfinderMetalRenderer setLayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10703204c

// -[SCCameraViewfinderMetalRenderer isMetalLibLoaded]
// Type encoding: B16@0:8
// Implementation: 0x1008bbae0

// -[SCCameraViewfinderMetalRenderer setIsMetalLibLoaded:]
// Type encoding: v20@0:8B16
// Implementation: 0x1004d7f34

// -[SCCameraViewfinderMetalRenderer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10703207c

@end
