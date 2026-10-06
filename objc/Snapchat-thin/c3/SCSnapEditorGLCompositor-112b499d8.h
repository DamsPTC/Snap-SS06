// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapEditorGLCompositor
// Superclass: NSObject
// Address: 0x112b499d8

@interface SCSnapEditorGLCompositor


// -[SCSnapEditorGLCompositor init]
// Type encoding: @16@0:8
// Implementation: 0x106f44950

// -[SCSnapEditorGLCompositor dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106f449a8

// -[SCSnapEditorGLCompositor setInputFrameZoom:]
// Type encoding: v20@0:8f16
// Implementation: 0x106f449ec

// -[SCSnapEditorGLCompositor prepareOverlayWidth:height:error:]
// Type encoding: B32@0:8i16i20^@24
// Implementation: 0x106f44a04

// -[SCSnapEditorGLCompositor uploadOverlayFullBitmap:width:height:bytesPerRow:]
// Type encoding: v36@0:8r^v16i24i28i32
// Implementation: 0x106f44dd8

// -[SCSnapEditorGLCompositor uploadOverlayDirtyRectX:y:width:height:fromBitmap:bytesPerRow:]
// Type encoding: B44@0:8i16i20i24i28r^v32i40
// Implementation: 0x106f44ed4

// -[SCSnapEditorGLCompositor compositeBGRAVideoOnUnit0WithOutputSize:error:]
// Type encoding: B40@0:8{?=QQ}16^@32
// Implementation: 0x106f45014

// -[SCSnapEditorGLCompositor compositeYUVVideoPixelBuffer:colorMatrix:outputSize:error:]
// Type encoding: B56@0:8^{__CVBuffer=}16q24{?=QQ}32^@48
// Implementation: 0x106f45260

// -[SCSnapEditorGLCompositor unload]
// Type encoding: v16@0:8
// Implementation: 0x106f459a0

// -[SCSnapEditorGLCompositor _ensureBGRAProgramLoadedWithError:]
// Type encoding: B24@0:8^@16
// Implementation: 0x106f45a20

// -[SCSnapEditorGLCompositor _ensureYUVProgramLoadedWithError:]
// Type encoding: B24@0:8^@16
// Implementation: 0x106f45fd0

@end
