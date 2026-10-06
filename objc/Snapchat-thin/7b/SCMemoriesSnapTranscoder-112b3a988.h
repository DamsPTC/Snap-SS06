// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesSnapTranscoder
// Superclass: NSObject
// Address: 0x112b3a988

@interface SCMemoriesSnapTranscoder


// -[SCMemoriesSnapTranscoder initWithDataObjectContext:memoriesCloudFS:userSession:spectaclesAuxiliaryContentServices:previewAssetVideoProviderFactory:targetTrajectoryFactory:musicMediaLoader:imageToVideoWriterScopeExposer:imageToVideoWriterScopeServices:snapVideoFilterScopeExposer:encryptedContentManager:memoriesCachingMediaManager:memoriesTranscodingHelper:contentDelivery:musicSelectionLoader:grapheneRegistry:circumstanceEngine:watermarkGenerator:shouldWatermarkStaticImages:watermarkType:performer:snapDocDownloadingService:memoriesExperimentService:memoriesSnapDocTranscodingManager:]
// Type encoding: @204@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152B160q164@172@180@188@196
// Implementation: 0x106df8698

// -[SCMemoriesSnapTranscoder _transcodeSnapDoc:snap:watermarkProfile:videoCompletion:imageCompletion:errorCompletion:]
// Type encoding: v64@0:8@16@24@32@?40@?48@?56
// Implementation: 0x106df8b58

// -[SCMemoriesSnapTranscoder transcodeGallerySnap:watermarkProfile:imageCompletion:videoCompletion:videoTranscodeProgressCompletion:errorCompletion:]
// Type encoding: v64@0:8@16@24@?32@?40@?48@?56
// Implementation: 0x106df8df8

// -[SCMemoriesSnapTranscoder transcodeGalleryItem:imageCompletion:videoCompletion:errorCompletion:]
// Type encoding: v48@0:8@16@?24@?32@?40
// Implementation: 0x106df910c

// -[SCMemoriesSnapTranscoder transcodeStoriesToVideoWithGallerySnap:videoTranscodeProgressCompletion:videoCompletion:errorCompletion:]
// Type encoding: v48@0:8@16@?24@?32@?40
// Implementation: 0x106df92ac

// -[SCMemoriesSnapTranscoder _transcodeStoriesLegacyForSnap:videoTranscodeProgressCompletion:videoCompletion:errorCompletion:]
// Type encoding: v48@0:8@16@?24@?32@?40
// Implementation: 0x106df982c

// -[SCMemoriesSnapTranscoder _transcodeImageSnap:watermarkProfile:imageCompletion:videoCompletion:videoTranscodeProgressCompletion:errorCompletion:]
// Type encoding: v64@0:8@16@24@?32@?40@?48@?56
// Implementation: 0x106df9a88

// -[SCMemoriesSnapTranscoder _transcodeImageItem:imageCompletion:errorCompletion:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x106df9e74

// -[SCMemoriesSnapTranscoder _transcodeAnimatedImageSnap:snapDetail:watermarkProfile:cloudFSFile:videoCompletion:videoTranscodeProgressCompletion:errorCompletion:]
// Type encoding: v72@0:8@16@24@32@40@?48@?56@?64
// Implementation: 0x106dfa14c

// -[SCMemoriesSnapTranscoder _transcodeStaticImageSnap:imageCompletion:errorCompletion:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x106dfa678

// -[SCMemoriesSnapTranscoder _watermarkStaticImage:imageCompletion:errorCompletion:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x106dfa854

// -[SCMemoriesSnapTranscoder _getMusicSelectionInSnap:url:videoCompletion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106dfaa2c

// -[SCMemoriesSnapTranscoder _transcodeVideoSnap:watermarkProfile:cloudFSFile:videoCompletion:videoTranscodeProgressCompletion:errorCompletion:]
// Type encoding: v64@0:8@16@24@32@?40@?48@?56
// Implementation: 0x106dfab78

// -[SCMemoriesSnapTranscoder _lensCommandMetadataForSnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x106dfb104

// -[SCMemoriesSnapTranscoder _transcodeVideoItem:videoCompletion:errorCompletion:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x106dfb214

// -[SCMemoriesSnapTranscoder _downloadCloudFileIfNeededForSnap:memoriesGrapheneContext:videoTranscodeProgressCompletion:cloudFSCompletion:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x106dfb60c

// -[SCMemoriesSnapTranscoder _exportStoriesImageToVideoForSnap:videoCompletion:videoTranscodeProgressCompletion:errorCompletion:]
// Type encoding: v48@0:8@16@?24@?32@?40
// Implementation: 0x106dfb880

// -[SCMemoriesSnapTranscoder _exportAnimatedStoriesImageToVideoForSnap:image:videoCompletion:videoTranscodeProgressCompletion:errorCompletion:]
// Type encoding: v56@0:8@16@24@?32@?40@?48
// Implementation: 0x106dfbd1c

// -[SCMemoriesSnapTranscoder _durationForSnap:]
// Type encoding: d24@0:8@16
// Implementation: 0x106dfbf58

// -[SCMemoriesSnapTranscoder generateShareableMediaWithGallerySnaps:isStory:cameraActiveVideoPaths:watermarkProfile:errorHandler:loggingHandler:]
// Type encoding: @60@0:8@16B24@28@36@?44@?52
// Implementation: 0x106dfbfbc

// -[SCMemoriesSnapTranscoder generateShareableMediaWithSnapIds:isStory:cameraActiveVideoPaths:watermarkProfile:errorHandler:loggingHandler:]
// Type encoding: @60@0:8@16B24@28@36@?44@?52
// Implementation: 0x106dfbffc

// -[SCMemoriesSnapTranscoder _generateShareableMediaForSnapsWithGallerySnaps:watermarkProfile:errorHandler:loggingHandler:]
// Type encoding: @48@0:8@16@24@?32@?40
// Implementation: 0x106dfc368

// -[SCMemoriesSnapTranscoder generateShareableAsyncMediaWithGallerySnap:isStory:cameraActiveVideoPaths:watermarkProfile:completionHandler:loggingHandler:]
// Type encoding: v60@0:8@16B24@28@36@?44@?52
// Implementation: 0x106dfd088

// -[SCMemoriesSnapTranscoder _generateShareableAsyncMediaForSnapWithGallerySnap:watermarkProfile:completionHandler:loggingHandler:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x106dfd0a8

// -[SCMemoriesSnapTranscoder _prepareMediaForSnapDocBasedSnap:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106dfd9c0

// -[SCMemoriesSnapTranscoder _prepareMediaForTimelineDraftEntry:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106dfdc9c

// -[SCMemoriesSnapTranscoder _generateShareableMediaForStoriesWithGallerySnaps:cameraActiveVideoPaths:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106dfe0a8

// -[SCMemoriesSnapTranscoder _generateShareableAsyncMediaForStoryWithGallerySnap:cameraActiveVideoPaths:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106dfe6b0

// -[SCMemoriesSnapTranscoder generateShareableMediaWithGalleryItems:]
// Type encoding: @24@0:8@16
// Implementation: 0x106dfec04

// -[SCMemoriesSnapTranscoder generateShareableAsyncMediaWithGalleryItem:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106dfefd4

// -[SCMemoriesSnapTranscoder _generateLensIdWithGallerySnaps:]
// Type encoding: @24@0:8@16
// Implementation: 0x106dff29c

// -[SCMemoriesSnapTranscoder _generateLensIdWithGallerySnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x106dff3c8

// -[SCMemoriesSnapTranscoder .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106dff47c

@end
