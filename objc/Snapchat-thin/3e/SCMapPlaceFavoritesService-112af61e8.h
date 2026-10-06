// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapPlaceFavoritesService
// Superclass: NSObject
// Address: 0x112af61e8

@interface SCMapPlaceFavoritesService


// -[SCMapPlaceFavoritesService initWithMapUserNetworking:mapPeopleFriendsProvider:docObjectContext:circumstanceEngine:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106760590

// -[SCMapPlaceFavoritesService fetchFavoritedPlacesWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106760684

// -[SCMapPlaceFavoritesService addPlaceToFavoritesWithPlaceID:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106760a3c

// -[SCMapPlaceFavoritesService removePlaceFromFavoritesWithPlaceID:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106760c50

// -[SCMapPlaceFavoritesService _favoritesUrlWithEndpoint:]
// Type encoding: @24@0:8@16
// Implementation: 0x106760e74

// -[SCMapPlaceFavoritesService _constructPlaceFavoritesFromCacheResponse]
// Type encoding: @16@0:8
// Implementation: 0x106760f08

// -[SCMapPlaceFavoritesService _updatePlaceFavoritesCacheWithFavoritesArray:]
// Type encoding: v24@0:8@16
// Implementation: 0x106760ff4

// -[SCMapPlaceFavoritesService _updatePlaceFavoritesCacheWithPlaceID:isFavorited:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1067611a0

// -[SCMapPlaceFavoritesService _clearPlaceAnnotationsCacheItemForPlaceID:]
// Type encoding: v24@0:8@16
// Implementation: 0x10676126c

// -[SCMapPlaceFavoritesService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10676139c

@end
