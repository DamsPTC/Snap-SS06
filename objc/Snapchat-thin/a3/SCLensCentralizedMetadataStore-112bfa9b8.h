// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensCentralizedMetadataStore
// Superclass: NSObject
// Address: 0x112bfa9b8

@interface SCLensCentralizedMetadataStore

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensCentralizedMetadataStore initWithCacheRetriever:networkRetriever:dataUpdater:performer:fetchOnlyNonCachedItems:]
// Type encoding: @52@0:8@16@24@32@40B48
// Implementation: 0x10ae98380

// -[SCLensCentralizedMetadataStore cachedLensMetadataArrayWithIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x10ae98484

// -[SCLensCentralizedMetadataStore lensMetadataWithId:featureAttribution:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10ae98524

// -[SCLensCentralizedMetadataStore lensMetadataArrayWithIds:featureAttribution:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10ae98a24

// -[SCLensCentralizedMetadataStore _updateStaleMetadata:featureAttribution:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10ae99518

// -[SCLensCentralizedMetadataStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10ae9a9c0

// +[SCLensCentralizedMetadataStore _convertCacheRetrievalResult:]
// Type encoding: @24@0:8@16
// Implementation: 0x10ae99084

// +[SCLensCentralizedMetadataStore _convertCacheRetrievalResultsWithStaleIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x10ae99308

// +[SCLensCentralizedMetadataStore _convertCacheRetrievalResults:]
// Type encoding: @24@0:8@16
// Implementation: 0x10ae9977c

// +[SCLensCentralizedMetadataStore _isSuccessfulResult:]
// Type encoding: B24@0:8@16
// Implementation: 0x10ae997dc

// +[SCLensCentralizedMetadataStore _successfulResultsMap:]
// Type encoding: @24@0:8@16
// Implementation: 0x10ae998b0

// +[SCLensCentralizedMetadataStore _mapFailedToPending:]
// Type encoding: @24@0:8@16
// Implementation: 0x10ae999ec

// +[SCLensCentralizedMetadataStore _lensIdIfSuccessful:]
// Type encoding: @24@0:8@16
// Implementation: 0x10ae99d44

// +[SCLensCentralizedMetadataStore _errorResultsForIds:networkError:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10ae99e68

// +[SCLensCentralizedMetadataStore _mergedNetworkResult:lensIds:successfulCacheResults:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10ae99f40

// +[SCLensCentralizedMetadataStore _lensMetadataFromResult:]
// Type encoding: @24@0:8@16
// Implementation: 0x10ae9a4b0

// +[SCLensCentralizedMetadataStore _lensMetadataFromResults:]
// Type encoding: @24@0:8@16
// Implementation: 0x10ae9a5cc

// +[SCLensCentralizedMetadataStore _logStringFromRetrievalResults:]
// Type encoding: @24@0:8@16
// Implementation: 0x10ae9a5ec

@end
