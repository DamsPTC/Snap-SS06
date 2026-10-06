// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapPlaceProfileV2ETADataFetcher
// Superclass: NSObject
// Address: 0x112a06d78

@interface SCMapPlaceProfileV2ETADataFetcher


// -[SCMapPlaceProfileV2ETADataFetcher initWithMapNavigationRouteFetcher:]
// Type encoding: @24@0:8@16
// Implementation: 0x104ee4d74

// -[SCMapPlaceProfileV2ETADataFetcher fetchETADataForPlaceCoordinate:userCoordinate:completion:]
// Type encoding: v56@0:8{CLLocationCoordinate2D=dd}16{CLLocationCoordinate2D=dd}32@?48
// Implementation: 0x104ee4de8

// -[SCMapPlaceProfileV2ETADataFetcher _handleWalkingETAResponse:error:drivingRequest:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x104ee50d8

// -[SCMapPlaceProfileV2ETADataFetcher _handleDrivingETAResponse:error:walkingETAText:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x104ee5368

// -[SCMapPlaceProfileV2ETADataFetcher _createNavigationRouteRequestForRouteMode:locations:unit:]
// Type encoding: @40@0:8q16@24q32
// Implementation: 0x104ee5400

// -[SCMapPlaceProfileV2ETADataFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104ee5484

@end
