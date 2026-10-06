// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: MGLMapCamera
// Superclass: NSObject
// Address: 0x112b614e8

@interface MGLMapCamera

// Property: centerCoordinate; attributes: T{CLLocationCoordinate2D=dd},N,V_centerCoordinate
// Property: heading; attributes: Td,N,V_heading
// Property: pitch; attributes: Td,N,V_pitch
// Property: altitude; attributes: Td,N,V_altitude
// Property: viewingDistance; attributes: Td,N
// Property: padding; attributes: T{UIEdgeInsets=dddd},N,V_padding

// -[MGLMapCamera initWithCenterCoordinate:altitude:pitch:heading:padding:]
// Type encoding: @88@0:8{CLLocationCoordinate2D=dd}16d32d40d48{UIEdgeInsets=dddd}56
// Implementation: 0x107248bd0

// -[MGLMapCamera initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x107248c50

// -[MGLMapCamera encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x107248e18

// -[MGLMapCamera copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x107248ed0

// -[MGLMapCamera viewingDistance]
// Type encoding: d16@0:8
// Implementation: 0x107248f60

// -[MGLMapCamera setViewingDistance:]
// Type encoding: v24@0:8d16
// Implementation: 0x107248fb8

// -[MGLMapCamera description]
// Type encoding: @16@0:8
// Implementation: 0x107249010

// -[MGLMapCamera isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x1072490ac

// -[MGLMapCamera isEqualToMapCamera:]
// Type encoding: B24@0:8@16
// Implementation: 0x1072491c4

// -[MGLMapCamera hash]
// Type encoding: Q16@0:8
// Implementation: 0x107249348

// -[MGLMapCamera centerCoordinate]
// Type encoding: {CLLocationCoordinate2D=dd}16@0:8
// Implementation: 0x1072495a8

// -[MGLMapCamera setCenterCoordinate:]
// Type encoding: v32@0:8{CLLocationCoordinate2D=dd}16
// Implementation: 0x1072495b0

// -[MGLMapCamera heading]
// Type encoding: d16@0:8
// Implementation: 0x1072495b8

// -[MGLMapCamera setHeading:]
// Type encoding: v24@0:8d16
// Implementation: 0x1072495c0

// -[MGLMapCamera pitch]
// Type encoding: d16@0:8
// Implementation: 0x1072495c8

// -[MGLMapCamera setPitch:]
// Type encoding: v24@0:8d16
// Implementation: 0x1072495d0

// -[MGLMapCamera altitude]
// Type encoding: d16@0:8
// Implementation: 0x1072495d8

// -[MGLMapCamera setAltitude:]
// Type encoding: v24@0:8d16
// Implementation: 0x1072495e0

// -[MGLMapCamera padding]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x1072495e8

// -[MGLMapCamera setPadding:]
// Type encoding: v48@0:8{UIEdgeInsets=dddd}16
// Implementation: 0x1072495f4

// +[MGLMapCamera supportsSecureCoding]
// Type encoding: B16@0:8
// Implementation: 0x10724892c

// +[MGLMapCamera camera]
// Type encoding: @16@0:8
// Implementation: 0x107248934

// +[MGLMapCamera cameraLookingAtCenterCoordinate:fromEyeCoordinate:eyeAltitude:]
// Type encoding: @56@0:8{CLLocationCoordinate2D=dd}16{CLLocationCoordinate2D=dd}32d48
// Implementation: 0x107248948

// +[MGLMapCamera cameraLookingAtCenterCoordinate:acrossDistance:pitch:heading:]
// Type encoding: @56@0:8{CLLocationCoordinate2D=dd}16d32d40d48
// Implementation: 0x107248ab0

// +[MGLMapCamera cameraLookingAtCenterCoordinate:altitude:pitch:heading:]
// Type encoding: @56@0:8{CLLocationCoordinate2D=dd}16d32d40d48
// Implementation: 0x107248b28

// +[MGLMapCamera cameraLookingAtCenterCoordinate:altitude:pitch:heading:padding:]
// Type encoding: @88@0:8{CLLocationCoordinate2D=dd}16d32d40d48{UIEdgeInsets=dddd}56
// Implementation: 0x107248b68

// +[MGLMapCamera cameraLookingAtCenterCoordinate:fromDistance:pitch:heading:]
// Type encoding: @56@0:8{CLLocationCoordinate2D=dd}16d32d40d48
// Implementation: 0x107248bc4

// +[MGLMapCamera keyPathsForValuesAffectingViewingDistance]
// Type encoding: @16@0:8
// Implementation: 0x107248f28

@end
