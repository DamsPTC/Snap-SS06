// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapPersonStatusConstraint
// Superclass: NSObject
// Address: 0x1129a4578

@interface SCMapPersonStatusConstraint

// Property: center; attributes: T{CLLocationCoordinate2D=dd},N,R,Vcenter
// Property: radius; attributes: Td,N,R,Vradius
// Property: expirationDate; attributes: T@"NSDate",N,R
// Property: description; attributes: T@"NSString",N,R

// -[SCMapPersonStatusConstraint hasLocation]
// Type encoding: B16@0:8
// Implementation: 0x106b1ed00

// -[SCMapPersonStatusConstraint isCancelledAtCoordinate:]
// Type encoding: B32@0:8{CLLocationCoordinate2D=dd}16
// Implementation: 0x106b1ed84

// -[SCMapPersonStatusConstraint center]
// Type encoding: {CLLocationCoordinate2D=dd}16@0:8
// Implementation: 0x104381f68

// -[SCMapPersonStatusConstraint radius]
// Type encoding: d16@0:8
// Implementation: 0x104381f7c

// -[SCMapPersonStatusConstraint expirationDate]
// Type encoding: @16@0:8
// Implementation: 0x104381f8c

// -[SCMapPersonStatusConstraint initWithCenter:radius:expirationDate:]
// Type encoding: @48@0:8{CLLocationCoordinate2D=dd}16d32@40
// Implementation: 0x1043820f4

// -[SCMapPersonStatusConstraint copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x104382234

// -[SCMapPersonStatusConstraint description]
// Type encoding: @16@0:8
// Implementation: 0x104382238

// -[SCMapPersonStatusConstraint init]
// Type encoding: @16@0:8
// Implementation: 0x1043822f4

// -[SCMapPersonStatusConstraint .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104382370

@end
