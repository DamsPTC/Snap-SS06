// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessPipelinePlaybackRenderer
// Superclass: NSObject
// Address: 0x112be4898

@interface SCImageProcessPipelinePlaybackRenderer

// Property: framebuffer; attributes: TI,R,N,V_framebuffer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCImageProcessPipelinePlaybackRenderer initWithImageProcessGlWrapper:glLayer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10907f4ec

// -[SCImageProcessPipelinePlaybackRenderer pixelSize]
// Type encoding: {?=QQ}16@0:8
// Implementation: 0x10907f590

// -[SCImageProcessPipelinePlaybackRenderer pixelBufferForCPUProcessing]
// Type encoding: ^{__CVBuffer=}16@0:8
// Implementation: 0x10907f59c

// -[SCImageProcessPipelinePlaybackRenderer setupOutputBuffersWithContext:textureUnit:error:]
// Type encoding: B36@0:8@16I24^@28
// Implementation: 0x10907f5a4

// -[SCImageProcessPipelinePlaybackRenderer cleanupTextures]
// Type encoding: v16@0:8
// Implementation: 0x10907f66c

// -[SCImageProcessPipelinePlaybackRenderer deleteOutputBuffers]
// Type encoding: v16@0:8
// Implementation: 0x10907f670

// -[SCImageProcessPipelinePlaybackRenderer setOutputBuffersWithTextureUnit:]
// Type encoding: v20@0:8I16
// Implementation: 0x10907f6bc

// -[SCImageProcessPipelinePlaybackRenderer presentToScreenIfApplicableWithContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x10907f6cc

// -[SCImageProcessPipelinePlaybackRenderer framebuffer]
// Type encoding: I16@0:8
// Implementation: 0x10907f718

// -[SCImageProcessPipelinePlaybackRenderer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10907f720

@end
