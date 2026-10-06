// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesPhotoLibraryFetcher
// Superclass: NSObject
// Address: 0x112bc8af8

@interface SCMemoriesPhotoLibraryFetcher

// Property: changeDebounceTimer; attributes: T@"NSTimer",&,N,V_changeDebounceTimer
// Property: pendingChange; attributes: T@"PHChange",&,N,V_pendingChange
// Property: isInRapidChangeSequence; attributes: TB,N,V_isInRapidChangeSequence
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesPhotoLibraryFetcher initDynamicMultiFetcherWithPhotoPermissionCoordinator:coreConfigProvider:changeHandler:grapheneRegistry:applicationLifecycleEvents:fetchLimit:]
// Type encoding: @64@0:8@16@24@?32@40@48@56
// Implementation: 0x108ebbae8

// -[SCMemoriesPhotoLibraryFetcher initWithPhotoPermissionCoordinator:coreConfigProvider:grapheneRegistry:applicationLifecycleEvents:fetchLimit:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x108ebbb90

// -[SCMemoriesPhotoLibraryFetcher dealloc]
// Type encoding: v16@0:8
// Implementation: 0x108ebbf24

// -[SCMemoriesPhotoLibraryFetcher _parseFetchParams:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ebbfc4

// -[SCMemoriesPhotoLibraryFetcher fetchWithSingleResultType:fetchParams:resultHandler:]
// Type encoding: v40@0:8Q16@24@?32
// Implementation: 0x108ebc180

// -[SCMemoriesPhotoLibraryFetcher fetchWithMultipleResultsType:fetchParams:resultHandler:]
// Type encoding: v40@0:8Q16@24@?32
// Implementation: 0x108ebc2ac

// -[SCMemoriesPhotoLibraryFetcher fetchWithAssetCollection:observesChange:resultHandler:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x108ebc3d8

// -[SCMemoriesPhotoLibraryFetcher fetchWithAssetCollection:observesChange:allowPreviousFetchResult:resultHandler:]
// Type encoding: v40@0:8@16B24B28@?32
// Implementation: 0x108ebc3e4

// -[SCMemoriesPhotoLibraryFetcher fetchOnceWithResultType:fetchParams:resultHandler:]
// Type encoding: v40@0:8Q16@24@?32
// Implementation: 0x108ebc60c

// -[SCMemoriesPhotoLibraryFetcher dynamicFetchWithResultsType:fetchParams:resultHandler:]
// Type encoding: v40@0:8Q16@24@?32
// Implementation: 0x108ebc8e0

// -[SCMemoriesPhotoLibraryFetcher photoLibraryDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ebcbf0

// -[SCMemoriesPhotoLibraryFetcher _processChangeImmediately:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ebcd7c

// -[SCMemoriesPhotoLibraryFetcher _processDebouncedChange]
// Type encoding: v16@0:8
// Implementation: 0x108ebcee4

// -[SCMemoriesPhotoLibraryFetcher _checkPermissionStatusAndFetchAssets]
// Type encoding: v16@0:8
// Implementation: 0x108ebcf48

// -[SCMemoriesPhotoLibraryFetcher _setupFetch]
// Type encoding: v16@0:8
// Implementation: 0x108ebd22c

// -[SCMemoriesPhotoLibraryFetcher _indexOfChangedFetchResult:]
// Type encoding: Q24@0:8@16
// Implementation: 0x108ebd308

// -[SCMemoriesPhotoLibraryFetcher _fetchPhotoAssets]
// Type encoding: v16@0:8
// Implementation: 0x108ebd3b4

// -[SCMemoriesPhotoLibraryFetcher _fetchAssetsFromAlbum:subpredicates:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108ebd770

// -[SCMemoriesPhotoLibraryFetcher _fetchAssetFromAlbum:subpredicates:imageOnly:videoOnly:]
// Type encoding: @40@0:8@16@24B32B36
// Implementation: 0x108ebd77c

// -[SCMemoriesPhotoLibraryFetcher _fetchAssetFromAlbum:subpredicates:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108ebd88c

// -[SCMemoriesPhotoLibraryFetcher _fetchPhotoAssetWithPredicates:imageOnly:videoOnly:]
// Type encoding: @32@0:8@16B24B28
// Implementation: 0x108ebd9a8

// -[SCMemoriesPhotoLibraryFetcher _getFetchResultFromPHFetchResult:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ebdadc

// -[SCMemoriesPhotoLibraryFetcher _notifyWithFetchResults:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ebdb5c

// -[SCMemoriesPhotoLibraryFetcher _startupComplete]
// Type encoding: v16@0:8
// Implementation: 0x108ebdcc4

// -[SCMemoriesPhotoLibraryFetcher _didEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x108ebddb8

// -[SCMemoriesPhotoLibraryFetcher _fetchAssetsForCRFeaturedStoryFromAllAlbums]
// Type encoding: v16@0:8
// Implementation: 0x108ebde00

// -[SCMemoriesPhotoLibraryFetcher _fetchAssetsForCRFeaturedStoryFromExcludedAlbums]
// Type encoding: v16@0:8
// Implementation: 0x108ebdf04

// -[SCMemoriesPhotoLibraryFetcher _fetchAllSelfiesAssets]
// Type encoding: v16@0:8
// Implementation: 0x108ebe1b8

// -[SCMemoriesPhotoLibraryFetcher _fetchAssetsForMiniCarousel]
// Type encoding: v16@0:8
// Implementation: 0x108ebe384

// -[SCMemoriesPhotoLibraryFetcher _fetchAssetsForScreenshopShoppableRecap]
// Type encoding: v16@0:8
// Implementation: 0x108ebe460

// -[SCMemoriesPhotoLibraryFetcher _fetchAssetsForContentFilters]
// Type encoding: v16@0:8
// Implementation: 0x108ebe638

// -[SCMemoriesPhotoLibraryFetcher _logCameraRollFetchLatency:]
// Type encoding: v24@0:8d16
// Implementation: 0x108ebe708

// -[SCMemoriesPhotoLibraryFetcher _registerPhotoLibraryChangeObserverIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x108ebe800

// -[SCMemoriesPhotoLibraryFetcher changeDebounceTimer]
// Type encoding: @16@0:8
// Implementation: 0x108ebe854

// -[SCMemoriesPhotoLibraryFetcher setChangeDebounceTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ebe85c

// -[SCMemoriesPhotoLibraryFetcher pendingChange]
// Type encoding: @16@0:8
// Implementation: 0x108ebe88c

// -[SCMemoriesPhotoLibraryFetcher setPendingChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ebe894

// -[SCMemoriesPhotoLibraryFetcher isInRapidChangeSequence]
// Type encoding: B16@0:8
// Implementation: 0x108ebe8c4

// -[SCMemoriesPhotoLibraryFetcher setIsInRapidChangeSequence:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ebe8cc

// -[SCMemoriesPhotoLibraryFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108ebe8d4

@end
