// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSponsoredLensEvent
// Superclass: NSObject
// Address: 0x1129968b8

@interface SCSponsoredLensEvent

// Property: lensId; attributes: T@"NSString",N,R
// Property: event; attributes: T@"SCSponsoredLensEventType",N,R,Vevent
// Property: eventTimeMs; attributes: TQ,N,R,VeventTimeMs
// Property: hash; attributes: Tq,N,R
// Property: description; attributes: T@"NSString",N,R

// -[SCSponsoredLensEvent lensId]
// Type encoding: @16@0:8
// Implementation: 0x1042d98ac

// -[SCSponsoredLensEvent event]
// Type encoding: @16@0:8
// Implementation: 0x1042d98f8

// -[SCSponsoredLensEvent eventTimeMs]
// Type encoding: Q16@0:8
// Implementation: 0x1042d9908

// -[SCSponsoredLensEvent initWithLensId:event:eventTimeMs:]
// Type encoding: @40@0:8@16@24Q32
// Implementation: 0x1042d999c

// -[SCSponsoredLensEvent hash]
// Type encoding: q16@0:8
// Implementation: 0x1042d9af4

// -[SCSponsoredLensEvent isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x1042d9cf0

// -[SCSponsoredLensEvent copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x1042da608

// -[SCSponsoredLensEvent encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x1042d9e84

// -[SCSponsoredLensEvent initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x1042da160

// -[SCSponsoredLensEvent description]
// Type encoding: @16@0:8
// Implementation: 0x1042da188

// -[SCSponsoredLensEvent init]
// Type encoding: @16@0:8
// Implementation: 0x1042da1e4

// -[SCSponsoredLensEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1042da260

@end
