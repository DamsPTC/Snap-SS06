// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMultiSnapV2CollectionViewController
// Superclass: UICollectionViewController
// Address: 0x112bbf868

@interface SCMultiSnapV2CollectionViewController

// Property: segmentOperationDelegate; attributes: T@"<SCMultiSnapStateHandlerDelegate>",W,N,V_segmentOperationDelegate
// Property: previewDelegate; attributes: T@"<SCMultiSnapV2CollectionViewControllerDelegate>",W,N,V_previewDelegate
// Property: configuration; attributes: T@"<SCMultiSnapConfiguration>",R,N
// Property: editingIndex; attributes: Tq,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMultiSnapV2CollectionViewController initWithConfiguration:playerHandler:circumstanceEngine:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108cfad04

// -[SCMultiSnapV2CollectionViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x108cfae80

// -[SCMultiSnapV2CollectionViewController didReceiveMemoryWarning]
// Type encoding: v16@0:8
// Implementation: 0x108cfaff0

// -[SCMultiSnapV2CollectionViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x108cfb024

// -[SCMultiSnapV2CollectionViewController configuration]
// Type encoding: @16@0:8
// Implementation: 0x108cfb074

// -[SCMultiSnapV2CollectionViewController fetchAndSetThumbnailsForCapturedSingleSegment]
// Type encoding: v16@0:8
// Implementation: 0x108cfb0a4

// -[SCMultiSnapV2CollectionViewController startEnterEditingModeWithThumbnailsHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x108cfb264

// -[SCMultiSnapV2CollectionViewController deselectSelectedSegmentIfAny]
// Type encoding: B16@0:8
// Implementation: 0x108cfb33c

// -[SCMultiSnapV2CollectionViewController revealThumbnails]
// Type encoding: v16@0:8
// Implementation: 0x108cfb370

// -[SCMultiSnapV2CollectionViewController exitSegmentThumbnailsReordering]
// Type encoding: v16@0:8
// Implementation: 0x108cfb3cc

// -[SCMultiSnapV2CollectionViewController restoreThumbnailsToInitialStateInReorder]
// Type encoding: v16@0:8
// Implementation: 0x108cfb3d0

// -[SCMultiSnapV2CollectionViewController displayTapToTrimTooltip]
// Type encoding: v16@0:8
// Implementation: 0x108cfb3d4

// -[SCMultiSnapV2CollectionViewController preferredHeight]
// Type encoding: d16@0:8
// Implementation: 0x108cfb42c

// -[SCMultiSnapV2CollectionViewController componentView]
// Type encoding: @16@0:8
// Implementation: 0x108cfb438

// -[SCMultiSnapV2CollectionViewController updateConfigurationForFastPreview:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cfb43c

// -[SCMultiSnapV2CollectionViewController updateEditedThumbnails:forSegmentId:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x108cfb474

// -[SCMultiSnapV2CollectionViewController updateCaptureSegment:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x108cfb640

// -[SCMultiSnapV2CollectionViewController updateCaptureSegmentWithFinalDuration:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x108cfb800

// -[SCMultiSnapV2CollectionViewController editingIndex]
// Type encoding: q16@0:8
// Implementation: 0x108cfb83c

// -[SCMultiSnapV2CollectionViewController preferredContentSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x108cfb8c0

// -[SCMultiSnapV2CollectionViewController _cellsCollapsed]
// Type encoding: B16@0:8
// Implementation: 0x108cfba00

// -[SCMultiSnapV2CollectionViewController _autoScrollAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x108cfbabc

// -[SCMultiSnapV2CollectionViewController _frameForCellAtIndex:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}24@0:8q16
// Implementation: 0x108cfbb24

// -[SCMultiSnapV2CollectionViewController _cellAtIndexIsOffscreenToRight:]
// Type encoding: B24@0:8q16
// Implementation: 0x108cfbd2c

// -[SCMultiSnapV2CollectionViewController collectionView:numberOfItemsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x108cfbd84

// -[SCMultiSnapV2CollectionViewController numberOfSectionsInCollectionView:]
// Type encoding: q24@0:8@16
// Implementation: 0x108cfbd8c

// -[SCMultiSnapV2CollectionViewController collectionView:cellForItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108cfbdd4

// -[SCMultiSnapV2CollectionViewController collectionView:willDisplayCell:forItemAtIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x108cfbfac

// -[SCMultiSnapV2CollectionViewController collectionView:shouldSelectItemAtIndexPath:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x108cfc054

// -[SCMultiSnapV2CollectionViewController collectionView:shouldDeselectItemAtIndexPath:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x108cfc138

// -[SCMultiSnapV2CollectionViewController collectionView:didSelectItemAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108cfc1c4

// -[SCMultiSnapV2CollectionViewController collectionView:didDeselectItemAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108cfc2a8

// -[SCMultiSnapV2CollectionViewController collectionView:layout:sizeForItemAtIndexPath:]
// Type encoding: {CGSize=dd}40@0:8@16@24@32
// Implementation: 0x108cfc380

// -[SCMultiSnapV2CollectionViewController collectionView:layout:minimumInteritemSpacingForSectionAtIndex:]
// Type encoding: d40@0:8@16@24q32
// Implementation: 0x108cfc5e4

// -[SCMultiSnapV2CollectionViewController collectionView:layout:insetForSectionAtIndex:]
// Type encoding: {UIEdgeInsets=dddd}40@0:8@16@24q32
// Implementation: 0x108cfc5ec

// -[SCMultiSnapV2CollectionViewController videoPlaybackSession:didRenderFrameAtTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x108cfc674

// -[SCMultiSnapV2CollectionViewController snapSegmentExpandedCellShouldHandleTouch:]
// Type encoding: B24@0:8@16
// Implementation: 0x108cfc820

// -[SCMultiSnapV2CollectionViewController snapSegmentExpandedCell:didChangeStartTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x108cfc838

// -[SCMultiSnapV2CollectionViewController snapSegmentExpandedCell:didChangeEndTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x108cfc83c

// -[SCMultiSnapV2CollectionViewController snapSegmentExpandedCell:didSeekToTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x108cfc840

// -[SCMultiSnapV2CollectionViewController snapSegmentExpandedCell:didTrimSegmentToRange:]
// Type encoding: v72@0:8@16{?={?=qiIq}{?=qiIq}}24
// Implementation: 0x108cfc920

// -[SCMultiSnapV2CollectionViewController snapSegmentExpandedCellFinishedSeeking:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cfca14

// -[SCMultiSnapV2CollectionViewController snapSegmentExpandedCellDidPressDelete:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cfca48

// -[SCMultiSnapV2CollectionViewController snapSegmentExpandedCellShouldShowDeleteButton:]
// Type encoding: B24@0:8@16
// Implementation: 0x108cfcd2c

// -[SCMultiSnapV2CollectionViewController snapSegmentExpandedCell:didChangeSelectedTimeSlice:]
// Type encoding: v72@0:8@16{?={?=qiIq}{?=qiIq}}24
// Implementation: 0x108cfcdf4

// -[SCMultiSnapV2CollectionViewController snapSegmentExpandedCell:didChangeSelectedTimeRange:]
// Type encoding: v72@0:8@16{?={?=qiIq}{?=qiIq}}24
// Implementation: 0x108cfcdf8

// -[SCMultiSnapV2CollectionViewController snapSegmentExpandedCell:didMoveSplitterToX:canSplit:readyToSplit:]
// Type encoding: v40@0:8@16d24B32B36
// Implementation: 0x108cfcdfc

// -[SCMultiSnapV2CollectionViewController _splitTooltipHandlerForCell:]
// Type encoding: @24@0:8@16
// Implementation: 0x108cfce5c

// -[SCMultiSnapV2CollectionViewController _isCapturing]
// Type encoding: B16@0:8
// Implementation: 0x108cfcf60

// -[SCMultiSnapV2CollectionViewController _segmentCellAtIndex:]
// Type encoding: @24@0:8q16
// Implementation: 0x108cfcf98

// -[SCMultiSnapV2CollectionViewController _updateCollectionViewCellsLayout]
// Type encoding: v16@0:8
// Implementation: 0x108cfd034

// -[SCMultiSnapV2CollectionViewController _selectSegmentAtIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x108cfd154

// -[SCMultiSnapV2CollectionViewController _deselectSelectedSegment]
// Type encoding: v16@0:8
// Implementation: 0x108cfd268

// -[SCMultiSnapV2CollectionViewController _currentPlayingIndex]
// Type encoding: q16@0:8
// Implementation: 0x108cfd2cc

// -[SCMultiSnapV2CollectionViewController _indexPathForSegmentAtIndex:]
// Type encoding: @24@0:8q16
// Implementation: 0x108cfd428

// -[SCMultiSnapV2CollectionViewController _hasOnlyOneSegment]
// Type encoding: B16@0:8
// Implementation: 0x108cfd43c

// -[SCMultiSnapV2CollectionViewController _setCollectionViewCellSelected:atIndexPath:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x108cfd488

// -[SCMultiSnapV2CollectionViewController _setSegmentCell:collapsed:withSegment:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x108cfd590

// -[SCMultiSnapV2CollectionViewController _isCellDemotedAtIndexPath:]
// Type encoding: B24@0:8@16
// Implementation: 0x108cfd804

// -[SCMultiSnapV2CollectionViewController segmentOperationDelegate]
// Type encoding: @16@0:8
// Implementation: 0x108cfd888

// -[SCMultiSnapV2CollectionViewController setSegmentOperationDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cfd8a8

// -[SCMultiSnapV2CollectionViewController previewDelegate]
// Type encoding: @16@0:8
// Implementation: 0x108cfd8bc

// -[SCMultiSnapV2CollectionViewController setPreviewDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cfd8dc

// -[SCMultiSnapV2CollectionViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108cfd8f0

@end
