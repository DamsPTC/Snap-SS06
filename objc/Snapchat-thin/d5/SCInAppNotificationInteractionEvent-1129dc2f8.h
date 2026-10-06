// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCInAppNotificationInteractionEvent
// Superclass: NSObject
// Address: 0x1129dc2f8

@interface SCInAppNotificationInteractionEvent

// Property: description; attributes: T@"NSString",N,R

// -[SCInAppNotificationInteractionEvent description]
// Type encoding: @16@0:8
// Implementation: 0x10484e0c0

// -[SCInAppNotificationInteractionEvent init]
// Type encoding: @16@0:8
// Implementation: 0x10484e0e0

// -[SCInAppNotificationInteractionEvent copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x10484e128

// -[SCInAppNotificationInteractionEvent matchInAppNotificationPressed:inAppNotificationDismissed:inAppNotificationDisplayInterrupted:]
// Type encoding: v40@0:8@?16@?24@?32
// Implementation: 0x10484e2b4

// -[SCInAppNotificationInteractionEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10484e34c

// +[SCInAppNotificationInteractionEvent inAppNotificationPressedWithNotification:]
// Type encoding: @24@0:8@16
// Implementation: 0x10484e12c

// +[SCInAppNotificationInteractionEvent inAppNotificationDismissedWithNotification:reason:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10484e164

// +[SCInAppNotificationInteractionEvent inAppNotificationDisplayInterruptedWithNotification:reason:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10484e1a4

@end
