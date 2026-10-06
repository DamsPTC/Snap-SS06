// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUcoLensDataStore
// Superclass: NSObject
// Address: 0x112be1af8

@interface SCUcoLensDataStore

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUcoLensDataStore initWithLazyStoreTuple:lensDataFetcherFactory:lensDownloadTracker:grapheneRegistry:effectContentPathCache:redownloadLogger:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1090298d4

// -[SCUcoLensDataStore fetchedUCOObservable]
// Type encoding: @16@0:8
// Implementation: 0x109029a98

// -[SCUcoLensDataStore fetchUcoWithFilterId:completion:completionPerformer:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x109029ac0

// -[SCUcoLensDataStore fetchUcoWithFilterId:requestTiming:completion:completionPerformer:]
// Type encoding: v48@0:8@16q24@?32@40
// Implementation: 0x109029ad0

// -[SCUcoLensDataStore fetchUcoIconWithFilterId:completion:completionPerformer:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x109029ae0

// -[SCUcoLensDataStore _fetchUcoWithFilterId:requestTiming:justIcon:completion:completionPerformer:]
// Type encoding: v52@0:8@16q24B32@?36@44
// Implementation: 0x109029af4

// -[SCUcoLensDataStore fetchUcoWithLens:completion:completionPerformer:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x109029cc4

// -[SCUcoLensDataStore startUpdatingWithMode:]
// Type encoding: v24@0:8Q16
// Implementation: 0x109029e90

// -[SCUcoLensDataStore stopUpdating]
// Type encoding: v16@0:8
// Implementation: 0x109029ee0

// -[SCUcoLensDataStore _lensByFilterId:lens:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x109029f2c

// -[SCUcoLensDataStore _fetchUcoWithFilterId:lens:requestTiming:justIcon:completion:completionPerformer:]
// Type encoding: v60@0:8@16@24q32B40@?44@52
// Implementation: 0x10902a410

// -[SCUcoLensDataStore _setUpMetadataStoreIfNeededWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10902a714

// -[SCUcoLensDataStore _finishSetUpMetadataStore]
// Type encoding: v16@0:8
// Implementation: 0x10902a960

// -[SCUcoLensDataStore _updateMapFromLenses:]
// Type encoding: v24@0:8@16
// Implementation: 0x10902aa30

// -[SCUcoLensDataStore _lensArrayToDict:]
// Type encoding: @24@0:8@16
// Implementation: 0x10902ab64

// -[SCUcoLensDataStore _fetchUcoWithLens:requestTiming:justIcon:completion:completionPerformer:]
// Type encoding: v52@0:8@16q24B32@?36@44
// Implementation: 0x10902acc4

// -[SCUcoLensDataStore _callCompletion:fetchedLens:error:completionPerformer:]
// Type encoding: v48@0:8@?16@24@32@40
// Implementation: 0x10902b0a0

// -[SCUcoLensDataStore didUpdateLenses:lensMetadataStore:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10902b3ac

// -[SCUcoLensDataStore didUpdateLensesToPrefetch:lensMetadataStore:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10902b3b0

// -[SCUcoLensDataStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10902b3b4

// +[SCUcoLensDataStore _augmentCompletion:withPerformer:]
// Type encoding: @?32@0:8@?16@24
// Implementation: 0x10902a25c

// +[SCUcoLensDataStore _invokeCompletionWithStoreDeallocatedError:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10902b1cc

// +[SCUcoLensDataStore _errorForNotFoundLensForId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10902b230

// +[SCUcoLensDataStore _storeDeallocatedError]
// Type encoding: @16@0:8
// Implementation: 0x10902b2a0

// +[SCUcoLensDataStore _underlyingStoreIsNilError]
// Type encoding: @16@0:8
// Implementation: 0x10902b2b0

// +[SCUcoLensDataStore _errorWithCode:description:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x10902b2c0

@end
