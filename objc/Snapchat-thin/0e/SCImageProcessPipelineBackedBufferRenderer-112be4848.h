// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessPipelineBackedBufferRenderer
// Superclass: NSObject
// Address: 0x112be4848

@interface SCImageProcessPipelineBackedBufferRenderer

// Property: outputPixelBuffer; attributes: T^{__CVBuffer=},R,N,V_outputPixelBuffer
// Property: framebuffer; attributes: TI,R,N,V_framebuffer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCImageProcessPipelineBackedBufferRenderer initWithGLWrapper:pixelSize:screenRenderer:]
// Type encoding: @48@0:8@16{?=QQ}24@40
// Implementation: 0x10907f0dc

// -[SCImageProcessPipelineBackedBufferRenderer pixelSize]
// Type encoding: {?=QQ}16@0:8
// Implementation: 0x10907f194

// -[SCImageProcessPipelineBackedBufferRenderer pixelBufferForCPUProcessing]
// Type encoding: ^{__CVBuffer=}16@0:8
// Implementation: 0x10907f1a0

// -[SCImageProcessPipelineBackedBufferRenderer setupOutputBuffersWithContext:textureUnit:error:]
// Type encoding: B36@0:8@16I24^@28
// Implementation: 0x10907f1a8

// -[SCImageProcessPipelineBackedBufferRenderer cleanupTextures]
// Type encoding: v16@0:8
// Implementation: 0x10907f264

// -[SCImageProcessPipelineBackedBufferRenderer deleteOutputBuffers]
// Type encoding: v16@0:8
// Implementation: 0x10907f2c0

// -[SCImageProcessPipelineBackedBufferRenderer setOutputBuffersWithTextureUnit:]
// Type encoding: v20@0:8I16
// Implementation: 0x10907f2c4

// -[SCImageProcessPipelineBackedBufferRenderer presentToScreenIfApplicableWithContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x10907f2f0

// -[SCImageProcessPipelineBackedBufferRenderer _setupOutputTextureWithContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x10907f3bc

// -[SCImageProcessPipelineBackedBufferRenderer framebuffer]
// Type encoding: I16@0:8
// Implementation: 0x10907f4ac

// -[SCImageProcessPipelineBackedBufferRenderer outputPixelBuffer]
// Type encoding: ^{__CVBuffer=}16@0:8
// Implementation: 0x10907f4b4

// -[SCImageProcessPipelineBackedBufferRenderer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10907f4bc

@end
