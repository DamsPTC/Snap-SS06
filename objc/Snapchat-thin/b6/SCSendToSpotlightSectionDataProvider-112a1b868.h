// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSendToSpotlightSectionDataProvider
// Superclass: NSObject
// Address: 0x112a1b868

@interface SCSendToSpotlightSectionDataProvider

// Property: dataProviderDelegate; attributes: T@"<SCSectionDataProvidingDelegate>",W,N,V_dataProviderDelegate
// Property: sectionDataModel; attributes: T@"NSObject<NSCopying>",C,N,V_sectionDataModel
// Property: updateQueuePerformer; attributes: T@"<SCPerforming>",&,N,V_updateQueuePerformer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSendToSpotlightSectionDataProvider initWithCircumstanceEngine:eventHandler:imageDownloader:sectionDataSource:sendToTracker:topicTracker:topicRequester:topicCarouselViewProvider:snapProUserProfileIdProvider:uiContainer:viewModelGenerator:placeSearchViewProvider:spotlightPlaceTagsLogger:placeTagCarouselViewProvider:placeTagsTracker:spotlightStoryObservableRepository:snapCaptureLocation:contentConfiguration:storyConfiguration:sendToExperimentConfiguration:renderingTracker:]
// Type encoding: @184@0:8@16@24@32@40@48@56@64@72@80@88@?96@104@112@120@128@136@144@152@160@168@176
// Implementation: 0x10514235c

// -[SCSendToSpotlightSectionDataProvider addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105142a1c

// -[SCSendToSpotlightSectionDataProvider removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105142a24

// -[SCSendToSpotlightSectionDataProvider setUpdateQueuePerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105142a2c

// -[SCSendToSpotlightSectionDataProvider setUp]
// Type encoding: v16@0:8
// Implementation: 0x105142aa0

// -[SCSendToSpotlightSectionDataProvider tearDown]
// Type encoding: v16@0:8
// Implementation: 0x105142d38

// -[SCSendToSpotlightSectionDataProvider dataLoadingStatus]
// Type encoding: q16@0:8
// Implementation: 0x105142d40

// -[SCSendToSpotlightSectionDataProvider numberOfItemsInSection:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x105142d48

// -[SCSendToSpotlightSectionDataProvider containerCellViewModelsForIndexPaths:]
// Type encoding: @24@0:8@16
// Implementation: 0x105142d4c

// -[SCSendToSpotlightSectionDataProvider contentCellClassesByReuseIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105142d50

// -[SCSendToSpotlightSectionDataProvider setSectionDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105142eb0

// -[SCSendToSpotlightSectionDataProvider configurationBlocksByReuseIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1051430fc

// -[SCSendToSpotlightSectionDataProvider _resetSpotlightCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x105143478

// -[SCSendToSpotlightSectionDataProvider _postingHintObservableWithPlaceTagsTracker:]
// Type encoding: @24@0:8@16
// Implementation: 0x105143908

// -[SCSendToSpotlightSectionDataProvider _shouldShowAddSoundError]
// Type encoding: B16@0:8
// Implementation: 0x105143950

// -[SCSendToSpotlightSectionDataProvider setSelectionStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x105143964

// -[SCSendToSpotlightSectionDataProvider _updateContainerViewModels]
// Type encoding: v16@0:8
// Implementation: 0x1051439e8

// -[SCSendToSpotlightSectionDataProvider computeSideBySideState:]
// Type encoding: q24@0:8@16
// Implementation: 0x105144150

// -[SCSendToSpotlightSectionDataProvider _cellReuseIdentifierForSelectionStoryType:]
// Type encoding: @24@0:8q16
// Implementation: 0x105144478

// -[SCSendToSpotlightSectionDataProvider _setItemToSelectionStateMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051444d8

// -[SCSendToSpotlightSectionDataProvider _setItemToSelectionStateMapForSideBySide:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051444e0

// -[SCSendToSpotlightSectionDataProvider _containerCellViewModelForSelectionStory:index:cellReuseIdentifier:isSelected:twoPerRowStyle:showPlaceTagCarousel:count:leadingAccessoryImage:]
// Type encoding: @68@0:8@16Q24@32B40B44B48Q52@60
// Implementation: 0x105144504

// -[SCSendToSpotlightSectionDataProvider _onNextSendToEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105144884

// -[SCSendToSpotlightSectionDataProvider _canCreateHighlight]
// Type encoding: B16@0:8
// Implementation: 0x105144a50

// -[SCSendToSpotlightSectionDataProvider _numberOfItemsInSection]
// Type encoding: Q16@0:8
// Implementation: 0x105144aa8

// -[SCSendToSpotlightSectionDataProvider _numberOfItemsInSectionForSideBySide]
// Type encoding: Q16@0:8
// Implementation: 0x105144b20

// -[SCSendToSpotlightSectionDataProvider _numberOfSpotlightItemsInSectionFromViewModel:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105144cbc

// -[SCSendToSpotlightSectionDataProvider _numberOfSnapMapItemsInSectionFromViewModel:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105144d18

// -[SCSendToSpotlightSectionDataProvider _numberOfSnapMapItemsInSectionFromIsSelected:]
// Type encoding: Q20@0:8B16
// Implementation: 0x105144e90

// -[SCSendToSpotlightSectionDataProvider _configureListCollectionViewCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x105144ef0

// -[SCSendToSpotlightSectionDataProvider _configureCarouselCollectionViewCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x105144f60

// -[SCSendToSpotlightSectionDataProvider _createHighlightViewCellViewModel:]
// Type encoding: @20@0:8B16
// Implementation: 0x105145014

// -[SCSendToSpotlightSectionDataProvider _configurePlaceTagCarouselCollectionViewCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x105145184

// -[SCSendToSpotlightSectionDataProvider getSaveToProfileDefaultToggleValue]
// Type encoding: B16@0:8
// Implementation: 0x10514520c

// -[SCSendToSpotlightSectionDataProvider _setShouldAutoApprovalSpotlightReplies:]
// Type encoding: v20@0:8B16
// Implementation: 0x10514524c

// -[SCSendToSpotlightSectionDataProvider _setShouldAllowSpotlightRemixing:]
// Type encoding: v20@0:8B16
// Implementation: 0x105145254

// -[SCSendToSpotlightSectionDataProvider _setShouldCreateHighlight:]
// Type encoding: v20@0:8B16
// Implementation: 0x10514525c

// -[SCSendToSpotlightSectionDataProvider _spotlightContainerCellViewModelsFromNumberOfItemsInSection]
// Type encoding: @16@0:8
// Implementation: 0x105145264

// -[SCSendToSpotlightSectionDataProvider _snapMapContainerCellViewModelsFromNumberOfItemsInSection]
// Type encoding: @16@0:8
// Implementation: 0x105145800

// -[SCSendToSpotlightSectionDataProvider _containerCellViewModelsFromNumberOfItemsInSectionForIndexPaths:]
// Type encoding: @24@0:8@16
// Implementation: 0x105145a4c

// -[SCSendToSpotlightSectionDataProvider containerViewModelForSelectionStoryType:]
// Type encoding: @24@0:8q16
// Implementation: 0x105145ca8

// -[SCSendToSpotlightSectionDataProvider _reuseIdentifierMatchesSelectionStoryType:selectionStoryType:]
// Type encoding: B32@0:8@16q24
// Implementation: 0x105145d84

// -[SCSendToSpotlightSectionDataProvider _createTopicCarouselViewController]
// Type encoding: @16@0:8
// Implementation: 0x105145e20

// -[SCSendToSpotlightSectionDataProvider _updateSpotlightPlaceTagOnSelectionStateChange]
// Type encoding: v16@0:8
// Implementation: 0x105145fa0

// -[SCSendToSpotlightSectionDataProvider _useFullyRoundedCornersStyle]
// Type encoding: B16@0:8
// Implementation: 0x10514609c

// -[SCSendToSpotlightSectionDataProvider _handleOurStoryPlaceTagChanges:isSelected:ourStoryIndex:]
// Type encoding: v36@0:8@16B24Q28
// Implementation: 0x1051460bc

// -[SCSendToSpotlightSectionDataProvider _selectionStoriesHasSnapMap:]
// Type encoding: B24@0:8@16
// Implementation: 0x105146170

// -[SCSendToSpotlightSectionDataProvider dataProviderDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105146368

// -[SCSendToSpotlightSectionDataProvider setDataProviderDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105146380

// -[SCSendToSpotlightSectionDataProvider sectionDataModel]
// Type encoding: @16@0:8
// Implementation: 0x10514638c

// -[SCSendToSpotlightSectionDataProvider updateQueuePerformer]
// Type encoding: @16@0:8
// Implementation: 0x105146394

// -[SCSendToSpotlightSectionDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10514639c

// +[SCSendToSpotlightSectionDataProvider announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105142a10

@end
