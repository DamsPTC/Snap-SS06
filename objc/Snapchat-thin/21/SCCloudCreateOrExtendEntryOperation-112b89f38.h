// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCloudCreateOrExtendEntryOperation
// Superclass: SCCloudSyncOperation
// Address: 0x112b89f38

@interface SCCloudCreateOrExtendEntryOperation

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCloudCreateOrExtendEntryOperation initWithEntryPlaceholder:addSnapEntities:autosaveTimeUtc:snapsOrder:dataVaultEncryption:profile:userContext:memoriesExperimentService:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x107eb97ac

// -[SCCloudCreateOrExtendEntryOperation initWithEntryPlaceholder:addSnapEntities:autosaveTimeUtc:dataVaultEncryption:profile:userContext:memoriesExperimentService:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x107eb9868

// -[SCCloudCreateOrExtendEntryOperation type]
// Type encoding: Q16@0:8
// Implementation: 0x107eb9c0c

// -[SCCloudCreateOrExtendEntryOperation analyticsType]
// Type encoding: q16@0:8
// Implementation: 0x107eb9c14

// -[SCCloudCreateOrExtendEntryOperation requestID]
// Type encoding: @16@0:8
// Implementation: 0x107eb9c1c

// -[SCCloudCreateOrExtendEntryOperation entryIds]
// Type encoding: @16@0:8
// Implementation: 0x107eb9c4c

// -[SCCloudCreateOrExtendEntryOperation makeSnapshot]
// Type encoding: @16@0:8
// Implementation: 0x107eb9ce4

// -[SCCloudCreateOrExtendEntryOperation initWithSnapshot:requestID:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107eb9d60

// -[SCCloudCreateOrExtendEntryOperation detectAndResolveConflictsWithCloudFS:dataObjectContext:logger:snapDocManager:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107eb9ff4

// -[SCCloudCreateOrExtendEntryOperation executeOptimisticallyWithDataObjectContext:]
// Type encoding: B24@0:8@16
// Implementation: 0x107eba888

// -[SCCloudCreateOrExtendEntryOperation isOperationValidBeforeRemoteSync:dataObjectContext:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107ebab64

// -[SCCloudCreateOrExtendEntryOperation remoteSyncWithDependencyProvider:thumbnailFileGenerator:dataVault:dataObjectContext:networker:coreConfigProvider:memoriesBackupTranscodingServices:snapUploadWorkflow:snapDocManager:progressHandler:failureHandler:successHandler:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@?88@?96@?104
// Implementation: 0x107ebac88

// -[SCCloudCreateOrExtendEntryOperation commitWithEntryUpdates:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107ebb260

// -[SCCloudCreateOrExtendEntryOperation cleanupWithContext:cloudFS:backupEventsSubject:snapDocManager:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107ebb618

// -[SCCloudCreateOrExtendEntryOperation changedSnapContextsWithEntryUpdate:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ebb7b4

// -[SCCloudCreateOrExtendEntryOperation isEligibleForTacomaWithCOFService:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ebb958

// -[SCCloudCreateOrExtendEntryOperation _updateEntryFromCloudFS:networker:dataObjectContext:logger:queue:snapsUploadInfo:failureHandler:successHandler:]
// Type encoding: v80@0:8@16@24@32@40@48@56@?64@?72
// Implementation: 0x107ebb998

// -[SCCloudCreateOrExtendEntryOperation logParameters]
// Type encoding: @16@0:8
// Implementation: 0x107ebc1a8

// -[SCCloudCreateOrExtendEntryOperation eligibleForOutOfOrderExecution]
// Type encoding: B16@0:8
// Implementation: 0x107ebc574

// -[SCCloudCreateOrExtendEntryOperation doesNotRequireMediaUpload]
// Type encoding: B16@0:8
// Implementation: 0x107ebc690

// -[SCCloudCreateOrExtendEntryOperation isOperationFromRetryEntry]
// Type encoding: B16@0:8
// Implementation: 0x107ebc7ac

// -[SCCloudCreateOrExtendEntryOperation allMediaUploadsCompleteWithBoltDataUploader:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ebc7ec

// -[SCCloudCreateOrExtendEntryOperation requiresSyncStatusUpdate]
// Type encoding: B16@0:8
// Implementation: 0x107ebc88c

// -[SCCloudCreateOrExtendEntryOperation needRunImmediately]
// Type encoding: B16@0:8
// Implementation: 0x107ebc894

// -[SCCloudCreateOrExtendEntryOperation processAndCleanupForOutOfOrderDeletions:dataObjectContext:logger:queue:snapDocManager:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x107ebc89c

// -[SCCloudCreateOrExtendEntryOperation cleanupContextForOutOfOrderDeletionWithDataObjectContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ebccd0

// -[SCCloudCreateOrExtendEntryOperation snapPlaceholders]
// Type encoding: @16@0:8
// Implementation: 0x107ebcd00

// -[SCCloudCreateOrExtendEntryOperation detailPlaceholders]
// Type encoding: @16@0:8
// Implementation: 0x107ebcd30

// -[SCCloudCreateOrExtendEntryOperation miniThumbnailPlaceholders]
// Type encoding: @16@0:8
// Implementation: 0x107ebcd60

// -[SCCloudCreateOrExtendEntryOperation numberOfSnaps]
// Type encoding: Q16@0:8
// Implementation: 0x107ebcd90

// -[SCCloudCreateOrExtendEntryOperation dataVaultEncryption]
// Type encoding: @16@0:8
// Implementation: 0x107ebcda0

// -[SCCloudCreateOrExtendEntryOperation isPrivateWithDataObjectContext:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ebcdd0

// -[SCCloudCreateOrExtendEntryOperation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ebce68

@end
