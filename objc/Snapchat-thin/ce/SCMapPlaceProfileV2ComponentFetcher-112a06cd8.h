// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapPlaceProfileV2ComponentFetcher
// Superclass: NSObject
// Address: 0x112a06cd8

@interface SCMapPlaceProfileV2ComponentFetcher

// Property: currentPlaceId; attributes: T@"NSString",R,N,V_currentPlaceId
// Property: componentSectionsUpdateObservable; attributes: T@"SCObservable",R,N

// -[SCMapPlaceProfileV2ComponentFetcher initWithPlaceProfileDataFetcher:storyFetcher:placeDiscoveryDataFetcher:circumstanceEngine:mapInstance:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x104ee1194

// -[SCMapPlaceProfileV2ComponentFetcher dealloc]
// Type encoding: v16@0:8
// Implementation: 0x104ee12e8

// -[SCMapPlaceProfileV2ComponentFetcher componentSectionsUpdateObservable]
// Type encoding: @16@0:8
// Implementation: 0x104ee1330

// -[SCMapPlaceProfileV2ComponentFetcher onPlaceComponentVisibleWithPlaceId:sectionIndex:requestId:]
// Type encoding: v40@0:8@16d24@32
// Implementation: 0x104ee1358

// -[SCMapPlaceProfileV2ComponentFetcher fetchPlaceComponentsForPlaceId:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ee1868

// -[SCMapPlaceProfileV2ComponentFetcher _fetchInitialDataForComponentSections:parentPlaceId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104ee1ad4

// -[SCMapPlaceProfileV2ComponentFetcher _fetchInitialDataForComponentSection:sectionIndex:parentPlaceId:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x104ee1b8c

// -[SCMapPlaceProfileV2ComponentFetcher _fetchPlacePivotsForPlaceIds:observer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104ee2040

// -[SCMapPlaceProfileV2ComponentFetcher _getCombinedInitialDataObservableForSection:parentPlaceId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104ee213c

// -[SCMapPlaceProfileV2ComponentFetcher _createPreviewThumbnailObservableForPlaceID:]
// Type encoding: @24@0:8@16
// Implementation: 0x104ee2464

// -[SCMapPlaceProfileV2ComponentFetcher _createStoryCarouselDataObservableForPlaceID:requestID:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104ee25d4

// -[SCMapPlaceProfileV2ComponentFetcher _handleUpdateThumbnailsDataForPlaceId:sectionIndex:thumbnailsData:parentPlaceId:]
// Type encoding: v48@0:8@16Q24@32@40
// Implementation: 0x104ee276c

// -[SCMapPlaceProfileV2ComponentFetcher _updatePlaceComponentsWithSection:sectionIndex:parentPlaceId:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x104ee2a44

// -[SCMapPlaceProfileV2ComponentFetcher currentPlaceId]
// Type encoding: @16@0:8
// Implementation: 0x104ee2b34

// -[SCMapPlaceProfileV2ComponentFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104ee2b3c

@end
