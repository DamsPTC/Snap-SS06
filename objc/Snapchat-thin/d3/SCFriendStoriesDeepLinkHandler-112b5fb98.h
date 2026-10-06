// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendStoriesDeepLinkHandler
// Superclass: NSObject
// Address: 0x112b5fb98

@interface SCFriendStoriesDeepLinkHandler


// -[SCFriendStoriesDeepLinkHandler initWithStoriesSyncNetworkRequester:friendStoriesDataCoordinator:actionHandler:discoverBlizzardLogger:storiesConfigProvider:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1071b104c

// -[SCFriendStoriesDeepLinkHandler handleDeeplink:additionalInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071b118c

// -[SCFriendStoriesDeepLinkHandler _handleNavigationToStoryId:notificationId:isInAppNotification:pushType:]
// Type encoding: v44@0:8@16@24B32@36
// Implementation: 0x1071b13b4

// -[SCFriendStoriesDeepLinkHandler _checkAvailableFriendStoryAndPlay:notificationId:isInAppNotification:pushType:]
// Type encoding: v44@0:8@16@24B32@36
// Implementation: 0x1071b16a4

// -[SCFriendStoriesDeepLinkHandler _fetchUncachedFriendStoryWithStoryId:itemSource:triggeringSection:notificationId:isInAppNotification:pushType:]
// Type encoding: v60@0:8@16q24q32@40B48@52
// Implementation: 0x1071b1b40

// -[SCFriendStoriesDeepLinkHandler _playFriendStory:friendStories:itemSource:triggerItemId:actionIdentifier:triggeringSection:]
// Type encoding: v64@0:8@16@24q32@40@48q56
// Implementation: 0x1071b1e64

// -[SCFriendStoriesDeepLinkHandler _sendActionModelToActionHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071b1f64

// -[SCFriendStoriesDeepLinkHandler _optInNotificationGrapheneIncrementStoryCorpus:metricType:]
// Type encoding: v28@0:8i16q20
// Implementation: 0x1071b1fbc

// -[SCFriendStoriesDeepLinkHandler _logFSOpenWithNotificationId:isInAppNotification:pushType:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x1071b1fcc

// -[SCFriendStoriesDeepLinkHandler _logFSOpenWithNotificationId:isInAppNotification:pushType:error:]
// Type encoding: v44@0:8@16B24@28q36
// Implementation: 0x1071b1fd4

// -[SCFriendStoriesDeepLinkHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1071b20c8

@end
