// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensCustomNamespaceService
// Superclass: NSObject
// Address: 0x112bfaa08

@interface SCLensCustomNamespaceService

// Property: retrievalObservable; attributes: T@"SCObservable",R,N
// Property: cacheSizeObservable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensCustomNamespaceService initWithNamespaceDataProvider:metadataStoreUpdater:ttlSec:reloadTtlSec:limit:timeProvider:resetAccessDate:]
// Type encoding: @68@0:8@16@24d32d40q48@56B64
// Implementation: 0x10ae9aa08

// -[SCLensCustomNamespaceService retrievalObservable]
// Type encoding: @16@0:8
// Implementation: 0x10ae9ab60

// -[SCLensCustomNamespaceService cacheSizeObservable]
// Type encoding: @16@0:8
// Implementation: 0x10ae9ab88

// -[SCLensCustomNamespaceService cachedLensMetadataForLensId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10ae9abb0

// -[SCLensCustomNamespaceService cachedLensMetadataArrayForLensIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x10ae9abb4

// -[SCLensCustomNamespaceService lensMetadataWithId:featureAttribution:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10ae9abb8

// -[SCLensCustomNamespaceService lensMetadataArrayWithIds:featureAttribution:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10ae9acd0

// -[SCLensCustomNamespaceService observeLensMetadatasForIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x10ae9ad80

// -[SCLensCustomNamespaceService cachedLensMetadataArrayWithIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x10ae9ae30

// -[SCLensCustomNamespaceService addLensMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ae9ae34

// -[SCLensCustomNamespaceService addLensMetadataArray:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ae9aee0

// -[SCLensCustomNamespaceService saveToDisk]
// Type encoding: v16@0:8
// Implementation: 0x10ae9af24

// -[SCLensCustomNamespaceService _cachedLensMetadataCacheResultForLensId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10ae9af2c

// -[SCLensCustomNamespaceService _cachedLensMetadataCacheResultArrayForLensIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x10ae9b00c

// -[SCLensCustomNamespaceService _emitRetrievedResults:latency:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x10ae9b220

// -[SCLensCustomNamespaceService _emitRetrievedCount:missedCount:latency:]
// Type encoding: v40@0:8Q16Q24d32
// Implementation: 0x10ae9b4a4

// -[SCLensCustomNamespaceService _saveCurrentLensMetadataWithFreshLensMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ae9b558

// -[SCLensCustomNamespaceService _applyAccessDatesAndRemoveExpired:]
// Type encoding: @24@0:8@16
// Implementation: 0x10ae9b8e8

// -[SCLensCustomNamespaceService _updatedLensMetadataOrNil:]
// Type encoding: @24@0:8@16
// Implementation: 0x10ae9b954

// -[SCLensCustomNamespaceService _dateFresh:]
// Type encoding: B24@0:8@16
// Implementation: 0x10ae9bbe0

// -[SCLensCustomNamespaceService _shouldUpdateLens:]
// Type encoding: B24@0:8@16
// Implementation: 0x10ae9bc20

// -[SCLensCustomNamespaceService _isLensMetadataFresh:]
// Type encoding: B24@0:8@16
// Implementation: 0x10ae9bd10

// -[SCLensCustomNamespaceService _refreshAccessDateForLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ae9be00

// -[SCLensCustomNamespaceService _updateAccessDateForLensMetadataArray:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ae9beb4

// -[SCLensCustomNamespaceService _logEvictedLensesStringFromMetadata:filteredResult:reason:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10ae9c038

// -[SCLensCustomNamespaceService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10ae9c130

// +[SCLensCustomNamespaceService _truncatedMetadata:limit:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10ae9bac0

@end
