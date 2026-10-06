// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesCameraRollPaginator
// Superclass: NSObject
// Address: 0x112ab0dc8

@interface SCMemoriesCameraRollPaginator

// Property: selectedAssetCollection; attributes: T@"PHAssetCollection",R,N,V_selectedAssetCollection
// Property: selectedAssetCollectionObservable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesCameraRollPaginator initWithPhotoLibraryFetcher:photoPermissionCoordinator:allowPhotoEntries:allowVideoEntries:coreConfigProvider:shouldUseAlbums:userPreference:source:cameraRollConfig:]
// Type encoding: @76@0:8@16@24B32B36@40B48@52Q60@68
// Implementation: 0x105f61f28

// -[SCMemoriesCameraRollPaginator selectedAssetCollectionObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f62278

// -[SCMemoriesCameraRollPaginator setSelectedAssetCollection:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f622a0

// -[SCMemoriesCameraRollPaginator fetchCameraRoll]
// Type encoding: v16@0:8
// Implementation: 0x105f623b8

// -[SCMemoriesCameraRollPaginator reset]
// Type encoding: v16@0:8
// Implementation: 0x105f62918

// -[SCMemoriesCameraRollPaginator observe]
// Type encoding: @16@0:8
// Implementation: 0x105f62a90

// -[SCMemoriesCameraRollPaginator observeUpdates]
// Type encoding: @16@0:8
// Implementation: 0x105f62a98

// -[SCMemoriesCameraRollPaginator loadNextPage]
// Type encoding: v16@0:8
// Implementation: 0x105f62aa0

// -[SCMemoriesCameraRollPaginator hasReachedLastPage]
// Type encoding: B16@0:8
// Implementation: 0x105f62c38

// -[SCMemoriesCameraRollPaginator _refreshCachedHasReachedLastPage]
// Type encoding: v16@0:8
// Implementation: 0x105f62cb4

// -[SCMemoriesCameraRollPaginator shouldRetainInstanceWhenMarshalling]
// Type encoding: B16@0:8
// Implementation: 0x105f62d14

// -[SCMemoriesCameraRollPaginator pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x105f62d1c

// -[SCMemoriesCameraRollPaginator _getPaginateItemsWithStartIndex:endIndex:]
// Type encoding: @32@0:8Q16Q24
// Implementation: 0x105f62d28

// -[SCMemoriesCameraRollPaginator _initialLoadWithFetchResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f62e14

// -[SCMemoriesCameraRollPaginator _updateSelectedAssetCollection:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f62e5c

// -[SCMemoriesCameraRollPaginator _isCameraRollFullAccess]
// Type encoding: B16@0:8
// Implementation: 0x105f6302c

// -[SCMemoriesCameraRollPaginator selectedAssetCollection]
// Type encoding: @16@0:8
// Implementation: 0x105f630a4

// -[SCMemoriesCameraRollPaginator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f630ac

// +[SCMemoriesCameraRollPaginator _defaultAssetCollectionForSource:userPreference:]
// Type encoding: @32@0:8Q16@24
// Implementation: 0x105f62eb4

// +[SCMemoriesCameraRollPaginator _selectedAlbumKeyForSource:]
// Type encoding: @24@0:8Q16
// Implementation: 0x105f63004

@end
