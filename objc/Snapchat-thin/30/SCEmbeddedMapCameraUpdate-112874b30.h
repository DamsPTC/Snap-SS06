// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCEmbeddedMapCameraUpdate
// Superclass: NSObject
// Address: 0x112874b30

@interface SCEmbeddedMapCameraUpdate

// Property: description; attributes: T@"NSString",N,R

// -[SCEmbeddedMapCameraUpdate description]
// Type encoding: @16@0:8
// Implementation: 0x10297cf40

// -[SCEmbeddedMapCameraUpdate init]
// Type encoding: @16@0:8
// Implementation: 0x10297cf70

// -[SCEmbeddedMapCameraUpdate copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x10297cfb8

// -[SCEmbeddedMapCameraUpdate matchCoordinate:bounds:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x10297d0f0

// +[SCEmbeddedMapCameraUpdate coordinateWithCoordinate:zoomLevel:pitch:padding:]
// Type encoding: @80@0:8{CLLocationCoordinate2D=dd}16d32d40{UIEdgeInsets=dddd}48
// Implementation: 0x10297cfbc

// +[SCEmbeddedMapCameraUpdate boundsWithBounds:padding:]
// Type encoding: @80@0:8{SCMapCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}16{UIEdgeInsets=dddd}48
// Implementation: 0x10297cfd0

@end
