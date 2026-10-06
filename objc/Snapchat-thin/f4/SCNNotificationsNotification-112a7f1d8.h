// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNNotificationsNotification
// Superclass: NSObject
// Address: 0x112a7f1d8

@interface SCNNotificationsNotification

// Property: properties; attributes: T@"NSDictionary",C,N,V_properties
// Property: json; attributes: T@"NSString",C,N,V_json
// Property: source; attributes: Tq,N,V_source
// Property: receiveTimestampMs; attributes: Tq,N,V_receiveTimestampMs
// Property: redriveMetadata; attributes: T@"SCNNotificationsRedriveMetadata",&,N,V_redriveMetadata

// -[SCNNotificationsNotification initWithProperties:json:source:receiveTimestampMs:redriveMetadata:]
// Type encoding: @56@0:8@16@24q32q40@48
// Implementation: 0x10596005c

// -[SCNNotificationsNotification initWithSource:receiveTimestampMs:]
// Type encoding: @32@0:8q16q24
// Implementation: 0x105960184

// -[SCNNotificationsNotification properties]
// Type encoding: @16@0:8
// Implementation: 0x10596019c

// -[SCNNotificationsNotification setProperties:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059601a4

// -[SCNNotificationsNotification json]
// Type encoding: @16@0:8
// Implementation: 0x1059601ac

// -[SCNNotificationsNotification setJson:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059601b4

// -[SCNNotificationsNotification source]
// Type encoding: q16@0:8
// Implementation: 0x1059601bc

// -[SCNNotificationsNotification setSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x1059601c4

// -[SCNNotificationsNotification receiveTimestampMs]
// Type encoding: q16@0:8
// Implementation: 0x1059601cc

// -[SCNNotificationsNotification setReceiveTimestampMs:]
// Type encoding: v24@0:8q16
// Implementation: 0x1059601d4

// -[SCNNotificationsNotification redriveMetadata]
// Type encoding: @16@0:8
// Implementation: 0x1059601dc

// -[SCNNotificationsNotification setRedriveMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059601e4

// -[SCNNotificationsNotification .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105960214

@end
