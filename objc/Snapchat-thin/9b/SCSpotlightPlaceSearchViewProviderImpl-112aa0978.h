// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightPlaceSearchViewProviderImpl
// Superclass: NSObject
// Address: 0x112aa0978

@interface SCSpotlightPlaceSearchViewProviderImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpotlightPlaceSearchViewProviderImpl initWithValdiRuntimeProvider:placeSearchGrpcService:spotlightPlaceTagsLogger:composerBlizzardLogger:placeProfileDataFetcher:circumstanceEngine:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x105dfeb34

// -[SCSpotlightPlaceSearchViewProviderImpl handleActionWithSender:actionModel:fromSourceView:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x105dfecc0

// -[SCSpotlightPlaceSearchViewProviderImpl createSpotlightPlaceSearchViewForLocation:tagPlaceHandler:removePlaceHandler:]
// Type encoding: @40@0:8@16@?24@?32
// Implementation: 0x105dfecc8

// -[SCSpotlightPlaceSearchViewProviderImpl createSpotlightPlaceTagCarouselWithActionHandler:location:showRemixLabel:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x105dfede8

// -[SCSpotlightPlaceSearchViewProviderImpl _createSpotlightPlaceTagsContextWithTagPlaceHandler:removePlaceHandler:placeTagsObservable:capturedLocation:]
// Type encoding: @48@0:8@?16@?24@32@40
// Implementation: 0x105dfee98

// -[SCSpotlightPlaceSearchViewProviderImpl _fetchNearbyPlacesFromLocation:dataSubject:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105dff540

// -[SCSpotlightPlaceSearchViewProviderImpl _fetchNearbyPlaceTagsForCarouselWithLocation:dataSubject:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105dffa54

// -[SCSpotlightPlaceSearchViewProviderImpl _getFormattedDistanceStringFromLocation:toLocation:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105dffc6c

// -[SCSpotlightPlaceSearchViewProviderImpl _handleSpotlightPlaceTaggedForPlaceTagItem:searchSessionId:tagPlaceHandler:dismissSearch:capturedLocation:placesListed:]
// Type encoding: v60@0:8@16@24@?32B40@44@52
// Implementation: 0x105dffcf0

// -[SCSpotlightPlaceSearchViewProviderImpl _handleSpotlightPlaceTagRemovedWithRemovePlaceHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105e0002c

// -[SCSpotlightPlaceSearchViewProviderImpl _getAutoselectedPlaceId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105e00150

// -[SCSpotlightPlaceSearchViewProviderImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105e00274

@end
