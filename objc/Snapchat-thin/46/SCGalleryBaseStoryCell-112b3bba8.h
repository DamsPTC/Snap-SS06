// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGalleryBaseStoryCell
// Superclass: SCMemoriesStoriesTabCell
// Address: 0x112b3bba8

@interface SCGalleryBaseStoryCell

// Property: selectMode; attributes: TB,N,V_selectMode
// Property: snapsCollectionView; attributes: T@"UICollectionView",R,N,V_snapsCollectionView
// Property: titleField; attributes: T@"UITextField",R,N,V_titleField
// Property: delegate; attributes: T@"<SCMemoriesBaseStoryCellDelegate>",W,N,V_delegate
// Property: isActionMenu; attributes: TB,N,V_isActionMenu
// Property: containerViewController; attributes: T@"UIViewController",W,N,V_containerViewController
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGalleryBaseStoryCell initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x106e2960c

// -[SCGalleryBaseStoryCell dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106e2aa8c

// -[SCGalleryBaseStoryCell _handleImageViewLongPressGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e2ab0c

// -[SCGalleryBaseStoryCell _handleImageViewActionMenuLongPressGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e2ac7c

// -[SCGalleryBaseStoryCell _animateImageView:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e2ad1c

// -[SCGalleryBaseStoryCell _updatePlaceholder]
// Type encoding: v16@0:8
// Implementation: 0x106e2ae18

// -[SCGalleryBaseStoryCell _textFieldEditingChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e2af6c

// -[SCGalleryBaseStoryCell prepareForReuse]
// Type encoding: v16@0:8
// Implementation: 0x106e2af74

// -[SCGalleryBaseStoryCell isExpanded]
// Type encoding: B16@0:8
// Implementation: 0x106e2b0d4

// -[SCGalleryBaseStoryCell invalidateCollectionViewLayoutIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106e2b0e4

// -[SCGalleryBaseStoryCell setViewModel:offset:selectMode:disableMode:snapThumbnailGenerator:editDataMutator:encryptedContentManager:cachingMediaManager:memoriesEntryThumbnailGeneratorBuilder:memoriesEntrySyncStatusGeneratorBuilder:]
// Type encoding: v88@0:8@16d24B32B36@40@48@56@64@72@80
// Implementation: 0x106e2b148

// -[SCGalleryBaseStoryCell scrollViewDidScroll:page:]
// Type encoding: v32@0:8d16q24
// Implementation: 0x106e2b728

// -[SCGalleryBaseStoryCell _showIncompatibleIcon:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e2b72c

// -[SCGalleryBaseStoryCell _maskImage:]
// Type encoding: @32@0:8{CGSize=dd}16
// Implementation: 0x106e2ba08

// -[SCGalleryBaseStoryCell _subtitleIcon]
// Type encoding: @16@0:8
// Implementation: 0x106e2ba10

// -[SCGalleryBaseStoryCell _shouldShowSubtitleIcon]
// Type encoding: B16@0:8
// Implementation: 0x106e2ba18

// -[SCGalleryBaseStoryCell _lastPage]
// Type encoding: q16@0:8
// Implementation: 0x106e2ba20

// -[SCGalleryBaseStoryCell _viewMore]
// Type encoding: v16@0:8
// Implementation: 0x106e2ba90

// -[SCGalleryBaseStoryCell cellForSnapId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e2bb48

// -[SCGalleryBaseStoryCell didToggleExpand:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e2bf04

// -[SCGalleryBaseStoryCell animateActionMenu:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e2bf74

// -[SCGalleryBaseStoryCell _titleString:]
// Type encoding: @20@0:8B16
// Implementation: 0x106e2bf9c

// -[SCGalleryBaseStoryCell _subtitleString:]
// Type encoding: @20@0:8B16
// Implementation: 0x106e2c080

// -[SCGalleryBaseStoryCell updateLayout:reloadData:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x106e2c148

// -[SCGalleryBaseStoryCell setSelectionHelper:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e2cd10

// -[SCGalleryBaseStoryCell _setImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e2cd24

// -[SCGalleryBaseStoryCell thumbnailGenerator:didUpdateSnapThumbnailWithImage:snap:duration:]
// Type encoding: v48@0:8@16@24@32d40
// Implementation: 0x106e2cd74

// -[SCGalleryBaseStoryCell thumbnailGenerator:didUpdateStoryThumbnailWithImage:snap:latestSnaps:duration:]
// Type encoding: v56@0:8@16@24@32@40d48
// Implementation: 0x106e2cd78

// -[SCGalleryBaseStoryCell thumbnailGenerator:didLoadMiniThumbnail:snap:duration:]
// Type encoding: v48@0:8@16@24@32d40
// Implementation: 0x106e2cf28

// -[SCGalleryBaseStoryCell startGeneratingUpdates]
// Type encoding: v16@0:8
// Implementation: 0x106e2cf9c

// -[SCGalleryBaseStoryCell stopGeneratingUpdates]
// Type encoding: v16@0:8
// Implementation: 0x106e2d0bc

// -[SCGalleryBaseStoryCell transitioningPosterFrame]
// Type encoding: @16@0:8
// Implementation: 0x106e2d1dc

// -[SCGalleryBaseStoryCell transitioningImage]
// Type encoding: @16@0:8
// Implementation: 0x106e2d228

// -[SCGalleryBaseStoryCell transitioningExpandingView]
// Type encoding: @16@0:8
// Implementation: 0x106e2d26c

// -[SCGalleryBaseStoryCell setTransitioningInitialImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e2d270

// -[SCGalleryBaseStoryCell collectionView:numberOfItemsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x106e2d2a8

// -[SCGalleryBaseStoryCell collectionView:cellForItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106e2d308

// -[SCGalleryBaseStoryCell collectionView:willDisplayCell:forItemAtIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106e2d310

// -[SCGalleryBaseStoryCell collectionView:didEndDisplayingCell:forItemAtIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106e2d5c0

// -[SCGalleryBaseStoryCell textField:shouldChangeCharactersInRange:replacementString:]
// Type encoding: B48@0:8@16{_NSRange=QQ}24@40
// Implementation: 0x106e2d60c

// -[SCGalleryBaseStoryCell textFieldDidBeginEditing:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e2d71c

// -[SCGalleryBaseStoryCell textFieldDidEndEditing:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e2d778

// -[SCGalleryBaseStoryCell textFieldShouldReturn:]
// Type encoding: B24@0:8@16
// Implementation: 0x106e2d8fc

// -[SCGalleryBaseStoryCell setSelected:selectOverlayImage:snapIds:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x106e2d918

// -[SCGalleryBaseStoryCell interactionMode]
// Type encoding: Q16@0:8
// Implementation: 0x106e2e2d8

// -[SCGalleryBaseStoryCell setSelectMode:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e2e2f4

// -[SCGalleryBaseStoryCell canSelectAtPoint:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x106e2e310

// -[SCGalleryBaseStoryCell _touchItemCell]
// Type encoding: @16@0:8
// Implementation: 0x106e2e3d4

// -[SCGalleryBaseStoryCell _shouldTriggerViewMore]
// Type encoding: B16@0:8
// Implementation: 0x106e2e3f4

// -[SCGalleryBaseStoryCell _handleLongPressGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e2e458

// -[SCGalleryBaseStoryCell _handleTap:cell:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106e2e7ac

// -[SCGalleryBaseStoryCell _handleActionMenuLongPressGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e2e85c

// -[SCGalleryBaseStoryCell gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x106e2eab4

// -[SCGalleryBaseStoryCell gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106e2eafc

// -[SCGalleryBaseStoryCell _startThumbnailLatencyTimers]
// Type encoding: v16@0:8
// Implementation: 0x106e2eb30

// -[SCGalleryBaseStoryCell _invalidateTimers]
// Type encoding: v16@0:8
// Implementation: 0x106e2eb90

// -[SCGalleryBaseStoryCell _thumbnailLatencyTimerDidFire:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e2ebc4

// -[SCGalleryBaseStoryCell viewModel]
// Type encoding: @16@0:8
// Implementation: 0x106e2ebe0

// -[SCGalleryBaseStoryCell encryptedContentManager]
// Type encoding: @16@0:8
// Implementation: 0x106e2ebf0

// -[SCGalleryBaseStoryCell cachingMediaManager]
// Type encoding: @16@0:8
// Implementation: 0x106e2ec00

// -[SCGalleryBaseStoryCell memoriesEntrySyncStatusGeneratorBuilder]
// Type encoding: @16@0:8
// Implementation: 0x106e2ec10

// -[SCGalleryBaseStoryCell delegate]
// Type encoding: @16@0:8
// Implementation: 0x106e2ec20

// -[SCGalleryBaseStoryCell setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e2ec40

// -[SCGalleryBaseStoryCell isActionMenu]
// Type encoding: B16@0:8
// Implementation: 0x106e2ec54

// -[SCGalleryBaseStoryCell setIsActionMenu:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e2ec64

// -[SCGalleryBaseStoryCell containerViewController]
// Type encoding: @16@0:8
// Implementation: 0x106e2ec74

// -[SCGalleryBaseStoryCell setContainerViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e2ec94

// -[SCGalleryBaseStoryCell selectMode]
// Type encoding: B16@0:8
// Implementation: 0x106e2eca8

// -[SCGalleryBaseStoryCell snapsCollectionView]
// Type encoding: @16@0:8
// Implementation: 0x106e2ecb8

// -[SCGalleryBaseStoryCell titleField]
// Type encoding: @16@0:8
// Implementation: 0x106e2ecc8

// -[SCGalleryBaseStoryCell .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106e2ecd8

// +[SCGalleryBaseStoryCell _hasMore:]
// Type encoding: B24@0:8@16
// Implementation: 0x106e2b9bc

// +[SCGalleryBaseStoryCell cellHeightForViewModel:]
// Type encoding: d24@0:8@16
// Implementation: 0x106e2bda0

// +[SCGalleryBaseStoryCell actionMenuHeightForPage:]
// Type encoding: d24@0:8q16
// Implementation: 0x106e2bed0

// +[SCGalleryBaseStoryCell _snapsPerRow]
// Type encoding: q16@0:8
// Implementation: 0x106e2beec

// +[SCGalleryBaseStoryCell _cellSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x106e2bef4

@end
