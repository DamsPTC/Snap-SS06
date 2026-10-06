// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDirectoryScrubber
// Superclass: NSObject
// Address: 0xad4e00

@interface SCDirectoryScrubber

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDirectoryScrubber initWithDirectory:]
// Type encoding: @24@0:8@16
// Implementation: 0x43b93c

// -[SCDirectoryScrubber initWithDirectory:fileMatchers:directoryMatchers:enforceUserScoping:maxDepth:maxMatchCount:isDryRun:enableSymlinkSplicing:]
// Type encoding: @68@0:8@16@24@32B40Q44q52B60B64
// Implementation: 0x43b970

// -[SCDirectoryScrubber kindName]
// Type encoding: @16@0:8
// Implementation: 0x43bc6c

// -[SCDirectoryScrubber removeExpiredContentAsyncForReason:dispatchGroup:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x43bcf4

// -[SCDirectoryScrubber removeAllUserSessionDataAsync]
// Type encoding: v16@0:8
// Implementation: 0x43c6b0

// -[SCDirectoryScrubber handleEmergencyDiskConditionWithDispatchGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x43c8b8

// -[SCDirectoryScrubber reportMetrics]
// Type encoding: @16@0:8
// Implementation: 0x43c8bc

// -[SCDirectoryScrubber _emitDeleteFilesMetrics]
// Type encoding: v16@0:8
// Implementation: 0x43c8e4

// -[SCDirectoryScrubber _emitDryDeleteFilesMetrics]
// Type encoding: v16@0:8
// Implementation: 0x43cac4

// -[SCDirectoryScrubber _removeFileIfExpired:properties:fileTrasher:metrics:currentMaxCount:]
// Type encoding: v56@0:8@16@24@32@40^q48
// Implementation: 0x43cbf0

// -[SCDirectoryScrubber _removeDirectoryIfExpired:properties:fileTrasher:metrics:currentMaxCount:]
// Type encoding: v56@0:8@16@24@32@40^q48
// Implementation: 0x43cf98

// -[SCDirectoryScrubber _updateMetricsDataForRealRun:incrementCountBy:incrementSizeBy:deletionResult:]
// Type encoding: v44@0:8@16q24Q32B40
// Implementation: 0x43d2fc

// -[SCDirectoryScrubber _updateMetricsDataForDryRun:incrementCountBy:incrementSizeBy:]
// Type encoding: v40@0:8@16q24Q32
// Implementation: 0x43d544

// -[SCDirectoryScrubber _convertByteToKB:]
// Type encoding: q24@0:8Q16
// Implementation: 0x43d6d0

// -[SCDirectoryScrubber _getFilesCountAndSizeInDirectory:]
// Type encoding: @24@0:8@16
// Implementation: 0x43d6e8

// -[SCDirectoryScrubber _updateMetrics:fileUrl:properties:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x43da6c

// -[SCDirectoryScrubber _determineMetricsBucketForFile:]
// Type encoding: @24@0:8@16
// Implementation: 0x43dc5c

// -[SCDirectoryScrubber _updateBucket:properties:filenameForDetails:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x43de0c

// -[SCDirectoryScrubber _addFilename:toBucket:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x43e060

// -[SCDirectoryScrubber _addError:fileUrl:metrics:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x43e108

// -[SCDirectoryScrubber _addNewParameter:forKey:metrics:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x43e1c8

// -[SCDirectoryScrubber _traversalOperationForFile:withProperties:trasher:maxCount:reportingMetrics:]
// Type encoding: B56@0:8@16@24@32^q40@48
// Implementation: 0x43e294

// -[SCDirectoryScrubber .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x43e3b0

@end
