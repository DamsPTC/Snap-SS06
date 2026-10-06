// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPushNotificationEvent
// Superclass: NSObject
// Address: 0x1129dbf68

@interface SCPushNotificationEvent

// Property: userInfo; attributes: T@"NSDictionary",N,R
// Property: source; attributes: Tq,N,R,Vsource
// Property: clientReceiveTimestampMs; attributes: Tq,N,R,VclientReceiveTimestampMs
// Property: completionHandler; attributes: T@?,N,R

// -[SCPushNotificationEvent userInfo]
// Type encoding: @16@0:8
// Implementation: 0x10484b2c8

// -[SCPushNotificationEvent source]
// Type encoding: q16@0:8
// Implementation: 0x10484b330

// -[SCPushNotificationEvent clientReceiveTimestampMs]
// Type encoding: q16@0:8
// Implementation: 0x10484b340

// -[SCPushNotificationEvent completionHandler]
// Type encoding: @?16@0:8
// Implementation: 0x10484b350

// -[SCPushNotificationEvent initWithUserInfo:source:clientReceiveTimestampMs:completionHandler:]
// Type encoding: @48@0:8@16q24q32@?40
// Implementation: 0x10484b504

// -[SCPushNotificationEvent init]
// Type encoding: @16@0:8
// Implementation: 0x10484b5f8

// -[SCPushNotificationEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10484b654

@end
