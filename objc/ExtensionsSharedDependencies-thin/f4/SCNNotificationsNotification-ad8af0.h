// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNNotificationsNotification
// Superclass: NSObject
// Address: 0xad8af0

@interface SCNNotificationsNotification

// Property: properties; attributes: T@"NSDictionary",C,N,V_properties
// Property: json; attributes: T@"NSString",C,N,V_json
// Property: source; attributes: Tq,N,V_source
// Property: receiveTimestampMs; attributes: Tq,N,V_receiveTimestampMs
// Property: redriveMetadata; attributes: T@"SCNNotificationsRedriveMetadata",&,N,V_redriveMetadata

// -[SCNNotificationsNotification initWithProperties:json:source:receiveTimestampMs:redriveMetadata:]
// Type encoding: @56@0:8@16@24q32q40@48
// Implementation: 0x47d9cc

// -[SCNNotificationsNotification initWithSource:receiveTimestampMs:]
// Type encoding: @32@0:8q16q24
// Implementation: 0x47daf4

// -[SCNNotificationsNotification properties]
// Type encoding: @16@0:8
// Implementation: 0x47db0c

// -[SCNNotificationsNotification setProperties:]
// Type encoding: v24@0:8@16
// Implementation: 0x47db14

// -[SCNNotificationsNotification json]
// Type encoding: @16@0:8
// Implementation: 0x47db1c

// -[SCNNotificationsNotification setJson:]
// Type encoding: v24@0:8@16
// Implementation: 0x47db24

// -[SCNNotificationsNotification source]
// Type encoding: q16@0:8
// Implementation: 0x47db2c

// -[SCNNotificationsNotification setSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x47db34

// -[SCNNotificationsNotification receiveTimestampMs]
// Type encoding: q16@0:8
// Implementation: 0x47db3c

// -[SCNNotificationsNotification setReceiveTimestampMs:]
// Type encoding: v24@0:8q16
// Implementation: 0x47db44

// -[SCNNotificationsNotification redriveMetadata]
// Type encoding: @16@0:8
// Implementation: 0x47db4c

// -[SCNNotificationsNotification setRedriveMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x47db54

// -[SCNNotificationsNotification .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x47db84

@end
