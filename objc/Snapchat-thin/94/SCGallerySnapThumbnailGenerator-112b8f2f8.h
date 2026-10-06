// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGallerySnapThumbnailGenerator
// Superclass: NSObject
// Address: 0x112b8f2f8

@interface SCGallerySnapThumbnailGenerator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGallerySnapThumbnailGenerator initWithEncryptedContentManager:memoriesThumbnailLogger:cachingMediaManager:dataObjectContext:circumstanceEngine:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x107f687a8

// -[SCGallerySnapThumbnailGenerator requestThumbnailForSnap:identifier:targetSize:networkDownloadDelayEnabled:queue:resultHandler:]
// Type encoding: v68@0:8@16@24{CGSize=dd}32B48@52@?60
// Implementation: 0x107f68970

// -[SCGallerySnapThumbnailGenerator cancel:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f69030

// -[SCGallerySnapThumbnailGenerator tracedSnapForStoryEditorThumbnailForGallerySnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f69034

// -[SCGallerySnapThumbnailGenerator _cancelThumbnailRequestIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f6912c

// -[SCGallerySnapThumbnailGenerator _logThumbnailLoadingEndWithIdentifier:snap:isSuccessful:isCached:isCancelled:]
// Type encoding: v44@0:8@16@24B32B36B40
// Implementation: 0x107f69218

// -[SCGallerySnapThumbnailGenerator _thumbnailResultForId:isSuccessful:isCancelled:]
// Type encoding: @32@0:8@16B24B28
// Implementation: 0x107f6945c

// -[SCGallerySnapThumbnailGenerator _isRequestInProgressWithIdentifier:]
// Type encoding: B24@0:8@16
// Implementation: 0x107f694dc

// -[SCGallerySnapThumbnailGenerator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107f69514

@end
