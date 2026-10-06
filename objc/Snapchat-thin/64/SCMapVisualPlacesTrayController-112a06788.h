// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapVisualPlacesTrayController
// Superclass: NSObject
// Address: 0x112a06788

@interface SCMapVisualPlacesTrayController

// Property: delegate; attributes: T@"<SCMapPlaceDiscoveryControllerDelegate>",W,N,V_delegate
// Property: trayDetails; attributes: T@"SCVisualPlacesTrayDetails",&,N,V_trayDetails
// Property: loadStateObservable; attributes: T@"SCObservable",R,N
// Property: storiesLoadedObservable; attributes: T@"SCObservable",R,N
// Property: visiblePlaces; attributes: T@"NSArray",R,N,V_visiblePlaces
// Property: visiblePlacePivots; attributes: T@"NSArray",R,N,V_visiblePlacePivots
// Property: rankingDebugHtml; attributes: T@"NSString",R,N,V_rankingDebugHtml
// Property: networkSessionId; attributes: TQ,R,N,V_networkSessionId
// Property: sessionIdsProvider; attributes: T@"SCMapPlaceDiscoverySessionIdsProvider",W,N,V_sessionIdsProvider
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapVisualPlacesTrayController initWithTrayDataProvider:placeStoryThumbnailsObservable:mapViewport:mapView:mapSdkSession:multiTrayServices:reloadPlacesObservable:circumstanceEngine:grapheneLogger:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x104ecf2cc

// -[SCMapVisualPlacesTrayController loadStateObservable]
// Type encoding: @16@0:8
// Implementation: 0x104ecf858

// -[SCMapVisualPlacesTrayController storiesLoadedObservable]
// Type encoding: @16@0:8
// Implementation: 0x104ecf880

// -[SCMapVisualPlacesTrayController setTrayDetails:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ecf8a8

// -[SCMapVisualPlacesTrayController cleanup]
// Type encoding: v16@0:8
// Implementation: 0x104ecf92c

// -[SCMapVisualPlacesTrayController getCurrentVisibleBounds]
// Type encoding: {SCMapCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}16@0:8
// Implementation: 0x104ecf980

// -[SCMapVisualPlacesTrayController getCurrentZoomLevel]
// Type encoding: @16@0:8
// Implementation: 0x104ecf98c

// -[SCMapVisualPlacesTrayController cameraProvider]
// Type encoding: @?16@0:8
// Implementation: 0x104ecf9a0

// -[SCMapVisualPlacesTrayController handleInitialPositionChangeFromFullishToCollapsedTrayHeight:]
// Type encoding: v24@0:8d16
// Implementation: 0x104ecf9b4

// -[SCMapVisualPlacesTrayController setPlacesBrowsingContext]
// Type encoding: v16@0:8
// Implementation: 0x104ecfa90

// -[SCMapVisualPlacesTrayController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x104ecfacc

// -[SCMapVisualPlacesTrayController _publishLoadState:places:pivots:]
// Type encoding: v36@0:8i16@20@28
// Implementation: 0x104ecfb30

// -[SCMapVisualPlacesTrayController _delayedLoadStateUpdate]
// Type encoding: v16@0:8
// Implementation: 0x104ecfc28

// -[SCMapVisualPlacesTrayController _setupReloadPlacesObserverWithReloadPlacesObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ecfc70

// -[SCMapVisualPlacesTrayController _reloadPlaces]
// Type encoding: v16@0:8
// Implementation: 0x104ecfd74

// -[SCMapVisualPlacesTrayController _setupPlaceStoryThumbnailsObserverWithPlaceStoryThumbnailsObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ecfe78

// -[SCMapVisualPlacesTrayController _delayedUpdatePlaceThumbnailDataForPlaceID:thumbnailData:trayDetails:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104ecff98

// -[SCMapVisualPlacesTrayController _updatePlaceThumbnailsData]
// Type encoding: v16@0:8
// Implementation: 0x104ed0184

// -[SCMapVisualPlacesTrayController _refreshPlaceDiscoveryTrayData]
// Type encoding: v16@0:8
// Implementation: 0x104ed0640

// -[SCMapVisualPlacesTrayController _handlePlaceLocationInTrayDetails:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ed0830

// -[SCMapVisualPlacesTrayController _handleSearchButtonDisplay:]
// Type encoding: v20@0:8B16
// Implementation: 0x104ed0b20

// -[SCMapVisualPlacesTrayController _fetchDiscoveryPlacesForTrayDetails:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ed0c84

// -[SCMapVisualPlacesTrayController _fetchInitialVisualTrayPlacesDataForDiscoveryPlaces:pivots:trayDetails:startTimestamp:]
// Type encoding: v48@0:8@16@24@32d40
// Implementation: 0x104ed0ef4

// -[SCMapVisualPlacesTrayController _fetchPlaceThumbnailsDataForPlaceID:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ed116c

// -[SCMapVisualPlacesTrayController _removeVisitedAnnotationForPlace:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ed1394

// -[SCMapVisualPlacesTrayController _updateBasemapWithPlaces:pivot:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104ed1534

// -[SCMapVisualPlacesTrayController _showPlacePinForPlaceFeature:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ed180c

// -[SCMapVisualPlacesTrayController _hidePlacePinForPlaceId:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ed1824

// -[SCMapVisualPlacesTrayController _centerDiscoveryPlaces:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ed1884

// -[SCMapVisualPlacesTrayController _containBoundedDiscoveryPlaces:edgePadding:anchorCoordinate:]
// Type encoding: v72@0:8@16{UIEdgeInsets=dddd}24{CLLocationCoordinate2D=dd}56
// Implementation: 0x104ed1c28

// -[SCMapVisualPlacesTrayController _containUnboundedDiscoveryPlaces:edgePadding:anchorCoordinate:]
// Type encoding: v72@0:8@16{UIEdgeInsets=dddd}24{CLLocationCoordinate2D=dd}56
// Implementation: 0x104ed2020

// -[SCMapVisualPlacesTrayController _arePlacesBounded]
// Type encoding: B16@0:8
// Implementation: 0x104ed2474

// -[SCMapVisualPlacesTrayController _onCenteringAnimationCompleted]
// Type encoding: v16@0:8
// Implementation: 0x104ed25d0

// -[SCMapVisualPlacesTrayController _calculateEdgePaddingForVisibleTrayHeight]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x104ed25d8

// -[SCMapVisualPlacesTrayController _getMapViewSizeWithEdgePadding:]
// Type encoding: {CGSize=dd}48@0:8{UIEdgeInsets=dddd}16
// Implementation: 0x104ed26a8

// -[SCMapVisualPlacesTrayController _delayedRefreshData]
// Type encoding: v16@0:8
// Implementation: 0x104ed2708

// -[SCMapVisualPlacesTrayController _updatePlacePivotInTrayDetailsIfNeededWithPlacePivots:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ed2824

// -[SCMapVisualPlacesTrayController _updatePreviousSearchViewport]
// Type encoding: v16@0:8
// Implementation: 0x104ed2aac

// -[SCMapVisualPlacesTrayController _handleStoriesLoadedEventForPlace:thumbnailsData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104ed2ae4

// -[SCMapVisualPlacesTrayController _prevPlaceStoryCarouselDataForPlace:]
// Type encoding: @24@0:8@16
// Implementation: 0x104ed2d90

// -[SCMapVisualPlacesTrayController _clearPlaceThumbnailsDataDictionary]
// Type encoding: v16@0:8
// Implementation: 0x104ed2ecc

// -[SCMapVisualPlacesTrayController removeVisitationForPlace:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ed2ef4

// -[SCMapVisualPlacesTrayController removePlace:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ed3168

// -[SCMapVisualPlacesTrayController trayDetails]
// Type encoding: @16@0:8
// Implementation: 0x104ed3264

// -[SCMapVisualPlacesTrayController visiblePlaces]
// Type encoding: @16@0:8
// Implementation: 0x104ed326c

// -[SCMapVisualPlacesTrayController visiblePlacePivots]
// Type encoding: @16@0:8
// Implementation: 0x104ed3274

// -[SCMapVisualPlacesTrayController delegate]
// Type encoding: @16@0:8
// Implementation: 0x104ed327c

// -[SCMapVisualPlacesTrayController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ed3294

// -[SCMapVisualPlacesTrayController networkSessionId]
// Type encoding: Q16@0:8
// Implementation: 0x104ed32a0

// -[SCMapVisualPlacesTrayController rankingDebugHtml]
// Type encoding: @16@0:8
// Implementation: 0x104ed32a8

// -[SCMapVisualPlacesTrayController sessionIdsProvider]
// Type encoding: @16@0:8
// Implementation: 0x104ed32b0

// -[SCMapVisualPlacesTrayController setSessionIdsProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ed32c8

// -[SCMapVisualPlacesTrayController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104ed32d4

@end
