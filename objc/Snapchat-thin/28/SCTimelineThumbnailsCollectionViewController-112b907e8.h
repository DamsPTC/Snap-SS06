// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTimelineThumbnailsCollectionViewController
// Superclass: UICollectionViewController
// Address: 0x112b907e8

@interface SCTimelineThumbnailsCollectionViewController

// Property: trimmingEnabled; attributes: TB,N,V_trimmingEnabled
// Property: previewDelegate; attributes: T@"<SCTimelineThumbnailsControllerDelegate>",W,N,V_previewDelegate
// Property: showThumbnailRevealingAnimation; attributes: TB,N,V_showThumbnailRevealingAnimation
// Property: editingIndex; attributes: Tq,R,N
// Property: firstCollapsedThumbnailCell; attributes: T@"UIView",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTimelineThumbnailsCollectionViewController initWithConfiguration:playerHandler:thumbnailGenerator:timelineExperimentConfig:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107fa879c

// -[SCTimelineThumbnailsCollectionViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x107fa88cc

// -[SCTimelineThumbnailsCollectionViewController didReceiveMemoryWarning]
// Type encoding: v16@0:8
// Implementation: 0x107fa8b38

// -[SCTimelineThumbnailsCollectionViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x107fa8b6c

// -[SCTimelineThumbnailsCollectionViewController showRecordMoreTooltipBalloonWithText:duration:]
// Type encoding: B32@0:8@16d24
// Implementation: 0x107fa8bbc

// -[SCTimelineThumbnailsCollectionViewController showAddMoreSnapTooltipWithText:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fa8e88

// -[SCTimelineThumbnailsCollectionViewController firstCollapsedThumbnailCell]
// Type encoding: @16@0:8
// Implementation: 0x107fa8f90

// -[SCTimelineThumbnailsCollectionViewController setSegmentThumbnailSelectedAtIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107fa9044

// -[SCTimelineThumbnailsCollectionViewController videoPlaybackSession:didRenderFrameAtTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x107fa90e0

// -[SCTimelineThumbnailsCollectionViewController startEnterEditingModeWithThumbnailsHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x107fa92e8

// -[SCTimelineThumbnailsCollectionViewController revealThumbnails]
// Type encoding: v16@0:8
// Implementation: 0x107fa934c

// -[SCTimelineThumbnailsCollectionViewController deselectSelectedSegmentIfAny]
// Type encoding: B16@0:8
// Implementation: 0x107fa93a8

// -[SCTimelineThumbnailsCollectionViewController exitSegmentThumbnailsReordering]
// Type encoding: v16@0:8
// Implementation: 0x107fa93dc

// -[SCTimelineThumbnailsCollectionViewController restoreThumbnailsToInitialStateInReorder]
// Type encoding: v16@0:8
// Implementation: 0x107fa93e0

// -[SCTimelineThumbnailsCollectionViewController preferredHeight]
// Type encoding: d16@0:8
// Implementation: 0x107fa93e4

// -[SCTimelineThumbnailsCollectionViewController componentView]
// Type encoding: @16@0:8
// Implementation: 0x107fa93f0

// -[SCTimelineThumbnailsCollectionViewController numberOfSectionsInCollectionView:]
// Type encoding: q24@0:8@16
// Implementation: 0x107fa93f4

// -[SCTimelineThumbnailsCollectionViewController collectionView:numberOfItemsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x107fa93fc

// -[SCTimelineThumbnailsCollectionViewController collectionView:cellForItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107fa9488

// -[SCTimelineThumbnailsCollectionViewController collectionView:viewForSupplementaryElementOfKind:atIndexPath:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107fa9854

// -[SCTimelineThumbnailsCollectionViewController collectionView:shouldSelectItemAtIndexPath:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107fa998c

// -[SCTimelineThumbnailsCollectionViewController collectionView:didSelectItemAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107fa99fc

// -[SCTimelineThumbnailsCollectionViewController _handleTapForSingleSegment]
// Type encoding: v16@0:8
// Implementation: 0x107fa9a58

// -[SCTimelineThumbnailsCollectionViewController _selectSegmentThumbnailAtIndexPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fa9a9c

// -[SCTimelineThumbnailsCollectionViewController collectionView:didDeselectItemAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107fa9cb4

// -[SCTimelineThumbnailsCollectionViewController timelineConfiguration:didAddSegment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107fa9cb8

// -[SCTimelineThumbnailsCollectionViewController timelineConfiguration:didAddSegments:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107fa9cbc

// -[SCTimelineThumbnailsCollectionViewController timelineConfiguration:didDeleteSegment:atIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x107fa9cc0

// -[SCTimelineThumbnailsCollectionViewController timelineConfiguration:didUpdateSegmentTrim:atIndex:]
// Type encoding: v80@0:8@16{?={?=qiIq}{?=qiIq}}24q72
// Implementation: 0x107fa9cc4

// -[SCTimelineThumbnailsCollectionViewController timelineConfigurationWillDeleteAllSegments:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fa9cc8

// -[SCTimelineThumbnailsCollectionViewController timelineConfigurationDidDeleteAllSegments:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fa9ccc

// -[SCTimelineThumbnailsCollectionViewController timelineConfigurationDidUpdateThumbnails:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fa9cd0

// -[SCTimelineThumbnailsCollectionViewController timelineConfiguration:didMoveSegment:atIndex:toDestinationIndex:]
// Type encoding: v48@0:8@16@24q32q40
// Implementation: 0x107fa9f18

// -[SCTimelineThumbnailsCollectionViewController timelineConfigurationDidEnterReorderMode:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fa9f1c

// -[SCTimelineThumbnailsCollectionViewController timelineConfigurationDidExitReorderMode:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fa9f20

// -[SCTimelineThumbnailsCollectionViewController timelineConfigurationDidRestoreToInitialState:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fa9f24

// -[SCTimelineThumbnailsCollectionViewController timelineConfiguration:didUpdateThumbnailsForSegment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107fa9f28

// -[SCTimelineThumbnailsCollectionViewController isThumbnailsViewCollapsed]
// Type encoding: B16@0:8
// Implementation: 0x107faa0a8

// -[SCTimelineThumbnailsCollectionViewController isThumbnailsViewChangingLayout]
// Type encoding: B16@0:8
// Implementation: 0x107faa0ac

// -[SCTimelineThumbnailsCollectionViewController isThumbnailCellSelectedAtIndexPath:]
// Type encoding: B24@0:8@16
// Implementation: 0x107faa0bc

// -[SCTimelineThumbnailsCollectionViewController shouldEnableExtendedScrolling]
// Type encoding: B16@0:8
// Implementation: 0x107faa0c0

// -[SCTimelineThumbnailsCollectionViewController snapSegmentExpandedCell:didSeekToTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x107faa118

// -[SCTimelineThumbnailsCollectionViewController snapSegmentExpandedCell:didTrimSegmentToRange:]
// Type encoding: v72@0:8@16{?={?=qiIq}{?=qiIq}}24
// Implementation: 0x107faa178

// -[SCTimelineThumbnailsCollectionViewController snapSegmentExpandedCellFinishedSeeking:]
// Type encoding: v24@0:8@16
// Implementation: 0x107faa264

// -[SCTimelineThumbnailsCollectionViewController snapSegmentExpandedCellDidPressDelete:]
// Type encoding: v24@0:8@16
// Implementation: 0x107faa298

// -[SCTimelineThumbnailsCollectionViewController snapSegmentExpandedCellShouldShowDeleteButton:]
// Type encoding: B24@0:8@16
// Implementation: 0x107faa388

// -[SCTimelineThumbnailsCollectionViewController snapSegmentExpandedCellShouldHandleTouch:]
// Type encoding: B24@0:8@16
// Implementation: 0x107faa3b0

// -[SCTimelineThumbnailsCollectionViewController snapSegmentExpandedCell:didChangeStartTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x107faa3c8

// -[SCTimelineThumbnailsCollectionViewController snapSegmentExpandedCell:didChangeEndTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x107faa4a4

// -[SCTimelineThumbnailsCollectionViewController snapSegmentExpandedCell:didChangeSelectedTimeSlice:]
// Type encoding: v72@0:8@16{?={?=qiIq}{?=qiIq}}24
// Implementation: 0x107faa580

// -[SCTimelineThumbnailsCollectionViewController snapSegmentExpandedCell:didChangeSelectedTimeRange:]
// Type encoding: v72@0:8@16{?={?=qiIq}{?=qiIq}}24
// Implementation: 0x107faa584

// -[SCTimelineThumbnailsCollectionViewController didTapOnAddMoreButton]
// Type encoding: v16@0:8
// Implementation: 0x107faa588

// -[SCTimelineThumbnailsCollectionViewController editingIndex]
// Type encoding: q16@0:8
// Implementation: 0x107faa5c4

// -[SCTimelineThumbnailsCollectionViewController _isCollapsed]
// Type encoding: B16@0:8
// Implementation: 0x107faa648

// -[SCTimelineThumbnailsCollectionViewController _isCellSelectedAtIndexPath:]
// Type encoding: B24@0:8@16
// Implementation: 0x107faa658

// -[SCTimelineThumbnailsCollectionViewController _changeLayoutAnimated]
// Type encoding: v16@0:8
// Implementation: 0x107faa670

// -[SCTimelineThumbnailsCollectionViewController _changeCollectionViewLayout]
// Type encoding: v16@0:8
// Implementation: 0x107faa700

// -[SCTimelineThumbnailsCollectionViewController _shouldAutoScrollOnSelection]
// Type encoding: B16@0:8
// Implementation: 0x107faa9e4

// -[SCTimelineThumbnailsCollectionViewController _autoScrollIfNeededAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x107faaa50

// -[SCTimelineThumbnailsCollectionViewController _selectSegmentCellAtIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x107faabfc

// -[SCTimelineThumbnailsCollectionViewController _updateLayoutFromLastSelected:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fab220

// -[SCTimelineThumbnailsCollectionViewController _deselectSelectedSegmentAndCollapse]
// Type encoding: v16@0:8
// Implementation: 0x107fab37c

// -[SCTimelineThumbnailsCollectionViewController _deleteSegmentAtIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107fab45c

// -[SCTimelineThumbnailsCollectionViewController trimmingEnabled]
// Type encoding: B16@0:8
// Implementation: 0x107fab4e0

// -[SCTimelineThumbnailsCollectionViewController setTrimmingEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x107fab4f0

// -[SCTimelineThumbnailsCollectionViewController previewDelegate]
// Type encoding: @16@0:8
// Implementation: 0x107fab500

// -[SCTimelineThumbnailsCollectionViewController setPreviewDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fab520

// -[SCTimelineThumbnailsCollectionViewController showThumbnailRevealingAnimation]
// Type encoding: B16@0:8
// Implementation: 0x107fab534

// -[SCTimelineThumbnailsCollectionViewController setShowThumbnailRevealingAnimation:]
// Type encoding: v20@0:8B16
// Implementation: 0x107fab544

// -[SCTimelineThumbnailsCollectionViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107fab554

@end
