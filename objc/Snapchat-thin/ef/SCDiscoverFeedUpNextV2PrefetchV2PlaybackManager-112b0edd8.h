// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager
// Superclass: NSObject
// Address: 0x112b0edd8

@interface SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager

// Property: desiredPlaylistReordering; attributes: T@"NSArray",C,N,V_desiredPlaylistReordering

// -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager initWithUpNextOperaEventAnnouncer:upNextV2Requester:storiesConfigProvider:pageSessionId:circumstanceEngine:playableViewModelGenerator:discoverFeedDataMutator:networkConnectivityMonitor:disposableObserverLifecycle:storiesMetricServices:spotlightDisplayOrdererFactor:spotlightMediaFetcherFactory:spotlightStoriesPrefetcherFactory:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112
// Implementation: 0x106a5fcbc

// -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106a60274

// -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _startOperaEventListening:disposableObserverLifecycle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a602a8

// -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _handlePlaybackOpenEventWithInitialDFStories:defaultFallbackStories:triggeringAction:triggeringSource:debugBlock:triggeringStoryId:initialStoryIds:presentingViewController:]
// Type encoding: v72@0:8@16@24i32i36@?40@48@56@64
// Implementation: 0x106a60b58

// -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _handlePaginationEventWithOperaPresenter:playbackDataProvider:lastPlaylistIndexBeforeUpNext:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x106a60fbc

// -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _triggerNextUpNextRequestIsRetry:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a61188

// -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _receivedUpnextStories:debugHTML:error:isRetry:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x106a6144c

// -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _shouldTriggerRequestWithOperaPresenter:lastPlaylistIndexBeforeUpNext:]
// Type encoding: B32@0:8@16Q24
// Implementation: 0x106a6152c

// -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _shouldDeferSendingInitialUpNextRequestForFS]
// Type encoding: B16@0:8
// Implementation: 0x106a61690

// -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _mixedCarouselShouldTriggerRequestWithOperaPresenter:lastPlaylistIndexBeforeUpNext:]
// Type encoding: B32@0:8@16Q24
// Implementation: 0x106a61708

// -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _nextPageTriggeringThresholdOnNetworkCondition]
// Type encoding: i16@0:8
// Implementation: 0x106a617f0

// -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _fsAutoAdvanceTriggeringOffset]
// Type encoding: i16@0:8
// Implementation: 0x106a61888

// -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _operaCurrentPlaylistExcludingAdsWithOperaPresenter:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a618e8

// -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _isPayToPromoteStory:]
// Type encoding: B24@0:8@16
// Implementation: 0x106a61abc

// -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _appendNewUpnextStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a61b88

// -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _updateCurrentPlaybackSessionData:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a61ca0

// -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _appendStoriesToPlaybackDataProvider:playbackDataProvider:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a62060

// -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _appendCurrentPlaylistWithNewStories:newPlaylist:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a620bc

// -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _hydrateLoggingInfoToStory:requestId:hpoPb:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106a62190

// -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager desiredPlaylistOrderingObservable]
// Type encoding: @16@0:8
// Implementation: 0x106a6237c

// -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _updatePlaylistWithDesiredPlaylistReorderingAndNextStory:switchToDedupeFp:operaPresenter:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106a62384

// -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _observeDesiredPlaylistOrdering:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a6299c

// -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _discoverFeedStoryFromGroupDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a62b40

// -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _shouldRequestMoreStoriesWithOperaPresenter:]
// Type encoding: B24@0:8@16
// Implementation: 0x106a62ca8

// -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _updateStaleDedupeFpsFromStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a62e48

// -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _removeStoriesInDataMutatorWithDedupeFps:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a62f98

// -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _getCurrentStoriesDisplayOrderWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106a63048

// -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _emitTimeMetricsWithStartTime:step:sequence:]
// Type encoding: v40@0:8d16@24Q32
// Implementation: 0x106a631d8

// -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager desiredPlaylistReordering]
// Type encoding: @16@0:8
// Implementation: 0x106a63264

// -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager setDesiredPlaylistReordering:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a6326c

// -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106a63274

@end
