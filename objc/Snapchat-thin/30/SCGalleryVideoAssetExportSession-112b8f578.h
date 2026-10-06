// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGalleryVideoAssetExportSession
// Superclass: NSObject
// Address: 0x112b8f578

@interface SCGalleryVideoAssetExportSession

// Property: optimizesForNetworkUse; attributes: TB,N,V_optimizesForNetworkUse
// Property: presetName; attributes: T@"NSString",&,N,V_presetName
// Property: degradeQualityForSlowMotionVideo; attributes: TB,N,V_degradeQualityForSlowMotionVideo

// -[SCGalleryVideoAssetExportSession initWithImageManager:videoAsset:useVideoImportServices:videoImporter:userTrackedLogger:circumstanceEngine:]
// Type encoding: @60@0:8@16@24B32@36@44@52
// Implementation: 0x107f6abec

// -[SCGalleryVideoAssetExportSession dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107f6ad70

// -[SCGalleryVideoAssetExportSession exportWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107f6add4

// -[SCGalleryVideoAssetExportSession exportWithCompletionQueue:progress:completionHandler:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x107f6ade0

// -[SCGalleryVideoAssetExportSession cancelExport]
// Type encoding: v16@0:8
// Implementation: 0x107f6b4c0

// -[SCGalleryVideoAssetExportSession _handleImportedAVAsset:progress:importServices:importInfo:completionQueue:startTime:]
// Type encoding: v64@0:8@16@?24@32@40@48d56
// Implementation: 0x107f6b4e8

// -[SCGalleryVideoAssetExportSession _handleSloMoImportedAVComposition:metadata:externalMediaSource:progress:importServices:importInfo:completionQueue:startTime:]
// Type encoding: v76@0:8@16@24i32@?36@44@52@60d68
// Implementation: 0x107f6c158

// -[SCGalleryVideoAssetExportSession _completeWithVideoURL:rotationOrientation:metadata:externalMediaSource:error:]
// Type encoding: v52@0:8@16q24@32i40@44
// Implementation: 0x107f6c60c

// -[SCGalleryVideoAssetExportSession _isCancelled]
// Type encoding: B16@0:8
// Implementation: 0x107f6c788

// -[SCGalleryVideoAssetExportSession _handleCancellation]
// Type encoding: v16@0:8
// Implementation: 0x107f6c7a8

// -[SCGalleryVideoAssetExportSession optimizesForNetworkUse]
// Type encoding: B16@0:8
// Implementation: 0x107f6c8e4

// -[SCGalleryVideoAssetExportSession setOptimizesForNetworkUse:]
// Type encoding: v20@0:8B16
// Implementation: 0x107f6c8ec

// -[SCGalleryVideoAssetExportSession presetName]
// Type encoding: @16@0:8
// Implementation: 0x107f6c8f4

// -[SCGalleryVideoAssetExportSession setPresetName:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f6c8fc

// -[SCGalleryVideoAssetExportSession degradeQualityForSlowMotionVideo]
// Type encoding: B16@0:8
// Implementation: 0x107f6c92c

// -[SCGalleryVideoAssetExportSession setDegradeQualityForSlowMotionVideo:]
// Type encoding: v20@0:8B16
// Implementation: 0x107f6c934

// -[SCGalleryVideoAssetExportSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107f6c93c

@end
