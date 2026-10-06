// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessPipelineYUVPixelBufferRenderer
// Superclass: NSObject
// Address: 0x112be4938

@interface SCImageProcessPipelineYUVPixelBufferRenderer

// Property: framebuffer; attributes: TI,R,N,V_framebuffer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCImageProcessPipelineYUVPixelBufferRenderer initWithGlWrapper:pixelBuffer:]
// Type encoding: @32@0:8@16^{__CVBuffer=}24
// Implementation: 0x10907f7d4

// -[SCImageProcessPipelineYUVPixelBufferRenderer dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10907f878

// -[SCImageProcessPipelineYUVPixelBufferRenderer pixelSize]
// Type encoding: {?=QQ}16@0:8
// Implementation: 0x10907f8c0

// -[SCImageProcessPipelineYUVPixelBufferRenderer pixelBufferForCPUProcessing]
// Type encoding: ^{__CVBuffer=}16@0:8
// Implementation: 0x10907f8cc

// -[SCImageProcessPipelineYUVPixelBufferRenderer setupOutputBuffersWithContext:textureUnit:error:]
// Type encoding: B36@0:8@16I24^@28
// Implementation: 0x10907f8d4

// -[SCImageProcessPipelineYUVPixelBufferRenderer setOutputBuffersWithTextureUnit:]
// Type encoding: v20@0:8I16
// Implementation: 0x10907f9b0

// -[SCImageProcessPipelineYUVPixelBufferRenderer cleanupTextures]
// Type encoding: v16@0:8
// Implementation: 0x10907f9e4

// -[SCImageProcessPipelineYUVPixelBufferRenderer deleteOutputBuffers]
// Type encoding: v16@0:8
// Implementation: 0x10907fa30

// -[SCImageProcessPipelineYUVPixelBufferRenderer presentToScreenIfApplicableWithContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x10907fa34

// -[SCImageProcessPipelineYUVPixelBufferRenderer _setAttachmentsWithPixelBuffer:]
// Type encoding: v24@0:8^{__CVBuffer=}16
// Implementation: 0x10907fa3c

// -[SCImageProcessPipelineYUVPixelBufferRenderer framebuffer]
// Type encoding: I16@0:8
// Implementation: 0x10907fac0

// -[SCImageProcessPipelineYUVPixelBufferRenderer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10907fac8

@end
