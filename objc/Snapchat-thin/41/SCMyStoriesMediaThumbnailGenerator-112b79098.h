// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMyStoriesMediaThumbnailGenerator
// Superclass: NSObject
// Address: 0x112b79098

@interface SCMyStoriesMediaThumbnailGenerator


// -[SCMyStoriesMediaThumbnailGenerator initWithPerformer:cachingDelegate:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10044b9c4

// -[SCMyStoriesMediaThumbnailGenerator setMediaProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x10044d8b4

// -[SCMyStoriesMediaThumbnailGenerator createThumbnailForThumbnailInfo:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107ccaf50

// -[SCMyStoriesMediaThumbnailGenerator forceablyCreateThumbnailsForMediaInfo:thumbnailTypes:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107ccb134

// -[SCMyStoriesMediaThumbnailGenerator _createThumbnailsForMediaInfo:thumbnailTypes:cacheKey:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107ccb250

// -[SCMyStoriesMediaThumbnailGenerator _handleFetchedMedia:thumbnailTypes:mediaData:overlayData:cacheKey:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x107ccb534

// -[SCMyStoriesMediaThumbnailGenerator _generateThumbnailsOnBackgroundThread:thumbnailTypes:mediaData:overlayData:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x107ccb91c

// -[SCMyStoriesMediaThumbnailGenerator _handleGeneratedThumbnail:generatedThumbnails:cacheKey:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107ccbf58

// -[SCMyStoriesMediaThumbnailGenerator _clearGeneratedThumbnailTypes:generatedThumbnails:cacheKey:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107ccc394

// -[SCMyStoriesMediaThumbnailGenerator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ccc79c

@end
