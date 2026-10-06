// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapDropsDataProvider
// Superclass: NSObject
// Address: 0x112aa8d58

@interface SCMapDropsDataProvider


// -[SCMapDropsDataProvider initWithPlaceProfileDataFetcher:mapStoryPreviewFetcher:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105ed0804

// -[SCMapDropsDataProvider fetchNearbyPlacesForPinCoordinate:dataSubject:]
// Type encoding: v40@0:8{CLLocationCoordinate2D=dd}16@32
// Implementation: 0x105ed08f0

// -[SCMapDropsDataProvider fetchNearbyPlacePreviewThumbnailForPlaceId:dataSubject:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105ed0bd0

// -[SCMapDropsDataProvider _getFormattedDistanceFromPinWithPlaceLocation:pinLocation:]
// Type encoding: @48@0:8{CLLocationCoordinate2D=dd}16{CLLocationCoordinate2D=dd}32
// Implementation: 0x105ed0d3c

// -[SCMapDropsDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105ed0de4

@end
