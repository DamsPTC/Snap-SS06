// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesStoriesTabCell
// Superclass: UICollectionViewCell
// Address: 0x112b88778

@interface SCMemoriesStoriesTabCell

// Property: containerView; attributes: T@"UIView",R,N,V_containerView
// Property: imageView; attributes: T@"UIImageView",R,N,V_imageView
// Property: imageWrapperView; attributes: T@"UIView",R,N,V_imageWrapperView
// Property: headerContainerView; attributes: T@"UIView",R,N,V_headerContainerView
// Property: labelsContainer; attributes: T@"UIView",R,N,V_labelsContainer
// Property: titleLabel; attributes: T@"UILabel",R,N,V_titleLabel
// Property: subtitleLabel; attributes: T@"UILabel",R,N,V_subtitleLabel
// Property: subtitleIcon; attributes: T@"UIImageView",R,N,V_subtitleIcon
// Property: headerContainerViewTopConstraint; attributes: T@"NSLayoutConstraint",&,N,V_headerContainerViewTopConstraint
// Property: headerContainerViewHeightConstraint; attributes: T@"NSLayoutConstraint",&,N,V_headerContainerViewHeightConstraint
// Property: imageViewWrapperWidthConstraint; attributes: T@"NSLayoutConstraint",&,N,V_imageViewWrapperWidthConstraint
// Property: imageViewWrapperHeightConstraint; attributes: T@"NSLayoutConstraint",&,N,V_imageViewWrapperHeightConstraint
// Property: subtitleLabelLeadingConstraint; attributes: T@"NSLayoutConstraint",&,N,V_subtitleLabelLeadingConstraint
// Property: viewModel; attributes: T@"SCMemoriesStoryViewModel",R,N,V_viewModel
// Property: type; attributes: Tq,N,V_type
// Property: editDataMutator; attributes: T@"SCLazy",R,N,V_editDataMutator
// Property: encryptedContentManager; attributes: T@"SCLazy",R,N,V_encryptedContentManager
// Property: cachingMediaManager; attributes: T@"SCLazy",R,N,V_cachingMediaManager
// Property: memoriesEntrySyncStatusGeneratorBuilder; attributes: T@"<SCMemoriesEntrySyncStatusGeneratorBuilder>",R,N,V_memoriesEntrySyncStatusGeneratorBuilder
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: disableMode; attributes: TB,N,V_disableMode

// -[SCMemoriesStoriesTabCell initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x107e7e638

// -[SCMemoriesStoriesTabCell setViewModel:offset:selectMode:disableMode:snapThumbnailGenerator:editDataMutator:encryptedContentManager:cachingMediaManager:memoriesEntryThumbnailGeneratorBuilder:memoriesEntrySyncStatusGeneratorBuilder:]
// Type encoding: v88@0:8@16d24B32B36@40@48@56@64@72@80
// Implementation: 0x107e7fbf0

// -[SCMemoriesStoriesTabCell animateLongTapForTouchLocation:reverse:]
// Type encoding: v36@0:8{CGPoint=dd}16B32
// Implementation: 0x107e7fbf4

// -[SCMemoriesStoriesTabCell setSelected:selectOverlayImage:snapIds:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x107e7fdf4

// -[SCMemoriesStoriesTabCell setSelectionOrderNumber:orderNumbersBySnapId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e7fdf8

// -[SCMemoriesStoriesTabCell interactionMode]
// Type encoding: Q16@0:8
// Implementation: 0x107e7fdfc

// -[SCMemoriesStoriesTabCell setSelectMode:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e7fe04

// -[SCMemoriesStoriesTabCell canSelectAtPoint:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x107e7fe08

// -[SCMemoriesStoriesTabCell setDisableMode:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e7fe10

// -[SCMemoriesStoriesTabCell startGeneratingUpdates]
// Type encoding: v16@0:8
// Implementation: 0x107e7fe94

// -[SCMemoriesStoriesTabCell stopGeneratingUpdates]
// Type encoding: v16@0:8
// Implementation: 0x107e7fe98

// -[SCMemoriesStoriesTabCell disableMode]
// Type encoding: B16@0:8
// Implementation: 0x107e7fe9c

// -[SCMemoriesStoriesTabCell viewModel]
// Type encoding: @16@0:8
// Implementation: 0x107e7feac

// -[SCMemoriesStoriesTabCell type]
// Type encoding: q16@0:8
// Implementation: 0x107e7febc

// -[SCMemoriesStoriesTabCell setType:]
// Type encoding: v24@0:8q16
// Implementation: 0x107e7fecc

// -[SCMemoriesStoriesTabCell editDataMutator]
// Type encoding: @16@0:8
// Implementation: 0x107e7fedc

// -[SCMemoriesStoriesTabCell encryptedContentManager]
// Type encoding: @16@0:8
// Implementation: 0x107e7feec

// -[SCMemoriesStoriesTabCell cachingMediaManager]
// Type encoding: @16@0:8
// Implementation: 0x107e7fefc

// -[SCMemoriesStoriesTabCell memoriesEntrySyncStatusGeneratorBuilder]
// Type encoding: @16@0:8
// Implementation: 0x107e7ff0c

// -[SCMemoriesStoriesTabCell containerView]
// Type encoding: @16@0:8
// Implementation: 0x107e7ff1c

// -[SCMemoriesStoriesTabCell imageView]
// Type encoding: @16@0:8
// Implementation: 0x107e7ff2c

// -[SCMemoriesStoriesTabCell imageWrapperView]
// Type encoding: @16@0:8
// Implementation: 0x107e7ff3c

// -[SCMemoriesStoriesTabCell headerContainerView]
// Type encoding: @16@0:8
// Implementation: 0x107e7ff4c

// -[SCMemoriesStoriesTabCell labelsContainer]
// Type encoding: @16@0:8
// Implementation: 0x107e7ff5c

// -[SCMemoriesStoriesTabCell titleLabel]
// Type encoding: @16@0:8
// Implementation: 0x107e7ff6c

// -[SCMemoriesStoriesTabCell subtitleLabel]
// Type encoding: @16@0:8
// Implementation: 0x107e7ff7c

// -[SCMemoriesStoriesTabCell subtitleIcon]
// Type encoding: @16@0:8
// Implementation: 0x107e7ff8c

// -[SCMemoriesStoriesTabCell headerContainerViewTopConstraint]
// Type encoding: @16@0:8
// Implementation: 0x107e7ff9c

// -[SCMemoriesStoriesTabCell setHeaderContainerViewTopConstraint:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e7ffac

// -[SCMemoriesStoriesTabCell headerContainerViewHeightConstraint]
// Type encoding: @16@0:8
// Implementation: 0x107e7ffec

// -[SCMemoriesStoriesTabCell setHeaderContainerViewHeightConstraint:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e7fffc

// -[SCMemoriesStoriesTabCell imageViewWrapperWidthConstraint]
// Type encoding: @16@0:8
// Implementation: 0x107e8003c

// -[SCMemoriesStoriesTabCell setImageViewWrapperWidthConstraint:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e8004c

// -[SCMemoriesStoriesTabCell imageViewWrapperHeightConstraint]
// Type encoding: @16@0:8
// Implementation: 0x107e8008c

// -[SCMemoriesStoriesTabCell setImageViewWrapperHeightConstraint:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e8009c

// -[SCMemoriesStoriesTabCell subtitleLabelLeadingConstraint]
// Type encoding: @16@0:8
// Implementation: 0x107e800dc

// -[SCMemoriesStoriesTabCell setSubtitleLabelLeadingConstraint:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e800ec

// -[SCMemoriesStoriesTabCell .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107e8012c

// +[SCMemoriesStoriesTabCell cellHeightForViewModel:]
// Type encoding: d24@0:8@16
// Implementation: 0x107e7fbe0

// +[SCMemoriesStoriesTabCell actionMenuHeightForPage:]
// Type encoding: d24@0:8q16
// Implementation: 0x107e7fbe8

@end
