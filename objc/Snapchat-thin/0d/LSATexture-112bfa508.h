// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSATexture
// Superclass: NSObject
// Address: 0x112bfa508

@interface LSATexture

// Property: context; attributes: T@"EAGLContext",R,N
// Property: textureId; attributes: Ti,R,N
// Property: metalTextureId; attributes: T@"<MTLTexture>",R,N
// Property: size; attributes: T{CGSize=dd},R,N

// -[LSATexture initWithCoreTextureWithTransform:context:deallocPerformer:enableMetalExperiment:]
// Type encoding: @52@0:8{shared_ptr<LS::TextureWithTransform>=^{TextureWithTransform}^{__shared_weak_count}}16^v32@40B48
// Implementation: 0x10ade22a0

// -[LSATexture dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10ade25b8

// -[LSATexture textureId]
// Type encoding: i16@0:8
// Implementation: 0x10ade2abc

// -[LSATexture metalTextureId]
// Type encoding: @16@0:8
// Implementation: 0x10ade2be0

// -[LSATexture textureTransform]
// Type encoding: {mat<3, 3, float, glm::packed_highp>=[3{vec<3, float, glm::packed_highp>=(?=fff)(?=fff)(?=fff)}]}16@0:8
// Implementation: 0x10ade2c08

// -[LSATexture size]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10ade2c5c

// -[LSATexture texture]
// Type encoding: {shared_ptr<LS::TextureWithTransform>=^{TextureWithTransform}^{__shared_weak_count}}16@0:8
// Implementation: 0x10ade2cb0

// -[LSATexture mtlCommandQueue]
// Type encoding: @16@0:8
// Implementation: 0x10ade2cd8

// -[LSATexture normalizedTexture]
// Type encoding: {shared_ptr<LS::TextureBase>=^{TextureBase}^{__shared_weak_count}}16@0:8
// Implementation: 0x10ade2d00

// -[LSATexture context]
// Type encoding: @16@0:8
// Implementation: 0x10ade2dc0

// -[LSATexture .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10ade2de8

// -[LSATexture .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10ade2e48

// +[LSATexture textureWithCoreTextureWithTransform:context:deallocPerformer:enableMetalExperiment:]
// Type encoding: @52@0:8{shared_ptr<LS::TextureWithTransform>=^{TextureWithTransform}^{__shared_weak_count}}16^v32@40B48
// Implementation: 0x10ade2044

// +[LSATexture textureWithCoreTexture:context:deallocPerformer:enableMetalExperiment:]
// Type encoding: @52@0:8{shared_ptr<LS::TextureBase>=^{TextureBase}^{__shared_weak_count}}16^v32@40B48
// Implementation: 0x10ade2124

@end
