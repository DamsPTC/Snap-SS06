// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessGLWrapperImpl
// Superclass: NSObject
// Address: 0x112be4d70

@interface SCImageProcessGLWrapperImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCImageProcessGLWrapperImpl generateFramebuffers:size:]
// Type encoding: v28@0:8^I16i24
// Implementation: 0x109084f4c

// -[SCImageProcessGLWrapperImpl generateRenderbuffers:size:]
// Type encoding: v28@0:8^I16i24
// Implementation: 0x109084f58

// -[SCImageProcessGLWrapperImpl deleteFramebuffers:size:]
// Type encoding: v28@0:8r^I16i24
// Implementation: 0x109084f64

// -[SCImageProcessGLWrapperImpl deleteRenderbuffers:size:]
// Type encoding: v28@0:8r^I16i24
// Implementation: 0x109084f70

// -[SCImageProcessGLWrapperImpl deleteTextures:size:]
// Type encoding: v28@0:8r^I16i24
// Implementation: 0x109084f7c

// -[SCImageProcessGLWrapperImpl bindFramebuffer:]
// Type encoding: v20@0:8I16
// Implementation: 0x109084f88

// -[SCImageProcessGLWrapperImpl bindRenderbuffer:]
// Type encoding: v20@0:8I16
// Implementation: 0x109084f94

// -[SCImageProcessGLWrapperImpl setOutputRenderBuffer:]
// Type encoding: v20@0:8I16
// Implementation: 0x109084fa0

// -[SCImageProcessGLWrapperImpl setActiveTextureUnit:]
// Type encoding: v20@0:8I16
// Implementation: 0x109084fd0

// -[SCImageProcessGLWrapperImpl bindInputTexture:textureUnit:]
// Type encoding: v24@0:8I16I20
// Implementation: 0x109084fd8

// -[SCImageProcessGLWrapperImpl setOutputTexture:]
// Type encoding: v20@0:8I16
// Implementation: 0x109085004

// -[SCImageProcessGLWrapperImpl setViewPortWithWidth:height:]
// Type encoding: v24@0:8i16i20
// Implementation: 0x10908501c

// -[SCImageProcessGLWrapperImpl readRGBAPixelsWithX:y:width:height:data:]
// Type encoding: v40@0:8i16i20i24i28^v32
// Implementation: 0x109085028

// -[SCImageProcessGLWrapperImpl flush]
// Type encoding: v16@0:8
// Implementation: 0x109085044

// -[SCImageProcessGLWrapperImpl clearColorWithR:g:b:a:]
// Type encoding: v32@0:8f16f20f24f28
// Implementation: 0x109085048

// -[SCImageProcessGLWrapperImpl retrieveRenderBufferPixelWidth:]
// Type encoding: v24@0:8^i16
// Implementation: 0x109085060

// -[SCImageProcessGLWrapperImpl retrieveRenderBufferPixelHeight:]
// Type encoding: v24@0:8^i16
// Implementation: 0x10908506c

// -[SCImageProcessGLWrapperImpl establishRenderBufferStorageWithWidth:height:]
// Type encoding: v24@0:8i16i20
// Implementation: 0x109085078

@end
