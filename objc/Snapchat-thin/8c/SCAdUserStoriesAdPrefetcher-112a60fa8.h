// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdUserStoriesAdPrefetcher
// Superclass: NSObject
// Address: 0x112a60fa8

@interface SCAdUserStoriesAdPrefetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdUserStoriesAdPrefetcher initWithAdMediaFetcher:adConfigProvider:adConfigProviderV2:adWebViewPrefetchHintsManager:adWebViewAssetPrefetcher:adsPreferencesProvider:grapheneRegistry:friendStoriesDataCoordinator:discoverFeedDataFetcher:adViewingHistory:userTrackedLogger:storiesMetadataCoordinator:lifecycleTracker:adProvider:circumstanceEngine:bandwidthEstimator:]
// Type encoding: @144@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136
// Implementation: 0x10575e928

// -[SCAdUserStoriesAdPrefetcher initWithAdMediaFetcher:adConfigProvider:adConfigProviderV2:adWebViewPrefetchHintsManager:adWebViewAssetPrefetcher:adsPreferencesProvider:grapheneRegistry:friendStoriesDataCoordinator:discoverFeedDataFetcher:adPrefetchHelper:adPrefetchRuleTracker:adViewingHistory:userTrackedLogger:storiesMetadataCoordinator:lifecycleTracker:adProvider:circumstanceEngine:bandwidthEstimator:]
// Type encoding: @160@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152
// Implementation: 0x10575e978

// -[SCAdUserStoriesAdPrefetcher startPrefetchAdsIfNeededFromSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x10575edd4

// -[SCAdUserStoriesAdPrefetcher recordTileTap]
// Type encoding: v16@0:8
// Implementation: 0x10575eed8

// -[SCAdUserStoriesAdPrefetcher prefetchUserStoriesOnNavBarTapFromSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x10575ef0c

// -[SCAdUserStoriesAdPrefetcher prefetchAdOnTileTapFromSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x10575ef98

// -[SCAdUserStoriesAdPrefetcher prefetchAdOnTileTapFromSource:precomputedFriendStoryIds:tappedFriendStoryId:interstitialInsertIndex:upcomingNonFriendStoryCount:]
// Type encoding: v56@0:8q16@24@32q40q48
// Implementation: 0x10575efac

// -[SCAdUserStoriesAdPrefetcher _performTileTapPrefetchFromSource:precomputedFriendStoryIds:tappedFriendStoryId:interstitialInsertIndex:upcomingNonFriendStoryCount:]
// Type encoding: v56@0:8q16@24@32q40q48
// Implementation: 0x10575f288

// -[SCAdUserStoriesAdPrefetcher _continueTileTapPrefetchWithFriendStoryIds:coordinator:adViewLocation:source:tappedFriendStoryId:interstitialInsertIndex:upcomingNonFriendStoryCount:cookie:]
// Type encoding: v80@0:8@16@24q32q40@48q56q64Q72
// Implementation: 0x10575f7b4

// -[SCAdUserStoriesAdPrefetcher _prepTrimEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10575fd9c

// -[SCAdUserStoriesAdPrefetcher _prepTrimmedSnapsInfoFetchStoryIdsWithRankedStoryIds:source:tappedFriendStoryId:interstitialInsertIndex:upcomingNonFriendStoryCount:]
// Type encoding: @56@0:8@16q24@32q40q48
// Implementation: 0x10575fde4

// -[SCAdUserStoriesAdPrefetcher _fireTileTapEarlyFetchOnPerformerWithRankedStoryIds:snapPlaybackInfoMap:adViewLocation:source:tappedFriendStoryId:interstitialInsertIndex:upcomingNonFriendStoryCount:cookie:]
// Type encoding: v80@0:8@16@24q32q40@48q56q64Q72
// Implementation: 0x105760248

// -[SCAdUserStoriesAdPrefetcher _fireTileTapEarlyFetchWithAdOrganicSignals:upcomingStoriesContext:engagement:adViewLocation:cookie:]
// Type encoding: v56@0:8@16@24@32q40Q48
// Implementation: 0x105760844

// -[SCAdUserStoriesAdPrefetcher _allowConcurrentTileTapPrefetchEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105760c74

// -[SCAdUserStoriesAdPrefetcher _performPageOpenPrefetch]
// Type encoding: v16@0:8
// Implementation: 0x105760cbc

// -[SCAdUserStoriesAdPrefetcher _firePageOpenPrefetchRequestsWithFUS:discover:spotlight:]
// Type encoding: v28@0:8B16B20B24
// Implementation: 0x105760e64

// -[SCAdUserStoriesAdPrefetcher didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1057613e4

// -[SCAdUserStoriesAdPrefetcher _checkAdPrefetchPrerequisite]
// Type encoding: v16@0:8
// Implementation: 0x10576147c

// -[SCAdUserStoriesAdPrefetcher _handleAvailableFriendStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x10576158c

// -[SCAdUserStoriesAdPrefetcher _checkAvailableFriendStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x105761698

// -[SCAdUserStoriesAdPrefetcher _checkAdPrefetchConditions]
// Type encoding: v16@0:8
// Implementation: 0x1057617a4

// -[SCAdUserStoriesAdPrefetcher _checkAdPrefetchConditionsAfterDelay]
// Type encoding: v16@0:8
// Implementation: 0x1057618cc

// -[SCAdUserStoriesAdPrefetcher _checkAdPrefetchConditionsWithCurrentViewLocation:]
// Type encoding: v24@0:8q16
// Implementation: 0x105761a28

// -[SCAdUserStoriesAdPrefetcher _triggerAdPrefetchWithShouldPrefetch:]
// Type encoding: v20@0:8B16
// Implementation: 0x105761ba0

// -[SCAdUserStoriesAdPrefetcher _prefetchAdWithRankedStoryIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x105761d2c

// -[SCAdUserStoriesAdPrefetcher _handleStoriesSnapPlaybackInfoFetchResultWithRankedStoryIds:snapPlaybackInfoMap:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105761edc

// -[SCAdUserStoriesAdPrefetcher _prefetchAdWithRankedStoryIds:snapPlaybackInfoMap:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105762010

// -[SCAdUserStoriesAdPrefetcher _prefetchAdMediaWithAdResponse:success:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10576252c

// -[SCAdUserStoriesAdPrefetcher _navBadgeOperaContextMatchEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10576265c

// -[SCAdUserStoriesAdPrefetcher _targetingParameters]
// Type encoding: @16@0:8
// Implementation: 0x1057626a4

// -[SCAdUserStoriesAdPrefetcher _mediaLoadContexts]
// Type encoding: @16@0:8
// Implementation: 0x1057626fc

// -[SCAdUserStoriesAdPrefetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1057627b8

@end
