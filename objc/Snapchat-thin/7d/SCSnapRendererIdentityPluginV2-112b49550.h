// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapRendererIdentityPluginV2
// Superclass: NSObject
// Address: 0x112b49550

@interface SCSnapRendererIdentityPluginV2

// Property: supportsYUVInput; attributes: TB,R,N
// Property: textureType; attributes: Tq,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapRendererIdentityPluginV2 supportsYUVInput]
// Type encoding: B16@0:8
// Implementation: 0x106f319b4

// -[SCSnapRendererIdentityPluginV2 textureType]
// Type encoding: q16@0:8
// Implementation: 0x106f319bc

// -[SCSnapRendererIdentityPluginV2 prepareResourcesWithInputCount:snapInfo:]
// Type encoding: @32@0:8Q16@24
// Implementation: 0x106f319c4

// -[SCSnapRendererIdentityPluginV2 cleanUpResourcesAndReturnError:]
// Type encoding: B24@0:8^@16
// Implementation: 0x106f319d8

// -[SCSnapRendererIdentityPluginV2 reset]
// Type encoding: v16@0:8
// Implementation: 0x106f319e0

// -[SCSnapRendererIdentityPluginV2 isWarmingUpWithVideoInputsRequired]
// Type encoding: B16@0:8
// Implementation: 0x106f319e4

// -[SCSnapRendererIdentityPluginV2 warmupWithVideoInputs:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f319ec

// -[SCSnapRendererIdentityPluginV2 processVideoInputs:inputTextures:outputTexture:timestamp:error:]
// Type encoding: @72@0:8@16@24@32{?=qiIq}40^@64
// Implementation: 0x106f31a00

// -[SCSnapRendererIdentityPluginV2 renderStaticOverlayWithSize:error:]
// Type encoding: @40@0:8{CGSize=dd}16^@32
// Implementation: 0x106f31a94

// -[SCSnapRendererIdentityPluginV2 processingMetadataApplier]
// Type encoding: @16@0:8
// Implementation: 0x106f31a9c

@end
