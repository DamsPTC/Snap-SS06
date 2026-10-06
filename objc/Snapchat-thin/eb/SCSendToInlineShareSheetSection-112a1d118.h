// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSendToInlineShareSheetSection
// Superclass: NSObject
// Address: 0x112a1d118

@interface SCSendToInlineShareSheetSection

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: snapSource; attributes: T@"NSString",?,C,N
// Property: useShortCopyString; attributes: T@"SCBridgeObservable",?,&,N,V_useShortCopyString
// Property: useDeviceLevelStorage; attributes: T@"NSNumber",?,&,N,V_useDeviceLevelStorage
// Property: mediaType; attributes: T@"NSString",?,C,N
// Property: cofStore; attributes: T@"<SCComposerCOFRxStoring>",?,&,N,V_cofStore
// Property: sectionDataTrackerObservable; attributes: T@"SCObservable",R,N,V_dataReceivedEventSubject
// Property: isCompactCell; attributes: TB,?,N
// Property: layoutCalculator; attributes: T@"<SCCollectionViewSectionLayoutProviding>",?,&,N
// Property: sectionUpdateModel; attributes: T@"SCCollectionViewSectionUpdateModel",C,N,V_sectionUpdateModel
// Property: delegate; attributes: T@"<SCCollectionViewSectionDelegate>",W,N,V_delegate
// Property: dataLoadingStatus; attributes: Tq,N,V_dataLoadingStatus
// Property: dataProviderDelegate; attributes: T@"<SCSectionDataProvidingDelegate>",W,N,V_dataProviderDelegate
// Property: sectionDataModel; attributes: T@"NSObject<NSCopying>",C,N,V_sectionDataModel
// Property: updateQueuePerformer; attributes: T@"<SCPerforming>",&,N,V_updateQueuePerformer

// -[SCSendToInlineShareSheetSection addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10516feb0

// -[SCSendToInlineShareSheetSection removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10516feb8

// -[SCSendToInlineShareSheetSection didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10516fec0

// -[SCSendToInlineShareSheetSection initWithSupplementaryViewProvider:shareOptions:preSelectedShareDestination:shareOptionsOrder:selectionActionHandler:shareActionHandler:shareLogger:operationLogger:valdiRuntimeProvider:presentingUIContainer:eventSubject:grapheneRegistry:sendToExperimentConfiguration:shareSource:sendToTracker:selectionTracker:selectionBasedShareSheetEnabled:circumstanceEngine:isSelectionSection:cofStore:beginInCollapsedState:renderingTracker:]
// Type encoding: @180@0:8@16@24q32@40@48@56@64@72@80@88@96@104@112q120@128@136B144@148B156@160B168@172
// Implementation: 0x10516fec8

// -[SCSendToInlineShareSheetSection containerCellViewModelsForIndexPaths:]
// Type encoding: @24@0:8@16
// Implementation: 0x1051704a8

// -[SCSendToInlineShareSheetSection contentCellClassesByReuseIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105170544

// -[SCSendToInlineShareSheetSection setSectionDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051705c4

// -[SCSendToInlineShareSheetSection applyConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051707a8

// -[SCSendToInlineShareSheetSection collectionView:willDisplayCell:atIndexInSection:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x105170834

// -[SCSendToInlineShareSheetSection _announceCellWillDisplayEventWithEventTime:isDecelerating:isDragging:]
// Type encoding: v32@0:8d16B24B28
// Implementation: 0x105170998

// -[SCSendToInlineShareSheetSection numberOfItemsInSection:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x105170d2c

// -[SCSendToInlineShareSheetSection supplementaryViewProvider]
// Type encoding: @16@0:8
// Implementation: 0x105170d34

// -[SCSendToInlineShareSheetSection reuseCellClassesByIdentifiers]
// Type encoding: @16@0:8
// Implementation: 0x105170d5c

// -[SCSendToInlineShareSheetSection numberOfCellsInSection]
// Type encoding: Q16@0:8
// Implementation: 0x105170ddc

// -[SCSendToInlineShareSheetSection sectionInsets]
// Type encoding: @16@0:8
// Implementation: 0x105170e34

// -[SCSendToInlineShareSheetSection cellForItemAtIndexInSection:]
// Type encoding: @24@0:8Q16
// Implementation: 0x105170e6c

// -[SCSendToInlineShareSheetSection sizeForItemAtIndexInSection:withWidth:]
// Type encoding: {CGSize=dd}32@0:8Q16d24
// Implementation: 0x105170f9c

// -[SCSendToInlineShareSheetSection shareOptionClickedWithDestination:]
// Type encoding: v20@0:8i16
// Implementation: 0x105170fac

// -[SCSendToInlineShareSheetSection dismiss]
// Type encoding: v16@0:8
// Implementation: 0x10517104c

// -[SCSendToInlineShareSheetSection shouldRetainInstanceWhenMarshalling]
// Type encoding: B16@0:8
// Implementation: 0x105171050

// -[SCSendToInlineShareSheetSection pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x105171058

// -[SCSendToInlineShareSheetSection didRenderValdiView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105171074

// -[SCSendToInlineShareSheetSection shouldRecalculateSectionHeightWithViewModelUpdates]
// Type encoding: B16@0:8
// Implementation: 0x105171078

// -[SCSendToInlineShareSheetSection _setupShareSheetViewWithViewModel:selectionViewModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105171080

// -[SCSendToInlineShareSheetSection _setupLegacyShareSheetWithViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105171098

// -[SCSendToInlineShareSheetSection _setupSelectionShareSheetWithViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105171170

// -[SCSendToInlineShareSheetSection _shareView]
// Type encoding: @16@0:8
// Implementation: 0x105171260

// -[SCSendToInlineShareSheetSection _updateContentHeight]
// Type encoding: v16@0:8
// Implementation: 0x105171290

// -[SCSendToInlineShareSheetSection _emitShareSheetAvailableGrapheneMetric]
// Type encoding: v16@0:8
// Implementation: 0x105171310

// -[SCSendToInlineShareSheetSection _selectionItemUpdateFromShareDestination:]
// Type encoding: @24@0:8@16
// Implementation: 0x10517140c

// -[SCSendToInlineShareSheetSection _handleSynchronousDestination:]
// Type encoding: B20@0:8i16
// Implementation: 0x105171554

// -[SCSendToInlineShareSheetSection onSelectionStateChangedWithDestination:isSelected:]
// Type encoding: v24@0:8i16B20
// Implementation: 0x1051715e0

// -[SCSendToInlineShareSheetSection _updateSelectedDestinations]
// Type encoding: v16@0:8
// Implementation: 0x105171848

// -[SCSendToInlineShareSheetSection _subscribeToSelectionUpdates]
// Type encoding: v16@0:8
// Implementation: 0x105171cac

// -[SCSendToInlineShareSheetSection _subscribeToSendToEvents]
// Type encoding: v16@0:8
// Implementation: 0x10517205c

// -[SCSendToInlineShareSheetSection _reloadSectionWithFABTapped]
// Type encoding: v16@0:8
// Implementation: 0x10517224c

// -[SCSendToInlineShareSheetSection delegate]
// Type encoding: @16@0:8
// Implementation: 0x1051722c8

// -[SCSendToInlineShareSheetSection setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051722e0

// -[SCSendToInlineShareSheetSection dataLoadingStatus]
// Type encoding: q16@0:8
// Implementation: 0x1051722ec

// -[SCSendToInlineShareSheetSection setDataLoadingStatus:]
// Type encoding: v24@0:8q16
// Implementation: 0x1051722f4

// -[SCSendToInlineShareSheetSection sectionUpdateModel]
// Type encoding: @16@0:8
// Implementation: 0x1051722fc

// -[SCSendToInlineShareSheetSection setSectionUpdateModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105172304

// -[SCSendToInlineShareSheetSection dataProviderDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10517230c

// -[SCSendToInlineShareSheetSection setDataProviderDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105172324

// -[SCSendToInlineShareSheetSection updateQueuePerformer]
// Type encoding: @16@0:8
// Implementation: 0x105172330

// -[SCSendToInlineShareSheetSection setUpdateQueuePerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105172338

// -[SCSendToInlineShareSheetSection sectionDataModel]
// Type encoding: @16@0:8
// Implementation: 0x105172368

// -[SCSendToInlineShareSheetSection sectionDataTrackerObservable]
// Type encoding: @16@0:8
// Implementation: 0x105172370

// -[SCSendToInlineShareSheetSection useShortCopyString]
// Type encoding: @16@0:8
// Implementation: 0x105172378

// -[SCSendToInlineShareSheetSection setUseShortCopyString:]
// Type encoding: v24@0:8@16
// Implementation: 0x105172380

// -[SCSendToInlineShareSheetSection useDeviceLevelStorage]
// Type encoding: @16@0:8
// Implementation: 0x1051723b0

// -[SCSendToInlineShareSheetSection setUseDeviceLevelStorage:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051723b8

// -[SCSendToInlineShareSheetSection cofStore]
// Type encoding: @16@0:8
// Implementation: 0x1051723e8

// -[SCSendToInlineShareSheetSection setCofStore:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051723f0

// -[SCSendToInlineShareSheetSection .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105172420

// +[SCSendToInlineShareSheetSection announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x10516fea4

@end
