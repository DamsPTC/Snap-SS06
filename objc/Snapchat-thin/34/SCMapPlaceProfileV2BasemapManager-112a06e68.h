// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapPlaceProfileV2BasemapManager
// Superclass: NSObject
// Address: 0x112a06e68

@interface SCMapPlaceProfileV2BasemapManager


// -[SCMapPlaceProfileV2BasemapManager initWithMapViewServices:placesContentServices:placeProfileV2Scope:multiTrayServices:circumstanceEngine:gestureServices:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x104ee6538

// -[SCMapPlaceProfileV2BasemapManager dealloc]
// Type encoding: v16@0:8
// Implementation: 0x104ee6664

// -[SCMapPlaceProfileV2BasemapManager presentMapViewportForMapPlace:bounds:needsExtraPadding:needsDefaultCamera:customServerRankingId:shouldDisplayPlacePin:]
// Type encoding: v52@0:8@16@24B32B36@40B48
// Implementation: 0x104ee66b8

// -[SCMapPlaceProfileV2BasemapManager setPlaceAsRecentlyViewed:customServerRankingId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104ee6984

// -[SCMapPlaceProfileV2BasemapManager presentMapViewportForReloadedTrayData:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ee6bb4

// -[SCMapPlaceProfileV2BasemapManager cameraProviderForTrayData:]
// Type encoding: @?24@0:8@16
// Implementation: 0x104ee6e4c

// -[SCMapPlaceProfileV2BasemapManager trayPositionDidUpdateFromCollapsedToHalfForMapPlace:needsExtraPadding:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104ee70d0

// -[SCMapPlaceProfileV2BasemapManager restoreBasemapForPlaceProfileV2Close]
// Type encoding: v16@0:8
// Implementation: 0x104ee7210

// -[SCMapPlaceProfileV2BasemapManager removeVisitedAnnotationForPlace:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ee726c

// -[SCMapPlaceProfileV2BasemapManager _hidePlacePinForPlaceId:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ee7660

// -[SCMapPlaceProfileV2BasemapManager _highlightPlacePinForPlaceFeature:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ee7724

// -[SCMapPlaceProfileV2BasemapManager _edgePaddingForHalfishTrayPositionWithExtraPadding:]
// Type encoding: {UIEdgeInsets=dddd}20@0:8B16
// Implementation: 0x104ee7894

// -[SCMapPlaceProfileV2BasemapManager _defaultCameraForTrayCreationWithCoordinate:boundingBox:desiredZoomLevel:needsExtraPadding:isPromoted:]
// Type encoding: @56@0:8{CLLocationCoordinate2D=dd}16@32d40B48B52
// Implementation: 0x104ee7940

// -[SCMapPlaceProfileV2BasemapManager _defaultCameraForMapPlace:needsExtraPadding:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x104ee7dd8

// -[SCMapPlaceProfileV2BasemapManager _registerFavoritesChangeListener]
// Type encoding: v16@0:8
// Implementation: 0x104ee8050

// -[SCMapPlaceProfileV2BasemapManager _onFavoriteChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ee81c8

// -[SCMapPlaceProfileV2BasemapManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104ee84b0

@end
