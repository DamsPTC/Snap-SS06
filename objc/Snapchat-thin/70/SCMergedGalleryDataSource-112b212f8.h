// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMergedGalleryDataSource
// Superclass: NSObject
// Address: 0x112b212f8

@interface SCMergedGalleryDataSource

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: sqliteLowDiskError; attributes: TB,R,N,V_sqliteLowDiskError

// -[SCMergedGalleryDataSource initWithProfile:dataObjectContext:spectaclesContentDataSourceFuture:cloudSync:memoriesFeaturedStoryDataMutator:grapheneRegistry:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x100b88974

// -[SCMergedGalleryDataSource fetchGallerySnapsForEntry:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bee190

// -[SCMergedGalleryDataSource fetchGallerySnapsForEntry:useHighlightContentDataSourceForTemporaryEntries:shouldSort:]
// Type encoding: @32@0:8@16B24B28
// Implementation: 0x106bee19c

// -[SCMergedGalleryDataSource fetchGallerySnapsForEntry:completionQueue:completionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106bee2d8

// -[SCMergedGalleryDataSource fetchGallerySnapsWithSnapIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bee488

// -[SCMergedGalleryDataSource fetchGalleryEntryForSnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bee49c

// -[SCMergedGalleryDataSource fetchActiveGalleryEntryForSnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bee520

// -[SCMergedGalleryDataSource fetchActiveGalleryEntriesForSnaps:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bee610

// -[SCMergedGalleryDataSource fetchGalleryEntryWithEntryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bee8c8

// -[SCMergedGalleryDataSource fetchGalleryEntriesWithEntryIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bee8dc

// -[SCMergedGalleryDataSource countOfGallerySnapsForEntry:]
// Type encoding: Q24@0:8@16
// Implementation: 0x106bee938

// -[SCMergedGalleryDataSource countOfGallerySnapsForEntryRespectingMultiSnaps:]
// Type encoding: Q24@0:8@16
// Implementation: 0x106bee9b4

// -[SCMergedGalleryDataSource _isEligibleForFetchingFavoritedSnaps:]
// Type encoding: B24@0:8@16
// Implementation: 0x106bee9f0

// -[SCMergedGalleryDataSource countOfGallerySnapsForEntryFavorited:]
// Type encoding: Q24@0:8@16
// Implementation: 0x106beea54

// -[SCMergedGalleryDataSource fetchGallerySnapsForEntryFavorited:]
// Type encoding: @24@0:8@16
// Implementation: 0x106beeabc

// -[SCMergedGalleryDataSource fetchFavoritedGallerySnapsWithSnapIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x106beeb2c

// -[SCMergedGalleryDataSource fetchRandomGallerySnaps:]
// Type encoding: @24@0:8q16
// Implementation: 0x106beeb88

// -[SCMergedGalleryDataSource fetchTotalGalleryEntries]
// Type encoding: Q16@0:8
// Implementation: 0x106beed18

// -[SCMergedGalleryDataSource fetchCurrentGalleryEntries]
// Type encoding: @16@0:8
// Implementation: 0x106beed2c

// -[SCMergedGalleryDataSource fetchGallerySnapsWithMediaIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x106beeed8

// -[SCMergedGalleryDataSource fetchGallerySnapDetailForSnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x106beeeec

// -[SCMergedGalleryDataSource isGalleryEntryFailed:]
// Type encoding: B24@0:8@16
// Implementation: 0x106beef04

// -[SCMergedGalleryDataSource observe:queue:changeHandler:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x106bef05c

// -[SCMergedGalleryDataSource observeUserNumberOfStories]
// Type encoding: @16@0:8
// Implementation: 0x106bef1e0

// -[SCMergedGalleryDataSource _observeQueryForUserNumberOfStories]
// Type encoding: @16@0:8
// Implementation: 0x106bef394

// -[SCMergedGalleryDataSource _fetchUserNumberOfStories]
// Type encoding: @16@0:8
// Implementation: 0x106bef570

// -[SCMergedGalleryDataSource addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bef608

// -[SCMergedGalleryDataSource removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bef774

// -[SCMergedGalleryDataSource reannounceDataSourceChange]
// Type encoding: v16@0:8
// Implementation: 0x106bef77c

// -[SCMergedGalleryDataSource observeChanges]
// Type encoding: @16@0:8
// Implementation: 0x106bef7ec

// -[SCMergedGalleryDataSource dataSource:didChangeEntries:failedEntries:fetchEntryError:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106bef814

// -[SCMergedGalleryDataSource cloudSyncDidMutateBackupOperation]
// Type encoding: v16@0:8
// Implementation: 0x106bef878

// -[SCMergedGalleryDataSource cloudSync:didChangeStatus:isBackingUpNow:mayUpload:requiresUpgrade:]
// Type encoding: v44@0:8@16Q24B32B36B40
// Implementation: 0x100c0fa2c

// -[SCMergedGalleryDataSource cloudSyncDidMutateBackupOperationIsDuringSync:hasMoreResponses:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x106bef87c

// -[SCMergedGalleryDataSource reloadDataAfterMutating]
// Type encoding: v16@0:8
// Implementation: 0x106bef884

// -[SCMergedGalleryDataSource _mixWithAllContentIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106bef9b8

// -[SCMergedGalleryDataSource observeFeaturedStoriesUpdates]
// Type encoding: @16@0:8
// Implementation: 0x100b89778

// -[SCMergedGalleryDataSource lagunaContentDataSourceDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x106befb68

// -[SCMergedGalleryDataSource lagunaContentFinalized:withSnaps:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106befbc8

// -[SCMergedGalleryDataSource featuredStoryDataSourceDidChange]
// Type encoding: v16@0:8
// Implementation: 0x106befbcc

// -[SCMergedGalleryDataSource _fetchDataIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106befbd0

// -[SCMergedGalleryDataSource _refetchEntries]
// Type encoding: v16@0:8
// Implementation: 0x106befc08

// -[SCMergedGalleryDataSource _refetchFailedEntries]
// Type encoding: v16@0:8
// Implementation: 0x106befd64

// -[SCMergedGalleryDataSource _mixAllDataSourcesAndAnnounceChanges]
// Type encoding: v16@0:8
// Implementation: 0x106befee4

// -[SCMergedGalleryDataSource _checkSQLiteLowDiskFetchError]
// Type encoding: v16@0:8
// Implementation: 0x106beff48

// -[SCMergedGalleryDataSource sqliteLowDiskError]
// Type encoding: B16@0:8
// Implementation: 0x106bf0008

// -[SCMergedGalleryDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106bf0010

@end
