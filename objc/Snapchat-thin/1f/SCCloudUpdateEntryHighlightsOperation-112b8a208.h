// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCloudUpdateEntryHighlightsOperation
// Superclass: SCCloudSyncOperation
// Address: 0x112b8a208

@interface SCCloudUpdateEntryHighlightsOperation


// -[SCCloudUpdateEntryHighlightsOperation initWithProfile:entryId:highlightedSnapIdSet:userContext:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107ecda48

// -[SCCloudUpdateEntryHighlightsOperation type]
// Type encoding: Q16@0:8
// Implementation: 0x107ecdb90

// -[SCCloudUpdateEntryHighlightsOperation analyticsType]
// Type encoding: q16@0:8
// Implementation: 0x107ecdb98

// -[SCCloudUpdateEntryHighlightsOperation requestID]
// Type encoding: @16@0:8
// Implementation: 0x107ecdba0

// -[SCCloudUpdateEntryHighlightsOperation entryIds]
// Type encoding: @16@0:8
// Implementation: 0x107ecdbd0

// -[SCCloudUpdateEntryHighlightsOperation makeSnapshot]
// Type encoding: @16@0:8
// Implementation: 0x107ecdc40

// -[SCCloudUpdateEntryHighlightsOperation initWithSnapshot:requestID:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107ecdc8c

// -[SCCloudUpdateEntryHighlightsOperation detectAndResolveConflictsWithCloudFS:dataObjectContext:logger:snapDocManager:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107ecde2c

// -[SCCloudUpdateEntryHighlightsOperation executeOptimisticallyWithDataObjectContext:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ece128

// -[SCCloudUpdateEntryHighlightsOperation isOperationValidBeforeRemoteSync:dataObjectContext:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107ece324

// -[SCCloudUpdateEntryHighlightsOperation remoteSyncWithDependencyProvider:thumbnailFileGenerator:dataVault:dataObjectContext:networker:coreConfigProvider:memoriesBackupTranscodingServices:snapUploadWorkflow:snapDocManager:progressHandler:failureHandler:successHandler:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@?88@?96@?104
// Implementation: 0x107ece32c

// -[SCCloudUpdateEntryHighlightsOperation commitWithEntryUpdates:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107eceaf8

// -[SCCloudUpdateEntryHighlightsOperation cleanupWithContext:cloudFS:backupEventsSubject:snapDocManager:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107eced44

// -[SCCloudUpdateEntryHighlightsOperation changedSnapContextsWithEntryUpdate:]
// Type encoding: @24@0:8@16
// Implementation: 0x107eced48

// -[SCCloudUpdateEntryHighlightsOperation logParameters]
// Type encoding: @16@0:8
// Implementation: 0x107eced50

// -[SCCloudUpdateEntryHighlightsOperation doesNotRequireMediaUpload]
// Type encoding: B16@0:8
// Implementation: 0x107eceed0

// -[SCCloudUpdateEntryHighlightsOperation allMediaUploadsCompleteWithBoltDataUploader:]
// Type encoding: B24@0:8@16
// Implementation: 0x107eceed8

// -[SCCloudUpdateEntryHighlightsOperation requiresSyncStatusUpdate]
// Type encoding: B16@0:8
// Implementation: 0x107eceee0

// -[SCCloudUpdateEntryHighlightsOperation eligibleForOutOfOrderExecution]
// Type encoding: B16@0:8
// Implementation: 0x107eceee8

// -[SCCloudUpdateEntryHighlightsOperation needRunImmediately]
// Type encoding: B16@0:8
// Implementation: 0x107eceef0

// -[SCCloudUpdateEntryHighlightsOperation processAndCleanupForOutOfOrderDeletions:dataObjectContext:logger:queue:snapDocManager:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x107eceef8

// -[SCCloudUpdateEntryHighlightsOperation cleanupContextForOutOfOrderDeletionWithDataObjectContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ecef00

// -[SCCloudUpdateEntryHighlightsOperation isEligibleForTacomaWithCOFService:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ecef08

// -[SCCloudUpdateEntryHighlightsOperation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ecef48

@end
