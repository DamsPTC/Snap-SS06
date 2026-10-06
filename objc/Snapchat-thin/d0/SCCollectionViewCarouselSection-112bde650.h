// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCollectionViewCarouselSection
// Superclass: NSObject
// Address: 0x112bde650

@interface SCCollectionViewCarouselSection

// Property: sectionDataProvider; attributes: T@"<SCSectionDataProviding>",&,N,V_sectionDataProvider
// Property: layoutCalculator; attributes: T@"<SCCollectionViewSectionLayoutProviding>",&,N,V_layoutCalculator
// Property: shouldResetCarouselContentOffset; attributes: TB,N,V_shouldResetCarouselContentOffset
// Property: bounces; attributes: TB,N,V_bounces
// Property: scrollEnabled; attributes: TB,N,V_scrollEnabled
// Property: forceLayoutUpdateBeforeBatchUpdates; attributes: TB,N,V_forceLayoutUpdateBeforeBatchUpdates
// Property: dataProvidingScheduler; attributes: T@"SCCollectionViewSectionDataProvidingScheduler",W,N,V_dataProvidingScheduler
// Property: enableSectionConfigurationViewModelUpdate; attributes: TB,N,V_enableSectionConfigurationViewModelUpdate
// Property: enableCarouselCollectionViewSetOnWillDisplayCell; attributes: T@"SCLazy",&,N,V_enableCarouselCollectionViewSetOnWillDisplayCell
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: isCompactCell; attributes: TB,?,N
// Property: sectionUpdateModel; attributes: T@"SCCollectionViewSectionUpdateModel",C,N,V_sectionUpdateModel
// Property: delegate; attributes: T@"<SCCollectionViewSectionDelegate>",W,N,V_delegate
// Property: dataLoadingStatus; attributes: Tq,N,V_dataLoadingStatus
// Property: actionHandler; attributes: T@"<SCActionHandling>",&,N,V_actionHandler
// Property: virtualSectionConfigurableDelegate; attributes: T@"<SCVirtualSectionConfigurableDelegate>",W,N,V_virtualSectionConfigurableDelegate
// Property: enableVirtualSectionSupport; attributes: TB,N,V_enableVirtualSectionSupport
// Property: virtualSectionInterSectionSpacing; attributes: Td,N,V_virtualSectionInterSectionSpacing
// Property: virtualSectionCount; attributes: Tq,R,N,V_virtualSectionCount
// Property: canExpandVirtualSections; attributes: TB,R,N,V_canExpandVirtualSections
// Property: areVirtualSectionsExpanded; attributes: TB,R,N,V_areVirtualSectionsExpanded
// Property: isUsingVirtualSectionLayout; attributes: TB,R,N
// Property: checkScrollEndOnVirtualItemDecrease; attributes: TB,N,V_checkScrollEndOnVirtualItemDecrease

// -[SCCollectionViewCarouselSection addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fc8980

// -[SCCollectionViewCarouselSection removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fc8988

// -[SCCollectionViewCarouselSection initWithSupplementaryViewProvider:containerCellReuseIdentifier:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108fc8990

// -[SCCollectionViewCarouselSection initWithSupplementaryViewProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x108fc8b08

// -[SCCollectionViewCarouselSection setUp]
// Type encoding: v16@0:8
// Implementation: 0x108fc8b14

// -[SCCollectionViewCarouselSection tearDown]
// Type encoding: v16@0:8
// Implementation: 0x108fc8c14

// -[SCCollectionViewCarouselSection applyConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fc8d38

// -[SCCollectionViewCarouselSection reuseCellClassesByIdentifiers]
// Type encoding: @16@0:8
// Implementation: 0x108fc8f00

// -[SCCollectionViewCarouselSection numberOfCellsInSection]
// Type encoding: Q16@0:8
// Implementation: 0x108fc8f84

// -[SCCollectionViewCarouselSection cellForItemAtIndexInSection:]
// Type encoding: @24@0:8Q16
// Implementation: 0x108fc8fa4

// -[SCCollectionViewCarouselSection collectionView:willDisplayCell:atIndexInSection:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x108fc9724

// -[SCCollectionViewCarouselSection collectionViewDidEndDisplayingCell:atIndexInSection:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x108fc98fc

// -[SCCollectionViewCarouselSection sizeForItemAtIndexInSection:withWidth:]
// Type encoding: {CGSize=dd}32@0:8Q16d24
// Implementation: 0x108fc9b08

// -[SCCollectionViewCarouselSection minimumSectionInteritemSpacing]
// Type encoding: d16@0:8
// Implementation: 0x108fc9c80

// -[SCCollectionViewCarouselSection sectionInsets]
// Type encoding: @16@0:8
// Implementation: 0x108fc9c88

// -[SCCollectionViewCarouselSection supplementaryViewProvider]
// Type encoding: @16@0:8
// Implementation: 0x108fc9d1c

// -[SCCollectionViewCarouselSection experimentalPagingMode]
// Type encoding: q16@0:8
// Implementation: 0x108fc9d44

// -[SCCollectionViewCarouselSection sectionInfo]
// Type encoding: @16@0:8
// Implementation: 0x108fc9d4c

// -[SCCollectionViewCarouselSection setSectionDataProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fc9d74

// -[SCCollectionViewCarouselSection setDataProvidingScheduler:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fc9f78

// -[SCCollectionViewCarouselSection setLayoutCalculator:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fc9fc8

// -[SCCollectionViewCarouselSection setSectionInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fca000

// -[SCCollectionViewCarouselSection setActionHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fca030

// -[SCCollectionViewCarouselSection handleActionWithSender:actionModel:fromSourceView:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x108fca0cc

// -[SCCollectionViewCarouselSection didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x108fca30c

// -[SCCollectionViewCarouselSection scrollToEndDetector:scrollViewWillReachEnd:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108fca4b0

// -[SCCollectionViewCarouselSection dataLoadingStatus]
// Type encoding: q16@0:8
// Implementation: 0x108fca678

// -[SCCollectionViewCarouselSection sectionDataProviderDidUpdateViewModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fca680

// -[SCCollectionViewCarouselSection _startSectionDataModelUpdate]
// Type encoding: v16@0:8
// Implementation: 0x108fca744

// -[SCCollectionViewCarouselSection _updateContainerCellViewModelsIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x108fca7a4

// -[SCCollectionViewCarouselSection shouldUpdateDataModelsFromDataProviding]
// Type encoding: v16@0:8
// Implementation: 0x108fca7f0

// -[SCCollectionViewCarouselSection _updateSectionDataModel]
// Type encoding: v16@0:8
// Implementation: 0x108fca7f4

// -[SCCollectionViewCarouselSection numberOfSectionsInCollectionView:]
// Type encoding: q24@0:8@16
// Implementation: 0x108fca8d0

// -[SCCollectionViewCarouselSection collectionView:numberOfItemsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x108fca8d8

// -[SCCollectionViewCarouselSection collectionView:cellForItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108fca8ec

// -[SCCollectionViewCarouselSection containerCollectionView:willDisplayCell:forItemAtIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x108fcaafc

// -[SCCollectionViewCarouselSection containerCollectionViewDidScroll:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fcad54

// -[SCCollectionViewCarouselSection containerCollectionViewWillBeginDragging:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fcae00

// -[SCCollectionViewCarouselSection containerCollectionViewDidEndDragging:willDecelerate:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x108fcaf64

// -[SCCollectionViewCarouselSection containerCollectionViewDidEndDecelerating:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fcb0e8

// -[SCCollectionViewCarouselSection containerCollectionView:layout:sizeForItemAtIndexPath:]
// Type encoding: {CGSize=dd}40@0:8@16@24@32
// Implementation: 0x108fcb240

// -[SCCollectionViewCarouselSection containerCollectionView:layout:insetForSectionAtIndex:]
// Type encoding: {UIEdgeInsets=dddd}40@0:8@16@24q32
// Implementation: 0x108fcb470

// -[SCCollectionViewCarouselSection containerCollectionView:layout:section:didScrollToOffset:]
// Type encoding: v48@0:8@16@24Q32d40
// Implementation: 0x108fcb63c

// -[SCCollectionViewCarouselSection containerCollectionView:layout:sectionWillBeginDragging:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x108fcb7e0

// -[SCCollectionViewCarouselSection containerCollectionView:layout:sectionDidEndDragging:willDecelerate:]
// Type encoding: v44@0:8@16@24Q32B40
// Implementation: 0x108fcb9b4

// -[SCCollectionViewCarouselSection containerCollectionView:layout:sectionDidEndDecelerating:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x108fcbbac

// -[SCCollectionViewCarouselSection sizeForItemAtIndex:width:]
// Type encoding: {CGSize=dd}32@0:8Q16d24
// Implementation: 0x108fcbd84

// -[SCCollectionViewCarouselSection totalNumberOfItems]
// Type encoding: Q16@0:8
// Implementation: 0x108fcbd88

// -[SCCollectionViewCarouselSection _resetScroll]
// Type encoding: v16@0:8
// Implementation: 0x108fcbd90

// -[SCCollectionViewCarouselSection _updateWithConfiguration]
// Type encoding: v16@0:8
// Implementation: 0x108fcbdf0

// -[SCCollectionViewCarouselSection _performSectionDataProviderUpdateWithHeaderModel:contentDataModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108fcbfb4

// -[SCCollectionViewCarouselSection _setSectionDataModelFromConfiguration]
// Type encoding: v16@0:8
// Implementation: 0x108fcc020

// -[SCCollectionViewCarouselSection _reloadSupplementaryViewModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fcc0a4

// -[SCCollectionViewCarouselSection _reloadSection]
// Type encoding: v16@0:8
// Implementation: 0x108fcc0f8

// -[SCCollectionViewCarouselSection _resetConfiguration]
// Type encoding: v16@0:8
// Implementation: 0x108fcc150

// -[SCCollectionViewCarouselSection _updateWithSectionDataProvider]
// Type encoding: v16@0:8
// Implementation: 0x108fcc160

// -[SCCollectionViewCarouselSection _updateSectionWithIndexPaths:containerCellViewModels:numberOfItemsBySection:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x108fcc38c

// -[SCCollectionViewCarouselSection _updateIvarWithCellViewModels:supplementaryViewModels:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108fcc9e8

// -[SCCollectionViewCarouselSection _updateWithCellViewModels:supplementaryViewModels:shouldReloadSection:hasSupplementaryViewModelsChanged:insertIndexSet:deleteIndexSet:reloadIndexSet:updateListIndices:]
// Type encoding: v72@0:8@16@24B32B36@40@48@56@64
// Implementation: 0x108fcca68

// -[SCCollectionViewCarouselSection _announceCellWillDisplayEventWithIsDragging:isDecelerating:indexPath:viewModel:existingContainerViewModels:eventTime:]
// Type encoding: v56@0:8B16B20@24@32@40d48
// Implementation: 0x108fcd144

// -[SCCollectionViewCarouselSection _announceActionEventWithIndexPath:actionModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108fcd40c

// -[SCCollectionViewCarouselSection _announceScrollEvent:forVisibleCells:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x108fcd5fc

// -[SCCollectionViewCarouselSection _configuration]
// Type encoding: @16@0:8
// Implementation: 0x108fcd898

// -[SCCollectionViewCarouselSection _modelCanUpdateComparator]
// Type encoding: @?16@0:8
// Implementation: 0x108fcd8b0

// -[SCCollectionViewCarouselSection _heightUpdatedWithContainerCellViewModels:existingContainerCellViewModels:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x108fcd8c8

// -[SCCollectionViewCarouselSection _heightUpdatedFromLayoutCalculator]
// Type encoding: B16@0:8
// Implementation: 0x108fcd9a0

// -[SCCollectionViewCarouselSection scrollToItemAtOriginalIndexPath:atVirtualScrollPosition:onlyIfNecessary:]
// Type encoding: v36@0:8@16Q24B32
// Implementation: 0x108fcda94

// -[SCCollectionViewCarouselSection resetAllSectionOffsets]
// Type encoding: v16@0:8
// Implementation: 0x108fcdbbc

// -[SCCollectionViewCarouselSection isUsingVirtualSectionLayout]
// Type encoding: B16@0:8
// Implementation: 0x108fcdcf4

// -[SCCollectionViewCarouselSection setVirtualSectionsExpanded:]
// Type encoding: v20@0:8B16
// Implementation: 0x108fcdd60

// -[SCCollectionViewCarouselSection _updateVirtualSectionOffsetForCollapse]
// Type encoding: v16@0:8
// Implementation: 0x108fce0e8

// -[SCCollectionViewCarouselSection _updateVirtualSectionOffsetForExpansion]
// Type encoding: v16@0:8
// Implementation: 0x108fce318

// -[SCCollectionViewCarouselSection _recalculateVirtualSectionMapping]
// Type encoding: v16@0:8
// Implementation: 0x108fce844

// -[SCCollectionViewCarouselSection collectionView:virtualSectionCountForLayout:]
// Type encoding: q32@0:8@16@24
// Implementation: 0x108fcee0c

// -[SCCollectionViewCarouselSection collectionView:layout:numberOfItemsInVirtualSection:]
// Type encoding: q40@0:8@16@24q32
// Implementation: 0x108fcee7c

// -[SCCollectionViewCarouselSection collectionView:layout:originalIndexPathForItemAtVirtualIndexPath:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108fcef4c

// -[SCCollectionViewCarouselSection collectionView:layout:virtualIndexPathForItemAtOriginalIndexPath:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108fcf008

// -[SCCollectionViewCarouselSection sectionUpdateModel]
// Type encoding: @16@0:8
// Implementation: 0x108fcf0c4

// -[SCCollectionViewCarouselSection setSectionUpdateModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fcf0cc

// -[SCCollectionViewCarouselSection delegate]
// Type encoding: @16@0:8
// Implementation: 0x108fcf0d4

// -[SCCollectionViewCarouselSection setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fcf0ec

// -[SCCollectionViewCarouselSection setDataLoadingStatus:]
// Type encoding: v24@0:8q16
// Implementation: 0x108fcf0f8

// -[SCCollectionViewCarouselSection actionHandler]
// Type encoding: @16@0:8
// Implementation: 0x108fcf100

// -[SCCollectionViewCarouselSection virtualSectionConfigurableDelegate]
// Type encoding: @16@0:8
// Implementation: 0x108fcf108

// -[SCCollectionViewCarouselSection setVirtualSectionConfigurableDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fcf120

// -[SCCollectionViewCarouselSection enableVirtualSectionSupport]
// Type encoding: B16@0:8
// Implementation: 0x108fcf12c

// -[SCCollectionViewCarouselSection setEnableVirtualSectionSupport:]
// Type encoding: v20@0:8B16
// Implementation: 0x108fcf134

// -[SCCollectionViewCarouselSection virtualSectionInterSectionSpacing]
// Type encoding: d16@0:8
// Implementation: 0x108fcf13c

// -[SCCollectionViewCarouselSection setVirtualSectionInterSectionSpacing:]
// Type encoding: v24@0:8d16
// Implementation: 0x108fcf144

// -[SCCollectionViewCarouselSection virtualSectionCount]
// Type encoding: q16@0:8
// Implementation: 0x108fcf14c

// -[SCCollectionViewCarouselSection canExpandVirtualSections]
// Type encoding: B16@0:8
// Implementation: 0x108fcf154

// -[SCCollectionViewCarouselSection areVirtualSectionsExpanded]
// Type encoding: B16@0:8
// Implementation: 0x108fcf15c

// -[SCCollectionViewCarouselSection checkScrollEndOnVirtualItemDecrease]
// Type encoding: B16@0:8
// Implementation: 0x108fcf164

// -[SCCollectionViewCarouselSection setCheckScrollEndOnVirtualItemDecrease:]
// Type encoding: v20@0:8B16
// Implementation: 0x108fcf16c

// -[SCCollectionViewCarouselSection sectionDataProvider]
// Type encoding: @16@0:8
// Implementation: 0x108fcf174

// -[SCCollectionViewCarouselSection layoutCalculator]
// Type encoding: @16@0:8
// Implementation: 0x108fcf17c

// -[SCCollectionViewCarouselSection shouldResetCarouselContentOffset]
// Type encoding: B16@0:8
// Implementation: 0x108fcf184

// -[SCCollectionViewCarouselSection setShouldResetCarouselContentOffset:]
// Type encoding: v20@0:8B16
// Implementation: 0x108fcf18c

// -[SCCollectionViewCarouselSection bounces]
// Type encoding: B16@0:8
// Implementation: 0x108fcf194

// -[SCCollectionViewCarouselSection setBounces:]
// Type encoding: v20@0:8B16
// Implementation: 0x108fcf19c

// -[SCCollectionViewCarouselSection scrollEnabled]
// Type encoding: B16@0:8
// Implementation: 0x108fcf1a4

// -[SCCollectionViewCarouselSection setScrollEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x108fcf1ac

// -[SCCollectionViewCarouselSection forceLayoutUpdateBeforeBatchUpdates]
// Type encoding: B16@0:8
// Implementation: 0x108fcf1b4

// -[SCCollectionViewCarouselSection setForceLayoutUpdateBeforeBatchUpdates:]
// Type encoding: v20@0:8B16
// Implementation: 0x108fcf1bc

// -[SCCollectionViewCarouselSection dataProvidingScheduler]
// Type encoding: @16@0:8
// Implementation: 0x108fcf1c4

// -[SCCollectionViewCarouselSection enableSectionConfigurationViewModelUpdate]
// Type encoding: B16@0:8
// Implementation: 0x108fcf1dc

// -[SCCollectionViewCarouselSection setEnableSectionConfigurationViewModelUpdate:]
// Type encoding: v20@0:8B16
// Implementation: 0x108fcf1e4

// -[SCCollectionViewCarouselSection enableCarouselCollectionViewSetOnWillDisplayCell]
// Type encoding: @16@0:8
// Implementation: 0x108fcf1ec

// -[SCCollectionViewCarouselSection setEnableCarouselCollectionViewSetOnWillDisplayCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fcf1f4

// -[SCCollectionViewCarouselSection .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108fcf224

// +[SCCollectionViewCarouselSection announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x108fc8974

@end
