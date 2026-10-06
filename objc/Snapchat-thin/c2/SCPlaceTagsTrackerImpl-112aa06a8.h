// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlaceTagsTrackerImpl
// Superclass: SCBusinessLogic
// Address: 0x112aa06a8

@interface SCPlaceTagsTrackerImpl

// Property: delegate; attributes: T@"<SCPlaceTagsTracking>",W,N,V_delegate
// Property: allowsMultiSelection; attributes: TB,N,V_allowsMultiSelection
// Property: selectedPlaceTagIndex; attributes: TQ,R,N,V_selectedPlaceTagIndex
// Property: venueFilterOrStickerUsed; attributes: TB,N,V_venueFilterOrStickerUsed
// Property: inferredLocationPostingHintObservable; attributes: T@"SCObservable",R,N,V_inferredLocationPostingHintObservable
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPlaceTagsTrackerImpl initWithCheckInOptionFetcher:placeVisitFetcher:circumstanceEngine:grapheneMetricLogger:s2rInfoProviderRegistry:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105df8800

// -[SCPlaceTagsTrackerImpl placeTagsMetadata]
// Type encoding: @16@0:8
// Implementation: 0x105df8b14

// -[SCPlaceTagsTrackerImpl setVenueFilterOrStickerUsed:]
// Type encoding: v20@0:8B16
// Implementation: 0x105df8cb0

// -[SCPlaceTagsTrackerImpl showPlaceTagCarousel:]
// Type encoding: B20@0:8B16
// Implementation: 0x105df8d08

// -[SCPlaceTagsTrackerImpl setInitialSelectionState:]
// Type encoding: v20@0:8B16
// Implementation: 0x105df8d4c

// -[SCPlaceTagsTrackerImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105df8d98

// -[SCPlaceTagsTrackerImpl showPlaceTagCarouselObservable:]
// Type encoding: @24@0:8@16
// Implementation: 0x105df9064

// -[SCPlaceTagsTrackerImpl fetchSuggestedNearbyPlaceTags:]
// Type encoding: v24@0:8@16
// Implementation: 0x105df922c

// -[SCPlaceTagsTrackerImpl _handleHideSpotlightPostingHintIfNeededWithTaggedPlaces:]
// Type encoding: v24@0:8@16
// Implementation: 0x105df9390

// -[SCPlaceTagsTrackerImpl _constructInferredLocationPostingHintObservable]
// Type encoding: @16@0:8
// Implementation: 0x105df944c

// -[SCPlaceTagsTrackerImpl _constructSpotlightPostingHintObservable]
// Type encoding: @16@0:8
// Implementation: 0x105df9500

// -[SCPlaceTagsTrackerImpl _recordSpotlightPostingHintVisibilityWithPostingHint:]
// Type encoding: v24@0:8@16
// Implementation: 0x105df97c4

// -[SCPlaceTagsTrackerImpl _getPostingHintFromInferredLocation:]
// Type encoding: @24@0:8@16
// Implementation: 0x105df985c

// -[SCPlaceTagsTrackerImpl fetchInferredLocationForCaptureLocation:completionQueue:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105df9b0c

// -[SCPlaceTagsTrackerImpl _handleInferredLocation:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105df9c8c

// -[SCPlaceTagsTrackerImpl _resetInferredLocationWithHiddenReason:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105df9eb8

// -[SCPlaceTagsTrackerImpl viewModel]
// Type encoding: @16@0:8
// Implementation: 0x105df9f60

// -[SCPlaceTagsTrackerImpl handleAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x105df9f90

// -[SCPlaceTagsTrackerImpl _togglePlaceTagSelectionAtIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105dfa0f8

// -[SCPlaceTagsTrackerImpl _moveSelectedPlaceTagsToFront]
// Type encoding: v16@0:8
// Implementation: 0x105dfa46c

// -[SCPlaceTagsTrackerImpl _setSuggestedNearbyPlaceTags:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dfa660

// -[SCPlaceTagsTrackerImpl _resetPlaceTagsTracker]
// Type encoding: v16@0:8
// Implementation: 0x105dfa844

// -[SCPlaceTagsTrackerImpl _clearSelectedPlaceTags]
// Type encoding: v16@0:8
// Implementation: 0x105dfa8ac

// -[SCPlaceTagsTrackerImpl _ourStorySelectionStateObservable:]
// Type encoding: @24@0:8@16
// Implementation: 0x105dfaa58

// -[SCPlaceTagsTrackerImpl snapMapSelectionStateObservable]
// Type encoding: @16@0:8
// Implementation: 0x105dfad4c

// -[SCPlaceTagsTrackerImpl _handlePlaceTagActionForPlaceId:placeName:isSelected:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x105dfada4

// -[SCPlaceTagsTrackerImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x105dfae80

// -[SCPlaceTagsTrackerImpl allowsMultiSelection]
// Type encoding: B16@0:8
// Implementation: 0x105dfaea0

// -[SCPlaceTagsTrackerImpl setAllowsMultiSelection:]
// Type encoding: v20@0:8B16
// Implementation: 0x105dfaeb0

// -[SCPlaceTagsTrackerImpl selectedPlaceTagIndex]
// Type encoding: Q16@0:8
// Implementation: 0x105dfaec0

// -[SCPlaceTagsTrackerImpl venueFilterOrStickerUsed]
// Type encoding: B16@0:8
// Implementation: 0x105dfaed0

// -[SCPlaceTagsTrackerImpl inferredLocationPostingHintObservable]
// Type encoding: @16@0:8
// Implementation: 0x105dfaee0

// -[SCPlaceTagsTrackerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105dfaef0

@end
