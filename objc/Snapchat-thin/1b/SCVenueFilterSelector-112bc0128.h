// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVenueFilterSelector
// Superclass: NSObject
// Address: 0x112bc0128

@interface SCVenueFilterSelector

// Property: selectedIndex; attributes: Tq,N,V_selectedIndex
// Property: selectedFilterFromTray; attributes: T@"SOJUVenue",C,N,V_selectedFilterFromTray
// Property: selectedFilter; attributes: T@"SOJUVenue",R,N
// Property: venueFilters; attributes: T@"NSArray",R,C,N,V_venueFilters
// Property: extraVenues; attributes: T@"NSArray",R,C,N,V_extraVenues
// Property: location; attributes: T@"CLLocation",&,N,V_location
// Property: venueIDToDistanceStringMap; attributes: T@"NSDictionary",R,N,V_venueIDToDistanceStringMap
// Property: yOffset; attributes: Td,N,V_yOffset
// Property: relativeVenueFilterSize; attributes: T{CGSize=dd},N,V_relativeVenueFilterSize
// Property: relativeVenueFilterCenter; attributes: T{CGPoint=dd},N,V_relativeVenueFilterCenter
// Property: venueIsFromSearch; attributes: TB,N,V_venueIsFromSearch
// Property: venueDistanceFromSnap; attributes: Td,N,V_venueDistanceFromSnap

// -[SCVenueFilterSelector initWithArrayOfVenueFilters:venueIDToDistanceStringMap:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108d108b0

// -[SCVenueFilterSelector initWithArrayOfVenueFilters:extraVenueFilters:venueIDToDistanceStringMap:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108d10b34

// -[SCVenueFilterSelector initWithSOJUGalleryVenueFilter:]
// Type encoding: @24@0:8@16
// Implementation: 0x108d10c48

// -[SCVenueFilterSelector initWithVenueId:name:locality:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108d10e2c

// -[SCVenueFilterSelector selectedFilter]
// Type encoding: @16@0:8
// Implementation: 0x108d10fd8

// -[SCVenueFilterSelector selectedPlaceTag]
// Type encoding: @16@0:8
// Implementation: 0x108d11024

// -[SCVenueFilterSelector selectFilter:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d1121c

// -[SCVenueFilterSelector selectFilterWithVenueId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d1125c

// -[SCVenueFilterSelector selectFilterFromTray:venueTapIndex:venueIsFromSearch:venueDistanceFromSnap:]
// Type encoding: v44@0:8@16Q24B32d36
// Implementation: 0x108d1136c

// -[SCVenueFilterSelector venueFilterIds]
// Type encoding: @16@0:8
// Implementation: 0x108d1140c

// -[SCVenueFilterSelector selectedVenueIndex]
// Type encoding: Q16@0:8
// Implementation: 0x108d115d0

// -[SCVenueFilterSelector isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x108d115d8

// -[SCVenueFilterSelector hash]
// Type encoding: Q16@0:8
// Implementation: 0x108d116c0

// -[SCVenueFilterSelector copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x108d11784

// -[SCVenueFilterSelector venueFilters]
// Type encoding: @16@0:8
// Implementation: 0x108d11944

// -[SCVenueFilterSelector extraVenues]
// Type encoding: @16@0:8
// Implementation: 0x108d1194c

// -[SCVenueFilterSelector location]
// Type encoding: @16@0:8
// Implementation: 0x108d11954

// -[SCVenueFilterSelector setLocation:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d1195c

// -[SCVenueFilterSelector venueIDToDistanceStringMap]
// Type encoding: @16@0:8
// Implementation: 0x108d1198c

// -[SCVenueFilterSelector yOffset]
// Type encoding: d16@0:8
// Implementation: 0x108d11994

// -[SCVenueFilterSelector setYOffset:]
// Type encoding: v24@0:8d16
// Implementation: 0x108d1199c

// -[SCVenueFilterSelector relativeVenueFilterSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x108d119a4

// -[SCVenueFilterSelector setRelativeVenueFilterSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x108d119ac

// -[SCVenueFilterSelector relativeVenueFilterCenter]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x108d119b4

// -[SCVenueFilterSelector setRelativeVenueFilterCenter:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x108d119bc

// -[SCVenueFilterSelector venueIsFromSearch]
// Type encoding: B16@0:8
// Implementation: 0x108d119c4

// -[SCVenueFilterSelector setVenueIsFromSearch:]
// Type encoding: v20@0:8B16
// Implementation: 0x108d119cc

// -[SCVenueFilterSelector venueDistanceFromSnap]
// Type encoding: d16@0:8
// Implementation: 0x108d119d4

// -[SCVenueFilterSelector setVenueDistanceFromSnap:]
// Type encoding: v24@0:8d16
// Implementation: 0x108d119dc

// -[SCVenueFilterSelector selectedIndex]
// Type encoding: q16@0:8
// Implementation: 0x108d119e4

// -[SCVenueFilterSelector setSelectedIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x108d119ec

// -[SCVenueFilterSelector selectedFilterFromTray]
// Type encoding: @16@0:8
// Implementation: 0x108d119f4

// -[SCVenueFilterSelector setSelectedFilterFromTray:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d119fc

// -[SCVenueFilterSelector .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108d11a04

@end
