// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGalleryVideoAssetSegmentedExportSession
// Superclass: NSObject
// Address: 0x112b8f5c8

@interface SCGalleryVideoAssetSegmentedExportSession

// Property: optimizesForNetworkUse; attributes: TB,N,V_optimizesForNetworkUse
// Property: progressContainerViewController; attributes: T@"UIViewController",W,N,V_progressContainerViewController

// -[SCGalleryVideoAssetSegmentedExportSession initWithImageManager:videoAsset:segmentDuration:useVideoImportServices:videoImporter:userTrackedLogger:circumstanceEngine:]
// Type encoding: @68@0:8@16@24d32B40@44@52@60
// Implementation: 0x107f6c9fc

// -[SCGalleryVideoAssetSegmentedExportSession exportWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107f6cb74

// -[SCGalleryVideoAssetSegmentedExportSession _exportSegmentAtIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107f6d494

// -[SCGalleryVideoAssetSegmentedExportSession _exportSegmentAtIndex:passthroughExportPresetEnabled:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x107f6d4c4

// -[SCGalleryVideoAssetSegmentedExportSession _completeWithVideoURL:segmentURLs:orientation:metadata:externalMediaSource:error:]
// Type encoding: v60@0:8@16@24q32@40i48@52
// Implementation: 0x107f6d9e4

// -[SCGalleryVideoAssetSegmentedExportSession _enablePassthroughExportPreset]
// Type encoding: B16@0:8
// Implementation: 0x107f6dd64

// -[SCGalleryVideoAssetSegmentedExportSession _shouldEnabledCameraRollNoAudioFixWithInputAsset:outputURL:currentPreset:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x107f6dd84

// -[SCGalleryVideoAssetSegmentedExportSession optimizesForNetworkUse]
// Type encoding: B16@0:8
// Implementation: 0x107f6de68

// -[SCGalleryVideoAssetSegmentedExportSession setOptimizesForNetworkUse:]
// Type encoding: v20@0:8B16
// Implementation: 0x107f6de70

// -[SCGalleryVideoAssetSegmentedExportSession progressContainerViewController]
// Type encoding: @16@0:8
// Implementation: 0x107f6de78

// -[SCGalleryVideoAssetSegmentedExportSession setProgressContainerViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f6de90

// -[SCGalleryVideoAssetSegmentedExportSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107f6de9c

@end
