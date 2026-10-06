// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: CTPItemsLoaderCompute
// Superclass: NSObject
// Address: 0x112a463d8

@interface CTPItemsLoaderCompute

// Property: loaderType; attributes: TQ,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[CTPItemsLoaderCompute initWithItemsPersistenceService:networkItemsClient:circumstanceEngine:repositoryLogger:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10557649c

// -[CTPItemsLoaderCompute loaderType]
// Type encoding: Q16@0:8
// Implementation: 0x1055765d0

// -[CTPItemsLoaderCompute itemsForFeed:returnCachedFirst:useChecksum:]
// Type encoding: @32@0:8@16B24B28
// Implementation: 0x1055765d8

// -[CTPItemsLoaderCompute itemsForFeed:pageToken:pageSize:returnCachedFirst:]
// Type encoding: @44@0:8@16@24q32B40
// Implementation: 0x1055765e4

// -[CTPItemsLoaderCompute _itemsForFeed:returnCachedFirst:useChecksum:pageToken:pageSize:]
// Type encoding: @48@0:8@16B24B28@32q40
// Implementation: 0x1055765fc

// -[CTPItemsLoaderCompute continuouslyUpdatingItemsForFeed:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055769e4

// -[CTPItemsLoaderCompute _getItemsFromCacheThenNetworkIfNecessaryForFeed:useChecksum:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x105577020

// -[CTPItemsLoaderCompute _getItemsFromCacheThenNetworkIfNecessaryForFeed:useChecksum:pageSize:pageToken:]
// Type encoding: @44@0:8@16B24q28@36
// Implementation: 0x10557702c

// -[CTPItemsLoaderCompute _getItemsFromNetworkIfCacheExpired:lifecycle:behaviorSubject:previousResult:useChecksum:]
// Type encoding: v52@0:8@16@24@32q40B48
// Implementation: 0x105577488

// -[CTPItemsLoaderCompute _getItemsFromCacheOnlyIfValidForFeed:useChecksum:pageSize:pageToken:]
// Type encoding: @44@0:8@16B24q28@36
// Implementation: 0x105577af4

// -[CTPItemsLoaderCompute _fetchFromNetworkForSubject:feed:computeEndpoint:backendPrivateData:previousResult:useChecksum:pageSize:pageToken:]
// Type encoding: v76@0:8@16@24@32@40q48B56q60@68
// Implementation: 0x105578468

// -[CTPItemsLoaderCompute _getItemsFromNetworkIfCacheExpiredWithPagination:lifecycle:behaviorSubject:previousResult:pageSize:pageToken:]
// Type encoding: v64@0:8@16@24@32q40q48@56
// Implementation: 0x1055784a8

// -[CTPItemsLoaderCompute _fetchItemsForFeedWithPagination:pageToken:pageSize:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x1055788a4

// -[CTPItemsLoaderCompute _fetchItemsForFeedWithPagination:forSubject:previousResult:pageToken:pageSize:]
// Type encoding: v56@0:8@16@24q32@40q48
// Implementation: 0x105578930

// -[CTPItemsLoaderCompute _processPaginatedNetworkResponse:feed:subject:previousResult:isFirstPage:]
// Type encoding: v52@0:8@16@24@32q40B48
// Implementation: 0x105578c00

// -[CTPItemsLoaderCompute _handlePaginatedComputeResult:forFeed:subject:previousResult:isFirstPage:]
// Type encoding: v52@0:8@16@24@32q40B48
// Implementation: 0x105579034

// -[CTPItemsLoaderCompute _processPagedFlatResult:responseToken:forFeed:subject:previousResult:isFirstPage:]
// Type encoding: v60@0:8@16@24@32@40q48B56
// Implementation: 0x105579268

// -[CTPItemsLoaderCompute _mergeAndPersistPagedItems:pageToken:forFeed:subject:previousResult:uiItemsGroups:]
// Type encoding: v64@0:8@16@24@32@40q48@56
// Implementation: 0x1055795a4

// -[CTPItemsLoaderCompute _mergeExistingItems:withNewItems:forFeed:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105579880

// -[CTPItemsLoaderCompute _deduplicateAndMergeExisting:withNewItems:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1055799c8

// -[CTPItemsLoaderCompute _reRankItems:shouldReverse:forFeedId:]
// Type encoding: @36@0:8@16B24@28
// Implementation: 0x105579dc0

// -[CTPItemsLoaderCompute _persistPagedItems:pageToken:forFeed:subject:previousResult:uiItemsGroups:]
// Type encoding: v64@0:8@16@24@32@40q48@56
// Implementation: 0x10557a010

// -[CTPItemsLoaderCompute _areCachedItemsValidForFeed:]
// Type encoding: @24@0:8@16
// Implementation: 0x10557a354

// -[CTPItemsLoaderCompute _shouldReverseFeedResults:]
// Type encoding: B24@0:8Q16
// Implementation: 0x10557a5b0

// -[CTPItemsLoaderCompute _isFeedValid:feedType:]
// Type encoding: B32@0:8@16Q24
// Implementation: 0x10557a5cc

// -[CTPItemsLoaderCompute _fetchItemsFromCacheForFeed:]
// Type encoding: @24@0:8@16
// Implementation: 0x10557a7c0

// -[CTPItemsLoaderCompute _fetchItemsForComputeFeedEndpoint:backendPrivateData:feed:forSubject:previousResult:useChecksum:]
// Type encoding: v60@0:8@16@24@32@40q48B56
// Implementation: 0x10557ad4c

// -[CTPItemsLoaderCompute _fetchItemsForComputeFeedEndpoint:backendPrivateData:feed:forSubject:previousResult:cachedItems:]
// Type encoding: v64@0:8@16@24@32@40q48@56
// Implementation: 0x10557b00c

// -[CTPItemsLoaderCompute _updateMutablePersistedItemArrayWithCurrentPersisted:cachedItemMap:rawItems:feedId:sectionMetadata:reverseItems:]
// Type encoding: v60@0:8@16@24@32@40@48B56
// Implementation: 0x10557be88

// -[CTPItemsLoaderCompute _itemsGroupFromResultSection:]
// Type encoding: @24@0:8@16
// Implementation: 0x10557c524

// -[CTPItemsLoaderCompute _shuffleIfNeededItemsFromItems:withDisplayCount:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10557c790

// -[CTPItemsLoaderCompute _itemFromPersistedItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x10557c828

// -[CTPItemsLoaderCompute _itemsFromResultItems:withFeed:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10557c934

// -[CTPItemsLoaderCompute _flatItemsGroupFromItems:feedName:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10557cc68

// -[CTPItemsLoaderCompute _itemsGroupForPersistedSection:reverseItems:timestamp:]
// Type encoding: @36@0:8@16B24Q28
// Implementation: 0x10557ccdc

// -[CTPItemsLoaderCompute _fetchPersistenceItemsFromCacheForFeed:]
// Type encoding: @24@0:8@16
// Implementation: 0x10557d0a8

// -[CTPItemsLoaderCompute _itemFromCachedItemId:withFeed:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10557d4b8

// -[CTPItemsLoaderCompute _parseExistingPersistedItemsFromNetworkResults:withFeed:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10557d834

// -[CTPItemsLoaderCompute .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10557da20

@end
