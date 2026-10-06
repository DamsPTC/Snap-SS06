// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCJobSchedulerJobInfoDataSource
// Superclass: NSObject
// Address: 0x112b30258

@interface SCJobSchedulerJobInfoDataSource


// -[SCJobSchedulerJobInfoDataSource initWithCacheEnabled:]
// Type encoding: @20@0:8B16
// Implementation: 0x1006f1774

// -[SCJobSchedulerJobInfoDataSource fetchJobInfoWithContext:jobTypeIdentifier:jobSubtypeIdentifier:scope:]
// Type encoding: @44@0:8@16@24@32i40
// Implementation: 0x106cbfc2c

// -[SCJobSchedulerJobInfoDataSource fetchJobInfoWithContext:uuid:scope:]
// Type encoding: @36@0:8@16@24i32
// Implementation: 0x106cc046c

// -[SCJobSchedulerJobInfoDataSource fetchJobInfo:scope:]
// Type encoding: @28@0:8@16i24
// Implementation: 0x106cc0874

// -[SCJobSchedulerJobInfoDataSource upsertJobInfoWithContext:jobInfo:scope:]
// Type encoding: v36@0:8@16@24i32
// Implementation: 0x106cc0a84

// -[SCJobSchedulerJobInfoDataSource deleteJobInfoWithContext:jobInfo:scope:]
// Type encoding: v36@0:8@16@24i32
// Implementation: 0x106cc0dbc

// -[SCJobSchedulerJobInfoDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106cc1058

@end
