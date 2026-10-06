// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCHeader
// Superclass: UIView
// Address: 0x112c746c8

@interface SCHeader

// Property: bottomBorderedView; attributes: T@"SCBottomBorderedView",&,N,V_bottomBorderedView
// Property: style; attributes: TQ,N,V_style
// Property: shapeLayer; attributes: T@"CAShapeLayer",R,N
// Property: xButton; attributes: T@"UIButton",&,N,V_xButton
// Property: headerViewToUpdate; attributes: T@"UIView",&,N,V_headerViewToUpdate
// Property: headerTrailingAccessoryImageViews; attributes: T@"NSMutableArray",&,N,V_headerTrailingAccessoryImageViews
// Property: headerTrailingAccessoryLeadingConstraints; attributes: T@"NSMutableArray",&,N,V_headerTrailingAccessoryLeadingConstraints
// Property: dataSource; attributes: T@"<SCHeaderDataSource>",W,N,V_dataSource
// Property: delegate; attributes: T@"<SCHeaderDelegate>",W,N,V_delegate
// Property: leftButton; attributes: T@"UIButton",&,N,V_leftButton
// Property: rightButton; attributes: T@"UIButton",&,N,V_rightButton
// Property: borderColor; attributes: T@"UIColor",&,N,V_borderColor
// Property: borderThickness; attributes: Td,N,V_borderThickness
// Property: text; attributes: T@"NSString",&,N
// Property: centerLabelNoButtonOffset; attributes: TB,N,V_centerLabelNoButtonOffset
// Property: topInset; attributes: Td,R,N,V_topInset
// Property: height; attributes: Td,R,N,V_height
// Property: corners; attributes: TQ,N,V_corners
// Property: headerLabel; attributes: T@"UILabel",&,N,V_headerLabel
// Property: headerTextField; attributes: T@"UITextField",R,N,V_headerTextField
// Property: headerTextView; attributes: T@"SCHeaderTextView",R,N,V_headerTextView
// Property: headerSearchBar; attributes: T@"SCSearchBar",R,N,V_headerSearchBar
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCHeader initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10b2b4a50

// -[SCHeader initWithFrame:style:withBottomBorder:inset:cardViewStyle:]
// Type encoding: @76@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16Q48B56d60Q68
// Implementation: 0x10b2b4abc

// -[SCHeader initWithStyle:withBottomBorder:]
// Type encoding: @28@0:8Q16B24
// Implementation: 0x10b2b4ccc

// -[SCHeader initWithStyle:withBottomBorder:cardViewStyle:]
// Type encoding: @36@0:8Q16B24Q28
// Implementation: 0x10b2b4cd4

// -[SCHeader initWithBottomBorder]
// Type encoding: @16@0:8
// Implementation: 0x10b2b4d78

// -[SCHeader initWithBottomBorderAndWhiteCardViewForX]
// Type encoding: @16@0:8
// Implementation: 0x10b2b4d84

// -[SCHeader initWithBottomBorderAndWhiteCardViewForXWithStyle:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10b2b4d8c

// -[SCHeader initWithoutBottomBorder]
// Type encoding: @16@0:8
// Implementation: 0x10b2b4d98

// -[SCHeader initWithBottomBorderAndWhiteCardViewForXWithHeaderCardCornerRadius:]
// Type encoding: @24@0:8d16
// Implementation: 0x10b2b4da4

// -[SCHeader initWithoutInset]
// Type encoding: @16@0:8
// Implementation: 0x10b2b4dd0

// -[SCHeader intrinsicContentSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10b2b4e6c

// -[SCHeader layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x10b2b4ed0

// -[SCHeader traitCollectionDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2b5228

// -[SCHeader _layoutHeaderView]
// Type encoding: v16@0:8
// Implementation: 0x10b2b5340

// -[SCHeader _textSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10b2b5488

// -[SCHeader _cachedAttributedPlaceholderSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10b2b5650

// -[SCHeader _font]
// Type encoding: @16@0:8
// Implementation: 0x10b2b56f0

// -[SCHeader _headerContentViewWidth]
// Type encoding: d16@0:8
// Implementation: 0x10b2b573c

// -[SCHeader _setupBottomBorder]
// Type encoding: v16@0:8
// Implementation: 0x10b2b5854

// -[SCHeader _setupHeaderLabel]
// Type encoding: v16@0:8
// Implementation: 0x10b2b58b4

// -[SCHeader _setupTextField]
// Type encoding: v16@0:8
// Implementation: 0x10b2b5a60

// -[SCHeader _setupTextView]
// Type encoding: v16@0:8
// Implementation: 0x10b2b5b6c

// -[SCHeader _setupSearchBar]
// Type encoding: v16@0:8
// Implementation: 0x10b2b5cc4

// -[SCHeader _setupCardView]
// Type encoding: v16@0:8
// Implementation: 0x10b2b5d48

// -[SCHeader _setupLeftButton]
// Type encoding: v16@0:8
// Implementation: 0x10b2b5e1c

// -[SCHeader _setupRightButton]
// Type encoding: v16@0:8
// Implementation: 0x10b2b6180

// -[SCHeader _shouldAddCardView]
// Type encoding: B16@0:8
// Implementation: 0x10b2b64bc

// -[SCHeader xButton]
// Type encoding: @16@0:8
// Implementation: 0x10b2b64f4

// -[SCHeader shapeLayer]
// Type encoding: @16@0:8
// Implementation: 0x10b2b6604

// -[SCHeader setText:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2b6618

// -[SCHeader text]
// Type encoding: @16@0:8
// Implementation: 0x10b2b66e0

// -[SCHeader setBorderColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2b67c4

// -[SCHeader setBorderThickness:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b2b6854

// -[SCHeader setCorners:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b2b68d0

// -[SCHeader setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2b68e0

// -[SCHeader setDataSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2b6974

// -[SCHeader reloadData]
// Type encoding: v16@0:8
// Implementation: 0x10b2b6a10

// -[SCHeader _trailingAccessoryImageViewAtIndex:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10b2b6adc

// -[SCHeader _trailingAccessoryImagesFromDataSource]
// Type encoding: @16@0:8
// Implementation: 0x10b2b6e64

// -[SCHeader _usedTextRectForTrailingAccessories]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x10b2b707c

// -[SCHeader _layoutHeaderTrailingAccessories]
// Type encoding: v16@0:8
// Implementation: 0x10b2b71e4

// -[SCHeader _updateHeaderViewBadge]
// Type encoding: v16@0:8
// Implementation: 0x10b2b7490

// -[SCHeader _updateHeaderView]
// Type encoding: v16@0:8
// Implementation: 0x10b2b7678

// -[SCHeader _updateHeaderLabel]
// Type encoding: v16@0:8
// Implementation: 0x10b2b7770

// -[SCHeader _updateHeaderTextField]
// Type encoding: v16@0:8
// Implementation: 0x10b2b7844

// -[SCHeader _updateHeaderTextView]
// Type encoding: v16@0:8
// Implementation: 0x10b2b7cdc

// -[SCHeader _updateHeaderSearchBar]
// Type encoding: v16@0:8
// Implementation: 0x10b2b8138

// -[SCHeader _updateButtons]
// Type encoding: v16@0:8
// Implementation: 0x10b2b81e4

// -[SCHeader _adjustFontIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10b2b836c

// -[SCHeader _adjustFontSizeIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10b2b8470

// -[SCHeader resignFirstResponder]
// Type encoding: B16@0:8
// Implementation: 0x10b2b8680

// -[SCHeader _textFieldEditingChanged]
// Type encoding: v16@0:8
// Implementation: 0x10b2b8730

// -[SCHeader textField:shouldChangeCharactersInRange:replacementString:]
// Type encoding: B48@0:8@16{_NSRange=QQ}24@40
// Implementation: 0x10b2b87b4

// -[SCHeader _textFieldEditingDidEnd]
// Type encoding: v16@0:8
// Implementation: 0x10b2b88f8

// -[SCHeader _textFieldEditingDidBegin]
// Type encoding: v16@0:8
// Implementation: 0x10b2b898c

// -[SCHeader _textFieldEditingDidEndOnExit]
// Type encoding: v16@0:8
// Implementation: 0x10b2b8a10

// -[SCHeader _showXButtonIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10b2b8aa4

// -[SCHeader textView:shouldChangeTextInRange:replacementText:]
// Type encoding: B48@0:8@16{_NSRange=QQ}24@40
// Implementation: 0x10b2b8c24

// -[SCHeader textViewDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2b8dc4

// -[SCHeader textViewDidBeginEditing:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2b8e50

// -[SCHeader textViewDidEndEditing:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2b8f44

// -[SCHeader textView:shouldInteractWithTextAttachment:inRange:interaction:]
// Type encoding: B56@0:8@16@24{_NSRange=QQ}32q48
// Implementation: 0x10b2b9058

// -[SCHeader leftButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x10b2b9078

// -[SCHeader rightButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x10b2b90f4

// -[SCHeader leftButtonWidth]
// Type encoding: d16@0:8
// Implementation: 0x10b2b9170

// -[SCHeader rightButtonWidth]
// Type encoding: d16@0:8
// Implementation: 0x10b2b91fc

// -[SCHeader additionalXOffsetForHeader]
// Type encoding: d16@0:8
// Implementation: 0x10b2b9208

// -[SCHeader xButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x10b2b9290

// -[SCHeader dataSource]
// Type encoding: @16@0:8
// Implementation: 0x10b2b930c

// -[SCHeader delegate]
// Type encoding: @16@0:8
// Implementation: 0x10b2b932c

// -[SCHeader leftButton]
// Type encoding: @16@0:8
// Implementation: 0x10b2b934c

// -[SCHeader setLeftButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2b935c

// -[SCHeader rightButton]
// Type encoding: @16@0:8
// Implementation: 0x10b2b939c

// -[SCHeader setRightButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2b93ac

// -[SCHeader borderColor]
// Type encoding: @16@0:8
// Implementation: 0x10b2b93ec

// -[SCHeader borderThickness]
// Type encoding: d16@0:8
// Implementation: 0x10b2b93fc

// -[SCHeader centerLabelNoButtonOffset]
// Type encoding: B16@0:8
// Implementation: 0x10b2b940c

// -[SCHeader setCenterLabelNoButtonOffset:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b2b941c

// -[SCHeader topInset]
// Type encoding: d16@0:8
// Implementation: 0x10b2b942c

// -[SCHeader height]
// Type encoding: d16@0:8
// Implementation: 0x10b2b943c

// -[SCHeader corners]
// Type encoding: Q16@0:8
// Implementation: 0x10b2b944c

// -[SCHeader headerLabel]
// Type encoding: @16@0:8
// Implementation: 0x10b2b945c

// -[SCHeader setHeaderLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2b946c

// -[SCHeader headerTextField]
// Type encoding: @16@0:8
// Implementation: 0x10b2b94ac

// -[SCHeader headerTextView]
// Type encoding: @16@0:8
// Implementation: 0x10b2b94bc

// -[SCHeader headerSearchBar]
// Type encoding: @16@0:8
// Implementation: 0x10b2b94cc

// -[SCHeader bottomBorderedView]
// Type encoding: @16@0:8
// Implementation: 0x10b2b94dc

// -[SCHeader setBottomBorderedView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2b94ec

// -[SCHeader style]
// Type encoding: Q16@0:8
// Implementation: 0x10b2b952c

// -[SCHeader setStyle:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b2b953c

// -[SCHeader setXButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2b954c

// -[SCHeader headerViewToUpdate]
// Type encoding: @16@0:8
// Implementation: 0x10b2b958c

// -[SCHeader setHeaderViewToUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2b959c

// -[SCHeader headerTrailingAccessoryImageViews]
// Type encoding: @16@0:8
// Implementation: 0x10b2b95dc

// -[SCHeader setHeaderTrailingAccessoryImageViews:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2b95ec

// -[SCHeader headerTrailingAccessoryLeadingConstraints]
// Type encoding: @16@0:8
// Implementation: 0x10b2b962c

// -[SCHeader setHeaderTrailingAccessoryLeadingConstraints:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2b963c

// -[SCHeader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b2b967c

// +[SCHeader layerClass]
// Type encoding: #16@0:8
// Implementation: 0x10b2b4cc0

// +[SCHeader reservedWidthForTitleTrailingAccessoryCount:]
// Type encoding: d24@0:8Q16
// Implementation: 0x10b2b6608

@end
