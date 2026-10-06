// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNNotificationsTokenRegistrarParameters
// Superclass: NSObject
// Address: 0x112a7f4a8

@interface SCNNotificationsTokenRegistrarParameters

// Property: userId; attributes: T@"SCNShimsUUID",&,N,V_userId
// Property: userAgentPrefix; attributes: T@"NSString",C,N,V_userAgentPrefix
// Property: deviceId; attributes: T@"NSString",C,N,V_deviceId
// Property: bundleId; attributes: T@"NSString",C,N,V_bundleId
// Property: metricsDeviceId; attributes: T@"NSString",C,N,V_metricsDeviceId
// Property: tweaks; attributes: T@"SCNNotificationsTweaks",&,N,V_tweaks
// Property: skipUpload; attributes: TB,N,V_skipUpload

// -[SCNNotificationsTokenRegistrarParameters initWithUserId:userAgentPrefix:deviceId:bundleId:metricsDeviceId:tweaks:skipUpload:]
// Type encoding: @68@0:8@16@24@32@40@48@56B64
// Implementation: 0x105960a64

// -[SCNNotificationsTokenRegistrarParameters initWithUserId:userAgentPrefix:skipUpload:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x105960c18

// -[SCNNotificationsTokenRegistrarParameters userId]
// Type encoding: @16@0:8
// Implementation: 0x105960c48

// -[SCNNotificationsTokenRegistrarParameters setUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105960c50

// -[SCNNotificationsTokenRegistrarParameters userAgentPrefix]
// Type encoding: @16@0:8
// Implementation: 0x105960c74

// -[SCNNotificationsTokenRegistrarParameters setUserAgentPrefix:]
// Type encoding: v24@0:8@16
// Implementation: 0x105960c7c

// -[SCNNotificationsTokenRegistrarParameters deviceId]
// Type encoding: @16@0:8
// Implementation: 0x105960c84

// -[SCNNotificationsTokenRegistrarParameters setDeviceId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105960c8c

// -[SCNNotificationsTokenRegistrarParameters bundleId]
// Type encoding: @16@0:8
// Implementation: 0x105960c94

// -[SCNNotificationsTokenRegistrarParameters setBundleId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105960c9c

// -[SCNNotificationsTokenRegistrarParameters metricsDeviceId]
// Type encoding: @16@0:8
// Implementation: 0x105960ca4

// -[SCNNotificationsTokenRegistrarParameters setMetricsDeviceId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105960cac

// -[SCNNotificationsTokenRegistrarParameters tweaks]
// Type encoding: @16@0:8
// Implementation: 0x105960cb4

// -[SCNNotificationsTokenRegistrarParameters setTweaks:]
// Type encoding: v24@0:8@16
// Implementation: 0x105960cbc

// -[SCNNotificationsTokenRegistrarParameters skipUpload]
// Type encoding: B16@0:8
// Implementation: 0x105960ce0

// -[SCNNotificationsTokenRegistrarParameters setSkipUpload:]
// Type encoding: v20@0:8B16
// Implementation: 0x105960ce8

// -[SCNNotificationsTokenRegistrarParameters .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105960cf0

@end
