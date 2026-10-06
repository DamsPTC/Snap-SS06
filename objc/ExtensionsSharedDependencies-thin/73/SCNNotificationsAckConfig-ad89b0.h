// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNNotificationsAckConfig
// Superclass: NSObject
// Address: 0xad89b0

@interface SCNNotificationsAckConfig

// Property: userAgentPrefix; attributes: T@"NSString",C,N,V_userAgentPrefix
// Property: sessionId; attributes: T@"NSString",C,N,V_sessionId
// Property: deviceId; attributes: T@"NSString",C,N,V_deviceId
// Property: deviceToken; attributes: T@"NSString",C,N,V_deviceToken
// Property: ackDisplayedNotifications; attributes: TB,N,V_ackDisplayedNotifications
// Property: ackSuppressedNotifications; attributes: TB,N,V_ackSuppressedNotifications

// -[SCNNotificationsAckConfig initWithUserAgentPrefix:sessionId:deviceId:deviceToken:ackDisplayedNotifications:ackSuppressedNotifications:]
// Type encoding: @56@0:8@16@24@32@40B48B52
// Implementation: 0x47c9b4

// -[SCNNotificationsAckConfig initWithUserAgentPrefix:ackDisplayedNotifications:ackSuppressedNotifications:]
// Type encoding: @32@0:8@16B24B28
// Implementation: 0x47cb10

// -[SCNNotificationsAckConfig userAgentPrefix]
// Type encoding: @16@0:8
// Implementation: 0x47cb28

// -[SCNNotificationsAckConfig setUserAgentPrefix:]
// Type encoding: v24@0:8@16
// Implementation: 0x47cb30

// -[SCNNotificationsAckConfig sessionId]
// Type encoding: @16@0:8
// Implementation: 0x47cb38

// -[SCNNotificationsAckConfig setSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x47cb40

// -[SCNNotificationsAckConfig deviceId]
// Type encoding: @16@0:8
// Implementation: 0x47cb48

// -[SCNNotificationsAckConfig setDeviceId:]
// Type encoding: v24@0:8@16
// Implementation: 0x47cb50

// -[SCNNotificationsAckConfig deviceToken]
// Type encoding: @16@0:8
// Implementation: 0x47cb58

// -[SCNNotificationsAckConfig setDeviceToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x47cb60

// -[SCNNotificationsAckConfig ackDisplayedNotifications]
// Type encoding: B16@0:8
// Implementation: 0x47cb68

// -[SCNNotificationsAckConfig setAckDisplayedNotifications:]
// Type encoding: v20@0:8B16
// Implementation: 0x47cb70

// -[SCNNotificationsAckConfig ackSuppressedNotifications]
// Type encoding: B16@0:8
// Implementation: 0x47cb78

// -[SCNNotificationsAckConfig setAckSuppressedNotifications:]
// Type encoding: v20@0:8B16
// Implementation: 0x47cb80

// -[SCNNotificationsAckConfig .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x47cb88

@end
