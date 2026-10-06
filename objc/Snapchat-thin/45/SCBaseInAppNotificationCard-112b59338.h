// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBaseInAppNotificationCard
// Superclass: UIView
// Address: 0x112b59338

@interface SCBaseInAppNotificationCard

// Property: notification; attributes: T@"SCAppNotification",R,N,V_notification
// Property: hostView; attributes: T@"SCInAppNotificationViewV2",R,W,N,V_hostView
// Property: toggle; attributes: T@"UISwitch",W,N,V_toggle
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBaseInAppNotificationCard initWithNotification:withHostView:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106fdc4d0

// -[SCBaseInAppNotificationCard showAnimated]
// Type encoding: v16@0:8
// Implementation: 0x106fdc70c

// -[SCBaseInAppNotificationCard hideAnimatedAfterInterruption:]
// Type encoding: v20@0:8B16
// Implementation: 0x106fdc84c

// -[SCBaseInAppNotificationCard pressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fdc95c

// -[SCBaseInAppNotificationCard gestureRecognizer:shouldReceiveTouch:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106fdce88

// -[SCBaseInAppNotificationCard notification]
// Type encoding: @16@0:8
// Implementation: 0x106fdd00c

// -[SCBaseInAppNotificationCard hostView]
// Type encoding: @16@0:8
// Implementation: 0x106fdd01c

// -[SCBaseInAppNotificationCard toggle]
// Type encoding: @16@0:8
// Implementation: 0x106fdd03c

// -[SCBaseInAppNotificationCard setToggle:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fdd05c

// -[SCBaseInAppNotificationCard .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106fdd070

@end
