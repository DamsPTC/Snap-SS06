// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNonMessagingNotificationsBadgeCountProvider
// Superclass: NSObject
// Address: 0x112a7f908

@interface SCNonMessagingNotificationsBadgeCountProvider

// Property: badgeCountObservable; attributes: T@"SCObservable",R,N

// -[SCNonMessagingNotificationsBadgeCountProvider initWithApplicationLifecycleEvents:notificationScreenAccessorObservable:circumstanceEngine:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1059a4764

// -[SCNonMessagingNotificationsBadgeCountProvider initWithApplicationLifecycleEvents:notificationScreenAccessorObservable:badgeCountPublisher:performer:circumstanceEngine:notificationCenter:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1059a4868

// -[SCNonMessagingNotificationsBadgeCountProvider badgeCountObservable]
// Type encoding: @16@0:8
// Implementation: 0x1059a4b30

// -[SCNonMessagingNotificationsBadgeCountProvider _observeApplicationLifecycleEvent]
// Type encoding: v16@0:8
// Implementation: 0x1059a4b58

// -[SCNonMessagingNotificationsBadgeCountProvider _observeScreenAccessEvent]
// Type encoding: v16@0:8
// Implementation: 0x1059a4d70

// -[SCNonMessagingNotificationsBadgeCountProvider _applicationDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x1059a4f38

// -[SCNonMessagingNotificationsBadgeCountProvider _didEnterTargetScreen:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1059a4f48

// -[SCNonMessagingNotificationsBadgeCountProvider _updateBadgeCount]
// Type encoding: v16@0:8
// Implementation: 0x1059a4fb8

// -[SCNonMessagingNotificationsBadgeCountProvider _handleDeliveredNotifications:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059a5040

// -[SCNonMessagingNotificationsBadgeCountProvider _publishBadgeCountWithDeliveredNotifications:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059a514c

// -[SCNonMessagingNotificationsBadgeCountProvider _shouldBadgeForNotificationType:notification:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1059a554c

// -[SCNonMessagingNotificationsBadgeCountProvider _shouldBypassFeatureAccessedVerificationForNotificationType:notification:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1059a5740

// -[SCNonMessagingNotificationsBadgeCountProvider _setFeatureScreenAccessedSet:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059a58a0

// -[SCNonMessagingNotificationsBadgeCountProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1059a58d0

@end
