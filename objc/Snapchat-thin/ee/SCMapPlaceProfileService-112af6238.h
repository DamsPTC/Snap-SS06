// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapPlaceProfileService
// Superclass: NSObject
// Address: 0x112af6238

@interface SCMapPlaceProfileService


// -[SCMapPlaceProfileService initWithMapUserNetworking:docObjectContext:mapNetworkCacheManager:circumstanceEngine:userLocationHelpers:basemapPersonalization:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1067613f0

// -[SCMapPlaceProfileService fetchPlaceProfileForPlaceID:source:styleName:completion:]
// Type encoding: v48@0:8@16q24@32@?40
// Implementation: 0x106761598

// -[SCMapPlaceProfileService fetchInfoForPlaceID:source:sourceSpecific:styleName:completion:]
// Type encoding: v56@0:8@16q24@32@40@?48
// Implementation: 0x106761bf8

// -[SCMapPlaceProfileService fetchInfoForPlaces:source:sourceSpecific:respectOrder:styleName:completion:]
// Type encoding: v60@0:8@16q24@32B40@44@?52
// Implementation: 0x106761da8

// -[SCMapPlaceProfileService _placeInfoModelsFromResponse:cachedProfilesById:placeIds:sourceSpecific:url:respectOrder:]
// Type encoding: @60@0:8@16@24@32@40@48B56
// Implementation: 0x106762578

// -[SCMapPlaceProfileService _batchCachePlaceProfiles:forUrl:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106762924

// -[SCMapPlaceProfileService fetchComponentsForPlaceID:placeComponentType:topN:styleName:usePlaceCards:completion:]
// Type encoding: v60@0:8@16q24Q32@40B48@?52
// Implementation: 0x1067629b0

// -[SCMapPlaceProfileService fetchCheckInNearbyPlacesForLocation:placesLimit:source:completion:]
// Type encoding: v48@0:8@16Q24q32@?40
// Implementation: 0x106763010

// -[SCMapPlaceProfileService fetchNearbyPlacesFromLat:lng:placesLimit:source:completion:]
// Type encoding: v56@0:8d16d24Q32q40@?48
// Implementation: 0x1067634f4

// -[SCMapPlaceProfileService fetchPlaceRatingsAndReviewsForPlaceId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106763914

// -[SCMapPlaceProfileService fetchPlacePhotosForPlaceId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106763be8

// -[SCMapPlaceProfileService fetchCategoryIconsForPlaceIDs:styleName:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106763f28

// -[SCMapPlaceProfileService _categoryIconModelsFromResponse:cachedIconsById:url:prefix:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10676448c

// -[SCMapPlaceProfileService _placeProfileUrlWithEndpoint:forGooglePlaceData:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x1067646f0

// -[SCMapPlaceProfileService _constructPlaceProfileDataFromCacheResponseForPlaceID:]
// Type encoding: @24@0:8@16
// Implementation: 0x106764798

// -[SCMapPlaceProfileService _updatePlaceProfileCacheResponseForPlaceID:placeProfile:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106764874

// -[SCMapPlaceProfileService _logGraphenePlaceCardLoadedWithSource:wasSuccess:count:]
// Type encoding: v36@0:8@16B24Q28
// Implementation: 0x1067649a8

// -[SCMapPlaceProfileService _logGraphenePlacesProfileFetchLatencyWithStartTimestamp:endpoint:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x106764a10

// -[SCMapPlaceProfileService _defaultStyleName]
// Type encoding: @16@0:8
// Implementation: 0x106764a90

// -[SCMapPlaceProfileService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106764af8

@end
