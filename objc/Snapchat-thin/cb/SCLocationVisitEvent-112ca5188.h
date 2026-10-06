// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLocationVisitEvent
// Superclass: NSObject
// Address: 0x112ca5188

@interface SCLocationVisitEvent

// Property: coordinate; attributes: T{CLLocationCoordinate2D=dd},R,N,V_coordinate
// Property: horizontalAccuracy; attributes: Td,R,N,V_horizontalAccuracy
// Property: arrivalDate; attributes: T@"NSDate",R,C,N,V_arrivalDate
// Property: departureDate; attributes: T@"NSDate",R,C,N,V_departureDate
// Property: details; attributes: T@"NSString",R,C,N,V_details
// Property: significantChangeMonitoringAvailable; attributes: TB,R,N,V_significantChangeMonitoringAvailable

// -[SCLocationVisitEvent initWithCoordinate:horizontalAccuracy:arrivalDate:departureDate:details:significantChangeMonitoringAvailable:]
// Type encoding: @68@0:8{CLLocationCoordinate2D=dd}16d32@40@48@56B64
// Implementation: 0x10b6fa018

// -[SCLocationVisitEvent copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b6fa124

// -[SCLocationVisitEvent hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b6fa148

// -[SCLocationVisitEvent isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b6fa230

// -[SCLocationVisitEvent coordinate]
// Type encoding: {CLLocationCoordinate2D=dd}16@0:8
// Implementation: 0x10b6fa364

// -[SCLocationVisitEvent horizontalAccuracy]
// Type encoding: d16@0:8
// Implementation: 0x10b6fa36c

// -[SCLocationVisitEvent arrivalDate]
// Type encoding: @16@0:8
// Implementation: 0x10b6fa374

// -[SCLocationVisitEvent departureDate]
// Type encoding: @16@0:8
// Implementation: 0x10b6fa37c

// -[SCLocationVisitEvent details]
// Type encoding: @16@0:8
// Implementation: 0x10b6fa384

// -[SCLocationVisitEvent significantChangeMonitoringAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b6fa38c

// -[SCLocationVisitEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b6fa394

@end
