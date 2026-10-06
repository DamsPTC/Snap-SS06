// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessInteropTextureImpl
// Superclass: NSObject
// Address: 0x112be4a28

@interface SCImageProcessInteropTextureImpl

// Property: colorSpace; attributes: Tq,R,N,V_colorSpace
// Property: metalTexture; attributes: T@"<MTLTexture>",R,N
// Property: glTexture; attributes: TI,R,N,V_glTexture
// Property: orientation; attributes: Tq,R,N,V_orientation
// Property: transform; attributes: T{CGAffineTransform=dddddd},R,N,V_transform
// Property: cpuTransform; attributes: T{CGAffineTransform=dddddd},R,N,V_cpuTransform
// Property: contentIsUnchanged; attributes: TB,R,N,V_contentIsUnchanged

// -[SCImageProcessInteropTextureImpl init]
// Type encoding: @16@0:8
// Implementation: 0x109081194

// -[SCImageProcessInteropTextureImpl initWithResourceManager:colorSpace:contentIsUnchanged:]
// Type encoding: @36@0:8@16q24B32
// Implementation: 0x1090811d4

// -[SCImageProcessInteropTextureImpl initWithPixelBuffer:resourceManager:colorSpace:orientation:transform:cpuTransform:contentIsUnchanged:]
// Type encoding: @148@0:8^{__CVBuffer=}16@24q32q40{CGAffineTransform=dddddd}48{CGAffineTransform=dddddd}96B144
// Implementation: 0x109081280

// -[SCImageProcessInteropTextureImpl _createPixelBufferInPixelBufferPool:]
// Type encoding: v24@0:8^{__CVPixelBufferPool=}16
// Implementation: 0x109081344

// -[SCImageProcessInteropTextureImpl metalTexture]
// Type encoding: @16@0:8
// Implementation: 0x109081368

// -[SCImageProcessInteropTextureImpl pixelSize]
// Type encoding: {?=QQ}16@0:8
// Implementation: 0x109081370

// -[SCImageProcessInteropTextureImpl glFrameBuffer]
// Type encoding: I16@0:8
// Implementation: 0x1090813a8

// -[SCImageProcessInteropTextureImpl bindToOpenGLInput]
// Type encoding: B16@0:8
// Implementation: 0x1090813b0

// -[SCImageProcessInteropTextureImpl bindToOpenGLOutput]
// Type encoding: B16@0:8
// Implementation: 0x1090814e8

// -[SCImageProcessInteropTextureImpl readOnlyPixelBuffer]
// Type encoding: ^{__CVBuffer=}16@0:8
// Implementation: 0x109081578

// -[SCImageProcessInteropTextureImpl writablePixelBuffer]
// Type encoding: ^{__CVBuffer=}16@0:8
// Implementation: 0x109081580

// -[SCImageProcessInteropTextureImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1090815c0

// -[SCImageProcessInteropTextureImpl colorSpace]
// Type encoding: q16@0:8
// Implementation: 0x109081720

// -[SCImageProcessInteropTextureImpl orientation]
// Type encoding: q16@0:8
// Implementation: 0x109081728

// -[SCImageProcessInteropTextureImpl glTexture]
// Type encoding: I16@0:8
// Implementation: 0x109081730

// -[SCImageProcessInteropTextureImpl transform]
// Type encoding: {CGAffineTransform=dddddd}16@0:8
// Implementation: 0x109081738

// -[SCImageProcessInteropTextureImpl cpuTransform]
// Type encoding: {CGAffineTransform=dddddd}16@0:8
// Implementation: 0x109081750

// -[SCImageProcessInteropTextureImpl contentIsUnchanged]
// Type encoding: B16@0:8
// Implementation: 0x109081768

// -[SCImageProcessInteropTextureImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109081770

@end
