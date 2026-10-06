// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCloudDeleteEntriesOperation
// Superclass: SCCloudSyncOperation
// Address: 0x112b8a078

@interface SCCloudDeleteEntriesOperation


// -[SCCloudDeleteEntriesOperation initWithProfile:entryIds:entryIdToSnapIdsMap:prioritized:deleteSharedSnapForAll:userContext:]
// Type encoding: @56@0:8@16@24@32B40B44@48
// Implementation: 0x107ec11fc

// -[SCCloudDeleteEntriesOperation type]
// Type encoding: Q16@0:8
// Implementation: 0x107ec1364

// -[SCCloudDeleteEntriesOperation analyticsType]
// Type encoding: q16@0:8
// Implementation: 0x107ec136c

// -[SCCloudDeleteEntriesOperation requestID]
// Type encoding: @16@0:8
// Implementation: 0x107ec1374

// -[SCCloudDeleteEntriesOperation entryIds]
// Type encoding: @16@0:8
// Implementation: 0x107ec13a4

// -[SCCloudDeleteEntriesOperation makeSnapshot]
// Type encoding: @16@0:8
// Implementation: 0x107ec13d4

// -[SCCloudDeleteEntriesOperation initWithSnapshot:requestID:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107ec142c

// -[SCCloudDeleteEntriesOperation detectAndResolveConflictsWithCloudFS:dataObjectContext:logger:snapDocManager:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107ec1618

// -[SCCloudDeleteEntriesOperation executeOptimisticallyWithDataObjectContext:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ec1874

// -[SCCloudDeleteEntriesOperation isOperationValidBeforeRemoteSync:dataObjectContext:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107ec1afc

// -[SCCloudDeleteEntriesOperation remoteSyncWithDependencyProvider:thumbnailFileGenerator:dataVault:dataObjectContext:networker:coreConfigProvider:memoriesBackupTranscodingServices:snapUploadWorkflow:snapDocManager:progressHandler:failureHandler:successHandler:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@?88@?96@?104
// Implementation: 0x107ec1b54

// -[SCCloudDeleteEntriesOperation commitWithEntryUpdates:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107ec1cac

// -[SCCloudDeleteEntriesOperation cleanupWithContext:cloudFS:backupEventsSubject:snapDocManager:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107ec20d8

// -[SCCloudDeleteEntriesOperation changedSnapContextsWithEntryUpdate:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ec2280

// -[SCCloudDeleteEntriesOperation logParameters]
// Type encoding: @16@0:8
// Implementation: 0x107ec2488

// -[SCCloudDeleteEntriesOperation eligibleForOutOfOrderExecution]
// Type encoding: B16@0:8
// Implementation: 0x107ec25d8

// -[SCCloudDeleteEntriesOperation doesNotRequireMediaUpload]
// Type encoding: B16@0:8
// Implementation: 0x107ec25e0

// -[SCCloudDeleteEntriesOperation allMediaUploadsCompleteWithBoltDataUploader:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ec25e8

// -[SCCloudDeleteEntriesOperation requiresSyncStatusUpdate]
// Type encoding: B16@0:8
// Implementation: 0x107ec25f0

// -[SCCloudDeleteEntriesOperation needRunImmediately]
// Type encoding: B16@0:8
// Implementation: 0x107ec25f8

// -[SCCloudDeleteEntriesOperation processAndCleanupForOutOfOrderDeletions:dataObjectContext:logger:queue:snapDocManager:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x107ec2608

// -[SCCloudDeleteEntriesOperation cleanupContextForOutOfOrderDeletionWithDataObjectContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ec2ce0

// -[SCCloudDeleteEntriesOperation isEligibleForTacomaWithCOFService:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ec2ce8

// -[SCCloudDeleteEntriesOperation _deleteEntriesWithNetworker:dataObjectContext:memoriesAssetRepository:logger:performer:successHandler:failureHandler:]
// Type encoding: v72@0:8@16@24@32@40@48@?56@?64
// Implementation: 0x107ec2d28

// -[SCCloudDeleteEntriesOperation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ec3054

@end
