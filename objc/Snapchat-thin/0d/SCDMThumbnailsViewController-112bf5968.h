// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDMThumbnailsViewController
// Superclass: UIViewController
// Address: 0x112bf5968

@interface SCDMThumbnailsViewController

// Property: collectionView; attributes: T@"UICollectionView",&,N,V_collectionView
// Property: mediaConfiguration; attributes: T@"<SCTimelineConfiguration>",&,N,V_mediaConfiguration
// Property: selectedSegment; attributes: T@"<SCTimelineMediaSegment>",R,N,V_selectedSegment
// Property: delegate; attributes: T@"<SCDMThumbnailsViewControllerDelegate>",W,N,V_delegate
// Property: playerHandler; attributes: T@"<SCTimelineVideoPlayerHandler>",W,N,V_playerHandler
// Property: isPlaybackManuallyPaused; attributes: TB,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDMThumbnailsViewController initWithSnapDocEditorProvider:configuration:thumbnailGenerator:includeFooterView:snapEditorEnabled:isSegmentTrimmable:isClipReorderingEnabled:useFixedSegmentDuration:templateExplorerEnabled:runtime:]
// Type encoding: @72@0:8@16@24@32B40B44B48B52B56B60@64
// Implementation: 0x1091f57c0

// -[SCDMThumbnailsViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x1091f594c

// -[SCDMThumbnailsViewController viewDidAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091f5a9c

// -[SCDMThumbnailsViewController setMediaConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091f5ae4

// -[SCDMThumbnailsViewController setSegmentThumbnailSelectedAtIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1091f5b8c

// -[SCDMThumbnailsViewController deselectSelectedSegmentIfAny]
// Type encoding: B16@0:8
// Implementation: 0x1091f5b90

// -[SCDMThumbnailsViewController exitSegmentsReordering]
// Type encoding: v16@0:8
// Implementation: 0x1091f5bc4

// -[SCDMThumbnailsViewController restoreToInitialSegmentsInReorder]
// Type encoding: v16@0:8
// Implementation: 0x1091f5be4

// -[SCDMThumbnailsViewController deleteSelectedSegment]
// Type encoding: v16@0:8
// Implementation: 0x1091f5c74

// -[SCDMThumbnailsViewController batchThumbnailsUpdateBegin]
// Type encoding: v16@0:8
// Implementation: 0x1091f5da4

// -[SCDMThumbnailsViewController batchThumbnailsUpdateEnd]
// Type encoding: v16@0:8
// Implementation: 0x1091f5dd4

// -[SCDMThumbnailsViewController setPreSelectedSegment:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091f5e20

// -[SCDMThumbnailsViewController enableRuntimeThumbnailGeometry]
// Type encoding: v16@0:8
// Implementation: 0x1091f5e34

// -[SCDMThumbnailsViewController applyRuntimeCollectionBottomInset:requiresOverlapBackground:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x1091f5e48

// -[SCDMThumbnailsViewController setPlaybackModeEnabled:animated:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x1091f5ef4

// -[SCDMThumbnailsViewController updateCollectionViewHorizontalConstraintsOnLayoutType:animated:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x1091f5f20

// -[SCDMThumbnailsViewController playbackDidRenderFrameAtTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x1091f61e4

// -[SCDMThumbnailsViewController _updateOpacity]
// Type encoding: v16@0:8
// Implementation: 0x1091f6544

// -[SCDMThumbnailsViewController playbackDidStartRunning]
// Type encoding: v16@0:8
// Implementation: 0x1091f6718

// -[SCDMThumbnailsViewController playbackDidStopRunning]
// Type encoding: v16@0:8
// Implementation: 0x1091f6758

// -[SCDMThumbnailsViewController playbackDidPauseRunning]
// Type encoding: v16@0:8
// Implementation: 0x1091f6798

// -[SCDMThumbnailsViewController playbackDidResumeRunning]
// Type encoding: v16@0:8
// Implementation: 0x1091f67d8

// -[SCDMThumbnailsViewController onMoveToPreviewAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091f6818

// -[SCDMThumbnailsViewController onRemoveFromPreview]
// Type encoding: v16@0:8
// Implementation: 0x1091f698c

// -[SCDMThumbnailsViewController isPlaybackManuallyPaused]
// Type encoding: B16@0:8
// Implementation: 0x1091f6a74

// -[SCDMThumbnailsViewController _setupHeaderView]
// Type encoding: v16@0:8
// Implementation: 0x1091f6ad8

// -[SCDMThumbnailsViewController _setupFooterView]
// Type encoding: v16@0:8
// Implementation: 0x1091f6d60

// -[SCDMThumbnailsViewController _setupCollectionView]
// Type encoding: v16@0:8
// Implementation: 0x1091f6fe8

// -[SCDMThumbnailsViewController _setupTemplateExplorer]
// Type encoding: v16@0:8
// Implementation: 0x1091f7528

// -[SCDMThumbnailsViewController _longPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091f7790

// -[SCDMThumbnailsViewController _updateCollectionViewForReordering:shouldReload:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1091f7860

// -[SCDMThumbnailsViewController _updateLayoutForReorderAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091f7be0

// -[SCDMThumbnailsViewController numberOfSectionsInCollectionView:]
// Type encoding: q24@0:8@16
// Implementation: 0x1091f7c34

// -[SCDMThumbnailsViewController collectionView:numberOfItemsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x1091f7c6c

// -[SCDMThumbnailsViewController collectionView:cellForItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1091f7c74

// -[SCDMThumbnailsViewController collectionView:shouldSelectItemAtIndexPath:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1091f82b4

// -[SCDMThumbnailsViewController collectionView:didSelectItemAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091f82e4

// -[SCDMThumbnailsViewController collectionView:canMoveItemAtIndexPath:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1091f836c

// -[SCDMThumbnailsViewController collectionView:targetIndexPathForMoveOfItemFromOriginalIndexPath:atCurrentIndexPath:toProposedIndexPath:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1091f8480

// -[SCDMThumbnailsViewController collectionView:layout:sizeForItemAtIndexPath:]
// Type encoding: {CGSize=dd}40@0:8@16@24@32
// Implementation: 0x1091f84fc

// -[SCDMThumbnailsViewController collectionView:layout:insetForSectionAtIndex:]
// Type encoding: {UIEdgeInsets=dddd}40@0:8@16@24q32
// Implementation: 0x1091f853c

// -[SCDMThumbnailsViewController collectionView:dragSessionWillBegin:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091f8594

// -[SCDMThumbnailsViewController collectionView:itemsForBeginningDragSession:atIndexPath:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1091f85fc

// -[SCDMThumbnailsViewController collectionView:dragPreviewParametersForItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1091f87ac

// -[SCDMThumbnailsViewController collectionView:canHandleDropSession:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1091f8808

// -[SCDMThumbnailsViewController collectionView:performDropWithCoordinator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091f8840

// -[SCDMThumbnailsViewController collectionView:dropPreviewParametersForItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1091f8ac4

// -[SCDMThumbnailsViewController collectionView:dropSessionDidUpdate:withDestinationIndexPath:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1091f8b20

// -[SCDMThumbnailsViewController collectionView:dropSessionDidEnd:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091f8bf4

// -[SCDMThumbnailsViewController componentView]
// Type encoding: @16@0:8
// Implementation: 0x1091f8c68

// -[SCDMThumbnailsViewController timelineConfiguration:didAddSegment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091f8c6c

// -[SCDMThumbnailsViewController timelineConfiguration:didAddSegments:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091f8f40

// -[SCDMThumbnailsViewController timelineConfiguration:didDeleteSegment:atIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x1091f8fd0

// -[SCDMThumbnailsViewController timelineConfiguration:didMoveSegment:atIndex:toDestinationIndex:]
// Type encoding: v48@0:8@16@24q32q40
// Implementation: 0x1091f93bc

// -[SCDMThumbnailsViewController timelineConfigurationDidEnterReorderMode:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091f95d4

// -[SCDMThumbnailsViewController timelineConfigurationDidExitReorderMode:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091f95d8

// -[SCDMThumbnailsViewController timelineConfigurationDidRestoreToInitialState:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091f95dc

// -[SCDMThumbnailsViewController timelineConfigurationWillDeleteAllSegments:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091f95fc

// -[SCDMThumbnailsViewController timelineConfigurationDidDeleteAllSegments:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091f9600

// -[SCDMThumbnailsViewController timelineConfigurationDidUpdateThumbnails:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091f9630

// -[SCDMThumbnailsViewController timelineConfiguration:didUpdateSegmentTrim:atIndex:]
// Type encoding: v80@0:8@16{?={?=qiIq}{?=qiIq}}24q72
// Implementation: 0x1091f9634

// -[SCDMThumbnailsViewController timelineConfiguration:didUpdateThumbnailsForSegment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091f9638

// -[SCDMThumbnailsViewController snapSegmentExpandedCellReorderDeletePressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091f9810

// -[SCDMThumbnailsViewController snapSegmentExpandedCellShouldHandleTouch:]
// Type encoding: B24@0:8@16
// Implementation: 0x1091f9928

// -[SCDMThumbnailsViewController snapSegmentExpandedCell:didChangeStartTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x1091f992c

// -[SCDMThumbnailsViewController snapSegmentExpandedCell:didChangeEndTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x1091f9998

// -[SCDMThumbnailsViewController snapSegmentExpandedCell:didTrimSegmentToRange:]
// Type encoding: v72@0:8@16{?={?=qiIq}{?=qiIq}}24
// Implementation: 0x1091f99ec

// -[SCDMThumbnailsViewController snapSegmentExpandedCell:didSeekToTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x1091f9c48

// -[SCDMThumbnailsViewController snapSegmentExpandedCellFinishedSeeking:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091f9cf4

// -[SCDMThumbnailsViewController snapSegmentExpandedCellDidPressDelete:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091f9d70

// -[SCDMThumbnailsViewController snapSegmentExpandedCellShouldShowDeleteButton:]
// Type encoding: B24@0:8@16
// Implementation: 0x1091f9d74

// -[SCDMThumbnailsViewController snapSegmentExpandedCell:didChangeSelectedTimeSlice:]
// Type encoding: v72@0:8@16{?={?=qiIq}{?=qiIq}}24
// Implementation: 0x1091f9d7c

// -[SCDMThumbnailsViewController snapSegmentExpandedCell:didChangeSelectedTimeRange:]
// Type encoding: v72@0:8@16{?={?=qiIq}{?=qiIq}}24
// Implementation: 0x1091f9d80

// -[SCDMThumbnailsViewController didTapOnThumbnailsActionView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091f9d84

// -[SCDMThumbnailsViewController _isClipLevelEditing]
// Type encoding: B16@0:8
// Implementation: 0x1091f9e30

// -[SCDMThumbnailsViewController _isInPreview]
// Type encoding: B16@0:8
// Implementation: 0x1091f9e48

// -[SCDMThumbnailsViewController _totalCellsCount]
// Type encoding: Q16@0:8
// Implementation: 0x1091f9e80

// -[SCDMThumbnailsViewController _isCellSelectedAtIndexPath:]
// Type encoding: B24@0:8@16
// Implementation: 0x1091f9e90

// -[SCDMThumbnailsViewController _selectedSegmentCellWidth]
// Type encoding: d16@0:8
// Implementation: 0x1091f9ea8

// -[SCDMThumbnailsViewController _updateWithPreSelectedSegmentIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x1091f9f00

// -[SCDMThumbnailsViewController _selectSegmentCellAtIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x1091f9fcc

// -[SCDMThumbnailsViewController _setCellMaximumTrim:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091fa2ec

// -[SCDMThumbnailsViewController _changeLayoutAnimated]
// Type encoding: v16@0:8
// Implementation: 0x1091fa44c

// -[SCDMThumbnailsViewController _updateCollectionViewLayoutWithAnimations:completion:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x1091fa4a8

// -[SCDMThumbnailsViewController _deselectSelectedSegment]
// Type encoding: v16@0:8
// Implementation: 0x1091fa610

// -[SCDMThumbnailsViewController _canDropToIndexPath:]
// Type encoding: B24@0:8@16
// Implementation: 0x1091fa8e0

// -[SCDMThumbnailsViewController _showClipsReorderingDeleteButtonAtIndexPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091fa918

// -[SCDMThumbnailsViewController _enterReorder]
// Type encoding: v16@0:8
// Implementation: 0x1091fa9bc

// -[SCDMThumbnailsViewController resetSegmentSelection]
// Type encoding: v16@0:8
// Implementation: 0x1091faa2c

// -[SCDMThumbnailsViewController firstThumbnailCell]
// Type encoding: @16@0:8
// Implementation: 0x1091faaa8

// -[SCDMThumbnailsViewController _changeCollectionViewLayout]
// Type encoding: v16@0:8
// Implementation: 0x1091fab40

// -[SCDMThumbnailsViewController _updateCollectionViewTrailingConstraint]
// Type encoding: v16@0:8
// Implementation: 0x1091fb304

// -[SCDMThumbnailsViewController _autoScrollAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091fb334

// -[SCDMThumbnailsViewController _currentPlayingIndexPath]
// Type encoding: @16@0:8
// Implementation: 0x1091fb390

// -[SCDMThumbnailsViewController _currentPlayingSection]
// Type encoding: q16@0:8
// Implementation: 0x1091fb3cc

// -[SCDMThumbnailsViewController _isCellFullyVisibleAtIndexPath:]
// Type encoding: B24@0:8@16
// Implementation: 0x1091fb528

// -[SCDMThumbnailsViewController _cellFrameAtIndexPath:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}24@0:8@16
// Implementation: 0x1091fb5d0

// -[SCDMThumbnailsViewController _updatePlaybackManuallyPausedToValue:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091fb60c

// -[SCDMThumbnailsViewController _canReorderWithRemixMetadataAtSourceIndexPath:destinationIndexPath:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1091fb6a0

// -[SCDMThumbnailsViewController _updateTemplateExplorerButtonVisibilityIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1091fb838

// -[SCDMThumbnailsViewController onTap]
// Type encoding: v16@0:8
// Implementation: 0x1091fb888

// -[SCDMThumbnailsViewController mediaConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x1091fb998

// -[SCDMThumbnailsViewController selectedSegment]
// Type encoding: @16@0:8
// Implementation: 0x1091fb9a8

// -[SCDMThumbnailsViewController delegate]
// Type encoding: @16@0:8
// Implementation: 0x1091fb9b8

// -[SCDMThumbnailsViewController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091fb9d8

// -[SCDMThumbnailsViewController playerHandler]
// Type encoding: @16@0:8
// Implementation: 0x1091fb9ec

// -[SCDMThumbnailsViewController setPlayerHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091fba0c

// -[SCDMThumbnailsViewController collectionView]
// Type encoding: @16@0:8
// Implementation: 0x1091fba20

// -[SCDMThumbnailsViewController setCollectionView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091fba30

// -[SCDMThumbnailsViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091fba70

@end
