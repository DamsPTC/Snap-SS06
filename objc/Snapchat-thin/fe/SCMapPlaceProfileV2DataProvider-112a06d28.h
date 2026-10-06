// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapPlaceProfileV2DataProvider
// Superclass: NSObject
// Address: 0x112a06d28

@interface SCMapPlaceProfileV2DataProvider

// Property: loadStateObservable; attributes: T@"SCObservable",R,N
// Property: placeProfileData; attributes: T@"SCCPlaceProfileData",R,N,V_placeProfileData
// Property: componentSections; attributes: T@"NSArray",R,N,V_componentSections
// Property: placePivots; attributes: T@"NSArray",R,N,V_placePivots
// Property: businessProfileData; attributes: T@"SCCBusinessProfileData",R,N,V_businessProfileData
// Property: venueETAData; attributes: T@"SCMapPlaceProfileV2ETAData",R,N,V_venueETAData
// Property: storyCarouselData; attributes: T@"SCMapPlaceProfileV2StoryCarouselData",R,N,V_storyCarouselData
// Property: rankedStorySequences; attributes: T@"NSArray",R,N,V_rankedStorySequences
// Property: numOfRankedSnaps; attributes: Td,R,N,V_numOfRankedSnaps
// Property: storyCarouselLoaded; attributes: TB,R,N,V_storyCarouselLoaded
// Property: googlePlaceProfileDataObservable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapPlaceProfileV2DataProvider initWithMapPlacesContentServices:previewStoryFetcher:mapNavigationRouteFetcher:storyFetcher:profilesProvider:locationProvider:circumstanceEngine:mapPeopleFriendsProvider:mapInstance:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x104ee2bb4

// -[SCMapPlaceProfileV2DataProvider fetchPlaceProfileForPlaceId:placeSessionId:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x104ee2e90

// -[SCMapPlaceProfileV2DataProvider removeVisitForPlaceID:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104ee317c

// -[SCMapPlaceProfileV2DataProvider googlePlaceProfileDataObservable]
// Type encoding: @16@0:8
// Implementation: 0x104ee3394

// -[SCMapPlaceProfileV2DataProvider _resetStoredData]
// Type encoding: v16@0:8
// Implementation: 0x104ee34f0

// -[SCMapPlaceProfileV2DataProvider _fetchPlacePivotsForPlaceIds:observer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104ee3564

// -[SCMapPlaceProfileV2DataProvider _fetchInitialPlaceProfileDataForPlaceId:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ee3678

// -[SCMapPlaceProfileV2DataProvider _fetchAsyncPlaceProfileDataForPlaceInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ee3ae4

// -[SCMapPlaceProfileV2DataProvider _prefetchRankedStoriesForPlaceId:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ee3e08

// -[SCMapPlaceProfileV2DataProvider _fetchRankedStoryThumbnailsForPlaceId:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ee3f8c

// -[SCMapPlaceProfileV2DataProvider _createStoryCarouselDataObservableForPlaceID:]
// Type encoding: @24@0:8@16
// Implementation: 0x104ee4128

// -[SCMapPlaceProfileV2DataProvider _createObservableForPlaceAnnotationsForPlaceId:]
// Type encoding: @24@0:8@16
// Implementation: 0x104ee429c

// -[SCMapPlaceProfileV2DataProvider _createObservableForRankedPreviewDataForPlaceId:]
// Type encoding: @24@0:8@16
// Implementation: 0x104ee4474

// -[SCMapPlaceProfileV2DataProvider _createObservableForPlaceComponentsData]
// Type encoding: v16@0:8
// Implementation: 0x104ee45ec

// -[SCMapPlaceProfileV2DataProvider _createObservableForGooglePlaceDataWithPlaceID:]
// Type encoding: @24@0:8@16
// Implementation: 0x104ee4754

// -[SCMapPlaceProfileV2DataProvider _fetchGooglePlacePhotosForPlaceID:googlePlaceData:observer:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104ee49d8

// -[SCMapPlaceProfileV2DataProvider loadStateObservable]
// Type encoding: @16@0:8
// Implementation: 0x104ee4b74

// -[SCMapPlaceProfileV2DataProvider _publishLoadState:]
// Type encoding: v20@0:8i16
// Implementation: 0x104ee4b9c

// -[SCMapPlaceProfileV2DataProvider onPlaceComponentVisibleWithPlaceId:sectionIndex:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x104ee4bf0

// -[SCMapPlaceProfileV2DataProvider pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x104ee4c00

// -[SCMapPlaceProfileV2DataProvider placeProfileData]
// Type encoding: @16@0:8
// Implementation: 0x104ee4c0c

// -[SCMapPlaceProfileV2DataProvider componentSections]
// Type encoding: @16@0:8
// Implementation: 0x104ee4c14

// -[SCMapPlaceProfileV2DataProvider placePivots]
// Type encoding: @16@0:8
// Implementation: 0x104ee4c1c

// -[SCMapPlaceProfileV2DataProvider businessProfileData]
// Type encoding: @16@0:8
// Implementation: 0x104ee4c24

// -[SCMapPlaceProfileV2DataProvider venueETAData]
// Type encoding: @16@0:8
// Implementation: 0x104ee4c2c

// -[SCMapPlaceProfileV2DataProvider rankedStorySequences]
// Type encoding: @16@0:8
// Implementation: 0x104ee4c34

// -[SCMapPlaceProfileV2DataProvider numOfRankedSnaps]
// Type encoding: d16@0:8
// Implementation: 0x104ee4c3c

// -[SCMapPlaceProfileV2DataProvider storyCarouselData]
// Type encoding: @16@0:8
// Implementation: 0x104ee4c44

// -[SCMapPlaceProfileV2DataProvider storyCarouselLoaded]
// Type encoding: B16@0:8
// Implementation: 0x104ee4c4c

// -[SCMapPlaceProfileV2DataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104ee4c54

@end
