// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessGraphRenderPipeline
// Superclass: NSObject
// Address: 0x112be49d8

@interface SCImageProcessGraphRenderPipeline

// Property: GPURequired; attributes: TB,R,N
// Property: taskId; attributes: T@"NSString",R,C,N,V_taskId
// Property: context; attributes: T@"NSString",R,C,N,V_context
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCImageProcessGraphRenderPipeline initWithOutputPixelBuffer:inputs:pixelBufferPoolRef:textureCacheHolder:outputColorSpace:colorConversionCommandProvider:backgroundColor:backgroundAnimationCommand:presentationTime:renderPasses:context:taskId:enableCPUFallback:completionHandler:]
// Type encoding: @140@0:8^{__CVBuffer=}16@24^{__CVPixelBufferPool=}32@40q48@56@64@72{?=qiIq}80@104@112@120B128@?132
// Implementation: 0x10908094c

// -[SCImageProcessGraphRenderPipeline initWithOutputRenderer:outputSize:inputs:pixelBufferPoolRef:textureCacheHolder:outputColorSpace:colorConversionCommandProvider:backgroundColor:backgroundAnimationCommand:presentationTime:renderPasses:context:taskId:enableCPUFallback:completionHandler:]
// Type encoding: @156@0:8@16{CGSize=dd}24@40^{__CVPixelBufferPool=}48@56q64@72@80@88{?=qiIq}96@120@128@136B144@?148
// Implementation: 0x109080ad8

// -[SCImageProcessGraphRenderPipeline _initWithInputs:outputPixelBuffer:outputSize:outputRenderer:pixelBufferPoolRef:textureCacheHolder:outputColorSpace:colorConversionCommandProvider:backgroundColor:backgroundAnimationCommand:presentationTime:renderPasses:context:taskId:enableCPUFallback:completionHandler:]
// Type encoding: @164@0:8@16^{__CVBuffer=}24{CGSize=dd}32@48^{__CVPixelBufferPool=}56@64q72@80@88@96{?=qiIq}104@128@136@144B152@?156
// Implementation: 0x109080b54

// -[SCImageProcessGraphRenderPipeline GPURequired]
// Type encoding: B16@0:8
// Implementation: 0x109080dd4

// -[SCImageProcessGraphRenderPipeline runProgramsWithContext:GPUAvailable:error:]
// Type encoding: B36@0:8@16B24^@28
// Implementation: 0x109080ee8

// -[SCImageProcessGraphRenderPipeline dealloc]
// Type encoding: v16@0:8
// Implementation: 0x109081050

// -[SCImageProcessGraphRenderPipeline _executeCompletionHandlerWithStatus:error:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x1090810a4

// -[SCImageProcessGraphRenderPipeline taskId]
// Type encoding: @16@0:8
// Implementation: 0x1090810f4

// -[SCImageProcessGraphRenderPipeline context]
// Type encoding: @16@0:8
// Implementation: 0x1090810fc

// -[SCImageProcessGraphRenderPipeline .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109081104

@end
