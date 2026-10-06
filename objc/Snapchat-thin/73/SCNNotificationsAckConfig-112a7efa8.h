// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNNotificationsAckConfig
// Superclass: NSObject
// Address: 0x112a7efa8

@interface SCNNotificationsAckConfig

// Property: userAgentPrefix; attributes: T@"NSString",C,N,V_userAgentPrefix
// Property: sessionId; attributes: T@"NSString",C,N,V_sessionId
// Property: deviceId; attributes: T@"NSString",C,N,V_deviceId
// Property: deviceToken; attributes: T@"NSString",C,N,V_deviceToken
// Property: ackDisplayedNotifications; attributes: TB,N,V_ackDisplayedNotifications
// Property: ackSuppressedNotifications; attributes: TB,N,V_ackSuppressedNotifications

// -[SCNNotificationsAckConfig initWithUserAgentPrefix:sessionId:deviceId:deviceToken:ackDisplayedNotifications:ackSuppressedNotifications:]
// Type encoding: @56@0:8@16@24@32@40B48B52
// Implementation: 0x10595f9d4

// -[SCNNotificationsAckConfig initWithUserAgentPrefix:ackDisplayedNotifications:ackSuppressedNotifications:]
// Type encoding: @32@0:8@16B24B28
// Implementation: 0x10595fb30

// -[SCNNotificationsAckConfig userAgentPrefix]
// Type encoding: @16@0:8
// Implementation: 0x10595fb48

// -[SCNNotificationsAckConfig setUserAgentPrefix:]
// Type encoding: v24@0:8@16
// Implementation: 0x10595fb50

// -[SCNNotificationsAckConfig sessionId]
// Type encoding: @16@0:8
// Implementation: 0x10595fb58

// -[SCNNotificationsAckConfig setSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10595fb60

// -[SCNNotificationsAckConfig deviceId]
// Type encoding: @16@0:8
// Implementation: 0x10595fb68

// -[SCNNotificationsAckConfig setDeviceId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10595fb70

// -[SCNNotificationsAckConfig deviceToken]
// Type encoding: @16@0:8
// Implementation: 0x10595fb78

// -[SCNNotificationsAckConfig setDeviceToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x10595fb80

// -[SCNNotificationsAckConfig ackDisplayedNotifications]
// Type encoding: B16@0:8
// Implementation: 0x10595fb88

// -[SCNNotificationsAckConfig setAckDisplayedNotifications:]
// Type encoding: v20@0:8B16
// Implementation: 0x10595fb90

// -[SCNNotificationsAckConfig ackSuppressedNotifications]
// Type encoding: B16@0:8
// Implementation: 0x10595fb98

// -[SCNNotificationsAckConfig setAckSuppressedNotifications:]
// Type encoding: v20@0:8B16
// Implementation: 0x10595fba0

// -[SCNNotificationsAckConfig .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10595fba8

@end
