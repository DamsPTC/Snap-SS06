// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMediaDrawerDataSource
// Superclass: NSObject
// Address: 0x112b0ae68

@interface SCMediaDrawerDataSource

// Property: didFinishFetching; attributes: TB,R,N,V_didFinishFetching

// -[SCMediaDrawerDataSource initWithFilterFactory:grapheneRegistry:videoImporter:imageImporter:previewURLVideoProvider:mediaTranscodingLogger:photoPermissionCoordinator:circumstanceEngine:coreConfigProvider:memoriesExperimentService:applicationLifecycleEvents:fetchLimit:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@88@96@104
// Implementation: 0x1069de880

// -[SCMediaDrawerDataSource fetchMediaFromAlbum:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069debfc

// -[SCMediaDrawerDataSource fetchMediaIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1069dec38

// -[SCMediaDrawerDataSource _initialFetchPartialCRAssets]
// Type encoding: v16@0:8
// Implementation: 0x1069dee64

// -[SCMediaDrawerDataSource _fetchAllCRAssets]
// Type encoding: v16@0:8
// Implementation: 0x1069df050

// -[SCMediaDrawerDataSource _getUpdateIndexPathesAfterPaginatedWithFetchResultCount:]
// Type encoding: @24@0:8q16
// Implementation: 0x1069df1c0

// -[SCMediaDrawerDataSource mediaListForAlbum:]
// Type encoding: @24@0:8@16
// Implementation: 0x1069df27c

// -[SCMediaDrawerDataSource viewAlbumsSectionHeaderTitle]
// Type encoding: @16@0:8
// Implementation: 0x1069df3c4

// -[SCMediaDrawerDataSource _resetMediaListFromFetchResult:maxNumberOfItemsToDisplay:shouldOnlyReloadItemAtIndexPathes:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1069df3f8

// -[SCMediaDrawerDataSource _eagerAssetsFromFetchResult:maxNumberOfItemsToDisplay:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1069df800

// -[SCMediaDrawerDataSource _mediasFromAssets:existingMediaList:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1069df9ec

// -[SCMediaDrawerDataSource _mediasFromFetchResult:maxNumberOfItemsToDisplay:existingMediaList:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1069dfb58

// -[SCMediaDrawerDataSource _addMediaToMediaList:asset:existingItem:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1069dfd90

// -[SCMediaDrawerDataSource _isPhAssetHasSameEditsWithExistingPhAsset:newPhAsset:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1069dff1c

// -[SCMediaDrawerDataSource removeMedia:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069dfff4

// -[SCMediaDrawerDataSource addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069e0070

// -[SCMediaDrawerDataSource removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069e0114

// -[SCMediaDrawerDataSource didFinishFetching]
// Type encoding: B16@0:8
// Implementation: 0x1069e011c

// -[SCMediaDrawerDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1069e0124

@end
