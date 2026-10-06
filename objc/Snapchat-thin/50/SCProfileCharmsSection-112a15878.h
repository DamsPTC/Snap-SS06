// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCProfileCharmsSection
// Superclass: NSObject
// Address: 0x112a15878

@interface SCProfileCharmsSection

// Property: charmsDataProvider; attributes: T@"<SCSectionDataProviding>",&,N,V_charmsDataProvider
// Property: charmsBlizzardLogger; attributes: T@"SCCharmsBlizzardLogger",W,N,V_charmsBlizzardLogger
// Property: useLegacySectionReloadOnCountTransition; attributes: TB,N,V_useLegacySectionReloadOnCountTransition
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: isCompactCell; attributes: TB,?,N
// Property: layoutCalculator; attributes: T@"<SCCollectionViewSectionLayoutProviding>",?,&,N
// Property: sectionUpdateModel; attributes: T@"SCCollectionViewSectionUpdateModel",C,N,V_sectionUpdateModel
// Property: delegate; attributes: T@"<SCCollectionViewSectionDelegate>",W,N,V_delegate
// Property: dataLoadingStatus; attributes: Tq,N,V_dataLoadingStatus
// Property: actionHandler; attributes: T@"<SCActionHandling>",&,N,V_actionHandler

// -[SCProfileCharmsSection initWithProfileSessionId:emptyStateText:supplementaryViewProvider:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1050b476c

// -[SCProfileCharmsSection setUp]
// Type encoding: v16@0:8
// Implementation: 0x1050b48a0

// -[SCProfileCharmsSection tearDown]
// Type encoding: v16@0:8
// Implementation: 0x1050b49a0

// -[SCProfileCharmsSection applyConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x1050b4ab4

// -[SCProfileCharmsSection reuseCellClassesByIdentifiers]
// Type encoding: @16@0:8
// Implementation: 0x1050b4ba0

// -[SCProfileCharmsSection numberOfCellsInSection]
// Type encoding: Q16@0:8
// Implementation: 0x1050b4c20

// -[SCProfileCharmsSection cellForItemAtIndexInSection:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1050b4c28

// -[SCProfileCharmsSection sizeForItemAtIndexInSection:withWidth:]
// Type encoding: {CGSize=dd}32@0:8Q16d24
// Implementation: 0x1050b508c

// -[SCProfileCharmsSection supplementaryViewProvider]
// Type encoding: @16@0:8
// Implementation: 0x1050b5184

// -[SCProfileCharmsSection sectionInfo]
// Type encoding: @16@0:8
// Implementation: 0x1050b51ac

// -[SCProfileCharmsSection setCharmsDataProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1050b5230

// -[SCProfileCharmsSection handleActionWithSender:actionModel:fromSourceView:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x1050b53e0

// -[SCProfileCharmsSection sectionDataProviderDidUpdateViewModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x1050b53f0

// -[SCProfileCharmsSection numberOfSectionsInCollectionView:]
// Type encoding: q24@0:8@16
// Implementation: 0x1050b55bc

// -[SCProfileCharmsSection collectionView:numberOfItemsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x1050b55c4

// -[SCProfileCharmsSection collectionView:cellForItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1050b55cc

// -[SCProfileCharmsSection _updateWithConfiguration]
// Type encoding: v16@0:8
// Implementation: 0x1050b57a4

// -[SCProfileCharmsSection _reloadSupplementaryViewModels]
// Type encoding: v16@0:8
// Implementation: 0x1050b5920

// -[SCProfileCharmsSection _reloadSection]
// Type encoding: v16@0:8
// Implementation: 0x1050b5980

// -[SCProfileCharmsSection _applyContainerCellViewModelsForCountTransition:]
// Type encoding: v24@0:8@16
// Implementation: 0x1050b59d8

// -[SCProfileCharmsSection _updateWithCharmsDataProvider]
// Type encoding: v16@0:8
// Implementation: 0x1050b5a9c

// -[SCProfileCharmsSection _updateWithContainerCellViewModels:supplementaryViewModels:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1050b5c44

// -[SCProfileCharmsSection dismissTransitionShouldBeginWithView:touchLocation:]
// Type encoding: B40@0:8@16{CGPoint=dd}24
// Implementation: 0x1050b63b8

// -[SCProfileCharmsSection dismissTransitionWillBegin]
// Type encoding: v16@0:8
// Implementation: 0x1050b64a0

// -[SCProfileCharmsSection dismissTransitionDidEnd]
// Type encoding: v16@0:8
// Implementation: 0x1050b64e8

// -[SCProfileCharmsSection sectionUpdateModel]
// Type encoding: @16@0:8
// Implementation: 0x1050b6530

// -[SCProfileCharmsSection setSectionUpdateModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x1050b6538

// -[SCProfileCharmsSection delegate]
// Type encoding: @16@0:8
// Implementation: 0x1050b6540

// -[SCProfileCharmsSection setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1050b6558

// -[SCProfileCharmsSection dataLoadingStatus]
// Type encoding: q16@0:8
// Implementation: 0x1050b6564

// -[SCProfileCharmsSection setDataLoadingStatus:]
// Type encoding: v24@0:8q16
// Implementation: 0x1050b656c

// -[SCProfileCharmsSection actionHandler]
// Type encoding: @16@0:8
// Implementation: 0x1050b6574

// -[SCProfileCharmsSection setActionHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x1050b657c

// -[SCProfileCharmsSection charmsDataProvider]
// Type encoding: @16@0:8
// Implementation: 0x1050b65ac

// -[SCProfileCharmsSection charmsBlizzardLogger]
// Type encoding: @16@0:8
// Implementation: 0x1050b65b4

// -[SCProfileCharmsSection setCharmsBlizzardLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x1050b65cc

// -[SCProfileCharmsSection useLegacySectionReloadOnCountTransition]
// Type encoding: B16@0:8
// Implementation: 0x1050b65d8

// -[SCProfileCharmsSection setUseLegacySectionReloadOnCountTransition:]
// Type encoding: v20@0:8B16
// Implementation: 0x1050b65e0

// -[SCProfileCharmsSection .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1050b65e8

@end
