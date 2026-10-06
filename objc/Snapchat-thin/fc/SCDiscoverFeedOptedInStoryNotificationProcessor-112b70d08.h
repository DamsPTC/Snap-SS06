// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedOptedInStoryNotificationProcessor
// Superclass: NSObject
// Address: 0x112b70d08

@interface SCDiscoverFeedOptedInStoryNotificationProcessor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDiscoverFeedOptedInStoryNotificationProcessor initWithUserSession:circumstanceEngine:bitmojiFriendAvatarProvider:bitmojiAvatarProvider:bitmojiImageFetcher:collectionPrefetcher:adConfigProvider:lazyNetworkRequester:lazySnapchattersDataFetcher:lazyStoriesDataCoordinator:storiesThumbnailCoordinator:storiesSyncNetworkRequester:lazyUserPreferences:discoverFeedDataFetcher:discoverFeedDataMutator:snapchattersSynchronousDataFetcher:imageDownloader:grapheneRegistry:networkConnectivityMonitor:locationProvider:adRenderDataParser:storiesConfigProvider:]
// Type encoding: @192@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184
// Implementation: 0x107b02c9c

// -[SCDiscoverFeedOptedInStoryNotificationProcessor shouldFilterNotification:]
// Type encoding: q24@0:8@16
// Implementation: 0x107b03178

// -[SCDiscoverFeedOptedInStoryNotificationProcessor processNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b031f4

// -[SCDiscoverFeedOptedInStoryNotificationProcessor _processDiscoverFeedNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b033d8

// -[SCDiscoverFeedOptedInStoryNotificationProcessor _optInNotificationGrapheneIncrementStoryCorpus:metricType:]
// Type encoding: v28@0:8i16q20
// Implementation: 0x107b037e4

// -[SCDiscoverFeedOptedInStoryNotificationProcessor _storyIsOptedIn:]
// Type encoding: B24@0:8@16
// Implementation: 0x107b037f4

// -[SCDiscoverFeedOptedInStoryNotificationProcessor _handleLookupStoryResponse:notification:isForegrounded:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x107b03848

// -[SCDiscoverFeedOptedInStoryNotificationProcessor _checkStoryValidInsertAndNotify:notification:isForegrounded:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x107b03990

// -[SCDiscoverFeedOptedInStoryNotificationProcessor _checkStoryValidInsertAndNotify:groudTruthStory:notification:isForegrounded:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x107b03b54

// -[SCDiscoverFeedOptedInStoryNotificationProcessor _insertAndPrefetchStory:andPostNewNotification:isForegrounded:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x107b03fb4

// -[SCDiscoverFeedOptedInStoryNotificationProcessor _postNewNotification:forStory:isForegrounded:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x107b040ec

// -[SCDiscoverFeedOptedInStoryNotificationProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107b04360

@end
