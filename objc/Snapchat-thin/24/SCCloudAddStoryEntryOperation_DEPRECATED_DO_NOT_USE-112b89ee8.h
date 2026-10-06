// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE
// Superclass: SCCloudSyncOperation
// Address: 0x112b89ee8

@interface SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE type]
// Type encoding: Q16@0:8
// Implementation: 0x107eb67cc

// -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE analyticsType]
// Type encoding: q16@0:8
// Implementation: 0x107eb67d4

// -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE initWithProfile:entryPlaceholder:addSnapEntities:dataVaultEncryption:userContext:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x107eb67dc

// -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE initWithSnapshot:requestID:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107eb6b1c

// -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE requestID]
// Type encoding: @16@0:8
// Implementation: 0x107eb6fe4

// -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE entryIds]
// Type encoding: @16@0:8
// Implementation: 0x107eb7014

// -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE makeSnapshot]
// Type encoding: @16@0:8
// Implementation: 0x107eb70ac

// -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE detectAndResolveConflictsWithCloudFS:dataObjectContext:logger:snapDocManager:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107eb7118

// -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE executeOptimisticallyWithDataObjectContext:]
// Type encoding: B24@0:8@16
// Implementation: 0x107eb77e0

// -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE commitWithEntryUpdates:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107eb7d00

// -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE cleanupWithContext:cloudFS:backupEventsSubject:snapDocManager:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107eb8040

// -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE changedSnapContextsWithEntryUpdate:]
// Type encoding: @24@0:8@16
// Implementation: 0x107eb816c

// -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE isOperationValidBeforeRemoteSync:dataObjectContext:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107eb82ec

// -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE remoteSyncWithDependencyProvider:thumbnailFileGenerator:dataVault:dataObjectContext:networker:coreConfigProvider:memoriesBackupTranscodingServices:snapUploadWorkflow:snapDocManager:progressHandler:failureHandler:successHandler:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@?88@?96@?104
// Implementation: 0x107eb82f4

// -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE logParameters]
// Type encoding: @16@0:8
// Implementation: 0x107eb87f0

// -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE eligibleForOutOfOrderExecution]
// Type encoding: B16@0:8
// Implementation: 0x107eb8ba0

// -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE doesNotRequireMediaUpload]
// Type encoding: B16@0:8
// Implementation: 0x107eb8cbc

// -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE isOperationFromRetryEntry]
// Type encoding: B16@0:8
// Implementation: 0x107eb8dd8

// -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE allMediaUploadsCompleteWithBoltDataUploader:]
// Type encoding: B24@0:8@16
// Implementation: 0x107eb8e18

// -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE requiresSyncStatusUpdate]
// Type encoding: B16@0:8
// Implementation: 0x107eb8eb8

// -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE needRunImmediately]
// Type encoding: B16@0:8
// Implementation: 0x107eb8ec0

// -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE processAndCleanupForOutOfOrderDeletions:dataObjectContext:logger:queue:snapDocManager:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x107eb8ec8

// -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE cleanupContextForOutOfOrderDeletionWithDataObjectContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x107eb8ed0

// -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE isEligibleForTacomaWithCOFService:]
// Type encoding: B24@0:8@16
// Implementation: 0x107eb8ed8

// -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE snapPlaceholders]
// Type encoding: @16@0:8
// Implementation: 0x107eb8ee0

// -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE detailPlaceholders]
// Type encoding: @16@0:8
// Implementation: 0x107eb8f10

// -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE miniThumbnailPlaceholders]
// Type encoding: @16@0:8
// Implementation: 0x107eb8f40

// -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE numberOfSnaps]
// Type encoding: Q16@0:8
// Implementation: 0x107eb8f70

// -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE dataVaultEncryption]
// Type encoding: @16@0:8
// Implementation: 0x107eb8f80

// -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE isPrivateWithDataObjectContext:]
// Type encoding: B24@0:8@16
// Implementation: 0x107eb8fb0

// -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE _updateEntryFromCloudFS:networker:dataObjectContext:snapsUploadInfo:queue:failureHandler:successHandler:]
// Type encoding: v72@0:8@16@24@32@40@48@?56@?64
// Implementation: 0x107eb9048

// -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107eb970c

@end
