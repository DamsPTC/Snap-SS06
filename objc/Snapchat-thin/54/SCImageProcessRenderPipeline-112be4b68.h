// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessRenderPipeline
// Superclass: NSObject
// Address: 0x112be4b68

@interface SCImageProcessRenderPipeline

// Property: GPURequired; attributes: TB,R,N
// Property: taskId; attributes: T@"NSString",R,C,N,V_taskId
// Property: context; attributes: T@"NSString",R,C,N,V_context
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCImageProcessRenderPipeline initWithInput:outputRenderer:glWrapper:colorConversionCommandProvider:outputImageBaker:bakedImageHandler:backgroundColor:backgroundAnimationCommand:orientation:presentationTime:presentationTimeOffset:viewportTransform:GPUCommands:CPUCommands:cpuBufferTransform:context:taskId:completionHandler:]
// Type encoding: @256@0:8@16@24@32@40@48@?56@64@72q80{?=qiIq}88@112{CGAffineTransform=dddddd}120@168@176{CGAffineTransform=dddddd}184@232@240@?248
// Implementation: 0x109082d98

// -[SCImageProcessRenderPipeline GPURequired]
// Type encoding: B16@0:8
// Implementation: 0x1090830fc

// -[SCImageProcessRenderPipeline runProgramsWithContext:GPUAvailable:error:]
// Type encoding: B36@0:8@16B24^@28
// Implementation: 0x10908311c

// -[SCImageProcessRenderPipeline _innerRunProgramsWithContext:GPUAvailable:error:]
// Type encoding: B36@0:8@16B24^@28
// Implementation: 0x1090831c0

// -[SCImageProcessRenderPipeline _runGPUCommandsWithContext:executeCompletionBlock:error:]
// Type encoding: B40@0:8@16@?24^@32
// Implementation: 0x1090832d8

// -[SCImageProcessRenderPipeline _runCPUCommandsWithContext:executeCompletionBlock:error:]
// Type encoding: B40@0:8@16@?24^@32
// Implementation: 0x109083db8

// -[SCImageProcessRenderPipeline _setupTextureContainerWithContext:intermediatePasses:pingTextureName:pongTextureName:pixelSize:]
// Type encoding: v64@0:8@16q24@32@40{?=QQ}48
// Implementation: 0x1090842ec

// -[SCImageProcessRenderPipeline _intermediateTextureWithContext:textureName:pixelSize:]
// Type encoding: I48@0:8@16@24{?=QQ}32
// Implementation: 0x10908439c

// -[SCImageProcessRenderPipeline _paintBackgroundColorWithContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090843b4

// -[SCImageProcessRenderPipeline _transformInputPixelBuffer:]
// Type encoding: v24@0:8^{__CVBuffer=}16
// Implementation: 0x109084438

// -[SCImageProcessRenderPipeline taskId]
// Type encoding: @16@0:8
// Implementation: 0x1090847c8

// -[SCImageProcessRenderPipeline context]
// Type encoding: @16@0:8
// Implementation: 0x1090847d0

// -[SCImageProcessRenderPipeline .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090847d8

@end
