// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNGSMEVideoAssetMutator
// Superclass: NSObject
// Address: 0x112be76b0

@interface SCNGSMEVideoAssetMutator

// Property: ngsmeSnap; attributes: T@"SCNGSMESnap",R,N,V_ngsmeSnap
// Property: videoRenderSize; attributes: T{CGSize=dd},R,N,V_videoRenderSize
// Property: singleAssetPreferredTransform; attributes: T{CGAffineTransform=dddddd},R,N,V_singleAssetPreferredTransform
// Property: ignoreSegmentTransform; attributes: TB,R,N,V_ignoreSegmentTransform
// Property: useMinimalPlaceholderVideo; attributes: TB,N,V_useMinimalPlaceholderVideo
// Property: alignVideoCompositionFrameDurationToSourceTimescale; attributes: TB,N,V_alignVideoCompositionFrameDurationToSourceTimescale
// Property: videoCompositionFrameRateOverride; attributes: TQ,N,V_videoCompositionFrameRateOverride

// -[SCNGSMEVideoAssetMutator generateMutatedVideoAndImagePlayerItemWithErrorType:shouldRenderInternally:circumstanceEngine:]
// Type encoding: {?=@@{CGAffineTransform=dddddd}}36@0:8^q16B24@28
// Implementation: 0x108586e98

// -[SCNGSMEVideoAssetMutator generateAssetReaderVideoCompositionOutputWithMutatorOutput:errorType:shouldRunIPPThroughCustomCompositor:circumstanceEngine:]
// Type encoding: @44@0:8@16^q24B32@36
// Implementation: 0x1085872b8

// -[SCNGSMEVideoAssetMutator _shouldClearUnusedCompositionForInternalRender:compositor:videoTrackContainsHDR:circumstanceEngine:]
// Type encoding: B40@0:8B16@20B28@32
// Implementation: 0x1085875d4

// -[SCNGSMEVideoAssetMutator _shouldSetupCustomCompositor:shouldRunIPPThroughCustomCompositor:]
// Type encoding: B28@0:8@16B24
// Implementation: 0x1085876ac

// -[SCNGSMEVideoAssetMutator _hasRenderEffects:]
// Type encoding: B24@0:8@16
// Implementation: 0x108587948

// -[SCNGSMEVideoAssetMutator _hasOnlyIdentityCommand:]
// Type encoding: B24@0:8@16
// Implementation: 0x108587a50

// -[SCNGSMEVideoAssetMutator _videoProcessorWithErrorType:renderInputImagesAsBGRA:sessionTextureCacheEnabled:]
// Type encoding: @32@0:8^q16B24B28
// Implementation: 0x108587c54

// -[SCNGSMEVideoAssetMutator _buildCustomCompositor:videoTrackIDs:circumstanceEngine:withErrorType:setRenderEffects:playbackMode:]
// Type encoding: v56@0:8@16@24@32^q40B48B52
// Implementation: 0x108588384

// -[SCNGSMEVideoAssetMutator _updateZeroDurationRenderEffectDags:]
// Type encoding: @24@0:8@16
// Implementation: 0x108588c60

// -[SCNGSMEVideoAssetMutator initWithNGSMESnap:videoRenderSize:ignoreSegmentTransform:recordDetailedErrors:]
// Type encoding: @48@0:8@16{CGSize=dd}24B40B44
// Implementation: 0x10911479c

// -[SCNGSMEVideoAssetMutator generateMutatedVideoAssetWithErrorType:isForPlayback:]
// Type encoding: @28@0:8^q16B24
// Implementation: 0x109114990

// -[SCNGSMEVideoAssetMutator NGSMEInputIdToTrackId]
// Type encoding: @16@0:8
// Implementation: 0x109114a9c

// -[SCNGSMEVideoAssetMutator _setUpAudiotracksInComposition:audioRenderDAGs:withErrorType:isForPlayback:]
// Type encoding: v44@0:8@16@24^q32B40
// Implementation: 0x109114ac4

// -[SCNGSMEVideoAssetMutator _singleAudioTrackToTranscode:audioRenderDAG:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10911513c

// -[SCNGSMEVideoAssetMutator _setUpVideoTracksInComposition:isForPlayback:withErrorType:]
// Type encoding: @36@0:8@16B24^q28
// Implementation: 0x1091153f8

// -[SCNGSMEVideoAssetMutator _insertNGSMESegment:toTrack:ofMediaType:withOrientationLayerInstruction:withTransformLayerInstruction:isForPlayback:withErrorType:]
// Type encoding: v68@0:8@16@24@32@40@48B56^q60
// Implementation: 0x109115d80

// -[SCNGSMEVideoAssetMutator _loadPlaceHolderAssetIfNecessary]
// Type encoding: @16@0:8
// Implementation: 0x1091170c0

// -[SCNGSMEVideoAssetMutator aggregatedErrorDetails]
// Type encoding: @16@0:8
// Implementation: 0x109117114

// -[SCNGSMEVideoAssetMutator ngsmeSnap]
// Type encoding: @16@0:8
// Implementation: 0x1091171c0

// -[SCNGSMEVideoAssetMutator videoRenderSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x1091171c8

// -[SCNGSMEVideoAssetMutator singleAssetPreferredTransform]
// Type encoding: {CGAffineTransform=dddddd}16@0:8
// Implementation: 0x1091171d0

// -[SCNGSMEVideoAssetMutator ignoreSegmentTransform]
// Type encoding: B16@0:8
// Implementation: 0x1091171e4

// -[SCNGSMEVideoAssetMutator useMinimalPlaceholderVideo]
// Type encoding: B16@0:8
// Implementation: 0x1091171ec

// -[SCNGSMEVideoAssetMutator setUseMinimalPlaceholderVideo:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091171f4

// -[SCNGSMEVideoAssetMutator alignVideoCompositionFrameDurationToSourceTimescale]
// Type encoding: B16@0:8
// Implementation: 0x1091171fc

// -[SCNGSMEVideoAssetMutator setAlignVideoCompositionFrameDurationToSourceTimescale:]
// Type encoding: v20@0:8B16
// Implementation: 0x109117204

// -[SCNGSMEVideoAssetMutator videoCompositionFrameRateOverride]
// Type encoding: Q16@0:8
// Implementation: 0x10911720c

// -[SCNGSMEVideoAssetMutator setVideoCompositionFrameRateOverride:]
// Type encoding: v24@0:8Q16
// Implementation: 0x109117214

// -[SCNGSMEVideoAssetMutator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10911721c

// +[SCNGSMEVideoAssetMutator audioMixForSnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x109114e1c

@end
