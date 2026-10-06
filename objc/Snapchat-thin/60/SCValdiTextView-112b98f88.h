// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCValdiTextView
// Superclass: SCValdiView
// Address: 0x112b98f88

@interface SCValdiTextView

// Property: textValue; attributes: T@,&,N,V_textValue
// Property: fontAttributes; attributes: T@"SCValdiFontAttributes",&,N,V_fontAttributes
// Property: textMode; attributes: TQ,N,V_textMode
// Property: needAttributedTextUpdate; attributes: TB,N,V_needAttributedTextUpdate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCValdiTextView valdi_applySlowClipping:animator:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x1080b64c0

// -[SCValdiTextView initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x1080b652c

// -[SCValdiTextView _ensureAnimatedTextView]
// Type encoding: @16@0:8
// Implementation: 0x1080b671c

// -[SCValdiTextView _ensurePlaceholder]
// Type encoding: @16@0:8
// Implementation: 0x1080b68cc

// -[SCValdiTextView dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1080b6ae8

// -[SCValdiTextView didMoveToValdiContext:viewNode:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1080b6b8c

// -[SCValdiTextView willEnqueueIntoValdiPool]
// Type encoding: B16@0:8
// Implementation: 0x1080b6be0

// -[SCValdiTextView didMoveToSuperview]
// Type encoding: v16@0:8
// Implementation: 0x1080b6c88

// -[SCValdiTextView didMoveToWindow]
// Type encoding: v16@0:8
// Implementation: 0x1080b6cb8

// -[SCValdiTextView _applicationDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x1080b6cf0

// -[SCValdiTextView _windowDidBecomeKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080b6da8

// -[SCValdiTextView _applyPendingFocusedIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1080b6e08

// -[SCValdiTextView _moveSelectionToEndBeforeFocusIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1080b6e9c

// -[SCValdiTextView observeValueForKeyPath:ofObject:change:context:]
// Type encoding: v48@0:8@16@24@32^v40
// Implementation: 0x1080b6f3c

// -[SCValdiTextView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x1080b6f40

// -[SCValdiTextView scrollViewDidScroll:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080b6fd0

// -[SCValdiTextView _syncAnimatedTextOverlayContentOffset]
// Type encoding: v16@0:8
// Implementation: 0x1080b6fec

// -[SCValdiTextView _updateFrame]
// Type encoding: v16@0:8
// Implementation: 0x1080b7060

// -[SCValdiTextView sizeThatFits:]
// Type encoding: {CGSize=dd}32@0:8{CGSize=dd}16
// Implementation: 0x1080b7198

// -[SCValdiTextView _updateTextViewInset:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080b7288

// -[SCValdiTextView _updateContentInset]
// Type encoding: v16@0:8
// Implementation: 0x1080b7604

// -[SCValdiTextView _updatePlaceholderInset]
// Type encoding: v16@0:8
// Implementation: 0x1080b7664

// -[SCValdiTextView _updateOnLayoutIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1080b7674

// -[SCValdiTextView _updateInlineTextAttachmentsIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1080b786c

// -[SCValdiTextView _updateInlineTextChildFrames]
// Type encoding: v16@0:8
// Implementation: 0x1080b7990

// -[SCValdiTextView _updateInlineTextChildAnimations]
// Type encoding: v16@0:8
// Implementation: 0x1080b7aa8

// -[SCValdiTextView contentViewForInsertingValdiChildren]
// Type encoding: @16@0:8
// Implementation: 0x1080b7b50

// -[SCValdiTextView _updateEffectsLayoutManager]
// Type encoding: v16@0:8
// Implementation: 0x1080b7bd0

// -[SCValdiTextView _animatedTextEffectsLayoutManager]
// Type encoding: @16@0:8
// Implementation: 0x1080b7da8

// -[SCValdiTextView _startAnimatedTextDisplayLinkIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1080b7e00

// -[SCValdiTextView _stopAnimatedTextDisplayLink]
// Type encoding: v16@0:8
// Implementation: 0x1080b7eb0

// -[SCValdiTextView _animatedTextDisplayLinkDidFire:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080b7ee0

// -[SCValdiTextView _updateAnimatedTextOverlayWithAttributedString:isEnabled:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1080b7f34

// -[SCValdiTextView _applyTextOverflowAttributes]
// Type encoding: v16@0:8
// Implementation: 0x1080b829c

// -[SCValdiTextView _applyNumberOfLinesAttributes]
// Type encoding: v16@0:8
// Implementation: 0x1080b835c

// -[SCValdiTextView onTapFunctionAtLocation:]
// Type encoding: @32@0:8{CGPoint=dd}16
// Implementation: 0x1080b83f8

// -[SCValdiTextView _getAttributedTextOnTapGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x1080b8540

// -[SCValdiTextView _removeAttributedTextOnTapGestureRecognizer]
// Type encoding: v16@0:8
// Implementation: 0x1080b8658

// -[SCValdiTextView _addAttributedTextOnTapGestureRecognizer]
// Type encoding: v16@0:8
// Implementation: 0x1080b86a0

// -[SCValdiTextView notifyTextValueDidChange]
// Type encoding: v16@0:8
// Implementation: 0x1080b8710

// -[SCValdiTextView updateLabelMode:]
// Type encoding: B24@0:8Q16
// Implementation: 0x1080b885c

// -[SCValdiTextView _needAttributedString]
// Type encoding: B16@0:8
// Implementation: 0x1080b886c

// -[SCValdiTextView _processedTextConfigurationWithFontAttributes:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080b88a8

// -[SCValdiTextView _updateAttributedTextIfNeeded]
// Type encoding: B16@0:8
// Implementation: 0x1080b89c8

// -[SCValdiTextView _nearestTextAnimationGroup]
// Type encoding: @16@0:8
// Implementation: 0x1080b8f98

// -[SCValdiTextView _updateTextAnimationGroupRegistration]
// Type encoding: v16@0:8
// Implementation: 0x1080b9018

// -[SCValdiTextView _updateTextAnimationGroupContext]
// Type encoding: v16@0:8
// Implementation: 0x1080b90c8

// -[SCValdiTextView valdi_textAnimationPartCount]
// Type encoding: Q16@0:8
// Implementation: 0x1080b914c

// -[SCValdiTextView valdi_applyTextAnimationCoordinator:basePartIndex:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1080b9158

// -[SCValdiTextView valdi_clearTextAnimationGroupRegistration]
// Type encoding: v16@0:8
// Implementation: 0x1080b91e0

// -[SCValdiTextView valdi_prepareGroupedTextAnimationFrame]
// Type encoding: v16@0:8
// Implementation: 0x1080b9218

// -[SCValdiTextView valdi_invalidateGroupedTextAnimationFrame]
// Type encoding: B16@0:8
// Implementation: 0x1080b9228

// -[SCValdiTextView _setGravity:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1080b9270

// -[SCValdiTextView _setIgnoreNewlines:]
// Type encoding: v20@0:8B16
// Implementation: 0x1080b92a0

// -[SCValdiTextView fontAttributes]
// Type encoding: @16@0:8
// Implementation: 0x1080b92b0

// -[SCValdiTextView valdi_setFontAttributes:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080b9344

// -[SCValdiTextView valdi_setCustomUnderlineStyle:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080b938c

// -[SCValdiTextView valdi_setTextOverflow:]
// Type encoding: B24@0:8@16
// Implementation: 0x1080b93f8

// -[SCValdiTextView valdi_setValue:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080b94f8

// -[SCValdiTextView valdi_setCharacterLimit:]
// Type encoding: B24@0:8@16
// Implementation: 0x1080b9630

// -[SCValdiTextView valdi_setTextGravity:]
// Type encoding: B24@0:8@16
// Implementation: 0x1080b9670

// -[SCValdiTextView valdi_setReturnType:]
// Type encoding: B24@0:8@16
// Implementation: 0x1080b9704

// -[SCValdiTextView _updateTextViewInteractionMode]
// Type encoding: v16@0:8
// Implementation: 0x1080b9788

// -[SCValdiTextView valdi_setAutocapitalization:]
// Type encoding: B24@0:8@16
// Implementation: 0x1080b9800

// -[SCValdiTextView valdi_setAutocorrection:]
// Type encoding: B24@0:8@16
// Implementation: 0x1080b9814

// -[SCValdiTextView valdi_setKeyboardAppearance:]
// Type encoding: B24@0:8@16
// Implementation: 0x1080b9828

// -[SCValdiTextView valdi_setTextDirection:]
// Type encoding: B24@0:8@16
// Implementation: 0x1080b983c

// -[SCValdiTextView valdi_setEnabled:]
// Type encoding: B20@0:8B16
// Implementation: 0x1080b9850

// -[SCValdiTextView valdi_setSelectable:]
// Type encoding: B20@0:8B16
// Implementation: 0x1080b9888

// -[SCValdiTextView valdi_setFocused:]
// Type encoding: B20@0:8B16
// Implementation: 0x1080b98ac

// -[SCValdiTextView valdi_setClosesWhenReturnKeyPressed:]
// Type encoding: B20@0:8B16
// Implementation: 0x1080b9978

// -[SCValdiTextView valdi_setFontManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080b9984

// -[SCValdiTextView valdi_setPlaceholder:]
// Type encoding: B24@0:8@16
// Implementation: 0x1080b99a8

// -[SCValdiTextView valdi_setPlaceholderColor:]
// Type encoding: B24@0:8@16
// Implementation: 0x1080b99fc

// -[SCValdiTextView valdi_setTintColor:]
// Type encoding: B24@0:8@16
// Implementation: 0x1080b9a4c

// -[SCValdiTextView valdi_setSelectTextOnFocus:]
// Type encoding: B20@0:8B16
// Implementation: 0x1080b9a70

// -[SCValdiTextView valdi_setScrollToEndBeforeFocus:]
// Type encoding: B20@0:8B16
// Implementation: 0x1080b9a7c

// -[SCValdiTextView valdi_setOnWillChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080b9a88

// -[SCValdiTextView valdi_setOnChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080b9aac

// -[SCValdiTextView valdi_setOnEditBegin:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080b9ad0

// -[SCValdiTextView valdi_setOnEditEnd:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080b9af4

// -[SCValdiTextView valdi_setOnReturn:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080b9b18

// -[SCValdiTextView valdi_setOnWillDelete:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080b9b3c

// -[SCValdiTextView valdi_setOnSelectionChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080b9b60

// -[SCValdiTextView valdi_setOnTextSelectionMenu:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080b9b84

// -[SCValdiTextView valdi_setOnTextSelectionMenuAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080b9bb4

// -[SCValdiTextView _applySelectionStart:selectionEnd:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x1080b9bd8

// -[SCValdiTextView valdi_setSelection:]
// Type encoding: B24@0:8@16
// Implementation: 0x1080b9c78

// -[SCValdiTextView valdi_setTextShadow:]
// Type encoding: B24@0:8@16
// Implementation: 0x1080b9de4

// -[SCValdiTextView valdi_resetTextShadow]
// Type encoding: v16@0:8
// Implementation: 0x1080b9e68

// -[SCValdiTextView _createTextGradientHelperIfNeeded]
// Type encoding: @16@0:8
// Implementation: 0x1080b9ec8

// -[SCValdiTextView valdi_setTextGradient:animator:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1080b9f10

// -[SCValdiTextView valdi_layoutTextGradientLayerWithAnimator:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080ba024

// -[SCValdiTextView _updateTextGradientColorIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1080ba03c

// -[SCValdiTextView _updateTextGradientLayerWithAnimator:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080ba068

// -[SCValdiTextView valdi_setEnableInlinePredictions:]
// Type encoding: B20@0:8B16
// Implementation: 0x1080ba0b4

// -[SCValdiTextView valdi_setBackgroundEffectColor:]
// Type encoding: B24@0:8@16
// Implementation: 0x1080ba0f0

// -[SCValdiTextView valdi_setBackgroundEffectBorderRadius:]
// Type encoding: B24@0:8d16
// Implementation: 0x1080ba148

// -[SCValdiTextView valdi_setBackgroundEffectPadding:]
// Type encoding: B24@0:8d16
// Implementation: 0x1080ba184

// -[SCValdiTextView textView:shouldChangeTextInRange:replacementText:]
// Type encoding: B48@0:8@16{_NSRange=QQ}24@40
// Implementation: 0x1080bb0b4

// -[SCValdiTextView textViewDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080bb3c0

// -[SCValdiTextView textViewDidBeginEditing:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080bb870

// -[SCValdiTextView textViewDidEndEditing:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080bb994

// -[SCValdiTextView _customEditMenuActionsForTextRange:]
// Type encoding: @32@0:8{_NSRange=QQ}16
// Implementation: 0x1080bbafc

// -[SCValdiTextView _performTextSelectionMenuActionWithID:range:]
// Type encoding: v40@0:8@16{_NSRange=QQ}24
// Implementation: 0x1080bbddc

// -[SCValdiTextView _editMenuForTextRange:suggestedActions:]
// Type encoding: @40@0:8{_NSRange=QQ}16@32
// Implementation: 0x1080bbe5c

// -[SCValdiTextView textView:editMenuForTextInRanges:suggestedActions:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1080bbf24

// -[SCValdiTextView textView:editMenuForTextInRange:suggestedActions:]
// Type encoding: @48@0:8@16{_NSRange=QQ}24@40
// Implementation: 0x1080bc074

// -[SCValdiTextView textViewDidChangeSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080bc084

// -[SCValdiTextView textStorage:didProcessEditing:range:changeInLength:]
// Type encoding: v56@0:8@16Q24{_NSRange=QQ}32q48
// Implementation: 0x1080bc220

// -[SCValdiTextView isAccessibilityElement]
// Type encoding: B16@0:8
// Implementation: 0x1080bc244

// -[SCValdiTextView accessibilityLabel]
// Type encoding: @16@0:8
// Implementation: 0x1080bc24c

// -[SCValdiTextView accessibilityHint]
// Type encoding: @16@0:8
// Implementation: 0x1080bc2a0

// -[SCValdiTextView accessibilityValue]
// Type encoding: @16@0:8
// Implementation: 0x1080bc2f4

// -[SCValdiTextView accessibilityTraits]
// Type encoding: Q16@0:8
// Implementation: 0x1080bc348

// -[SCValdiTextView textValue]
// Type encoding: @16@0:8
// Implementation: 0x1080bc358

// -[SCValdiTextView setTextValue:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080bc364

// -[SCValdiTextView setFontAttributes:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080bc394

// -[SCValdiTextView textMode]
// Type encoding: Q16@0:8
// Implementation: 0x1080bc3c4

// -[SCValdiTextView setTextMode:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1080bc3d0

// -[SCValdiTextView needAttributedTextUpdate]
// Type encoding: B16@0:8
// Implementation: 0x1080bc3e0

// -[SCValdiTextView setNeedAttributedTextUpdate:]
// Type encoding: v20@0:8B16
// Implementation: 0x1080bc3f0

// -[SCValdiTextView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1080bc400

// +[SCValdiTextView valdi_managesChildFrames]
// Type encoding: B16@0:8
// Implementation: 0x1080b64b8

// +[SCValdiTextView measureSizeWithMaxSize:fontAttributes:fontManager:text:placeholder:backgroundEffectPadding:traitCollection:]
// Type encoding: {CGSize=dd}80@0:8{CGSize=dd}16@32@40@48@56d64@72
// Implementation: 0x1080ba1c0

// +[SCValdiTextView valdi_onMeasureWithAttributes:maxSize:fontManager:traitCollection:]
// Type encoding: {CGSize=dd}56@0:8@16{CGSize=dd}24@40@48
// Implementation: 0x1080ba2d0

// +[SCValdiTextView bindAttributes:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080ba42c

@end
