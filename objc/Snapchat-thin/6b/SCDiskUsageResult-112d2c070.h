// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiskUsageResult
// Superclass: NSObject
// Address: 0x112d2c070

@interface SCDiskUsageResult

// Property: rootFileCount; attributes: TQ,R,N,V_rootFileCount
// Property: rootRecursiveSizeBytes; attributes: TQ,R,N,V_rootRecursiveSizeBytes

// -[SCDiskUsageResult _scanRoot:]
// Type encoding: v24@0:8@16
// Implementation: 0x10bc79c60

// -[SCDiskUsageResult _scan:]
// Type encoding: v24@0:8@16
// Implementation: 0x10bc7a09c

// -[SCDiskUsageResult _scanHome:]
// Type encoding: v24@0:8@16
// Implementation: 0x10bc7a248

// -[SCDiskUsageResult _determineMetricsForDirectoryAndSubdirectories:reportLimit:cancelationToken:]
// Type encoding: @40@0:8@16Q24@32
// Implementation: 0x10bc7a664

// -[SCDiskUsageResult _determineMetricsForDirectory:cancelationToken:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10bc7ab2c

// -[SCDiskUsageResult enumerateMetrics:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10bc7aee8

// -[SCDiskUsageResult _determineOrdering:sort:limit:]
// Type encoding: @36@0:8@16B24q28
// Implementation: 0x10bc7b210

// -[SCDiskUsageResult rootFileCount]
// Type encoding: Q16@0:8
// Implementation: 0x10bc7b2d0

// -[SCDiskUsageResult rootRecursiveSizeBytes]
// Type encoding: Q16@0:8
// Implementation: 0x10bc7b2d8

// -[SCDiskUsageResult .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10bc7b2e0

// +[SCDiskUsageResult scan:]
// Type encoding: @24@0:8@16
// Implementation: 0x10bc7a054

// +[SCDiskUsageResult _userScopedURLForDirectoryPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x10bc7a3ec

// +[SCDiskUsageResult _globalScopedURLForDirectoryPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x10bc7a494

// +[SCDiskUsageResult _extraDirectoriesToDeepScan]
// Type encoding: @16@0:8
// Implementation: 0x10bc7a504

@end
