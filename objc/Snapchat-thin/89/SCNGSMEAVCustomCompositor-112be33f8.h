// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNGSMEAVCustomCompositor
// Superclass: NSObject
// Address: 0x112be33f8

@interface SCNGSMEAVCustomCompositor

// Property: playbackMode; attributes: TB,N,V_playbackMode
// Property: renderInputImagesAsBGRA; attributes: TB,N,V_renderInputImagesAsBGRA
// Property: sessionTextureCacheEnabled; attributes: TB,N,V_sessionTextureCacheEnabled
// Property: sourcePixelBufferAttributes; attributes: T@"NSDictionary",R,N
// Property: requiredPixelBufferAttributesForRenderContext; attributes: T@"NSDictionary",R,N
// Property: supportsWideColorSourceFrames; attributes: TB,?,R,N
// Property: supportsHDRSourceFrames; attributes: TB,?,R,N
// Property: supportsSourceTaggedBuffers; attributes: TB,?,R,N
// Property: canConformColorOfSourceFrames; attributes: TB,?,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNGSMEAVCustomCompositor init]
// Type encoding: @16@0:8
// Implementation: 0x10905a280

// -[SCNGSMEAVCustomCompositor dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10905a350

// -[SCNGSMEAVCustomCompositor sourcePixelBufferAttributes]
// Type encoding: @16@0:8
// Implementation: 0x10905a3a4

// -[SCNGSMEAVCustomCompositor requiredPixelBufferAttributesForRenderContext]
// Type encoding: @16@0:8
// Implementation: 0x10905a438

// -[SCNGSMEAVCustomCompositor setRenderSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x10905a4cc

// -[SCNGSMEAVCustomCompositor setTotalDuration:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x10905a4d8

// -[SCNGSMEAVCustomCompositor setExpectedVideoTrackIDs:]
// Type encoding: v24@0:8@16
// Implementation: 0x10905a51c

// -[SCNGSMEAVCustomCompositor setHasSegmentTransform:]
// Type encoding: v20@0:8B16
// Implementation: 0x10905a54c

// -[SCNGSMEAVCustomCompositor setRenderInputImagesAsBGRA:]
// Type encoding: v20@0:8B16
// Implementation: 0x10905a554

// -[SCNGSMEAVCustomCompositor setSessionTextureCacheEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10905a5a0

// -[SCNGSMEAVCustomCompositor addSegmentInfoForTrackID:ngsmeInputID:timeRanges:images:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10905a5ac

// -[SCNGSMEAVCustomCompositor setRenderEffects:]
// Type encoding: v24@0:8@16
// Implementation: 0x10905a5b4

// -[SCNGSMEAVCustomCompositor copyLastComposedPixelBuffer]
// Type encoding: ^{__CVBuffer=}16@0:8
// Implementation: 0x10905a690

// -[SCNGSMEAVCustomCompositor renderContextChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x10905a758

// -[SCNGSMEAVCustomCompositor startVideoCompositionRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10905a824

// -[SCNGSMEAVCustomCompositor _shouldEnableRenderPassGraphFlow]
// Type encoding: B16@0:8
// Implementation: 0x10905a8ec

// -[SCNGSMEAVCustomCompositor _processCompositionRequestSingleTrackFlow:]
// Type encoding: v24@0:8@16
// Implementation: 0x10905a978

// -[SCNGSMEAVCustomCompositor _processCompositionRequestMultiTrackFlow:]
// Type encoding: v24@0:8@16
// Implementation: 0x10905ae80

// -[SCNGSMEAVCustomCompositor _reinitializeSingleInputProcessor]
// Type encoding: v16@0:8
// Implementation: 0x10905b6ac

// -[SCNGSMEAVCustomCompositor _isAtLastImageEnd:imageTimeRanges:]
// Type encoding: B48@0:8{?=qiIq}16@40
// Implementation: 0x10905b874

// -[SCNGSMEAVCustomCompositor playbackMode]
// Type encoding: B16@0:8
// Implementation: 0x10905b960

// -[SCNGSMEAVCustomCompositor setPlaybackMode:]
// Type encoding: v20@0:8B16
// Implementation: 0x10905b968

// -[SCNGSMEAVCustomCompositor renderInputImagesAsBGRA]
// Type encoding: B16@0:8
// Implementation: 0x10905b970

// -[SCNGSMEAVCustomCompositor sessionTextureCacheEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10905b978

// -[SCNGSMEAVCustomCompositor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10905b980

@end
