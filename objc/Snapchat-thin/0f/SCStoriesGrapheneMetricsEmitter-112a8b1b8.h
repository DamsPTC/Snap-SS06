// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesGrapheneMetricsEmitter
// Superclass: NSObject
// Address: 0x112a8b1b8

@interface SCStoriesGrapheneMetricsEmitter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoriesGrapheneMetricsEmitter init]
// Type encoding: @16@0:8
// Implementation: 0x100430ec0

// -[SCStoriesGrapheneMetricsEmitter logStoriesEmitUploadMediaForPostingWithReason:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b08eb0

// -[SCStoriesGrapheneMetricsEmitter logStoriesIncrementLoadMediaFromCacheMetrics:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b08ec0

// -[SCStoriesGrapheneMetricsEmitter logStoriesEmitThumbnailFetchLatencyMetric:identifier:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x105b08ed0

// -[SCStoriesGrapheneMetricsEmitter logStoriesEmitLoadThumbnailMetrics:]
// Type encoding: v20@0:8B16
// Implementation: 0x105b08eec

// -[SCStoriesGrapheneMetricsEmitter logStoriesEmitThumbnailToUploadTooBigMetric:]
// Type encoding: v24@0:8q16
// Implementation: 0x105b08f60

// -[SCStoriesGrapheneMetricsEmitter logStoriesEmitNoThumbnailToUploadMetric]
// Type encoding: v16@0:8
// Implementation: 0x105b08f70

// -[SCStoriesGrapheneMetricsEmitter logStoriesEmitMediaUploadedWithoutInitiationMetric:]
// Type encoding: v24@0:8q16
// Implementation: 0x105b08f84

// -[SCStoriesGrapheneMetricsEmitter logStoriesEmitAsyncPostFailureWithRecoverable:]
// Type encoding: v20@0:8B16
// Implementation: 0x105b0900c

// -[SCStoriesGrapheneMetricsEmitter logStoriesEmitRecoverStoryResult:withReason:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x105b09030

// -[SCStoriesGrapheneMetricsEmitter logStoriesEmitRetryPostMetrics:]
// Type encoding: v20@0:8B16
// Implementation: 0x105b0904c

// -[SCStoriesGrapheneMetricsEmitter logStoriesEmitPostingState:conflictWithReason:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x105b09070

// -[SCStoriesGrapheneMetricsEmitter logStoriesEmitRecoverStoryTriggerReason:withMissingGroupStory:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105b090cc

// -[SCStoriesGrapheneMetricsEmitter logStoriesLogDFStoriesSectionImpression:withFriendStoriesCount:]
// Type encoding: v28@0:8B16Q20
// Implementation: 0x105b090f0

// -[SCStoriesGrapheneMetricsEmitter logStoriesLogDFStoryListViewTapSeeAll]
// Type encoding: v16@0:8
// Implementation: 0x105b09168

// -[SCStoriesGrapheneMetricsEmitter logStoriesReadReceiptClient:missingParam:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105b0917c

// -[SCStoriesGrapheneMetricsEmitter logStoriesPlaybackFindStorySessionByLookupKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b091d8

// -[SCStoriesGrapheneMetricsEmitter logStoriesFetchThrottled:identifier:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105b09234

// -[SCStoriesGrapheneMetricsEmitter logSnapchatterFetchResult:fetchSource:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105b09244

// -[SCStoriesGrapheneMetricsEmitter logSnapchattersToFetchLevel:fetchSource:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x105b092a0

// -[SCStoriesGrapheneMetricsEmitter logRemoteSnapchattersToFetchLevel:fetchSource:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x105b09308

// -[SCStoriesGrapheneMetricsEmitter logSnapchatterFetchLatency:step:fetchSource:]
// Type encoding: v40@0:8d16@24@32
// Implementation: 0x105b09370

// -[SCStoriesGrapheneMetricsEmitter logNonexistingSnapchatters:fetchSource:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x105b093d8

// -[SCStoriesGrapheneMetricsEmitter logSnapchatterLoginWaitTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x105b094d0

// -[SCStoriesGrapheneMetricsEmitter logSnapchatterWaitFinishedWithStatus:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b094e0

// -[SCStoriesGrapheneMetricsEmitter logUnidirectionalFriendStorySnapUsernameNotFound]
// Type encoding: v16@0:8
// Implementation: 0x105b0953c

// -[SCStoriesGrapheneMetricsEmitter logUnidirectionalFriendStoryFetchTotalUserCount:userWithStoryCount:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x105b09550

// -[SCStoriesGrapheneMetricsEmitter logUnidirectionalFriendStoriesToRemove:]
// Type encoding: v24@0:8q16
// Implementation: 0x105b09590

// -[SCStoriesGrapheneMetricsEmitter logUnidirectionalFriendStoryDeltaSync:]
// Type encoding: v20@0:8B16
// Implementation: 0x105b095a0

// -[SCStoriesGrapheneMetricsEmitter logUnidirectionalFriendStoryNewSnaps:deletions:isDeltaSync:]
// Type encoding: v36@0:8q16q24B32
// Implementation: 0x105b095c4

// -[SCStoriesGrapheneMetricsEmitter logPublicUserIsMutualFriend]
// Type encoding: v16@0:8
// Implementation: 0x105b09640

// -[SCStoriesGrapheneMetricsEmitter logCustomStoriesToFetchByFetchType:fullSync:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105b09654

// -[SCStoriesGrapheneMetricsEmitter logCustomStoriesNumOfCombinedParticipants:]
// Type encoding: v24@0:8q16
// Implementation: 0x105b09900

// -[SCStoriesGrapheneMetricsEmitter logCustomStoriesNumOfParticipants:]
// Type encoding: v24@0:8q16
// Implementation: 0x105b09948

// -[SCStoriesGrapheneMetricsEmitter logCustomStoriesIsFullSync:]
// Type encoding: v20@0:8B16
// Implementation: 0x1008acd44

// -[SCStoriesGrapheneMetricsEmitter logCustomStoriesFullSyncWithRemovedCustomStories:]
// Type encoding: v24@0:8q16
// Implementation: 0x105b09958

// -[SCStoriesGrapheneMetricsEmitter logCustomStoriesFullSyncWithMentionedCustomStories:]
// Type encoding: v24@0:8q16
// Implementation: 0x105b09994

// -[SCStoriesGrapheneMetricsEmitter logCustomStoriesDeltaSyncWithUpdatedCustomStories:]
// Type encoding: v24@0:8q16
// Implementation: 0x105b099a4

// -[SCStoriesGrapheneMetricsEmitter logCustomStoriesNumOfUpdatedCustomStories:]
// Type encoding: v24@0:8q16
// Implementation: 0x105b099b4

// -[SCStoriesGrapheneMetricsEmitter logNetworkLatencyWithClassIdentifier:step:latency:]
// Type encoding: v40@0:8@16@24d32
// Implementation: 0x10056451c

// -[SCStoriesGrapheneMetricsEmitter logNetworkFetchWithClassIdentifier:statusCode:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105b099fc

// -[SCStoriesGrapheneMetricsEmitter logNetworkFetchWithClassIdentifier:fetchResult:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1008a3e2c

// -[SCStoriesGrapheneMetricsEmitter logBatchStoriesFetchStatusCode:source:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x105b09a58

// -[SCStoriesGrapheneMetricsEmitter logStoriesNetworkRequestWithStatusCode:endpoint:source:feedTypes:mixedFeedVersion:]
// Type encoding: v56@0:8q16@24@32@40@48
// Implementation: 0x105b09ab4

// -[SCStoriesGrapheneMetricsEmitter logBatchStoriesMissingFetchStatusCodeWithSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b09b18

// -[SCStoriesGrapheneMetricsEmitter logDiscoverFeedQueryDroppedWithEvent:responseSource:currentSource:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105b09b74

// -[SCStoriesGrapheneMetricsEmitter logFulfillStoryAdsUnimpressedCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105b09bec

// -[SCStoriesGrapheneMetricsEmitter logFulfillStoryAdsOrganicStoriesPassedCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105b09c34

// -[SCStoriesGrapheneMetricsEmitter logFulfillStoryAdsRequestSent]
// Type encoding: v16@0:8
// Implementation: 0x105b09c7c

// -[SCStoriesGrapheneMetricsEmitter logFulfillStoryAdsPromotedCardCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105b09c90

// -[SCStoriesGrapheneMetricsEmitter logFulfillStoryAdsResultingPromotedStoryCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105b09cd8

// -[SCStoriesGrapheneMetricsEmitter logStoriesNetworkRequestWithEndpoint:source:success:requestSize:responseSize:]
// Type encoding: v52@0:8@16@24B32q36q44
// Implementation: 0x1008a4f20

// -[SCStoriesGrapheneMetricsEmitter logViewerListResponseSmallerThanLocalViewerList:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b09d20

// -[SCStoriesGrapheneMetricsEmitter logViewerInfoFetchResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b09d30

// -[SCStoriesGrapheneMetricsEmitter logViewerInfoDuplicateViewers:viewerType:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x105b09d40

// -[SCStoriesGrapheneMetricsEmitter logViewerInfoContainsUserOwnView]
// Type encoding: v16@0:8
// Implementation: 0x105b09d9c

// -[SCStoriesGrapheneMetricsEmitter logViewerInfoFetchLatency:step:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x105b09db0

// -[SCStoriesGrapheneMetricsEmitter logViewerInfoMissingSnapchatterInPlayback]
// Type encoding: v16@0:8
// Implementation: 0x105b09dbc

// -[SCStoriesGrapheneMetricsEmitter logViewerInfoUnknownType]
// Type encoding: v16@0:8
// Implementation: 0x105b09dd0

// -[SCStoriesGrapheneMetricsEmitter logViewerInfoSpotlightSnapZeroViewWithSnapCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x105b09de4

// -[SCStoriesGrapheneMetricsEmitter logStoriesEmitNonfriendViewedPrivateStorySnap:]
// Type encoding: v20@0:8B16
// Implementation: 0x105b09e24

// -[SCStoriesGrapheneMetricsEmitter logNumOfSnapsToKeepSnapViewers:]
// Type encoding: v24@0:8q16
// Implementation: 0x100817b68

// -[SCStoriesGrapheneMetricsEmitter logMyStoriesFetchSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b09e48

// -[SCStoriesGrapheneMetricsEmitter logMyStoriesRecoveryWithNumOfSnaps:]
// Type encoding: v24@0:8q16
// Implementation: 0x105b09e58

// -[SCStoriesGrapheneMetricsEmitter logMyStoriesAsyncPostingWithConfirmedPosts:failedPosts:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x105b09e9c

// -[SCStoriesGrapheneMetricsEmitter logCrossPostResultWithDestinationType:result:composition:isPartial:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x105b09f18

// -[SCStoriesGrapheneMetricsEmitter logCrossPostSendWithComposition:isPartial:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105b09f30

// -[SCStoriesGrapheneMetricsEmitter logMyStoriesHasSpotlightToFetchStatus]
// Type encoding: v16@0:8
// Implementation: 0x105b09f44

// -[SCStoriesGrapheneMetricsEmitter logMyStoriesHasPostsToConfirm]
// Type encoding: v16@0:8
// Implementation: 0x105b09f58

// -[SCStoriesGrapheneMetricsEmitter logMyStoriesRemoveSnapsNotOnServerWithIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b09f6c

// -[SCStoriesGrapheneMetricsEmitter logMyStoriesSkipProcessingStory]
// Type encoding: v16@0:8
// Implementation: 0x105b09fc8

// -[SCStoriesGrapheneMetricsEmitter logMyOurStoryUpdatesWithStoryUpdates:viewStateUpdates:viewerInfoUpdates:postingStateUpdates:postingProgressUpdates:]
// Type encoding: v56@0:8q16q24q32q40q48
// Implementation: 0x105b09fdc

// -[SCStoriesGrapheneMetricsEmitter logMyOurStory0ViewUpdatesWithStoryUpdates:viewStateUpdates:viewerInfoUpdates:postingStateUpdates:postingProgressUpdates:]
// Type encoding: v56@0:8q16q24q32q40q48
// Implementation: 0x105b0a098

// -[SCStoriesGrapheneMetricsEmitter logMyOurStoryTotalSnaps:showingSnaps:viewerInfo:totalViewCount:]
// Type encoding: v48@0:8q16q24q32q40
// Implementation: 0x105b0a154

// -[SCStoriesGrapheneMetricsEmitter logMyOurStory0ViewTotalSnaps:showingSnaps:viewerInfo:totalViewCount:]
// Type encoding: v48@0:8q16q24q32q40
// Implementation: 0x105b0a1f4

// -[SCStoriesGrapheneMetricsEmitter logMyOurStorySectionAppearanceWithNumOfSnapsMissingViews:]
// Type encoding: v24@0:8q16
// Implementation: 0x105b0a26c

// -[SCStoriesGrapheneMetricsEmitter logMyOurStoryExpirationInitialNumOfSnaps:]
// Type encoding: v24@0:8q16
// Implementation: 0x100816894

// -[SCStoriesGrapheneMetricsEmitter logMyOurStoryExpirationFinalNumOfSnaps:]
// Type encoding: v24@0:8q16
// Implementation: 0x100816a38

// -[SCStoriesGrapheneMetricsEmitter logMyOurStorySyncInitialNumOfSnaps:]
// Type encoding: v24@0:8q16
// Implementation: 0x105b0a2e4

// -[SCStoriesGrapheneMetricsEmitter logMyOurStorySyncFinalNumOfSnaps:]
// Type encoding: v24@0:8q16
// Implementation: 0x105b0a2f4

// -[SCStoriesGrapheneMetricsEmitter logMyOurStoryNumOfSequences:]
// Type encoding: v24@0:8q16
// Implementation: 0x105b0a304

// -[SCStoriesGrapheneMetricsEmitter logMyOurStoryNumOfSnapIds:]
// Type encoding: v24@0:8q16
// Implementation: 0x105b0a314

// -[SCStoriesGrapheneMetricsEmitter logStoryDeletionRequest]
// Type encoding: v16@0:8
// Implementation: 0x105b0a324

// -[SCStoriesGrapheneMetricsEmitter logStoryDeletionSuccess]
// Type encoding: v16@0:8
// Implementation: 0x105b0a338

// -[SCStoriesGrapheneMetricsEmitter logStoryDeletionFailureWithCode:]
// Type encoding: v24@0:8q16
// Implementation: 0x105b0a34c

// -[SCStoriesGrapheneMetricsEmitter logFriendStoriesFetchLatency:step:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x105b0a3a8

// -[SCStoriesGrapheneMetricsEmitter logFriendStoriesFetchSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b0a3b4

// -[SCStoriesGrapheneMetricsEmitter logFriendStoriesRankedStoryIdsCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105b0a3c4

// -[SCStoriesGrapheneMetricsEmitter logFriendStoriesAllUpdatedStoriesCount:storiesWithInsertionCount:storiesWithDeletionCount:updatedSnapsCount:deletedSnapsCount:]
// Type encoding: v56@0:8q16q24q32q40q48
// Implementation: 0x105b0a40c

// -[SCStoriesGrapheneMetricsEmitter logFriendStoriesSkipProcessingWithReason:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b0a514

// -[SCStoriesGrapheneMetricsEmitter logFriendStoriesMissCustomStoryMetadataWithSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b0a524

// -[SCStoriesGrapheneMetricsEmitter logDiscoverFeedBadgeStatusChangeWithBadgeIsShown:]
// Type encoding: v20@0:8B16
// Implementation: 0x105b0a534

// -[SCStoriesGrapheneMetricsEmitter logDFStoryMissingCompositeStoryId]
// Type encoding: v16@0:8
// Implementation: 0x105b0a558

// -[SCStoriesGrapheneMetricsEmitter logDFPublicUserDeltaFetch:]
// Type encoding: v20@0:8B16
// Implementation: 0x105b0a56c

// -[SCStoriesGrapheneMetricsEmitter logDFPublisherHasUpdates:]
// Type encoding: v20@0:8B16
// Implementation: 0x105b0a5e0

// -[SCStoriesGrapheneMetricsEmitter logDFPublisherIsMissing]
// Type encoding: v16@0:8
// Implementation: 0x105b0a654

// -[SCStoriesGrapheneMetricsEmitter logDFUnrecognizedStoryType]
// Type encoding: v16@0:8
// Implementation: 0x105b0a668

// -[SCStoriesGrapheneMetricsEmitter logDFPublisherStorySize:hasUpdates:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x105b0a67c

// -[SCStoriesGrapheneMetricsEmitter logDFStorySize:storyType:section:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x105b0a710

// -[SCStoriesGrapheneMetricsEmitter logStoriesSize:source:section:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x105b0a7ac

// -[SCStoriesGrapheneMetricsEmitter logOurStoryShowMyNameEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x105b0a814

// -[SCStoriesGrapheneMetricsEmitter logOurStoryAttributionTooltipImpression]
// Type encoding: v16@0:8
// Implementation: 0x105b0a838

// -[SCStoriesGrapheneMetricsEmitter logOurStoryAttributionTooltipClicked]
// Type encoding: v16@0:8
// Implementation: 0x105b0a84c

// -[SCStoriesGrapheneMetricsEmitter logThumbnailDownload:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b0a860

// -[SCStoriesGrapheneMetricsEmitter logBrokenThumbnail]
// Type encoding: v16@0:8
// Implementation: 0x105b0a870

// -[SCStoriesGrapheneMetricsEmitter logSpotlightFeedReceiveEOFWithViewLocation:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b0a884

// -[SCStoriesGrapheneMetricsEmitter logSpotlightFeedLatencyWithLoadingTrigger:step:viewLocation:latency:]
// Type encoding: v48@0:8@16@24@32d40
// Implementation: 0x105b0a898

// -[SCStoriesGrapheneMetricsEmitter logSpotlightFeedAbandonedLoading:viewLocation:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105b0a934

// -[SCStoriesGrapheneMetricsEmitter logSpotlightReachEndOfPlaylistWithViewLocation:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b0a9b8

// -[SCStoriesGrapheneMetricsEmitter logSpotlightReceiveNoNewStoryWithViewLocation:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b0a9cc

// -[SCStoriesGrapheneMetricsEmitter logDiscoverFeedPaginateWithNoStoriesLeftForFeedType:]
// Type encoding: v24@0:8q16
// Implementation: 0x105b0a9e0

// -[SCStoriesGrapheneMetricsEmitter logSpotlightExitReceivedNoNewStoryInSession:viewLocation:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x105b0aa50

// -[SCStoriesGrapheneMetricsEmitter logSpotlightSubsFeedEmptyStateShownInViewLocation:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b0aa78

// -[SCStoriesGrapheneMetricsEmitter logSpotlightSubsFeedBadgeShownWithViewLocation:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b0aa8c

// -[SCStoriesGrapheneMetricsEmitter logSpotlightSubsFeedTapOnBadgeWithViewLocation:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b0aaa0

// -[SCStoriesGrapheneMetricsEmitter logSpotlightSubsFeedTooltipShownWithViewLocation:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b0aab4

// -[SCStoriesGrapheneMetricsEmitter logFeedSwitchViaAdvancementToFeedType:viewLocation:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x105b0aac8

// -[SCStoriesGrapheneMetricsEmitter logSpotlightResponseStoryCount:feedType:singleSnapCount:publicUserStoryCount:publisherStoryCount:longformShowCount:isPaginationRequest:]
// Type encoding: v68@0:8q16q24Q32Q40Q48Q56B64
// Implementation: 0x105b0ab38

// -[SCStoriesGrapheneMetricsEmitter logSpotlightResponseSnapWithFeedType:singleStorySnapCount:publicUserStorySnapCount:publisherStorySnapCount:longformShowSnapCount:isPaginationRequest:]
// Type encoding: v60@0:8q16Q24Q32Q40Q48B56
// Implementation: 0x105b0ad08

// -[SCStoriesGrapheneMetricsEmitter logSpotlightQueryCoordinatorDownloadDataSize:feedType:querySource:]
// Type encoding: v40@0:8Q16Q24@32
// Implementation: 0x105b0aea0

// -[SCStoriesGrapheneMetricsEmitter logSpotlightQueryCoordinatorRequestSentForFeedType:querySource:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x105b0af58

// -[SCStoriesGrapheneMetricsEmitter logMetadataAvailableAtStartCount:feedType:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x105b0b004

// -[SCStoriesGrapheneMetricsEmitter logMediaAvailableAtStartCount:feedType:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x105b0b0e0

// -[SCStoriesGrapheneMetricsEmitter logSpotlightAbandonDiskNotLoaded:]
// Type encoding: v24@0:8q16
// Implementation: 0x105b0b1bc

// -[SCStoriesGrapheneMetricsEmitter logSpotlightAbandonmentReason:feedType:viewLocation:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x105b0b218

// -[SCStoriesGrapheneMetricsEmitter logSpotlightUsageTrackerMetadataFetchedCount:feedType:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x105b0b2d4

// -[SCStoriesGrapheneMetricsEmitter logSpotlightUsageTrackerMetadataWatchedCount:feedType:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x105b0b33c

// -[SCStoriesGrapheneMetricsEmitter logSpotlightUsageTrackerMetadataEvictedCount:feedType:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x105b0b3a4

// -[SCStoriesGrapheneMetricsEmitter logSpotlightUsageTrackerMediaFetchedCount:feedType:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x105b0b40c

// -[SCStoriesGrapheneMetricsEmitter logSpotlightUsageTrackerMediaWatchedCount:feedType:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x105b0b474

// -[SCStoriesGrapheneMetricsEmitter logSpotlightUsageTrackerMediaEvictedCount:feedType:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x105b0b4dc

// -[SCStoriesGrapheneMetricsEmitter logSpotlightUsageTrackerMetadataTimeFromFetchToWatch:feedType:]
// Type encoding: v32@0:8d16q24
// Implementation: 0x105b0b544

// -[SCStoriesGrapheneMetricsEmitter logSpotlightUsageTrackerMediaTimeFromFetchToWatch:feedType:]
// Type encoding: v32@0:8d16q24
// Implementation: 0x105b0b5ac

// -[SCStoriesGrapheneMetricsEmitter logSpotlightUsageTrackerMetadataTimeFromFetchToEvict:feedType:]
// Type encoding: v32@0:8d16q24
// Implementation: 0x105b0b614

// -[SCStoriesGrapheneMetricsEmitter logSpotlightUsageTrackerMediaTimeFromFetchToEvict:feedType:]
// Type encoding: v32@0:8d16q24
// Implementation: 0x105b0b67c

// -[SCStoriesGrapheneMetricsEmitter logSpotlightUsageTrackerMediaEvictedBeforeMetadataDuration:feedType:]
// Type encoding: v32@0:8d16q24
// Implementation: 0x105b0b6e4

// -[SCStoriesGrapheneMetricsEmitter logSpotlightBadgeStatusChangeWithBadgeIsShown:badgeType:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x105b0b74c

// -[SCStoriesGrapheneMetricsEmitter logMessagingStoryPlaybackUseDFOrderWithUseDFOrder:source:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x105b0b774

// -[SCStoriesGrapheneMetricsEmitter logPostingAsyncFixPostTimestamp]
// Type encoding: v16@0:8
// Implementation: 0x105b0b7e8

// -[SCStoriesGrapheneMetricsEmitter logPostingAsyncFailureWithIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b0b7fc

// -[SCStoriesGrapheneMetricsEmitter logPostingAsyncFailureWithExistingState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b0b80c

// -[SCStoriesGrapheneMetricsEmitter logPostingAsyncRetryWithAbortReason:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b0b868

// -[SCStoriesGrapheneMetricsEmitter logPostingAsyncRetryMediaUploadResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b0b8c4

// -[SCStoriesGrapheneMetricsEmitter logPostingAsyncRetry]
// Type encoding: v16@0:8
// Implementation: 0x105b0b920

// -[SCStoriesGrapheneMetricsEmitter logPostingMediaUnrecoverable]
// Type encoding: v16@0:8
// Implementation: 0x105b0b934

// -[SCStoriesGrapheneMetricsEmitter logPostingMissingTaskQueueIdWithIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b0b948

// -[SCStoriesGrapheneMetricsEmitter logPostingMissingAsyncPostingInfo]
// Type encoding: v16@0:8
// Implementation: 0x105b0b9a4

// -[SCStoriesGrapheneMetricsEmitter logPostingRetryWithResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b0b9b8

// -[SCStoriesGrapheneMetricsEmitter logStorySnapPostLogAttemptWithLoggedBefore:]
// Type encoding: v20@0:8B16
// Implementation: 0x105b0b9c8

// -[SCStoriesGrapheneMetricsEmitter logPostingStatusShadowWithSite:nativeState:clientState:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105b0b9d8

// -[SCStoriesGrapheneMetricsEmitter logPostingStatusShadowDroppedWithSite:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b0b9f4

// -[SCStoriesGrapheneMetricsEmitter logPostingStatusAckWithResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b0ba04

// -[SCStoriesGrapheneMetricsEmitter logPostingDeletionWithResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b0ba14

// -[SCStoriesGrapheneMetricsEmitter logPostingMediaInjestingWithMediaState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b0ba24

// -[SCStoriesGrapheneMetricsEmitter logPostingMediaInjestingResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b0ba80

// -[SCStoriesGrapheneMetricsEmitter logPostingBlackThumbnailWithCause:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b0badc

// -[SCStoriesGrapheneMetricsEmitter logPostingSpotlightTileDroppedWithCause:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b0bb38

// -[SCStoriesGrapheneMetricsEmitter logPostingThumbnailFetchTimeout]
// Type encoding: v16@0:8
// Implementation: 0x105b0bb94

// -[SCStoriesGrapheneMetricsEmitter logPostingMissingLocale]
// Type encoding: v16@0:8
// Implementation: 0x105b0bba8

// -[SCStoriesGrapheneMetricsEmitter logMissingSummaryInfo:]
// Type encoding: v24@0:8q16
// Implementation: 0x105b0bbbc

// -[SCStoriesGrapheneMetricsEmitter logUnexpectedSummaryInfo:]
// Type encoding: v24@0:8q16
// Implementation: 0x105b0bbf8

// -[SCStoriesGrapheneMetricsEmitter logCustomStoryNewStoryActionsImpWithStyle:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b0bc34

// -[SCStoriesGrapheneMetricsEmitter logCustomStoryNewStoryActionsOptionSelectWithStyle:storyTypeSpecific:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105b0bc44

// -[SCStoriesGrapheneMetricsEmitter logCustomStoryNewStoryActionsCreationWithWithStyle:storyTypeSpecific:result:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105b0bca0

// -[SCStoriesGrapheneMetricsEmitter logStoriesFSNBlobEndpointIsD2SLink:callSite:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x105b0bd00

// -[SCStoriesGrapheneMetricsEmitter logStoriesBlizzardEventAuditWithUUIDAvailable:storyViewIdAvailable:storyType:storyTypeSpecific:]
// Type encoding: v40@0:8B16B20@24@32
// Implementation: 0x105b0bd74

// -[SCStoriesGrapheneMetricsEmitter logOperaStartLatency:steps:viewLocation:]
// Type encoding: v40@0:8d16@24@32
// Implementation: 0x105b0be00

// -[SCStoriesGrapheneMetricsEmitter logNeedDeduppedFromSubInFY:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b0be18

// -[SCStoriesGrapheneMetricsEmitter logFeedSwitchAbandonedForFeedType:viewLocation:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x105b0be28

// -[SCStoriesGrapheneMetricsEmitter logFeedSwitchToFeedType:viewLocation:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x105b0bedc

// -[SCStoriesGrapheneMetricsEmitter logFeedSwitchLatencyForFeedType:latency:viewLocation:]
// Type encoding: v40@0:8Q16d24@32
// Implementation: 0x105b0bf90

// -[SCStoriesGrapheneMetricsEmitter logInvalidFriendStoryForReason:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b0c050

// -[SCStoriesGrapheneMetricsEmitter logOutOfOrderSnapsDetectedAndCorrectedWithSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b0c060

// -[SCStoriesGrapheneMetricsEmitter logStoryRequestWithLocation:]
// Type encoding: v20@0:8B16
// Implementation: 0x105b0c070

// -[SCStoriesGrapheneMetricsEmitter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105b0c080

@end
