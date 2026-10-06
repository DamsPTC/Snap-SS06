// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapPetLocation
// Superclass: NSObject
// Address: 0x11285b9e0

@interface SCMapPetLocation

// Property: petId; attributes: T@"NSString",N,R
// Property: coordinate; attributes: T{CLLocationCoordinate2D=dd},N,R,Vcoordinate
// Property: description; attributes: T@"NSString",N,R

// -[SCMapPetLocation petId]
// Type encoding: @16@0:8
// Implementation: 0x1026eae60

// -[SCMapPetLocation coordinate]
// Type encoding: {CLLocationCoordinate2D=dd}16@0:8
// Implementation: 0x1026eaeac

// -[SCMapPetLocation initWithPetId:coordinate:]
// Type encoding: @40@0:8@16{CLLocationCoordinate2D=dd}24
// Implementation: 0x1026eaec8

// -[SCMapPetLocation copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x1026eb044

// -[SCMapPetLocation description]
// Type encoding: @16@0:8
// Implementation: 0x1026eb048

// -[SCMapPetLocation init]
// Type encoding: @16@0:8
// Implementation: 0x1026eb064

// -[SCMapPetLocation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1026eb0e0

@end
