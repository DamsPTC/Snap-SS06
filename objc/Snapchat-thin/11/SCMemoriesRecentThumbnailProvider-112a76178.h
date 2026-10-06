// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesRecentThumbnailProvider
// Superclass: NSObject
// Address: 0x112a76178

@interface SCMemoriesRecentThumbnailProvider

// Property: thumbnailSizes; attributes: T@"NSArray",R,N,V_thumbnailSizes
// Property: cornerRadii; attributes: T@"NSArray",R,N,V_cornerRadii
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: recentThumbnails; attributes: T@"NSMutableArray",R,N,V_recentThumbnails

// -[SCMemoriesRecentThumbnailProvider initWithCachingMediaManager:filePathManager:mergedDataSource:thumbnailSizes:cornerRadii:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1058d6d08

// -[SCMemoriesRecentThumbnailProvider dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1058d7148

// -[SCMemoriesRecentThumbnailProvider addObserver:]
// Type encoding: @24@0:8@?16
// Implementation: 0x1058d7268

// -[SCMemoriesRecentThumbnailProvider removeObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058d7300

// -[SCMemoriesRecentThumbnailProvider notifyObservers]
// Type encoding: v16@0:8
// Implementation: 0x1058d7308

// -[SCMemoriesRecentThumbnailProvider dataSource:didChangeEntries:failedEntries:fetchEntryError:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1058d7408

// -[SCMemoriesRecentThumbnailProvider _recentThumbnailPathAtIndex:]
// Type encoding: @24@0:8q16
// Implementation: 0x1058d7698

// -[SCMemoriesRecentThumbnailProvider _generateGalleryThumbnailsWithLatestEntries:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058d7834

// -[SCMemoriesRecentThumbnailProvider _generateGalleryThumbnailsWithLatestEntry:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058d7e20

// -[SCMemoriesRecentThumbnailProvider _generateGalleryThumbnailsWithLatestSnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058d8144

// -[SCMemoriesRecentThumbnailProvider _generateGalleryThumbnailsWithLatestSnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058d8434

// -[SCMemoriesRecentThumbnailProvider _updateRecentThumbnailImage:snap:index:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x1058d87f4

// -[SCMemoriesRecentThumbnailProvider _cleanupAndReloadRecentThumbnail]
// Type encoding: v16@0:8
// Implementation: 0x1058d8ba4

// -[SCMemoriesRecentThumbnailProvider _loadRecentThumbnail]
// Type encoding: v16@0:8
// Implementation: 0x1058d8c94

// -[SCMemoriesRecentThumbnailProvider recentThumbnails]
// Type encoding: @16@0:8
// Implementation: 0x1058d8f80

// -[SCMemoriesRecentThumbnailProvider thumbnailSizes]
// Type encoding: @16@0:8
// Implementation: 0x1058d8f88

// -[SCMemoriesRecentThumbnailProvider cornerRadii]
// Type encoding: @16@0:8
// Implementation: 0x1058d8f90

// -[SCMemoriesRecentThumbnailProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1058d8f98

@end
