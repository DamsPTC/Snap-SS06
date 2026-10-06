// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGalleryBaseStorySnapCell
// Superclass: UICollectionViewCell
// Address: 0x112b3bbf8

@interface SCGalleryBaseStorySnapCell

// Property: containerView; attributes: T@"UIView",R,N,V_containerView
// Property: favoriteIcon; attributes: T@"UIImageView",R,N,V_favoriteIcon
// Property: imageView; attributes: T@"UIImageView",R,N,V_imageView
// Property: viewModel; attributes: T@"SCMemoriesSnapCellViewModel",R,W,N,V_viewModel
// Property: isActionMenu; attributes: TB,N,V_isActionMenu
// Property: syncStatusGenerator; attributes: T@"SCGalleryEntrySyncStatusGenerator",&,N,V_syncStatusGenerator
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: disableMode; attributes: TB,N,V_disableMode

// -[SCGalleryBaseStorySnapCell initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x106e2ee9c

// -[SCGalleryBaseStorySnapCell dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106e2f76c

// -[SCGalleryBaseStorySnapCell prepareForReuse]
// Type encoding: v16@0:8
// Implementation: 0x106e2f7f4

// -[SCGalleryBaseStorySnapCell setViewModel:selectMode:encryptedContentManager:cachingMediaManager:memoriesEntrySyncStatusGeneratorBuilder:]
// Type encoding: v52@0:8@16B24@28@36@44
// Implementation: 0x106e2f8e4

// -[SCGalleryBaseStorySnapCell updateUI]
// Type encoding: v16@0:8
// Implementation: 0x106e2fcd0

// -[SCGalleryBaseStorySnapCell _favoriteIconLayoutConstraints]
// Type encoding: @16@0:8
// Implementation: 0x106e2fcd4

// -[SCGalleryBaseStorySnapCell sourceViewForOpera]
// Type encoding: @16@0:8
// Implementation: 0x106e2fcdc

// -[SCGalleryBaseStorySnapCell animateTap:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e2fce4

// -[SCGalleryBaseStorySnapCell startGeneratingUpdates]
// Type encoding: v16@0:8
// Implementation: 0x106e2fdc8

// -[SCGalleryBaseStorySnapCell stopGeneratingUpdates]
// Type encoding: v16@0:8
// Implementation: 0x106e2fdd8

// -[SCGalleryBaseStorySnapCell _requestThumbnail]
// Type encoding: v16@0:8
// Implementation: 0x106e2fde8

// -[SCGalleryBaseStorySnapCell _requestImage]
// Type encoding: v16@0:8
// Implementation: 0x106e2fe54

// -[SCGalleryBaseStorySnapCell _updateLoadingIndicator:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e30148

// -[SCGalleryBaseStorySnapCell _cancelMiniThumbnailBlock]
// Type encoding: v16@0:8
// Implementation: 0x106e30280

// -[SCGalleryBaseStorySnapCell _startLoading]
// Type encoding: v16@0:8
// Implementation: 0x106e302c4

// -[SCGalleryBaseStorySnapCell _stopLoading]
// Type encoding: v16@0:8
// Implementation: 0x106e30494

// -[SCGalleryBaseStorySnapCell _shouldShowLoadingIndicator:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e304c4

// -[SCGalleryBaseStorySnapCell _addIncompatibleIcon]
// Type encoding: v16@0:8
// Implementation: 0x106e3053c

// -[SCGalleryBaseStorySnapCell transitioningPosterFrame]
// Type encoding: @16@0:8
// Implementation: 0x106e307b4

// -[SCGalleryBaseStorySnapCell transitioningImage]
// Type encoding: @16@0:8
// Implementation: 0x106e30888

// -[SCGalleryBaseStorySnapCell transitioningExpandingView]
// Type encoding: @16@0:8
// Implementation: 0x106e30898

// -[SCGalleryBaseStorySnapCell setTransitioningInitialImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e308c8

// -[SCGalleryBaseStorySnapCell syncStatusGenerator:didUpdateStatus:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106e308d8

// -[SCGalleryBaseStorySnapCell setSelected:selectOverlayImage:snapIds:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x106e308dc

// -[SCGalleryBaseStorySnapCell setSelectMode:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e309e4

// -[SCGalleryBaseStorySnapCell setSelectionOrderNumber:orderNumbersBySnapId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106e309f4

// -[SCGalleryBaseStorySnapCell animateLongTapForTouchLocation:reverse:]
// Type encoding: v36@0:8{CGPoint=dd}16B32
// Implementation: 0x106e309f8

// -[SCGalleryBaseStorySnapCell interactionMode]
// Type encoding: Q16@0:8
// Implementation: 0x106e309fc

// -[SCGalleryBaseStorySnapCell disableMode]
// Type encoding: B16@0:8
// Implementation: 0x106e30a04

// -[SCGalleryBaseStorySnapCell setDisableMode:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e30a14

// -[SCGalleryBaseStorySnapCell imageView]
// Type encoding: @16@0:8
// Implementation: 0x106e30a24

// -[SCGalleryBaseStorySnapCell viewModel]
// Type encoding: @16@0:8
// Implementation: 0x106e30a34

// -[SCGalleryBaseStorySnapCell isActionMenu]
// Type encoding: B16@0:8
// Implementation: 0x106e30a54

// -[SCGalleryBaseStorySnapCell setIsActionMenu:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e30a64

// -[SCGalleryBaseStorySnapCell syncStatusGenerator]
// Type encoding: @16@0:8
// Implementation: 0x106e30a74

// -[SCGalleryBaseStorySnapCell setSyncStatusGenerator:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e30a84

// -[SCGalleryBaseStorySnapCell containerView]
// Type encoding: @16@0:8
// Implementation: 0x106e30ac4

// -[SCGalleryBaseStorySnapCell favoriteIcon]
// Type encoding: @16@0:8
// Implementation: 0x106e30ad4

// -[SCGalleryBaseStorySnapCell .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106e30ae4

@end
