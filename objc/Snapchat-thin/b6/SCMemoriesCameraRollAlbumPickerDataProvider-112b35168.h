// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesCameraRollAlbumPickerDataProvider
// Superclass: NSObject
// Address: 0x112b35168

@interface SCMemoriesCameraRollAlbumPickerDataProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesCameraRollAlbumPickerDataProvider initWithSelectedAlbumId:numberFormatter:userTrackedLogger:memoriesExperimentService:origin:assetFetcher:shouldEmitPillViewModel:allowVideoEntries:allowPhotoEntries:memoriesAlbumFetchCacheManager:performer:]
// Type encoding: @92@0:8@16@24@32@40Q48@56B64B68B72@76@84
// Implementation: 0x106d02dcc

// -[SCMemoriesCameraRollAlbumPickerDataProvider initWithSelectedAlbumId:numberFormatter:userTrackedLogger:memoriesExperimentService:origin:assetFetcher:shouldEmitPillViewModel:allowVideoEntries:allowPhotoEntries:memoriesAlbumFetchCacheManager:]
// Type encoding: @84@0:8@16@24@32@40Q48@56B64B68B72@76
// Implementation: 0x106d03084

// -[SCMemoriesCameraRollAlbumPickerDataProvider dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106d031e8

// -[SCMemoriesCameraRollAlbumPickerDataProvider fetchAlbumList]
// Type encoding: v16@0:8
// Implementation: 0x106d03234

// -[SCMemoriesCameraRollAlbumPickerDataProvider selectAlbum:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106d03398

// -[SCMemoriesCameraRollAlbumPickerDataProvider albumListObservable]
// Type encoding: @16@0:8
// Implementation: 0x106d034a8

// -[SCMemoriesCameraRollAlbumPickerDataProvider albumPillsObservable]
// Type encoding: @16@0:8
// Implementation: 0x106d034d0

// -[SCMemoriesCameraRollAlbumPickerDataProvider selectedAlbumObservable]
// Type encoding: @16@0:8
// Implementation: 0x106d034f8

// -[SCMemoriesCameraRollAlbumPickerDataProvider photoLibraryDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d03520

// -[SCMemoriesCameraRollAlbumPickerDataProvider _fetchAlbums]
// Type encoding: v16@0:8
// Implementation: 0x106d03e48

// -[SCMemoriesCameraRollAlbumPickerDataProvider _refreshCachedSmartAlbumIfStale:albumSubtype:]
// Type encoding: B32@0:8@16q24
// Implementation: 0x106d03e4c

// -[SCMemoriesCameraRollAlbumPickerDataProvider _compareCachedResults]
// Type encoding: v16@0:8
// Implementation: 0x106d04240

// -[SCMemoriesCameraRollAlbumPickerDataProvider _fetchAlbumsWithCache]
// Type encoding: v16@0:8
// Implementation: 0x106d047ec

// -[SCMemoriesCameraRollAlbumPickerDataProvider _fetchRecents]
// Type encoding: v16@0:8
// Implementation: 0x106d04850

// -[SCMemoriesCameraRollAlbumPickerDataProvider _fetchFavorites]
// Type encoding: v16@0:8
// Implementation: 0x106d04994

// -[SCMemoriesCameraRollAlbumPickerDataProvider _fetchVideos]
// Type encoding: v16@0:8
// Implementation: 0x106d04ad8

// -[SCMemoriesCameraRollAlbumPickerDataProvider _fetchSelfies]
// Type encoding: v16@0:8
// Implementation: 0x106d04c1c

// -[SCMemoriesCameraRollAlbumPickerDataProvider _fetchScreenshots]
// Type encoding: v16@0:8
// Implementation: 0x106d04d60

// -[SCMemoriesCameraRollAlbumPickerDataProvider _fetchUsersAlbums]
// Type encoding: v16@0:8
// Implementation: 0x106d04ea4

// -[SCMemoriesCameraRollAlbumPickerDataProvider _cleachUsersAlbumsCache]
// Type encoding: v16@0:8
// Implementation: 0x106d0501c

// -[SCMemoriesCameraRollAlbumPickerDataProvider _emitAlbumPickerViewModelWithCache]
// Type encoding: v16@0:8
// Implementation: 0x106d0519c

// -[SCMemoriesCameraRollAlbumPickerDataProvider _emitAlbumPillsViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d055c8

// -[SCMemoriesCameraRollAlbumPickerDataProvider _allFetchResults]
// Type encoding: @16@0:8
// Implementation: 0x106d05a1c

// -[SCMemoriesCameraRollAlbumPickerDataProvider _fetchOptionsForAssets]
// Type encoding: @16@0:8
// Implementation: 0x106d05a98

// -[SCMemoriesCameraRollAlbumPickerDataProvider _constructAlbumPickerCellViewModel:assetsCount:coverAsset:subtype:]
// Type encoding: @48@0:8@16Q24@32q40
// Implementation: 0x106d05cf4

// -[SCMemoriesCameraRollAlbumPickerDataProvider _constructPillCellViewModel:assetsCount:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x106d05ea4

// -[SCMemoriesCameraRollAlbumPickerDataProvider _formatNumber:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106d06004

// -[SCMemoriesCameraRollAlbumPickerDataProvider _logPickerViewShown]
// Type encoding: v16@0:8
// Implementation: 0x106d060d4

// -[SCMemoriesCameraRollAlbumPickerDataProvider _logSelectAlbum:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d0613c

// -[SCMemoriesCameraRollAlbumPickerDataProvider _getBlizzardEventOrigin]
// Type encoding: q16@0:8
// Implementation: 0x106d06204

// -[SCMemoriesCameraRollAlbumPickerDataProvider _getBlizzardEventAlbumType:]
// Type encoding: q24@0:8@16
// Implementation: 0x106d0621c

// -[SCMemoriesCameraRollAlbumPickerDataProvider _cleanCacheForCollection:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d06278

// -[SCMemoriesCameraRollAlbumPickerDataProvider _fetchLimit]
// Type encoding: Q16@0:8
// Implementation: 0x106d063ec

// -[SCMemoriesCameraRollAlbumPickerDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106d0642c

@end
