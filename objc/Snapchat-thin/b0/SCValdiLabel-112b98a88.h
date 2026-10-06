// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCValdiLabel
// Superclass: UILabel
// Address: 0x112b98a88

@interface SCValdiLabel

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: text; attributes: T@"NSString",&,N
// Property: attributedText; attributes: T@"NSAttributedString",&,N
// Property: font; attributes: T@"UIFont",&,N
// Property: textColor; attributes: T@"UIColor",&,N
// Property: textAlignment; attributes: Tq,N

// -[SCValdiLabel initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x1080aa2b8

// -[SCValdiLabel dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1080aa32c

// -[SCValdiLabel valdi_applySlowClipping:animator:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x1080aa374

// -[SCValdiLabel layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x1080aa378

// -[SCValdiLabel convertPoint:fromView:]
// Type encoding: {CGPoint=dd}40@0:8{CGPoint=dd}16@32
// Implementation: 0x1080aa42c

// -[SCValdiLabel convertPoint:toView:]
// Type encoding: {CGPoint=dd}40@0:8{CGPoint=dd}16@32
// Implementation: 0x1080aa430

// -[SCValdiLabel sizeThatFits:]
// Type encoding: {CGSize=dd}32@0:8{CGSize=dd}16
// Implementation: 0x1080aa434

// -[SCValdiLabel hitTest:withEvent:]
// Type encoding: @40@0:8{CGPoint=dd}16@32
// Implementation: 0x1080aa488

// -[SCValdiLabel pointInside:withEvent:]
// Type encoding: B40@0:8{CGPoint=dd}16@32
// Implementation: 0x1080aa554

// -[SCValdiLabel _needAttributedString]
// Type encoding: B16@0:8
// Implementation: 0x1080aa58c

// -[SCValdiLabel _isSelectable]
// Type encoding: B16@0:8
// Implementation: 0x1080aa5dc

// -[SCValdiLabel _updateInlineTextAttachmentsIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1080aa5ec

// -[SCValdiLabel _updateInlineTextChildFrames]
// Type encoding: v16@0:8
// Implementation: 0x1080aa638

// -[SCValdiLabel _updateInlineTextChildAnimations]
// Type encoding: v16@0:8
// Implementation: 0x1080aa770

// -[SCValdiLabel contentViewForInsertingValdiChildren]
// Type encoding: @16@0:8
// Implementation: 0x1080aa840

// -[SCValdiLabel valdi_setSelectable:]
// Type encoding: v20@0:8B16
// Implementation: 0x1080aa914

// -[SCValdiLabel valdi_setSelection:]
// Type encoding: B24@0:8@16
// Implementation: 0x1080aa968

// -[SCValdiLabel valdi_setOnSelectionChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080aab24

// -[SCValdiLabel valdi_setOnTextSelectionMenu:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080aab68

// -[SCValdiLabel valdi_setOnTextSelectionMenuAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080aabac

// -[SCValdiLabel _getAttributedTextOnTapGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x1080aabf0

// -[SCValdiLabel _removeAttributedTextOnTapGestureRecognizer]
// Type encoding: v16@0:8
// Implementation: 0x1080aad1c

// -[SCValdiLabel _addAttributedTextOnTapGestureRecognizer]
// Type encoding: v16@0:8
// Implementation: 0x1080aad64

// -[SCValdiLabel _updateAttributedTextIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1080aadd0

// -[SCValdiLabel requiresLayoutWhenAnimatingBounds]
// Type encoding: B16@0:8
// Implementation: 0x1080ab40c

// -[SCValdiLabel fontAttributes]
// Type encoding: @16@0:8
// Implementation: 0x1080ab414

// -[SCValdiLabel valdi_setFontManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080ab45c

// -[SCValdiLabel valdi_setFontAttributes:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080ab484

// -[SCValdiLabel valdi_setText:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080ab4cc

// -[SCValdiLabel valdi_setCustomUnderlineStyle:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080ab508

// -[SCValdiLabel _createTextGradientHelperIfNeeded]
// Type encoding: @16@0:8
// Implementation: 0x1080ab544

// -[SCValdiLabel valdi_setTextGradient:animator:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1080ab594

// -[SCValdiLabel valdi_layoutTextGradientLayerWithAnimator:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080ab6a0

// -[SCValdiLabel _updateTextGradientColorIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1080ab6b8

// -[SCValdiLabel _updateTextGradientLayerWithAnimator:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080ab6dc

// -[SCValdiLabel updateLabelMode:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1080ac144

// -[SCValdiLabel updateLabelMode:usesEffectsLayoutManager:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x1080ac14c

// -[SCValdiLabel _ensureTextLayoutViewWithUsesEffectsLayoutManager:]
// Type encoding: @20@0:8B16
// Implementation: 0x1080ac290

// -[SCValdiLabel _applySelectionStateToTextLayoutView]
// Type encoding: v16@0:8
// Implementation: 0x1080ac364

// -[SCValdiLabel _setNeedsAttributedTextUpdateForPendingSelectableTextLayoutViewIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1080ac3f8

// -[SCValdiLabel textLayoutViewIsRightToLeft:]
// Type encoding: B24@0:8@16
// Implementation: 0x1080ac434

// -[SCValdiLabel valdiContextForTextLayoutView:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080ac468

// -[SCValdiLabel valdiViewNodeForTextLayoutView:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080ac46c

// -[SCValdiLabel textLayoutViewDidInvalidateAnimatedTextProgress:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080ac470

// -[SCValdiLabel _clearAttributedText]
// Type encoding: v16@0:8
// Implementation: 0x1080ac474

// -[SCValdiLabel didMoveToValdiContext:viewNode:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1080ac590

// -[SCValdiLabel willEnqueueIntoValdiPool]
// Type encoding: B16@0:8
// Implementation: 0x1080ac5a4

// -[SCValdiLabel accessibilityLabel]
// Type encoding: @16@0:8
// Implementation: 0x1080ac608

// -[SCValdiLabel accessibilityTraits]
// Type encoding: Q16@0:8
// Implementation: 0x1080ac684

// -[SCValdiLabel .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1080ac6d0

// +[SCValdiLabel valdi_managesChildFrames]
// Type encoding: B16@0:8
// Implementation: 0x1080aa2b0

// +[SCValdiLabel measureSizeWithMaxSize:fontAttributes:fontManager:text:traitCollection:]
// Type encoding: {CGSize=dd}64@0:8{CGSize=dd}16@32@40@48@56
// Implementation: 0x1080aa580

// +[SCValdiLabel valdi_onMeasureWithAttributes:maxSize:fontManager:traitCollection:]
// Type encoding: {CGSize=dd}56@0:8@16{CGSize=dd}24@40@48
// Implementation: 0x1080ab714

// +[SCValdiLabel bindAttributes:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080ab808

// +[SCValdiLabel _valdiShadowComponents]
// Type encoding: @16@0:8
// Implementation: 0x1080ac0a0

@end
