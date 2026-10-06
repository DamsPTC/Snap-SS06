// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapEditorFilterPlugin
// Superclass: NSObject
// Address: 0x112a0fd38

@interface SCSnapEditorFilterPlugin

// Property: appliedLensNameObservable; attributes: T@"SCObservable",R,N
// Property: appliedLensVenueObservable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapEditorFilterPlugin initWithFilterDataProvider:swipeFilterView:previewABProvider:filterArranger:valdiRuntimeProvider:snapEditorCarouselFeature:lensFetcher:lensFetchObservable:userLocationServices:deckContainerFactory:snapDocEditor:lensProcessingSharedServices:lensProcessingLaunchDataServices:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112
// Implementation: 0x104fe661c

// -[SCSnapEditorFilterPlugin populateDependencies:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fe6d30

// -[SCSnapEditorFilterPlugin appliedLensNameObservable]
// Type encoding: @16@0:8
// Implementation: 0x104fe79a8

// -[SCSnapEditorFilterPlugin appliedLensVenueObservable]
// Type encoding: @16@0:8
// Implementation: 0x104fe79d0

// -[SCSnapEditorFilterPlugin resetAppliedLensVenue]
// Type encoding: v16@0:8
// Implementation: 0x104fe79f8

// -[SCSnapEditorFilterPlugin _setupApplyFiltersOnCarouselSettleSubscription]
// Type encoding: v16@0:8
// Implementation: 0x104fe7a3c

// -[SCSnapEditorFilterPlugin _carouselItemForFilterItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x104fe7d50

// -[SCSnapEditorFilterPlugin _resetFilterCarousel]
// Type encoding: v16@0:8
// Implementation: 0x104fe7e38

// -[SCSnapEditorFilterPlugin injectLensWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fe7e44

// -[SCSnapEditorFilterPlugin handleSelectedItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fe8070

// -[SCSnapEditorFilterPlugin _geofilterForFilterId:]
// Type encoding: @24@0:8@16
// Implementation: 0x104fe88a0

// -[SCSnapEditorFilterPlugin _ctItemInstanceForFilterId:]
// Type encoding: @24@0:8@16
// Implementation: 0x104fe89a0

// -[SCSnapEditorFilterPlugin _scaleForGeoFilterScaleSetting:]
// Type encoding: i24@0:8q16
// Implementation: 0x104fe8c84

// -[SCSnapEditorFilterPlugin _positionForGeoFilterPositionSetting:]
// Type encoding: i24@0:8Q16
// Implementation: 0x104fe8ca0

// -[SCSnapEditorFilterPlugin _selectFilterWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fe8cc4

// -[SCSnapEditorFilterPlugin _setupFilterSwipeSubscription]
// Type encoding: v16@0:8
// Implementation: 0x104fe8d20

// -[SCSnapEditorFilterPlugin _updateFiltersWithMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fe9048

// -[SCSnapEditorFilterPlugin _isLensAlreadyPresentInCarousel:]
// Type encoding: B24@0:8@16
// Implementation: 0x104fe90bc

// -[SCSnapEditorFilterPlugin _injectLensWithIdIfNeeded:]
// Type encoding: @24@0:8@16
// Implementation: 0x104fe9114

// -[SCSnapEditorFilterPlugin _setCarouselHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x104fe94b4

// -[SCSnapEditorFilterPlugin turnOnFiltersButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x104fe94f0

// -[SCSnapEditorFilterPlugin permissionsManagerWantsToPresentPermissionsPrompt:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fe961c

// -[SCSnapEditorFilterPlugin permissionsManagerWantsToDismissPermissionsPrompt:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104fe96a8

// -[SCSnapEditorFilterPlugin updateVenueWithLensId:venueId:venueName:venueIdsListed:normalizedCenter:normalizedSize:rotation:]
// Type encoding: v72@0:8@16@24@32@40@48@56@64
// Implementation: 0x104fe973c

// -[SCSnapEditorFilterPlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104fe9ae0

@end
