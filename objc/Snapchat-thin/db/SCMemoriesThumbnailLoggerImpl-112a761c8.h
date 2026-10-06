// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesThumbnailLoggerImpl
// Superclass: NSObject
// Address: 0x112a761c8

@interface SCMemoriesThumbnailLoggerImpl


// -[SCMemoriesThumbnailLoggerImpl initWithBlizzardLogger:samplingProvider:crashLogger:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1058d904c

// -[SCMemoriesThumbnailLoggerImpl thumbnailGenerationId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1058d91c0

// -[SCMemoriesThumbnailLoggerImpl thumbnailGenerationStart:trigger:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1058d922c

// -[SCMemoriesThumbnailLoggerImpl updateThumbnailGeneration:key:value:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1058d93e0

// -[SCMemoriesThumbnailLoggerImpl logThumbnailLoadingFinishedStartingAt:endingAt:generationId:snapMediaType:snapMediaFormat:spectaclesContentId:trigger:result:]
// Type encoding: v80@0:8d16d24@32Q40q48@56@64@72
// Implementation: 0x1058d967c

// -[SCMemoriesThumbnailLoggerImpl logMemoriesCellView:entryExternalId:entryType:memSessionId:galleryCollectionCategory:itemPosition:itemCount:userInitiated:]
// Type encoding: v76@0:8@16@24q32@40@48q56q64B72
// Implementation: 0x1058d97d4

// -[SCMemoriesThumbnailLoggerImpl _logThumbnailLoadingFinishedForGenerationId:latencyInSeconds:snapMediaType:snapMediaFormat:spectaclesContentId:trigger:result:durationInSec:]
// Type encoding: v80@0:8@16d24Q32q40@48@56@64d72
// Implementation: 0x1058d9914

// -[SCMemoriesThumbnailLoggerImpl _logBlizzardThumbnailDisplayLatency:includeDownload:snapMediaType:snapMediaFormat:spectaclesContentId:]
// Type encoding: v52@0:8d16B24Q28q36@44
// Implementation: 0x1058d9ba4

// -[SCMemoriesThumbnailLoggerImpl _processedTrigger:]
// Type encoding: @24@0:8@16
// Implementation: 0x1058d9ccc

// -[SCMemoriesThumbnailLoggerImpl _addTimerForCachingMediaManagerStepLatencyWithDetailsDict:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058d9d00

// -[SCMemoriesThumbnailLoggerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1058d9e90

@end
