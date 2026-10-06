// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapZoomCoordinate
// Superclass: NSObject
// Address: 0x11292b890

@interface SCMapZoomCoordinate

// Property: centerCoordinate; attributes: T{CLLocationCoordinate2D=dd},N,R,VcenterCoordinate
// Property: zoomLevel; attributes: Td,N,R,VzoomLevel
// Property: description; attributes: T@"NSString",N,R

// -[SCMapZoomCoordinate centerCoordinate]
// Type encoding: {CLLocationCoordinate2D=dd}16@0:8
// Implementation: 0x103b37480

// -[SCMapZoomCoordinate zoomLevel]
// Type encoding: d16@0:8
// Implementation: 0x103b37494

// -[SCMapZoomCoordinate initWithCenterCoordinate:zoomLevel:]
// Type encoding: @40@0:8{CLLocationCoordinate2D=dd}16d32
// Implementation: 0x103b374a8

// -[SCMapZoomCoordinate copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x103b37588

// -[SCMapZoomCoordinate description]
// Type encoding: @16@0:8
// Implementation: 0x103b3758c

// -[SCMapZoomCoordinate init]
// Type encoding: @16@0:8
// Implementation: 0x103b375a8

@end
