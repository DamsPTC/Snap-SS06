// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiskUsageMetric
// Superclass: NSObject
// Address: 0xad4e50

@interface SCDiskUsageMetric

// Property: path; attributes: T@"NSString",R,C,N,V_path
// Property: localSizeBytes; attributes: TQ,R,N,V_localSizeBytes
// Property: recursiveSizeBytes; attributes: TQ,R,N,V_recursiveSizeBytes
// Property: fileCount; attributes: TQ,R,N,V_fileCount
// Property: reportLimit; attributes: TQ,R,N,V_reportLimit
// Property: subdirectories; attributes: T@"NSArray",R,C,N,V_subdirectories

// -[SCDiskUsageMetric init:localSizeBytes:recursiveSizeBytes:fileCount:]
// Type encoding: @48@0:8@16Q24Q32Q40
// Implementation: 0x43e428

// -[SCDiskUsageMetric init:localSizeBytes:fileCount:reportLimit:subdirectories:]
// Type encoding: @56@0:8@16Q24Q32Q40@48
// Implementation: 0x43e4d4

// -[SCDiskUsageMetric compare:]
// Type encoding: q24@0:8@16
// Implementation: 0x43e66c

// -[SCDiskUsageMetric isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x43e7a0

// -[SCDiskUsageMetric hash]
// Type encoding: Q16@0:8
// Implementation: 0x43e924

// -[SCDiskUsageMetric path]
// Type encoding: @16@0:8
// Implementation: 0x43e9e0

// -[SCDiskUsageMetric localSizeBytes]
// Type encoding: Q16@0:8
// Implementation: 0x43e9e8

// -[SCDiskUsageMetric recursiveSizeBytes]
// Type encoding: Q16@0:8
// Implementation: 0x43e9f0

// -[SCDiskUsageMetric fileCount]
// Type encoding: Q16@0:8
// Implementation: 0x43e9f8

// -[SCDiskUsageMetric reportLimit]
// Type encoding: Q16@0:8
// Implementation: 0x43ea00

// -[SCDiskUsageMetric subdirectories]
// Type encoding: @16@0:8
// Implementation: 0x43ea08

// -[SCDiskUsageMetric .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x43ea10

@end
