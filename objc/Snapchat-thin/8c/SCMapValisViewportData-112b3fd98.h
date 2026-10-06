// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapValisViewportData
// Superclass: NSObject
// Address: 0x112b3fd98

@interface SCMapValisViewportData

// Property: friendIDs; attributes: T@"NSArray",R,C,N,V_friendIDs
// Property: zoomLevel; attributes: Td,R,N,V_zoomLevel
// Property: swCoordinate; attributes: T{CLLocationCoordinate2D=dd},R,N,V_swCoordinate
// Property: neCoordinate; attributes: T{CLLocationCoordinate2D=dd},R,N,V_neCoordinate

// -[SCMapValisViewportData initWithFriendIDs:zoomLevel:swCoordinate:neCoordinate:]
// Type encoding: @64@0:8@16d24{CLLocationCoordinate2D=dd}32{CLLocationCoordinate2D=dd}48
// Implementation: 0x106e6f900

// -[SCMapValisViewportData copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x106e6f9b0

// -[SCMapValisViewportData friendIDs]
// Type encoding: @16@0:8
// Implementation: 0x106e6f9d4

// -[SCMapValisViewportData zoomLevel]
// Type encoding: d16@0:8
// Implementation: 0x106e6f9dc

// -[SCMapValisViewportData swCoordinate]
// Type encoding: {CLLocationCoordinate2D=dd}16@0:8
// Implementation: 0x106e6f9e4

// -[SCMapValisViewportData neCoordinate]
// Type encoding: {CLLocationCoordinate2D=dd}16@0:8
// Implementation: 0x106e6f9ec

// -[SCMapValisViewportData .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106e6f9f4

@end
