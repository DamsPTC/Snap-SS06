// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE
// Superclass: SCCloudSyncOperation
// Address: 0x112b8a398

@interface SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE initWithProfile:gallerySnap:gallerySnapDetail:userContext:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107ed5eb8

// -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE type]
// Type encoding: Q16@0:8
// Implementation: 0x107ed5ff8

// -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE analyticsType]
// Type encoding: q16@0:8
// Implementation: 0x107ed6000

// -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE requestID]
// Type encoding: @16@0:8
// Implementation: 0x107ed6008

// -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE entryIds]
// Type encoding: @16@0:8
// Implementation: 0x107ed6038

// -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE makeSnapshot]
// Type encoding: @16@0:8
// Implementation: 0x107ed6040

// -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE initWithSnapshot:requestID:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107ed608c

// -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE detectAndResolveConflictsWithCloudFS:dataObjectContext:logger:snapDocManager:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107ed622c

// -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE executeOptimisticallyWithDataObjectContext:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ed6234

// -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE isOperationValidBeforeRemoteSync:dataObjectContext:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107ed623c

// -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE remoteSyncFromCloudFS:thumbnailFileGenerator:dataVault:dataObjectContext:networker:logger:coreConfigProvider:boltDataUploader:memoriesAssetRepository:snapUploadWorkflow:performer:progressHandler:failureHandler:successHandler:]
// Type encoding: @128@0:8@16@24@32@40@48@56@64@72@80@88@96@?104@?112@?120
// Implementation: 0x107ed6244

// -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE commitWithEntryUpdates:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107ed626c

// -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE cleanupWithContext:cloudFS:backupEventsSubject:snapDocManager:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107ed6274

// -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE changedSnapContextsWithEntryUpdate:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ed6278

// -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE logParameters]
// Type encoding: @16@0:8
// Implementation: 0x107ed63b8

// -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE eligibleForOutOfOrderExecution]
// Type encoding: B16@0:8
// Implementation: 0x107ed653c

// -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE doesNotRequireMediaUpload]
// Type encoding: B16@0:8
// Implementation: 0x107ed6544

// -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE allMediaUploadsCompleteWithBoltDataUploader:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ed654c

// -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE requiresSyncStatusUpdate]
// Type encoding: B16@0:8
// Implementation: 0x107ed6554

// -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE needRunImmediately]
// Type encoding: B16@0:8
// Implementation: 0x107ed655c

// -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE processAndCleanupForOutOfOrderDeletions:dataObjectContext:logger:queue:snapDocManager:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x107ed6564

// -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE cleanupContextForOutOfOrderDeletionWithDataObjectContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ed656c

// -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE isEligibleForTacomaWithCOFService:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ed6574

// -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE snapPlaceholders]
// Type encoding: @16@0:8
// Implementation: 0x107ed657c

// -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE detailPlaceholders]
// Type encoding: @16@0:8
// Implementation: 0x107ed65ec

// -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE isPrivateWithDataObjectContext:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ed665c

// -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ed6720

@end
