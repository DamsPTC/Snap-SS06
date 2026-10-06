// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesEverywhereNotificationHandler
// Superclass: NSObject
// Address: 0x112a8a858

@interface SCStoriesEverywhereNotificationHandler

// Property: presentingViewController; attributes: T@"UIViewController<SCPageNameLogging>",W,N,V_presentingViewController

// -[SCStoriesEverywhereNotificationHandler initWithDiscoverFeedDataFetcher:discoverFeedDataMutator:networkRequester:circumstanceEngine:bitmojiAvatarProvider:bitmojiFriendAvatarProvider:adConfigProvider:snapchattersDataFetcher:actionHandler:networkConnectivityMonitor:locationProvider:storiesSyncNetworkRequester:friendStoriesDataCoordinator:docObjectContext:queryCoordinator:mixedStoriesDataCoordinator:adRenderDataParser:]
// Type encoding: @152@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144
// Implementation: 0x105acee88

// -[SCStoriesEverywhereNotificationHandler handleNotificationPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x105acf260

// -[SCStoriesEverywhereNotificationHandler setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x105acf468

// -[SCStoriesEverywhereNotificationHandler _handleNotificationPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x105acf4ac

// -[SCStoriesEverywhereNotificationHandler _handleMixedCarouselFriendStoryNotificationPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x105acf660

// -[SCStoriesEverywhereNotificationHandler _handleDiscoverFeedFriendStoryNotificationPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x105acfa5c

// -[SCStoriesEverywhereNotificationHandler _optInNotificationGrapheneIncrementStoryCorpus:metricType:]
// Type encoding: v28@0:8i16q20
// Implementation: 0x105acfd84

// -[SCStoriesEverywhereNotificationHandler _fetchUncachedFriendStoryWithNotification:itemSource:triggeringSection:mixedCarouselStories:shouldPrependStory:]
// Type encoding: v52@0:8@16q24q32@40B48
// Implementation: 0x105acfd94

// -[SCStoriesEverywhereNotificationHandler _mixedCarouselFetchAvailableFriendStoryAndPlay:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ad0080

// -[SCStoriesEverywhereNotificationHandler _mixedCarouselCheckAvailableFriendStoryAndPlay:mixedCarouselStories:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105ad01e8

// -[SCStoriesEverywhereNotificationHandler _mixedCarouselPlayFriendStory:allStories:itemSource:triggeringSection:triggerItemId:]
// Type encoding: v56@0:8@16@24q32q40@48
// Implementation: 0x105ad0554

// -[SCStoriesEverywhereNotificationHandler _handleDiscoverFeedStoryNotificationPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ad06f8

// -[SCStoriesEverywhereNotificationHandler _lookupStory:sectionKey:identifier:cheetahStory:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x105ad0848

// -[SCStoriesEverywhereNotificationHandler _handleStoryLookupSuccessResponseWithStory:sectionKey:identifier:notification:cheetahStory:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x105ad0aa0

// -[SCStoriesEverywhereNotificationHandler _mixedCarouselPlayLookupStory:notification:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105ad0dd0

// -[SCStoriesEverywhereNotificationHandler _mixedCarouselPlayInitialNonfriendStory:loggingInfo:mixedCarouselStories:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105ad0fbc

// -[SCStoriesEverywhereNotificationHandler _sendActionModelToActionHandler:fromSourceView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105ad1088

// -[SCStoriesEverywhereNotificationHandler _prependStoryToMixedCarouselRankedStoryIds:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105ad109c

// -[SCStoriesEverywhereNotificationHandler _storyLoggingInfoForStory:notification:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105ad1270

// -[SCStoriesEverywhereNotificationHandler presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x105ad135c

// -[SCStoriesEverywhereNotificationHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105ad1374

@end
