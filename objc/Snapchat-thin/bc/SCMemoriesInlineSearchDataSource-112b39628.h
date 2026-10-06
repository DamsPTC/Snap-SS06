// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesInlineSearchDataSource
// Superclass: NSObject
// Address: 0x112b39628

@interface SCMemoriesInlineSearchDataSource

// Property: semanticSearchGeneration; attributes: TQ,V_semanticSearchGeneration
// Property: isSearching; attributes: TB,R,N
// Property: sessionId; attributes: T@"NSString",R,C,N,V_sessionId
// Property: currentQuery; attributes: T@"NSString",R,C,N
// Property: selectedFacetKeys; attributes: T@"NSArray",R,C,N
// Property: semanticSearchLoading; attributes: TB,N,V_semanticSearchLoading
// Property: semanticSearchLoadingDidChangeHandler; attributes: T@?,C,N,V_semanticSearchLoadingDidChangeHandler
// Property: currentSemanticSearchGeneration; attributes: TQ,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesInlineSearchDataSource initWithGallerySearch:memoriesMergedDataSource:experimentService:facetSearch:semanticSearchResolver:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x106da8178

// -[SCMemoriesInlineSearchDataSource currentSemanticSearchGeneration]
// Type encoding: Q16@0:8
// Implementation: 0x106da82e8

// -[SCMemoriesInlineSearchDataSource isSearching]
// Type encoding: B16@0:8
// Implementation: 0x106da82ec

// -[SCMemoriesInlineSearchDataSource currentQuery]
// Type encoding: @16@0:8
// Implementation: 0x106da832c

// -[SCMemoriesInlineSearchDataSource selectedFacetKeys]
// Type encoding: @16@0:8
// Implementation: 0x106da8354

// -[SCMemoriesInlineSearchDataSource setSemanticSearchLoading:]
// Type encoding: v20@0:8B16
// Implementation: 0x106da836c

// -[SCMemoriesInlineSearchDataSource updateQueryString:didSelectResultTitle:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106da8394

// -[SCMemoriesInlineSearchDataSource updateSearchResults]
// Type encoding: v16@0:8
// Implementation: 0x106da8520

// -[SCMemoriesInlineSearchDataSource _updateSearchResults]
// Type encoding: v16@0:8
// Implementation: 0x106da8580

// -[SCMemoriesInlineSearchDataSource searchSuggestions]
// Type encoding: @16@0:8
// Implementation: 0x106da85e8

// -[SCMemoriesInlineSearchDataSource facetSuggestionsForQuery:]
// Type encoding: @24@0:8@16
// Implementation: 0x106da8648

// -[SCMemoriesInlineSearchDataSource submitSemanticSearchQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x106da86f8

// -[SCMemoriesInlineSearchDataSource clearSemanticSearchState]
// Type encoding: v16@0:8
// Implementation: 0x106da8888

// -[SCMemoriesInlineSearchDataSource cancelInFlightSemanticSearch]
// Type encoding: v16@0:8
// Implementation: 0x106da892c

// -[SCMemoriesInlineSearchDataSource _requestAndUpdateSearchResultsFromRefetch:]
// Type encoding: v20@0:8B16
// Implementation: 0x106da896c

// -[SCMemoriesInlineSearchDataSource addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106da8d14

// -[SCMemoriesInlineSearchDataSource removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106da8d68

// -[SCMemoriesInlineSearchDataSource dataSource:didChangeEntries:failedEntries:fetchEntryError:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106da8d70

// -[SCMemoriesInlineSearchDataSource setSearchSessionLoggingCoordinatorIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x106da8db8

// -[SCMemoriesInlineSearchDataSource _setDidSelectResultTitle:]
// Type encoding: v20@0:8B16
// Implementation: 0x106da8e0c

// -[SCMemoriesInlineSearchDataSource beginSearchSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x106da8e44

// -[SCMemoriesInlineSearchDataSource endSearchSession]
// Type encoding: v16@0:8
// Implementation: 0x106da8ef4

// -[SCMemoriesInlineSearchDataSource logSelectSearchResultWithSearchResultEntry:]
// Type encoding: v24@0:8@16
// Implementation: 0x106da8f58

// -[SCMemoriesInlineSearchDataSource logSelectSearchResultWithSearchResultSnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x106da8ff4

// -[SCMemoriesInlineSearchDataSource logPerformQueryAndUpdateSearchResultsInSession]
// Type encoding: v16@0:8
// Implementation: 0x106da9090

// -[SCMemoriesInlineSearchDataSource _updateResults:refetch:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106da90dc

// -[SCMemoriesInlineSearchDataSource _shouldUseSemanticSearch]
// Type encoding: B16@0:8
// Implementation: 0x106da9174

// -[SCMemoriesInlineSearchDataSource _requestAndUpdateSemanticSearchResultsFromRefetch:]
// Type encoding: v20@0:8B16
// Implementation: 0x106da91b4

// -[SCMemoriesInlineSearchDataSource _logSemanticSearchSupersededAtStage:facets:text:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106da9bcc

// -[SCMemoriesInlineSearchDataSource _refreshSemanticSearchResultsFromCachedResult]
// Type encoding: v16@0:8
// Implementation: 0x106da9c98

// -[SCMemoriesInlineSearchDataSource _resetSearchSession]
// Type encoding: v16@0:8
// Implementation: 0x106daa01c

// -[SCMemoriesInlineSearchDataSource _setSearchSessionIdIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106daa048

// -[SCMemoriesInlineSearchDataSource _isEligibleForSearchLogging]
// Type encoding: B16@0:8
// Implementation: 0x106daa09c

// -[SCMemoriesInlineSearchDataSource _logSelectSearchResultInSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x106daa0e4

// -[SCMemoriesInlineSearchDataSource _logUpdateSearchResultsInSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x106daa144

// -[SCMemoriesInlineSearchDataSource _logDeselectSearchResultInSession]
// Type encoding: v16@0:8
// Implementation: 0x106daa1dc

// -[SCMemoriesInlineSearchDataSource _logPerformQueryInSession]
// Type encoding: v16@0:8
// Implementation: 0x106daa224

// -[SCMemoriesInlineSearchDataSource _logEmbeddingQueryClearedInSession]
// Type encoding: v16@0:8
// Implementation: 0x106daa270

// -[SCMemoriesInlineSearchDataSource sessionId]
// Type encoding: @16@0:8
// Implementation: 0x106daa2c4

// -[SCMemoriesInlineSearchDataSource semanticSearchLoading]
// Type encoding: B16@0:8
// Implementation: 0x106daa2cc

// -[SCMemoriesInlineSearchDataSource semanticSearchLoadingDidChangeHandler]
// Type encoding: @?16@0:8
// Implementation: 0x106daa2d4

// -[SCMemoriesInlineSearchDataSource setSemanticSearchLoadingDidChangeHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106daa2dc

// -[SCMemoriesInlineSearchDataSource semanticSearchGeneration]
// Type encoding: Q16@0:8
// Implementation: 0x106daa2e4

// -[SCMemoriesInlineSearchDataSource setSemanticSearchGeneration:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106daa2ec

// -[SCMemoriesInlineSearchDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106daa2f4

@end
