// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightBadgeProvider
// Superclass: NSObject
// Address: 0x112a8b438

@interface SCSpotlightBadgeProvider

// Property: navigationItemType; attributes: Tq,R,N,V_navigationItemType
// Property: badgeCount; attributes: T@"SCObservable",R,N,V_badgeCount
// Property: shouldHideBadgeCount; attributes: T@"SCObservable",?,R,N,V_shouldHideBadgeCount
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpotlightBadgeProvider initWithStoriesBadgingServices:applicationLifecycleEvents:circumstanceEngine:notificationCenter:currentPageTracker:storiesConfigProvider:performerProvider:grapheneMetricsEmitter:spotlightStoriesPrefetcher:badgeRanker:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x100bd5e34

// -[SCSpotlightBadgeProvider beginSubscribeBadgeUpdate]
// Type encoding: v16@0:8
// Implementation: 0x100bd6f44

// -[SCSpotlightBadgeProvider endSubscribeBadgeUpdate]
// Type encoding: v16@0:8
// Implementation: 0x105b0cc38

// -[SCSpotlightBadgeProvider dealloc]
// Type encoding: v16@0:8
// Implementation: 0x105b0cc44

// -[SCSpotlightBadgeProvider _setUpBadgeRanker:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b0cc88

// -[SCSpotlightBadgeProvider _spotlightNotificationInAppBadgingAllowlist]
// Type encoding: @16@0:8
// Implementation: 0x100c733f0

// -[SCSpotlightBadgeProvider _viewWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x105b0cfd8

// -[SCSpotlightBadgeProvider _updateActiveBadgeStatus]
// Type encoding: v16@0:8
// Implementation: 0x100c707bc

// -[SCSpotlightBadgeProvider _spotlightBadgeCountChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b0d0d0

// -[SCSpotlightBadgeProvider _observeAppLifeCycleEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x100bd6c24

// -[SCSpotlightBadgeProvider _checkInAppBadgeForSpotlightNotifications:]
// Type encoding: v24@0:8@?16
// Implementation: 0x100c70938

// -[SCSpotlightBadgeProvider _shouldShowBadgeBasedOnDeliveredNotifications:]
// Type encoding: q24@0:8@16
// Implementation: 0x100c72ee8

// -[SCSpotlightBadgeProvider _shouldShowBadge:hideBadgeCount:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105b0d560

// -[SCSpotlightBadgeProvider _didChangeCurrentPageEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x100bd6d68

// -[SCSpotlightBadgeProvider _setCurrentPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x100bd6bf4

// -[SCSpotlightBadgeProvider _getCurrentPage]
// Type encoding: @16@0:8
// Implementation: 0x105b0d718

// -[SCSpotlightBadgeProvider _logBadgeWithCount:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b0d740

// -[SCSpotlightBadgeProvider navigationItemType]
// Type encoding: q16@0:8
// Implementation: 0x100bd74a4

// -[SCSpotlightBadgeProvider badgeCount]
// Type encoding: @16@0:8
// Implementation: 0x100bd7784

// -[SCSpotlightBadgeProvider shouldHideBadgeCount]
// Type encoding: @16@0:8
// Implementation: 0x100bd777c

// -[SCSpotlightBadgeProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105b0d7b0

// +[SCSpotlightBadgeProvider mixedFeedStoriesPrefetcherWithQueryServices:]
// Type encoding: @24@0:8@16
// Implementation: 0x100bd46a0

@end
