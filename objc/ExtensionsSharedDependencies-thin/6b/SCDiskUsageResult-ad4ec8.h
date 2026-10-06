// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiskUsageResult
// Superclass: NSObject
// Address: 0xad4ec8

@interface SCDiskUsageResult

// Property: rootFileCount; attributes: TQ,R,N,V_rootFileCount
// Property: rootRecursiveSizeBytes; attributes: TQ,R,N,V_rootRecursiveSizeBytes

// -[SCDiskUsageResult _scanRoot:]
// Type encoding: v24@0:8@16
// Implementation: 0x43ea40

// -[SCDiskUsageResult _scan:]
// Type encoding: v24@0:8@16
// Implementation: 0x43ee7c

// -[SCDiskUsageResult _scanHome:]
// Type encoding: v24@0:8@16
// Implementation: 0x43f028

// -[SCDiskUsageResult _determineMetricsForDirectoryAndSubdirectories:reportLimit:cancelationToken:]
// Type encoding: @40@0:8@16Q24@32
// Implementation: 0x43f444

// -[SCDiskUsageResult _determineMetricsForDirectory:cancelationToken:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x43f998

// -[SCDiskUsageResult enumerateMetrics:]
// Type encoding: v24@0:8@?16
// Implementation: 0x43fdec

// -[SCDiskUsageResult _determineOrdering:sort:limit:]
// Type encoding: @36@0:8@16B24q28
// Implementation: 0x440114

// -[SCDiskUsageResult rootFileCount]
// Type encoding: Q16@0:8
// Implementation: 0x4401d4

// -[SCDiskUsageResult rootRecursiveSizeBytes]
// Type encoding: Q16@0:8
// Implementation: 0x4401dc

// -[SCDiskUsageResult .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x4401e4

// +[SCDiskUsageResult scan:]
// Type encoding: @24@0:8@16
// Implementation: 0x43ee34

// +[SCDiskUsageResult _userScopedURLForDirectoryPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x43f1cc

// +[SCDiskUsageResult _globalScopedURLForDirectoryPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x43f274

// +[SCDiskUsageResult _extraDirectoriesToDeepScan]
// Type encoding: @16@0:8
// Implementation: 0x43f2e4

@end
