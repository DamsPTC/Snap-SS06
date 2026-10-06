// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapPlaceFavoritesManager
// Superclass: NSObject
// Address: 0x112af60a8

@interface SCMapPlaceFavoritesManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapPlaceFavoritesManager initWithFavoritesService:placeProfileService:notificationPool:deepLinkHandler:circumstanceEngine:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10675d7a8

// -[SCMapPlaceFavoritesManager addCurrentlyActiveMapSDKSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x10675d930

// -[SCMapPlaceFavoritesManager removeInactiveMapSDKSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x10675d940

// -[SCMapPlaceFavoritesManager setFavoriteStatus:forPlaceID:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x10675d950

// -[SCMapPlaceFavoritesManager _fetchFavorites]
// Type encoding: v16@0:8
// Implementation: 0x10675daf4

// -[SCMapPlaceFavoritesManager _updateForPlaceID:favorited:placeInfo:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x10675dc08

// -[SCMapPlaceFavoritesManager _postFavoritesChangeForPlaceID:favorited:placeInfo:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x10675de90

// -[SCMapPlaceFavoritesManager _showFavoriteNotificationForPlaceInfo:favorited:showError:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x10675e0ec

// -[SCMapPlaceFavoritesManager shouldRetainInstanceWhenMarshalling]
// Type encoding: B16@0:8
// Implementation: 0x10675e3bc

// -[SCMapPlaceFavoritesManager pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x10675e3c4

// -[SCMapPlaceFavoritesManager arePlacesFavoritedWithPlaceIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x10675e3d0

// -[SCMapPlaceFavoritesManager getFavoriteChangedObservable]
// Type encoding: @16@0:8
// Implementation: 0x10675e3dc

// -[SCMapPlaceFavoritesManager getFavoritedPlaceIds]
// Type encoding: @16@0:8
// Implementation: 0x10675e3e4

// -[SCMapPlaceFavoritesManager isPlaceFavoritedWithPlaceId:]
// Type encoding: B24@0:8@16
// Implementation: 0x10675e3ec

// -[SCMapPlaceFavoritesManager onFavoriteChangedWithPlaceId:willBeFavorited:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10675e3f4

// -[SCMapPlaceFavoritesManager updateNativePlacePinForPlace:]
// Type encoding: v24@0:8@16
// Implementation: 0x10675e404

// -[SCMapPlaceFavoritesManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10675e530

@end
