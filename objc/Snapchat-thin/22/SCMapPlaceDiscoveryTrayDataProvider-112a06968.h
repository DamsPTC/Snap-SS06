// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapPlaceDiscoveryTrayDataProvider
// Superclass: NSObject
// Address: 0x112a06968

@interface SCMapPlaceDiscoveryTrayDataProvider


// -[SCMapPlaceDiscoveryTrayDataProvider initWithMapPlacesContentServices:mapStoryFetchingServices:mapViewServices:locationProvider:circumstanceEngine:currentUserId:grapheneLogger:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x104ed8ae4

// -[SCMapPlaceDiscoveryTrayDataProvider dealloc]
// Type encoding: v16@0:8
// Implementation: 0x104ed8c54

// -[SCMapPlaceDiscoveryTrayDataProvider fetchDiscoveryPlacesForTrayDetails:networkSessionId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104ed8c9c

// -[SCMapPlaceDiscoveryTrayDataProvider fetchInitialVisualTrayPlacesDataForDiscoveryPlaces:currentPivot:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104ed9040

// -[SCMapPlaceDiscoveryTrayDataProvider fetchPlaceStoryThumbnailsDataForPlaceID:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104ed9154

// -[SCMapPlaceDiscoveryTrayDataProvider removeVisitationForPlace:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104ed922c

// -[SCMapPlaceDiscoveryTrayDataProvider cancelInFlightRequests]
// Type encoding: v16@0:8
// Implementation: 0x104ed92b8

// -[SCMapPlaceDiscoveryTrayDataProvider _getObservableOfNumOfRankedSnapsAndPlacePivotsForDiscoveryPlaces:currentPivot:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104ed92c0

// -[SCMapPlaceDiscoveryTrayDataProvider _fetchPreviewRankedSnapsObservableForDiscoveryPlaces:currentPivot:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104ed957c

// -[SCMapPlaceDiscoveryTrayDataProvider _fetchPlacePivotsObservableForDiscoveryPlaces:]
// Type encoding: @24@0:8@16
// Implementation: 0x104ed99cc

// -[SCMapPlaceDiscoveryTrayDataProvider _fetchPlacePivotsForPlaceIDs:observer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104ed9b48

// -[SCMapPlaceDiscoveryTrayDataProvider _getPreviewThumbnailObservableForPlaceID:useAlternateRanking:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x104ed9d68

// -[SCMapPlaceDiscoveryTrayDataProvider _fetchPlaceStoryPreviewThumbnailForPlaceID:useAlternateRanking:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x104ed9ffc

// -[SCMapPlaceDiscoveryTrayDataProvider _getPlaceThumbnailsDataObservableForPlaceID:]
// Type encoding: @24@0:8@16
// Implementation: 0x104eda180

// -[SCMapPlaceDiscoveryTrayDataProvider _constructUpdatedDiscoveryPlaces:previewRankedSnapsDictionary:placePivotsDictionary:currentPivot:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x104eda2fc

// -[SCMapPlaceDiscoveryTrayDataProvider _prevPlaceStoryCarouselDataForPlace:]
// Type encoding: @24@0:8@16
// Implementation: 0x104eda908

// -[SCMapPlaceDiscoveryTrayDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104eda9fc

@end
