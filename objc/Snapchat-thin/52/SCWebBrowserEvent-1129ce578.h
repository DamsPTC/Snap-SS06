// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCWebBrowserEvent
// Superclass: NSObject
// Address: 0x1129ce578

@interface SCWebBrowserEvent

// Property: timestampMs; attributes: Td,N,R,VtimestampMs
// Property: eventType; attributes: T@"SCWebBrowserEventType",N,R,VeventType
// Property: config; attributes: T@"SCAdWebBrowserConfig",N,R,Vconfig
// Property: hash; attributes: Tq,N,R
// Property: description; attributes: T@"NSString",N,R

// -[SCWebBrowserEvent timestampMs]
// Type encoding: d16@0:8
// Implementation: 0x1046530cc

// -[SCWebBrowserEvent eventType]
// Type encoding: @16@0:8
// Implementation: 0x1046530dc

// -[SCWebBrowserEvent config]
// Type encoding: @16@0:8
// Implementation: 0x1046530ec

// -[SCWebBrowserEvent initWithTimestampMs:eventType:config:]
// Type encoding: @40@0:8d16@24@32
// Implementation: 0x104653178

// -[SCWebBrowserEvent hash]
// Type encoding: q16@0:8
// Implementation: 0x1046534d8

// -[SCWebBrowserEvent isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x104653734

// -[SCWebBrowserEvent copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x1046537b4

// -[SCWebBrowserEvent encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x1046538a8

// -[SCWebBrowserEvent initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x104653b6c

// -[SCWebBrowserEvent description]
// Type encoding: @16@0:8
// Implementation: 0x104653b94

// -[SCWebBrowserEvent init]
// Type encoding: @16@0:8
// Implementation: 0x104653c70

// -[SCWebBrowserEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104653cec

@end
