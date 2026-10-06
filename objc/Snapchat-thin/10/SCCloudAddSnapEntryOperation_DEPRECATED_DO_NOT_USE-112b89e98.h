// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE
// Superclass: SCCloudSyncOperation
// Address: 0x112b89e98

@interface SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE initWithProfile:entryPlaceholder:addSnapEntity:dataVaultEncryption:userContext:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x107eb3f98

// -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE type]
// Type encoding: Q16@0:8
// Implementation: 0x107eb41ec

// -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE analyticsType]
// Type encoding: q16@0:8
// Implementation: 0x107eb41f4

// -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE requestID]
// Type encoding: @16@0:8
// Implementation: 0x107eb41fc

// -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE entryIds]
// Type encoding: @16@0:8
// Implementation: 0x107eb422c

// -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE makeSnapshot]
// Type encoding: @16@0:8
// Implementation: 0x107eb42c4

// -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE initWithSnapshot:requestID:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107eb4334

// -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE detectAndResolveConflictsWithCloudFS:dataObjectContext:logger:snapDocManager:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107eb4640

// -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE executeOptimisticallyWithDataObjectContext:]
// Type encoding: B24@0:8@16
// Implementation: 0x107eb4ec4

// -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE isOperationValidBeforeRemoteSync:dataObjectContext:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107eb51b4

// -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE remoteSyncWithDependencyProvider:thumbnailFileGenerator:dataVault:dataObjectContext:networker:coreConfigProvider:memoriesBackupTranscodingServices:snapUploadWorkflow:snapDocManager:progressHandler:failureHandler:successHandler:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@?88@?96@?104
// Implementation: 0x107eb51bc

// -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE commitWithEntryUpdates:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107eb5668

// -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE cleanupWithContext:cloudFS:backupEventsSubject:snapDocManager:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107eb58a4

// -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE changedSnapContextsWithEntryUpdate:]
// Type encoding: @24@0:8@16
// Implementation: 0x107eb58f8

// -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE eligibleForOutOfOrderExecution]
// Type encoding: B16@0:8
// Implementation: 0x107eb5a64

// -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE doesNotRequireMediaUpload]
// Type encoding: B16@0:8
// Implementation: 0x107eb5aa4

// -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE isOperationFromRetryEntry]
// Type encoding: B16@0:8
// Implementation: 0x107eb5ae4

// -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE allMediaUploadsCompleteWithBoltDataUploader:]
// Type encoding: B24@0:8@16
// Implementation: 0x107eb5b24

// -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE needRunImmediately]
// Type encoding: B16@0:8
// Implementation: 0x107eb5b28

// -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE processAndCleanupForOutOfOrderDeletions:dataObjectContext:logger:queue:snapDocManager:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x107eb5b30

// -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE cleanupContextForOutOfOrderDeletionWithDataObjectContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x107eb5b38

// -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE _updateEntriesFromNetworker:queue:snapsUploadInfo:failureHandler:successHandler:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x107eb5b40

// -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE logParameters]
// Type encoding: @16@0:8
// Implementation: 0x107eb61bc

// -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE requiresSyncStatusUpdate]
// Type encoding: B16@0:8
// Implementation: 0x107eb64fc

// -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE isEligibleForTacomaWithCOFService:]
// Type encoding: B24@0:8@16
// Implementation: 0x107eb6504

// -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE snapPlaceholders]
// Type encoding: @16@0:8
// Implementation: 0x107eb650c

// -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE detailPlaceholders]
// Type encoding: @16@0:8
// Implementation: 0x107eb657c

// -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE miniThumbnailPlaceholders]
// Type encoding: @16@0:8
// Implementation: 0x107eb65ec

// -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE numberOfSnaps]
// Type encoding: Q16@0:8
// Implementation: 0x107eb665c

// -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE dataVaultEncryption]
// Type encoding: @16@0:8
// Implementation: 0x107eb6664

// -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE isPrivateWithDataObjectContext:]
// Type encoding: B24@0:8@16
// Implementation: 0x107eb6694

// -[SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107eb672c

@end
