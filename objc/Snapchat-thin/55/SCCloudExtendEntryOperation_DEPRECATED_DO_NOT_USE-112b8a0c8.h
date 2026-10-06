// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE
// Superclass: SCCloudSyncOperation
// Address: 0x112b8a0c8

@interface SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE initWithEntryId:title:autosaveTimeUtc:addSnapEntities:dataVaultEncryption:profile:userContext:memoriesExperimentService:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x107ec30c4

// -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE type]
// Type encoding: Q16@0:8
// Implementation: 0x107ec358c

// -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE analyticsType]
// Type encoding: q16@0:8
// Implementation: 0x107ec3594

// -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE requestID]
// Type encoding: @16@0:8
// Implementation: 0x107ec359c

// -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE entryIds]
// Type encoding: @16@0:8
// Implementation: 0x107ec35cc

// -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE makeSnapshot]
// Type encoding: @16@0:8
// Implementation: 0x107ec363c

// -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE initWithSnapshot:requestID:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107ec36b8

// -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE detectAndResolveConflictsWithCloudFS:dataObjectContext:logger:snapDocManager:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107ec3bc4

// -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE executeOptimisticallyWithDataObjectContext:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ec42f4

// -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE _indexSetForInserting:into:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107ec477c

// -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE isOperationValidBeforeRemoteSync:dataObjectContext:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107ec4914

// -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE remoteSyncWithDependencyProvider:thumbnailFileGenerator:dataVault:dataObjectContext:networker:coreConfigProvider:memoriesBackupTranscodingServices:snapUploadWorkflow:snapDocManager:progressHandler:failureHandler:successHandler:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@?88@?96@?104
// Implementation: 0x107ec491c

// -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE commitWithEntryUpdates:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107ec4dcc

// -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE cleanupWithContext:cloudFS:backupEventsSubject:snapDocManager:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107ec50bc

// -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE changedSnapContextsWithEntryUpdate:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ec51e8

// -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE logParameters]
// Type encoding: @16@0:8
// Implementation: 0x107ec5334

// -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE eligibleForOutOfOrderExecution]
// Type encoding: B16@0:8
// Implementation: 0x107ec5590

// -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE doesNotRequireMediaUpload]
// Type encoding: B16@0:8
// Implementation: 0x107ec56ac

// -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE allMediaUploadsCompleteWithBoltDataUploader:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ec57c8

// -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE requiresSyncStatusUpdate]
// Type encoding: B16@0:8
// Implementation: 0x107ec5868

// -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE needRunImmediately]
// Type encoding: B16@0:8
// Implementation: 0x107ec5870

// -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE processAndCleanupForOutOfOrderDeletions:dataObjectContext:logger:queue:snapDocManager:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x107ec5878

// -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE cleanupContextForOutOfOrderDeletionWithDataObjectContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ec5880

// -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE isEligibleForTacomaWithCOFService:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ec5888

// -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE snapPlaceholders]
// Type encoding: @16@0:8
// Implementation: 0x107ec5890

// -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE detailPlaceholders]
// Type encoding: @16@0:8
// Implementation: 0x107ec58c0

// -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE miniThumbnailPlaceholders]
// Type encoding: @16@0:8
// Implementation: 0x107ec58f0

// -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE numberOfSnaps]
// Type encoding: Q16@0:8
// Implementation: 0x107ec5920

// -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE dataVaultEncryption]
// Type encoding: @16@0:8
// Implementation: 0x107ec5930

// -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE isPrivateWithDataObjectContext:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ec5960

// -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE _updateEntriesFromNetworker:dataObjectContext:queue:snapsUploadInfo:failureHandler:successHandler:]
// Type encoding: v64@0:8@16@24@32@40@?48@?56
// Implementation: 0x107ec59b8

// -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE _snapIdsForSnaps:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ec60b4

// -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ec6208

@end
