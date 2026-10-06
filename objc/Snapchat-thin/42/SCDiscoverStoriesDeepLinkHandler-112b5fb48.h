// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverStoriesDeepLinkHandler
// Superclass: NSObject
// Address: 0x112b5fb48

@interface SCDiscoverStoriesDeepLinkHandler


// -[SCDiscoverStoriesDeepLinkHandler initWithDiscoverFeedDataFetcher:discoverFeedDataMutator:actionHandler:adConfigProvider:circumstanceEngine:snapchattersDataFetcher:adRenderDataParser:networkConnectivityMonitor:locationProvider:networkRequester:bitmojiAvatarProvider:bitmojiFriendAvatarProvider:storiesConfigProvider:discoverBlizzardLogger:]
// Type encoding: @128@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120
// Implementation: 0x1071aff28

// -[SCDiscoverStoriesDeepLinkHandler handleDeeplink:additionalInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071b026c

// -[SCDiscoverStoriesDeepLinkHandler _navigateToDiscoverFeedStoryWithId:isInApp:pushType:notificationId:feedType:]
// Type encoding: v48@0:8@16B24q28@36i44
// Implementation: 0x1071b04b0

// -[SCDiscoverStoriesDeepLinkHandler _lookupStory:feedType:sectionKey:identifier:cheetahStory:pushType:notificationId:isInApp:]
// Type encoding: v72@0:8@16i24@28@36@44q52@60B68
// Implementation: 0x1071b07c8

// -[SCDiscoverStoriesDeepLinkHandler _handleStoryLookupSuccessResponseWithStory:feedType:sectionKey:identifier:compositeStoryId:cheetahStory:pushType:notificationId:isInApp:]
// Type encoding: v80@0:8@16i24@28@36@44@52q60@68B76
// Implementation: 0x1071b0ac8

// -[SCDiscoverStoriesDeepLinkHandler _sendActionModelToActionHandler:fromSourceView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071b0da8

// -[SCDiscoverStoriesDeepLinkHandler _logNFSOpenWithNotificationId:story:pushType:isInApp:isSubscribed:error:]
// Type encoding: v56@0:8@16@24@32B40B44q48
// Implementation: 0x1071b0e00

// -[SCDiscoverStoriesDeepLinkHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1071b0f80

@end
