// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedStoryNotificationProcessor
// Superclass: NSObject
// Address: 0x112b70d58

@interface SCDiscoverFeedStoryNotificationProcessor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDiscoverFeedStoryNotificationProcessor initWithUserSession:bitmojiFriendAvatarProvider:bitmojiAvatarProvider:bitmojiImageFetcher:collectionPrefetcher:networkRequester:adConfigProvider:circumstanceEngine:discoverFeedDataFetcher:discoverFeedDataMutator:snapchattersDataFetcher:imageDownloader:grapheneRegistry:networkConnectivityMonitor:locationProvider:adRenderDataParser:storiesConfigProvider:]
// Type encoding: @152@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144
// Implementation: 0x107b04468

// -[SCDiscoverFeedStoryNotificationProcessor shouldFilterNotification:]
// Type encoding: q24@0:8@16
// Implementation: 0x107b04838

// -[SCDiscoverFeedStoryNotificationProcessor processNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b048b4

// -[SCDiscoverFeedStoryNotificationProcessor _processDiscoverFeedNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b049d0

// -[SCDiscoverFeedStoryNotificationProcessor _handleLookupStoryResponse:notification:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107b04ca8

// -[SCDiscoverFeedStoryNotificationProcessor _checkStoryFullyViewedInsertAndNotify:notification:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107b04ddc

// -[SCDiscoverFeedStoryNotificationProcessor _insertAndPrefetchStory:andPostNewNotification:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107b04ea4

// -[SCDiscoverFeedStoryNotificationProcessor _postNewNotification:forStory:isForegrounded:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x107b050c0

// -[SCDiscoverFeedStoryNotificationProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107b051e4

@end
