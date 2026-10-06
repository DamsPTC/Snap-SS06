// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSelectionStorySectionDataProvider
// Superclass: NSObject
// Address: 0x112aa1a58

@interface SCSelectionStorySectionDataProvider

// Property: sectionDataTrackerObservable; attributes: T@"SCObservable",R,N,V_dataReceivedEventSubject
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: dataProviderDelegate; attributes: T@"<SCSectionDataProvidingDelegate>",W,N,V_dataProviderDelegate
// Property: sectionDataModel; attributes: T@"NSObject<NSCopying>",C,N,V_sectionDataModel
// Property: updateQueuePerformer; attributes: T@"<SCPerforming>",&,N,V_updateQueuePerformer

// -[SCSelectionStorySectionDataProvider initWithSectionIdentifier:dataSource:placeTagCarouselViewProvider:placeTagsTracker:viewModelGenerator:sendToTracker:imageDownloader:sectionLayout:circumstanceEngine:sendToExperimentConfiguration:sendToUIConfiguration:selectionStoryRepository:renderingTracker:subscriptionInfoProvider:imageCacheDelegate:showSendToTray:avatarFactory:crossPostingSelectionTracker:]
// Type encoding: @156@0:8@16@24@32@40@?48@56@64Q72@80@88@96@104@112@120@128B136@140@148
// Implementation: 0x105e3b5e0

// -[SCSelectionStorySectionDataProvider addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e3bbb4

// -[SCSelectionStorySectionDataProvider removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e3bbbc

// -[SCSelectionStorySectionDataProvider setUpdateQueuePerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e3bbc4

// -[SCSelectionStorySectionDataProvider setUp]
// Type encoding: v16@0:8
// Implementation: 0x105e3bc38

// -[SCSelectionStorySectionDataProvider tearDown]
// Type encoding: v16@0:8
// Implementation: 0x105e3bfd8

// -[SCSelectionStorySectionDataProvider dataLoadingStatus]
// Type encoding: q16@0:8
// Implementation: 0x105e3bfe0

// -[SCSelectionStorySectionDataProvider numberOfItemsInSection:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x105e3bfe8

// -[SCSelectionStorySectionDataProvider containerCellViewModelsForIndexPaths:]
// Type encoding: @24@0:8@16
// Implementation: 0x105e3c06c

// -[SCSelectionStorySectionDataProvider contentCellClassesByReuseIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105e3c380

// -[SCSelectionStorySectionDataProvider setSectionDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e3c484

// -[SCSelectionStorySectionDataProvider _selectionStoryObservableForSectionIdentifier:query:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105e3ca00

// -[SCSelectionStorySectionDataProvider configurationBlocksByReuseIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105e3ca84

// -[SCSelectionStorySectionDataProvider _setExpandedStorySnapchattersCount:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e3ce4c

// -[SCSelectionStorySectionDataProvider _onNextEligibleCrossPostingToSpotlightIdentifiers:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e3ce78

// -[SCSelectionStorySectionDataProvider _setSelectionStories:sectionIdentifier:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105e3d1a0

// -[SCSelectionStorySectionDataProvider _containerCellViewModelFromSelectionStory:identifierToStateMap:index:count:]
// Type encoding: @48@0:8@16@24Q32Q40
// Implementation: 0x105e3d3f4

// -[SCSelectionStorySectionDataProvider _handleCustomStoryTitleUpdateIfNecessary:isSelected:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105e3d624

// -[SCSelectionStorySectionDataProvider _handleOurStoryPlaceTagChanges:isSelected:ourStoryIndex:]
// Type encoding: v36@0:8@16B24Q28
// Implementation: 0x105e3d6a4

// -[SCSelectionStorySectionDataProvider _handleSelectedStoryTitleUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e3d800

// -[SCSelectionStorySectionDataProvider _setItemToSelectionStateMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e3d848

// -[SCSelectionStorySectionDataProvider _containerCellViewModelForSelectionStory:index:isSelected:count:]
// Type encoding: @44@0:8@16Q24B32Q36
// Implementation: 0x105e3dea0

// -[SCSelectionStorySectionDataProvider _onNextSendToEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e3e104

// -[SCSelectionStorySectionDataProvider _configureRecipientCollectionViewCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e3e2d0

// -[SCSelectionStorySectionDataProvider _configureCarouselCollectionViewCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e3e34c

// -[SCSelectionStorySectionDataProvider _configurePlaceTagCarouselCollectionViewCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e3e3e4

// -[SCSelectionStorySectionDataProvider _configureViewMoreCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e3e46c

// -[SCSelectionStorySectionDataProvider _onTapViewMore]
// Type encoding: v16@0:8
// Implementation: 0x105e3e5a0

// -[SCSelectionStorySectionDataProvider _containerCellViewModelForIndexPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x105e3e5e0

// -[SCSelectionStorySectionDataProvider _containerCellViewMoreCell]
// Type encoding: @16@0:8
// Implementation: 0x105e3e744

// -[SCSelectionStorySectionDataProvider dataProviderDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105e3e898

// -[SCSelectionStorySectionDataProvider setDataProviderDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e3e8b0

// -[SCSelectionStorySectionDataProvider sectionDataModel]
// Type encoding: @16@0:8
// Implementation: 0x105e3e8bc

// -[SCSelectionStorySectionDataProvider updateQueuePerformer]
// Type encoding: @16@0:8
// Implementation: 0x105e3e8c4

// -[SCSelectionStorySectionDataProvider sectionDataTrackerObservable]
// Type encoding: @16@0:8
// Implementation: 0x105e3e8cc

// -[SCSelectionStorySectionDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105e3e8d4

// +[SCSelectionStorySectionDataProvider announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105e3bba8

@end
