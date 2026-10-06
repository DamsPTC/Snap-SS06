// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightRepliesTabView
// Superclass: SCSpotlightRepliesTappableContainerView
// Address: 0x112ad6668

@interface SCSpotlightRepliesTabView

// Property: delegate; attributes: T@"<SCSpotlightRepliesTabViewDelegate>",W,N,V_delegate
// Property: repliesInputView; attributes: T@"SCSpotlightRepliesInputView",R,N
// Property: contentCollectionView; attributes: T@"UICollectionView",R,N,V_contentCollectionView
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpotlightRepliesTabView initWithViewMode:repliesDataFetcher:actionHandler:sectionDataProvider:snapInteractionInfo:bitmojiSelfieProvider:avatarProvider:repliesLogger:spotlightRepliesUpdateAnnouncer:userPreferences:repliesActionsConfig:commentPosterThumbnailFetcher:circumstanceEngine:storiesConfigProvider:commentsSnapReplyActionsConfig:commentsStickerPickerExposer:creatorInfo:commentsAttachmentFetcher:]
// Type encoding: @160@0:8Q16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152
// Implementation: 0x10625e33c

// -[SCSpotlightRepliesTabView repliesInputView]
// Type encoding: @16@0:8
// Implementation: 0x10625e7b0

// -[SCSpotlightRepliesTabView _setupViews]
// Type encoding: v16@0:8
// Implementation: 0x10625e7e0

// -[SCSpotlightRepliesTabView _setupCollectionView]
// Type encoding: v16@0:8
// Implementation: 0x10625e81c

// -[SCSpotlightRepliesTabView _setUpStickerDrawerContainerIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10625eb70

// -[SCSpotlightRepliesTabView _setupBottomView]
// Type encoding: v16@0:8
// Implementation: 0x10625ec8c

// -[SCSpotlightRepliesTabView _setupTopShadowToView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10625ecb8

// -[SCSpotlightRepliesTabView _setupInputViewIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10625ee60

// -[SCSpotlightRepliesTabView _setupApproveRejectAllBottomViewIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10625f078

// -[SCSpotlightRepliesTabView _setupConstraints]
// Type encoding: v16@0:8
// Implementation: 0x10625f10c

// -[SCSpotlightRepliesTabView _setupInputViewConstraintsIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10625f138

// -[SCSpotlightRepliesTabView _setupCollectionViewConstraints]
// Type encoding: v16@0:8
// Implementation: 0x10625f62c

// -[SCSpotlightRepliesTabView _setupApproveRejectAllBottomViewConstraintsIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10625f8e0

// -[SCSpotlightRepliesTabView _registerNotifications]
// Type encoding: v16@0:8
// Implementation: 0x10625fb28

// -[SCSpotlightRepliesTabView keyboardWillShow:]
// Type encoding: v24@0:8@16
// Implementation: 0x10625fc00

// -[SCSpotlightRepliesTabView keyboardWillHide:]
// Type encoding: v24@0:8@16
// Implementation: 0x10625fdcc

// -[SCSpotlightRepliesTabView keyPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x10625fe5c

// -[SCSpotlightRepliesTabView _addKeyboardDismissalGesture]
// Type encoding: v16@0:8
// Implementation: 0x10625ff34

// -[SCSpotlightRepliesTabView _removeReplyToCommentPreview]
// Type encoding: v16@0:8
// Implementation: 0x10625ffa4

// -[SCSpotlightRepliesTabView _dismissKeyboard]
// Type encoding: v16@0:8
// Implementation: 0x106260030

// -[SCSpotlightRepliesTabView _removeFavByCreatorTooltipIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106260060

// -[SCSpotlightRepliesTabView scrollViewDidScroll:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062600a4

// -[SCSpotlightRepliesTabView collectionView:willDisplayCell:forItemAtIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1062600b4

// -[SCSpotlightRepliesTabView scrollViewWillBeginDragging:]
// Type encoding: v24@0:8@16
// Implementation: 0x106260154

// -[SCSpotlightRepliesTabView scrollToEndDetector:scrollViewWillReachEnd:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1062602dc

// -[SCSpotlightRepliesTabView sectionBasedCollectionViewUpdaterWillUpdateCollectionView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106260364

// -[SCSpotlightRepliesTabView sectionBasedCollectionViewUpdater:didUpdateSectionsWithAnimationFinished:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106260368

// -[SCSpotlightRepliesTabView sectionBasedCollectionViewUpdater:didUpdateLayoutWithAnimationFinished:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106260470

// -[SCSpotlightRepliesTabView sectionBasedCollectionViewUpdater:didSetUpSections:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106260474

// -[SCSpotlightRepliesTabView sectionBasedCollectionViewUpdater:didTearDownSections:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106260478

// -[SCSpotlightRepliesTabView sectionInsetsForSectionBasedCollectionViewUpdater:]
// Type encoding: {UIEdgeInsets=dddd}24@0:8@16
// Implementation: 0x10626047c

// -[SCSpotlightRepliesTabView presentingViewControllerForSectionBasedCollectionViewUpdater:]
// Type encoding: @24@0:8@16
// Implementation: 0x106260490

// -[SCSpotlightRepliesTabView _logContentCommentImpressionsWithCollectionView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062604e0

// -[SCSpotlightRepliesTabView favByCreatorIconViewDidTap:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062609fc

// -[SCSpotlightRepliesTabView spotlightRepliesInputView:shouldShowStickerDrawer:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106260adc

// -[SCSpotlightRepliesTabView _switchInputViewBottomAnchorToStickerDrawer:]
// Type encoding: v20@0:8B16
// Implementation: 0x106260bbc

// -[SCSpotlightRepliesTabView gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x106260c88

// -[SCSpotlightRepliesTabView delegate]
// Type encoding: @16@0:8
// Implementation: 0x106260cd4

// -[SCSpotlightRepliesTabView setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106260cf4

// -[SCSpotlightRepliesTabView contentCollectionView]
// Type encoding: @16@0:8
// Implementation: 0x106260d08

// -[SCSpotlightRepliesTabView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106260d18

@end
