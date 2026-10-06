// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGeofencedObject
// Superclass: NSObject
// Address: 0x112be87b8

@interface SCGeofencedObject

// Property: geoFenceLocationPoints; attributes: T@"NSArray",C,N,V_geoFenceLocationPoints
// Property: locationId; attributes: T@"NSString",C,N,V_locationId
// Property: s2Polygon; attributes: T@"SCS2Polygon",R,N,V_s2Polygon
// Property: hasContextCards; attributes: TB,N,V_hasContextCards
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGeofencedObject initWithLocationId:geoFenceLocationPoints:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x109141020

// -[SCGeofencedObject initWithSoju:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091410cc

// -[SCGeofencedObject initWithDictionary:]
// Type encoding: @24@0:8@16
// Implementation: 0x10914132c

// -[SCGeofencedObject s2Polygon]
// Type encoding: @16@0:8
// Implementation: 0x10914164c

// -[SCGeofencedObject copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10914172c

// -[SCGeofencedObject initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x109141750

// -[SCGeofencedObject encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10914183c

// -[SCGeofencedObject geoFenceContainsLocation:]
// Type encoding: B24@0:8@16
// Implementation: 0x1091418e4

// -[SCGeofencedObject geoFenceAreaIsTooSmallForAccuracy:]
// Type encoding: B24@0:8d16
// Implementation: 0x109141ad4

// -[SCGeofencedObject geoFenceArea]
// Type encoding: d16@0:8
// Implementation: 0x109141b94

// -[SCGeofencedObject isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x109141e24

// -[SCGeofencedObject hash]
// Type encoding: Q16@0:8
// Implementation: 0x109141f74

// -[SCGeofencedObject hasContextCards]
// Type encoding: B16@0:8
// Implementation: 0x109141fc8

// -[SCGeofencedObject setHasContextCards:]
// Type encoding: v20@0:8B16
// Implementation: 0x109141fd0

// -[SCGeofencedObject geoFenceLocationPoints]
// Type encoding: @16@0:8
// Implementation: 0x109141fd8

// -[SCGeofencedObject setGeoFenceLocationPoints:]
// Type encoding: v24@0:8@16
// Implementation: 0x109141fe0

// -[SCGeofencedObject locationId]
// Type encoding: @16@0:8
// Implementation: 0x109141fe8

// -[SCGeofencedObject setLocationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x109141ff0

// -[SCGeofencedObject .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109141ff8

@end
