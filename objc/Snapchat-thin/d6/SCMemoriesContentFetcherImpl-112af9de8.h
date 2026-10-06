// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesContentFetcherImpl
// Superclass: NSObject
// Address: 0x112af9de8

@interface SCMemoriesContentFetcherImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesContentFetcherImpl initWithPhotoPermissionCoordinator:coreConfigProvider:grapheneRegistry:applicationLifecycleEvents:mergedDataSource:dataObjectContext:memoriesExperimentService:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x10678e5f8

// -[SCMemoriesContentFetcherImpl fetchCameraRollAssetsWithRequest:resultHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10678e7f0

// -[SCMemoriesContentFetcherImpl observeCameraRollAssetsWithRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x10678ed90

// -[SCMemoriesContentFetcherImpl _fetchAssetsInAlbumsToExcludeWithRequest:resultHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10678f490

// -[SCMemoriesContentFetcherImpl _getValidAssetsWithAllFetchResult:fetchResultsToExclude:request:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10678fa5c

// -[SCMemoriesContentFetcherImpl fetchGalleryEntriesWithRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x10678fce0

// -[SCMemoriesContentFetcherImpl observeRecentSnapEntriesWithLimit:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10678fd0c

// -[SCMemoriesContentFetcherImpl _fetchRecentSnapEntriesWithLimit:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106790018

// -[SCMemoriesContentFetcherImpl _predicatesForFilters:referenceDate:endReferenceDate:]
// Type encoding: @40@0:8Q16@24@32
// Implementation: 0x106790080

// -[SCMemoriesContentFetcherImpl _assetCollectionForSelfiesWithFilters:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106790294

// -[SCMemoriesContentFetcherImpl _fetchLimit]
// Type encoding: Q16@0:8
// Implementation: 0x1067902c0

// -[SCMemoriesContentFetcherImpl _fetchLimitLazy]
// Type encoding: @16@0:8
// Implementation: 0x106790300

// -[SCMemoriesContentFetcherImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106790340

@end
