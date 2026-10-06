// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCloudSync
// Superclass: NSObject
// Address: 0x112b8a3e8

@interface SCCloudSync

// Property: status; attributes: TQ,V_status
// Property: isBackingUpNow; attributes: TB,V_isBackingUpNow
// Property: syncedFirstPage; attributes: TB,V_syncedFirstPage
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCloudSync initWithDependencyProvider:dataVault:thumbnailFileGenerator:networker:clientCompatVersion:dataObjectContext:featureSettingsService:searchIndexer:userTrackedLogger:apiURLSessionBackgroundTaskResults:networkConnectivityMonitor:coreConfigProvider:aserConfigProvider:memoriesBackupTranscodingServices:snapUploadWorkflow:snapDocManager:memoriesUserDefaultsManager:backgroundUploadScheduler:applicationLifecycleEvents:memPlatBackupService:dataCapManager:memPlatBackupMonitor:memPlatBackupNowManager:tagsSyncer:]
// Type encoding: @208@0:8@16@24@32@40q48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200
// Implementation: 0x100b86b18

// -[SCCloudSync triggerSyncStateRefresh]
// Type encoding: v16@0:8
// Implementation: 0x107ed67c4

// -[SCCloudSync observableForSnapBackupEvents]
// Type encoding: @16@0:8
// Implementation: 0x107ed68e8

// -[SCCloudSync observableForBackupServiceStatus]
// Type encoding: @16@0:8
// Implementation: 0x107ed6910

// -[SCCloudSync currentBackupStatus]
// Type encoding: Q16@0:8
// Implementation: 0x107ed6990

// -[SCCloudSync appendOperationAndExecuteOptimistically:fromFailedEntry:tacomaOperationType:dependencyEntryIds:detailedState:origin:shouldNotRecluster:shouldNotScheduleBackupJobs:queue:completionHandler:]
// Type encoding: v80@0:8@16@24i32@36@44i52B56B60@64@?72
// Implementation: 0x107ed6994

// -[SCCloudSync appendOperationAndExecuteOptimistically:fromFailedEntry:tacomaOperationType:dependencyEntryIds:detailedState:origin:queue:completionHandler:]
// Type encoding: v72@0:8@16@24i32@36@44i52@56@?64
// Implementation: 0x107ed69e4

// -[SCCloudSync appendOperationAndExecuteOptimistically:fromFailedEntry:approximateTotalMediaSizeInBytes:tacomaOperationType:dependencyEntryIds:detailedState:queue:completionHandler:]
// Type encoding: v76@0:8@16@24Q32i40@44@52@60@?68
// Implementation: 0x107ed6a0c

// -[SCCloudSync appendOperationAndExecuteOptimistically:fromFailedEntry:approximateTotalMediaSizeInBytes:tacomaOperationType:dependencyEntryIds:detailedState:backupSchedulingGate:queue:completionHandler:]
// Type encoding: v84@0:8@16@24Q32i40@44@52@?60@68@?76
// Implementation: 0x107ed6a34

// -[SCCloudSync _appendOperationAndExecuteOptimistically:fromFailedEntry:approximateTotalMediaSizeInBytes:tacomaOperationType:dependencyEntryIds:detailedState:origin:shouldNotRecluster:shouldNotScheduleBackupJobs:backupSchedulingGate:queue:completionHandler:]
// Type encoding: v96@0:8@16@24@32i40@44@52i60B64B68@?72@80@?88
// Implementation: 0x107ed6b5c

// -[SCCloudSync _fastInsertionToTacomaWithResolvedOperation:operation:approximateTotalMediaSizeInBytes:tacomaOperationType:dependencyEntryIds:detailedState:origin:cloudSyncAppendSuccess:error:startTime:shouldNotScheduleBackupJobs:backupSchedulingGate:queue:completionHandlerWithLatencyReporting:]
// Type encoding: v112@0:8@16@24@32i40@44@52i60B64@68@76B84@?88@96@?104
// Implementation: 0x107ed7c64

// -[SCCloudSync schedulePendingBackupJobsForEnteringMemories]
// Type encoding: v16@0:8
// Implementation: 0x107ed88ec

// -[SCCloudSync _scheduleBackupJobsIfNeeded:tacomaOperationType:]
// Type encoding: v28@0:8@16i24
// Implementation: 0x107ed8920

// -[SCCloudSync _tacomaBackupForEntryIds:operationType:dependencyEntryIds:detailedState:requestId:approximateTotalMediaSizeInBytes:origin:callbackQueue:callback:]
// Type encoding: v80@0:8@16i24@28@36@44@52i60@64@?72
// Implementation: 0x107ed8a70

// -[SCCloudSync _updateStatusForUploadingForTacoma:snapIds:backupStatus:seqNum:shouldTransitionState:]
// Type encoding: v52@0:8@16@24q32q40B48
// Implementation: 0x107ed8da4

// -[SCCloudSync _announceChangeEntrySyncStatus:entryId:snapIds:]
// Type encoding: v40@0:8Q16@24@32
// Implementation: 0x107ed8f74

// -[SCCloudSync _resetStatusAfterUpload]
// Type encoding: v16@0:8
// Implementation: 0x107ed9098

// -[SCCloudSync addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x100b88d70

// -[SCCloudSync removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ed916c

// -[SCCloudSync fetchLastErrorWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107ed9174

// -[SCCloudSync selectivelySyncOperationsWithEntryId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ed9300

// -[SCCloudSync isInitialPageSyncCompleted]
// Type encoding: B16@0:8
// Implementation: 0x107ed9484

// -[SCCloudSync isFullySynced]
// Type encoding: B16@0:8
// Implementation: 0x107ed94d0

// -[SCCloudSync isLoading]
// Type encoding: B16@0:8
// Implementation: 0x107ed951c

// -[SCCloudSync _uploadStateNotifierWithTacomaEnabled:]
// Type encoding: @20@0:8B16
// Implementation: 0x107ed9548

// -[SCCloudSync allowInitialSync]
// Type encoding: v16@0:8
// Implementation: 0x107ed9a08

// -[SCCloudSync registerSyncService]
// Type encoding: v16@0:8
// Implementation: 0x107ed9b34

// -[SCCloudSync dedicatedQueue]
// Type encoding: @16@0:8
// Implementation: 0x107ed9bc8

// -[SCCloudSync runWithServiceTerm:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ed9c30

// -[SCCloudSync _transitionToState:serviceTerm:backOffTimeInMilliseconds:]
// Type encoding: v40@0:8Q16@24d32
// Implementation: 0x107eda5d8

// -[SCCloudSync setIsBackingUpNowAsynchronously:completionHandler:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x107eda83c

// -[SCCloudSync _galleryResyncRequired]
// Type encoding: v16@0:8
// Implementation: 0x107edaaa4

// -[SCCloudSync _shouldResyncWithRemote]
// Type encoding: B16@0:8
// Implementation: 0x107edab4c

// -[SCCloudSync _resetResyncWithRemoteFlag]
// Type encoding: v16@0:8
// Implementation: 0x107edab9c

// -[SCCloudSync _resyncAfterAbortingOperationSnapshot:serviceTerm:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107edabd8

// -[SCCloudSync _onOperationFailed:snapshot:serviceTerm:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107edadd0

// -[SCCloudSync _hasPendingOperations]
// Type encoding: B16@0:8
// Implementation: 0x107edbf34

// -[SCCloudSync _uploadNotNeededForOperation:tacomaEnabled:pendingOperationSnapshot:]
// Type encoding: B36@0:8@16B24@28
// Implementation: 0x107edbfb4

// -[SCCloudSync _checkToUploadWithServiceTerm:]
// Type encoding: v24@0:8@16
// Implementation: 0x107edc080

// -[SCCloudSync _checkIfSyncRequiredBeforeTransition:]
// Type encoding: v24@0:8@16
// Implementation: 0x107edc0dc

// -[SCCloudSync _checkBackgroundMediaUploadStatus]
// Type encoding: v16@0:8
// Implementation: 0x107edc180

// -[SCCloudSync _uploadWithServiceTerm:]
// Type encoding: v24@0:8@16
// Implementation: 0x107edc558

// -[SCCloudSync _handleSuccessForSyncOperation:requestID:entryUpdateMap:deleteOperationsBeforeSync:deleteOperationsAfterSync:syncOperationSnapshot:serviceTerm:]
// Type encoding: v72@0:8@16@24@32@40@48@56@64
// Implementation: 0x107edd5d8

// -[SCCloudSync _handleStepFailureForSyncOperation:cloudSyncStepError:requestID:syncOperationSnapshot:serviceTerm:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x107eddd7c

// -[SCCloudSync _handleFailureForSyncOperation:error:requestID:syncOperationSnapshot:serviceTerm:loggingRetryCount:]
// Type encoding: v64@0:8@16@24@32@40@48q56
// Implementation: 0x107ede218

// -[SCCloudSync _handleServletPartialError:requestId:syncOperation:syncOperationSnapshot:retryCount:serviceTerm:]
// Type encoding: v64@0:8@16@24@32@40q48@56
// Implementation: 0x107edf15c

// -[SCCloudSync _handleNetworkErrorForRequestId:syncOperation:syncOperationSnapshot:serviceTerm:retryPolicy:loggingNetworkErrorStatusCode:backOffTimeMillis:loggingRetryCount:]
// Type encoding: v80@0:8@16@24@32@40q48q56d64q72
// Implementation: 0x107edfb30

// -[SCCloudSync _markCloudSyncFatalForSyncOperation:syncOperationSnapshot:serviceTerm:loggingStatusCode:loggingDetailsStatusCode:loggingErrorMessage:loggingRetryCount:retryPolicy:]
// Type encoding: v80@0:8@16@24@32q40q48@56q64q72
// Implementation: 0x107edfc64

// -[SCCloudSync _markCloudSyncRetryForRequestId:serviceTerm:newTransitionState:backOffTimeMillis:retryPolicy:loggingRetryCount:loggingStatusCode:loggingDetailsStatusCode:analyticsType:]
// Type encoding: v88@0:8@16@24Q32d40q48q56q64q72q80
// Implementation: 0x107edfe00

// -[SCCloudSync _resetSeqNumIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x107edff3c

// -[SCCloudSync _resyncWithServiceTerm:forceRebase:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107ee00bc

// -[SCCloudSync _processResyncResponse:forceRebase:serviceTerm:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x107ee091c

// -[SCCloudSync _cleanupBackupDependenciesPreservingSnapshotsForEntryIds:entryIdsDeletedByServer:serviceTerm:profile:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107ee39c4

// -[SCCloudSync _cleanupBackupDependenciesDeletingAllSnapshotsForEntryIds:serviceTerm:profile:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107ee436c

// -[SCCloudSync _transferStateAfterLastPageSyncDBUpdateCompleteWithServiceTerm:profile:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107ee487c

// -[SCCloudSync _cleanUncommittedChanges:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ee4acc

// -[SCCloudSync _detectAndResolveConflictsForOperation:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ee565c

// -[SCCloudSync _reExecuteOptimisticallyWithBackgroundMediaUploadScheduled:]
// Type encoding: v20@0:8B16
// Implementation: 0x107ee5870

// -[SCCloudSync _getAllSnapIdsForBackgroundUploadOperation:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ee5d7c

// -[SCCloudSync _resetBackgroundMediaUploadedStateForSyncOperation:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107ee5e28

// -[SCCloudSync _applicationWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x107ee6184

// -[SCCloudSync _getFastlaneOperationSnapshot:operation:tacomaEnabled:]
// Type encoding: v36@0:8^@16^@24B32
// Implementation: 0x107ee6264

// -[SCCloudSync _removeFailedEntry:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ee6658

// -[SCCloudSync _shouldInfiniteRetryGCSError:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ee67f8

// -[SCCloudSync _checkEntryChanges:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ee686c

// -[SCCloudSync _skipPendingOperations:deleteEntryIds:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107ee6870

// -[SCCloudSync _deleteTacomaRelatedOperationsWithRequestIDs:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ee6c7c

// -[SCCloudSync _updateDependentGraphRemovingSeqNum:]
// Type encoding: v24@0:8q16
// Implementation: 0x107ee6db4

// -[SCCloudSync _announcerBackupStatusUpdate]
// Type encoding: v16@0:8
// Implementation: 0x107ee6f68

// -[SCCloudSync invalidate]
// Type encoding: v16@0:8
// Implementation: 0x107ee706c

// -[SCCloudSync _isInvalidated]
// Type encoding: B16@0:8
// Implementation: 0x107ee7130

// -[SCCloudSync _bindMemPlatBackupMonitor]
// Type encoding: v16@0:8
// Implementation: 0x100c0b824

// -[SCCloudSync kickoffTacomaBackupForAllPendingOpsIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x107ee720c

// -[SCCloudSync kickoffSnapGenForAllPendingOpsIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x107ee7328

// -[SCCloudSync forceTriggerSyncStateRefresh]
// Type encoding: v16@0:8
// Implementation: 0x107ee7444

// -[SCCloudSync _deleteTacomaOperationsAndCloudSyncSnapshots:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ee7488

// -[SCCloudSync _getGalleryProfile]
// Type encoding: @16@0:8
// Implementation: 0x107ee7510

// -[SCCloudSync _optimisticRebaseEnabled]
// Type encoding: B16@0:8
// Implementation: 0x107ee7578

// -[SCCloudSync setCloudSyncRetry:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ee75d8

// -[SCCloudSync status]
// Type encoding: Q16@0:8
// Implementation: 0x100c0f9a8

// -[SCCloudSync setStatus:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107ee7608

// -[SCCloudSync isBackingUpNow]
// Type encoding: B16@0:8
// Implementation: 0x100c0f9b0

// -[SCCloudSync setIsBackingUpNow:]
// Type encoding: v20@0:8B16
// Implementation: 0x107ee7610

// -[SCCloudSync syncedFirstPage]
// Type encoding: B16@0:8
// Implementation: 0x107ee7618

// -[SCCloudSync setSyncedFirstPage:]
// Type encoding: v20@0:8B16
// Implementation: 0x107ee7624

// -[SCCloudSync .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ee762c

// +[SCCloudSync defaultImmediateNotifier]
// Type encoding: @16@0:8
// Implementation: 0x107ed9ba4

// +[SCCloudSync defaultLongRunningNotifier]
// Type encoding: @16@0:8
// Implementation: 0x107ed9bb4

@end
