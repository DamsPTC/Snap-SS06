// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesConfigProviderImplementation
// Superclass: NSObject
// Address: 0x112a82f68

@interface SCStoriesConfigProviderImplementation

// Property: spotlightConfigs; attributes: T@"<SCSpotlightConfigProviding_DEPRECATED>",R,N
// Property: rtusConfigs; attributes: T@"SCLazy",R,N
// Property: discoverRequestDebouncerConfig; attributes: T@"SCLazy",R,N,V_discoverRequestDebouncerConfig
// Property: discoverMetadataCacheTTLConfig; attributes: T@"SCLazy",R,N,V_discoverMetadataCacheTTLConfig
// Property: discoverSubMetadataCacheTTLConfig; attributes: T@"SCLazy",R,N,V_discoverSubMetadataCacheTTLConfig
// Property: discoverFyMetadataCacheTTLConfig; attributes: T@"SCLazy",R,N,V_discoverFyMetadataCacheTTLConfig
// Property: discoverThumbnailPrefetchingConfig; attributes: T@"SCLazy",R,N,V_discoverThumbnailPrefetchingConfig
// Property: friendStoryCarouselPrefetchConfig; attributes: T@"SCLazy",R,N,V_friendStoryCarouselPrefetchConfig
// Property: mixedCarouselRequestDebouncerConfig; attributes: T@"SCLazy",R,N,V_mixedCarouselRequestDebouncerConfig

// -[SCStoriesConfigProviderImplementation initWithCircumstanceEngine:rtusConfigProvider:simpleSnapchatExperimentConfigProvider:appStartExperimentReader:complianceEngine:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10043a78c

// -[SCStoriesConfigProviderImplementation enableInvalidViewTimeLoggingFix]
// Type encoding: B16@0:8
// Implementation: 0x105a11958

// -[SCStoriesConfigProviderImplementation appBackgroundRefreshPageSessionIdEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105a11998

// -[SCStoriesConfigProviderImplementation appBackgroundRerankEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105a119d8

// -[SCStoriesConfigProviderImplementation stopLoggingPullToRefreshLatency]
// Type encoding: B16@0:8
// Implementation: 0x105a11a18

// -[SCStoriesConfigProviderImplementation _fetchDiscoverThumbnailPrefetchConfig]
// Type encoding: @16@0:8
// Implementation: 0x105a11a58

// -[SCStoriesConfigProviderImplementation _fetchDiscoverClientMetadataConfig]
// Type encoding: @16@0:8
// Implementation: 0x105a11be8

// -[SCStoriesConfigProviderImplementation _isEngagementAdjustedContentCacheTTLEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105a11dfc

// -[SCStoriesConfigProviderImplementation _normalizedEngagementLevel:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a11e14

// -[SCStoriesConfigProviderImplementation _mixedFeedRefreshIntervalMsForEngagementLevel:]
// Type encoding: q24@0:8@16
// Implementation: 0x105a11edc

// -[SCStoriesConfigProviderImplementation mixedFeedMetadataRefereshInterval]
// Type encoding: d16@0:8
// Implementation: 0x105a11f48

// -[SCStoriesConfigProviderImplementation _fetchDiscoverClientFyMetadataConfigForEngagementLevel:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a1205c

// -[SCStoriesConfigProviderImplementation _fetchDiscoverClientSubMetadataConfigForEngagementLevel:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a121cc

// -[SCStoriesConfigProviderImplementation _fetchDefaultDiscoverClientFyMetadataConfig]
// Type encoding: @16@0:8
// Implementation: 0x105a1233c

// -[SCStoriesConfigProviderImplementation _fetchDefaultDiscoverClientSubMetadataConfig]
// Type encoding: @16@0:8
// Implementation: 0x105a124cc

// -[SCStoriesConfigProviderImplementation _fetchDiscoverClientSubMetadataConfig]
// Type encoding: @16@0:8
// Implementation: 0x105a1265c

// -[SCStoriesConfigProviderImplementation _fetchDiscoverClientFyMetadataConfig]
// Type encoding: @16@0:8
// Implementation: 0x105a1275c

// -[SCStoriesConfigProviderImplementation _fetchDiscoverRequestDebouncerConfig]
// Type encoding: @16@0:8
// Implementation: 0x105a1285c

// -[SCStoriesConfigProviderImplementation _fetchMixedCarouselRequestDebouncerConfig]
// Type encoding: @16@0:8
// Implementation: 0x105a12a04

// -[SCStoriesConfigProviderImplementation spotlightConfigs]
// Type encoding: @16@0:8
// Implementation: 0x1009373a0

// -[SCStoriesConfigProviderImplementation rtusConfigs]
// Type encoding: @16@0:8
// Implementation: 0x105a12bc0

// -[SCStoriesConfigProviderImplementation isVOperaEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105a12be8

// -[SCStoriesConfigProviderImplementation snapProChatSharedStoryPlaybackScopeEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105a12bf0

// -[SCStoriesConfigProviderImplementation snapProChatSharedStoryRingPlaybackScopeEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105a12c08

// -[SCStoriesConfigProviderImplementation contentFeedRepoSingleConnection]
// Type encoding: B16@0:8
// Implementation: 0x105a12c20

// -[SCStoriesConfigProviderImplementation contentFeedRepoAutoVacuum]
// Type encoding: B16@0:8
// Implementation: 0x105a12c60

// -[SCStoriesConfigProviderImplementation contentFeedRepoIncreaseQueuePriority]
// Type encoding: B16@0:8
// Implementation: 0x10043c47c

// -[SCStoriesConfigProviderImplementation _contentFeedRepoOptimizationCof]
// Type encoding: q16@0:8
// Implementation: 0x10043c510

// -[SCStoriesConfigProviderImplementation friendsFeedPlaybackScopeMigrationPluginFix]
// Type encoding: B16@0:8
// Implementation: 0x105a12c78

// -[SCStoriesConfigProviderImplementation responsivenessNfsInteractionHistoryUploadLimit]
// Type encoding: i16@0:8
// Implementation: 0x105a12c90

// -[SCStoriesConfigProviderImplementation responsivenessActionThresholdInSecond]
// Type encoding: i16@0:8
// Implementation: 0x105a12ccc

// -[SCStoriesConfigProviderImplementation shouldPrioritizeInteractionHistoryWithActionsAndAddTileIdFeedType]
// Type encoding: B16@0:8
// Implementation: 0x105a12d08

// -[SCStoriesConfigProviderImplementation shouldPlaceSubsBeforeFS]
// Type encoding: B16@0:8
// Implementation: 0x105a12d48

// -[SCStoriesConfigProviderImplementation shouldChangePlaylistOrderForSubsBeforeFS]
// Type encoding: B16@0:8
// Implementation: 0x105a12d60

// -[SCStoriesConfigProviderImplementation enabledCustomTTLReadReceiptFix]
// Type encoding: B16@0:8
// Implementation: 0x105a12da4

// -[SCStoriesConfigProviderImplementation fofSnapPrefetchFixEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10093a8b4

// -[SCStoriesConfigProviderImplementation tileTapPrefetchReaderQueueEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10093a8cc

// -[SCStoriesConfigProviderImplementation blendedFeedSubscriptionIconWithCheckmarkEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105a12dbc

// -[SCStoriesConfigProviderImplementation isPlaylistControlledPaginationEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105a12dd4

// -[SCStoriesConfigProviderImplementation discoverBadgeAlwaysOnEnabledForColdStart]
// Type encoding: B16@0:8
// Implementation: 0x105a12e44

// -[SCStoriesConfigProviderImplementation discoverBadgeAlwaysOnEnabledForWarmStart]
// Type encoding: B16@0:8
// Implementation: 0x105a12e50

// -[SCStoriesConfigProviderImplementation showTileWatchBarEverywhere]
// Type encoding: B16@0:8
// Implementation: 0x105a12e5c

// -[SCStoriesConfigProviderImplementation upNextV2Config]
// Type encoding: @16@0:8
// Implementation: 0x105a12e74

// -[SCStoriesConfigProviderImplementation upNextV2UsePrefetchV2]
// Type encoding: B16@0:8
// Implementation: 0x105a12f34

// -[SCStoriesConfigProviderImplementation discoverFeedTilesShowAvatar]
// Type encoding: B16@0:8
// Implementation: 0x105a12f74

// -[SCStoriesConfigProviderImplementation spotlightDisableInChatFeed]
// Type encoding: B16@0:8
// Implementation: 0x105a12fb4

// -[SCStoriesConfigProviderImplementation spotlightChatPreviewAutoPlayTreatment]
// Type encoding: q16@0:8
// Implementation: 0x105a13054

// -[SCStoriesConfigProviderImplementation _contentProductPlaybackScopeEnabledForPlaybackLocation:]
// Type encoding: B24@0:8Q16
// Implementation: 0x105a13080

// -[SCStoriesConfigProviderImplementation _discoverResponsivenessConfig]
// Type encoding: @16@0:8
// Implementation: 0x105a130c0

// -[SCStoriesConfigProviderImplementation _fetchCompactSubsMultiplier]
// Type encoding: f16@0:8
// Implementation: 0x105a13238

// -[SCStoriesConfigProviderImplementation compactSubsMultiplier]
// Type encoding: f16@0:8
// Implementation: 0x105a13240

// -[SCStoriesConfigProviderImplementation compactSubsTitleGradientMultiplier]
// Type encoding: f16@0:8
// Implementation: 0x105a13288

// -[SCStoriesConfigProviderImplementation _fetchCompactSubsTitleGradientMultiplier]
// Type encoding: f16@0:8
// Implementation: 0x105a132d0

// -[SCStoriesConfigProviderImplementation compactSubsPublisherStoriesTitleStyle]
// Type encoding: Q16@0:8
// Implementation: 0x105a132d8

// -[SCStoriesConfigProviderImplementation _fetchCompactSubsPublisherStoriesTitleStyle]
// Type encoding: Q16@0:8
// Implementation: 0x105a13318

// -[SCStoriesConfigProviderImplementation compactSubsUserStoriesBadgeStyle]
// Type encoding: Q16@0:8
// Implementation: 0x105a13320

// -[SCStoriesConfigProviderImplementation _fetchCompactSubsUserStoriesBadgeStyle]
// Type encoding: Q16@0:8
// Implementation: 0x105a13360

// -[SCStoriesConfigProviderImplementation compactSubsNumThumbnailsToPrefetch]
// Type encoding: q16@0:8
// Implementation: 0x105a13368

// -[SCStoriesConfigProviderImplementation quickSendPreviewRefactorEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105a133a8

// -[SCStoriesConfigProviderImplementation storiesCarouselInChatType]
// Type encoding: Q16@0:8
// Implementation: 0x105a133c0

// -[SCStoriesConfigProviderImplementation _getStoriesCarouselInChat5TabEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105a133d8

// -[SCStoriesConfigProviderImplementation storiesCarouselInChat5TabEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105a1341c

// -[SCStoriesConfigProviderImplementation _getRemoveFriendStoriesCarouselInDFEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105a1345c

// -[SCStoriesConfigProviderImplementation removeFriendStoriesCarouselInDFEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105a134a0

// -[SCStoriesConfigProviderImplementation storiesCarouselInChat5TabNumFSPerSubs]
// Type encoding: q16@0:8
// Implementation: 0x105a134e0

// -[SCStoriesConfigProviderImplementation storiesCarouselShouldRemoveStoriesShortcut]
// Type encoding: B16@0:8
// Implementation: 0x105a1356c

// -[SCStoriesConfigProviderImplementation storiesCarouselInChatCellSizeMultiplier]
// Type encoding: f16@0:8
// Implementation: 0x105a13574

// -[SCStoriesConfigProviderImplementation _getStoriesCarouselInChatCellSizeMultiplier]
// Type encoding: @16@0:8
// Implementation: 0x105a135bc

// -[SCStoriesConfigProviderImplementation storiesCarouselInChatDisableThumbnailBadgingOnFF]
// Type encoding: B16@0:8
// Implementation: 0x105a135fc

// -[SCStoriesConfigProviderImplementation storiesCarouselClientRerankFeedExitTimeThreshold]
// Type encoding: i16@0:8
// Implementation: 0x105a13600

// -[SCStoriesConfigProviderImplementation storiesCarouselInChatShouldCondenseRingBorder]
// Type encoding: B16@0:8
// Implementation: 0x105a13640

// -[SCStoriesConfigProviderImplementation storiesCarouselInChatStoryTopMarginToBoundsHeightRatioMultiplier]
// Type encoding: f16@0:8
// Implementation: 0x105a13648

// -[SCStoriesConfigProviderImplementation mixedCarouselDebugShouldBypassClientManipulation]
// Type encoding: B16@0:8
// Implementation: 0x105a13650

// -[SCStoriesConfigProviderImplementation _getMixedCarouselRectangularShapeStoryTypeMask]
// Type encoding: Q16@0:8
// Implementation: 0x105a13658

// -[SCStoriesConfigProviderImplementation mixedCarouselRectangularShapeStoryTypeMask]
// Type encoding: Q16@0:8
// Implementation: 0x105a136b0

// -[SCStoriesConfigProviderImplementation enableChatTabStoryBadgeForNotifications]
// Type encoding: B16@0:8
// Implementation: 0x105a136f0

// -[SCStoriesConfigProviderImplementation discoverFeedTabStoryRingTtlSec]
// Type encoding: q16@0:8
// Implementation: 0x105a136f8

// -[SCStoriesConfigProviderImplementation discoverFeedTabStoryRingTtlOnlyNewStory]
// Type encoding: B16@0:8
// Implementation: 0x105a1376c

// -[SCStoriesConfigProviderImplementation removeLegacyNavigationItemImplEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105a137ac

// -[SCStoriesConfigProviderImplementation enableFFTriggerConditionsForDFThumbnail]
// Type encoding: B16@0:8
// Implementation: 0x105a13818

// -[SCStoriesConfigProviderImplementation feedSwitcherForDiscoverStoriesNotificationInSpotlight]
// Type encoding: B16@0:8
// Implementation: 0x105a13884

// -[SCStoriesConfigProviderImplementation subscriptionStoriesNotifCap]
// Type encoding: Q16@0:8
// Implementation: 0x105a1389c

// -[SCStoriesConfigProviderImplementation sendToRewriteRateLimiterTimeInterval]
// Type encoding: q16@0:8
// Implementation: 0x105a138c8

// -[SCStoriesConfigProviderImplementation sendToStoryDestinationsFetchFixEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105a13908

// -[SCStoriesConfigProviderImplementation sendToRewriteWarmStartNetworkRequestsEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105a13948

// -[SCStoriesConfigProviderImplementation shareSpotlightToPublicStoriesEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105a13988

// -[SCStoriesConfigProviderImplementation spotlightPreserveEditsEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105a139a0

// -[SCStoriesConfigProviderImplementation spotlightQuickCutEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105a139b8

// -[SCStoriesConfigProviderImplementation spotlightGestureRewriteEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105a139d0

// -[SCStoriesConfigProviderImplementation dataStoreReorderOnSaveInBackground]
// Type encoding: B16@0:8
// Implementation: 0x105a139e8

// -[SCStoriesConfigProviderImplementation _getInteractionHistoryAllowanceControlConfig]
// Type encoding: @16@0:8
// Implementation: 0x105a13a00

// -[SCStoriesConfigProviderImplementation _getInteractionHistoryReadingImprovementConfig]
// Type encoding: @16@0:8
// Implementation: 0x105a13a40

// -[SCStoriesConfigProviderImplementation friendsCarouselReplayStateOpacity]
// Type encoding: f16@0:8
// Implementation: 0x105a13a80

// -[SCStoriesConfigProviderImplementation hideFriendStoriesBeforeTargetInVopera]
// Type encoding: B16@0:8
// Implementation: 0x105a13a88

// -[SCStoriesConfigProviderImplementation tapToSeekEnabledForLongVideo]
// Type encoding: B16@0:8
// Implementation: 0x105a13a90

// -[SCStoriesConfigProviderImplementation _tapToSeekEnabledForLongVideo]
// Type encoding: @16@0:8
// Implementation: 0x105a13ad0

// -[SCStoriesConfigProviderImplementation tapToSeekIntervalForLongVideo]
// Type encoding: @16@0:8
// Implementation: 0x105a13b10

// -[SCStoriesConfigProviderImplementation _tapToSeekIntervalForLongVideo]
// Type encoding: @16@0:8
// Implementation: 0x105a13b18

// -[SCStoriesConfigProviderImplementation longVideoDurationThreshold]
// Type encoding: @16@0:8
// Implementation: 0x105a13bb0

// -[SCStoriesConfigProviderImplementation _longVideoDurationThreshold]
// Type encoding: @16@0:8
// Implementation: 0x105a13bb8

// -[SCStoriesConfigProviderImplementation enableLoggingForLongVideoTapToSeek]
// Type encoding: B16@0:8
// Implementation: 0x105a13c50

// -[SCStoriesConfigProviderImplementation _enableLoggingForLongVideoTapToSeek]
// Type encoding: @16@0:8
// Implementation: 0x105a13c90

// -[SCStoriesConfigProviderImplementation enableNotchedProgressBarForLongVideo]
// Type encoding: B16@0:8
// Implementation: 0x105a13cd0

// -[SCStoriesConfigProviderImplementation _enableNotchedProgressBarForLongVideo]
// Type encoding: @16@0:8
// Implementation: 0x105a13d10

// -[SCStoriesConfigProviderImplementation enableDFEndPointInDeepLink]
// Type encoding: B16@0:8
// Implementation: 0x105a13d98

// -[SCStoriesConfigProviderImplementation storyManagementGrpcEndpointAddress]
// Type encoding: @16@0:8
// Implementation: 0x105a13db0

// -[SCStoriesConfigProviderImplementation _fetchFriendStoryCarouselPrefetchConfig]
// Type encoding: @16@0:8
// Implementation: 0x105a13dcc

// -[SCStoriesConfigProviderImplementation sendInteractionHistoryForAllContentTypesWithFeatureName:]
// Type encoding: B24@0:8Q16
// Implementation: 0x105a13f74

// -[SCStoriesConfigProviderImplementation requestInteractionHistoryReadingImprovement:]
// Type encoding: B24@0:8Q16
// Implementation: 0x105a13fc0

// -[SCStoriesConfigProviderImplementation dedupPlaylistInProdEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105a1400c

// -[SCStoriesConfigProviderImplementation incrementDedupeFpSubsForYou]
// Type encoding: B16@0:8
// Implementation: 0x105a14024

// -[SCStoriesConfigProviderImplementation saveBeforeLoadStrategy]
// Type encoding: q16@0:8
// Implementation: 0x105a14064

// -[SCStoriesConfigProviderImplementation storiesPlaybackDataSourcePerformanceImprovementReduceDocObjectRead]
// Type encoding: B16@0:8
// Implementation: 0x105a14090

// -[SCStoriesConfigProviderImplementation storiesPlaybackDataSourcePerformanceImprovementCacheKeyCorrection]
// Type encoding: B16@0:8
// Implementation: 0x105a140d0

// -[SCStoriesConfigProviderImplementation storiesPlaybackDataSourcePerformanceImprovementTTLCorrection]
// Type encoding: B16@0:8
// Implementation: 0x105a14110

// -[SCStoriesConfigProviderImplementation storiesPlaybackDataSourcePerformanceImprovementMediaTypeCorrection]
// Type encoding: B16@0:8
// Implementation: 0x105a14150

// -[SCStoriesConfigProviderImplementation storiesPlaybackDataSourcePerformanceImprovementMisc]
// Type encoding: B16@0:8
// Implementation: 0x105a14190

// -[SCStoriesConfigProviderImplementation enableCarouselCollectionViewSetOnWillDisplayCell]
// Type encoding: B16@0:8
// Implementation: 0x105a141d0

// -[SCStoriesConfigProviderImplementation enableDiscoverSpinnerLoggingFPV]
// Type encoding: B16@0:8
// Implementation: 0x105a141e8

// -[SCStoriesConfigProviderImplementation switchDiscoverFeedAndSpotlightTab]
// Type encoding: B16@0:8
// Implementation: 0x100592940

// -[SCStoriesConfigProviderImplementation enabledFriendStoriesFriendshipCheck]
// Type encoding: B16@0:8
// Implementation: 0x105a14228

// -[SCStoriesConfigProviderImplementation discoverPromotedStoryRerankPositionThreshold]
// Type encoding: i16@0:8
// Implementation: 0x105a14268

// -[SCStoriesConfigProviderImplementation contentMediaViewTimeFixEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105a14270

// -[SCStoriesConfigProviderImplementation contentMediaViewTimeAttachmentFixEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105a142b0

// -[SCStoriesConfigProviderImplementation contentTotalViewTimeFixEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105a142f0

// -[SCStoriesConfigProviderImplementation enabledPluginCreatorOnSpotlight]
// Type encoding: B16@0:8
// Implementation: 0x105a14330

// -[SCStoriesConfigProviderImplementation enableSpotlightManagementOpsFeedLogging]
// Type encoding: B16@0:8
// Implementation: 0x105a14348

// -[SCStoriesConfigProviderImplementation storySharingV2Enabled]
// Type encoding: B16@0:8
// Implementation: 0x105a14360

// -[SCStoriesConfigProviderImplementation disableCATransactionFlushOnPresentation]
// Type encoding: B16@0:8
// Implementation: 0x105a14378

// -[SCStoriesConfigProviderImplementation disableUpNextInSharedStory]
// Type encoding: B16@0:8
// Implementation: 0x105a143c8

// -[SCStoriesConfigProviderImplementation storyMetricMediaViewTimeFixEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105a14418

// -[SCStoriesConfigProviderImplementation storiesBackgroundPrefetchEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105a14458

// -[SCStoriesConfigProviderImplementation storiesBackgroundPrefetchIntervalMinutes]
// Type encoding: q16@0:8
// Implementation: 0x105a14470

// -[SCStoriesConfigProviderImplementation storiesBackgroundPrefetchSkipMetadataPrefetch]
// Type encoding: B16@0:8
// Implementation: 0x105a1449c

// -[SCStoriesConfigProviderImplementation storiesBackgroundPrefetchCompletionFix]
// Type encoding: B16@0:8
// Implementation: 0x105a144b4

// -[SCStoriesConfigProviderImplementation storiesBackgroundPrefetchNetworkCondition]
// Type encoding: i16@0:8
// Implementation: 0x105a144cc

// -[SCStoriesConfigProviderImplementation disableDiscoverBackgroundPrefetcher]
// Type encoding: B16@0:8
// Implementation: 0x105a144e4

// -[SCStoriesConfigProviderImplementation discoverFeedBackgroundJobMediaPrefetchOnly]
// Type encoding: B16@0:8
// Implementation: 0x105a144fc

// -[SCStoriesConfigProviderImplementation friendStoriesRankingLocalRerankFrequencyViewDisappear]
// Type encoding: i16@0:8
// Implementation: 0x105a14514

// -[SCStoriesConfigProviderImplementation friendStoriesRankingLocalRerankFrequencyPullToRefresh]
// Type encoding: i16@0:8
// Implementation: 0x105a14554

// -[SCStoriesConfigProviderImplementation friendStoriesRankingLocalRerankFrequencyPrefetchRequests]
// Type encoding: i16@0:8
// Implementation: 0x105a14594

// -[SCStoriesConfigProviderImplementation enabledFriendStoriesRerankCarousel]
// Type encoding: B16@0:8
// Implementation: 0x105a145d4

// -[SCStoriesConfigProviderImplementation enableDFRerankOnCacheLoading]
// Type encoding: B16@0:8
// Implementation: 0x105a14614

// -[SCStoriesConfigProviderImplementation allowForYouNotificationToBadgeDiscoverTab]
// Type encoding: B16@0:8
// Implementation: 0x105a14654

// -[SCStoriesConfigProviderImplementation allowNotificationToBadgeDiscoverTab]
// Type encoding: B16@0:8
// Implementation: 0x100be29e8

// -[SCStoriesConfigProviderImplementation truncateDescriptionsOffloadBgThreadEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105a1466c

// -[SCStoriesConfigProviderImplementation jtcDFTilesEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105a146ac

// -[SCStoriesConfigProviderImplementation jtcMixedFeedHeroTileEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105a146ec

// -[SCStoriesConfigProviderImplementation isDiscoverForYouAutoPlayEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105a1472c

// -[SCStoriesConfigProviderImplementation commentsSuggestedSearchEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105a14748

// -[SCStoriesConfigProviderImplementation bitmojiStickersInCommentsEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105a14760

// -[SCStoriesConfigProviderImplementation bitmojiStickersInCommentsEnabledWithNoExposure]
// Type encoding: B16@0:8
// Implementation: 0x105a14778

// -[SCStoriesConfigProviderImplementation customStickerAddCommentEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105a147e4

// -[SCStoriesConfigProviderImplementation shouldFetchDiscoverContentAfterLeave4thTab]
// Type encoding: B16@0:8
// Implementation: 0x105a147fc

// -[SCStoriesConfigProviderImplementation preservingPromotedStoriesInDiscoverForYouEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105a1483c

// -[SCStoriesConfigProviderImplementation enableSSPfor4thTabSpotlight]
// Type encoding: B16@0:8
// Implementation: 0x105a1487c

// -[SCStoriesConfigProviderImplementation stringForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a14894

// -[SCStoriesConfigProviderImplementation boolForKey:]
// Type encoding: B24@0:8@16
// Implementation: 0x100bc7c90

// -[SCStoriesConfigProviderImplementation intForKey:]
// Type encoding: q24@0:8@16
// Implementation: 0x105a14900

// -[SCStoriesConfigProviderImplementation floatForKey:]
// Type encoding: f24@0:8@16
// Implementation: 0x105a14964

// -[SCStoriesConfigProviderImplementation protoForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a149c8

// -[SCStoriesConfigProviderImplementation manualExposureValueForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a14a34

// -[SCStoriesConfigProviderImplementation boolForKeyOnAppStart:]
// Type encoding: B24@0:8@16
// Implementation: 0x100442d18

// -[SCStoriesConfigProviderImplementation intForKeyOnAppStart:]
// Type encoding: q24@0:8@16
// Implementation: 0x100bd6650

// -[SCStoriesConfigProviderImplementation floatForKeyOnAppStart:]
// Type encoding: f24@0:8@16
// Implementation: 0x105a14aa0

// -[SCStoriesConfigProviderImplementation discoverMetadataCacheTTLConfig]
// Type encoding: @16@0:8
// Implementation: 0x105a14b04

// -[SCStoriesConfigProviderImplementation discoverSubMetadataCacheTTLConfig]
// Type encoding: @16@0:8
// Implementation: 0x105a14b0c

// -[SCStoriesConfigProviderImplementation discoverFyMetadataCacheTTLConfig]
// Type encoding: @16@0:8
// Implementation: 0x105a14b14

// -[SCStoriesConfigProviderImplementation discoverRequestDebouncerConfig]
// Type encoding: @16@0:8
// Implementation: 0x105a14b1c

// -[SCStoriesConfigProviderImplementation discoverThumbnailPrefetchingConfig]
// Type encoding: @16@0:8
// Implementation: 0x105a14b24

// -[SCStoriesConfigProviderImplementation friendStoryCarouselPrefetchConfig]
// Type encoding: @16@0:8
// Implementation: 0x105a14b2c

// -[SCStoriesConfigProviderImplementation mixedCarouselRequestDebouncerConfig]
// Type encoding: @16@0:8
// Implementation: 0x105a14b34

// -[SCStoriesConfigProviderImplementation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a14b3c

@end
