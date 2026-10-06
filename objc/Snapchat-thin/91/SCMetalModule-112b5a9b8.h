// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMetalModule
// Superclass: NSObject
// Address: 0x112b5a9b8

@interface SCMetalModule

// Property: library; attributes: T@"<MTLLibrary>",R,N,V_library
// Property: device; attributes: T@"<MTLDevice>",R,N
// Property: function; attributes: T@"<MTLFunction>",R,N,V_function
// Property: computePipelineState; attributes: T@"<MTLComputePipelineState>",R,N,V_computePipelineState
// Property: commandQueue; attributes: T@"<MTLCommandQueue>",R,N,V_commandQueue
// Property: textureCache; attributes: T^{__CVMetalTextureCache=},R,N,V_textureCache
// Property: metalRenderCommand; attributes: T@"<SCMetalRenderCommand>",R,N,V_metalRenderCommand
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMetalModule initWithMetalRenderCommand:]
// Type encoding: @24@0:8@16
// Implementation: 0x10702fb3c

// -[SCMetalModule render:]
// Type encoding: ^{opaqueCMSampleBuffer=}64@0:8{RenderData=^{opaqueCMSampleBuffer}dq{?=qiIq}}16
// Implementation: 0x10702fbb0

// -[SCMetalModule processImage:metadata:]
// Type encoding: @36@0:8@16{SampleBufferMetadata=iff}24
// Implementation: 0x10702feec

// -[SCMetalModule library]
// Type encoding: @16@0:8
// Implementation: 0x10702ff14

// -[SCMetalModule device]
// Type encoding: @16@0:8
// Implementation: 0x10702fff8

// -[SCMetalModule function]
// Type encoding: @16@0:8
// Implementation: 0x10702fffc

// -[SCMetalModule computePipelineState]
// Type encoding: @16@0:8
// Implementation: 0x107030068

// -[SCMetalModule commandQueue]
// Type encoding: @16@0:8
// Implementation: 0x107030120

// -[SCMetalModule textureCache]
// Type encoding: ^{__CVMetalTextureCache=}16@0:8
// Implementation: 0x107030180

// -[SCMetalModule metalRenderCommand]
// Type encoding: @16@0:8
// Implementation: 0x1070301f4

// -[SCMetalModule .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1070301fc

@end
