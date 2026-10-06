// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDirectoryScrubber
// Superclass: NSObject
// Address: 0x112d2bfa8

@interface SCDirectoryScrubber

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDirectoryScrubber initWithDirectory:]
// Type encoding: @24@0:8@16
// Implementation: 0x10bc76d20

// -[SCDirectoryScrubber initWithDirectory:fileMatchers:directoryMatchers:enforceUserScoping:maxDepth:maxMatchCount:isDryRun:enableSymlinkSplicing:]
// Type encoding: @68@0:8@16@24@32B40Q44q52B60B64
// Implementation: 0x10bc76d54

// -[SCDirectoryScrubber kindName]
// Type encoding: @16@0:8
// Implementation: 0x10bc77050

// -[SCDirectoryScrubber removeExpiredContentAsyncForReason:dispatchGroup:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x10bc770d8

// -[SCDirectoryScrubber removeAllUserSessionDataAsync]
// Type encoding: v16@0:8
// Implementation: 0x10bc779dc

// -[SCDirectoryScrubber handleEmergencyDiskConditionWithDispatchGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x10bc77be4

// -[SCDirectoryScrubber reportMetrics]
// Type encoding: @16@0:8
// Implementation: 0x10bc77be8

// -[SCDirectoryScrubber _emitDeleteFilesMetrics]
// Type encoding: v16@0:8
// Implementation: 0x10bc77c10

// -[SCDirectoryScrubber _emitDryDeleteFilesMetrics]
// Type encoding: v16@0:8
// Implementation: 0x10bc77df0

// -[SCDirectoryScrubber _removeFileIfExpired:properties:fileTrasher:metrics:currentMaxCount:]
// Type encoding: v56@0:8@16@24@32@40^q48
// Implementation: 0x10bc77f1c

// -[SCDirectoryScrubber _removeDirectoryIfExpired:properties:fileTrasher:metrics:currentMaxCount:]
// Type encoding: v56@0:8@16@24@32@40^q48
// Implementation: 0x10bc78224

// -[SCDirectoryScrubber _updateMetricsDataForRealRun:incrementCountBy:incrementSizeBy:deletionResult:]
// Type encoding: v44@0:8@16q24Q32B40
// Implementation: 0x10bc78588

// -[SCDirectoryScrubber _updateMetricsDataForDryRun:incrementCountBy:incrementSizeBy:]
// Type encoding: v40@0:8@16q24Q32
// Implementation: 0x10bc787d0

// -[SCDirectoryScrubber _convertByteToKB:]
// Type encoding: q24@0:8Q16
// Implementation: 0x10bc7895c

// -[SCDirectoryScrubber _getFilesCountAndSizeInDirectory:]
// Type encoding: @24@0:8@16
// Implementation: 0x10bc78974

// -[SCDirectoryScrubber _updateMetrics:fileUrl:properties:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10bc78c8c

// -[SCDirectoryScrubber _determineMetricsBucketForFile:]
// Type encoding: @24@0:8@16
// Implementation: 0x10bc78e7c

// -[SCDirectoryScrubber _updateBucket:properties:filenameForDetails:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10bc7902c

// -[SCDirectoryScrubber _addFilename:toBucket:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10bc79280

// -[SCDirectoryScrubber _addError:fileUrl:metrics:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10bc79328

// -[SCDirectoryScrubber _addNewParameter:forKey:metrics:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10bc793e8

// -[SCDirectoryScrubber _traversalOperationForFile:withProperties:trasher:maxCount:reportingMetrics:]
// Type encoding: B56@0:8@16@24@32^q40@48
// Implementation: 0x10bc794b4

// -[SCDirectoryScrubber .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10bc795d0

@end
