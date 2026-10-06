// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNotificationFeatureScreenAccessTracker
// Superclass: NSObject
// Address: 0x112a7fae8

@interface SCNotificationFeatureScreenAccessTracker


// -[SCNotificationFeatureScreenAccessTracker initWithNotificationRemover:applicationLifecycleEvents:notificationScreenAccessEventObservable:circumstanceEngine:deckTransitionEvents:currentPageObservable:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1059a8bdc

// -[SCNotificationFeatureScreenAccessTracker _observeApplicationLifecycleEvent]
// Type encoding: v16@0:8
// Implementation: 0x1059a8fc4

// -[SCNotificationFeatureScreenAccessTracker _observeNotificationsExperienceLifecycle]
// Type encoding: v16@0:8
// Implementation: 0x1059a9100

// -[SCNotificationFeatureScreenAccessTracker _observeDeckTransitionEvent]
// Type encoding: v16@0:8
// Implementation: 0x1059a9354

// -[SCNotificationFeatureScreenAccessTracker _observeCurrentPageEvent]
// Type encoding: v16@0:8
// Implementation: 0x1059a958c

// -[SCNotificationFeatureScreenAccessTracker _applicationDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x1059a96c4

// -[SCNotificationFeatureScreenAccessTracker _didLeaveTargetScreen:fromStoryCarousel:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x1059a9708

// -[SCNotificationFeatureScreenAccessTracker _didEnterTargetScreen:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1059a97f4

// -[SCNotificationFeatureScreenAccessTracker _featureScreenToTypeMappings:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1059a98e4

// -[SCNotificationFeatureScreenAccessTracker _shouldRevokeNotificationsForScreen:]
// Type encoding: B24@0:8@16
// Implementation: 0x1059a9a64

// -[SCNotificationFeatureScreenAccessTracker _handleDeckTransitionEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059a9a8c

// -[SCNotificationFeatureScreenAccessTracker _handleCurrentPageEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059a9cf4

// -[SCNotificationFeatureScreenAccessTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1059aa14c

@end
