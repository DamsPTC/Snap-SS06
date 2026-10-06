// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensMetadataFetcher
// Superclass: NSObject
// Address: 0x112bfb138

@interface SCLensMetadataFetcher

// Property: fetchingResult; attributes: T@"SCObservable",R,N
// Property: lastUpdateTimestamp; attributes: T@"NSDate",R,N

// -[SCLensMetadataFetcher initWithPreviousUpdateTimestamp:infoProvider:remoteFetcher:checksumsDataSource:fetchingQOS:]
// Type encoding: @52@0:8@16@24@32@40I48
// Implementation: 0x1004e5ca8

// -[SCLensMetadataFetcher _configureWithPreviousUpdateTimestamp:infoProvider:remoteFetcher:checksumsDataSource:fetchPerformer:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x1004e5dd8

// -[SCLensMetadataFetcher fetchingResult]
// Type encoding: @16@0:8
// Implementation: 0x1004e5f14

// -[SCLensMetadataFetcher lastUpdateTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x10aea2e54

// -[SCLensMetadataFetcher fetchData]
// Type encoding: v16@0:8
// Implementation: 0x10aea2e58

// -[SCLensMetadataFetcher fetchDataIfNecessary]
// Type encoding: @16@0:8
// Implementation: 0x10aea2f30

// -[SCLensMetadataFetcher clear]
// Type encoding: v16@0:8
// Implementation: 0x10aea3098

// -[SCLensMetadataFetcher _wrappedWithCheckFetchBlock:]
// Type encoding: @?24@0:8@?16
// Implementation: 0x10aea30a0

// -[SCLensMetadataFetcher _fetchDataWithFetchBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10aea31a4

// -[SCLensMetadataFetcher _fetchDataAfterDelay:withFetchBlock:]
// Type encoding: v32@0:8d16@?24
// Implementation: 0x10aea31e0

// -[SCLensMetadataFetcher _fetchData]
// Type encoding: v16@0:8
// Implementation: 0x10aea3280

// -[SCLensMetadataFetcher _fetchDataIfNecessary]
// Type encoding: B16@0:8
// Implementation: 0x10aea354c

// -[SCLensMetadataFetcher _retryFetchDataWithDelay:error:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x10aea3638

// -[SCLensMetadataFetcher previousUpdateTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x10aea3800

// -[SCLensMetadataFetcher setPreviousUpdateTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aea383c

// -[SCLensMetadataFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1004e63fc

@end
