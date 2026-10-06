// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNSENativeAckEvent
// Superclass: NSObject
// Address: 0xac6fb8

@interface SCNSENativeAckEvent

// Property: notificationId; attributes: T@"NSString",N,R
// Property: eventType; attributes: Tq,N,R,VeventType
// Property: result; attributes: Tq,N,R,Vresult

// -[SCNSENativeAckEvent notificationId]
// Type encoding: @16@0:8
// Implementation: 0x4d47c

// -[SCNSENativeAckEvent eventType]
// Type encoding: q16@0:8
// Implementation: 0x4d4c8

// -[SCNSENativeAckEvent result]
// Type encoding: q16@0:8
// Implementation: 0x4d4d8

// -[SCNSENativeAckEvent initWithNotificationId:eventType:result:]
// Type encoding: @40@0:8@16q24q32
// Implementation: 0x4d4e8

// -[SCNSENativeAckEvent init]
// Type encoding: @16@0:8
// Implementation: 0x4d574

// -[SCNSENativeAckEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x4d5d4

@end
