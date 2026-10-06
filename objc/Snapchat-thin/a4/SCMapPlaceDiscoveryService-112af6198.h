// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapPlaceDiscoveryService
// Superclass: NSObject
// Address: 0x112af6198

@interface SCMapPlaceDiscoveryService

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapPlaceDiscoveryService initWithMapUserNetworking:docObjectContext:placeFavoritesManager:mapSearchProxy:circumstanceEngine:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10675f0e8

// -[SCMapPlaceDiscoveryService fetchPlacesDiscoveryWithPlacePivot:zoomLevel:boundingBox:initialOpen:userLocation:respectUserLocation:searchThisArea:searchQuery:networkSessionId:styleName:completion:]
// Type encoding: v124@0:8@16d24{SCMapCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}32B64{CLLocationCoordinate2D=dd}68B84B88@92@100@108@?116
// Implementation: 0x10675f2bc

// -[SCMapPlaceDiscoveryService fetchPlacePivotsForPlaceIds:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10675fce4

// -[SCMapPlaceDiscoveryService _fetchSearchResultsViaProxy:boundingBox:userLocation:searchThisArea:styleName:completion:]
// Type encoding: v92@0:8@16{SCMapCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}24{CLLocationCoordinate2D=dd}56B72@76@?84
// Implementation: 0x10675ff00

// -[SCMapPlaceDiscoveryService _placeDiscoveryUrlWithEndpoint:]
// Type encoding: @24@0:8@16
// Implementation: 0x106760258

// -[SCMapPlaceDiscoveryService _createPlaceDiscoveryRequest:zoomLevel:boundingBox:initialOpen:userLocation:respectUserLocation:searchThisArea:searchQuery:showRankingDebug:networkSessionId:rankingFlavorId:]
// Type encoding: @120@0:8@16d24{SCMapCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}32B64{CLLocationCoordinate2D=dd}68B84B88@92B100@104@112
// Implementation: 0x1067602ec

// -[SCMapPlaceDiscoveryService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106760524

@end
