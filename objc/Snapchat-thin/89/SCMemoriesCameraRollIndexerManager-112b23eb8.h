// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesCameraRollIndexerManager
// Superclass: NSObject
// Address: 0x112b23eb8

@interface SCMemoriesCameraRollIndexerManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesCameraRollIndexerManager _initWithTransactor:performer:photoPermissionCoordinator:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106c2803c

// -[SCMemoriesCameraRollIndexerManager _setFetchingParams:maxNumberOfAssets:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x106c28204

// -[SCMemoriesCameraRollIndexerManager _setIndexers:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c2820c

// -[SCMemoriesCameraRollIndexerManager initWithCoreConfigProvider:photoPermissionCoordinator:applicationLifecycleEvents:grapheneRegistry:transactorProvider:localNotificationScheduler:blizzardLogger:modelProvider:memoriesVisualTagAnalyzer:memoriesLogger:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x106c23b9c

// -[SCMemoriesCameraRollIndexerManager startIndexing]
// Type encoding: @16@0:8
// Implementation: 0x106c2403c

// -[SCMemoriesCameraRollIndexerManager cancel]
// Type encoding: v16@0:8
// Implementation: 0x106c24a4c

// -[SCMemoriesCameraRollIndexerManager _canStartIndexingJob]
// Type encoding: @16@0:8
// Implementation: 0x106c24ab4

// -[SCMemoriesCameraRollIndexerManager _getBatchToIndex]
// Type encoding: @16@0:8
// Implementation: 0x106c24f94

// -[SCMemoriesCameraRollIndexerManager _fetchCameraRoll:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c253b4

// -[SCMemoriesCameraRollIndexerManager _processCameraRollFetchResultResult:batchId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106c257c0

// -[SCMemoriesCameraRollIndexerManager _processCameraRollFetchResult:batchId:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x106c25a5c

// -[SCMemoriesCameraRollIndexerManager _cachedIndexResults:batchId:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x106c26374

// -[SCMemoriesCameraRollIndexerManager _assetsToIndex:batchId:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x106c268e0

// -[SCMemoriesCameraRollIndexerManager _indexResultsWithAllAssets:batchId:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x106c26cfc

// -[SCMemoriesCameraRollIndexerManager _indexResults:cachedIndexResults:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106c2705c

// -[SCMemoriesCameraRollIndexerManager _newPhotoLibraryFetcher]
// Type encoding: @16@0:8
// Implementation: 0x106c27e34

// -[SCMemoriesCameraRollIndexerManager _didReceiveMemoryWarning]
// Type encoding: v16@0:8
// Implementation: 0x106c27f10

// -[SCMemoriesCameraRollIndexerManager _hasMemoryWarning]
// Type encoding: B16@0:8
// Implementation: 0x106c27f50

// -[SCMemoriesCameraRollIndexerManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106c27fac

@end
