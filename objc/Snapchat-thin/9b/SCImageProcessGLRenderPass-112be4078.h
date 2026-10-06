// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessGLRenderPass
// Superclass: NSObject
// Address: 0x112be4078

@interface SCImageProcessGLRenderPass

// Property: glCommand; attributes: T@"<SCImageProcessCommand>",R,N,V_glCommand
// Property: cpuCommand; attributes: T@"<SCImageProcessCPUCommand>",R,N,V_cpuCommand
// Property: textureType; attributes: Tq,R,N,V_textureType
// Property: inputBufferIds; attributes: T@"NSArray",R,C,N,V_inputBufferIds
// Property: outputBufferIds; attributes: T@"NSArray",R,C,N,V_outputBufferIds
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCImageProcessGLRenderPass initWithGLCommand:correspondingCPUCommand:inputBufferIds:outputBufferIds:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1090749d0

// -[SCImageProcessGLRenderPass description]
// Type encoding: @16@0:8
// Implementation: 0x109074af8

// -[SCImageProcessGLRenderPass renderToDisplayWithInputTextures:outputRenderer:ippContext:negativeSpaceColor:presentationTime:error:]
// Type encoding: B80@0:8@16@24@32@40{?=qiIq}48^@72
// Implementation: 0x109074b38

// -[SCImageProcessGLRenderPass runWithInputTextures:outputTextures:ippContext:negativeSpaceColor:presentationTime:presentationTimeOffset:GPUAvailable:error:]
// Type encoding: B92@0:8@16@24@32@40{?=qiIq}48@72B80^@84
// Implementation: 0x109074e48

// -[SCImageProcessGLRenderPass _getCIContext]
// Type encoding: @16@0:8
// Implementation: 0x1090753b0

// -[SCImageProcessGLRenderPass _isColorConversionCommand]
// Type encoding: B16@0:8
// Implementation: 0x109075494

// -[SCImageProcessGLRenderPass _isCPUColorConversionCommand]
// Type encoding: B16@0:8
// Implementation: 0x109075524

// -[SCImageProcessGLRenderPass _transformInputPixelBuffer:outputPixelBuffer:transform:orientation:]
// Type encoding: v88@0:8^{__CVBuffer=}16^{__CVBuffer=}24{CGAffineTransform=dddddd}32q80
// Implementation: 0x1090755a8

// -[SCImageProcessGLRenderPass _transformedSizeForOrientation:inputSize:]
// Type encoding: {CGSize=dd}40@0:8q16{CGSize=dd}24
// Implementation: 0x109075900

// -[SCImageProcessGLRenderPass _transformForOrientation:imageSize:]
// Type encoding: {CGAffineTransform=dddddd}40@0:8q16{CGSize=dd}24
// Implementation: 0x109075934

// -[SCImageProcessGLRenderPass createInstanceWithUpdatedInputBufferIds:OutputBufferIds:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x109075b24

// -[SCImageProcessGLRenderPass isPixelBufferInputCompatible]
// Type encoding: B16@0:8
// Implementation: 0x109075b98

// -[SCImageProcessGLRenderPass appliesInputTransform]
// Type encoding: B16@0:8
// Implementation: 0x109075ba0

// -[SCImageProcessGLRenderPass appliesInputOrientation]
// Type encoding: B16@0:8
// Implementation: 0x109075ba8

// -[SCImageProcessGLRenderPass lensIds]
// Type encoding: @16@0:8
// Implementation: 0x109075bb0

// -[SCImageProcessGLRenderPass unloadWithError:]
// Type encoding: B24@0:8^@16
// Implementation: 0x109075bb8

// -[SCImageProcessGLRenderPass requiresGPU]
// Type encoding: B16@0:8
// Implementation: 0x109075bc0

// -[SCImageProcessGLRenderPass isOutputDeterministicAndStatic]
// Type encoding: B16@0:8
// Implementation: 0x109075bd0

// -[SCImageProcessGLRenderPass glCommand]
// Type encoding: @16@0:8
// Implementation: 0x109075bd4

// -[SCImageProcessGLRenderPass cpuCommand]
// Type encoding: @16@0:8
// Implementation: 0x109075bdc

// -[SCImageProcessGLRenderPass inputBufferIds]
// Type encoding: @16@0:8
// Implementation: 0x109075be4

// -[SCImageProcessGLRenderPass outputBufferIds]
// Type encoding: @16@0:8
// Implementation: 0x109075bec

// -[SCImageProcessGLRenderPass textureType]
// Type encoding: q16@0:8
// Implementation: 0x109075bf4

// -[SCImageProcessGLRenderPass .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109075bfc

@end
