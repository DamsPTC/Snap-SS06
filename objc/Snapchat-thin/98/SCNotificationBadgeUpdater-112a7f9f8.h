// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNotificationBadgeUpdater
// Superclass: NSObject
// Address: 0x112a7f9f8

@interface SCNotificationBadgeUpdater


// -[SCNotificationBadgeUpdater initWithApplication:userSessionContext:asyncQueueProvider:applicationLifecycleEvents:messagingExperimentService:appOpenBadgeCountBehaviorSubject:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1059a6d50

// -[SCNotificationBadgeUpdater startMonitoringItemsUpdates:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059a7158

// -[SCNotificationBadgeUpdater stopMonitoringItemUpdates]
// Type encoding: v16@0:8
// Implementation: 0x1059a7414

// -[SCNotificationBadgeUpdater _updateBadgeNumberNoXPC:]
// Type encoding: B24@0:8@16
// Implementation: 0x1059a7440

// -[SCNotificationBadgeUpdater _updateBadgeNumber:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059a74dc

// -[SCNotificationBadgeUpdater _onBackground]
// Type encoding: v16@0:8
// Implementation: 0x1059a7598

// -[SCNotificationBadgeUpdater _onForeground]
// Type encoding: v16@0:8
// Implementation: 0x1059a75a8

// -[SCNotificationBadgeUpdater .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1059a76d0

@end
