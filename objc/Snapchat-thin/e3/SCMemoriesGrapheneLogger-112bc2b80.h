// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesGrapheneLogger
// Superclass: NSObject
// Address: 0x112bc2b80

@interface SCMemoriesGrapheneLogger


// +[SCMemoriesGrapheneLogger fireSnapsTabEntryPredicateFilterWithExcludedCount:totalCount:grapheneRegistry:]
// Type encoding: v40@0:8q16q24@32
// Implementation: 0x108df29d8

// +[SCMemoriesGrapheneLogger fireSnapsTabSnapPredicateFilterWithExcludedCount:grapheneRegistry:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x108df2af0

// +[SCMemoriesGrapheneLogger fireSnapsTabCustomStoryDedupWithCounts:grapheneRegistry:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108df2b9c

// +[SCMemoriesGrapheneLogger fireSnapsTabSnapIdDedupWithCount:grapheneRegistry:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x108df2d98

// +[SCMemoriesGrapheneLogger fireSnapsTabStorageAtRiskFilterWithCount:grapheneRegistry:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x108df2e44

// +[SCMemoriesGrapheneLogger fireSnapsTabEncryptedSnapSkipWithCount:grapheneRegistry:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x108df2ef0

// +[SCMemoriesGrapheneLogger fireSnapsTabEmptyResultWithTotalFetched:grapheneRegistry:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x108df2f9c

// +[SCMemoriesGrapheneLogger fireSnapsTabReclusterNoChangeWithEntryCount:grapheneRegistry:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x108df3048

// +[SCMemoriesGrapheneLogger fireSnapsTabFetchErrorWithDomain:code:grapheneRegistry:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x108df30f4

// +[SCMemoriesGrapheneLogger fireSnapsTabNilProfileWithGrapheneRegistry:]
// Type encoding: v24@0:8@16
// Implementation: 0x108df327c

// +[SCMemoriesGrapheneLogger fireSnapsTabFilterFunnelAtStage:count:grapheneRegistry:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x108df3320

// +[SCMemoriesGrapheneLogger gallerySendTaskFinishMetricWithSuccess:]
// Type encoding: @20@0:8B16
// Implementation: 0x108df2834

// +[SCMemoriesGrapheneLogger fireGallerySendTaskFinishMetricWithSuccess:elapsedTime:grapheneRegistry:]
// Type encoding: v36@0:8B16d20@28
// Implementation: 0x108df2938

// +[SCMemoriesGrapheneLogger gallerySearchQueryPerformanceMetricWithSearchType:locale:source:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108df25e4

// +[SCMemoriesGrapheneLogger fireGallerySearchQueryPerformanceMetricWithSearchType:locale:source:resultCount:elapsedTime:grapheneRegistry:]
// Type encoding: v64@0:8@16@24@32q40d48@56
// Implementation: 0x108df2738

// +[SCMemoriesGrapheneLogger gallerySnapUploadMetricWithTempCellular:skipOperation:isRetry:entryType:]
// Type encoding: @32@0:8B16B20B24i28
// Implementation: 0x108df1d8c

// +[SCMemoriesGrapheneLogger fireGallerySnapUploadMetricWithTempCellular:skipOperation:isRetry:entryType:grapheneRegistry:]
// Type encoding: v40@0:8B16B20B24i28@32
// Implementation: 0x108df1f30

// +[SCMemoriesGrapheneLogger fireGalleryBackupErrorMetricWithStatusCode:detailStatusCode:retryCount:retryPolicy:backupStatus:operationType:grapheneRegistry:]
// Type encoding: v72@0:8q16q24@32@40@48@56@64
// Implementation: 0x108df1fdc

// +[SCMemoriesGrapheneLogger gallerySavingStartMetricWithSaveSource:saveDestination:edited:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x108df2248

// +[SCMemoriesGrapheneLogger fireGallerySavingStartWithSaveSource:saveDestination:edited:snapCount:grapheneRegistry:]
// Type encoding: v52@0:8@16@24B32Q36@44
// Implementation: 0x108df23a8

// +[SCMemoriesGrapheneLogger fireGallerySavingLowDiskSpaceError:grapheneRegistry:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x108df2484

// +[SCMemoriesGrapheneLogger fireGallerySnapCanStream:grapheneRegistry:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x108df1ad0

// +[SCMemoriesGrapheneLogger fireGalleryBrowseCacheHit:grapheneRegistry:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x108df1c18

// +[SCMemoriesGrapheneLogger fireGalleryMeoAttempt:approach:rateLimited:grapheneRegistry:]
// Type encoding: v40@0:8B16@20B28@32
// Implementation: 0x108df1078

// +[SCMemoriesGrapheneLogger fireGalleryRegenerateSqlcipher:errorCode:regenerateSucceeded:grapheneRegistry:]
// Type encoding: v40@0:8B16q20B28@32
// Implementation: 0x108df122c

// +[SCMemoriesGrapheneLogger fireMemoriesMeoUnlockGetSksAssertion:retryCount:missingTag:grapheneRegistry:]
// Type encoding: v44@0:8q16Q24B32@36
// Implementation: 0x108df1400

// +[SCMemoriesGrapheneLogger fireGallerySksRetrieveKey:rateLimitTime:grapheneRegistry:]
// Type encoding: v40@0:8q16q24@32
// Implementation: 0x108df15f4

// +[SCMemoriesGrapheneLogger fireGalleryPrivateFinishSetupWithGrapheneRegistry:]
// Type encoding: v24@0:8@16
// Implementation: 0x108df17a4

// +[SCMemoriesGrapheneLogger fireGalleryPrivateChangePasscode:initialMEO:grapheneRegistry:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x108df1848

// +[SCMemoriesGrapheneLogger fireGalleryPrivateForgetPasscode:grapheneRegistry:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108df199c

// +[SCMemoriesGrapheneLogger galleryExportCompleteWithSuccess:error:cancelled:savedToCameraRoll:]
// Type encoding: @36@0:8B16@20B28B32
// Implementation: 0x108df0b48

// +[SCMemoriesGrapheneLogger fireGalleryExportCompleteWithLatency:success:error:cancelled:savedToCameraRoll:grapheneRegistry:]
// Type encoding: v52@0:8d16B24@28B36B40@44
// Implementation: 0x108df0ccc

// +[SCMemoriesGrapheneLogger galleryExportStartMetricWithMetric:contextMenuSource:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108df0da8

// +[SCMemoriesGrapheneLogger fireGalleryExportStartWithContextMenuSource:snapsCount:storiesCount:grapheneRegistry:]
// Type encoding: v48@0:8@16Q24Q32@40
// Implementation: 0x108df0e94

// +[SCMemoriesGrapheneLogger fireGalleryExportLowDiskSpaceWithGrapheneRegistry:]
// Type encoding: v24@0:8@16
// Implementation: 0x108df0fd4

// +[SCMemoriesGrapheneLogger fireDeeplinkFeaturedStoryAtStage:result:grapheneRegistry:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x108df09dc

// +[SCMemoriesGrapheneLogger fireGallerySQLCipherKeyDeriveLatencyMetric:rekeyed:version:userBasedKey:grapheneRegistry:]
// Type encoding: v48@0:8d16B24@28B36@40
// Implementation: 0x108df00b8

// +[SCMemoriesGrapheneLogger fireGalleryCoreDataDBOpen:grapheneRegistry:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x100b83804

// +[SCMemoriesGrapheneLogger fireGalleryDataObjectError:grapheneRegistry:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108df0298

// +[SCMemoriesGrapheneLogger createUserDataStatus:hasLogoutUserData:]
// Type encoding: @24@0:8B16B20
// Implementation: 0x108df03f0

// +[SCMemoriesGrapheneLogger createSyncThumbnailGenerationErrorWithDomain:code:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x108df053c

// +[SCMemoriesGrapheneLogger createGalleryDataLossRename]
// Type encoding: @16@0:8
// Implementation: 0x108df0680

// +[SCMemoriesGrapheneLogger createGalleryExpiredUserDataPurged]
// Type encoding: @16@0:8
// Implementation: 0x108df06dc

// +[SCMemoriesGrapheneLogger createGalleryFetchCollections:]
// Type encoding: @24@0:8Q16
// Implementation: 0x108df0738

// +[SCMemoriesGrapheneLogger fireGalleryPresentFeaturedStoriesErrorWithErrorMessage:grapheneRegistry:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108df0834

// +[SCMemoriesGrapheneLogger fireGalleryFeatureSettingsCallbackWithGrapheneRegistry:]
// Type encoding: v24@0:8@16
// Implementation: 0x108df0968

// +[SCMemoriesGrapheneLogger fireCloudSyncCleanupWithUnsyncedSnapCount:unsyncedEntryCount:removedEntryCount:isLastPageCleanup:grapheneRegistry:]
// Type encoding: v52@0:8q16q24q32B40@44
// Implementation: 0x108defb3c

// +[SCMemoriesGrapheneLogger fireCloudSyncSnapshotDeletionWithDeletedCount:totalCount:entryIdsCount:grapheneRegistry:]
// Type encoding: v48@0:8q16q24q32@40
// Implementation: 0x108defddc

// +[SCMemoriesGrapheneLogger fireCloudSyncOperationDiscardedWithType:reason:grapheneRegistry:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x108deff4c

// +[SCMemoriesGrapheneLogger fireGrantFullAccessTappedWithContext:grapheneRegistry:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x108def9d8

// +[SCMemoriesGrapheneLogger stringValueWithContext:]
// Type encoding: @24@0:8Q16
// Implementation: 0x108defb20

// +[SCMemoriesGrapheneLogger fireGalleryUploadResultWithStatusCode:host:mediaType:uploadLatencyInSec:contentLengthInByte:grapheneRegistry:]
// Type encoding: v64@0:8q16@24@32d40Q48@56
// Implementation: 0x108deef74

// +[SCMemoriesGrapheneLogger fireServletResponseErrorWithEntryType:grapheneRegistry:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x108def170

// +[SCMemoriesGrapheneLogger fireBackupSnapDocError:grapheneRegistry:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x108def2dc

// +[SCMemoriesGrapheneLogger fireGallerySkipOperationFromDeletionWithGrapheneRegistry:]
// Type encoding: v24@0:8@16
// Implementation: 0x108def43c

// +[SCMemoriesGrapheneLogger fireGalleryLocalOperationMetricWithQueueLength:blockedDuration:grapheneRegistry:]
// Type encoding: v40@0:8q16d24@32
// Implementation: 0x108def4e0

// +[SCMemoriesGrapheneLogger fireGalleryOperationTotalTimeMetricWithQueueLength:durationInSec:operationType:grapheneRegistry:]
// Type encoding: v48@0:8q16d24@32@40
// Implementation: 0x108def5b4

// +[SCMemoriesGrapheneLogger fireGallerySnapBackgroundUploadScheduledWithGrapheneRegistry:]
// Type encoding: v24@0:8@16
// Implementation: 0x108def714

// +[SCMemoriesGrapheneLogger fireGallerySnapBackgroundUploadFinishedWithGrapheneRegistry:]
// Type encoding: v24@0:8@16
// Implementation: 0x108def7b8

// +[SCMemoriesGrapheneLogger fireLegacyEditsSize:mediaType:grapheneRegistry:]
// Type encoding: v40@0:8Q16Q24@32
// Implementation: 0x108def85c

// +[SCMemoriesGrapheneLogger grapheneMetricWithMetric:dimensionsAndValues:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100b839a0

@end
