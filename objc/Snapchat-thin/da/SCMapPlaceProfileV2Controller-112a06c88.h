// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapPlaceProfileV2Controller
// Superclass: NSObject
// Address: 0x112a06c88

@interface SCMapPlaceProfileV2Controller

// Property: mapPlace; attributes: T@"SCMapPlace",R,N,V_mapPlace
// Property: trayData; attributes: T@"SCMapPlaceTrayData",R,N,V_trayData
// Property: trayLifecycle; attributes: T@"<SCMapTrayLifecycle>",R,W,N,V_trayLifecycle
// Property: metricHandler; attributes: T@"SCMapPlaceProfileV2MetricHandler",R,N,V_metricHandler
// Property: onTrayPositionUpdate; attributes: T@"SCBridgeObservable",?,&,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapPlaceProfileV2Controller initWithPlaceDataProvider:valdiRuntimeProvider:circumstanceEngine:multiTrayServices:contextFactory:placeProfileScope:actionHandler:composerPlaceStoryPlayer:storyFetcher:storyPlaybackScopeExposer:storyPlaybackScopeServices:actionSheetPresenterFactory:bitmojiAvatarId:mapSession:mapLoggerProvider:mapViewServices:delegate:eventSender:basemapManager:browsingContextManager:promotedPlaceActionPublisher:]
// Type encoding: @184@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176
// Implementation: 0x104ede37c

// -[SCMapPlaceProfileV2Controller loadPlaceWithTrayData:openSource:layerSource:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x104ede84c

// -[SCMapPlaceProfileV2Controller reloadPlaceWithTrayData:openSource:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104eded30

// -[SCMapPlaceProfileV2Controller removeVisitWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104edf054

// -[SCMapPlaceProfileV2Controller handleActionSheetOptionTappedWithMetricType:providerIdentifier:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x104edf1d0

// -[SCMapPlaceProfileV2Controller placeSessionId]
// Type encoding: Q16@0:8
// Implementation: 0x104edf1d8

// -[SCMapPlaceProfileV2Controller hasMediaPin]
// Type encoding: B16@0:8
// Implementation: 0x104edf1e0

// -[SCMapPlaceProfileV2Controller boundingBox]
// Type encoding: @16@0:8
// Implementation: 0x104edf1e8

// -[SCMapPlaceProfileV2Controller placeDiscoveryViewportSessionData]
// Type encoding: @16@0:8
// Implementation: 0x104edf210

// -[SCMapPlaceProfileV2Controller trayViewController]
// Type encoding: @16@0:8
// Implementation: 0x104edf218

// -[SCMapPlaceProfileV2Controller onTrayPositionUpdatedWithTrayPosition:exitType:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x104edf240

// -[SCMapPlaceProfileV2Controller _createTrayLifecycleWithViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x104edf2f0

// -[SCMapPlaceProfileV2Controller _addFloatingExternalPlaceLinkButton]
// Type encoding: v16@0:8
// Implementation: 0x104edf42c

// -[SCMapPlaceProfileV2Controller _removeFloatingExternalPlaceLinkButton]
// Type encoding: v16@0:8
// Implementation: 0x104edf600

// -[SCMapPlaceProfileV2Controller _setTrayPosition:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104edf64c

// -[SCMapPlaceProfileV2Controller _venueProfileViewModelV2WithPlaceId:metricsData:onlyShowHeader:isPromoted:]
// Type encoding: @40@0:8@16@24B32B36
// Implementation: 0x104edf808

// -[SCMapPlaceProfileV2Controller _updateVenueProfileViewModelV2WithPlaceId:onlyShowHeader:metricsData:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x104edf900

// -[SCMapPlaceProfileV2Controller _prevViewModelForV2WithPlaceId:onlyShowHeader:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x104edf9e4

// -[SCMapPlaceProfileV2Controller _basemapDebugInfo]
// Type encoding: @16@0:8
// Implementation: 0x104edfd78

// -[SCMapPlaceProfileV2Controller _placeTrayConfigurationWithPlaceIdentifier:openSource:sourceSessionId:sourceType:viewportSessionData:layerSource:hasMediaPin:]
// Type encoding: @68@0:8@16@24@32@40@48q56B64
// Implementation: 0x104edff1c

// -[SCMapPlaceProfileV2Controller _registerLoadStateObservable]
// Type encoding: v16@0:8
// Implementation: 0x104ee0130

// -[SCMapPlaceProfileV2Controller _onLoadStateChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ee0268

// -[SCMapPlaceProfileV2Controller _setupVenueProfileV2ContextWithConfiguration:]
// Type encoding: @24@0:8@16
// Implementation: 0x104ee0790

// -[SCMapPlaceProfileV2Controller _sessionIdsHolderObservable]
// Type encoding: @16@0:8
// Implementation: 0x104ee09f0

// -[SCMapPlaceProfileV2Controller onVenueLoadStateChangedWithState:]
// Type encoding: v20@0:8i16
// Implementation: 0x104ee0a38

// -[SCMapPlaceProfileV2Controller onVenueLoadedWithName:lat:lng:boundingBox:categoryIconUrl:kind:analyticsData:placePivots:placeLoyaltyData:]
// Type encoding: v88@0:8@16d24d32@40@48@56@64@72@80
// Implementation: 0x104ee0a3c

// -[SCMapPlaceProfileV2Controller onTrayPositionUpdate]
// Type encoding: @16@0:8
// Implementation: 0x104ee0e40

// -[SCMapPlaceProfileV2Controller getPrefetchedRankedStoryPlaylistForPlaceID:]
// Type encoding: @24@0:8@16
// Implementation: 0x104ee0e48

// -[SCMapPlaceProfileV2Controller shouldRetainInstanceWhenMarshalling]
// Type encoding: B16@0:8
// Implementation: 0x104ee0f00

// -[SCMapPlaceProfileV2Controller _logMapPlaceProfileReadyWithAnalyticsData:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ee0f08

// -[SCMapPlaceProfileV2Controller _prefetchPlaylist:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ee0fb4

// -[SCMapPlaceProfileV2Controller metricHandler]
// Type encoding: @16@0:8
// Implementation: 0x104ee0fc0

// -[SCMapPlaceProfileV2Controller trayLifecycle]
// Type encoding: @16@0:8
// Implementation: 0x104ee0fc8

// -[SCMapPlaceProfileV2Controller mapPlace]
// Type encoding: @16@0:8
// Implementation: 0x104ee0fe0

// -[SCMapPlaceProfileV2Controller trayData]
// Type encoding: @16@0:8
// Implementation: 0x104ee0fe8

// -[SCMapPlaceProfileV2Controller .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104ee0ff0

@end
