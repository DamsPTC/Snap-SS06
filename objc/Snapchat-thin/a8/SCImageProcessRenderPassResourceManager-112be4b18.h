// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessRenderPassResourceManager
// Superclass: NSObject
// Address: 0x112be4b18

@interface SCImageProcessRenderPassResourceManager


// -[SCImageProcessRenderPassResourceManager initWithRenderPasses:context:pixelBufferPoolRef:textureCacheHolder:outputRenderer:GPUAvailable:]
// Type encoding: @60@0:8@16@24^{__CVPixelBufferPool=}32@40@48B56
// Implementation: 0x1090828b8

// -[SCImageProcessRenderPassResourceManager dealloc]
// Type encoding: v16@0:8
// Implementation: 0x109082a44

// -[SCImageProcessRenderPassResourceManager createTextureForId:contentIsUnchanged:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x109082a8c

// -[SCImageProcessRenderPassResourceManager textureToReadForId:]
// Type encoding: @24@0:8@16
// Implementation: 0x109082b00

// -[SCImageProcessRenderPassResourceManager pixelBufferPool]
// Type encoding: ^{__CVPixelBufferPool=}16@0:8
// Implementation: 0x109082b08

// -[SCImageProcessRenderPassResourceManager glTextureCache]
// Type encoding: ^{__CVOpenGLESTextureCache=}16@0:8
// Implementation: 0x109082b10

// -[SCImageProcessRenderPassResourceManager textureCacheHolder]
// Type encoding: @16@0:8
// Implementation: 0x109082b18

// -[SCImageProcessRenderPassResourceManager ippContext]
// Type encoding: @16@0:8
// Implementation: 0x109082b40

// -[SCImageProcessRenderPassResourceManager glFrameBuffer]
// Type encoding: I16@0:8
// Implementation: 0x109082b68

// -[SCImageProcessRenderPassResourceManager outputRenderer]
// Type encoding: @16@0:8
// Implementation: 0x109082b70

// -[SCImageProcessRenderPassResourceManager _setupGLFrameBufferIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x109082b98

// -[SCImageProcessRenderPassResourceManager _shouldSetupGLResources]
// Type encoding: B16@0:8
// Implementation: 0x109082c6c

// -[SCImageProcessRenderPassResourceManager _containsGLRenderPass:]
// Type encoding: B24@0:8@16
// Implementation: 0x109082c8c

// -[SCImageProcessRenderPassResourceManager flushAndCleanUp]
// Type encoding: v16@0:8
// Implementation: 0x109082cbc

// -[SCImageProcessRenderPassResourceManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109082d38

@end
