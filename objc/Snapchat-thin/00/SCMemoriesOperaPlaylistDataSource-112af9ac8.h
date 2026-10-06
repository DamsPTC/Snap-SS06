// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesOperaPlaylistDataSource
// Superclass: NSObject
// Address: 0x112af9ac8

@interface SCMemoriesOperaPlaylistDataSource

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesOperaPlaylistDataSource initWithDataModels:firstDisplayGroupDataModel:memoriesOperaSessionConfig:memoriesDataObjectContext:memoriesSearchDatabase:memoriesOperaMediaManagerBuilder:memoriesBackupManager:userId:circumstanceEngine:grapheneRegistry:memoriesUserDefaultsManager:memoriesExperimentService:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@88@96@104
// Implementation: 0x10678160c

// -[SCMemoriesOperaPlaylistDataSource _internalFeaturedStoryRowsEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10678198c

// -[SCMemoriesOperaPlaylistDataSource currentOperaItemForPage:]
// Type encoding: @24@0:8@16
// Implementation: 0x1067819cc

// -[SCMemoriesOperaPlaylistDataSource currentOperaGroupDataModelForPage:]
// Type encoding: @24@0:8@16
// Implementation: 0x106781ffc

// -[SCMemoriesOperaPlaylistDataSource handleShakeAtPage]
// Type encoding: v16@0:8
// Implementation: 0x10678205c

// -[SCMemoriesOperaPlaylistDataSource itemType]
// Type encoding: @16@0:8
// Implementation: 0x106782060

// -[SCMemoriesOperaPlaylistDataSource currentPlaybackItem]
// Type encoding: @16@0:8
// Implementation: 0x10678206c

// -[SCMemoriesOperaPlaylistDataSource currentPlaybackGroup]
// Type encoding: @16@0:8
// Implementation: 0x10678207c

// -[SCMemoriesOperaPlaylistDataSource setCurrentItemIdForPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x10678208c

// -[SCMemoriesOperaPlaylistDataSource setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1067820d4

// -[SCMemoriesOperaPlaylistDataSource updateDataModels:]
// Type encoding: B24@0:8@16
// Implementation: 0x10678210c

// -[SCMemoriesOperaPlaylistDataSource playlistItemIds]
// Type encoding: @16@0:8
// Implementation: 0x10678289c

// -[SCMemoriesOperaPlaylistDataSource updateCameraRollPlaylistDataModels:displayingItemInDataModelsArray:]
// Type encoding: B28@0:8@16B24
// Implementation: 0x1067828b4

// -[SCMemoriesOperaPlaylistDataSource navigateToItem:]
// Type encoding: B24@0:8@16
// Implementation: 0x106782f1c

// -[SCMemoriesOperaPlaylistDataSource needToPrepareMediaBeforeDisplay]
// Type encoding: B16@0:8
// Implementation: 0x106782f7c

// -[SCMemoriesOperaPlaylistDataSource dataModelFor:]
// Type encoding: @24@0:8@16
// Implementation: 0x106782f84

// -[SCMemoriesOperaPlaylistDataSource dataModelForGroup:]
// Type encoding: @24@0:8@16
// Implementation: 0x106782fd8

// -[SCMemoriesOperaPlaylistDataSource resolvePlaylistItemGroupWithMutator:]
// Type encoding: v24@0:8@16
// Implementation: 0x106783038

// -[SCMemoriesOperaPlaylistDataSource postResolvePlaylistItemGroupWithResolver:]
// Type encoding: v24@0:8@16
// Implementation: 0x1067832fc

// -[SCMemoriesOperaPlaylistDataSource pageDataForDataModel:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106783300

// -[SCMemoriesOperaPlaylistDataSource prepareMediaForItem:startWaitingForDownloadCallback:completion:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x106783730

// -[SCMemoriesOperaPlaylistDataSource removeMediaForItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x106783b28

// -[SCMemoriesOperaPlaylistDataSource canResolvePlaylistItemGroupDataModel:]
// Type encoding: B24@0:8@16
// Implementation: 0x106783c10

// -[SCMemoriesOperaPlaylistDataSource playlistItemGroupModelForDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x106783c60

// -[SCMemoriesOperaPlaylistDataSource asyncResolveGallerySnapAtPage:]
// Type encoding: @24@0:8@16
// Implementation: 0x106783d18

// -[SCMemoriesOperaPlaylistDataSource asyncResolveGalleryOperaSnapAtPage:]
// Type encoding: @24@0:8@16
// Implementation: 0x10678427c

// -[SCMemoriesOperaPlaylistDataSource resolvePHAssetAtPage:]
// Type encoding: @24@0:8@16
// Implementation: 0x106784e88

// -[SCMemoriesOperaPlaylistDataSource resolveAllGallerySnaps]
// Type encoding: @16@0:8
// Implementation: 0x106784f24

// -[SCMemoriesOperaPlaylistDataSource swapFavoriteStateForPageWithPage:forSnapIds:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1067855ac

// -[SCMemoriesOperaPlaylistDataSource swapFavoriteStateWithPage:forOutdatedAsset:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106785be0

// -[SCMemoriesOperaPlaylistDataSource updatePlaylistForAllLivePhotos:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106786080

// -[SCMemoriesOperaPlaylistDataSource _getInitialItemIdForGroup:]
// Type encoding: @24@0:8@16
// Implementation: 0x10678628c

// -[SCMemoriesOperaPlaylistDataSource _buildGroupIdToDataModelMap:]
// Type encoding: @24@0:8@16
// Implementation: 0x106786568

// -[SCMemoriesOperaPlaylistDataSource _buildItemIdToDataModelIndexMap:]
// Type encoding: @24@0:8@16
// Implementation: 0x1067866c4

// -[SCMemoriesOperaPlaylistDataSource _indexInDataModelsForItem:]
// Type encoding: Q24@0:8@16
// Implementation: 0x10678683c

// -[SCMemoriesOperaPlaylistDataSource _playbackInfoForGroup:]
// Type encoding: @24@0:8@16
// Implementation: 0x106786904

// -[SCMemoriesOperaPlaylistDataSource _logFailToFetchEntryWithSnapId:entryId:isAsyncLoading:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1067873dc

// -[SCMemoriesOperaPlaylistDataSource _incrementMemoriesGrapheneMetric:]
// Type encoding: v24@0:8@16
// Implementation: 0x106787458

// -[SCMemoriesOperaPlaylistDataSource _logAndAppendMediaLoadedPropertiesForItemId:newProperties:shouldUpdateProperties:error:]
// Type encoding: v44@0:8@16@24B32@36
// Implementation: 0x1067874c8

// -[SCMemoriesOperaPlaylistDataSource _appendMediaLoadedPropertiesForItemId:newProperties:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10678762c

// -[SCMemoriesOperaPlaylistDataSource applyLoadingErrorProperties:forPage:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1067877f8

// -[SCMemoriesOperaPlaylistDataSource _removeMediaLoadedPropertiesForItemId:key:shouldAnnouncePlaylistUpdate:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x106787888

// -[SCMemoriesOperaPlaylistDataSource _asyncLoadBasePropertiesAndStartLoadMediasForNonCameraRollMemoriesItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x10678795c

// -[SCMemoriesOperaPlaylistDataSource startedToLoadThumbnailAndMediaForRegularMemoriesItem:snap:snapDetail:entryInfo:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106787d4c

// -[SCMemoriesOperaPlaylistDataSource _startToLoadMediaFromMediaManagerForMemoriesItem:snap:entry:isFailedEntry:entryInfo:]
// Type encoding: v52@0:8@16@24@32B40@44
// Implementation: 0x1067880d8

// -[SCMemoriesOperaPlaylistDataSource operaMediaManager]
// Type encoding: @16@0:8
// Implementation: 0x1067889f8

// -[SCMemoriesOperaPlaylistDataSource operaCameraRollContentMediaManager]
// Type encoding: @16@0:8
// Implementation: 0x106788a00

// -[SCMemoriesOperaPlaylistDataSource _logDataConsistency:]
// Type encoding: v24@0:8@16
// Implementation: 0x106788a08

// -[SCMemoriesOperaPlaylistDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106788aa4

@end
