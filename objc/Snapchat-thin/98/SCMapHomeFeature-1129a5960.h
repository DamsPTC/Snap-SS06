// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapHomeFeature
// Superclass: NSObject
// Address: 0x1129a5960

@interface SCMapHomeFeature

// Property: homeOwnerID; attributes: T@"NSString",N,R
// Property: homeLocation; attributes: T{CLLocationCoordinate2D=dd},N,R,VhomeLocation
// Property: homeAngle; attributes: T@"NSNumber",N,R,VhomeAngle
// Property: zoomLevel; attributes: T@"NSNumber",N,R,VzoomLevel
// Property: description; attributes: T@"NSString",N,R

// -[SCMapHomeFeature homeOwnerID]
// Type encoding: @16@0:8
// Implementation: 0x10438bfdc

// -[SCMapHomeFeature homeLocation]
// Type encoding: {CLLocationCoordinate2D=dd}16@0:8
// Implementation: 0x10438c028

// -[SCMapHomeFeature homeAngle]
// Type encoding: @16@0:8
// Implementation: 0x10438c03c

// -[SCMapHomeFeature zoomLevel]
// Type encoding: @16@0:8
// Implementation: 0x10438c04c

// -[SCMapHomeFeature initWithHomeOwnerID:homeLocation:homeAngle:zoomLevel:]
// Type encoding: @56@0:8@16{CLLocationCoordinate2D=dd}24@40@48
// Implementation: 0x10438c1a4

// -[SCMapHomeFeature copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x10438c2dc

// -[SCMapHomeFeature description]
// Type encoding: @16@0:8
// Implementation: 0x10438c2e0

// -[SCMapHomeFeature init]
// Type encoding: @16@0:8
// Implementation: 0x10438c2fc

// -[SCMapHomeFeature .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10438c378

@end
