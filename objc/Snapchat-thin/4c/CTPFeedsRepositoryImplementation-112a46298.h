// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: CTPFeedsRepositoryImplementation
// Superclass: NSObject
// Address: 0x112a46298

@interface CTPFeedsRepositoryImplementation

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[CTPFeedsRepositoryImplementation initWithNetworkFeedsClient:feedsPersistenceService:experiments:logger:circumstanceEngine:kmpFeedsPersistenceService:crashLogger:preferences:creativeToolsABProvider:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x105571394

// -[CTPFeedsRepositoryImplementation feedsTreeWithContext:supportedFeedTypes:]
// Type encoding: @32@0:8Q16@24
// Implementation: 0x105571598

// -[CTPFeedsRepositoryImplementation feedsTreeWithCacheLookupWithContext:supportedFeedTypes:]
// Type encoding: @32@0:8Q16@24
// Implementation: 0x10557179c

// -[CTPFeedsRepositoryImplementation feedsTreeForPreview]
// Type encoding: @16@0:8
// Implementation: 0x105571920

// -[CTPFeedsRepositoryImplementation feedsTreeForComments]
// Type encoding: @16@0:8
// Implementation: 0x105571b04

// -[CTPFeedsRepositoryImplementation feedsTreeForChat]
// Type encoding: @16@0:8
// Implementation: 0x105571b14

// -[CTPFeedsRepositoryImplementation feedNodeForContext:type:forceLoad:]
// Type encoding: @36@0:8Q16Q24B32
// Implementation: 0x105571c0c

// -[CTPFeedsRepositoryImplementation _saveFeedResultToKmpStorage:context:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105571c18

// -[CTPFeedsRepositoryImplementation _cacheBasedFeedNodeWithContext:type:checkCacheDuration:network:]
// Type encoding: @40@0:8Q16Q24B32B36
// Implementation: 0x105572268

// -[CTPFeedsRepositoryImplementation _cacheBasedFeedTreeWithContext:supportedFeedTypes:checkCacheDuration:]
// Type encoding: @36@0:8Q16@24B32
// Implementation: 0x1055729ec

// -[CTPFeedsRepositoryImplementation _setNewSupportedFeedTypesForContext:supportedFeedTypes:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x105572d08

// -[CTPFeedsRepositoryImplementation _isNewSupportedFeedTypesForContext:supportedFeedTypes:]
// Type encoding: B32@0:8Q16@24
// Implementation: 0x105572da0

// -[CTPFeedsRepositoryImplementation _loadFeedFromCacheForContext:checkCacheDuration:]
// Type encoding: @28@0:8Q16B24
// Implementation: 0x105572e90

// -[CTPFeedsRepositoryImplementation _saveFeedToCacheForContext:feedResponse:]
// Type encoding: @32@0:8Q16@24
// Implementation: 0x105573158

// -[CTPFeedsRepositoryImplementation _loadFeedFromNetworkAndSaveToDBForContext:supportedFeedTypes:]
// Type encoding: @32@0:8Q16@24
// Implementation: 0x1055733ec

// -[CTPFeedsRepositoryImplementation _isFeedValid:]
// Type encoding: B24@0:8@16
// Implementation: 0x105573900

// -[CTPFeedsRepositoryImplementation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105573994

@end
