// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCloudSyncCreateSnapDocEntryOperation
// Superclass: SCCloudSyncOperation
// Address: 0x112b8a168

@interface SCCloudSyncCreateSnapDocEntryOperation

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCloudSyncCreateSnapDocEntryOperation initWithSnapDoc:entryPlaceholder:addSnapEntity:snapIdToReplace:snapsOrder:dataVaultEncryption:profile:userContext:memoriesExperimentService:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x107ec78fc

// -[SCCloudSyncCreateSnapDocEntryOperation type]
// Type encoding: Q16@0:8
// Implementation: 0x107ec7b40

// -[SCCloudSyncCreateSnapDocEntryOperation analyticsType]
// Type encoding: q16@0:8
// Implementation: 0x107ec7b48

// -[SCCloudSyncCreateSnapDocEntryOperation requestID]
// Type encoding: @16@0:8
// Implementation: 0x107ec7b50

// -[SCCloudSyncCreateSnapDocEntryOperation entryIds]
// Type encoding: @16@0:8
// Implementation: 0x107ec7b80

// -[SCCloudSyncCreateSnapDocEntryOperation makeSnapshot]
// Type encoding: @16@0:8
// Implementation: 0x107ec7c18

// -[SCCloudSyncCreateSnapDocEntryOperation initWithSnapshot:requestID:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107ec7c88

// -[SCCloudSyncCreateSnapDocEntryOperation detectAndResolveConflictsWithCloudFS:dataObjectContext:logger:snapDocManager:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107ec7ea0

// -[SCCloudSyncCreateSnapDocEntryOperation executeOptimisticallyWithDataObjectContext:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ec80e4

// -[SCCloudSyncCreateSnapDocEntryOperation isOperationValidBeforeRemoteSync:dataObjectContext:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107ec8690

// -[SCCloudSyncCreateSnapDocEntryOperation remoteSyncWithDependencyProvider:thumbnailFileGenerator:dataVault:dataObjectContext:networker:coreConfigProvider:memoriesBackupTranscodingServices:snapUploadWorkflow:snapDocManager:progressHandler:failureHandler:successHandler:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@?88@?96@?104
// Implementation: 0x107ec87dc

// -[SCCloudSyncCreateSnapDocEntryOperation commitWithEntryUpdates:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107ec9078

// -[SCCloudSyncCreateSnapDocEntryOperation cleanupWithContext:cloudFS:backupEventsSubject:snapDocManager:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107ec9440

// -[SCCloudSyncCreateSnapDocEntryOperation changedSnapContextsWithEntryUpdate:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ec94c0

// -[SCCloudSyncCreateSnapDocEntryOperation logParameters]
// Type encoding: @16@0:8
// Implementation: 0x107ec9670

// -[SCCloudSyncCreateSnapDocEntryOperation doesNotRequireMediaUpload]
// Type encoding: B16@0:8
// Implementation: 0x107ec9978

// -[SCCloudSyncCreateSnapDocEntryOperation isOperationFromRetryEntry]
// Type encoding: B16@0:8
// Implementation: 0x107ec9980

// -[SCCloudSyncCreateSnapDocEntryOperation allMediaUploadsCompleteWithBoltDataUploader:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ec99c0

// -[SCCloudSyncCreateSnapDocEntryOperation requiresSyncStatusUpdate]
// Type encoding: B16@0:8
// Implementation: 0x107ec99c8

// -[SCCloudSyncCreateSnapDocEntryOperation eligibleForOutOfOrderExecution]
// Type encoding: B16@0:8
// Implementation: 0x107ec99d0

// -[SCCloudSyncCreateSnapDocEntryOperation needRunImmediately]
// Type encoding: B16@0:8
// Implementation: 0x107ec99d8

// -[SCCloudSyncCreateSnapDocEntryOperation processAndCleanupForOutOfOrderDeletions:dataObjectContext:logger:queue:snapDocManager:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x107ec99e0

// -[SCCloudSyncCreateSnapDocEntryOperation cleanupContextForOutOfOrderDeletionWithDataObjectContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ec9c04

// -[SCCloudSyncCreateSnapDocEntryOperation isEligibleForTacomaWithCOFService:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ec9c14

// -[SCCloudSyncCreateSnapDocEntryOperation detailPlaceholders]
// Type encoding: @16@0:8
// Implementation: 0x107ec9c54

// -[SCCloudSyncCreateSnapDocEntryOperation isPrivateWithDataObjectContext:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ec9cfc

// -[SCCloudSyncCreateSnapDocEntryOperation snapPlaceholders]
// Type encoding: @16@0:8
// Implementation: 0x107ec9d94

// -[SCCloudSyncCreateSnapDocEntryOperation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ec9e64

@end
