// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSearchView
// Superclass: UIView
// Address: 0x112bdf708

@interface SCSearchView

// Property: searchButtonShadowView; attributes: T@"UIImageView",&,N,V_searchButtonShadowView
// Property: titleLabel; attributes: T@"UILabel",&,N,V_titleLabel
// Property: textField; attributes: T@"SCChatSearchTextField",&,N,V_textField
// Property: style; attributes: Tq,N,V_style
// Property: textFieldRightViewContainer; attributes: T@"UIView",&,N,V_textFieldRightViewContainer
// Property: clearButton; attributes: T@"SCSearchClearButton",&,N,V_clearButton
// Property: backButton; attributes: T@"SCGrowingButton",&,N,V_backButton
// Property: searchIconAccessoryImageView; attributes: T@"UIImageView",&,N,V_searchIconAccessoryImageView
// Property: delegate; attributes: T@"<SCSearchViewDelegate>",W,N,V_delegate
// Property: searchButton; attributes: T@"SCBarButton",R,N
// Property: searchButtonStroked; attributes: T@"SCBarButton",R,N
// Property: editable; attributes: TB,N,GisEditable,V_editable
// Property: autocompleteText; attributes: T@"NSString",C,N,V_autocompleteText
// Property: text; attributes: T@"NSString",C,N
// Property: placeholderText; attributes: T@"NSString",C,N,V_placeholderText
// Property: textFieldAlpha; attributes: Td,N
// Property: textFieldRightViewAlpha; attributes: Td,N,V_textFieldRightViewAlpha
// Property: textFieldClearButtonViewMode; attributes: Tq,N,V_textFieldClearButtonViewMode
// Property: showCloseButtonWhenEmpty; attributes: TB,N,V_showCloseButtonWhenEmpty
// Property: placeholderAlpha; attributes: Td,N,V_placeholderAlpha
// Property: shouldShowBackButton; attributes: TB,N,V_shouldShowBackButton
// Property: keyboardType; attributes: Tq,N,V_keyboardType
// Property: keyboardAppearance; attributes: Tq,N,V_keyboardAppearance
// Property: searchInputAccessoryView; attributes: T@"UIView",&,N
// Property: searchIconAccessoryImage; attributes: T@"UIImage",&,N
// Property: textFieldContainerView; attributes: T@"UIView",&,N,V_textFieldContainerView
// Property: rightView; attributes: T@"UIView",&,N,V_rightView
// Property: disableTextFieldFrameAutoUpdate; attributes: TB,N,V_disableTextFieldFrameAutoUpdate
// Property: textFieldFont; attributes: T@"UIFont",&,N,V_textFieldFont
// Property: editing; attributes: TB,N,GisEditing
// Property: searchButtonPercentStroked; attributes: Td,N,V_searchButtonPercentStroked
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSearchView initWithPlaceholderText:style:keyboardAppearance:]
// Type encoding: @40@0:8@16q24q32
// Implementation: 0x108fe631c

// -[SCSearchView initWithPlaceholderText:]
// Type encoding: @24@0:8@16
// Implementation: 0x108fe64f0

// -[SCSearchView _searchButtonOriginX]
// Type encoding: d16@0:8
// Implementation: 0x108fe64fc

// -[SCSearchView _makeSearchButton]
// Type encoding: @16@0:8
// Implementation: 0x108fe6520

// -[SCSearchView _layoutSearchButtonWithOriginX:]
// Type encoding: v24@0:8d16
// Implementation: 0x108fe66b0

// -[SCSearchView _makeSearchButtonStroked]
// Type encoding: @16@0:8
// Implementation: 0x108fe6740

// -[SCSearchView _layoutSearchButtonStrokedWithOriginX:]
// Type encoding: v24@0:8d16
// Implementation: 0x108fe6828

// -[SCSearchView setSearchButtonPercentStroked:]
// Type encoding: v24@0:8d16
// Implementation: 0x108fe68b8

// -[SCSearchView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x108fe6988

// -[SCSearchView pointInside:withEvent:]
// Type encoding: B40@0:8{CGPoint=dd}16@32
// Implementation: 0x108fe6e00

// -[SCSearchView sizeThatFits:]
// Type encoding: {CGSize=dd}32@0:8{CGSize=dd}16
// Implementation: 0x108fe6e38

// -[SCSearchView selectAllText]
// Type encoding: v16@0:8
// Implementation: 0x108fe6f3c

// -[SCSearchView performSearchButtonHighlightAnimation]
// Type encoding: v16@0:8
// Implementation: 0x108fe7034

// -[SCSearchView _updateClearButtonModeWithText:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fe70f8

// -[SCSearchView searchButton]
// Type encoding: @16@0:8
// Implementation: 0x108fe71fc

// -[SCSearchView searchButtonStroked]
// Type encoding: @16@0:8
// Implementation: 0x108fe7284

// -[SCSearchView text]
// Type encoding: @16@0:8
// Implementation: 0x108fe730c

// -[SCSearchView textFieldAlpha]
// Type encoding: d16@0:8
// Implementation: 0x108fe735c

// -[SCSearchView _textFieldColor]
// Type encoding: @16@0:8
// Implementation: 0x108fe736c

// -[SCSearchView _textFieldTintColor]
// Type encoding: @16@0:8
// Implementation: 0x108fe73fc

// -[SCSearchView setTextFieldFont:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fe748c

// -[SCSearchView textField]
// Type encoding: @16@0:8
// Implementation: 0x108fe7694

// -[SCSearchView titleLabel]
// Type encoding: @16@0:8
// Implementation: 0x108fe7928

// -[SCSearchView searchButtonShadowView]
// Type encoding: @16@0:8
// Implementation: 0x108fe7a08

// -[SCSearchView clearButton]
// Type encoding: @16@0:8
// Implementation: 0x108fe7ac4

// -[SCSearchView backButton]
// Type encoding: @16@0:8
// Implementation: 0x108fe7bbc

// -[SCSearchView textFieldRightViewContainer]
// Type encoding: @16@0:8
// Implementation: 0x108fe7d34

// -[SCSearchView searchInputAccessoryView]
// Type encoding: @16@0:8
// Implementation: 0x108fe7e54

// -[SCSearchView _placeholderAttributes]
// Type encoding: @16@0:8
// Implementation: 0x108fe7e64

// -[SCSearchView setPlaceholderText:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fe7f74

// -[SCSearchView setStyle:]
// Type encoding: v24@0:8q16
// Implementation: 0x108fe8040

// -[SCSearchView setPlaceholderAlpha:]
// Type encoding: v24@0:8d16
// Implementation: 0x108fe824c

// -[SCSearchView setText:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fe8340

// -[SCSearchView setTextWithoutUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fe8420

// -[SCSearchView setAutocompleteText:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fe8478

// -[SCSearchView setTextFieldAlpha:]
// Type encoding: v24@0:8d16
// Implementation: 0x108fe8668

// -[SCSearchView setRightView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fe87dc

// -[SCSearchView setTextFieldRightViewAlpha:]
// Type encoding: v24@0:8d16
// Implementation: 0x108fe88d4

// -[SCSearchView setTextFieldClearButtonViewMode:]
// Type encoding: v24@0:8q16
// Implementation: 0x108fe8920

// -[SCSearchView setShouldShowBackButton:]
// Type encoding: v20@0:8B16
// Implementation: 0x108fe89f0

// -[SCSearchView searchIconAccessoryImage]
// Type encoding: @16@0:8
// Implementation: 0x108fe8a60

// -[SCSearchView setSearchIconAccessoryImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fe8a70

// -[SCSearchView setKeyboardType:]
// Type encoding: v24@0:8q16
// Implementation: 0x108fe8c58

// -[SCSearchView setKeyboardAppearance:]
// Type encoding: v24@0:8q16
// Implementation: 0x108fe8c68

// -[SCSearchView setSearchInputAccessoryView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fe8c78

// -[SCSearchView setShowCloseButtonWhenEmpty:]
// Type encoding: v20@0:8B16
// Implementation: 0x108fe8ce0

// -[SCSearchView search:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fe8d44

// -[SCSearchView clearButtonTapped:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fe8d54

// -[SCSearchView backTapped:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fe8e48

// -[SCSearchView textFieldDidBeginEditing:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fe8ec8

// -[SCSearchView textFieldShouldBeginEditing:]
// Type encoding: B24@0:8@16
// Implementation: 0x108fe8f40

// -[SCSearchView textFieldDidEndEditing:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fe8fcc

// -[SCSearchView textFieldShouldReturn:]
// Type encoding: B24@0:8@16
// Implementation: 0x108fe904c

// -[SCSearchView textField:shouldChangeCharactersInRange:replacementString:]
// Type encoding: B48@0:8@16{_NSRange=QQ}24@40
// Implementation: 0x108fe9114

// -[SCSearchView textFieldShouldDeleteCharacter:]
// Type encoding: B24@0:8@16
// Implementation: 0x108fe9298

// -[SCSearchView setEditing:]
// Type encoding: v20@0:8B16
// Implementation: 0x108fe931c

// -[SCSearchView isEditing]
// Type encoding: B16@0:8
// Implementation: 0x108fe9334

// -[SCSearchView updatePercentOverscrolled:]
// Type encoding: v24@0:8d16
// Implementation: 0x108fe9344

// -[SCSearchView defaultSearchButtonPercentStroked]
// Type encoding: d16@0:8
// Implementation: 0x108fe93f0

// -[SCSearchView shouldLazyLoadTextField]
// Type encoding: B16@0:8
// Implementation: 0x108fe93f8

// -[SCSearchView loadTextField]
// Type encoding: v16@0:8
// Implementation: 0x108fe9400

// -[SCSearchView delegate]
// Type encoding: @16@0:8
// Implementation: 0x108fe946c

// -[SCSearchView setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fe948c

// -[SCSearchView isEditable]
// Type encoding: B16@0:8
// Implementation: 0x108fe94a0

// -[SCSearchView setEditable:]
// Type encoding: v20@0:8B16
// Implementation: 0x108fe94b0

// -[SCSearchView autocompleteText]
// Type encoding: @16@0:8
// Implementation: 0x108fe94c0

// -[SCSearchView placeholderText]
// Type encoding: @16@0:8
// Implementation: 0x108fe94d0

// -[SCSearchView textFieldRightViewAlpha]
// Type encoding: d16@0:8
// Implementation: 0x108fe94e0

// -[SCSearchView textFieldClearButtonViewMode]
// Type encoding: q16@0:8
// Implementation: 0x108fe94f0

// -[SCSearchView showCloseButtonWhenEmpty]
// Type encoding: B16@0:8
// Implementation: 0x108fe9500

// -[SCSearchView placeholderAlpha]
// Type encoding: d16@0:8
// Implementation: 0x108fe9510

// -[SCSearchView shouldShowBackButton]
// Type encoding: B16@0:8
// Implementation: 0x108fe9520

// -[SCSearchView keyboardType]
// Type encoding: q16@0:8
// Implementation: 0x108fe9530

// -[SCSearchView keyboardAppearance]
// Type encoding: q16@0:8
// Implementation: 0x108fe9540

// -[SCSearchView textFieldContainerView]
// Type encoding: @16@0:8
// Implementation: 0x108fe9550

// -[SCSearchView setTextFieldContainerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fe9560

// -[SCSearchView rightView]
// Type encoding: @16@0:8
// Implementation: 0x108fe95a0

// -[SCSearchView disableTextFieldFrameAutoUpdate]
// Type encoding: B16@0:8
// Implementation: 0x108fe95b0

// -[SCSearchView setDisableTextFieldFrameAutoUpdate:]
// Type encoding: v20@0:8B16
// Implementation: 0x108fe95c0

// -[SCSearchView textFieldFont]
// Type encoding: @16@0:8
// Implementation: 0x108fe95d0

// -[SCSearchView searchButtonPercentStroked]
// Type encoding: d16@0:8
// Implementation: 0x108fe95e0

// -[SCSearchView setSearchButtonShadowView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fe95f0

// -[SCSearchView setTitleLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fe9630

// -[SCSearchView setTextField:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fe9670

// -[SCSearchView style]
// Type encoding: q16@0:8
// Implementation: 0x108fe96b0

// -[SCSearchView setTextFieldRightViewContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fe96c0

// -[SCSearchView setClearButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fe9700

// -[SCSearchView setBackButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fe9740

// -[SCSearchView searchIconAccessoryImageView]
// Type encoding: @16@0:8
// Implementation: 0x108fe9780

// -[SCSearchView setSearchIconAccessoryImageView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fe9790

// -[SCSearchView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108fe97d0

@end
