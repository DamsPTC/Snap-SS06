// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSelectionLastSnapSectionDataProvider
// Superclass: NSObject
// Address: 0x112aa1cd8

@interface SCSelectionLastSnapSectionDataProvider

// Property: sectionDataTrackerObservable; attributes: T@"SCObservable",R,N,V_dataReceivedEventSubject
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: dataProviderDelegate; attributes: T@"<SCSectionDataProvidingDelegate>",W,N,V_dataProviderDelegate
// Property: sectionDataModel; attributes: T@"NSObject<NSCopying>",C,N,V_sectionDataModel
// Property: updateQueuePerformer; attributes: T@"<SCPerforming>",&,N,V_updateQueuePerformer

// -[SCSelectionLastSnapSectionDataProvider addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e42934

// -[SCSelectionLastSnapSectionDataProvider removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e4293c

// -[SCSelectionLastSnapSectionDataProvider initWithDataSource:sectionIdentifier:selectionTracker:isCondensed:sendToExperimentConfiguration:sendToUIConfiguration:renderingTracker:]
// Type encoding: @68@0:8@16@24@32B40@44@52@60
// Implementation: 0x105e42944

// -[SCSelectionLastSnapSectionDataProvider setUpdateQueuePerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e42bcc

// -[SCSelectionLastSnapSectionDataProvider setUp]
// Type encoding: v16@0:8
// Implementation: 0x105e42c40

// -[SCSelectionLastSnapSectionDataProvider tearDown]
// Type encoding: v16@0:8
// Implementation: 0x105e42d84

// -[SCSelectionLastSnapSectionDataProvider setSectionDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e42d8c

// -[SCSelectionLastSnapSectionDataProvider dataLoadingStatus]
// Type encoding: q16@0:8
// Implementation: 0x105e42e74

// -[SCSelectionLastSnapSectionDataProvider numberOfItemsInSection:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x105e42e7c

// -[SCSelectionLastSnapSectionDataProvider containerCellViewModels]
// Type encoding: @16@0:8
// Implementation: 0x105e42e84

// -[SCSelectionLastSnapSectionDataProvider containerCellViewModelsForIndexPaths:]
// Type encoding: @24@0:8@16
// Implementation: 0x105e42eac

// -[SCSelectionLastSnapSectionDataProvider contentCellClassesByReuseIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105e42ec4

// -[SCSelectionLastSnapSectionDataProvider _updateCellSelectedState]
// Type encoding: v16@0:8
// Implementation: 0x105e42f40

// -[SCSelectionLastSnapSectionDataProvider _setCellIsSelected:]
// Type encoding: v20@0:8B16
// Implementation: 0x105e432ac

// -[SCSelectionLastSnapSectionDataProvider dataProviderDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105e433bc

// -[SCSelectionLastSnapSectionDataProvider setDataProviderDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e433d4

// -[SCSelectionLastSnapSectionDataProvider updateQueuePerformer]
// Type encoding: @16@0:8
// Implementation: 0x105e433e0

// -[SCSelectionLastSnapSectionDataProvider sectionDataModel]
// Type encoding: @16@0:8
// Implementation: 0x105e433e8

// -[SCSelectionLastSnapSectionDataProvider sectionDataTrackerObservable]
// Type encoding: @16@0:8
// Implementation: 0x105e433f0

// -[SCSelectionLastSnapSectionDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105e433f8

// +[SCSelectionLastSnapSectionDataProvider announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105e42928

@end
