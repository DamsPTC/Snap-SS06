// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMessagingNotificationRemover
// Superclass: NSObject
// Address: 0x112a6c088

@interface SCMessagingNotificationRemover


// -[SCMessagingNotificationRemover initWithConversationLifecycleObservable:applicationLifecycleEvents:notificationRemover:asyncQueueProvider:messagingExperimentService:userId:nativeSessionManagerFuture:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x1057e0dd0

// -[SCMessagingNotificationRemover _observeApplicationLifecycleEvent]
// Type encoding: v16@0:8
// Implementation: 0x1057e10a4

// -[SCMessagingNotificationRemover _applicationWillResignActive]
// Type encoding: v16@0:8
// Implementation: 0x1057e1334

// -[SCMessagingNotificationRemover _applicationDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x1057e1338

// -[SCMessagingNotificationRemover _applicationDidEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x1057e1420

// -[SCMessagingNotificationRemover _resetLastConversationAccessState]
// Type encoding: v16@0:8
// Implementation: 0x1057e14a0

// -[SCMessagingNotificationRemover _resetConversationsAccessedStates]
// Type encoding: v16@0:8
// Implementation: 0x1057e14b0

// -[SCMessagingNotificationRemover _cleanUpLastConversationNotification]
// Type encoding: v16@0:8
// Implementation: 0x1057e14ec

// -[SCMessagingNotificationRemover _observeConversationLifecycle]
// Type encoding: v16@0:8
// Implementation: 0x1057e1528

// -[SCMessagingNotificationRemover _conversationEntered:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057e1778

// -[SCMessagingNotificationRemover _markConversationAsAccessed:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057e1884

// -[SCMessagingNotificationRemover _observeWindowUpdates]
// Type encoding: v16@0:8
// Implementation: 0x1057e191c

// -[SCMessagingNotificationRemover _subscribeToWindowEventsWithSessionManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057e1a40

// -[SCMessagingNotificationRemover _handleWindowUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057e1cd0

// -[SCMessagingNotificationRemover _handleWindowDestroyed:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057e1d60

// -[SCMessagingNotificationRemover _clearDeliveredNotificationsForConversation:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057e1db0

// -[SCMessagingNotificationRemover _conversationExited:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057e1fbc

// -[SCMessagingNotificationRemover _cleanConsumedMessagesNotification]
// Type encoding: v16@0:8
// Implementation: 0x1057e20ac

// -[SCMessagingNotificationRemover .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1057e2820

@end
