// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCS2CellId
// Superclass: NSObject
// Address: 0x112bf16d8

@interface SCS2CellId


// -[SCS2CellId initWithS2CellId:]
// Type encoding: @24@0:8{S2CellId=Q}16
// Implementation: 0x10917743c

// -[SCS2CellId getId]
// Type encoding: Q16@0:8
// Implementation: 0x109177484

// -[SCS2CellId token]
// Type encoding: @16@0:8
// Implementation: 0x10917748c

// -[SCS2CellId latlng]
// Type encoding: {CLLocationCoordinate2D=dd}16@0:8
// Implementation: 0x10917752c

// -[SCS2CellId setId:]
// Type encoding: v24@0:8{S2CellId=Q}16
// Implementation: 0x10917759c

// -[SCS2CellId getS2CellId]
// Type encoding: {S2CellId=Q}16@0:8
// Implementation: 0x1091775a4

// -[SCS2CellId parent]
// Type encoding: @16@0:8
// Implementation: 0x1091775ac

// -[SCS2CellId parentAtLevel:]
// Type encoding: @20@0:8i16
// Implementation: 0x1091775f0

// -[SCS2CellId level]
// Type encoding: i16@0:8
// Implementation: 0x109177640

// -[SCS2CellId edgeNeighbors]
// Type encoding: @16@0:8
// Implementation: 0x109177648

// -[SCS2CellId copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x109177844

// -[SCS2CellId isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x109177870

// -[SCS2CellId hash]
// Type encoding: Q16@0:8
// Implementation: 0x109177928

// -[SCS2CellId .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10917792c

// +[SCS2CellId cellIdForLatLong:]
// Type encoding: @32@0:8{CLLocationCoordinate2D=dd}16
// Implementation: 0x1091772a0

// +[SCS2CellId cellIdForLatLong:atLevel:]
// Type encoding: @36@0:8{CLLocationCoordinate2D=dd}16i32
// Implementation: 0x109177300

// +[SCS2CellId cellIdForToken:]
// Type encoding: @24@0:8@16
// Implementation: 0x109177380

// +[SCS2CellId levelForAccuracy:minLevel:maxLevel:]
// Type encoding: i32@0:8d16i24i28
// Implementation: 0x1091777a4

@end
