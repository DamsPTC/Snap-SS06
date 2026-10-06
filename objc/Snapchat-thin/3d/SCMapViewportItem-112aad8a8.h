// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapViewportItem
// Superclass: NSObject
// Address: 0x112aad8a8

@interface SCMapViewportItem

// Property: identifier; attributes: T@"NSString",R,C,N,V_identifier
// Property: coordinate; attributes: T{CLLocationCoordinate2D=dd},R,N,V_coordinate
// Property: type; attributes: Tq,R,N,V_type
// Property: labels; attributes: T@"NSArray",R,C,N,V_labels
// Property: typeSpecificProperties; attributes: T@"NSDictionary",R,C,N,V_typeSpecificProperties
// Property: screenLocationX; attributes: Td,R,N,V_screenLocationX
// Property: screenLocationY; attributes: Td,R,N,V_screenLocationY

// -[SCMapViewportItem initWithIdentifier:coordinate:type:labels:typeSpecificProperties:screenLocationX:screenLocationY:]
// Type encoding: @80@0:8@16{CLLocationCoordinate2D=dd}24q40@48@56d64d72
// Implementation: 0x105f457b8

// -[SCMapViewportItem copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x105f458c8

// -[SCMapViewportItem hash]
// Type encoding: Q16@0:8
// Implementation: 0x105f458ec

// -[SCMapViewportItem isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x105f459f8

// -[SCMapViewportItem identifier]
// Type encoding: @16@0:8
// Implementation: 0x105f45b60

// -[SCMapViewportItem coordinate]
// Type encoding: {CLLocationCoordinate2D=dd}16@0:8
// Implementation: 0x105f45b68

// -[SCMapViewportItem type]
// Type encoding: q16@0:8
// Implementation: 0x105f45b70

// -[SCMapViewportItem labels]
// Type encoding: @16@0:8
// Implementation: 0x105f45b78

// -[SCMapViewportItem typeSpecificProperties]
// Type encoding: @16@0:8
// Implementation: 0x105f45b80

// -[SCMapViewportItem screenLocationX]
// Type encoding: d16@0:8
// Implementation: 0x105f45b88

// -[SCMapViewportItem screenLocationY]
// Type encoding: d16@0:8
// Implementation: 0x105f45b90

// -[SCMapViewportItem .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f45b98

@end
