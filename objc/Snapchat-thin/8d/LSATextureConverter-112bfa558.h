// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSATextureConverter
// Superclass: NSObject
// Address: 0x112bfa558

@interface LSATextureConverter


// -[LSATextureConverter initWithYUVFormat:openGLPerformer:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x10ade2e5c

// -[LSATextureConverter prepareConvertorsForInputSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x10ade2f18

// -[LSATextureConverter getRGBTextureFromYTexture:UVTexture:size:context:]
// Type encoding: @72@0:8{shared_ptr<LS::TextureBase>=^{TextureBase}^{__shared_weak_count}}16{shared_ptr<LS::TextureBase>=^{TextureBase}^{__shared_weak_count}}32{CGSize=dd}48^v64
// Implementation: 0x10ade3020

// -[LSATextureConverter getYUVTextureFromRgbTexture:size:context:]
// Type encoding: @56@0:8{shared_ptr<LS::TextureBase>=^{TextureBase}^{__shared_weak_count}}16{CGSize=dd}32^v48
// Implementation: 0x10ade316c

// -[LSATextureConverter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10ade3478

// -[LSATextureConverter .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10ade34cc

@end
