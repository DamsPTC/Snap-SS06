// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesClientSideBadgingCoordinator
// Superclass: NSObject
// Address: 0x112a82928

@interface SCStoriesClientSideBadgingCoordinator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoriesClientSideBadgingCoordinator initWithUserPreferences:circumstanceEngine:notificationCenter:storiesConfigProvider:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x100bd0944

// -[SCStoriesClientSideBadgingCoordinator syncBadge]
// Type encoding: v16@0:8
// Implementation: 0x1059ffb84

// -[SCStoriesClientSideBadgingCoordinator clearBadge]
// Type encoding: v16@0:8
// Implementation: 0x1059ffc00

// -[SCStoriesClientSideBadgingCoordinator hasActiveBadge]
// Type encoding: B16@0:8
// Implementation: 0x100c708b0

// -[SCStoriesClientSideBadgingCoordinator setShowBadgeForNotificationWithCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x100c735c8

// -[SCStoriesClientSideBadgingCoordinator setShowBadgeForNotificationsWithNotifs:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c73560

// -[SCStoriesClientSideBadgingCoordinator spotlightNotifications]
// Type encoding: @16@0:8
// Implementation: 0x1059ffca4

// -[SCStoriesClientSideBadgingCoordinator _hasActiveBadgePersisted]
// Type encoding: B16@0:8
// Implementation: 0x100c708b4

// -[SCStoriesClientSideBadgingCoordinator _updateBadgeVisibilityForAllTabs]
// Type encoding: v16@0:8
// Implementation: 0x1059ffce0

// -[SCStoriesClientSideBadgingCoordinator _persistBadge:]
// Type encoding: v20@0:8B16
// Implementation: 0x1059ffe54

// -[SCStoriesClientSideBadgingCoordinator _spotlightNotifBadgeCount]
// Type encoding: q16@0:8
// Implementation: 0x1059ffea0

// -[SCStoriesClientSideBadgingCoordinator _persistTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059ffee8

// -[SCStoriesClientSideBadgingCoordinator _persistedTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x1059ffef8

// -[SCStoriesClientSideBadgingCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1059fff60

@end
