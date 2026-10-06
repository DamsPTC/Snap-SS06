// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNSENativeHandler
// Superclass: NSObject
// Address: 0xac7140

@interface SCNSENativeHandler


// -[SCNSENativeHandler initWithUserId:announcer:ackDelegate:grapheneLogger:nativeConfigDict:nativeAckEnabled:nativeSuppressAckingEnabled:]
// Type encoding: @64@0:8@16@24@32@40@48B56B60
// Implementation: 0x4f3ec

// -[SCNSENativeHandler notificationReceiveWithRequest:appIsForeground:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x4f790

// -[SCNSENativeHandler notificationDisplayedWithNotificationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x4f858

// -[SCNSENativeHandler notificationSuppressedWithNotificationId:suppressionReason:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x4fa64

// -[SCNSENativeHandler dispose]
// Type encoding: v16@0:8
// Implementation: 0x4fac4

// -[SCNSENativeHandler init]
// Type encoding: @16@0:8
// Implementation: 0x4fb2c

// -[SCNSENativeHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x4fb8c

@end
