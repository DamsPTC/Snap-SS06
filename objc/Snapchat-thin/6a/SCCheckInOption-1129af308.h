// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCheckInOption
// Superclass: NSObject
// Address: 0x1129af308

@interface SCCheckInOption

// Property: identifier; attributes: T@"NSString",N,R
// Property: title; attributes: T@"NSString",N,R
// Property: rank; attributes: Tq,N,R,Vrank
// Property: typeAdditions; attributes: T@"SCCheckInOptionTypeAdditions",N,R,VtypeAdditions
// Property: isReportable; attributes: TB,N,R,VisReportable
// Property: distanceString; attributes: T@"NSString",N,R
// Property: isAutoSelected; attributes: TB,N,R,VisAutoSelected
// Property: hash; attributes: Tq,N,R
// Property: description; attributes: T@"NSString",N,R

// -[SCCheckInOption initWithSOJUVenue:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e6ca7c

// -[SCCheckInOption initWithSOJUVenue:rank:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x108e6ca84

// -[SCCheckInOption _categoryAtIndex:categories:]
// Type encoding: @32@0:8Q16@24
// Implementation: 0x108e6ccb8

// -[SCCheckInOption identifier]
// Type encoding: @16@0:8
// Implementation: 0x104403294

// -[SCCheckInOption title]
// Type encoding: @16@0:8
// Implementation: 0x1044032a0

// -[SCCheckInOption rank]
// Type encoding: q16@0:8
// Implementation: 0x1044032f4

// -[SCCheckInOption typeAdditions]
// Type encoding: @16@0:8
// Implementation: 0x104403304

// -[SCCheckInOption isReportable]
// Type encoding: B16@0:8
// Implementation: 0x104403314

// -[SCCheckInOption distanceString]
// Type encoding: @16@0:8
// Implementation: 0x104403324

// -[SCCheckInOption isAutoSelected]
// Type encoding: B16@0:8
// Implementation: 0x104403380

// -[SCCheckInOption initWithIdentifier:title:rank:typeAdditions:isReportable:distanceString:isAutoSelected:]
// Type encoding: @64@0:8@16@24q32@40B48@52B60
// Implementation: 0x104403478

// -[SCCheckInOption hash]
// Type encoding: q16@0:8
// Implementation: 0x1044036fc

// -[SCCheckInOption isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x104403a98

// -[SCCheckInOption copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x104403b18

// -[SCCheckInOption description]
// Type encoding: @16@0:8
// Implementation: 0x104403b1c

// -[SCCheckInOption init]
// Type encoding: @16@0:8
// Implementation: 0x104403b68

// -[SCCheckInOption .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104403be4

// +[SCCheckInOption venuesFromSOJUVenues:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e6c940

@end
