// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesCRFeaturedStoryDataSource
// Superclass: NSObject
// Address: 0x112a748c8

@interface SCMemoriesCRFeaturedStoryDataSource


// -[SCMemoriesCRFeaturedStoryDataSource initWithPhotoPermissionCoordinator:coreConfigProvider:grapheneRegistry:screenshopPersistenceService:applicationLifecycleEvents:circumstanceEngine:fetchLimit:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x105880730

// -[SCMemoriesCRFeaturedStoryDataSource observeCameraRollFromPhotoLibrary:referenceDate:]
// Type encoding: @32@0:8Q16@24
// Implementation: 0x105880938

// -[SCMemoriesCRFeaturedStoryDataSource _createDisposableObserverForFetchingAllCameraRoll:referenceDate:observer:]
// Type encoding: @40@0:8Q16@24@32
// Implementation: 0x105880e9c

// -[SCMemoriesCRFeaturedStoryDataSource _createObservableForProcessingAllFetchResult:memoriesCRFeaturedStoryType:referenceDate:]
// Type encoding: @40@0:8@16Q24@32
// Implementation: 0x105881234

// -[SCMemoriesCRFeaturedStoryDataSource _fetchAssetsInAlbumsToExcludeWithAllFetchResult:memoriesCRFeaturedStoryType:referenceDate:observer:]
// Type encoding: v48@0:8@16Q24@32@40
// Implementation: 0x1058813b0

// -[SCMemoriesCRFeaturedStoryDataSource _fireUpdateAfterValidationWithAllFetchResult:fetchResultsToExclude:memoriesCRFeaturedStoryType:observer:photoLibraryFetcherForAlbumsToExclude:]
// Type encoding: v56@0:8@16@24Q32@40@48
// Implementation: 0x1058817ac

// -[SCMemoriesCRFeaturedStoryDataSource _newPhotoLibraryFetcher]
// Type encoding: @16@0:8
// Implementation: 0x105881b30

// -[SCMemoriesCRFeaturedStoryDataSource _shouldGetClustersForMashup:]
// Type encoding: B24@0:8Q16
// Implementation: 0x105881b64

// -[SCMemoriesCRFeaturedStoryDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105881b74

@end
