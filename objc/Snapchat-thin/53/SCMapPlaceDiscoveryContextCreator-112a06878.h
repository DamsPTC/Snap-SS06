// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapPlaceDiscoveryContextCreator
// Superclass: NSObject
// Address: 0x112a06878

@interface SCMapPlaceDiscoveryContextCreator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: nativeVenueStoryPlayer; attributes: T@"<SCCMapNativeVenueStoryPlayer>",&,N,V_nativePlaceStoryPlayer
// Property: onTrayPositionChanged; attributes: T@"SCBridgeObservable",&,N,V_onTrayPositionChanged
// Property: trayHeightObservable; attributes: T@"SCBridgeObservable",&,N,V_trayHeightObservable

// -[SCMapPlaceDiscoveryContextCreator initWithUserLocationHelpers:locationProvider:mapSession:mapPlacesContentServices:placeDiscoveryScope:placeStoryThumbnailSubject:storyPlaybackScopeExposer:storyPlaybackScopeServices:placeDiscoveryController:composerServices:mapStoryFetcher:circumstanceEngine:placeStoryPlayerVendor:reloadPlacesSubject:blizzardLogger:webBrowserScopeExposer:]
// Type encoding: @144@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136
// Implementation: 0x104ed5a48

// -[SCMapPlaceDiscoveryContextCreator createPlacesVisualTrayResultsContextWithDelegate:trayPositionUpdateObservable:trayHeightObservable:visualTrayMetrics:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x104ed5e04

// -[SCMapPlaceDiscoveryContextCreator createPlaceDiscoverySessionIdsProviderWithOpenSource:sourceSessionId:footerActionId:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x104ed615c

// -[SCMapPlaceDiscoveryContextCreator getFormattedDistanceToLocationWithLat:lng:]
// Type encoding: @32@0:8d16d24
// Implementation: 0x104ed61f8

// -[SCMapPlaceDiscoveryContextCreator onPlaceCellVisibleWithPlaceId:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ed6258

// -[SCMapPlaceDiscoveryContextCreator currentMapState]
// Type encoding: @16@0:8
// Implementation: 0x104ed6364

// -[SCMapPlaceDiscoveryContextCreator getCurrentViewport]
// Type encoding: @16@0:8
// Implementation: 0x104ed6414

// -[SCMapPlaceDiscoveryContextCreator getCurrentZoomLevel]
// Type encoding: @16@0:8
// Implementation: 0x104ed64c8

// -[SCMapPlaceDiscoveryContextCreator getCurrentUserLocation]
// Type encoding: @16@0:8
// Implementation: 0x104ed64d0

// -[SCMapPlaceDiscoveryContextCreator handleVisualPlaceTapWithPlace:placeTapSource:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104ed656c

// -[SCMapPlaceDiscoveryContextCreator handleEditSearchWithSearchQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ed6630

// -[SCMapPlaceDiscoveryContextCreator handleCloseTray]
// Type encoding: v16@0:8
// Implementation: 0x104ed6678

// -[SCMapPlaceDiscoveryContextCreator handleReloadPlaces]
// Type encoding: v16@0:8
// Implementation: 0x104ed66a4

// -[SCMapPlaceDiscoveryContextCreator handleOpenHtmlDebug]
// Type encoding: v16@0:8
// Implementation: 0x104ed66b4

// -[SCMapPlaceDiscoveryContextCreator handlePlacePivotTapWithPivot:traySourceSessionId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104ed679c

// -[SCMapPlaceDiscoveryContextCreator handlePlaceLongPressWithPlace:placePivots:trayFilter:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104ed6964

// -[SCMapPlaceDiscoveryContextCreator handleShareVisitedByPlacesWithPivot:numPlaces:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x104ed6a68

// -[SCMapPlaceDiscoveryContextCreator createNativeThumbnailViewFactory]
// Type encoding: @16@0:8
// Implementation: 0x104ed6ac0

// -[SCMapPlaceDiscoveryContextCreator _createVideoView]
// Type encoding: @16@0:8
// Implementation: 0x104ed6c1c

// -[SCMapPlaceDiscoveryContextCreator _getVenueStoryAnalytics]
// Type encoding: @16@0:8
// Implementation: 0x104ed6c7c

// -[SCMapPlaceDiscoveryContextCreator mapStoryDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x104ed6d7c

// -[SCMapPlaceDiscoveryContextCreator getPrefetchedRankedStoryPlaylistForPlaceID:]
// Type encoding: @24@0:8@16
// Implementation: 0x104ed6dc4

// -[SCMapPlaceDiscoveryContextCreator webBrowserDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ed6dcc

// -[SCMapPlaceDiscoveryContextCreator shouldRetainInstanceWhenMarshalling]
// Type encoding: B16@0:8
// Implementation: 0x104ed6e14

// -[SCMapPlaceDiscoveryContextCreator onTrayPositionChanged]
// Type encoding: @16@0:8
// Implementation: 0x104ed6e1c

// -[SCMapPlaceDiscoveryContextCreator setOnTrayPositionChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ed6e24

// -[SCMapPlaceDiscoveryContextCreator trayHeightObservable]
// Type encoding: @16@0:8
// Implementation: 0x104ed6e54

// -[SCMapPlaceDiscoveryContextCreator setTrayHeightObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ed6e5c

// -[SCMapPlaceDiscoveryContextCreator nativeVenueStoryPlayer]
// Type encoding: @16@0:8
// Implementation: 0x104ed6e8c

// -[SCMapPlaceDiscoveryContextCreator setNativeVenueStoryPlayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ed6e94

// -[SCMapPlaceDiscoveryContextCreator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104ed6ec4

@end
