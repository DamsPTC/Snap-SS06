// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCachingMediaGallerySnap
// Superclass: NSObject
// Address: 0x112a75c78

@interface SCCachingMediaGallerySnap

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCachingMediaGallerySnap debugDescription]
// Type encoding: @16@0:8
// Implementation: 0x1058c40a0

// -[SCCachingMediaGallerySnap initWithSnap:snapDetail:userSession:memoriesThumbnailLogger:galleryLogger:memoriesCloudFS:dataObjectContext:galleryEncryptedDatabase:keyService:memoriesCachingMediaHelper:circumstanceEngine:memoriesExperimentService:userTrackedLogger:memoriesSnapDocThumbnailGenerator:snapDocDownloadingService:liveRenderingMetricsRecorder:]
// Type encoding: @144@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136
// Implementation: 0x1058c4118

// -[SCCachingMediaGallerySnap UUID]
// Type encoding: @16@0:8
// Implementation: 0x1058c45ec

// -[SCCachingMediaGallerySnap maxSourceLevel]
// Type encoding: q16@0:8
// Implementation: 0x1058c4614

// -[SCCachingMediaGallerySnap higherSourceLevelAvailable:]
// Type encoding: q24@0:8q16
// Implementation: 0x1058c461c

// -[SCCachingMediaGallerySnap imageFormat]
// Type encoding: Q16@0:8
// Implementation: 0x1058c4754

// -[SCCachingMediaGallerySnap shouldCompleteGenerationWhenCancelled]
// Type encoding: B16@0:8
// Implementation: 0x1058c475c

// -[SCCachingMediaGallerySnap mediaEncryption]
// Type encoding: @16@0:8
// Implementation: 0x1058c4838

// -[SCCachingMediaGallerySnap cachingMediaManager:requiredSourceLevel:requestOptions:atIndex:sourceImagesResultHandler:]
// Type encoding: @56@0:8@16q24@32q40@?48
// Implementation: 0x1058c4bf0

// -[SCCachingMediaGallerySnap _requestForSnapDocBasedSnapWithSnap:detail:requiredSourceLevel:generationId:userSession:galleryLogger:dataObjectContext:memoriesCachingMediaHelper:memoriesSnapDocThumbnailGenerator:memoriesCloudFS:requestOptions:memoriesThumbnailLogger:galleryEncryptedDatabase:keyService:snapDocDownloadingService:resultHandler:]
// Type encoding: @144@0:8@16@24q32@40@48@56@64@72@80@88@96@104@112@120@128@?136
// Implementation: 0x1058c54fc

// -[SCCachingMediaGallerySnap .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1058c7104

@end
