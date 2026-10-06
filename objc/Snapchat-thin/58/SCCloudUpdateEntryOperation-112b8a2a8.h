// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCloudUpdateEntryOperation
// Superclass: SCCloudSyncOperation
// Address: 0x112b8a2a8

@interface SCCloudUpdateEntryOperation

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCloudUpdateEntryOperation initWithProfile:entryId:title:deletedSnapId:addSnapEntity:dataVaultEncryption:updatedSnapsOrder:userContext:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x107ecf09c

// -[SCCloudUpdateEntryOperation initWithEntryId:deleteSnapId:deleteSharedSnapForAll:profile:userContext:]
// Type encoding: @52@0:8@16@24B32@36@44
// Implementation: 0x107ecf2ec

// -[SCCloudUpdateEntryOperation initWithEntryId:replaceSnapId:addSnapEntity:dataVaultEncryption:profile:userContext:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x107ecf340

// -[SCCloudUpdateEntryOperation initWithEntryId:title:profile:userContext:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107ecf4cc

// -[SCCloudUpdateEntryOperation initWithEntryId:title:updatedSnapsOrder:profile:userContext:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x107ecf520

// -[SCCloudUpdateEntryOperation type]
// Type encoding: Q16@0:8
// Implementation: 0x107ecf574

// -[SCCloudUpdateEntryOperation analyticsType]
// Type encoding: q16@0:8
// Implementation: 0x107ecf57c

// -[SCCloudUpdateEntryOperation requestID]
// Type encoding: @16@0:8
// Implementation: 0x107ecf584

// -[SCCloudUpdateEntryOperation entryIds]
// Type encoding: @16@0:8
// Implementation: 0x107ecf5b4

// -[SCCloudUpdateEntryOperation makeSnapshot]
// Type encoding: @16@0:8
// Implementation: 0x107ecf624

// -[SCCloudUpdateEntryOperation initWithSnapshot:requestID:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107ecf6b8

// -[SCCloudUpdateEntryOperation detectAndResolveConflictsWithCloudFS:dataObjectContext:logger:snapDocManager:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107ecf990

// -[SCCloudUpdateEntryOperation executeOptimisticallyWithDataObjectContext:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ed0128

// -[SCCloudUpdateEntryOperation isOperationValidBeforeRemoteSync:dataObjectContext:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107ed0bb8

// -[SCCloudUpdateEntryOperation remoteSyncWithDependencyProvider:thumbnailFileGenerator:dataVault:dataObjectContext:networker:coreConfigProvider:memoriesBackupTranscodingServices:snapUploadWorkflow:snapDocManager:progressHandler:failureHandler:successHandler:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@?88@?96@?104
// Implementation: 0x107ed0bc0

// -[SCCloudUpdateEntryOperation commitWithEntryUpdates:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107ed0cf4

// -[SCCloudUpdateEntryOperation cleanupWithContext:cloudFS:backupEventsSubject:snapDocManager:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107ed13f8

// -[SCCloudUpdateEntryOperation changedSnapContextsWithEntryUpdate:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ed14ec

// -[SCCloudUpdateEntryOperation isEligibleForTacomaWithCOFService:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ed1700

// -[SCCloudUpdateEntryOperation _orchestrateUpdateEntryWithDependencyProvider:networker:thumbnailFileGenerator:dataVault:dataObjectContext:coreConfigProvider:progressHandler:]
// Type encoding: @72@0:8@16@24@32@40@48@56@?64
// Implementation: 0x107ed1800

// -[SCCloudUpdateEntryOperation _getCloudSyncEntryData:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ed2324

// -[SCCloudUpdateEntryOperation logParameters]
// Type encoding: @16@0:8
// Implementation: 0x107ed23d4

// -[SCCloudUpdateEntryOperation requiresSyncStatusUpdate]
// Type encoding: B16@0:8
// Implementation: 0x107ed2598

// -[SCCloudUpdateEntryOperation eligibleForOutOfOrderExecution]
// Type encoding: B16@0:8
// Implementation: 0x107ed25a8

// -[SCCloudUpdateEntryOperation doesNotRequireMediaUpload]
// Type encoding: B16@0:8
// Implementation: 0x107ed25b0

// -[SCCloudUpdateEntryOperation allMediaUploadsCompleteWithBoltDataUploader:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ed25b8

// -[SCCloudUpdateEntryOperation needRunImmediately]
// Type encoding: B16@0:8
// Implementation: 0x107ed25c0

// -[SCCloudUpdateEntryOperation processAndCleanupForOutOfOrderDeletions:dataObjectContext:logger:queue:snapDocManager:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x107ed25c8

// -[SCCloudUpdateEntryOperation cleanupContextForOutOfOrderDeletionWithDataObjectContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ed2850

// -[SCCloudUpdateEntryOperation snapPlaceholders]
// Type encoding: @16@0:8
// Implementation: 0x107ed28d0

// -[SCCloudUpdateEntryOperation detailPlaceholders]
// Type encoding: @16@0:8
// Implementation: 0x107ed294c

// -[SCCloudUpdateEntryOperation miniThumbnailPlaceholders]
// Type encoding: @16@0:8
// Implementation: 0x107ed29c8

// -[SCCloudUpdateEntryOperation numberOfSnaps]
// Type encoding: Q16@0:8
// Implementation: 0x107ed2a44

// -[SCCloudUpdateEntryOperation dataVaultEncryption]
// Type encoding: @16@0:8
// Implementation: 0x107ed2a5c

// -[SCCloudUpdateEntryOperation isPrivateWithDataObjectContext:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ed2a8c

// -[SCCloudUpdateEntryOperation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ed2ae4

@end
