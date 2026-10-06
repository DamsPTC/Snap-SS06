// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessSRPluginRenderPass
// Superclass: NSObject
// Address: 0x112be4488

@interface SCImageProcessSRPluginRenderPass

// Property: textureType; attributes: Tq,R,N,V_textureType
// Property: inputBufferIds; attributes: T@"NSArray",R,C,N,V_inputBufferIds
// Property: outputBufferIds; attributes: T@"NSArray",R,C,N,V_outputBufferIds
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCImageProcessSRPluginRenderPass initWithRenderPlugin:inputBufferIds:outputBufferIds:circumstanceEngine:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1090790a0

// -[SCImageProcessSRPluginRenderPass runWithInputTextures:outputTextures:ippContext:negativeSpaceColor:presentationTime:presentationTimeOffset:GPUAvailable:error:]
// Type encoding: B92@0:8@16@24@32@40{?=qiIq}48@72B80^@84
// Implementation: 0x1090791a8

// -[SCImageProcessSRPluginRenderPass unloadWithError:]
// Type encoding: B24@0:8^@16
// Implementation: 0x1090791e0

// -[SCImageProcessSRPluginRenderPass requiresGPU]
// Type encoding: B16@0:8
// Implementation: 0x1090791e8

// -[SCImageProcessSRPluginRenderPass isOutputDeterministicAndStatic]
// Type encoding: B16@0:8
// Implementation: 0x1090791f0

// -[SCImageProcessSRPluginRenderPass _internalRGBRunWithInputTextures:outputTextures:ippContext:negativeSpaceColor:presentationTime:presentationTimeOffset:error:]
// Type encoding: B88@0:8@16@24@32@40{?=qiIq}48@72^@80
// Implementation: 0x1090791f8

// -[SCImageProcessSRPluginRenderPass createInstanceWithUpdatedInputBufferIds:OutputBufferIds:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x109079704

// -[SCImageProcessSRPluginRenderPass isPixelBufferInputCompatible]
// Type encoding: B16@0:8
// Implementation: 0x109079778

// -[SCImageProcessSRPluginRenderPass lensIds]
// Type encoding: @16@0:8
// Implementation: 0x109079780

// -[SCImageProcessSRPluginRenderPass _copyPixelBuffer:to:]
// Type encoding: B32@0:8^{__CVBuffer=}16^{__CVBuffer=}24
// Implementation: 0x10907978c

// -[SCImageProcessSRPluginRenderPass inputBufferIds]
// Type encoding: @16@0:8
// Implementation: 0x109079890

// -[SCImageProcessSRPluginRenderPass outputBufferIds]
// Type encoding: @16@0:8
// Implementation: 0x109079898

// -[SCImageProcessSRPluginRenderPass textureType]
// Type encoding: q16@0:8
// Implementation: 0x1090798a0

// -[SCImageProcessSRPluginRenderPass .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090798a8

@end
