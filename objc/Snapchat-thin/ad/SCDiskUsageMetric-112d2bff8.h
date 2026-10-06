// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiskUsageMetric
// Superclass: NSObject
// Address: 0x112d2bff8

@interface SCDiskUsageMetric

// Property: path; attributes: T@"NSString",R,C,N,V_path
// Property: localSizeBytes; attributes: TQ,R,N,V_localSizeBytes
// Property: recursiveSizeBytes; attributes: TQ,R,N,V_recursiveSizeBytes
// Property: fileCount; attributes: TQ,R,N,V_fileCount
// Property: reportLimit; attributes: TQ,R,N,V_reportLimit
// Property: subdirectories; attributes: T@"NSArray",R,C,N,V_subdirectories

// -[SCDiskUsageMetric init:localSizeBytes:recursiveSizeBytes:fileCount:]
// Type encoding: @48@0:8@16Q24Q32Q40
// Implementation: 0x10bc79648

// -[SCDiskUsageMetric init:localSizeBytes:fileCount:reportLimit:subdirectories:]
// Type encoding: @56@0:8@16Q24Q32Q40@48
// Implementation: 0x10bc796f4

// -[SCDiskUsageMetric compare:]
// Type encoding: q24@0:8@16
// Implementation: 0x10bc7988c

// -[SCDiskUsageMetric isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10bc799c0

// -[SCDiskUsageMetric hash]
// Type encoding: Q16@0:8
// Implementation: 0x10bc79b44

// -[SCDiskUsageMetric path]
// Type encoding: @16@0:8
// Implementation: 0x10bc79c00

// -[SCDiskUsageMetric localSizeBytes]
// Type encoding: Q16@0:8
// Implementation: 0x10bc79c08

// -[SCDiskUsageMetric recursiveSizeBytes]
// Type encoding: Q16@0:8
// Implementation: 0x10bc79c10

// -[SCDiskUsageMetric fileCount]
// Type encoding: Q16@0:8
// Implementation: 0x10bc79c18

// -[SCDiskUsageMetric reportLimit]
// Type encoding: Q16@0:8
// Implementation: 0x10bc79c20

// -[SCDiskUsageMetric subdirectories]
// Type encoding: @16@0:8
// Implementation: 0x10bc79c28

// -[SCDiskUsageMetric .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10bc79c30

@end
