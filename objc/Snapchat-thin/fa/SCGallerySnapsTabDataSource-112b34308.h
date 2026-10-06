// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGallerySnapsTabDataSource
// Superclass: NSObject
// Address: 0x112b34308

@interface SCGallerySnapsTabDataSource

// Property: searchResultRankByEntryId; attributes: T@"NSDictionary",C,V_searchResultRankByEntryId
// Property: delegate; attributes: T@"NSObject<SCGallerySnapsTabDataSourceDelegate>",W,N,V_delegate
// Property: selectMode; attributes: TB,N,V_selectMode
// Property: lockedSnapModalCardInsertionIndex; attributes: Tq,R,N,V_lockedSnapModalCardInsertionIndex
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGallerySnapsTabDataSource initWithSnapClustererOption:tabType:configuration:dataObjectContext:inlineSearchDataSource:containerViewController:circumstanceEngine:spectaclesContentDataSource:grapheneRegistry:memoriesMergedDataSource:memoriesProfile:memoriesHighlightDataSource:memoriesSaveLogger:capabilitiesManager:snapsTabCRSectionPluginFuture:smartTemplateService:coreConfigProvider:pageLoadMetricManager:memoriesExperimentService:userTrackingLogger:memoriesSnapDocValidator:memoriesMonetizationServices:memoriesUserDefaultsManager:]
// Type encoding: @200@0:8@16Q24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192
// Implementation: 0x106ce28ac

// -[SCGallerySnapsTabDataSource setSelectMode:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ce312c

// -[SCGallerySnapsTabDataSource isSearching]
// Type encoding: B16@0:8
// Implementation: 0x106ce31d4

// -[SCGallerySnapsTabDataSource isShowingRankedSearchResults]
// Type encoding: B16@0:8
// Implementation: 0x106ce320c

// -[SCGallerySnapsTabDataSource _isRankedSemanticSearchEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106ce3240

// -[SCGallerySnapsTabDataSource fetchSnapsForEntry:]
// Type encoding: @24@0:8@16
// Implementation: 0x106ce32b0

// -[SCGallerySnapsTabDataSource buildOperaGroupsWithGroupViewModel:currentCellViewModel:callbackQueue:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106ce32b8

// -[SCGallerySnapsTabDataSource getClusterBodyViewModelsForClusterTitle:]
// Type encoding: @24@0:8@16
// Implementation: 0x106ce3938

// -[SCGallerySnapsTabDataSource getClusterBodyViewModelsForSnapId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106ce3af4

// -[SCGallerySnapsTabDataSource clusterTitlesDidAppear:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ce3c90

// -[SCGallerySnapsTabDataSource forceReload]
// Type encoding: v16@0:8
// Implementation: 0x106ce3da0

// -[SCGallerySnapsTabDataSource _reclusterCompletion]
// Type encoding: @?16@0:8
// Implementation: 0x106ce3e4c

// -[SCGallerySnapsTabDataSource forceUpdateFeaturedStoriesViewModel]
// Type encoding: v16@0:8
// Implementation: 0x106ce3f78

// -[SCGallerySnapsTabDataSource forceReRankStories]
// Type encoding: v16@0:8
// Implementation: 0x106ce3ff8

// -[SCGallerySnapsTabDataSource firstDataFetchFinishedTimeSec]
// Type encoding: d16@0:8
// Implementation: 0x106ce402c

// -[SCGallerySnapsTabDataSource numSnapsInFirstDataFetch]
// Type encoding: q16@0:8
// Implementation: 0x106ce4034

// -[SCGallerySnapsTabDataSource setVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ce403c

// -[SCGallerySnapsTabDataSource _operaGroupWithGroudId:entry:snaps:isFavorited:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x106ce40a8

// -[SCGallerySnapsTabDataSource dataSource:didChangeEntries:failedEntries:fetchEntryError:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106ce4770

// -[SCGallerySnapsTabDataSource _observeFeaturedStories]
// Type encoding: v16@0:8
// Implementation: 0x106ce4904

// -[SCGallerySnapsTabDataSource _debounceUpdateWithFeaturedStoriesSectionModelIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ce4b6c

// -[SCGallerySnapsTabDataSource _invalidateFeaturedStoriesUpdatingTimer]
// Type encoding: v16@0:8
// Implementation: 0x106ce4c9c

// -[SCGallerySnapsTabDataSource _updateSearchResults]
// Type encoding: v16@0:8
// Implementation: 0x106ce4cc8

// -[SCGallerySnapsTabDataSource _filteredEntriesWithEntries:]
// Type encoding: @24@0:8@16
// Implementation: 0x106ce4d30

// -[SCGallerySnapsTabDataSource _updateEntries:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ce5044

// -[SCGallerySnapsTabDataSource _reclusterWithEntriesIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ce50e0

// -[SCGallerySnapsTabDataSource _startInitialClustering]
// Type encoding: v16@0:8
// Implementation: 0x106ce586c

// -[SCGallerySnapsTabDataSource _buildSingleGroupViewModel:groupTitle:kind:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x106ce5cb8

// -[SCGallerySnapsTabDataSource _localFetchEntryForGallerySnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x106ce6644

// -[SCGallerySnapsTabDataSource _createCellViewModelWithSnapGroup:entry:isFavorited:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x106ce664c

// -[SCGallerySnapsTabDataSource _getVideoDurationDisplayWithTotalDuration:]
// Type encoding: @24@0:8d16
// Implementation: 0x106ce6c94

// -[SCGallerySnapsTabDataSource _mergeGroupViewModel:withAnotherGroupViewModel:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106ce6d18

// -[SCGallerySnapsTabDataSource _setFeaturedStoriesViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ce70d0

// -[SCGallerySnapsTabDataSource _getCameraRollSectionModelWithCRSectionDictionary:curClusterTitle:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106ce7214

// -[SCGallerySnapsTabDataSource _insertMonthlyCRSectionModelsWithCRSectionDictionary:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ce7320

// -[SCGallerySnapsTabDataSource _generateSectionControllerViewModels]
// Type encoding: v16@0:8
// Implementation: 0x106ce7b74

// -[SCGallerySnapsTabDataSource _setMomentViewModels:withUpdateReason:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106ce829c

// -[SCGallerySnapsTabDataSource _lockedSnapModalCardInsertionIndexForGroupViewModels:clusterModels:]
// Type encoding: q32@0:8@16@24
// Implementation: 0x106ce85ac

// -[SCGallerySnapsTabDataSource _setIsLoading:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ce888c

// -[SCGallerySnapsTabDataSource _generateGroupViewModelsWithStorageAtRiskSnaps:clusters:isComplete:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x106ce8970

// -[SCGallerySnapsTabDataSource _getSnapCellViewModelsWithGroupViewModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x106ce8d30

// -[SCGallerySnapsTabDataSource _logPageLoadMetricsForDataLoadEndAndViewModelCreationStartOnHomeTab]
// Type encoding: v16@0:8
// Implementation: 0x106ce8f4c

// -[SCGallerySnapsTabDataSource _logPageLoadMetricsForViewModelCreationEndOnHomeTab]
// Type encoding: v16@0:8
// Implementation: 0x106ce8f98

// -[SCGallerySnapsTabDataSource memoriesInlineSearchDataSource:didChangeSearchResults:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106ce8fbc

// -[SCGallerySnapsTabDataSource snapsTabCRDataSourceDidUpdateCRViewModelforDataMetaDatas:forRequestUUID:shouldForceUpdate:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x106ce936c

// -[SCGallerySnapsTabDataSource _updateLibraryGroupTitleWithFinalCount]
// Type encoding: v16@0:8
// Implementation: 0x106ce94b8

// -[SCGallerySnapsTabDataSource delegate]
// Type encoding: @16@0:8
// Implementation: 0x106ce97c8

// -[SCGallerySnapsTabDataSource setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ce97e0

// -[SCGallerySnapsTabDataSource selectMode]
// Type encoding: B16@0:8
// Implementation: 0x106ce97ec

// -[SCGallerySnapsTabDataSource lockedSnapModalCardInsertionIndex]
// Type encoding: q16@0:8
// Implementation: 0x106ce97f4

// -[SCGallerySnapsTabDataSource searchResultRankByEntryId]
// Type encoding: @16@0:8
// Implementation: 0x106ce97fc

// -[SCGallerySnapsTabDataSource setSearchResultRankByEntryId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ce9808

// -[SCGallerySnapsTabDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ce9810

@end
