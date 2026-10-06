// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMetalTextureResource
// Superclass: NSObject
// Address: 0x112b5aa08

@interface SCMetalTextureResource

// Property: textureCache; attributes: T^{__CVMetalTextureCache=},R,N,V_textureCache
// Property: sourceYTexture; attributes: T@"<MTLTexture>",R,N,V_sourceYTexture
// Property: sourceUVTexture; attributes: T@"<MTLTexture>",R,N,V_sourceUVTexture
// Property: destinationYTexture; attributes: T@"<MTLTexture>",R,N,V_destinationYTexture
// Property: destinationUVTexture; attributes: T@"<MTLTexture>",R,N,V_destinationUVTexture
// Property: device; attributes: T@"<MTLDevice>",R,N,V_device
// Property: sampleBufferMetadata; attributes: T{SampleBufferMetadata=iff},R,N,V_sampleBufferMetadata

// -[SCMetalTextureResource initWithRenderData:textureCache:device:]
// Type encoding: @80@0:8{RenderData=^{opaqueCMSampleBuffer}dq{?=qiIq}}16^{__CVMetalTextureCache=}64@72
// Implementation: 0x107030250

// -[SCMetalTextureResource _getSourceYTextureRef]
// Type encoding: ^{__CVBuffer=}16@0:8
// Implementation: 0x1070302f8

// -[SCMetalTextureResource sourceYTexture]
// Type encoding: @16@0:8
// Implementation: 0x1070303b0

// -[SCMetalTextureResource _getSourceUVTextureRef]
// Type encoding: ^{__CVBuffer=}16@0:8
// Implementation: 0x1070303c4

// -[SCMetalTextureResource sourceUVTexture]
// Type encoding: @16@0:8
// Implementation: 0x10703047c

// -[SCMetalTextureResource destinationYTexture]
// Type encoding: @16@0:8
// Implementation: 0x107030490

// -[SCMetalTextureResource destinationUVTexture]
// Type encoding: @16@0:8
// Implementation: 0x107030548

// -[SCMetalTextureResource sampleBufferMetadata]
// Type encoding: {SampleBufferMetadata=iff}16@0:8
// Implementation: 0x107030600

// -[SCMetalTextureResource renderingContext]
// Type encoding: @16@0:8
// Implementation: 0x107030640

// -[SCMetalTextureResource dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107030748

// -[SCMetalTextureResource cleanup]
// Type encoding: v16@0:8
// Implementation: 0x10703078c

// -[SCMetalTextureResource device]
// Type encoding: @16@0:8
// Implementation: 0x1070307c0

// -[SCMetalTextureResource textureCache]
// Type encoding: ^{__CVMetalTextureCache=}16@0:8
// Implementation: 0x1070307c8

// -[SCMetalTextureResource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1070307d0

@end
