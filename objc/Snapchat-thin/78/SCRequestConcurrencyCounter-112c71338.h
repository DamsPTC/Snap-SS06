// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRequestConcurrencyCounter
// Superclass: NSObject
// Address: 0x112c71338

@interface SCRequestConcurrencyCounter

// Property: numOfAnalyticTasks; attributes: TQ,V_numOfAnalyticTasks
// Property: numOfMetadataTasks; attributes: TQ,V_numOfMetadataTasks
// Property: numOfUploadTasks; attributes: TQ,V_numOfUploadTasks
// Property: numOfSmallDLTasks; attributes: TQ,V_numOfSmallDLTasks
// Property: numOfLargeDLTasks; attributes: TQ,V_numOfLargeDLTasks
// Property: numOfBatchSmallDLTasks; attributes: TQ,V_numOfBatchSmallDLTasks
// Property: numOfStreamingChunkRequests; attributes: TQ,V_numOfStreamingChunkRequests

// -[SCRequestConcurrencyCounter init]
// Type encoding: @16@0:8
// Implementation: 0x1000e0a70

// -[SCRequestConcurrencyCounter registerTask:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b25cf58

// -[SCRequestConcurrencyCounter unregisterTask:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b25cff4

// -[SCRequestConcurrencyCounter updateTask:willRunTask:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10b25d090

// -[SCRequestConcurrencyCounter addContext:toTask:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b25d49c

// -[SCRequestConcurrencyCounter removeContext:toTask:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b25d6bc

// -[SCRequestConcurrencyCounter reset]
// Type encoding: v16@0:8
// Implementation: 0x10b25d8a8

// -[SCRequestConcurrencyCounter numOfLargeDLTasksInContext:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1005aa7d4

// -[SCRequestConcurrencyCounter numOfRunningInContextDownloadTasks]
// Type encoding: Q16@0:8
// Implementation: 0x10b25d9ac

// -[SCRequestConcurrencyCounter numOfRunningLargeInContextDownloadTasks]
// Type encoding: Q16@0:8
// Implementation: 0x10b25db48

// -[SCRequestConcurrencyCounter _safeCheckCountersAfterUnregisterTask:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b25de3c

// -[SCRequestConcurrencyCounter numOfAnalyticTasks]
// Type encoding: Q16@0:8
// Implementation: 0x10b25de84

// -[SCRequestConcurrencyCounter setNumOfAnalyticTasks:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b25de8c

// -[SCRequestConcurrencyCounter numOfMetadataTasks]
// Type encoding: Q16@0:8
// Implementation: 0x10b25de94

// -[SCRequestConcurrencyCounter setNumOfMetadataTasks:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b25de9c

// -[SCRequestConcurrencyCounter numOfUploadTasks]
// Type encoding: Q16@0:8
// Implementation: 0x10b25dea4

// -[SCRequestConcurrencyCounter setNumOfUploadTasks:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b25deac

// -[SCRequestConcurrencyCounter numOfSmallDLTasks]
// Type encoding: Q16@0:8
// Implementation: 0x10b25deb4

// -[SCRequestConcurrencyCounter setNumOfSmallDLTasks:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b25debc

// -[SCRequestConcurrencyCounter numOfLargeDLTasks]
// Type encoding: Q16@0:8
// Implementation: 0x10b25dec4

// -[SCRequestConcurrencyCounter setNumOfLargeDLTasks:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b25decc

// -[SCRequestConcurrencyCounter numOfBatchSmallDLTasks]
// Type encoding: Q16@0:8
// Implementation: 0x10b25ded4

// -[SCRequestConcurrencyCounter setNumOfBatchSmallDLTasks:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b25dedc

// -[SCRequestConcurrencyCounter numOfStreamingChunkRequests]
// Type encoding: Q16@0:8
// Implementation: 0x10b25dee4

// -[SCRequestConcurrencyCounter setNumOfStreamingChunkRequests:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b25deec

// -[SCRequestConcurrencyCounter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b25def4

// +[SCRequestConcurrencyCounter _numberOfTasksInArray:thatMatch:]
// Type encoding: Q32@0:8@16@?24
// Implementation: 0x10b25dd14

@end
