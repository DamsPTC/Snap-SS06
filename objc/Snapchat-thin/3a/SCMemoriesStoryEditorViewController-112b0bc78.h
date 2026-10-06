// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesStoryEditorViewController
// Superclass: SIGSubscreenViewController
// Address: 0x112b0bc78

@interface SCMemoriesStoryEditorViewController

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: PPVNavigationLogger; attributes: T@"<SCNavigationLogging>",?,&,N

// -[SCMemoriesStoryEditorViewController initWithWithLogger:dataProvider:actionHandler:storyEditorDelegate:pageTracker:memoriesStreamingManager:circumstanceEngine:applicationLifecycleEvents:memoriesExperimentService:storageQuotaManager:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x106a14a14

// -[SCMemoriesStoryEditorViewController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106a14eec

// -[SCMemoriesStoryEditorViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x106a14f58

// -[SCMemoriesStoryEditorViewController viewDidAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a153dc

// -[SCMemoriesStoryEditorViewController _pageHeight]
// Type encoding: d16@0:8
// Implementation: 0x106a15478

// -[SCMemoriesStoryEditorViewController _keyboardWillShow:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a154d4

// -[SCMemoriesStoryEditorViewController _keyboardDidHide:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a154e8

// -[SCMemoriesStoryEditorViewController _willDismiss]
// Type encoding: v16@0:8
// Implementation: 0x106a154f8

// -[SCMemoriesStoryEditorViewController _updatedActionModel:snapIdMap:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106a155fc

// -[SCMemoriesStoryEditorViewController _transitionSaveButtonToState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106a158a8

// -[SCMemoriesStoryEditorViewController _handleTap:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a15a58

// -[SCMemoriesStoryEditorViewController _applicationDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x106a15a8c

// -[SCMemoriesStoryEditorViewController _dismiss:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a15b38

// -[SCMemoriesStoryEditorViewController _dismissPresentedViewControllerIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106a15b68

// -[SCMemoriesStoryEditorViewController _displaySaveAlertIfNeeded:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106a15bcc

// -[SCMemoriesStoryEditorViewController _saveEdits:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106a16370

// -[SCMemoriesStoryEditorViewController _finishedSavingTemporaryEntry]
// Type encoding: v16@0:8
// Implementation: 0x106a16554

// -[SCMemoriesStoryEditorViewController _blockAllUserInteractions:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a165f0

// -[SCMemoriesStoryEditorViewController _saveEditsTapped]
// Type encoding: v16@0:8
// Implementation: 0x106a166f8

// -[SCMemoriesStoryEditorViewController _moreTapped]
// Type encoding: v16@0:8
// Implementation: 0x106a167d0

// -[SCMemoriesStoryEditorViewController _operaPresenterScrollToSnapId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a16890

// -[SCMemoriesStoryEditorViewController _operaPresenterScrollToIndexPathIfNeeded:snapId:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106a1698c

// -[SCMemoriesStoryEditorViewController _cellViewModelForIndexPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a16b74

// -[SCMemoriesStoryEditorViewController _sourceViewOfOperaPresentingIndex]
// Type encoding: @16@0:8
// Implementation: 0x106a16c10

// -[SCMemoriesStoryEditorViewController _getSnapCellViewModelsWithSectionCellViewModels:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a16c70

// -[SCMemoriesStoryEditorViewController _getSnapSectionCellViewModelsWithCellViewModels:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a16e00

// -[SCMemoriesStoryEditorViewController pageViewName]
// Type encoding: q16@0:8
// Implementation: 0x106a16f44

// -[SCMemoriesStoryEditorViewController _cellSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x106a16f4c

// -[SCMemoriesStoryEditorViewController _headerSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x106a16fec

// -[SCMemoriesStoryEditorViewController loadScrollView]
// Type encoding: @16@0:8
// Implementation: 0x106a17044

// -[SCMemoriesStoryEditorViewController didSelectDismissalActionWithHeaderItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a1732c

// -[SCMemoriesStoryEditorViewController cardTransitionShouldBeginWithView:touchLocation:]
// Type encoding: B40@0:8@16{CGPoint=dd}24
// Implementation: 0x106a1749c

// -[SCMemoriesStoryEditorViewController cardTransitionEndedWithView:transitionType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106a17588

// -[SCMemoriesStoryEditorViewController _isDragAndDropEnabledForIndexPath:]
// Type encoding: B24@0:8@16
// Implementation: 0x106a17600

// -[SCMemoriesStoryEditorViewController numberOfSectionsInCollectionView:]
// Type encoding: q24@0:8@16
// Implementation: 0x106a17658

// -[SCMemoriesStoryEditorViewController collectionView:numberOfItemsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x106a17660

// -[SCMemoriesStoryEditorViewController collectionView:cellForItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106a1767c

// -[SCMemoriesStoryEditorViewController collectionView:viewForSupplementaryElementOfKind:atIndexPath:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106a17a50

// -[SCMemoriesStoryEditorViewController collectionView:layout:referenceSizeForHeaderInSection:]
// Type encoding: {CGSize=dd}40@0:8@16@24q32
// Implementation: 0x106a17b2c

// -[SCMemoriesStoryEditorViewController collectionView:layout:sizeForItemAtIndexPath:]
// Type encoding: {CGSize=dd}40@0:8@16@24@32
// Implementation: 0x106a17b48

// -[SCMemoriesStoryEditorViewController collectionView:itemsForBeginningDragSession:atIndexPath:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106a17bd4

// -[SCMemoriesStoryEditorViewController collectionView:performDropWithCoordinator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a17d1c

// -[SCMemoriesStoryEditorViewController collectionView:dropSessionDidUpdate:withDestinationIndexPath:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106a17e24

// -[SCMemoriesStoryEditorViewController _reorderItems:destinationIndexPath:collectionView:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106a17ec0

// -[SCMemoriesStoryEditorViewController memoriesCollectionViewSelectionHelper:galleryItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106a183ac

// -[SCMemoriesStoryEditorViewController memoriesCollectionViewSelectionHelper:handleLongPress:itemAtIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106a18424

// -[SCMemoriesStoryEditorViewController memoriesCollectionViewIsFullyVisible:]
// Type encoding: B24@0:8@16
// Implementation: 0x106a18428

// -[SCMemoriesStoryEditorViewController memoriesCollectionViewSelectionHelper:overrideTapHandlingAtIndexPath:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106a18430

// -[SCMemoriesStoryEditorViewController memoriesCollectionViewSelectionHelper:shouldChangeSelectedAtIndexPath:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106a18438

// -[SCMemoriesStoryEditorViewController memoriesCollectionViewSelectionHelper:didChangeSelected:forItem:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x106a18440

// -[SCMemoriesStoryEditorViewController memoriesCollectionViewSelectionHelper:didTapItemAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a18444

// -[SCMemoriesStoryEditorViewController _updateOperaGroupsIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106a187e8

// -[SCMemoriesStoryEditorViewController _operaGroups]
// Type encoding: @16@0:8
// Implementation: 0x106a1888c

// -[SCMemoriesStoryEditorViewController _operaSingleGroup]
// Type encoding: @16@0:8
// Implementation: 0x106a18c18

// -[SCMemoriesStoryEditorViewController _operaTitle]
// Type encoding: @16@0:8
// Implementation: 0x106a18f38

// -[SCMemoriesStoryEditorViewController _operaSnapEntryInfo]
// Type encoding: @16@0:8
// Implementation: 0x106a190ac

// -[SCMemoriesStoryEditorViewController operaPresenterWillOpenViewWithOperaItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a19294

// -[SCMemoriesStoryEditorViewController operaPresenterDidOpenView]
// Type encoding: @16@0:8
// Implementation: 0x106a19354

// -[SCMemoriesStoryEditorViewController operaPresenterDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x106a193b4

// -[SCMemoriesStoryEditorViewController operaPresenterDidPresent]
// Type encoding: v16@0:8
// Implementation: 0x106a193d8

// -[SCMemoriesStoryEditorViewController operaPresenterOverrideTransitionMode]
// Type encoding: q16@0:8
// Implementation: 0x106a193dc

// -[SCMemoriesStoryEditorViewController _actionModel]
// Type encoding: @16@0:8
// Implementation: 0x106a193f8

// -[SCMemoriesStoryEditorViewController _allSnaps]
// Type encoding: @16@0:8
// Implementation: 0x106a194c4

// -[SCMemoriesStoryEditorViewController _actionModelWithAllSnaps]
// Type encoding: @16@0:8
// Implementation: 0x106a19610

// -[SCMemoriesStoryEditorViewController _actionModelFromViewModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a196f4

// -[SCMemoriesStoryEditorViewController storyEditorSnapCell:didTapDelete:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a197fc

// -[SCMemoriesStoryEditorViewController storyEditorHeaderCellDidTapSave:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a1984c

// -[SCMemoriesStoryEditorViewController storyEditorHeaderCell:didEditStoryTitle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a19a5c

// -[SCMemoriesStoryEditorViewController gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x106a19cb4

// -[SCMemoriesStoryEditorViewController memoriesStoryEditorDataSource:didUpdateViewModel:updateType:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x106a19cfc

// -[SCMemoriesStoryEditorViewController memoriesStoryEditorDataSourceDidDeleteStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a19da0

// -[SCMemoriesStoryEditorViewController _reloadCollectionViewWithViewModels:updateType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106a19ed0

// -[SCMemoriesStoryEditorViewController _promoteUserToNameStory]
// Type encoding: v16@0:8
// Implementation: 0x106a1a36c

// -[SCMemoriesStoryEditorViewController _scrollToIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x106a1a534

// -[SCMemoriesStoryEditorViewController _logBlizzardSnapsAddingOrDeletingWithOldCellViewModels:newCellViewModels:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a1a5c8

// -[SCMemoriesStoryEditorViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106a1a934

@end
