// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCloudUpdatePrivateEntriesOperation
// Superclass: SCCloudSyncOperation
// Address: 0x112b8a348

@interface SCCloudUpdatePrivateEntriesOperation


// -[SCCloudUpdatePrivateEntriesOperation initWithProfile:entryId:addSnapEntities:isPrivate:dataVaultEncryption:userContext:]
// Type encoding: @60@0:8@16@24@32B40@44@52
// Implementation: 0x107ed2cd4

// -[SCCloudUpdatePrivateEntriesOperation type]
// Type encoding: Q16@0:8
// Implementation: 0x107ed2f00

// -[SCCloudUpdatePrivateEntriesOperation analyticsType]
// Type encoding: q16@0:8
// Implementation: 0x107ed2f08

// -[SCCloudUpdatePrivateEntriesOperation requestID]
// Type encoding: @16@0:8
// Implementation: 0x107ed2f10

// -[SCCloudUpdatePrivateEntriesOperation entryIds]
// Type encoding: @16@0:8
// Implementation: 0x107ed2f40

// -[SCCloudUpdatePrivateEntriesOperation makeSnapshot]
// Type encoding: @16@0:8
// Implementation: 0x107ed2fb0

// -[SCCloudUpdatePrivateEntriesOperation initWithSnapshot:requestID:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107ed3008

// -[SCCloudUpdatePrivateEntriesOperation detectAndResolveConflictsWithCloudFS:dataObjectContext:logger:snapDocManager:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107ed32a8

// -[SCCloudUpdatePrivateEntriesOperation executeOptimisticallyWithDataObjectContext:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ed37c4

// -[SCCloudUpdatePrivateEntriesOperation isOperationValidBeforeRemoteSync:dataObjectContext:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107ed4048

// -[SCCloudUpdatePrivateEntriesOperation remoteSyncWithDependencyProvider:thumbnailFileGenerator:dataVault:dataObjectContext:networker:coreConfigProvider:memoriesBackupTranscodingServices:snapUploadWorkflow:snapDocManager:progressHandler:failureHandler:successHandler:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@?88@?96@?104
// Implementation: 0x107ed4050

// -[SCCloudUpdatePrivateEntriesOperation commitWithEntryUpdates:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107ed43e0

// -[SCCloudUpdatePrivateEntriesOperation cleanupWithContext:cloudFS:backupEventsSubject:snapDocManager:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107ed4be4

// -[SCCloudUpdatePrivateEntriesOperation changedSnapContextsWithEntryUpdate:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ed4dc4

// -[SCCloudUpdatePrivateEntriesOperation isEligibleForTacomaWithCOFService:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ed4fcc

// -[SCCloudUpdatePrivateEntriesOperation _updateEntriesFromNetworker:dependencyProvider:snapsUploadInfo:failureHandler:successHandler:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x107ed500c

// -[SCCloudUpdatePrivateEntriesOperation logParameters]
// Type encoding: @16@0:8
// Implementation: 0x107ed5a94

// -[SCCloudUpdatePrivateEntriesOperation eligibleForOutOfOrderExecution]
// Type encoding: B16@0:8
// Implementation: 0x107ed5c20

// -[SCCloudUpdatePrivateEntriesOperation doesNotRequireMediaUpload]
// Type encoding: B16@0:8
// Implementation: 0x107ed5c28

// -[SCCloudUpdatePrivateEntriesOperation allMediaUploadsCompleteWithBoltDataUploader:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ed5c30

// -[SCCloudUpdatePrivateEntriesOperation requiresSyncStatusUpdate]
// Type encoding: B16@0:8
// Implementation: 0x107ed5c38

// -[SCCloudUpdatePrivateEntriesOperation needRunImmediately]
// Type encoding: B16@0:8
// Implementation: 0x107ed5c40

// -[SCCloudUpdatePrivateEntriesOperation processAndCleanupForOutOfOrderDeletions:dataObjectContext:logger:queue:snapDocManager:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x107ed5c48

// -[SCCloudUpdatePrivateEntriesOperation cleanupContextForOutOfOrderDeletionWithDataObjectContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ed5c50

// -[SCCloudUpdatePrivateEntriesOperation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ed5e38

@end
