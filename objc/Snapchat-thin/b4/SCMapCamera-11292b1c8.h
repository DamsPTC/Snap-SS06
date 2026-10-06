// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapCamera
// Superclass: NSObject
// Address: 0x11292b1c8

@interface SCMapCamera

// Property: centerCoordinate; attributes: T{CLLocationCoordinate2D=dd},N,R,VcenterCoordinate
// Property: heading; attributes: Td,N,R,Vheading
// Property: pitch; attributes: Td,N,R,Vpitch
// Property: altitude; attributes: Td,N,R,Valtitude
// Property: padding; attributes: T{UIEdgeInsets=dddd},N,R,Vpadding
// Property: description; attributes: T@"NSString",N,R

// -[SCMapCamera isVisuallyEqualToCamera:]
// Type encoding: B24@0:8@16
// Implementation: 0x106c1bb10

// -[SCMapCamera isVisuallyEqualToCamera:ignoringAltitude:]
// Type encoding: B28@0:8@16B24
// Implementation: 0x106c1bb18

// -[SCMapCamera centerCoordinate]
// Type encoding: {CLLocationCoordinate2D=dd}16@0:8
// Implementation: 0x103b350ec

// -[SCMapCamera heading]
// Type encoding: d16@0:8
// Implementation: 0x103b35100

// -[SCMapCamera pitch]
// Type encoding: d16@0:8
// Implementation: 0x103b35110

// -[SCMapCamera altitude]
// Type encoding: d16@0:8
// Implementation: 0x103b35120

// -[SCMapCamera padding]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x103b35130

// -[SCMapCamera initWithCenterCoordinate:heading:pitch:altitude:padding:]
// Type encoding: @88@0:8{CLLocationCoordinate2D=dd}16d32d40d48{UIEdgeInsets=dddd}56
// Implementation: 0x103b352d0

// -[SCMapCamera copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x103b3542c

// -[SCMapCamera description]
// Type encoding: @16@0:8
// Implementation: 0x103b35430

// -[SCMapCamera init]
// Type encoding: @16@0:8
// Implementation: 0x103b3544c

@end
