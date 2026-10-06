// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightStoriesPrefetcherV2
// Superclass: NSObject
// Address: 0x112b060e8

@interface SCSpotlightStoriesPrefetcherV2

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpotlightStoriesPrefetcherV2 initWithFeedType:spotlightMediaFetcherFactory:discoverFeedCollection:spotlightDisplayOrdererFactory:networkConnectivityMonitor:readReceiptCoordinator:circumstanceEngine:contextSpotlightDataFetcher:appStartReader:spotlightOperaLifecycleTracker:discoverFeedDataFetcher:mixerNetworkRequester:bitmojiFriendAvatarProvider:bitmojiAvatarProvider:adConfigProvider:snapchattersDataFetcher:locationProvider:adRenderDataParser:discoverFeedDataMutator:contentObjectResolver:]
// Type encoding: @176@0:8q16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168
// Implementation: 0x106911bf4

// -[SCSpotlightStoriesPrefetcherV2 dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106912344

// -[SCSpotlightStoriesPrefetcherV2 _processReceiptAndRemoveStoryToPrefetch:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069123a8

// -[SCSpotlightStoriesPrefetcherV2 _enableAndTriggerPrefetching]
// Type encoding: v16@0:8
// Implementation: 0x1069124d4

// -[SCSpotlightStoriesPrefetcherV2 _setStoriesOrder:]
// Type encoding: v24@0:8@16
// Implementation: 0x106912520

// -[SCSpotlightStoriesPrefetcherV2 _setMediaStateTarget:]
// Type encoding: v24@0:8q16
// Implementation: 0x10691263c

// -[SCSpotlightStoriesPrefetcherV2 startListener]
// Type encoding: v16@0:8
// Implementation: 0x106912644

// -[SCSpotlightStoriesPrefetcherV2 _updateInitialMediaStates:]
// Type encoding: v24@0:8@16
// Implementation: 0x106912c30

// -[SCSpotlightStoriesPrefetcherV2 _updateSnapIdToDedupeFpMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x106912c7c

// -[SCSpotlightStoriesPrefetcherV2 prefetchedBufferCount]
// Type encoding: @16@0:8
// Implementation: 0x106912e6c

// -[SCSpotlightStoriesPrefetcherV2 removeDedupeFpFromPrefetchList:]
// Type encoding: v24@0:8@16
// Implementation: 0x106912e74

// -[SCSpotlightStoriesPrefetcherV2 prefetchStoriesForNotificationCompositeStoryIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x106912f58

// -[SCSpotlightStoriesPrefetcherV2 _fetchStoriesFromMixer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069131f4

// -[SCSpotlightStoriesPrefetcherV2 _loadInitialReadState:]
// Type encoding: v24@0:8@16
// Implementation: 0x106913540

// -[SCSpotlightStoriesPrefetcherV2 _updateViewedStateFromMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x106913764

// -[SCSpotlightStoriesPrefetcherV2 _prefetchBufferTarget]
// Type encoding: Q16@0:8
// Implementation: 0x1069138ec

// -[SCSpotlightStoriesPrefetcherV2 _currentExtraBufferCapacity]
// Type encoding: q16@0:8
// Implementation: 0x106913974

// -[SCSpotlightStoriesPrefetcherV2 _triggerPrefetchingForUnsupportedACFStories]
// Type encoding: v16@0:8
// Implementation: 0x1069139f8

// -[SCSpotlightStoriesPrefetcherV2 _triggerPrefetching]
// Type encoding: v16@0:8
// Implementation: 0x106913c04

// -[SCSpotlightStoriesPrefetcherV2 _requestTrigger]
// Type encoding: q16@0:8
// Implementation: 0x106913f24

// -[SCSpotlightStoriesPrefetcherV2 _triggerPrefetchForStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x106913fa8

// -[SCSpotlightStoriesPrefetcherV2 _publishUpdatedBufferSize:]
// Type encoding: v24@0:8q16
// Implementation: 0x1069143ec

// -[SCSpotlightStoriesPrefetcherV2 _handlePrefetchResultForStory:completePrefetch:mediaState:]
// Type encoding: v36@0:8@16B24q28
// Implementation: 0x106914430

// -[SCSpotlightStoriesPrefetcherV2 didUpdateWithStoriesSnapReadReceiptUpdateRequest:fromPullToRefreshSync:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106914524

// -[SCSpotlightStoriesPrefetcherV2 _didUpdateWithStoriesSnapReadReceiptUpdateRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106914630

// -[SCSpotlightStoriesPrefetcherV2 _isCandidateForACFPrefetch:]
// Type encoding: B24@0:8@16
// Implementation: 0x106914844

// -[SCSpotlightStoriesPrefetcherV2 _isSpotlightActive]
// Type encoding: B16@0:8
// Implementation: 0x10691497c

// -[SCSpotlightStoriesPrefetcherV2 performer]
// Type encoding: @16@0:8
// Implementation: 0x1069149d4

// -[SCSpotlightStoriesPrefetcherV2 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1069149fc

@end
