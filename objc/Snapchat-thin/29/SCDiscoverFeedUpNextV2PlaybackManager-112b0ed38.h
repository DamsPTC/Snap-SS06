// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedUpNextV2PlaybackManager
// Superclass: NSObject
// Address: 0x112b0ed38

@interface SCDiscoverFeedUpNextV2PlaybackManager


// -[SCDiscoverFeedUpNextV2PlaybackManager initWithUpNextOperaEventAnnouncer:upNextV2Requester:storiesConfigProvider:pageSessionId:circumstanceEngine:playableViewModelGenerator:discoverFeedDataMutator:networkConnectivityMonitor:disposableObserverLifecycle:storiesMetricServices:storiesMediaCoordinator:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x106a5c490

// -[SCDiscoverFeedUpNextV2PlaybackManager _startOperaEventListening:disposableObserverLifecycle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a5c878

// -[SCDiscoverFeedUpNextV2PlaybackManager _handlePlaybackOpenEventWithInitialDFStories:defaultFallbackStories:triggeringAction:triggeringSource:debugBlock:triggeringStoryId:triggeringFeedType:initialStoryIds:]
// Type encoding: v68@0:8@16@24i32i36@?40@48i56@60
// Implementation: 0x106a5d174

// -[SCDiscoverFeedUpNextV2PlaybackManager _handlePaginationEventWithOperaPresenter:playbackDataProvider:lastPlaylistIndexBeforeUpNext:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x106a5d6d0

// -[SCDiscoverFeedUpNextV2PlaybackManager _mixedCarouselShouldTriggerRequestWithOperaPresenter:lastPlaylistIndexBeforeUpNext:]
// Type encoding: B32@0:8@16Q24
// Implementation: 0x106a5d7e4

// -[SCDiscoverFeedUpNextV2PlaybackManager _shouldTriggerRequestWithOperaPresenter:lastPlaylistIndexBeforeUpNext:]
// Type encoding: B32@0:8@16Q24
// Implementation: 0x106a5d8cc

// -[SCDiscoverFeedUpNextV2PlaybackManager _nextPageTriggeringThresholdOnNetworkCondition]
// Type encoding: i16@0:8
// Implementation: 0x106a5da54

// -[SCDiscoverFeedUpNextV2PlaybackManager _fsAutoAdvanceTriggeringOffset]
// Type encoding: i16@0:8
// Implementation: 0x106a5daec

// -[SCDiscoverFeedUpNextV2PlaybackManager _subsAutoAdvanceTriggeringOffset]
// Type encoding: i16@0:8
// Implementation: 0x106a5db4c

// -[SCDiscoverFeedUpNextV2PlaybackManager _shouldDeferSendingInitialUpNextRequestForFS]
// Type encoding: B16@0:8
// Implementation: 0x106a5dbac

// -[SCDiscoverFeedUpNextV2PlaybackManager _shouldDeferSendingInitialUpNextRequestForSubs]
// Type encoding: B16@0:8
// Implementation: 0x106a5dbdc

// -[SCDiscoverFeedUpNextV2PlaybackManager _currentNetworkDimension]
// Type encoding: @16@0:8
// Implementation: 0x106a5dc0c

// -[SCDiscoverFeedUpNextV2PlaybackManager _triggerNextUpNextRequestIsRetry:reason:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x106a5dc68

// -[SCDiscoverFeedUpNextV2PlaybackManager _receivedUpnextStories:debugHTML:error:isRetry:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x106a5dfd4

// -[SCDiscoverFeedUpNextV2PlaybackManager _appendNewUpnextStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a5e0b4

// -[SCDiscoverFeedUpNextV2PlaybackManager _appendStoriesToPlaybackDataProvider:playbackDataProvider:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a5e680

// -[SCDiscoverFeedUpNextV2PlaybackManager _replaceCurrentPlaylistIdsWithPlaylist:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a5e70c

// -[SCDiscoverFeedUpNextV2PlaybackManager _appendCurrentPlaylistWithNewStories:newPlaylist:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a5e74c

// -[SCDiscoverFeedUpNextV2PlaybackManager _operaCurrentPlaylistExcludingAdsWithOperaPresenter:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a5e820

// -[SCDiscoverFeedUpNextV2PlaybackManager _updateCurrentPlaybackSessionData:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a5e9f4

// -[SCDiscoverFeedUpNextV2PlaybackManager _hydrateLoggingInfoToStory:requestId:hpoPb:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106a5ee10

// -[SCDiscoverFeedUpNextV2PlaybackManager _isPayToPromoteStory:]
// Type encoding: B24@0:8@16
// Implementation: 0x106a5effc

// -[SCDiscoverFeedUpNextV2PlaybackManager _emitMediaResidentForInitialStories:defaultStories:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a5f0c8

// -[SCDiscoverFeedUpNextV2PlaybackManager _queryMediaResidentForStories:source:feedType:coordinator:]
// Type encoding: v48@0:8@16@24q32@40
// Implementation: 0x106a5f194

// -[SCDiscoverFeedUpNextV2PlaybackManager _emitTimeMetricsWithStartTime:step:sequence:]
// Type encoding: v40@0:8d16@24Q32
// Implementation: 0x106a5f504

// -[SCDiscoverFeedUpNextV2PlaybackManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106a5f590

@end
