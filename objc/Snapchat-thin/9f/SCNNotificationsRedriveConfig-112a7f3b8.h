// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNNotificationsRedriveConfig
// Superclass: NSObject
// Address: 0x112a7f3b8

@interface SCNNotificationsRedriveConfig

// Property: maxAttemptCount; attributes: Tq,N,V_maxAttemptCount
// Property: minDelayMs; attributes: Tq,N,V_minDelayMs
// Property: triggerAfterReceive; attributes: TB,N,V_triggerAfterReceive
// Property: maxNotifCountPerRedrive; attributes: T@"NSNumber",&,N,V_maxNotifCountPerRedrive
// Property: enableInForeground; attributes: TB,N,V_enableInForeground
// Property: inAppReminderConfig; attributes: T@"SCNNotificationsInAppReminderConfig",&,N,V_inAppReminderConfig

// -[SCNNotificationsRedriveConfig initWithMaxAttemptCount:minDelayMs:triggerAfterReceive:maxNotifCountPerRedrive:enableInForeground:inAppReminderConfig:]
// Type encoding: @56@0:8q16q24B32@36B44@48
// Implementation: 0x1008fe3c0

// -[SCNNotificationsRedriveConfig initWithMaxAttemptCount:minDelayMs:triggerAfterReceive:enableInForeground:]
// Type encoding: @40@0:8q16q24B32B36
// Implementation: 0x105960950

// -[SCNNotificationsRedriveConfig maxAttemptCount]
// Type encoding: q16@0:8
// Implementation: 0x1008ff174

// -[SCNNotificationsRedriveConfig setMaxAttemptCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x105960960

// -[SCNNotificationsRedriveConfig minDelayMs]
// Type encoding: q16@0:8
// Implementation: 0x1008ff17c

// -[SCNNotificationsRedriveConfig setMinDelayMs:]
// Type encoding: v24@0:8q16
// Implementation: 0x105960968

// -[SCNNotificationsRedriveConfig triggerAfterReceive]
// Type encoding: B16@0:8
// Implementation: 0x1008ff184

// -[SCNNotificationsRedriveConfig setTriggerAfterReceive:]
// Type encoding: v20@0:8B16
// Implementation: 0x105960970

// -[SCNNotificationsRedriveConfig maxNotifCountPerRedrive]
// Type encoding: @16@0:8
// Implementation: 0x1008ff18c

// -[SCNNotificationsRedriveConfig setMaxNotifCountPerRedrive:]
// Type encoding: v24@0:8@16
// Implementation: 0x105960978

// -[SCNNotificationsRedriveConfig enableInForeground]
// Type encoding: B16@0:8
// Implementation: 0x1008ff194

// -[SCNNotificationsRedriveConfig setEnableInForeground:]
// Type encoding: v20@0:8B16
// Implementation: 0x10596099c

// -[SCNNotificationsRedriveConfig inAppReminderConfig]
// Type encoding: @16@0:8
// Implementation: 0x1008ff19c

// -[SCNNotificationsRedriveConfig setInAppReminderConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059609a4

// -[SCNNotificationsRedriveConfig .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x100905b44

@end
