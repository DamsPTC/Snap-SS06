// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapRendererRepostOverlayPlugin
// Superclass: NSObject
// Address: 0x112925240

@interface SCSnapRendererRepostOverlayPlugin

// Property: supportsYUVInput; attributes: TB,N,R
// Property: textureType; attributes: Tq,N,R

// -[SCSnapRendererRepostOverlayPlugin supportsYUVInput]
// Type encoding: B16@0:8
// Implementation: 0x103ad1a38

// -[SCSnapRendererRepostOverlayPlugin textureType]
// Type encoding: q16@0:8
// Implementation: 0x103ad1a40

// -[SCSnapRendererRepostOverlayPlugin prepareResourcesWithInputCount:snapInfo:]
// Type encoding: @32@0:8Q16@24
// Implementation: 0x103ad1a48

// -[SCSnapRendererRepostOverlayPlugin isWarmingUpWithVideoInputsRequired]
// Type encoding: B16@0:8
// Implementation: 0x103ad1a5c

// -[SCSnapRendererRepostOverlayPlugin warmupWithVideoInputs:]
// Type encoding: @24@0:8@16
// Implementation: 0x103ad1a64

// -[SCSnapRendererRepostOverlayPlugin processVideoInputs:inputTextures:outputTexture:timestamp:error:]
// Type encoding: @72@0:8@16@24@32{?=qiIq}40^@64
// Implementation: 0x103ad27f0

// -[SCSnapRendererRepostOverlayPlugin renderStaticOverlayWithSize:error:]
// Type encoding: @40@0:8{CGSize=dd}16^@32
// Implementation: 0x103ad2c34

// -[SCSnapRendererRepostOverlayPlugin processingMetadataApplier]
// Type encoding: @16@0:8
// Implementation: 0x103ad2c88

// -[SCSnapRendererRepostOverlayPlugin cleanUpResourcesAndReturnError:]
// Type encoding: B24@0:8^@16
// Implementation: 0x103ad2c90

// -[SCSnapRendererRepostOverlayPlugin reset]
// Type encoding: v16@0:8
// Implementation: 0x103ad2ce0

// -[SCSnapRendererRepostOverlayPlugin init]
// Type encoding: @16@0:8
// Implementation: 0x103ad2ce4

// -[SCSnapRendererRepostOverlayPlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x103ad2d44

@end
