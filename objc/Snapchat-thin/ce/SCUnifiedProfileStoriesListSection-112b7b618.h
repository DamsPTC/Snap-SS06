// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnifiedProfileStoriesListSection
// Superclass: NSObject
// Address: 0x112b7b618

@interface SCUnifiedProfileStoriesListSection

// Property: sectionDataProvider; attributes: T@"<SCUnifiedProfileStoriesSectionDataProviding>",&,N,V_sectionDataProvider
// Property: forceExpanded; attributes: TB,N,V_forceExpanded
// Property: storyGroupActionHandler; attributes: T@"<SCActionHandling>",R,N,V_storyGroupActionHandler
// Property: shouldRemoveBottomCornerForLastCell; attributes: TB,N,V_shouldRemoveBottomCornerForLastCell
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

// -[SCUnifiedProfileStoriesListSection initWithSupplementaryViewProvider:actionHandler:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107d1c3dc

// -[SCUnifiedProfileStoriesListSection storyGroupsEnabled]
// Type encoding: B16@0:8
// Implementation: 0x107d1c61c

// -[SCUnifiedProfileStoriesListSection setActionHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d1c62c

// -[SCUnifiedProfileStoriesListSection setSectionDataProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d1c6e4

// -[SCUnifiedProfileStoriesListSection setUp]
// Type encoding: v16@0:8
// Implementation: 0x107d1c870

// -[SCUnifiedProfileStoriesListSection _setUpSectionDataProvider]
// Type encoding: v16@0:8
// Implementation: 0x107d1c968

// -[SCUnifiedProfileStoriesListSection tearDown]
// Type encoding: v16@0:8
// Implementation: 0x107d1c970

// -[SCUnifiedProfileStoriesListSection _tearDownSectionDataProvider]
// Type encoding: v16@0:8
// Implementation: 0x107d1ca64

// -[SCUnifiedProfileStoriesListSection reuseCellClassesByIdentifiers]
// Type encoding: @16@0:8
// Implementation: 0x107d1ca6c

// -[SCUnifiedProfileStoriesListSection numberOfCellsInSection]
// Type encoding: Q16@0:8
// Implementation: 0x107d1cb58

// -[SCUnifiedProfileStoriesListSection cellForItemAtIndexInSection:]
// Type encoding: @24@0:8Q16
// Implementation: 0x107d1cbcc

// -[SCUnifiedProfileStoriesListSection sizeForItemAtIndexInSection:withWidth:]
// Type encoding: {CGSize=dd}32@0:8Q16d24
// Implementation: 0x107d1cc58

// -[SCUnifiedProfileStoriesListSection applyConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d1cd60

// -[SCUnifiedProfileStoriesListSection setShouldRemoveBottomCornerForLastCell:]
// Type encoding: v20@0:8B16
// Implementation: 0x107d1d14c

// -[SCUnifiedProfileStoriesListSection _handledExpandedObservableValue:]
// Type encoding: v20@0:8B16
// Implementation: 0x107d1d224

// -[SCUnifiedProfileStoriesListSection sectionInsets]
// Type encoding: @16@0:8
// Implementation: 0x107d1d2fc

// -[SCUnifiedProfileStoriesListSection minimumSectionLineSpacing]
// Type encoding: d16@0:8
// Implementation: 0x107d1d304

// -[SCUnifiedProfileStoriesListSection supplementaryViewProvider]
// Type encoding: @16@0:8
// Implementation: 0x107d1d30c

// -[SCUnifiedProfileStoriesListSection setSectionUpdateModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d1d334

// -[SCUnifiedProfileStoriesListSection sectionInfo]
// Type encoding: @16@0:8
// Implementation: 0x107d1d3bc

// -[SCUnifiedProfileStoriesListSection setSectionInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d1d3f8

// -[SCUnifiedProfileStoriesListSection storiesSectionDataProviderDidUpdateViewModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d1d438

// -[SCUnifiedProfileStoriesListSection viewMoreCollectionViewCellDidTapViewMore:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d1d52c

// -[SCUnifiedProfileStoriesListSection _logStoriesViewMoreTapped:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d1d684

// -[SCUnifiedProfileStoriesListSection _handleExpandHeaderCell]
// Type encoding: v16@0:8
// Implementation: 0x107d1d798

// -[SCUnifiedProfileStoriesListSection _handleTapViewMore]
// Type encoding: v16@0:8
// Implementation: 0x107d1d9a0

// -[SCUnifiedProfileStoriesListSection _prepareAndReturnHeaderCell]
// Type encoding: @16@0:8
// Implementation: 0x107d1db10

// -[SCUnifiedProfileStoriesListSection _prepareAndReturnViewMoreGroupCell]
// Type encoding: @16@0:8
// Implementation: 0x107d1dcc8

// -[SCUnifiedProfileStoriesListSection _prepareAndReturnViewMoreCellAtIndex:]
// Type encoding: @24@0:8Q16
// Implementation: 0x107d1df10

// -[SCUnifiedProfileStoriesListSection _prepareAndReturnSnapCellAtIndex:]
// Type encoding: @24@0:8Q16
// Implementation: 0x107d1e104

// -[SCUnifiedProfileStoriesListSection _updateSectionWithShouldResetExpansion:]
// Type encoding: v20@0:8B16
// Implementation: 0x107d1e358

// -[SCUnifiedProfileStoriesListSection _updateSectionWithShouldResetExpansion:newHeaderViewModel:newSnapViewModels:newExpansionThreshold:newExpansionIncrement:]
// Type encoding: v52@0:8B16@20@28Q36Q44
// Implementation: 0x107d1e460

// -[SCUnifiedProfileStoriesListSection _sectionUpdateModelWithOldHeaderViewModel:newHeaderViewModel:oldSnapViewModels:newSnapViewModels:oldExpansionTracker:newExpansionTracker:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x107d1e690

// -[SCUnifiedProfileStoriesListSection _updateSectionWithSectionUpdateModel:pendingHeaderViewModel:pendingSnapViewModels:pendingExpansionTracker:pendingExpanded:]
// Type encoding: B52@0:8@16@24@32@40B48
// Implementation: 0x107d1ec1c

// -[SCUnifiedProfileStoriesListSection _didRequestUpdate]
// Type encoding: v16@0:8
// Implementation: 0x107d1ee74

// -[SCUnifiedProfileStoriesListSection _releasePendingUpdates]
// Type encoding: v16@0:8
// Implementation: 0x107d1efb8

// -[SCUnifiedProfileStoriesListSection _hasRoundBottomForIndex:forViewModels:expansionTracker:]
// Type encoding: B40@0:8Q16@24@32
// Implementation: 0x107d1f05c

// -[SCUnifiedProfileStoriesListSection _isViewMoreCellAtIndex:]
// Type encoding: B24@0:8Q16
// Implementation: 0x107d1f0c4

// -[SCUnifiedProfileStoriesListSection _reloadIndexSetForUpdateIndices:newSnapViewModels:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107d1f104

// -[SCUnifiedProfileStoriesListSection setExpandedState:]
// Type encoding: v20@0:8B16
// Implementation: 0x107d1f358

// -[SCUnifiedProfileStoriesListSection _setExpandedState:]
// Type encoding: v20@0:8B16
// Implementation: 0x107d1f438

// -[SCUnifiedProfileStoriesListSection snapViewModelForServerId:]
// Type encoding: @24@0:8@16
// Implementation: 0x107d1f44c

// -[SCUnifiedProfileStoriesListSection collectionViewCellForClientId:]
// Type encoding: @24@0:8@16
// Implementation: 0x107d1f538

// -[SCUnifiedProfileStoriesListSection scrollToCellForClientId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d1f66c

// -[SCUnifiedProfileStoriesListSection sectionUpdateModel]
// Type encoding: @16@0:8
// Implementation: 0x107d1f77c

// -[SCUnifiedProfileStoriesListSection delegate]
// Type encoding: @16@0:8
// Implementation: 0x107d1f784

// -[SCUnifiedProfileStoriesListSection setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d1f79c

// -[SCUnifiedProfileStoriesListSection dataLoadingStatus]
// Type encoding: q16@0:8
// Implementation: 0x107d1f7a8

// -[SCUnifiedProfileStoriesListSection setDataLoadingStatus:]
// Type encoding: v24@0:8q16
// Implementation: 0x107d1f7b0

// -[SCUnifiedProfileStoriesListSection actionHandler]
// Type encoding: @16@0:8
// Implementation: 0x107d1f7b8

// -[SCUnifiedProfileStoriesListSection sectionDataProvider]
// Type encoding: @16@0:8
// Implementation: 0x107d1f7c0

// -[SCUnifiedProfileStoriesListSection forceExpanded]
// Type encoding: B16@0:8
// Implementation: 0x107d1f7c8

// -[SCUnifiedProfileStoriesListSection setForceExpanded:]
// Type encoding: v20@0:8B16
// Implementation: 0x107d1f7d0

// -[SCUnifiedProfileStoriesListSection storyGroupActionHandler]
// Type encoding: @16@0:8
// Implementation: 0x107d1f7d8

// -[SCUnifiedProfileStoriesListSection shouldRemoveBottomCornerForLastCell]
// Type encoding: B16@0:8
// Implementation: 0x107d1f7e0

// -[SCUnifiedProfileStoriesListSection .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107d1f7e8

// +[SCUnifiedProfileStoriesListSection viewMoreOfGroupSectionWithActionHandler:storyGroupActionHandler:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107d1c5a4

@end
