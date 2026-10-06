// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCollectionViewListSection
// Superclass: NSObject
// Address: 0x112bde678

@interface SCCollectionViewListSection

// Property: sectionDataProvider; attributes: T@"<SCSectionDataProviding>",&,N,V_sectionDataProvider
// Property: viewMoreProvider; attributes: T@"<SCCollectionViewListSectionViewMoreProviding>",&,N,V_viewMoreProvider
// Property: layoutCalculator; attributes: T@"<SCCollectionViewSectionLayoutProviding>",&,N,V_layoutCalculator
// Property: fastAccessIndexer; attributes: T@"<SCCollectionViewSectionFastAccessIndexing>",&,N,V_fastAccessIndexer
// Property: dataProvidingScheduler; attributes: T@"SCCollectionViewSectionDataProvidingScheduler",W,N,V_dataProvidingScheduler
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: isCompactCell; attributes: TB,?,N
// Property: sectionUpdateModel; attributes: T@"SCCollectionViewSectionUpdateModel",C,N,V_sectionUpdateModel
// Property: delegate; attributes: T@"<SCCollectionViewSectionDelegate>",W,N,V_delegate
// Property: dataLoadingStatus; attributes: Tq,N,V_dataLoadingStatus
// Property: actionHandler; attributes: T@"<SCActionHandling>",&,N,V_actionHandler

// -[SCCollectionViewListSection addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fcf5b8

// -[SCCollectionViewListSection removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fcf5c0

// -[SCCollectionViewListSection didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x108fcf5c8

// -[SCCollectionViewListSection initWithSupplementaryViewProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x108fcf5d0

// -[SCCollectionViewListSection setSectionDataProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fcf6e8

// -[SCCollectionViewListSection setDataProvidingScheduler:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fcf90c

// -[SCCollectionViewListSection setViewMoreProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fcf95c

// -[SCCollectionViewListSection setActionHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fcf9c4

// -[SCCollectionViewListSection setLayoutCalculator:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fcfab0

// -[SCCollectionViewListSection setUp]
// Type encoding: v16@0:8
// Implementation: 0x108fcfae8

// -[SCCollectionViewListSection tearDown]
// Type encoding: v16@0:8
// Implementation: 0x108fcfc10

// -[SCCollectionViewListSection _logStuckLoadingAtTearDownIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x108fcfd6c

// -[SCCollectionViewListSection applyConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fcfe54

// -[SCCollectionViewListSection reuseCellClassesByIdentifiers]
// Type encoding: @16@0:8
// Implementation: 0x108fcff48

// -[SCCollectionViewListSection collectionView:willDisplayCell:atIndexInSection:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x108fcff70

// -[SCCollectionViewListSection collectionView:willDisplayCell:atIndexPath:withIndexPathVisible:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x108fd0008

// -[SCCollectionViewListSection collectionViewDidEndDisplayingCell:atIndexInSection:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x108fd0234

// -[SCCollectionViewListSection collectionViewWillDisplaySupplementaryView:forElementKind:atIndexInSection:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x108fd03b8

// -[SCCollectionViewListSection numberOfCellsInSection]
// Type encoding: Q16@0:8
// Implementation: 0x108fd052c

// -[SCCollectionViewListSection cellForItemAtIndexInSection:]
// Type encoding: @24@0:8Q16
// Implementation: 0x108fd05ac

// -[SCCollectionViewListSection _configureViewMoreCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fd0980

// -[SCCollectionViewListSection _hasRoundBottomForIndex:withExpansionTracker:]
// Type encoding: B32@0:8q16@24
// Implementation: 0x108fd0ac4

// -[SCCollectionViewListSection sizeForItemAtIndexInSection:withWidth:]
// Type encoding: {CGSize=dd}32@0:8Q16d24
// Implementation: 0x108fd0b90

// -[SCCollectionViewListSection minimumSectionLineSpacing]
// Type encoding: d16@0:8
// Implementation: 0x108fd0dc8

// -[SCCollectionViewListSection minimumSectionInteritemSpacing]
// Type encoding: d16@0:8
// Implementation: 0x108fd0dd0

// -[SCCollectionViewListSection experimentalPagingMode]
// Type encoding: q16@0:8
// Implementation: 0x108fd0dd8

// -[SCCollectionViewListSection sectionInfo]
// Type encoding: @16@0:8
// Implementation: 0x108fd0de0

// -[SCCollectionViewListSection sectionInsets]
// Type encoding: @16@0:8
// Implementation: 0x108fd0e08

// -[SCCollectionViewListSection supplementaryViewProvider]
// Type encoding: @16@0:8
// Implementation: 0x108fd0e10

// -[SCCollectionViewListSection setSectionUpdateModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fd0e38

// -[SCCollectionViewListSection setSectionInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fd0e90

// -[SCCollectionViewListSection sectionDataProviderDidUpdateViewModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fd0ec0

// -[SCCollectionViewListSection viewMoreProviderDidUpdateViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fd0f20

// -[SCCollectionViewListSection shouldUpdateDataModelsFromDataProviding]
// Type encoding: v16@0:8
// Implementation: 0x108fd0ff0

// -[SCCollectionViewListSection _updateSectionDataModel]
// Type encoding: v16@0:8
// Implementation: 0x108fd0ff4

// -[SCCollectionViewListSection indexForItemWithQueryKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x108fd10cc

// -[SCCollectionViewListSection handleActionWithSender:actionModel:fromSourceView:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x108fd10d4

// -[SCCollectionViewListSection viewMoreCollectionViewCellDidTapViewMore:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fd1334

// -[SCCollectionViewListSection sizeForItemAtIndex:width:]
// Type encoding: {CGSize=dd}32@0:8Q16d24
// Implementation: 0x108fd141c

// -[SCCollectionViewListSection totalNumberOfItems]
// Type encoding: Q16@0:8
// Implementation: 0x108fd1420

// -[SCCollectionViewListSection _setReuseCellClassesByIdentifiers]
// Type encoding: v16@0:8
// Implementation: 0x108fd1428

// -[SCCollectionViewListSection _shouldEnableSeparator:]
// Type encoding: B24@0:8@16
// Implementation: 0x108fd14f4

// -[SCCollectionViewListSection _updateWithConfiguration]
// Type encoding: v16@0:8
// Implementation: 0x108fd153c

// -[SCCollectionViewListSection _resetConfiguration]
// Type encoding: v16@0:8
// Implementation: 0x108fd178c

// -[SCCollectionViewListSection _updateWithSectionModelControllerWithShouldResetExpansion:]
// Type encoding: v20@0:8B16
// Implementation: 0x108fd179c

// -[SCCollectionViewListSection _handleTapViewMore]
// Type encoding: v16@0:8
// Implementation: 0x108fd1cc0

// -[SCCollectionViewListSection _updateDataSourceWithViewModelRange:containerCellViewModelsForRange:targetNumberOfExpansions:rangeUpdateID:]
// Type encoding: v56@0:8{_NSRange=QQ}16@32Q40@48
// Implementation: 0x108fd20ec

// -[SCCollectionViewListSection _updateDataSourceWithContainerViewModels:numberOfTotalElements:dataLoadingStatus:shouldResetExpansion:supplementaryViewModels:minimumInteritemSpacingHasChanged:]
// Type encoding: v56@0:8@16Q24q32B40@44B52
// Implementation: 0x108fd24fc

// -[SCCollectionViewListSection dataLoadingStatus]
// Type encoding: q16@0:8
// Implementation: 0x108fd2bb0

// -[SCCollectionViewListSection _updateSectionWithSectionUpdateModel:pendingContainerViewModels:expansionTracker:dataLoadingStatus:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x108fd2bb8

// -[SCCollectionViewListSection _sectionDataProvider]
// Type encoding: @16@0:8
// Implementation: 0x108fd2d80

// -[SCCollectionViewListSection _setPendingUpdateWithRange:]
// Type encoding: @32@0:8{_NSRange=QQ}16
// Implementation: 0x108fd2da8

// -[SCCollectionViewListSection _resetPendingUpdate]
// Type encoding: v16@0:8
// Implementation: 0x108fd2e34

// -[SCCollectionViewListSection _announceViewMoreEventsWithIsViewMore:]
// Type encoding: v20@0:8B16
// Implementation: 0x108fd2e64

// -[SCCollectionViewListSection _announceCellWillDisplayEventWithIndexPath:visibleIndexPath:eventTime:isDecelerating:isDragging:existingContainerViewModels:sectionDataModel:]
// Type encoding: v64@0:8@16@24d32B40B44@48@56
// Implementation: 0x108fd2fb8

// -[SCCollectionViewListSection _announceDidEndDisplayingCellEventWithIndexPath:existingContainerViewModels:sectionDataModel:]
// Type encoding: v40@0:8Q16@24@32
// Implementation: 0x108fd329c

// -[SCCollectionViewListSection _announceSupplementaryViewWillDisplayEventForElementKind:existingContainerViewModels:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108fd34b0

// -[SCCollectionViewListSection _reloadIndexSetForUpdateIndices:withOldList:newList:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108fd3614

// -[SCCollectionViewListSection _releasePendingUpdates]
// Type encoding: v16@0:8
// Implementation: 0x108fd3928

// -[SCCollectionViewListSection _setContainerCellViewModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fd398c

// -[SCCollectionViewListSection _copyExpansionTracker]
// Type encoding: @16@0:8
// Implementation: 0x108fd39c8

// -[SCCollectionViewListSection _copyContainerViewModels]
// Type encoding: @16@0:8
// Implementation: 0x108fd39d0

// -[SCCollectionViewListSection _copyListConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x108fd39d8

// -[SCCollectionViewListSection _heightUpdatedWithContainerCellViewModels:existingContainerCellViewModels:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x108fd39e0

// -[SCCollectionViewListSection _heightUpdatedFromLayoutCalculator]
// Type encoding: B16@0:8
// Implementation: 0x108fd3aa0

// -[SCCollectionViewListSection delegate]
// Type encoding: @16@0:8
// Implementation: 0x108fd3c40

// -[SCCollectionViewListSection setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fd3c58

// -[SCCollectionViewListSection sectionUpdateModel]
// Type encoding: @16@0:8
// Implementation: 0x108fd3c64

// -[SCCollectionViewListSection setDataLoadingStatus:]
// Type encoding: v24@0:8q16
// Implementation: 0x108fd3c6c

// -[SCCollectionViewListSection actionHandler]
// Type encoding: @16@0:8
// Implementation: 0x108fd3c74

// -[SCCollectionViewListSection sectionDataProvider]
// Type encoding: @16@0:8
// Implementation: 0x108fd3c7c

// -[SCCollectionViewListSection viewMoreProvider]
// Type encoding: @16@0:8
// Implementation: 0x108fd3c84

// -[SCCollectionViewListSection layoutCalculator]
// Type encoding: @16@0:8
// Implementation: 0x108fd3c8c

// -[SCCollectionViewListSection fastAccessIndexer]
// Type encoding: @16@0:8
// Implementation: 0x108fd3c94

// -[SCCollectionViewListSection setFastAccessIndexer:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fd3c9c

// -[SCCollectionViewListSection dataProvidingScheduler]
// Type encoding: @16@0:8
// Implementation: 0x108fd3ccc

// -[SCCollectionViewListSection .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108fd3ce4

// +[SCCollectionViewListSection announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x108fcf5ac

@end
