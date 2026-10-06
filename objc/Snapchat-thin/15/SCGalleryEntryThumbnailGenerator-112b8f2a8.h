// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGalleryEntryThumbnailGenerator
// Superclass: NSObject
// Address: 0x112b8f2a8

@interface SCGalleryEntryThumbnailGenerator

// Property: delegate; attributes: T@"<SCGalleryEntryThumbnailGeneratorDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGalleryEntryThumbnailGenerator initWithEntry:targetSize:shouldShowLoadingSpinner:generationContext:memoriesMergedDataSource:encryptedContentManager:thumbnailDebugManager:cachingMediaManager:circumstanceEngine:]
// Type encoding: @92@0:8@16{CGSize=dd}24B40Q44@52@60@68@76@84
// Implementation: 0x107f66b48

// -[SCGalleryEntryThumbnailGenerator dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107f66d28

// -[SCGalleryEntryThumbnailGenerator startGeneratingUpdates]
// Type encoding: v16@0:8
// Implementation: 0x107f66d70

// -[SCGalleryEntryThumbnailGenerator stopGeneratingUpdates]
// Type encoding: v16@0:8
// Implementation: 0x107f670a0

// -[SCGalleryEntryThumbnailGenerator _updateThumbnailWithLatestEntry:latestSnaps:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107f6714c

// -[SCGalleryEntryThumbnailGenerator _storyThumbnailUpdateTimerDidFire]
// Type encoding: v16@0:8
// Implementation: 0x107f672ac

// -[SCGalleryEntryThumbnailGenerator _generateThumbnailForSnapEntry:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f67634

// -[SCGalleryEntryThumbnailGenerator _generateThumbnailForStoryEntryWithTrigger:latestSnaps:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107f679f4

// -[SCGalleryEntryThumbnailGenerator _logThumbnailLoadingEndWithSnap:isSuccessful:isCached:isCancelled:trigger:]
// Type encoding: v44@0:8@16B24B28B32@36
// Implementation: 0x107f682c8

// -[SCGalleryEntryThumbnailGenerator _shouldLogThumbnailLatency]
// Type encoding: B16@0:8
// Implementation: 0x107f684c8

// -[SCGalleryEntryThumbnailGenerator _totalSnapsDurationForSnaps:]
// Type encoding: d24@0:8@16
// Implementation: 0x107f684e8

// -[SCGalleryEntryThumbnailGenerator _thumbnailLoggingTrigger:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f685f8

// -[SCGalleryEntryThumbnailGenerator _thumbnailResultForIsSuccessful:isCancelled:]
// Type encoding: @24@0:8B16B20
// Implementation: 0x107f686a0

// -[SCGalleryEntryThumbnailGenerator delegate]
// Type encoding: @16@0:8
// Implementation: 0x107f686ec

// -[SCGalleryEntryThumbnailGenerator setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f68704

// -[SCGalleryEntryThumbnailGenerator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107f68710

// +[SCGalleryEntryThumbnailGenerator invertedStoryOverlayForTargetSize:]
// Type encoding: @32@0:8{CGSize=dd}16
// Implementation: 0x107f66ae4

@end
