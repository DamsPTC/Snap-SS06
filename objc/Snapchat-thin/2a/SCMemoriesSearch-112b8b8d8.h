// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesSearch
// Superclass: NSObject
// Address: 0x112b8b8d8

@interface SCMemoriesSearch

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesSearch initWithDataObjectContext:galleryProfile:galleryEncryptedDatabase:memoriesSearchDatabase:sessionRequestManager:coreConfigProvider:aserConfigProvider:birthdayProvider:snapTokenProvider:locationPermissionsManager:locationProvider:simpleContentFetcher:grapheneRegistry:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112
// Implementation: 0x107f31450

// -[SCMemoriesSearch addToTagSetFromTags:inTagType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107f31ee4

// -[SCMemoriesSearch searchWithTypeahead:inputLocale:includePrivate:source:queue:completionHandler:]
// Type encoding: @60@0:8@16@24B32q36@44@?52
// Implementation: 0x107f320dc

// -[SCMemoriesSearch searchWithConcepts:queue:completionHandler:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x107f326bc

// -[SCMemoriesSearch searchAllTagResultsWithConcepts:queue:completionHandler:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x107f326cc

// -[SCMemoriesSearch searchMobileClipCaptionResults:queue:completionHandler:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x107f326dc

// -[SCMemoriesSearch _searchResultsWithConcepts:isForContentUnderstandingTab:queue:completionHandler:]
// Type encoding: @44@0:8@16B24@28@?36
// Implementation: 0x107f32ca4

// -[SCMemoriesSearch searchWithClusterNames:queue:completionHandler:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x107f331c0

// -[SCMemoriesSearch searchTimeLocationClusterWithTimetags:queue:completionHandler:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x107f33a30

// -[SCMemoriesSearch markSearchQueryResultsOutdatedForNewMEO]
// Type encoding: v16@0:8
// Implementation: 0x107f34590

// -[SCMemoriesSearch _applicationDidReceiveMemoryWarning:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f345c4

// -[SCMemoriesSearch _fetchDistinctTags:database:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107f34628

// -[SCMemoriesSearch _updatedOverallThreshold]
// Type encoding: f16@0:8
// Implementation: 0x107f347e0

// -[SCMemoriesSearch _reloadThresholdForConcepts]
// Type encoding: v16@0:8
// Implementation: 0x107f34840

// -[SCMemoriesSearch _thresholdForConcept:]
// Type encoding: f24@0:8@16
// Implementation: 0x107f34a00

// -[SCMemoriesSearch _segmentUserQueryIntoConcepts:inputLanguageId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107f34ad0

// -[SCMemoriesSearch _findMatchedConceptSimilarityPairsForQueryToken:fromTagSet:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107f34df4

// -[SCMemoriesSearch _findMatchedConceptsForQueryToken:withMatchedGeoTagSet:withMatchedTimeTagSet:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107f35014

// -[SCMemoriesSearch _appendQuerys:withTags:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107f354b0

// -[SCMemoriesSearch _getQuerys:withDictionary:withMatchedGeoTagSet:withMatchedTimeTagSet:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107f357ec

// -[SCMemoriesSearch _getConceptArraysFromUserQuery:withMatchedGeoTagSet:withMatchedTimeTagSet:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107f35bd0

// -[SCMemoriesSearch _hashTokenArray:]
// Type encoding: Q24@0:8@16
// Implementation: 0x107f36174

// -[SCMemoriesSearch _searchResultsFromFuzzyMatching:includePrivate:searchResults:geoNearbyResults:timeAroundResults:request:queue:completionHandler:]
// Type encoding: v76@0:8@16B24@28@36@44@52@60@?68
// Implementation: 0x107f36278

// -[SCMemoriesSearch _searchResultsWithValidTimeForUserQuery:searchResults:isFuzzyTimeParsing:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x107f36b2c

// -[SCMemoriesSearch _searchResultsBetweenStartDate:endDate:searchResults:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107f36c64

// -[SCMemoriesSearch _searchResultsFromPrefixMatching:inputLocale:includePrivate:searchResults:geoNearbyResults:timeAroundResults:request:queue:completionHandler:]
// Type encoding: v84@0:8@16@24B32@36@44@52@60@68@?76
// Implementation: 0x107f3707c

// -[SCMemoriesSearch _unionResultsWithSameResultTitle:newResult:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107f37f7c

// -[SCMemoriesSearch _querySqliteForOffsetsWithFullTextSearch:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f3822c

// -[SCMemoriesSearch _isValidConcept:inputLanguageId:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107f38584

// -[SCMemoriesSearch _isUserSpecificConcept:]
// Type encoding: B24@0:8@16
// Implementation: 0x107f38674

// -[SCMemoriesSearch _isInterpretableWithoutTagMatching:]
// Type encoding: B24@0:8@16
// Implementation: 0x107f386bc

// -[SCMemoriesSearch _querySqliteForNumberOfResultsWithFullTextSearch:]
// Type encoding: i24@0:8@16
// Implementation: 0x107f38730

// -[SCMemoriesSearch _addIntermediateSearchResults:toSearchResults:includePrivate:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x107f38904

// -[SCMemoriesSearch _appendSearchResults:toSearchResults:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107f38974

// -[SCMemoriesSearch _searchResultsForQuery:inputLocale:includePrivate:source:request:queue:completionHandler:]
// Type encoding: @68@0:8@16@24B32q36@44@52@?60
// Implementation: 0x107f38c5c

// -[SCMemoriesSearch _storyTitleSearchResultWithUserQuery:includePrivate:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x107f393b8

// -[SCMemoriesSearch _snapMatchInfosFromMatchingConcept:isForContentUnderstandingTab:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x107f396e4

// -[SCMemoriesSearch _similarResultsForQuery:includePrivate:request:queue:completionHandler:]
// Type encoding: @52@0:8@16B24@28@36@?44
// Implementation: 0x107f3980c

// -[SCMemoriesSearch allSearchQueryResults]
// Type encoding: @16@0:8
// Implementation: 0x107f39c1c

// -[SCMemoriesSearch blockList]
// Type encoding: @16@0:8
// Implementation: 0x107f39c64

// -[SCMemoriesSearch resumeServiceForSearchQueryResultsCollector]
// Type encoding: v16@0:8
// Implementation: 0x107f39c8c

// -[SCMemoriesSearch suspendServiceForSearchQueryResultsCollectorIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x107f39d20

// -[SCMemoriesSearch resumeServiceForVisualConceptUpdaterIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x107f39d98

// -[SCMemoriesSearch resumeServiceForSuggestedQueryUpdaterIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x107f39e24

// -[SCMemoriesSearch suspendServiceForSuggestedQueryUpdaterIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x107f39eb0

// -[SCMemoriesSearch _searchResultsFromSuggestedResults:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f39f28

// -[SCMemoriesSearch _fuzzyTimeStartDateWithOriginalStartDate:endDate:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107f3a114

// -[SCMemoriesSearch _snapMatchInfosFromFuzzyTimeParsing:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f3a18c

// -[SCMemoriesSearch _snapMatchInfosFromTimeParsing:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f3a4dc

// -[SCMemoriesSearch _autocompleteUserSpecificConcept:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f3a7dc

// -[SCMemoriesSearch _snapMatchInfosFromUserSpecificConcept:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f3a850

// -[SCMemoriesSearch _snapMatchInfosFromTagMatching:isForContentUnderstandingTab:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x107f3ad30

// -[SCMemoriesSearch _autocompleteConceptToSnapMatchInfosDictForPrefix:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f3b1d0

// -[SCMemoriesSearch _prefixMatchingConceptToSnapMatchInfosDictForPrefix:languageId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107f3b690

// -[SCMemoriesSearch _isSnapIdFormat:]
// Type encoding: B24@0:8@16
// Implementation: 0x107f3b838

// -[SCMemoriesSearch _searchResultFromSnapIdMatching:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f3b8d0

// -[SCMemoriesSearch _searchResultFromCaptionMatching:source:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x107f3b8d8

// -[SCMemoriesSearch _setupDatabase:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f3bb28

// -[SCMemoriesSearch _snapMatchInfosForCaptionMatchingText:source:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x107f3bd64

// -[SCMemoriesSearch _assembleSearchResultsFromSearchIntermediateResults:includePrivate:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x107f3c198

// -[SCMemoriesSearch _assembleSearchResultWithSnapMatchInfos:entries:snaps:resultTitle:isSimilarResult:]
// Type encoding: @52@0:8@16@24@32@40B48
// Implementation: 0x107f3cda8

// -[SCMemoriesSearch _tagConfidenceForSnap:tag:]
// Type encoding: d32@0:8@16@24
// Implementation: 0x107f3d564

// -[SCMemoriesSearch _outerJoinDictionary:andDictionary:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107f3d86c

// -[SCMemoriesSearch _normalizeString:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f3d9c8

// -[SCMemoriesSearch _tokenize:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f3df4c

// -[SCMemoriesSearch _getTagsFromString:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f3e04c

// -[SCMemoriesSearch invalidate]
// Type encoding: v16@0:8
// Implementation: 0x107f3e0b8

// -[SCMemoriesSearch .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107f3e108

@end
