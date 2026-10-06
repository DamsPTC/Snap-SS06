// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCloudSyncSnapDocBasedEntryOperation
// Superclass: SCCloudSyncOperation
// Address: 0x112b8a1b8

@interface SCCloudSyncSnapDocBasedEntryOperation


// -[SCCloudSyncSnapDocBasedEntryOperation initWithEntryId:gallerySnapDoc:entryAssets:addSnapEntities:snapDataVaultEncryptions:shouldRemoveSyncedSnaps:entryPlaceholder:profile:userContext:memoriesExperimentService:]
// Type encoding: @92@0:8@16@24@32@40@48B56@60@68@76@84
// Implementation: 0x107ec9f34

// -[SCCloudSyncSnapDocBasedEntryOperation type]
// Type encoding: Q16@0:8
// Implementation: 0x107eca264

// -[SCCloudSyncSnapDocBasedEntryOperation analyticsType]
// Type encoding: q16@0:8
// Implementation: 0x107eca26c

// -[SCCloudSyncSnapDocBasedEntryOperation requestID]
// Type encoding: @16@0:8
// Implementation: 0x107eca274

// -[SCCloudSyncSnapDocBasedEntryOperation entryIds]
// Type encoding: @16@0:8
// Implementation: 0x107eca2a4

// -[SCCloudSyncSnapDocBasedEntryOperation makeSnapshot]
// Type encoding: @16@0:8
// Implementation: 0x107eca314

// -[SCCloudSyncSnapDocBasedEntryOperation initWithSnapshot:requestID:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107eca4e0

// -[SCCloudSyncSnapDocBasedEntryOperation detectAndResolveConflictsWithCloudFS:dataObjectContext:logger:snapDocManager:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107eca844

// -[SCCloudSyncSnapDocBasedEntryOperation executeOptimisticallyWithDataObjectContext:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ecb4a0

// -[SCCloudSyncSnapDocBasedEntryOperation isOperationValidBeforeRemoteSync:dataObjectContext:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107ecb77c

// -[SCCloudSyncSnapDocBasedEntryOperation remoteSyncWithDependencyProvider:thumbnailFileGenerator:dataVault:dataObjectContext:networker:coreConfigProvider:memoriesBackupTranscodingServices:snapUploadWorkflow:snapDocManager:progressHandler:failureHandler:successHandler:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@?88@?96@?104
// Implementation: 0x107ecb84c

// -[SCCloudSyncSnapDocBasedEntryOperation commitWithEntryUpdates:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107ecc1f0

// -[SCCloudSyncSnapDocBasedEntryOperation cleanupWithContext:cloudFS:backupEventsSubject:snapDocManager:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107ecc630

// -[SCCloudSyncSnapDocBasedEntryOperation logParameters]
// Type encoding: @16@0:8
// Implementation: 0x107ecc998

// -[SCCloudSyncSnapDocBasedEntryOperation doesNotRequireMediaUpload]
// Type encoding: B16@0:8
// Implementation: 0x107eccb08

// -[SCCloudSyncSnapDocBasedEntryOperation allMediaUploadsCompleteWithBoltDataUploader:]
// Type encoding: B24@0:8@16
// Implementation: 0x107eccb10

// -[SCCloudSyncSnapDocBasedEntryOperation requiresSyncStatusUpdate]
// Type encoding: B16@0:8
// Implementation: 0x107eccb18

// -[SCCloudSyncSnapDocBasedEntryOperation eligibleForOutOfOrderExecution]
// Type encoding: B16@0:8
// Implementation: 0x107eccb20

// -[SCCloudSyncSnapDocBasedEntryOperation needRunImmediately]
// Type encoding: B16@0:8
// Implementation: 0x107eccb28

// -[SCCloudSyncSnapDocBasedEntryOperation processAndCleanupForOutOfOrderDeletions:dataObjectContext:logger:queue:snapDocManager:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x107eccb30

// -[SCCloudSyncSnapDocBasedEntryOperation changedSnapContextsWithEntryUpdate:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ecd094

// -[SCCloudSyncSnapDocBasedEntryOperation cleanupContextForOutOfOrderDeletionWithDataObjectContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ecd19c

// -[SCCloudSyncSnapDocBasedEntryOperation isEligibleForTacomaWithCOFService:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ecd1cc

// -[SCCloudSyncSnapDocBasedEntryOperation _updateEntryFromNetworker:dataObjectContext:cloudFS:addAssetsResponse:snapsUploadInfo:snapUploadRequestInfoMap:queue:failureHandler:successHandler:]
// Type encoding: v88@0:8@16@24@32@40@48@56@64@?72@?80
// Implementation: 0x107ecd1d4

// -[SCCloudSyncSnapDocBasedEntryOperation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ecd988

@end
