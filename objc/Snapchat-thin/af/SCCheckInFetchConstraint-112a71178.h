// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCheckInFetchConstraint
// Superclass: NSObject
// Address: 0x112a71178

@interface SCCheckInFetchConstraint

// Property: centerCoordinate; attributes: T{CLLocationCoordinate2D=dd},R,N,V_centerCoordinate
// Property: radius; attributes: Td,R,N,V_radius
// Property: expirationDate; attributes: T@"NSDate",R,C,N,V_expirationDate

// -[SCCheckInFetchConstraint allowFetchForCoordinate:]
// Type encoding: B32@0:8{CLLocationCoordinate2D=dd}16
// Implementation: 0x105832164

// -[SCCheckInFetchConstraint initWithCenterCoordinate:radius:expirationDate:]
// Type encoding: @48@0:8{CLLocationCoordinate2D=dd}16d32@40
// Implementation: 0x105831de4

// -[SCCheckInFetchConstraint copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x105831ef4

// -[SCCheckInFetchConstraint hash]
// Type encoding: Q16@0:8
// Implementation: 0x105831f18

// -[SCCheckInFetchConstraint isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x105831ffc

// -[SCCheckInFetchConstraint centerCoordinate]
// Type encoding: {CLLocationCoordinate2D=dd}16@0:8
// Implementation: 0x105832140

// -[SCCheckInFetchConstraint radius]
// Type encoding: d16@0:8
// Implementation: 0x105832148

// -[SCCheckInFetchConstraint expirationDate]
// Type encoding: @16@0:8
// Implementation: 0x105832150

// -[SCCheckInFetchConstraint .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105832158

// +[SCCheckInFetchConstraint defaultForCenterCoordinate:]
// Type encoding: @32@0:8{CLLocationCoordinate2D=dd}16
// Implementation: 0x105831e7c

@end
