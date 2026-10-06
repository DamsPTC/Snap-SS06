// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStorageEventHandler
// Superclass: NSObject
// Address: 0x112cd3628

@interface SCStorageEventHandler


// -[SCStorageEventHandler initWithTimeProviding:preferences:blizzard:circumstanceEngine:backgroundTaskWrapper:cmCacheController:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10b7c72a8

// -[SCStorageEventHandler performStorageBackgroundedManagement:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7c7420

// -[SCStorageEventHandler _reportDiskUsageForSamplingRate:measureFrequencyInHours:]
// Type encoding: B24@0:8I16I20
// Implementation: 0x10b7c76f4

// -[SCStorageEventHandler _getCacheMetrics]
// Type encoding: @16@0:8
// Implementation: 0x10b7c77c4

// -[SCStorageEventHandler _getDiskUsageWithCancelationToken:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b7c788c

// -[SCStorageEventHandler _setGrapheneLoggerForTesting:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7c79bc

// -[SCStorageEventHandler _reportDiskUsage:reportTotalDiskUsage:reportDirectoryDiskUsage:]
// Type encoding: @32@0:8@16B24B28
// Implementation: 0x10b7c79ec

// -[SCStorageEventHandler _reportDiskUsageToBlizzardWithCacheMetrics:diskUsage:reportTotalDiskUsage:reportDirectoryDiskUsage:]
// Type encoding: v40@0:8@16@24B32B36
// Implementation: 0x10b7c7cc8

// -[SCStorageEventHandler _reportGrapheneDiskUsageMetric:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7c8238

// -[SCStorageEventHandler _generateDirUsageMetric:shortName:dirSizeMetricObject:directory:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10b7c8460

// -[SCStorageEventHandler _readCofDiskReportValue]
// Type encoding: @16@0:8
// Implementation: 0x10b7c8788

// -[SCStorageEventHandler _enumerateCacheMetrics:asComplexMetricsWithBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b7c89f8

// -[SCStorageEventHandler _convertByteToKB:]
// Type encoding: q24@0:8Q16
// Implementation: 0x10b7c8bd0

// -[SCStorageEventHandler _convertMiBToKB:]
// Type encoding: Q24@0:8d16
// Implementation: 0x10b7c8be8

// -[SCStorageEventHandler _fileSystemMetricInKB:]
// Type encoding: q24@0:8@16
// Implementation: 0x10b7c8bfc

// -[SCStorageEventHandler _backgroundTaskWrapperExpirationHandlerForTask:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b7c8ce8

// -[SCStorageEventHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b7c8d24

@end
