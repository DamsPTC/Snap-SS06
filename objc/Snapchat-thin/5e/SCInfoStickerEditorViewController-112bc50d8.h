// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCInfoStickerEditorViewController
// Superclass: UIViewController
// Address: 0x112bc50d8

@interface SCInfoStickerEditorViewController

// Property: blackOverlay; attributes: T@"UIView",&,N,V_blackOverlay
// Property: oldSticker; attributes: T@"SCPreviewStickerViewContentView",&,N,V_oldSticker
// Property: editingSticker; attributes: T@"SCPreviewStickerViewContentView",&,N,V_editingSticker
// Property: selectorManager; attributes: T@"<SCInfoStickerEditorSelectorManaging>",&,N,V_selectorManager
// Property: editingSelectorView; attributes: T@"UICollectionView",&,N,V_editingSelectorView
// Property: stickerCarousel; attributes: T@"UICollectionView",&,N,V_stickerCarousel
// Property: stickerCarouselManager; attributes: T@"<SCInfoStickerEditorCarouselManaging>",&,N,V_stickerCarouselManager
// Property: editingTextLabel; attributes: T@"SIGLabel",&,N,V_editingTextLabel
// Property: stickerBottomConstraint; attributes: T@"NSLayoutConstraint",&,N,V_stickerBottomConstraint
// Property: carouselBottomConstraint; attributes: T@"NSLayoutConstraint",&,N,V_carouselBottomConstraint
// Property: carouselGradientBottomConstraint; attributes: T@"NSLayoutConstraint",&,N,V_carouselGradientBottomConstraint
// Property: editingTextLabelBottomConstraint; attributes: T@"NSLayoutConstraint",&,N,V_editingTextLabelBottomConstraint
// Property: delegate; attributes: T@"<SCInfoStickerEditorViewControllerDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCInfoStickerEditorViewController initWithStickerView:stickerType:defaultTitle:userSession:userTaggingFriendsProvider:customStoriesDataFetcher:imageDownloader:remixSettingsService:circumstanceEngine:valdiRuntimeProvider:userTaggingCarousel:creativeToolsABProvider:]
// Type encoding: @112@0:8@16Q24@32@40@48@56@64@72@80@88@96@104
// Implementation: 0x108e6365c

// -[SCInfoStickerEditorViewController viewDidLayoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x108e6407c

// -[SCInfoStickerEditorViewController _initEditingSelectorView]
// Type encoding: v16@0:8
// Implementation: 0x108e64100

// -[SCInfoStickerEditorViewController _initEditingTextLabelWithText:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e64258

// -[SCInfoStickerEditorViewController _initStickerCarousel]
// Type encoding: v16@0:8
// Implementation: 0x108e64348

// -[SCInfoStickerEditorViewController _initActionButton]
// Type encoding: v16@0:8
// Implementation: 0x108e643fc

// -[SCInfoStickerEditorViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x108e64594

// -[SCInfoStickerEditorViewController _setupEditingSticker]
// Type encoding: v16@0:8
// Implementation: 0x108e64650

// -[SCInfoStickerEditorViewController _setupEditingSelectorView]
// Type encoding: v16@0:8
// Implementation: 0x108e648a0

// -[SCInfoStickerEditorViewController _setupUserTaggingCarousel]
// Type encoding: v16@0:8
// Implementation: 0x108e64b54

// -[SCInfoStickerEditorViewController _setupStickerCarousel]
// Type encoding: v16@0:8
// Implementation: 0x108e64e2c

// -[SCInfoStickerEditorViewController _setupEditingTextLabel]
// Type encoding: v16@0:8
// Implementation: 0x108e65368

// -[SCInfoStickerEditorViewController _setupActionButton]
// Type encoding: v16@0:8
// Implementation: 0x108e657a4

// -[SCInfoStickerEditorViewController viewWillAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e6597c

// -[SCInfoStickerEditorViewController viewDidAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e65a10

// -[SCInfoStickerEditorViewController viewWillDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e65b04

// -[SCInfoStickerEditorViewController _addTaggedSnapchatter:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e65b94

// -[SCInfoStickerEditorViewController _showBlackOverlay]
// Type encoding: v16@0:8
// Implementation: 0x108e65f68

// -[SCInfoStickerEditorViewController _setRemixExplanationLabelHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e66108

// -[SCInfoStickerEditorViewController _tappedBackground]
// Type encoding: v16@0:8
// Implementation: 0x108e661f4

// -[SCInfoStickerEditorViewController _finishEditing]
// Type encoding: v16@0:8
// Implementation: 0x108e661f8

// -[SCInfoStickerEditorViewController _hideBlackOverlayWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108e66510

// -[SCInfoStickerEditorViewController _keyboardWillShow:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e666ec

// -[SCInfoStickerEditorViewController _updateBottomLayoutConstraintWithNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e666f0

// -[SCInfoStickerEditorViewController stickerCarouselItemTapped]
// Type encoding: v16@0:8
// Implementation: 0x108e669a0

// -[SCInfoStickerEditorViewController didSelectSnapchatter:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e669a4

// -[SCInfoStickerEditorViewController collectionView:numberOfItemsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x108e669a8

// -[SCInfoStickerEditorViewController collectionView:cellForItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108e669f0

// -[SCInfoStickerEditorViewController collectionView:didSelectItemAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108e66ae8

// -[SCInfoStickerEditorViewController collectionView:layout:sizeForItemAtIndexPath:]
// Type encoding: {CGSize=dd}40@0:8@16@24@32
// Implementation: 0x108e66b1c

// -[SCInfoStickerEditorViewController _useFirstNameForTagging]
// Type encoding: B16@0:8
// Implementation: 0x108e66c28

// -[SCInfoStickerEditorViewController delegate]
// Type encoding: @16@0:8
// Implementation: 0x108e66c48

// -[SCInfoStickerEditorViewController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e66c68

// -[SCInfoStickerEditorViewController blackOverlay]
// Type encoding: @16@0:8
// Implementation: 0x108e66c7c

// -[SCInfoStickerEditorViewController setBlackOverlay:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e66c8c

// -[SCInfoStickerEditorViewController oldSticker]
// Type encoding: @16@0:8
// Implementation: 0x108e66ccc

// -[SCInfoStickerEditorViewController setOldSticker:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e66cdc

// -[SCInfoStickerEditorViewController editingSticker]
// Type encoding: @16@0:8
// Implementation: 0x108e66d1c

// -[SCInfoStickerEditorViewController setEditingSticker:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e66d2c

// -[SCInfoStickerEditorViewController selectorManager]
// Type encoding: @16@0:8
// Implementation: 0x108e66d6c

// -[SCInfoStickerEditorViewController setSelectorManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e66d7c

// -[SCInfoStickerEditorViewController editingSelectorView]
// Type encoding: @16@0:8
// Implementation: 0x108e66dbc

// -[SCInfoStickerEditorViewController setEditingSelectorView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e66dcc

// -[SCInfoStickerEditorViewController stickerCarousel]
// Type encoding: @16@0:8
// Implementation: 0x108e66e0c

// -[SCInfoStickerEditorViewController setStickerCarousel:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e66e1c

// -[SCInfoStickerEditorViewController stickerCarouselManager]
// Type encoding: @16@0:8
// Implementation: 0x108e66e5c

// -[SCInfoStickerEditorViewController setStickerCarouselManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e66e6c

// -[SCInfoStickerEditorViewController editingTextLabel]
// Type encoding: @16@0:8
// Implementation: 0x108e66eac

// -[SCInfoStickerEditorViewController setEditingTextLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e66ebc

// -[SCInfoStickerEditorViewController stickerBottomConstraint]
// Type encoding: @16@0:8
// Implementation: 0x108e66efc

// -[SCInfoStickerEditorViewController setStickerBottomConstraint:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e66f0c

// -[SCInfoStickerEditorViewController carouselBottomConstraint]
// Type encoding: @16@0:8
// Implementation: 0x108e66f4c

// -[SCInfoStickerEditorViewController setCarouselBottomConstraint:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e66f5c

// -[SCInfoStickerEditorViewController carouselGradientBottomConstraint]
// Type encoding: @16@0:8
// Implementation: 0x108e66f9c

// -[SCInfoStickerEditorViewController setCarouselGradientBottomConstraint:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e66fac

// -[SCInfoStickerEditorViewController editingTextLabelBottomConstraint]
// Type encoding: @16@0:8
// Implementation: 0x108e66fec

// -[SCInfoStickerEditorViewController setEditingTextLabelBottomConstraint:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e66ffc

// -[SCInfoStickerEditorViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108e6703c

@end
