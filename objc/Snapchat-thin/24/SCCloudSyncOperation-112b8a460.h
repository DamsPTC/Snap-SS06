// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCloudSyncOperation
// Superclass: NSObject
// Address: 0x112b8a460

@interface SCCloudSyncOperation

// Property: analyticsType; attributes: Tq,R,N
// Property: operationStartNetworkProcessingTimestampUtc; attributes: T@"NSDate",C,N,V_operationStartNetworkProcessingTimestampUtc
// Property: requestID; attributes: T@"NSString",R,C,N
// Property: entryIds; attributes: T@"NSArray",R,C,N
// Property: type; attributes: TQ,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCloudSyncOperation estimatedUploadTimeWithCloudFS:]
// Type encoding: d24@0:8@16
// Implementation: 0x105bfd8d8

// -[SCCloudSyncOperation serialize]
// Type encoding: @16@0:8
// Implementation: 0x107ee7834

// -[SCCloudSyncOperation deserializeData:requestID:userTrackedLogger:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107ee78f0

// -[SCCloudSyncOperation recordOperationStartNetworkProcessing]
// Type encoding: v16@0:8
// Implementation: 0x107ee7e9c

// -[SCCloudSyncOperation type]
// Type encoding: Q16@0:8
// Implementation: 0x107ee7ed8

// -[SCCloudSyncOperation analyticsType]
// Type encoding: q16@0:8
// Implementation: 0x107ee7ee0

// -[SCCloudSyncOperation requestID]
// Type encoding: @16@0:8
// Implementation: 0x107ee7ee8

// -[SCCloudSyncOperation entryIds]
// Type encoding: @16@0:8
// Implementation: 0x107ee7ef0

// -[SCCloudSyncOperation makeSnapshot]
// Type encoding: @16@0:8
// Implementation: 0x107ee7ef8

// -[SCCloudSyncOperation initWithSnapshot:requestID:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107ee7f00

// -[SCCloudSyncOperation detectAndResolveConflictsWithCloudFS:dataObjectContext:logger:snapDocManager:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107ee7f18

// -[SCCloudSyncOperation executeOptimisticallyWithDataObjectContext:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ee7f20

// -[SCCloudSyncOperation prepareRemoteSyncWithDataObjectContext:cloudFS:dataVault:networker:logger:queue:completionHandler:]
// Type encoding: v72@0:8@16@24@32@40@48@56@?64
// Implementation: 0x107ee7f28

// -[SCCloudSyncOperation remoteSyncWithDependencyProvider:thumbnailFileGenerator:dataVault:dataObjectContext:networker:coreConfigProvider:memoriesBackupTranscodingServices:snapUploadWorkflow:snapDocManager:progressHandler:failureHandler:successHandler:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@?88@?96@?104
// Implementation: 0x107ee7f2c

// -[SCCloudSyncOperation commitWithEntryUpdates:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107ee7f38

// -[SCCloudSyncOperation cleanupWithContext:cloudFS:backupEventsSubject:snapDocManager:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107ee7f40

// -[SCCloudSyncOperation changedSnapContextsWithEntryUpdate:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ee7f44

// -[SCCloudSyncOperation eligibleForOutOfOrderExecution]
// Type encoding: B16@0:8
// Implementation: 0x107ee7f4c

// -[SCCloudSyncOperation doesNotRequireMediaUpload]
// Type encoding: B16@0:8
// Implementation: 0x107ee7f54

// -[SCCloudSyncOperation allMediaUploadsCompleteWithBoltDataUploader:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ee7f5c

// -[SCCloudSyncOperation isOperationFromRetryEntry]
// Type encoding: B16@0:8
// Implementation: 0x107ee7f64

// -[SCCloudSyncOperation isOperationValidBeforeRemoteSync:dataObjectContext:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107ee7f6c

// -[SCCloudSyncOperation logParameters]
// Type encoding: @16@0:8
// Implementation: 0x107ee7f74

// -[SCCloudSyncOperation requiresSyncStatusUpdate]
// Type encoding: B16@0:8
// Implementation: 0x107ee7f7c

// -[SCCloudSyncOperation needRunImmediately]
// Type encoding: B16@0:8
// Implementation: 0x107ee7f84

// -[SCCloudSyncOperation isEligibleForTacomaWithCOFService:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ee7f8c

// -[SCCloudSyncOperation processAndCleanupForOutOfOrderDeletions:dataObjectContext:logger:queue:snapDocManager:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x107ee7f94

// -[SCCloudSyncOperation cleanupContextForOutOfOrderDeletionWithDataObjectContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ee7f9c

// -[SCCloudSyncOperation operationStartNetworkProcessingTimestampUtc]
// Type encoding: @16@0:8
// Implementation: 0x107ee7fa4

// -[SCCloudSyncOperation setOperationStartNetworkProcessingTimestampUtc:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ee7fac

// -[SCCloudSyncOperation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ee7fb4

// +[SCCloudSyncOperation deserialize:requestID:userTrackedLogger:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107ee7978

// +[SCCloudSyncOperation numberOfSnapsForPayload:requestID:]
// Type encoding: Q32@0:8@16@24
// Implementation: 0x107ee7b60

// +[SCCloudSyncOperation snaps:details:private:forPayload:requestID:dataObjectContext:userTrackedLogger:]
// Type encoding: v72@0:8^@16^@24^B32@40@48@56@64
// Implementation: 0x107ee7ce8

@end
