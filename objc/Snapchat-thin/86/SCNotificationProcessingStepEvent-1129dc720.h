// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNotificationProcessingStepEvent
// Superclass: NSObject
// Address: 0x1129dc720

@interface SCNotificationProcessingStepEvent

// Property: description; attributes: T@"NSString",N,R

// -[SCNotificationProcessingStepEvent description]
// Type encoding: @16@0:8
// Implementation: 0x10484fdbc

// -[SCNotificationProcessingStepEvent init]
// Type encoding: @16@0:8
// Implementation: 0x10484fdf0

// -[SCNotificationProcessingStepEvent copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x10484fe38

// -[SCNotificationProcessingStepEvent matchNotificationArrived:notificationIsSuppressed:notificationIsSuppressedDueToOSPermission:notificationWillDisplay:notificationIsClaimed:]
// Type encoding: v56@0:8@?16@?24@?32@?40@?48
// Implementation: 0x104850174

// -[SCNotificationProcessingStepEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1048502fc

// +[SCNotificationProcessingStepEvent notificationArrivedWithNotification:fromNotificationCenter:clientReceiveTimestampMs:completionHandler:]
// Type encoding: @44@0:8@16B24q28@?36
// Implementation: 0x10484fe40

// +[SCNotificationProcessingStepEvent notificationIsSuppressedWithNotification:isAppForegrounded:suppressionReason:]
// Type encoding: @36@0:8@16B24q28
// Implementation: 0x10484fef0

// +[SCNotificationProcessingStepEvent notificationIsSuppressedDueToOSPermissionWithNotification:]
// Type encoding: @24@0:8@16
// Implementation: 0x10484ff40

// +[SCNotificationProcessingStepEvent notificationWillDisplayWithNotification:isAppForegrounded:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x10484ff78

// +[SCNotificationProcessingStepEvent notificationIsClaimedWithNotification:]
// Type encoding: @24@0:8@16
// Implementation: 0x10484ffb8

@end
