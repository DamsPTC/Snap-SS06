// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewToolButton
// Superclass: SCPreviewToolButtonBase
// Address: 0x112bbe328

@interface SCPreviewToolButton

// Property: trashView; attributes: T@"UIImageView",&,N,V_trashView
// Property: trashGrown; attributes: TB,R,N,GisTrashGrown,V_trashGrown
// Property: imageViewContainer; attributes: T@"SCTransparentParentView",&,N,V_imageViewContainer
// Property: imageView; attributes: T@"UIImageView",&,N,V_imageView
// Property: badgeView; attributes: T@"SCCircularBadgeView",&,N,V_badgeView
// Property: loadingIndicatorView; attributes: T@"SIGLoadingIndicatorView",&,N,V_loadingIndicatorView
// Property: highlightedImageView; attributes: T@"UIImageView",&,N,V_highlightedImageView
// Property: highlightedImageViewMask; attributes: T@"UIImageView",&,N,V_highlightedImageViewMask
// Property: highlightedFillView; attributes: T@"SIGShapeView",&,N,V_highlightedFillView
// Property: selectedMaskImage; attributes: T@"UIImage",R,N,V_selectedMaskImage
// Property: selectionStyle; attributes: Tq,N,V_selectionStyle
// Property: badgeHidden; attributes: TB,N

// -[SCPreviewToolButton initWithImage:selectedMaskImage:iconStyle:]
// Type encoding: @40@0:8@16@24Q32
// Implementation: 0x108cceec8

// -[SCPreviewToolButton updateImageWithImageName:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ccf088

// -[SCPreviewToolButton updateSelectedImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ccf104

// -[SCPreviewToolButton updateImage:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x108ccf1f4

// -[SCPreviewToolButton setLoadingIndicatorVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ccf558

// -[SCPreviewToolButton badgeHidden]
// Type encoding: B16@0:8
// Implementation: 0x108ccf62c

// -[SCPreviewToolButton setBadgeHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ccf660

// -[SCPreviewToolButton layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x108ccf6ec

// -[SCPreviewToolButton setShowingHighlighted:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ccf820

// -[SCPreviewToolButton setHighlighted:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ccf89c

// -[SCPreviewToolButton shouldShowHighlighted]
// Type encoding: B16@0:8
// Implementation: 0x108ccf904

// -[SCPreviewToolButton setSelected:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ccf960

// -[SCPreviewToolButton setSelectionStyle:]
// Type encoding: v24@0:8q16
// Implementation: 0x108ccf9d4

// -[SCPreviewToolButton highlightedImageView]
// Type encoding: @16@0:8
// Implementation: 0x108ccfa44

// -[SCPreviewToolButton highlightedFillView]
// Type encoding: @16@0:8
// Implementation: 0x108ccfe1c

// -[SCPreviewToolButton badgeView]
// Type encoding: @16@0:8
// Implementation: 0x108ccffc0

// -[SCPreviewToolButton loadingIndicatorView]
// Type encoding: @16@0:8
// Implementation: 0x108cd0098

// -[SCPreviewToolButton _animateView:toScale:withDuration:delay:highlighted:completion:]
// Type encoding: v60@0:8@16d24d32d40B48@?52
// Implementation: 0x108cd0104

// -[SCPreviewToolButton preResizingAnimationWork:]
// Type encoding: v20@0:8B16
// Implementation: 0x108cd0198

// -[SCPreviewToolButton performResizingAnimationWithScale:isHighlighted:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x108cd0318

// -[SCPreviewToolButton _removeInFlightAnimationsForLayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cd0674

// -[SCPreviewToolButton _removeAllViewAnimations]
// Type encoding: v16@0:8
// Implementation: 0x108cd082c

// -[SCPreviewToolButton showTrashIcon]
// Type encoding: v16@0:8
// Implementation: 0x108cd0904

// -[SCPreviewToolButton _trashIconImage]
// Type encoding: @16@0:8
// Implementation: 0x108cd0bc0

// -[SCPreviewToolButton hideTrashIcon]
// Type encoding: v16@0:8
// Implementation: 0x108cd0ca8

// -[SCPreviewToolButton growTrashIcon]
// Type encoding: v16@0:8
// Implementation: 0x108cd0e88

// -[SCPreviewToolButton shrinkTrashIcon]
// Type encoding: v16@0:8
// Implementation: 0x108cd0f6c

// -[SCPreviewToolButton gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x108cd1050

// -[SCPreviewToolButton selectedMaskImage]
// Type encoding: @16@0:8
// Implementation: 0x108cd1104

// -[SCPreviewToolButton selectionStyle]
// Type encoding: q16@0:8
// Implementation: 0x108cd1114

// -[SCPreviewToolButton trashView]
// Type encoding: @16@0:8
// Implementation: 0x108cd1124

// -[SCPreviewToolButton setTrashView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cd1134

// -[SCPreviewToolButton isTrashGrown]
// Type encoding: B16@0:8
// Implementation: 0x108cd1174

// -[SCPreviewToolButton imageViewContainer]
// Type encoding: @16@0:8
// Implementation: 0x108cd1184

// -[SCPreviewToolButton setImageViewContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cd1194

// -[SCPreviewToolButton imageView]
// Type encoding: @16@0:8
// Implementation: 0x108cd11d4

// -[SCPreviewToolButton setImageView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cd11e4

// -[SCPreviewToolButton setBadgeView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cd1224

// -[SCPreviewToolButton setLoadingIndicatorView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cd1264

// -[SCPreviewToolButton setHighlightedImageView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cd12a4

// -[SCPreviewToolButton highlightedImageViewMask]
// Type encoding: @16@0:8
// Implementation: 0x108cd12e4

// -[SCPreviewToolButton setHighlightedImageViewMask:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cd12f4

// -[SCPreviewToolButton setHighlightedFillView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cd1334

// -[SCPreviewToolButton .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108cd1374

@end
