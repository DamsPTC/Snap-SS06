// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesSnapsTabCRSectionDataSource
// Superclass: NSObject
// Address: 0x112a08ad8

@interface SCMemoriesSnapsTabCRSectionDataSource

// Property: delegate; attributes: T@"<SCMemoriesSnapsTabCRSectionDataSourceDelegate>",R,W,N,V_delegate

// -[SCMemoriesSnapsTabCRSectionDataSource initWithDelegate:photoPermissionCoordinator:coreConfigProvider:grapheneRegistry:applicationLifecycleEvents:userTrackedLogger:memoriesExperimentService:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x104f1b60c

// -[SCMemoriesSnapsTabCRSectionDataSource updateCRViewModelForDatesIfNeeded:requestUUID:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104f1b9e0

// -[SCMemoriesSnapsTabCRSectionDataSource uiDidReceivedUpdatesForDates:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f1bc18

// -[SCMemoriesSnapsTabCRSectionDataSource uiDidAnnounceRecluster]
// Type encoding: v16@0:8
// Implementation: 0x104f1bd84

// -[SCMemoriesSnapsTabCRSectionDataSource _kickOffRequestsIfPossibleWithRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f1be8c

// -[SCMemoriesSnapsTabCRSectionDataSource _getDateArrayNotInUIWithDateArray:]
// Type encoding: @24@0:8@16
// Implementation: 0x104f1bf90

// -[SCMemoriesSnapsTabCRSectionDataSource _getDatesNeedRefetch]
// Type encoding: @16@0:8
// Implementation: 0x104f1c10c

// -[SCMemoriesSnapsTabCRSectionDataSource _startFetchingWithUUID:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f1c238

// -[SCMemoriesSnapsTabCRSectionDataSource _fetchNewRecentSummaryAssetsWithDateMedadata:datesNeedRefetchCountDownSet:UUID:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104f1c380

// -[SCMemoriesSnapsTabCRSectionDataSource _updateModelAndAnnounceUpdatesWithDateMetadata:fetchResults:excludeFetchResults:UUID:datesNeedRefetchCountDownSet:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x104f1cb70

// -[SCMemoriesSnapsTabCRSectionDataSource _createViewModelWithStoringKey:phFetchResult:excludeFetchResult:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x104f1ce8c

// -[SCMemoriesSnapsTabCRSectionDataSource _announceUpdatesWithUUID:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f1d388

// -[SCMemoriesSnapsTabCRSectionDataSource _isModelValid:]
// Type encoding: B24@0:8@16
// Implementation: 0x104f1d580

// -[SCMemoriesSnapsTabCRSectionDataSource _getPHFetchingPredicateArrayFromDateMetaData:]
// Type encoding: @24@0:8@16
// Implementation: 0x104f1d6fc

// -[SCMemoriesSnapsTabCRSectionDataSource _getPHFetchingPredicateFromDateMetaData:]
// Type encoding: @24@0:8@16
// Implementation: 0x104f1d794

// -[SCMemoriesSnapsTabCRSectionDataSource _cleanUpCurrentRequestAndStartPendingIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x104f1d800

// -[SCMemoriesSnapsTabCRSectionDataSource _getDateMetadatasFromTitleString:]
// Type encoding: @24@0:8@16
// Implementation: 0x104f1d878

// -[SCMemoriesSnapsTabCRSectionDataSource _checkAndAnnouncePHChangeIfNecessary:isFromBackground:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104f1da04

// -[SCMemoriesSnapsTabCRSectionDataSource _handleNewPHChangeWithExcludingFetchResult:change:isFromBackground:changedDateTitlesNeedToBeAnnounced:]
// Type encoding: v44@0:8@16@24B32@36
// Implementation: 0x104f1dc48

// -[SCMemoriesSnapsTabCRSectionDataSource _updateModelWithFetchResults:fetchResults:excludeFetchResults:changedDateTitlesNeedToBeAnnounced:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x104f1e594

// -[SCMemoriesSnapsTabCRSectionDataSource _fetchLimit]
// Type encoding: Q16@0:8
// Implementation: 0x104f1e910

// -[SCMemoriesSnapsTabCRSectionDataSource testOnly_GetDebouncer]
// Type encoding: @16@0:8
// Implementation: 0x104f1e950

// -[SCMemoriesSnapsTabCRSectionDataSource delegate]
// Type encoding: @16@0:8
// Implementation: 0x104f1e978

// -[SCMemoriesSnapsTabCRSectionDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104f1e990

@end
