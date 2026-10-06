// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensProcessingSharedDirtyFrameProvider
// Superclass: NSObject
// Address: 0x112bbc8e8

@interface SCLensProcessingSharedDirtyFrameProvider

// Property: pendingFramesCount; attributes: TQ,V_pendingFramesCount
// Property: continuousRenderingController; attributes: T@"SCLazy",W,V_continuousRenderingController
// Property: isCurrentFrameDirty; attributes: TB,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensProcessingSharedDirtyFrameProvider init]
// Type encoding: @16@0:8
// Implementation: 0x1004703b0

// -[SCLensProcessingSharedDirtyFrameProvider isCurrentFrameDirty]
// Type encoding: B16@0:8
// Implementation: 0x108cad77c

// -[SCLensProcessingSharedDirtyFrameProvider markCurrentFrameAsDirty]
// Type encoding: v16@0:8
// Implementation: 0x108cad798

// -[SCLensProcessingSharedDirtyFrameProvider markCurrentFrameAsDirtyCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108cad880

// -[SCLensProcessingSharedDirtyFrameProvider markCurrentFrameAsDirtyIfPending]
// Type encoding: v16@0:8
// Implementation: 0x108cad8bc

// -[SCLensProcessingSharedDirtyFrameProvider setContinuousRenderingEnabled:contextId:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x108cad904

// -[SCLensProcessingSharedDirtyFrameProvider resetContinuousRenderingForEffectId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cada60

// -[SCLensProcessingSharedDirtyFrameProvider continuousRenderingController]
// Type encoding: @16@0:8
// Implementation: 0x108cadbd4

// -[SCLensProcessingSharedDirtyFrameProvider setContinuousRenderingController:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cadbec

// -[SCLensProcessingSharedDirtyFrameProvider pendingFramesCount]
// Type encoding: Q16@0:8
// Implementation: 0x108cadbf8

// -[SCLensProcessingSharedDirtyFrameProvider setPendingFramesCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108cadc00

// -[SCLensProcessingSharedDirtyFrameProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108cadc08

@end
