// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCreativeToolsDurationCollectionViewController
// Superclass: UICollectionViewController
// Address: 0x112a9f7a8

@interface SCCreativeToolsDurationCollectionViewController

// Property: dataSource; attributes: T@"<SCCreativeToolsDurationCollectionViewControllerDataSource>",W,N,V_dataSource
// Property: delegate; attributes: T@"<SCCreativeToolsDurationCollectionViewControllerDelegate>",W,N,V_delegate
// Property: segment; attributes: T@"SCCreativeToolsDurationSegment",&,N,V_segment
// Property: isCompleteButtonHidden; attributes: TB,N
// Property: isTextToSpeechButtonHidden; attributes: TB,N
// Property: isTextToSpeechButtonSelected; attributes: TB,N,V_isTextToSpeechButtonSelected
// Property: isTimeSliceSelectionEnabled; attributes: TB,R,N
// Property: isSecondsGuidanceEnabled; attributes: TB,N,V_isSecondsGuidanceEnabled
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCreativeToolsDurationCollectionViewController initWithCollectionViewLayout:]
// Type encoding: @24@0:8@16
// Implementation: 0x105ddcb70

// -[SCCreativeToolsDurationCollectionViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x105ddcbd0

// -[SCCreativeToolsDurationCollectionViewController reset]
// Type encoding: v16@0:8
// Implementation: 0x105ddcc20

// -[SCCreativeToolsDurationCollectionViewController setSegment:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ddcc50

// -[SCCreativeToolsDurationCollectionViewController setIsCompleteButtonHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x105ddcd20

// -[SCCreativeToolsDurationCollectionViewController isCompleteButtonHidden]
// Type encoding: B16@0:8
// Implementation: 0x105ddcd30

// -[SCCreativeToolsDurationCollectionViewController setIsTextToSpeechButtonHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x105ddcd40

// -[SCCreativeToolsDurationCollectionViewController isTextToSpeechButtonHidden]
// Type encoding: B16@0:8
// Implementation: 0x105ddcd70

// -[SCCreativeToolsDurationCollectionViewController setIsTextToSpeechButtonSelected:]
// Type encoding: v20@0:8B16
// Implementation: 0x105ddcd80

// -[SCCreativeToolsDurationCollectionViewController isTimeSliceSelectionEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105ddce30

// -[SCCreativeToolsDurationCollectionViewController enableTimeSliceSelectionWithTimeSlice:animated:]
// Type encoding: v68@0:8{?={?=qiIq}{?=qiIq}}16B64
// Implementation: 0x105ddcf34

// -[SCCreativeToolsDurationCollectionViewController disableTimeSliceSelectionAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x105ddcfb0

// -[SCCreativeToolsDurationCollectionViewController preferredContentSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x105ddcff8

// -[SCCreativeToolsDurationCollectionViewController startEnterEditingModeWithThumbnailsHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x105ddd0dc

// -[SCCreativeToolsDurationCollectionViewController revealThumbnails]
// Type encoding: v16@0:8
// Implementation: 0x105ddd0e0

// -[SCCreativeToolsDurationCollectionViewController deselectSelectedSegmentIfAny]
// Type encoding: B16@0:8
// Implementation: 0x105ddd0e4

// -[SCCreativeToolsDurationCollectionViewController exitSegmentThumbnailsReordering]
// Type encoding: v16@0:8
// Implementation: 0x105ddd0ec

// -[SCCreativeToolsDurationCollectionViewController restoreThumbnailsToInitialStateInReorder]
// Type encoding: v16@0:8
// Implementation: 0x105ddd0f0

// -[SCCreativeToolsDurationCollectionViewController preferredHeight]
// Type encoding: d16@0:8
// Implementation: 0x105ddd0f4

// -[SCCreativeToolsDurationCollectionViewController componentView]
// Type encoding: @16@0:8
// Implementation: 0x105ddd100

// -[SCCreativeToolsDurationCollectionViewController videoPlaybackSession:didRenderFrameAtTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x105ddd104

// -[SCCreativeToolsDurationCollectionViewController collectionView:numberOfItemsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x105ddd36c

// -[SCCreativeToolsDurationCollectionViewController collectionView:cellForItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105ddd374

// -[SCCreativeToolsDurationCollectionViewController collectionView:layout:sizeForItemAtIndexPath:]
// Type encoding: {CGSize=dd}40@0:8@16@24@32
// Implementation: 0x105ddd3f4

// -[SCCreativeToolsDurationCollectionViewController collectionView:layout:insetForSectionAtIndex:]
// Type encoding: {UIEdgeInsets=dddd}40@0:8@16@24q32
// Implementation: 0x105ddd490

// -[SCCreativeToolsDurationCollectionViewController snapSegmentExpandedCell:didSeekToTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x105ddd4a4

// -[SCCreativeToolsDurationCollectionViewController snapSegmentExpandedCell:didTrimSegmentToRange:]
// Type encoding: v72@0:8@16{?={?=qiIq}{?=qiIq}}24
// Implementation: 0x105ddd50c

// -[SCCreativeToolsDurationCollectionViewController snapSegmentExpandedCellFinishedSeeking:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ddd644

// -[SCCreativeToolsDurationCollectionViewController snapSegmentExpandedCellDidPressDelete:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ddd680

// -[SCCreativeToolsDurationCollectionViewController snapSegmentExpandedCellShouldShowDeleteButton:]
// Type encoding: B24@0:8@16
// Implementation: 0x105ddd684

// -[SCCreativeToolsDurationCollectionViewController snapSegmentExpandedCellShouldHandleTouch:]
// Type encoding: B24@0:8@16
// Implementation: 0x105ddd68c

// -[SCCreativeToolsDurationCollectionViewController snapSegmentExpandedCell:didChangeStartTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x105ddd694

// -[SCCreativeToolsDurationCollectionViewController snapSegmentExpandedCell:didChangeEndTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x105ddd698

// -[SCCreativeToolsDurationCollectionViewController snapSegmentExpandedCell:didChangeSelectedTimeSlice:]
// Type encoding: v72@0:8@16{?={?=qiIq}{?=qiIq}}24
// Implementation: 0x105ddd69c

// -[SCCreativeToolsDurationCollectionViewController snapSegmentExpandedCell:didChangeSelectedTimeRange:]
// Type encoding: v72@0:8@16{?={?=qiIq}{?=qiIq}}24
// Implementation: 0x105ddd704

// -[SCCreativeToolsDurationCollectionViewController _setupViews]
// Type encoding: v16@0:8
// Implementation: 0x105ddd76c

// -[SCCreativeToolsDurationCollectionViewController _updateConstraints]
// Type encoding: v16@0:8
// Implementation: 0x105dddd44

// -[SCCreativeToolsDurationCollectionViewController _deactivateConstraints]
// Type encoding: v16@0:8
// Implementation: 0x105dde62c

// -[SCCreativeToolsDurationCollectionViewController _completeButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x105dde678

// -[SCCreativeToolsDurationCollectionViewController _ttsButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x105dde6b4

// -[SCCreativeToolsDurationCollectionViewController _updateSegmentCell:withSegment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105dde730

// -[SCCreativeToolsDurationCollectionViewController dataSource]
// Type encoding: @16@0:8
// Implementation: 0x105dde85c

// -[SCCreativeToolsDurationCollectionViewController setDataSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dde87c

// -[SCCreativeToolsDurationCollectionViewController delegate]
// Type encoding: @16@0:8
// Implementation: 0x105dde890

// -[SCCreativeToolsDurationCollectionViewController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dde8b0

// -[SCCreativeToolsDurationCollectionViewController segment]
// Type encoding: @16@0:8
// Implementation: 0x105dde8c4

// -[SCCreativeToolsDurationCollectionViewController isTextToSpeechButtonSelected]
// Type encoding: B16@0:8
// Implementation: 0x105dde8d4

// -[SCCreativeToolsDurationCollectionViewController isSecondsGuidanceEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105dde8e4

// -[SCCreativeToolsDurationCollectionViewController setIsSecondsGuidanceEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x105dde8f4

// -[SCCreativeToolsDurationCollectionViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105dde904

@end
