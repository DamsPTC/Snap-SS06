// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensProcessingSharedTranscodingWorkflow
// Superclass: NSObject
// Address: 0x112bbc988

@interface SCLensProcessingSharedTranscodingWorkflow

// Property: isTranscoding; attributes: TB,V_isTranscoding
// Property: isPreviewVisible; attributes: TB,N
// Property: didFinishTranscodingFuture; attributes: T@"SCFuture",R,N,V_didFinishTranscodingFuture
// Property: videoPlayback; attributes: T@"SCLazy",W,V_videoPlayback
// Property: imagePlayback; attributes: T@"SCLazy",W,V_imagePlayback
// Property: cachedEffectId; attributes: T@"NSString",&,VcachedEffectId
// Property: cachedVideoURLPromise; attributes: T@"SCPromise",&,VcachedVideoURLPromise
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensProcessingSharedTranscodingWorkflow initWithStudySettingsProvider:didEnterBackgroundObservable:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10047041c

// -[SCLensProcessingSharedTranscodingWorkflow dealloc]
// Type encoding: v16@0:8
// Implementation: 0x108cade58

// -[SCLensProcessingSharedTranscodingWorkflow setIsPreviewVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x108cadea0

// -[SCLensProcessingSharedTranscodingWorkflow isPreviewVisible]
// Type encoding: B16@0:8
// Implementation: 0x108cadeec

// -[SCLensProcessingSharedTranscodingWorkflow willStartTranscodingVideoWithLensIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cadf20

// -[SCLensProcessingSharedTranscodingWorkflow didEndTranscodingVideo]
// Type encoding: v16@0:8
// Implementation: 0x108cae1e0

// -[SCLensProcessingSharedTranscodingWorkflow clearCachedTranscodingState]
// Type encoding: v16@0:8
// Implementation: 0x108cae3f8

// -[SCLensProcessingSharedTranscodingWorkflow _didEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x108cae424

// -[SCLensProcessingSharedTranscodingWorkflow cachedEffectId]
// Type encoding: @16@0:8
// Implementation: 0x108cae5a8

// -[SCLensProcessingSharedTranscodingWorkflow setCachedEffectId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cae5b4

// -[SCLensProcessingSharedTranscodingWorkflow cachedVideoURLPromise]
// Type encoding: @16@0:8
// Implementation: 0x108cae5bc

// -[SCLensProcessingSharedTranscodingWorkflow setCachedVideoURLPromise:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cae5c8

// -[SCLensProcessingSharedTranscodingWorkflow didFinishTranscodingFuture]
// Type encoding: @16@0:8
// Implementation: 0x108cae5d0

// -[SCLensProcessingSharedTranscodingWorkflow videoPlayback]
// Type encoding: @16@0:8
// Implementation: 0x108cae5d8

// -[SCLensProcessingSharedTranscodingWorkflow setVideoPlayback:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cae5f0

// -[SCLensProcessingSharedTranscodingWorkflow imagePlayback]
// Type encoding: @16@0:8
// Implementation: 0x108cae5fc

// -[SCLensProcessingSharedTranscodingWorkflow setImagePlayback:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cae614

// -[SCLensProcessingSharedTranscodingWorkflow isTranscoding]
// Type encoding: B16@0:8
// Implementation: 0x108cae620

// -[SCLensProcessingSharedTranscodingWorkflow setIsTranscoding:]
// Type encoding: v20@0:8B16
// Implementation: 0x108cae62c

// -[SCLensProcessingSharedTranscodingWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108cae634

@end
