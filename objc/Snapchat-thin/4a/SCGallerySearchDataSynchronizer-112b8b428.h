// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGallerySearchDataSynchronizer
// Superclass: NSObject
// Address: 0x112b8b428

@interface SCGallerySearchDataSynchronizer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGallerySearchDataSynchronizer initWithMemoriesSearchDatabase:searchIndexer:cloudSync:profile:keyService:dataObjectContext:docObjectContext:circumstanceEngine:snapInfoFetcher:grapheneRegistry:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x107f1df78

// -[SCGallerySearchDataSynchronizer dedicatedQueue]
// Type encoding: @16@0:8
// Implementation: 0x107f1e2c4

// -[SCGallerySearchDataSynchronizer runWithServiceTerm:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f1e2cc

// -[SCGallerySearchDataSynchronizer _fullySyncedNotifier:]
// Type encoding: @24@0:8d16
// Implementation: 0x107f1e360

// -[SCGallerySearchDataSynchronizer defaultImmediateNotifier]
// Type encoding: @16@0:8
// Implementation: 0x107f1e46c

// -[SCGallerySearchDataSynchronizer defaultLongRunningNotifier]
// Type encoding: @16@0:8
// Implementation: 0x107f1e474

// -[SCGallerySearchDataSynchronizer _transitToState:serviceTerm:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x107f1e480

// -[SCGallerySearchDataSynchronizer _fetchSnapsWithServiceTerm:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f1e510

// -[SCGallerySearchDataSynchronizer _fetchIndexedSnapsWithServiceTerm:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f1e7fc

// -[SCGallerySearchDataSynchronizer _indexSnapWithServiceTerm:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f1f668

// -[SCGallerySearchDataSynchronizer _isSnapIndexed:isTinyClipEmbeddingsRequired:]
// Type encoding: B28@0:8@16B24
// Implementation: 0x107f1fb40

// -[SCGallerySearchDataSynchronizer _shouldFetchSnapDetailOnFlyWithSnap:]
// Type encoding: B24@0:8@16
// Implementation: 0x107f1fbe8

// -[SCGallerySearchDataSynchronizer _logMobileClipLatestVersionBackfillPercentageForCofValue:totalSnapsCount:isSince2024:]
// Type encoding: v36@0:8q16q24B32
// Implementation: 0x107f1fc64

// -[SCGallerySearchDataSynchronizer _getPercentageFrom:indexedSnaps:]
// Type encoding: d32@0:8q16q24
// Implementation: 0x107f1fd64

// -[SCGallerySearchDataSynchronizer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107f1fd8c

@end
