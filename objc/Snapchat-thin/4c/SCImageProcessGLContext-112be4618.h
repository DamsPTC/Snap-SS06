// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessGLContext
// Superclass: NSObject
// Address: 0x112be4618

@interface SCImageProcessGLContext

// Property: disableCATransactionFlush; attributes: TB,N,V_disableCATransactionFlush
// Property: contextId; attributes: T@"NSString",R,N,V_contextId
// Property: textureCache; attributes: T^{__CVOpenGLESTextureCache=},R,N,V_textureCache
// Property: sharegroup; attributes: T@"EAGLSharegroup",R,N
// Property: apiVersion; attributes: TQ,R,N
// Property: outputSize; attributes: T{CGSize=dd},N,V_outputSize
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCImageProcessGLContext glContext]
// Type encoding: @16@0:8
// Implementation: 0x10907b4cc

// -[SCImageProcessGLContext init]
// Type encoding: @16@0:8
// Implementation: 0x10907b4f4

// -[SCImageProcessGLContext dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10907b604

// -[SCImageProcessGLContext useAsCurrentContext]
// Type encoding: v16@0:8
// Implementation: 0x10907b64c

// -[SCImageProcessGLContext createTextureWithData:pixelWidth:pixelHeight:textureUnit:pixelFormat:minFilterType:magFilterType:enableMipmapping:]
// Type encoding: I52@0:8r^v16I24I28I32I36I40I44B48
// Implementation: 0x10907b674

// -[SCImageProcessGLContext createRenderingTargetTextureWithRGBPixelBuffer:textureUnit:textureRef:textureCacheRef:]
// Type encoding: I44@0:8^{__CVBuffer=}16I24^^{__CVBuffer}28^{__CVOpenGLESTextureCache=}36
// Implementation: 0x10907b79c

// -[SCImageProcessGLContext createRenderingTargetTextureWithRGBPixelBuffer:textureUnit:textureRef:]
// Type encoding: I36@0:8^{__CVBuffer=}16I24^^{__CVBuffer}28
// Implementation: 0x10907b8c0

// -[SCImageProcessGLContext createTextureWithRGBPixelBuffer:textureUnit:textureRef:textureCacheRef:]
// Type encoding: I44@0:8^{__CVBuffer=}16I24^^{__CVBuffer}28^{__CVOpenGLESTextureCache=}36
// Implementation: 0x10907b8c8

// -[SCImageProcessGLContext createTextureWithRGBPixelBuffer:textureUnit:textureRef:]
// Type encoding: I36@0:8^{__CVBuffer=}16I24^^{__CVBuffer}28
// Implementation: 0x10907ba74

// -[SCImageProcessGLContext createTexturesWithYUVPixelBuffer:lumaTextureUnit:chromaTextureUnit:lumaTextureRef:chromaTextureRef:lumaTextureId:chromaTextureId:textureCacheRef:]
// Type encoding: B72@0:8^{__CVBuffer=}16I24I28^^{__CVBuffer}32^^{__CVBuffer}40^I48^I56^{__CVOpenGLESTextureCache=}64
// Implementation: 0x10907ba7c

// -[SCImageProcessGLContext createTexturesWithYUVPixelBuffer:lumaTextureUnit:chromaTextureUnit:lumaTextureRef:chromaTextureRef:lumaTextureId:chromaTextureId:]
// Type encoding: B64@0:8^{__CVBuffer=}16I24I28^^{__CVBuffer}32^^{__CVBuffer}40^I48^I56
// Implementation: 0x10907bbf4

// -[SCImageProcessGLContext _setupYUVPixelBufferInputTextureWithLumaTexture:chromaTexture:lumaTextureUnit:chromaTextureUnit:]
// Type encoding: v32@0:8I16I20I24I28
// Implementation: 0x10907bc1c

// -[SCImageProcessGLContext _setupYUVPixelBufferInputTextureWithPixelBuffer:lumaTextureUnit:chromaTextureUnit:lumaTextureId:chromaTextureId:]
// Type encoding: B48@0:8^{__CVBuffer=}16I24I28^I32^I40
// Implementation: 0x10907bd1c

// -[SCImageProcessGLContext invalidateIntermediateTextureCache]
// Type encoding: v16@0:8
// Implementation: 0x10907bf70

// -[SCImageProcessGLContext namedIntermediateTexture:pixelWidth:pixelHeight:textureUnit:]
// Type encoding: I36@0:8@16I24I28I32
// Implementation: 0x10907bfa8

// -[SCImageProcessGLContext namedIntermediateTexture:pixelWidth:pixelHeight:textureUnit:data:]
// Type encoding: I44@0:8@16I24I28I32r^v36
// Implementation: 0x10907bfb0

// -[SCImageProcessGLContext createTextureWithImage:textureUnit:]
// Type encoding: I28@0:8^{CGImage=}16I24
// Implementation: 0x10907c23c

// -[SCImageProcessGLContext renderbufferStorage:fromDrawable:]
// Type encoding: B32@0:8Q16@24
// Implementation: 0x10907c32c

// -[SCImageProcessGLContext clearColor]
// Type encoding: v16@0:8
// Implementation: 0x10907c45c

// -[SCImageProcessGLContext clearColorWithTransparent:]
// Type encoding: v20@0:8B16
// Implementation: 0x10907c484

// -[SCImageProcessGLContext presentRenderbuffer]
// Type encoding: v16@0:8
// Implementation: 0x10907c4b4

// -[SCImageProcessGLContext sharegroup]
// Type encoding: @16@0:8
// Implementation: 0x10907c4c0

// -[SCImageProcessGLContext apiVersion]
// Type encoding: Q16@0:8
// Implementation: 0x10907c4c8

// -[SCImageProcessGLContext contextId]
// Type encoding: @16@0:8
// Implementation: 0x10907c4d0

// -[SCImageProcessGLContext textureCache]
// Type encoding: ^{__CVOpenGLESTextureCache=}16@0:8
// Implementation: 0x10907c4d8

// -[SCImageProcessGLContext outputSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10907c4e0

// -[SCImageProcessGLContext setOutputSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x10907c4e8

// -[SCImageProcessGLContext disableCATransactionFlush]
// Type encoding: B16@0:8
// Implementation: 0x10907c4f0

// -[SCImageProcessGLContext setDisableCATransactionFlush:]
// Type encoding: v20@0:8B16
// Implementation: 0x10907c4f8

// -[SCImageProcessGLContext .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10907c500

@end
