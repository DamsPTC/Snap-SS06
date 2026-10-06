// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOptInFriendStoryNotificationHandler
// Superclass: NSObject
// Address: 0x112b70da8

@interface SCOptInFriendStoryNotificationHandler


// -[SCOptInFriendStoryNotificationHandler initWithUserSession:storiesDataCoordinatorLazy:storiesThumbnailCoordinator:storiesSyncNetworkRequesterLazy:queuePerformer:lazyUserPreferences:snapchattersSynchronousDataFetcher:grapheneRegistry:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x107b052d4

// -[SCOptInFriendStoryNotificationHandler handleOptInFriendStoryNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b054a4

// -[SCOptInFriendStoryNotificationHandler _prefetchFriendStoryAndRepostNotification:isInApp:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107b056bc

// -[SCOptInFriendStoryNotificationHandler _checkAndPostNotification:isInApp:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107b0581c

// -[SCOptInFriendStoryNotificationHandler _handleFetchedStorySummaryInfo:snapchatter:notification:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107b05b90

// -[SCOptInFriendStoryNotificationHandler _shouldPrefetchFriendStoryInBackground]
// Type encoding: B16@0:8
// Implementation: 0x107b05cb0

// -[SCOptInFriendStoryNotificationHandler _setLastFriendStoryPrefetchDateToNow]
// Type encoding: v16@0:8
// Implementation: 0x107b05da8

// -[SCOptInFriendStoryNotificationHandler _friendStoryNotificationMap]
// Type encoding: @16@0:8
// Implementation: 0x107b05df4

// -[SCOptInFriendStoryNotificationHandler _resetFriendStoryNotificationMap]
// Type encoding: v16@0:8
// Implementation: 0x107b05e5c

// -[SCOptInFriendStoryNotificationHandler _addFriendStoryNotificationToMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b05ea8

// -[SCOptInFriendStoryNotificationHandler _finishHandleFetchedStorySummaryInfo:snapchatter:notification:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107b05f78

// -[SCOptInFriendStoryNotificationHandler _cropAndAddThumbnailImage:snapchatter:notification:thumbnailData:isFromCache:]
// Type encoding: v52@0:8@16@24@32@40B48
// Implementation: 0x107b06038

// -[SCOptInFriendStoryNotificationHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107b061b0

@end
