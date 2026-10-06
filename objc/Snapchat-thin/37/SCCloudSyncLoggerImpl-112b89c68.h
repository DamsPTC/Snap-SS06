// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCloudSyncLoggerImpl
// Superclass: NSObject
// Address: 0x112b89c68

@interface SCCloudSyncLoggerImpl

// Property: grapheneRegistry; attributes: T@"SCLazy",R,N,V_grapheneRegistry
// Property: crashLogger; attributes: T@"<SCCrashLogging>",R,N,V_crashLogger
// Property: userTrackedLogger; attributes: T@"SCLazy",R,N,V_userTrackedLogger
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCloudSyncLoggerImpl initWithPerformer:userTrackedLogger:grapheneRegistry:crashLogger:dataObjectContext:dreamsSessionService:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x107eae508

// -[SCCloudSyncLoggerImpl beginUploadForURL:snapId:contentType:dataSizeInBytes:]
// Type encoding: v48@0:8@16@24Q32Q40
// Implementation: 0x107eae694

// -[SCCloudSyncLoggerImpl beginUploadForURL:snapId:assetDescriptor:dataSizeInBytes:]
// Type encoding: v48@0:8@16@24@32Q40
// Implementation: 0x107eae818

// -[SCCloudSyncLoggerImpl endUploadForURL:succeeded:statusCode:parameters:]
// Type encoding: v44@0:8@16B24q28@36
// Implementation: 0x107eae9bc

// -[SCCloudSyncLoggerImpl logNewQueuedOperationWithParams:queueLength:blockedDurationInSec:]
// Type encoding: v40@0:8@16q24d32
// Implementation: 0x107eaedf4

// -[SCCloudSyncLoggerImpl logFinishedOperationWithOperationType:totalTimeInSec:networkProcessingTimeInSec:queueLength:logContexts:tempCellularBackupEnabled:]
// Type encoding: v60@0:8Q16d24d32q40@48B56
// Implementation: 0x107eaf504

// -[SCCloudSyncLoggerImpl logBlizzardAbandonOperation:entryId:snapId:mediaId:operationType:abandonReason:detail:]
// Type encoding: v72@0:8@16@24@32@40q48q56@64
// Implementation: 0x107eaf5c8

// -[SCCloudSyncLoggerImpl logSkipedOperationsFromOutOfOrderDeletion:logContexts:deleteEntryIds:backupNowEnabled:operationType:]
// Type encoding: v52@0:8@16@24@32B40Q44
// Implementation: 0x107eaf6fc

// -[SCCloudSyncLoggerImpl cloudSyncDidPerformStep:consoleParam:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x107eaf774

// -[SCCloudSyncLoggerImpl logBackupNetworkErrorWithStatusCode:detailStatusCode:retryCount:retryPolicy:backupStatus:analyticsType:]
// Type encoding: v64@0:8@16@24Q32q40Q48q56
// Implementation: 0x107eaf778

// -[SCCloudSyncLoggerImpl logBackupCloudFileLocalAvailability:IsSnapDuplicated:uploadState:analyticsType:]
// Type encoding: v40@0:8B16B20@24q32
// Implementation: 0x107eaf8a0

// -[SCCloudSyncLoggerImpl logBackupCloudFileMissingErrorWithCloudFileLocalAvailability:IsSnapDuplicated:uploadState:analyticsType:]
// Type encoding: v40@0:8B16B20@24q32
// Implementation: 0x107eafa70

// -[SCCloudSyncLoggerImpl logBlizzardBackupError:fromRetry:errorMessage:statusCode:detailStatusCode:]
// Type encoding: v52@0:8Q16B24@28q36q44
// Implementation: 0x107eafb70

// -[SCCloudSyncLoggerImpl logServletResponseErrorWithEntryType:]
// Type encoding: v24@0:8q16
// Implementation: 0x107eafc48

// -[SCCloudSyncLoggerImpl logBackupSnapDocError:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107eafc5c

// -[SCCloudSyncLoggerImpl logBackupNonFatalError:errorCategory:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x107eafc70

// -[SCCloudSyncLoggerImpl logBackupTranscodingError:]
// Type encoding: v24@0:8q16
// Implementation: 0x107eafd88

// -[SCCloudSyncLoggerImpl logSkipTranscodingReasonsWithSelectionMetrics:]
// Type encoding: v24@0:8@16
// Implementation: 0x107eafe4c

// -[SCCloudSyncLoggerImpl logBackupFatalRetry:retriedSnapCount:coreDataUpdateDidSucceed:]
// Type encoding: v36@0:8Q16Q24B32
// Implementation: 0x107eb0168

// -[SCCloudSyncLoggerImpl logLegacyEditsSize:mediaType:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x107eb0294

// -[SCCloudSyncLoggerImpl logBackupStepLatencies:mediaType:operationType:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x107eb02a8

// -[SCCloudSyncLoggerImpl logBackupStepFailureForOperationType:step:errorCategory:mediaType:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107eb04e0

// -[SCCloudSyncLoggerImpl logBackupLatency:mediaType:operationType:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x107eb06f8

// -[SCCloudSyncLoggerImpl logBackupCompleteForOperationType:isSuccess:mediaType:]
// Type encoding: v36@0:8q16C24@28
// Implementation: 0x107eb08f8

// -[SCCloudSyncLoggerImpl logBackupAttemptForOperationType:mediaType:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x107eb0a58

// -[SCCloudSyncLoggerImpl logDbAttemptBegin:operation:snapState:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x107eb0b64

// -[SCCloudSyncLoggerImpl logDbAttemptEnd:operation:snapState:success:dbLatencyMs:]
// Type encoding: v52@0:8@16Q24@32B40q44
// Implementation: 0x107eb0c44

// -[SCCloudSyncLoggerImpl logDedupeAddSnapsResult:entryType:isReplacingSnap:analytics:]
// Type encoding: v44@0:8q16q24B32@36
// Implementation: 0x107eb0e34

// -[SCCloudSyncLoggerImpl logBackgroundUploadError:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107eb1158

// -[SCCloudSyncLoggerImpl logBackgroundUploadStep:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107eb1214

// -[SCCloudSyncLoggerImpl logBackupJobAppendLatencyInSeconds:]
// Type encoding: v24@0:8d16
// Implementation: 0x107eb12d0

// -[SCCloudSyncLoggerImpl _logDedupeAddSnapsResultForMetric:operationType:entryType:analytics:isReplacedSnap:isDuplicatedSnap:]
// Type encoding: v56@0:8@16q24q32@40B48B52
// Implementation: 0x107eb135c

// -[SCCloudSyncLoggerImpl _shouldReportBlizzardEvent:]
// Type encoding: B24@0:8d16
// Implementation: 0x107eb156c

// -[SCCloudSyncLoggerImpl _logGallerySnapUploadMetrics:totalTimeInSec:tempCellularBackupEnabled:skipOperation:operationType:]
// Type encoding: v48@0:8@16d24B32B36Q40
// Implementation: 0x107eb1578

// -[SCCloudSyncLoggerImpl _logSnapGallerySnapUpload:totalTimeInSec:tempCellularBackupEnabled:skipOperation:]
// Type encoding: v40@0:8@16d24B32B36
// Implementation: 0x107eb16dc

// -[SCCloudSyncLoggerImpl _logTimelineDraftGallerySnapUpload:totalTimeInSec:tempCellularBackupEnabled:skipOperation:operationType:]
// Type encoding: v48@0:8@16d24B32B36Q40
// Implementation: 0x107eb1840

// -[SCCloudSyncLoggerImpl _emitTimelineDraftGallerySnapUpload:totalTimeInSec:tempCellularBackupEnabled:skipOperation:]
// Type encoding: v40@0:8@16d24B32B36
// Implementation: 0x107eb1998

// -[SCCloudSyncLoggerImpl _emitGallerySnapUploadWithSnapId:captureSessionId:mediaId:entryId:entryType:totalTimeInSec:skipOperation:requestId:]
// Type encoding: v72@0:8@16@24@32@40i48d52B60@64
// Implementation: 0x107eb1c20

// -[SCCloudSyncLoggerImpl _convertCloudSyncOperationType:]
// Type encoding: q24@0:8Q16
// Implementation: 0x107eb1f40

// -[SCCloudSyncLoggerImpl _addDbAttemptDimensions:stepName:operation:snapState:]
// Type encoding: @48@0:8@16@24Q32@40
// Implementation: 0x107eb1f60

// -[SCCloudSyncLoggerImpl _cloudSyncDbOperationSnapStateToString:]
// Type encoding: @24@0:8@16
// Implementation: 0x107eb2068

// -[SCCloudSyncLoggerImpl _cloudSyncBackupStatusToString:]
// Type encoding: @24@0:8Q16
// Implementation: 0x107eb20d4

// -[SCCloudSyncLoggerImpl _cloudSyncNetworkRetryCountToString:]
// Type encoding: @24@0:8Q16
// Implementation: 0x107eb20fc

// -[SCCloudSyncLoggerImpl grapheneRegistry]
// Type encoding: @16@0:8
// Implementation: 0x107eb2120

// -[SCCloudSyncLoggerImpl crashLogger]
// Type encoding: @16@0:8
// Implementation: 0x107eb2128

// -[SCCloudSyncLoggerImpl userTrackedLogger]
// Type encoding: @16@0:8
// Implementation: 0x107eb2130

// -[SCCloudSyncLoggerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107eb2138

@end
