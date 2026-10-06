// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCloudCreateOrExtendEntryOperationV2
// Superclass: SCCloudSyncOperation
// Address: 0x112b89fb0

@interface SCCloudCreateOrExtendEntryOperationV2

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCloudCreateOrExtendEntryOperationV2 initWithEntryPlaceholder:addSnapEntity:dataVaultEncryption:profile:userContext:memoriesExperimentService:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x107ebcf38

// -[SCCloudCreateOrExtendEntryOperationV2 type]
// Type encoding: Q16@0:8
// Implementation: 0x107ebd174

// -[SCCloudCreateOrExtendEntryOperationV2 analyticsType]
// Type encoding: q16@0:8
// Implementation: 0x107ebd17c

// -[SCCloudCreateOrExtendEntryOperationV2 requestID]
// Type encoding: @16@0:8
// Implementation: 0x107ebd184

// -[SCCloudCreateOrExtendEntryOperationV2 entryIds]
// Type encoding: @16@0:8
// Implementation: 0x107ebd1b4

// -[SCCloudCreateOrExtendEntryOperationV2 makeSnapshot]
// Type encoding: @16@0:8
// Implementation: 0x107ebd24c

// -[SCCloudCreateOrExtendEntryOperationV2 initWithSnapshot:requestID:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107ebd2b8

// -[SCCloudCreateOrExtendEntryOperationV2 detectAndResolveConflictsWithCloudFS:dataObjectContext:logger:snapDocManager:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107ebd504

// -[SCCloudCreateOrExtendEntryOperationV2 executeOptimisticallyWithDataObjectContext:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ebd6f8

// -[SCCloudCreateOrExtendEntryOperationV2 isOperationValidBeforeRemoteSync:dataObjectContext:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107ebe00c

// -[SCCloudCreateOrExtendEntryOperationV2 remoteSyncWithDependencyProvider:thumbnailFileGenerator:dataVault:dataObjectContext:networker:coreConfigProvider:memoriesBackupTranscodingServices:snapUploadWorkflow:snapDocManager:progressHandler:failureHandler:successHandler:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@?88@?96@?104
// Implementation: 0x107ebe130

// -[SCCloudCreateOrExtendEntryOperationV2 commitWithEntryUpdates:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107ebf430

// -[SCCloudCreateOrExtendEntryOperationV2 cleanupWithContext:cloudFS:backupEventsSubject:snapDocManager:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107ebf934

// -[SCCloudCreateOrExtendEntryOperationV2 changedSnapContextsWithEntryUpdate:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ebf9f4

// -[SCCloudCreateOrExtendEntryOperationV2 _updateEntryForAddSnapEntity:dependencyProvider:thumbnailFileGenerator:dataVault:networker:snapsUploadInfo:snapRequestInfoResult:failureHandler:successHandler:]
// Type encoding: v88@0:8@16@24@32@40@48@56@64@?72@?80
// Implementation: 0x107ebfb74

// -[SCCloudCreateOrExtendEntryOperationV2 logParameters]
// Type encoding: @16@0:8
// Implementation: 0x107ec0060

// -[SCCloudCreateOrExtendEntryOperationV2 eligibleForOutOfOrderExecution]
// Type encoding: B16@0:8
// Implementation: 0x107ec036c

// -[SCCloudCreateOrExtendEntryOperationV2 doesNotRequireMediaUpload]
// Type encoding: B16@0:8
// Implementation: 0x107ec03ac

// -[SCCloudCreateOrExtendEntryOperationV2 isOperationFromRetryEntry]
// Type encoding: B16@0:8
// Implementation: 0x107ec03ec

// -[SCCloudCreateOrExtendEntryOperationV2 allMediaUploadsCompleteWithBoltDataUploader:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ec042c

// -[SCCloudCreateOrExtendEntryOperationV2 requiresSyncStatusUpdate]
// Type encoding: B16@0:8
// Implementation: 0x107ec04b4

// -[SCCloudCreateOrExtendEntryOperationV2 needRunImmediately]
// Type encoding: B16@0:8
// Implementation: 0x107ec04bc

// -[SCCloudCreateOrExtendEntryOperationV2 processAndCleanupForOutOfOrderDeletions:dataObjectContext:logger:queue:snapDocManager:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x107ec04c4

// -[SCCloudCreateOrExtendEntryOperationV2 cleanupContextForOutOfOrderDeletionWithDataObjectContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ec0768

// -[SCCloudCreateOrExtendEntryOperationV2 snapPlaceholders]
// Type encoding: @16@0:8
// Implementation: 0x107ec0798

// -[SCCloudCreateOrExtendEntryOperationV2 detailPlaceholders]
// Type encoding: @16@0:8
// Implementation: 0x107ec0808

// -[SCCloudCreateOrExtendEntryOperationV2 miniThumbnailPlaceholders]
// Type encoding: @16@0:8
// Implementation: 0x107ec0878

// -[SCCloudCreateOrExtendEntryOperationV2 numberOfSnaps]
// Type encoding: Q16@0:8
// Implementation: 0x107ec08e8

// -[SCCloudCreateOrExtendEntryOperationV2 dataVaultEncryption]
// Type encoding: @16@0:8
// Implementation: 0x107ec08f0

// -[SCCloudCreateOrExtendEntryOperationV2 isPrivateWithDataObjectContext:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ec09b4

// -[SCCloudCreateOrExtendEntryOperationV2 _getCloudSyncEntryData]
// Type encoding: @16@0:8
// Implementation: 0x107ec0a4c

// -[SCCloudCreateOrExtendEntryOperationV2 isEligibleForTacomaWithCOFService:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ec0aec

// -[SCCloudCreateOrExtendEntryOperationV2 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ec0c2c

@end
