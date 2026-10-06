// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessPipelineGraphProcessor
// Superclass: NSObject
// Address: 0x112be4aa0

@interface SCImageProcessPipelineGraphProcessor


// -[SCImageProcessPipelineGraphProcessor initWithContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x10908177c

// -[SCImageProcessPipelineGraphProcessor processRenderPasses:inputs:outputPixelBuffer:outputRenderer:pixelBufferPoolRef:outputColorSpace:customBackgroundColor:presentationTime:textureCacheHolder:GPUAvailable:error:]
// Type encoding: B116@0:8@16@24^{__CVBuffer=}32@40^{__CVPixelBufferPool=}48q56@64{?=qiIq}72@96B104^@108
// Implementation: 0x1090817d4

// -[SCImageProcessPipelineGraphProcessor _getInputTexturesWithTextureIds:pipelineInputs:resourceManager:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x109081e6c

// -[SCImageProcessPipelineGraphProcessor _getIntermediateOutputTexturesWithTextureIds:resourceManager:contentIsUnchanged:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x109082114

// -[SCImageProcessPipelineGraphProcessor _setupAttachmentsForPixelBuffer:inTargetColorSpace:]
// Type encoding: v32@0:8^{__CVBuffer=}16q24
// Implementation: 0x1090822f8

// -[SCImageProcessPipelineGraphProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090823a0

// +[SCImageProcessPipelineGraphProcessor _outputBufferContentIsUnchangedForInputs:renderPass:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1090821cc

@end
