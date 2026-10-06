// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMetalRenderingModule
// Superclass: SCCameraViewfinderMetalRenderer
// Address: 0x112ad55d8

@interface SCMetalRenderingModule

// Property: renderingModuleType; attributes: TQ,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMetalRenderingModule initWithMainQueuePerformer:]
// Type encoding: @24@0:8@16
// Implementation: 0x10621981c

// -[SCMetalRenderingModule renderingModuleType]
// Type encoding: Q16@0:8
// Implementation: 0x1062198a0

// -[SCMetalRenderingModule displayLayerContainer:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1062198a8

// -[SCMetalRenderingModule renderSampleBuffer:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1062199dc

// -[SCMetalRenderingModule setTextureOrientation:]
// Type encoding: v24@0:8q16
// Implementation: 0x106219a84

// -[SCMetalRenderingModule setTextureSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x106219acc

// -[SCMetalRenderingModule createDisplayLayer]
// Type encoding: v16@0:8
// Implementation: 0x106219ad0

// -[SCMetalRenderingModule viewPromise]
// Type encoding: @16@0:8
// Implementation: 0x106219b60

// -[SCMetalRenderingModule .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106219bc0

@end
