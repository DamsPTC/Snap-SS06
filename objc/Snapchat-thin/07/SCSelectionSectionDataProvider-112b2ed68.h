// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSelectionSectionDataProvider
// Superclass: NSObject
// Address: 0x112b2ed68

@interface SCSelectionSectionDataProvider

// Property: dataProviderDelegate; attributes: T@"<SCSectionDataProvidingDelegate>",W,N,V_dataProviderDelegate
// Property: selectionTracker; attributes: T@"<SCSelectionTracking>",R,N,V_selectionTracker
// Property: observationQueue; attributes: T@"NSOperationQueue",R,N,V_observationQueue
// Property: subscription; attributes: T@"SCDisposableObserverLifecycle",R,N,V_subscription
// Property: containerCellViewModels; attributes: T@"NSArray",C,N,V_containerCellViewModels
// Property: dataLoadingStatus; attributes: Tq,N,V_dataLoadingStatus
// Property: sectionDataModel; attributes: T@"NSObject<NSCopying>",C,N,V_sectionDataModel
// Property: updateQueuePerformer; attributes: T@"<SCPerforming>",&,N,V_updateQueuePerformer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSelectionSectionDataProvider initWithSelectionTracker:selectionStateViewModelGenerator:sendToExperimentConfiguration:]
// Type encoding: @40@0:8@16@?24@32
// Implementation: 0x106c9b80c

// -[SCSelectionSectionDataProvider addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c9b93c

// -[SCSelectionSectionDataProvider removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c9b944

// -[SCSelectionSectionDataProvider setUpdateQueuePerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c9b94c

// -[SCSelectionSectionDataProvider setUp]
// Type encoding: v16@0:8
// Implementation: 0x106c9b9c0

// -[SCSelectionSectionDataProvider tearDown]
// Type encoding: v16@0:8
// Implementation: 0x106c9bb18

// -[SCSelectionSectionDataProvider numberOfItemsInSection:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x106c9bb20

// -[SCSelectionSectionDataProvider containerCellViewModelsForIndexPaths:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c9bb28

// -[SCSelectionSectionDataProvider contentCellClassesByReuseIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x106c9bcc4

// -[SCSelectionSectionDataProvider setSectionDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c9bccc

// -[SCSelectionSectionDataProvider configurationBlocksByReuseIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x106c9bcd0

// -[SCSelectionSectionDataProvider setSelectionIdentifierToIndexMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c9bcd8

// -[SCSelectionSectionDataProvider _setItemToSelectionStateMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c9bd08

// -[SCSelectionSectionDataProvider _logFailureForSectionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c9bf14

// -[SCSelectionSectionDataProvider sectionDataModel]
// Type encoding: @16@0:8
// Implementation: 0x106c9bf24

// -[SCSelectionSectionDataProvider updateQueuePerformer]
// Type encoding: @16@0:8
// Implementation: 0x106c9bf2c

// -[SCSelectionSectionDataProvider dataProviderDelegate]
// Type encoding: @16@0:8
// Implementation: 0x106c9bf34

// -[SCSelectionSectionDataProvider setDataProviderDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c9bf4c

// -[SCSelectionSectionDataProvider selectionTracker]
// Type encoding: @16@0:8
// Implementation: 0x106c9bf58

// -[SCSelectionSectionDataProvider observationQueue]
// Type encoding: @16@0:8
// Implementation: 0x106c9bf60

// -[SCSelectionSectionDataProvider subscription]
// Type encoding: @16@0:8
// Implementation: 0x106c9bf68

// -[SCSelectionSectionDataProvider containerCellViewModels]
// Type encoding: @16@0:8
// Implementation: 0x106c9bf70

// -[SCSelectionSectionDataProvider setContainerCellViewModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c9bf78

// -[SCSelectionSectionDataProvider dataLoadingStatus]
// Type encoding: q16@0:8
// Implementation: 0x106c9bf80

// -[SCSelectionSectionDataProvider setDataLoadingStatus:]
// Type encoding: v24@0:8q16
// Implementation: 0x106c9bf88

// -[SCSelectionSectionDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106c9bf90

// +[SCSelectionSectionDataProvider announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x106c9b930

@end
