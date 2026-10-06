// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNotificationProcessingEvent
// Superclass: NSObject
// Address: 0x1129dbe90

@interface SCNotificationProcessingEvent

// Property: userInfo; attributes: T@"NSDictionary",N,R
// Property: source; attributes: Tq,N,R,Vsource
// Property: clientReceiveTimestampMs; attributes: Tq,N,R,VclientReceiveTimestampMs
// Property: completionHandler; attributes: T@?,N,R

// -[SCNotificationProcessingEvent userInfo]
// Type encoding: @16@0:8
// Implementation: 0x10484aedc

// -[SCNotificationProcessingEvent source]
// Type encoding: q16@0:8
// Implementation: 0x10484af44

// -[SCNotificationProcessingEvent clientReceiveTimestampMs]
// Type encoding: q16@0:8
// Implementation: 0x10484af54

// -[SCNotificationProcessingEvent completionHandler]
// Type encoding: @?16@0:8
// Implementation: 0x10484af64

// -[SCNotificationProcessingEvent initWithUserInfo:source:clientReceiveTimestampMs:completionHandler:]
// Type encoding: @48@0:8@16q24q32@?40
// Implementation: 0x10484b118

// -[SCNotificationProcessingEvent init]
// Type encoding: @16@0:8
// Implementation: 0x10484b20c

// -[SCNotificationProcessingEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10484b268

@end
