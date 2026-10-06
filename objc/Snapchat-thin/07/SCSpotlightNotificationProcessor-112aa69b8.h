// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightNotificationProcessor
// Superclass: NSObject
// Address: 0x112aa69b8

@interface SCSpotlightNotificationProcessor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpotlightNotificationProcessor initWithNetworkRequester:bitmojiFriendAvatarProvider:bitmojiAvatarProvider:adConfigProvider:circumstanceEngine:snapchattersDataFetcher:networkConnectivityMonitor:locationProvider:adRenderDataParser:notificationProcessingManager:discoverFeedDataMutator:spotlightMediaFetcherFactory:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@88@96@104
// Implementation: 0x105ea22cc

// -[SCSpotlightNotificationProcessor shouldFilterNotification:]
// Type encoding: q24@0:8@16
// Implementation: 0x105ea2620

// -[SCSpotlightNotificationProcessor processNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ea2690

// -[SCSpotlightNotificationProcessor _isPremiumStoryNotification:]
// Type encoding: B24@0:8@16
// Implementation: 0x105ea27b8

// -[SCSpotlightNotificationProcessor _processStoryNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ea286c

// -[SCSpotlightNotificationProcessor _prependStoryToDataStore:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ea2a88

// -[SCSpotlightNotificationProcessor _prefetchAndSaveMediaForStory:andPostNewNotification:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105ea2b58

// -[SCSpotlightNotificationProcessor _isCommentNotification:]
// Type encoding: B24@0:8@16
// Implementation: 0x105ea2c84

// -[SCSpotlightNotificationProcessor _postNewNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ea2cfc

// -[SCSpotlightNotificationProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105ea2da0

@end
