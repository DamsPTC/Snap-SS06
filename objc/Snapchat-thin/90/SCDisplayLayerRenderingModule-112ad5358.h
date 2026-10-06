// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDisplayLayerRenderingModule
// Superclass: NSObject
// Address: 0x112ad5358

@interface SCDisplayLayerRenderingModule

// Property: orientation; attributes: Tq,N,V_orientation
// Property: fillMode; attributes: TQ,N,V_fillMode
// Property: renderingModuleType; attributes: TQ,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDisplayLayerRenderingModule initWithMainQueuePerformer:initialOrientation:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1062189bc

// -[SCDisplayLayerRenderingModule setOrientation:]
// Type encoding: v24@0:8q16
// Implementation: 0x106218ab4

// -[SCDisplayLayerRenderingModule setFillMode:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106218b78

// -[SCDisplayLayerRenderingModule flushTextureCache]
// Type encoding: v16@0:8
// Implementation: 0x106218bb8

// -[SCDisplayLayerRenderingModule renderingModuleType]
// Type encoding: Q16@0:8
// Implementation: 0x106218c1c

// -[SCDisplayLayerRenderingModule displayLayerContainer:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106218c24

// -[SCDisplayLayerRenderingModule renderSampleBuffer:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106218d38

// -[SCDisplayLayerRenderingModule setTextureOrientation:]
// Type encoding: v24@0:8q16
// Implementation: 0x106219018

// -[SCDisplayLayerRenderingModule setTextureSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x10621901c

// -[SCDisplayLayerRenderingModule createDisplayLayerWithOrientation:]
// Type encoding: v24@0:8q16
// Implementation: 0x106219020

// -[SCDisplayLayerRenderingModule orientation]
// Type encoding: q16@0:8
// Implementation: 0x1062190a8

// -[SCDisplayLayerRenderingModule fillMode]
// Type encoding: Q16@0:8
// Implementation: 0x1062190b0

// -[SCDisplayLayerRenderingModule .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1062190b8

@end
