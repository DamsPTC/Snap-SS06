// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlaceEvent
// Superclass: NSObject
// Address: 0x1129976e8

@interface SCPlaceEvent

// Property: placeId; attributes: T@"NSString",N,R
// Property: event; attributes: T@"SCEventType",N,R,Vevent
// Property: eventTimeMs; attributes: Tq,N,R,VeventTimeMs
// Property: hash; attributes: Tq,N,R
// Property: description; attributes: T@"NSString",N,R

// -[SCPlaceEvent placeId]
// Type encoding: @16@0:8
// Implementation: 0x1042ff300

// -[SCPlaceEvent event]
// Type encoding: @16@0:8
// Implementation: 0x1042ff34c

// -[SCPlaceEvent eventTimeMs]
// Type encoding: q16@0:8
// Implementation: 0x1042ff35c

// -[SCPlaceEvent initWithPlaceId:event:eventTimeMs:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x1042ff3f0

// -[SCPlaceEvent hash]
// Type encoding: q16@0:8
// Implementation: 0x1042ff5a0

// -[SCPlaceEvent isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x1042ff7cc

// -[SCPlaceEvent copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x104301b68

// -[SCPlaceEvent encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x1042ff970

// -[SCPlaceEvent initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x1042ffc5c

// -[SCPlaceEvent description]
// Type encoding: @16@0:8
// Implementation: 0x1042ffc84

// -[SCPlaceEvent init]
// Type encoding: @16@0:8
// Implementation: 0x1042ffd78

// -[SCPlaceEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1042ffdf8

@end
