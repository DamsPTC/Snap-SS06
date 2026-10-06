// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedBadgeProvider
// Superclass: NSObject
// Address: 0x112a8aa88

@interface SCDiscoverFeedBadgeProvider

// Property: navigationItemType; attributes: Tq,R,N,V_navigationItemType
// Property: badgeCount; attributes: T@"SCObservable",R,N,V_badgeCount
// Property: shouldHideBadgeCount; attributes: T@"SCObservable",?,R,N,V_shouldHideBadgeCount
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDiscoverFeedBadgeProvider initWithUserPreferences:grapheneMetricsEmitter:applicationLifecycleEvents:badgeRefactorFix:discoverFeedFriendStoriesDataCoordinator:friendsFeedViewLifecycleListener:discoverFeedBadgeLifecycleListener:currentPageTracker:isDFBadgeOptimizationEnabled:storiesConfigProvider:performerProvider:isThumbnailBadgingEnabled:thumbnailRingScopeServices:thumbnailRingScopeExposer:badgeRanker:]
// Type encoding: @124@0:8@16@24@32B40@44@52@60@68B76@80@88B96@100@108@116
// Implementation: 0x100baffd8

// -[SCDiscoverFeedBadgeProvider _setUpBadgeRanker:]
// Type encoding: v24@0:8@16
// Implementation: 0x105adfd7c

// -[SCDiscoverFeedBadgeProvider _checkAllowNotificationToBadgeDiscoverTab]
// Type encoding: v16@0:8
// Implementation: 0x100be2988

// -[SCDiscoverFeedBadgeProvider _checkNotificationInventoryAndShowBadge]
// Type encoding: v16@0:8
// Implementation: 0x100be2a00

// -[SCDiscoverFeedBadgeProvider _showBadgeBasedOnDeliveredNotifications:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c20d3c

// -[SCDiscoverFeedBadgeProvider _discoverNotificationInAppBadgingAllowlist]
// Type encoding: @16@0:8
// Implementation: 0x105ae00d0

// -[SCDiscoverFeedBadgeProvider _observeAppLifeCycleEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x100bb04c8

// -[SCDiscoverFeedBadgeProvider beginSubscribeBadgeUpdate]
// Type encoding: v16@0:8
// Implementation: 0x100bb0cdc

// -[SCDiscoverFeedBadgeProvider endSubscribeBadgeUpdate]
// Type encoding: v16@0:8
// Implementation: 0x105ae0228

// -[SCDiscoverFeedBadgeProvider dealloc]
// Type encoding: v16@0:8
// Implementation: 0x105ae0268

// -[SCDiscoverFeedBadgeProvider didReceiveNavigationItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x100bb1068

// -[SCDiscoverFeedBadgeProvider _discoverBadgeCountChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ae0334

// -[SCDiscoverFeedBadgeProvider _dedupAndshowBadge:forReason:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x105ae0670

// -[SCDiscoverFeedBadgeProvider _showBadgeForThumbnail:]
// Type encoding: v20@0:8B16
// Implementation: 0x105ae0774

// -[SCDiscoverFeedBadgeProvider _showBadgeForForce:hideBadgeCount:count:]
// Type encoding: v32@0:8B16B20@24
// Implementation: 0x105ae07cc

// -[SCDiscoverFeedBadgeProvider _showBadgeForCache:]
// Type encoding: v20@0:8B16
// Implementation: 0x105ae07d0

// -[SCDiscoverFeedBadgeProvider _showBadgeForFriendStory:]
// Type encoding: v20@0:8B16
// Implementation: 0x105ae0828

// -[SCDiscoverFeedBadgeProvider _showBadgeForSubscription:]
// Type encoding: v20@0:8B16
// Implementation: 0x105ae094c

// -[SCDiscoverFeedBadgeProvider _showBadge:hideBadgeCount:count:]
// Type encoding: v32@0:8B16B20@24
// Implementation: 0x105ae0a70

// -[SCDiscoverFeedBadgeProvider _showBadgeOnMain:hideBadgeCount:count:]
// Type encoding: v32@0:8B16B20@24
// Implementation: 0x105ae0b9c

// -[SCDiscoverFeedBadgeProvider _badgeStateUnchanged]
// Type encoding: v16@0:8
// Implementation: 0x100c20f2c

// -[SCDiscoverFeedBadgeProvider _recordBadgeShown:]
// Type encoding: v20@0:8B16
// Implementation: 0x105ae0cdc

// -[SCDiscoverFeedBadgeProvider _setupObservingEventsWithApplicationLifecycleEvents:discoverFeedFriendStoriesDataCoordinator:friendsFeedViewLifecycleListener:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105ae0d60

// -[SCDiscoverFeedBadgeProvider _didChangeCurrentPageEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x100bb0640

// -[SCDiscoverFeedBadgeProvider _setCurrentPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x100bb0cac

// -[SCDiscoverFeedBadgeProvider _getCurrentPage]
// Type encoding: @16@0:8
// Implementation: 0x105ae1074

// -[SCDiscoverFeedBadgeProvider _resetUserPreferenceOnAppTerminate]
// Type encoding: v16@0:8
// Implementation: 0x105ae109c

// -[SCDiscoverFeedBadgeProvider _updateBadgeOnFriendStoryFetchingRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ae113c

// -[SCDiscoverFeedBadgeProvider _shouldUpdateBadgeOnFriendStoryFetchingRequest:]
// Type encoding: B24@0:8@16
// Implementation: 0x105ae1230

// -[SCDiscoverFeedBadgeProvider navigationItemType]
// Type encoding: q16@0:8
// Implementation: 0x100bb0e7c

// -[SCDiscoverFeedBadgeProvider badgeCount]
// Type encoding: @16@0:8
// Implementation: 0x100bd7940

// -[SCDiscoverFeedBadgeProvider shouldHideBadgeCount]
// Type encoding: @16@0:8
// Implementation: 0x100bd7938

// -[SCDiscoverFeedBadgeProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105ae1258

@end
